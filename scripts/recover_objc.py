#!/usr/bin/env python3
"""Read Objective-C metadata from this unencrypted arm64 Mach-O; never execute it.

Layout references: Apple's objc4 objc-runtime-new.h and Mach-O loader.h.
Outputs are metadata-derived declarations, not the author's original headers.
"""
import argparse, collections, hashlib, json, pathlib, re, struct

class MachO:
    def __init__(self, data):
        self.data=data; self.segments=[]; self.sections=[]; self.binds={}; self.commands=[]
        if data[:4]!=bytes.fromhex('cffaedfe'): raise ValueError('Expected little-endian 64-bit Mach-O')
        ncmds, sizeofcmds=struct.unpack_from('<II',data,16); offset=32
        if offset+sizeofcmds>len(data):raise ValueError('Invalid load commands')
        for _ in range(ncmds):
            command,size=struct.unpack_from('<II',data,offset)
            if size<8 or offset+size>32+sizeofcmds:raise ValueError('Invalid load command size')
            self.commands.append((command,offset,size))
            if command==0x19:
                name=data[offset+8:offset+24].split(b'\0')[0].decode()
                vm,vms,fileoff,filesz=struct.unpack_from('<QQQQ',data,offset+24)
                self.segments.append({'name':name,'vmaddr':vm,'vmsize':vms,'fileoff':fileoff,'filesize':filesz})
                count=struct.unpack_from('<I',data,offset+64)[0]
                for i in range(count):
                    s=offset+72+i*80
                    sn=data[s:s+16].split(b'\0')[0].decode(); sg=data[s+16:s+32].split(b'\0')[0].decode()
                    addr,length,off=struct.unpack_from('<QQI',data,s+32)
                    self.sections.append({'name':sn,'segment':sg,'address':addr,'size':length,'offset':off})
            offset+=size
        for command,offset,size in self.commands:
            if command in (0x22,0x80000022):
                fields=struct.unpack_from('<10I',data,offset+8)
                for start,length in ((fields[2],fields[3]),(fields[4],fields[5]),(fields[6],fields[7])):
                    if length:self.read_binds(start,length)
    def fileoff(self,address):
        for s in self.segments:
            if s['vmaddr']<=address<s['vmaddr']+s['filesize']:
                off=s['fileoff']+address-s['vmaddr']
                if off<len(self.data):return off
        raise ValueError('Unmapped VM address '+hex(address))
    def u32(self,address):return struct.unpack_from('<I',self.data,self.fileoff(address))[0]
    def i32(self,address):return struct.unpack_from('<i',self.data,self.fileoff(address))[0]
    def u64(self,address):return struct.unpack_from('<Q',self.data,self.fileoff(address))[0]
    def cstr(self,address):
        if not address:return ''
        off=self.fileoff(address);end=self.data.find(b'\0',off)
        if end<0 or end-off>65536:raise ValueError('Invalid C string')
        return self.data[off:end].decode('utf-8','replace')
    def ptrs(self,name):
        out=[]
        for s in self.sections:
            if s['name']==name:
                out.extend(self.u64(a) for a in range(s['address'],s['address']+s['size'],8))
        return out
    def read_binds(self,start,length):
        b=self.data; p=start;end=start+length;seg=0;offset=0;symbol=''
        def leb(signed=False):
            nonlocal p
            value=0;shift=0
            while True:
                x=b[p];p+=1;value|=(x&127)<<shift;shift+=7
                if not x&128:break
                if shift>70:raise ValueError('Invalid LEB128')
            if signed and x&64:value-=1<<shift
            return value
        def bind():
            if seg<len(self.segments):
                # dyld's offset/address arithmetic is uint64_t. ULEB128
                # deltas can wrap; Python integers must explicitly do so too.
                address=(self.segments[seg]['vmaddr']+offset)&0xffffffffffffffff
                try:self.fileoff(address)
                except ValueError:return
                self.binds[address]=symbol
        while p<end:
            x=b[p];p+=1;op=x&240;imm=x&15
            if op==0:continue
            elif op in (0x10,0x30,0x50):pass
            elif op==0x20:leb()
            elif op==0x40:
                stop=b.index(0,p);symbol=b[p:stop].decode(errors='replace');p=stop+1
            elif op==0x60:leb(True)
            elif op==0x70:seg=imm;offset=leb()
            elif op==0x80:offset+=leb()
            elif op==0x90:bind();offset+=8
            elif op==0xa0:bind();offset+=8+leb()
            elif op==0xb0:bind();offset+=8+imm*8
            elif op==0xc0:
                count=leb();skip=leb()
                for _ in range(count):bind();offset+=8+skip
            else:raise ValueError('Unsupported dyld bind opcode '+hex(op))
    def methods(self,address,kind):
        if not address:return []
        flags=self.u32(address); count=self.u32(address+4);relative=bool(flags&0x80000000);direct=bool(flags&0x40000000)
        stride=flags&0xffff;stride&=~3
        if count>20000 or stride<(12 if relative else 24):raise ValueError('Invalid method list')
        out=[]
        for i in range(count):
            a=address+8+i*stride
            if relative:
                nameptr=a+self.i32(a)
                if not direct:nameptr=self.u64(nameptr)
                types=a+4+self.i32(a+4);imp=a+8+self.i32(a+8)
            else:nameptr=self.u64(a);types=self.u64(a+8);imp=self.u64(a+16)
            out.append({'kind':kind,'selector':self.cstr(nameptr),'type_encoding':self.cstr(types),'implementation':hex(imp),'entry_address':hex(a)})
        return out
    def properties(self,address):
        if not address:return []
        stride=self.u32(address);count=self.u32(address+4)
        if count>20000 or stride<16:raise ValueError('Invalid property list')
        return [{'name':self.cstr(self.u64(address+8+i*stride)),'attributes':self.cstr(self.u64(address+16+i*stride))} for i in range(count)]
    def ivars(self,address):
        if not address:return []
        stride=self.u32(address);count=self.u32(address+4)
        if count>20000 or stride<32:raise ValueError('Invalid ivar list')
        out=[]
        for i in range(count):
            a=address+8+i*stride; offptr=self.u64(a)
            out.append({'name':self.cstr(self.u64(a+8)),'type_encoding':self.cstr(self.u64(a+16)),'offset':self.u32(offptr) if offptr else None,'alignment':self.u32(a+24),'size':self.u32(a+28)})
        return out
    def class_ro(self,address):return self.u64(address+32)&~7
    def class_name(self,address):
        return self.cstr(self.u64(self.class_ro(address)+24)) if address else ''
    def classes(self):
        out=[]
        for a in self.ptrs('__objc_classlist'):
            ro=self.class_ro(a);meta=self.u64(a);mro=self.class_ro(meta)
            superclass=self.u64(a+8)
            supername=self.class_name(superclass) if superclass else self.binds.get(a+8,'').removeprefix('_OBJC_CLASS_$_')
            out.append({'name':self.cstr(self.u64(ro+24)),'address':hex(a),'superclass':supername or None,'instance_size':self.u32(ro+8),'methods':self.methods(self.u64(ro+32),'-')+self.methods(self.u64(mro+32),'+'),'ivars':self.ivars(self.u64(ro+48)),'properties':self.properties(self.u64(ro+64))})
        return out
    def categories(self):
        out=[]
        for a in self.ptrs('__objc_catlist'):
            cls=self.u64(a+8)
            out.append({'name':self.cstr(self.u64(a)),'class':self.class_name(cls) if cls else self.binds.get(a+8,'').removeprefix('_OBJC_CLASS_$_'),'address':hex(a),'methods':self.methods(self.u64(a+16),'-')+self.methods(self.u64(a+24),'+'),'properties':self.properties(self.u64(a+40))})
        return out

