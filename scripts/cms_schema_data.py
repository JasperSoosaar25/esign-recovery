"""Read and relocate the original CMS descriptor graph; never infer replacement fields."""
import json,struct
from audit_evidence import require
ROOT_ITEM=0x100b24750
# Slot widths follow the recovered parser/constructor ABIs. The external X509
# encoder/printer callbacks are retained as unresolved original symbol references.
def extract(image):
    nodes={}
    def add(a,n,kind):
        require(not 0x100e34468<=a<0x100e34b10,'Private provider bytes are outside this graph')
        raw=image.data[image.fileoff(a):image.fileoff(a)+n];require(len(raw)==n,'Truncated schema node')
        row={'address':hex(a),'kind':kind,'bytes':raw.hex(),'relocations':[]};nodes[a]=row;return row
    def reloc(row,o,target,kind='node'):
        if target:row['relocations'].append({'offset':o,'target':hex(target),'kind':kind})
    def string(a):
        if a and a not in nodes:add(a,len(image.cstr(a).encode())+1,'string')
    def fields(a,count,kind='templates'):
        if a in nodes:return
        row=add(a,count*40,kind)
        for i in range(count):field(row,i*40)
    def field(row,o):
        a=int(row['address'],16)+o;flags,tag,offset,name,item=struct.unpack_from('<QqQQQ',image.data,image.fileoff(a))
        reloc(row,o+24,name);string(name);reloc(row,o+32,item)
        if flags&768:adb(item)
        else:visit(item)
    def adb(a):
        if a in nodes:return
        row=add(a,56,'adb');flags,offset,app,table,count,default,null=struct.unpack_from('<QQQQqQQ',image.data,image.fileoff(a))
        require(app==0 and 0<count<100,'Unreviewed ADB application table/count')
        for off,p in [(24,table),(40,default),(48,null)]:reloc(row,off,p)
        t=add(table,count*48,'adb_table')
        for i in range(count):field(t,i*48+8)
        for p in [default,null]:
            if p:fields(p,1)
    def visit(a):
        if not a or a in nodes:return
        row=add(a,56,'item');typ,utype,templates,count,fn,size,name=struct.unpack_from('<b7xqQqQqQ',image.data,image.fileoff(a))
        require(0<=typ<=6 and 0<=count<100,'Unreviewed item type/count')
        for off,p in [(16,templates),(32,fn),(48,name)]:reloc(row,off,p)
        string(name)
        if templates:fields(templates,count if typ else 1)
        if fn and fn not in nodes:
            if typ in [1,2,6]:
                f=add(fn,40,'aux');require(image.u64(fn)==0,'Unreviewed auxiliary application data');reloc(f,24,image.u64(fn+24),'function')
            else:
                require(typ in [0,4],'Unreviewed function-table kind');f=add(fn,64 if typ==0 else 56,'primitive_functions' if typ==0 else 'external_functions')
                require(image.u64(fn)==0 and image.u64(fn+8)==0 if typ==0 else image.u64(fn)==0,'Unreviewed function-table prefix')
                for off in range(16 if typ==0 else 8,len(bytes.fromhex(f['bytes'])),8):reloc(f,off,image.u64(fn+off),'function')
    visit(ROOT_ITEM)
    return sorted(nodes.values(),key=lambda r:int(r['address'],16))
def symbol(a):return 'ESignCMSSchema_'+format(a,'x')
def render(nodes):
    lookup={int(r['address'],16):r for r in nodes}
    def ptr(a):
        if not a:return 'NULL'
        for base,row in lookup.items():
            if base<=a<base+len(bytes.fromhex(row['bytes'])):
                name='ESignOriginalASN1AnyItem' if base==0x100b1f0e8 else symbol(base)
                return '&'+name if row['kind'] in ['item','aux','adb'] else '('+name+('+'+str(a-base) if row['kind']=='string' else '+'+str((a-base)//(48 if row['kind']=='adb_table' else 40)))+')'
        raise ValueError('Uncaptured schema pointer '+hex(a))
    lines=['/* Generated from original descriptor bytes, not upstream schema macros. */','/* OpenSSL notices: OPENSSL-LICENSE.txt. */','#include "ESignCMSSchema.h"','#include "ESignCMSSchemaDependencies.h"','#include "../asn1-object/ESignASN1Object.h"']
    ctypes={'item':'ESignASN1Item','templates':'ESignASN1Template','aux':'ESignASN1Aux','adb':'ESignASN1ADB','adb_table':'ESignASN1ADBTable'}
    for row in nodes:
        a=int(row['address'],16);kind=row['kind'];n=len(bytes.fromhex(row['bytes']))
        if a==0x100b1f0e8:continue
        ty='char' if kind=='string' else 'void *const' if kind.endswith('functions') else ctypes[kind]
        array='[]' if kind in ['string','templates','adb_table'] or kind.endswith('functions') else ''
        lines.append('extern const '+ty+' '+symbol(a)+array+';')
    def field(b,o):
        flags,tag,offset,name,item=struct.unpack_from('<QqQQQ',b,o)
        return '{'+','.join([str(flags),str(tag),str(offset),ptr(name),ptr(item)])+'}'
    for row in nodes:
        a=int(row['address'],16);kind=row['kind'];b=bytes.fromhex(row['bytes']);name=symbol(a)
        if a==0x100b1f0e8:continue
        if kind=='string':lines.append('const char '+name+'[] = '+json.dumps(b[:-1].decode())+';')
        elif kind=='item':
            typ,utype,t,n,fn,size,nm=struct.unpack('<b7xqQqQqQ',b)
            lines.append('const ESignASN1Item '+name+' = {'+','.join([str(typ),str(utype),ptr(t),str(n),ptr(fn),str(size),ptr(nm)])+'};')
        elif kind=='templates':lines.append('const ESignASN1Template '+name+'[] = {'+','.join(field(b,o) for o in range(0,len(b),40))+'};')
        elif kind=='adb_table':lines.append('const ESignASN1ADBTable '+name+'[] = {'+','.join('{'+str(struct.unpack_from('<q',b,o)[0])+','+field(b,o+8)+'}' for o in range(0,len(b),48))+'};')
        elif kind=='aux':
            app,flags,ref,lock,cb,enc=struct.unpack('<Qiii4xQi4x',b)
            lines.append('const ESignASN1Aux '+name+' = {NULL,'+','.join(map(str,[flags,ref,lock]))+','+('ESignOriginal_'+format(cb,'x') if cb else 'NULL')+','+str(enc)+'};')
        elif kind=='adb':
            flags,offset,app,t,n,default,null=struct.unpack('<QQQQqQQ',b)
            lines.append('const ESignASN1ADB '+name+' = {'+','.join([str(flags),str(offset),'NULL',ptr(t),str(n),ptr(default),ptr(null)])+'};')
        else:
            p=struct.unpack('<'+'Q'*(len(b)//8),b)
            lines.append('const void *const '+name+'[] = {'+','.join('(const void *)ESignOriginal_'+format(v,'x') if v else 'NULL' for v in p)+'};')
    lines.append('const ESignCMSSchemaNode ESignOriginalCMSSchemaNodes[] = {')
    for row in nodes:
        a=int(row['address'],16);lines.append('    {UINT64_C('+hex(a)+'),'+ptr(a)+','+str(len(row['bytes'])//2)+'},')
    return '\n'.join(lines+['};','const size_t ESignOriginalCMSSchemaNodeCount = sizeof(ESignOriginalCMSSchemaNodes)/sizeof(ESignOriginalCMSSchemaNodes[0]);',''])