TYPES={'v':'void','c':'signed char','C':'unsigned char','s':'short','S':'unsigned short','i':'int','I':'unsigned int','l':'long','L':'unsigned long','q':'long long','Q':'unsigned long long','f':'float','d':'double','B':'BOOL',':':'SEL','#':'Class','?':'void','*':'char *'}
def read_type(s,p=0):
    while p<len(s) and s[p] in 'rnNoORVA':p+=1
    if p>=len(s):return 'id',p
    c=s[p];p+=1
    if c=='@':
        if p<len(s) and s[p]=='?':return 'id /* block */',p+1
        if p<len(s) and s[p]=='"':
            end=s.index('"',p+1);name=s[p+1:end];name=name.split('<')[0]
            return (name+' *' if re.fullmatch(r'[A-Za-z_]\w*',name) else 'id'),end+1
        return 'id',p
    if c=='^':
        t,p=read_type(s,p);return t+' *',p
    if c in '{([':
        closing={'{':'}','(':')','[':']'}[c];start=p;depth=1
        while p<len(s) and depth:
            if s[p]==c:depth+=1
            if s[p]==closing:depth-=1
            p+=1
        name=s[start:p-1].split('=')[0]
        if c=='{' and re.fullmatch(r'[A-Za-z_]\w*',name):return 'struct '+name,p
        return 'void * /* aggregate '+name.replace('*/','')+' */',p
    if c=='b':
        while p<len(s) and s[p].isdigit():p+=1
        return 'unsigned int',p
    return TYPES.get(c,'id /* unknown '+c+' */'),p
def method_decl(m):
    s=m['type_encoding'];p=0;ts=[]
    while p<len(s):
        t,p=read_type(s,p);ts.append(t)
        while p<len(s) and (s[p].isdigit() or s[p] in '+-'):p+=1
    sel=m['selector'];pieces=sel.split(':')
    if not all(re.fullmatch(r'[A-Za-z_]\w*',v) for v in pieces if v):return '// '+m['kind']+' '+sel+' (raw encoding: '+s+')'
    n=sel.count(':');args=ts[3:]
    if n:
        rest=' '.join(pieces[i]+':('+ (args[i] if i<len(args) else 'id') +')arg'+str(i) for i in range(n))
    else:rest=sel
    return m['kind']+' ('+(ts[0] if ts else 'id')+')'+rest+';'
def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('executable',type=pathlib.Path);ap.add_argument('output',type=pathlib.Path);a=ap.parse_args();a.output.mkdir(parents=True,exist_ok=True)
    b=a.executable.read_bytes();m=MachO(b);classes=m.classes();cats=m.categories();headers=a.output/'headers';headers.mkdir(exist_ok=True)
    payload={'executable_sha256':hashlib.sha256(b).hexdigest(),'declaration_origin':'Objective-C runtime metadata; original argument names and source formatting are unavailable','classes':classes,'categories':cats,'segments':m.segments,'sections':m.sections}
    (a.output/'objc-metadata.json').write_text(json.dumps(payload,indent=2,ensure_ascii=False)+'\n')
    rows=['address\tclass\tkind\tselector\ttype_encoding']
    for c in classes:
        name=c['name'];sup=c['superclass'] or 'NSObject'
        lines=['// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.','// ESign 5.0.2; class VM address '+c['address'],'// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.','#import <UIKit/UIKit.h>','', '@interface '+name+' : '+sup]
        for v in c['ivars']:lines.append('// ivar '+v['name']+' encoding='+v['type_encoding']+' offset='+str(v['offset']))
        for prop in c['properties']:lines.append('// property '+prop['name']+' attributes='+prop['attributes'])
        for v in c['methods']:
            lines.append('// IMP '+v['implementation']+' | '+v['type_encoding']);lines.append(method_decl(v));rows.append('\t'.join([v['implementation'],name,v['kind'],v['selector'],v['type_encoding']]))
        lines.extend(['@end',''])
        filename=re.sub(r'[^A-Za-z0-9_.-]','_',name)+'.h';(headers/filename).write_text('\n'.join(lines))
    for c in cats:
        for v in c['methods']:rows.append('\t'.join([v['implementation'],c['class']+'('+c['name']+')',v['kind'],v['selector'],v['type_encoding']]))
    (a.output/'methods.tsv').write_text('\n'.join(rows)+'\n')
    summary={'classes':len(classes),'categories':len(cats),'methods':len(rows)-1,'ivars':sum(len(c['ivars']) for c in classes),'properties':sum(len(c['properties']) for c in classes),'sha256':hashlib.sha256(b).hexdigest()}
    (a.output/'summary.json').write_text(json.dumps(summary,indent=2)+'\n');print(json.dumps(summary,indent=2));print('App-facing class candidates:',[c['name'] for c in classes if re.search('File|Sign|Setting|Cert|AppDelegate|Source|TabBar',c['name'])])
if __name__=='__main__':main()
