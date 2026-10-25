"""Invented inputs for the original encoder, name canonicalizer and UTF8 bodies."""
import ctypes as C,struct,bisect
from asn1_primitives_runtime import Scenario as PrimitiveScenario
from x509_state_runtime import Scenario as X509Scenario,NativeScenario as X509Native,name_der,certificate_der,crl_der,cms_certificate_der
from bio_input_runtime import MASK,i32,i64
ENTRIES={'core_encode':0x100618744,'template_encode':0x100618af0,'primitive_encode':0x100618fc8,'content_encode':0x1006190ec,'der_compare':0x1006192a8,'restore_encode':0x10061b184,'put_object':0x10061cd1c,'put_eoc':0x10061ce10,'object_size':0x10061ce24,'bit_encode':0x10061107c,'integer_encode':0x100612454,'tag_bit':0x1006192e4,'object_new':0x100610fa0,'object_dup':0x1005b3dc4,'string_copy':0x10061cf50,'string_utf8':0x100614d44,'mbcopy':0x100613d94,'mbncopy':0x100613da0,'traverse':0x100614364,'type_mask':0x1006144c4,'copy_ascii':0x10061458c,'copy_bmp':0x1006145a8,'copy_universal':0x1006145cc,'copy_utf8':0x1006145ec,'utf8_get':0x1006135a8,'utf8_put':0x100613874,'canonicalize':0x100616178}
CALLBACKS={'aux':0x500000500,'compat':0x500000510,'extern':0x500000520,'convert':0x500000530,'visit':0x500000540}
DEPENDENCIES={0x100601b1c:'BIO_snprintf',0x10093179c:'_qsort',0x10093122c:'_memcmp',0x1009308b4:'___tolower',0x100930830:'___maskrune',0x100930890:'___stack_chk_fail'}
class Scenario(X509Scenario):
    def label(self,p):
        if getattr(self,'_static_cache_size',-1)!=len(self.static_regions):
            self._static_cache=sorted(self.static_regions);self._static_starts=[v[0] for v in self._static_cache];self._static_cache_size=len(self.static_regions)
        i=bisect.bisect_right(self._static_starts,p)-1
        if i>=0:
            b,n,name=self._static_cache[i]
            if b<=p<b+n:return name+('+'+str(p-b) if p!=b else '')
        return PrimitiveScenario.label(self,p)
    def snapshot(self):
        result=X509Scenario.snapshot(self)
        for p,name,kind,n in self.kinds:
            offsets=[0,16] if kind=='string' else [16,32] if kind=='oid' else []
            for off in offsets:
                if off+8<=n:result[name]['words'][off//8]=self.read_bytes(p+off,8).hex()
        return result
    def dependency(self,target,a):
        if target==0x1005b11cc and self.case.get('canonical_length_failure') and self.string(a[1])=='x_name.c' and i32(a[2])==399 and a[0]>65536:
            self.effects.append(dict(call='malloc',size=str(a[0]),file='x_name.c',line=399));self.malloc_count+=1;return 0
        if target==0x1005b137c and self.case.get('canonical_length_failure') and self.string(a[2])=='stack.c':
            p=next(p for p,n,k,z in self.kinds if k=='string' and n.startswith('allocation-'));self.put32(p,2147483647)
        if target==0x1005b137c and a[0] and not any(b==a[0] for b,n,_ in self.regions):
            self.effects.append(dict(call='realloc',old=self.label(a[0]),size=str(a[1]),file=self.string(a[2]),line=i32(a[3])))
            if self.case.get('realloc_failure'):return 0
            size=next(b+n-a[0] for b,n,_ in self.regions if b<=a[0]<b+n);p=self.allocate('realloc-'+str(len(self.kinds)),a[1],'data');self.write_bytes(p,self.read_bytes(a[0],min(size,a[1])));return p
        if target==0x1009308b4:return (a[0]+32 if 65<=a[0]<=90 else a[0])&0xffffffff
        if target==0x100930830:raise ValueError('Unreachable ASCII-guarded maskrune branch')
        if target==0x100930890:raise ValueError('Original stack guard failed')
        if target==0x10093122c:
            if a[2]>65536:raise ValueError('Unbounded comparison')
            x,y=self.read_bytes(a[0],a[2]),self.read_bytes(a[1],a[2]);return next((i-j for i,j in zip(x,y) if i!=j),0)&0xffffffff
        if target==0x10093179c:
            if a[2]!=24 or a[1]>256:raise ValueError('Wrong bounded original DER sorting layout')
            rows=[self.read_bytes(a[0]+24*i,24) for i in range(a[1])]
            def key(row):p,n=struct.unpack_from('<Qi',row);return self.read_bytes(p,n)
            rows.sort(key=key)
            for i,row in enumerate(rows):self.write_bytes(a[0]+24*i,row)
            self.effects.append(dict(call='platform_qsort',count=a[1],size=a[2],comparator=self.label(a[3])));return 0
        if target==0x100601b1c:
            if self.string(a[2])!='%ld':raise ValueError('Unexpected original numeric diagnostic')
            b=str(i64(a[3])).encode();self.write_bytes(a[0],b[:max(0,a[1]-1)]+b'\0');self.effects.append(dict(call='BIO_snprintf',size=a[1],format='%ld',value=str(i64(a[3]))));return len(b)
        name=next((n for n,p in self.encoding_callbacks.items() if p==target),None) or next((n for n,p in CALLBACKS.items() if p==target),None)
        if name:
            if name=='aux':
                op=i32(a[0]);ret=self.case.get('pre_result',1) if op==6 else self.case.get('post_result',1);self.effects.append(dict(call='encoding_aux',operation=op,value=self.label(a[1]),item=self.label(a[2]),argument=self.label(a[3]),result=ret))
                if op==6 and 'callback_count' in self.case:self.put64(self.item+24,self.case['callback_count'])
                return ret&MASK
            if name=='visit':
                self.effects.append(dict(call='visit',value=str(a[0]),argument=self.label(a[1])));return self.case.get('visit_result',1)&MASK
            if name=='convert':
                self.effects.append(dict(call='convert',value=self.label(a[0]),output=self.label(a[1]),type=i32(self.get32(a[2])),item=self.label(a[3])));self.put32(a[2],self.case.get('converted_type',4));n=self.case.get('conversion_length',3)
                if a[1] and n>=0:self.write_bytes(a[1],b'C'*n)
                return n&MASK
            self.effects.append(dict(call='encoding_'+name,value=self.label(a[0]),output=bool(a[1])))
            b=bytes.fromhex(self.case.get('callback_data','300158'));n=self.case.get('callback_length',len(b))
            if a[1]:p=self.get64(a[1]);self.write_bytes(p,b);self.put64(a[1],p+len(b))
            return n&MASK
        if target in ENTRIES.values():raise ValueError('Recovered body incorrectly used as boundary '+hex(target))
        return X509Scenario.dependency(self,target,a)
    def decoded(self,p,item,depth=0):
        r=X509Scenario.decoded(self,p,item,depth)
        if item==0x100b1e7b8 and p:
            n=i32(self.get32(p+32));data=self.get64(p+24);r['canonical']=self.read_bytes(data,n).hex() if data and 0<=n<=65536 else None;r['canonical_length']=n
        return r
    def scalar(self,name,data=b'',tag=12,flags=0):
        p=self.allocate(name,24,'string',fill=0);buf=self.allocate(name+'-data',max(len(data)+2,2),fill=0);self.write_bytes(buf,bytes([self.case.get('prefix',0)])+data+b'\0');self.put32(p,len(data));self.put32(p+4,tag);self.put64(p+8,buf+1);self.put64(p+16,flags);return p
    def descriptor(self,name,typ=0,utype=4,templates=0,count=0,functions=0,size=0):
        p=self.allocate(name,56,fill=0);self.write_bytes(p,struct.pack('<b7xqQqQqQ',typ,utype,templates,count,functions,size,0));return p
    def evaluate(self,case):
        if case['op'] in ['name_decode','name_encode','entry','cms_bio']:return X509Scenario.evaluate(self,case)
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.stacks={};self.malloc_count=0;self.push_count=0;self.free_count=0;self.last_error=0;self.active_oid=0;self.reset_extra(case)
        op=case['op'];data=bytes.fromhex(case.get('data','2041424320'));self.input=self.allocate('input',max(512,len(data)+2),fill=0x7b);self.write_bytes(self.input,data+b'\0');self.output=self.allocate('output',512,fill=0x7e);self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,self.output);self.slot=self.allocate('slot',8,fill=0);self.arg=self.allocate('argument',64,fill=0);self.put64(self.arg,case.get('initial',0x1122334455667788));self.put32(self.arg+8,case.get('utype',4))
        self.object=self.scalar('string',data,case.get('string_type',12),case.get('string_flags',0));self.put64(self.slot,0 if case.get('nil_value') else self.object);self.dest=self.scalar('destination',b'OLD',case.get('destination_type',4),case.get('destination_flags',0x1020304050607080));out=0 if case.get('null_output') else self.cursor
        self.item=self.descriptor('item',case.get('type',0),case.get('utype',4),size=case.get('size',0));self.field=self.allocate('template',40,fill=0);self.put64(self.field,case.get('flags',0));self.put64(self.field+8,case.get('field_tag',3));self.put64(self.field+16,0);self.put64(self.field+32,self.item)
        self.aux=self.allocate('aux',64,fill=0);self.put32(self.aux+8,case.get('aux_flags',0));self.put32(self.aux+32,64)
        if case.get('callback'):
            self.put64(self.item+32,self.aux);self.put64(self.aux+24,self.encoding_callbacks['aux'])
        if case.get('convert'):
            self.put64(self.item+32,self.aux);self.put64(self.aux+48,self.encoding_callbacks['convert'])
        tag=case.get('tag',-1);cls=case.get('xclass',0)
        if op=='utf8_get':args=[self.input,case.get('length',len(data)),self.arg]
        elif op=='utf8_put':args=[0 if case.get('null_output') else self.output,case.get('length',6),case.get('value',65)]
        elif op in ['copy_ascii','copy_bmp','copy_universal','copy_utf8']:args=[case.get('value',0x12345678),self.cursor]
        elif op=='type_mask':self.put64(self.arg,case.get('mask',0x2916));args=[case.get('value',65),self.arg]
        elif op=='traverse':args=[self.input,len(data),case.get('inform',4096),0 if case.get('no_callback') else self.encoding_callbacks['visit'],self.arg]
        elif op in ['mbcopy','mbncopy']:
            self.put64(self.slot,self.dest if case.get('existing') else 0);args=[0 if case.get('null_slot') else self.slot,self.input,case.get('length',len(data)),case.get('inform',4097),case.get('mask',8192)]
            if op=='mbncopy':args+=[case.get('min',0),case.get('max',0)]
        elif op=='string_copy':args=[self.dest,0 if case.get('nil_value') else self.object]
        elif op=='string_utf8':self.put64(self.cursor,self.output);args=[self.cursor,0 if case.get('nil_value') else self.object]
        elif op=='tag_bit':args=[case.get('tag',0)]
        elif op=='object_new':args=[]
        elif op=='object_dup':
            self.object=self.allocate('oid',40,fill=0);self.put64(self.slot,self.object);self.put32(self.object+16,case.get('nid',777));self.put32(self.object+20,len(data));self.put64(self.object+24,0 if case.get('no_data') else self.input);self.put32(self.object+32,case.get('oid_flags',1))
            for off,key in [(0,'short_name'),(8,'long_name')]:
                if key in case:b=case[key].encode()+b'\0';p=self.allocate(key,len(b),fill=0);self.write_bytes(p,b);self.put64(self.object+off,p)
            args=[0 if case.get('nil_value') else self.object]
        elif op=='object_size':args=[case.get('constructed',0),case.get('length',len(data)),case.get('tag',4)]
        elif op=='put_object':args=[self.cursor,case.get('constructed',0),case.get('length',len(data)),case.get('tag',4),cls]
        elif op=='put_eoc':args=[self.cursor]
        elif op in ['bit_encode','integer_encode']:args=[0 if case.get('nil_value') else self.object,out]
        elif op=='restore_encode':
            self.put64(self.item+32,0 if case.get('no_aux') else self.aux);self.put32(self.aux+8,case.get('aux_flags',2));obj=self.allocate('cached-object',96,fill=0);self.put64(self.slot,0 if case.get('nil_value') else obj);self.put64(obj+64,self.input);self.put64(obj+72,len(data));self.put32(obj+80,case.get('modified',0));args=[0 if case.get('no_length') else self.arg,out,0 if case.get('null_slot') else self.slot,self.item]
        elif op=='der_compare':
            other=bytes.fromhex(case.get('other','414243'));p=self.allocate('other-data',len(other)+1,fill=0);self.write_bytes(p,other);self.put64(self.arg,self.input);self.put32(self.arg+8,len(data));self.put64(self.arg+24,p);self.put32(self.arg+32,len(other));args=[self.arg,self.arg+24]
        elif op=='canonicalize':
            obj=self.allocate('name',40,fill=0);entries=[]
            for i,row in enumerate(case.get('entries',[dict(text='20204142432020',tag=12,set=0)])):
                s=self.scalar('name-string-'+str(i),bytes.fromhex(row['text']),row.get('tag',12),row.get('flags',0));e=self.allocate('name-entry-'+str(i),24,fill=0);self.put64(e,self.oid(row.get('nid',13)));self.put64(e+8,s);self.put32(e+16,row.get('set',0));entries.append(e)
            self.put64(obj,self.stack('name-entries',entries));self.put32(obj+32,77)
            if case.get('old_canonical'):p=self.allocate('old-canonical',4,fill=0x42);self.put64(obj+24,p)
            self.object=obj;self.put64(self.slot,obj);args=[obj]
        else:
            utype=case.get('utype',4)
            if utype==1:self.put64(self.slot,case.get('boolean',0)&0xffffffff)
            if utype==6:self.put64(self.slot,self.oid(case.get('nid',13)))
            if utype==-4:obj=self.allocate('any',16,fill=0);self.put32(obj,case.get('any_type',12));self.put64(obj+8,self.object);self.put64(self.slot,obj)
            if op in ['core_encode','template_encode']:
                typ=case.get('type',0)
                if typ in [3,4]:self.put64(self.item+32,self.aux);self.put64(self.aux+(24 if typ==3 else 40),self.encoding_callbacks['compat' if typ==3 else 'extern'])
                if case.get('sequence') or case.get('choice'):
                    parent=self.descriptor('parent-item',2 if case.get('choice') else case.get('sequence_type',1),32 if case.get('choice') else 16,self.field,case.get('count',1),self.aux if case.get('callback') or case.get('aux_flags') else 0,96);obj=self.allocate('parent-value',96,fill=0);self.put64(obj,self.object);self.put32(obj+32,case.get('selector',0));self.put64(self.slot,0 if case.get('nil_value') else obj);self.item=parent
                    if case.get('cached'):
                        self.put64(parent+32,self.aux);self.put32(self.aux+8,2);self.put64(obj+64,self.input);self.put64(obj+72,len(data));self.put32(obj+80,0)
                if case.get('stack') is not None:
                    values=[self.scalar('stack-value-'+str(i),bytes.fromhex(b),case.get('string_type',12)) for i,b in enumerate(case['stack'])];self.put64(self.slot,self.stack('values',values));
                if case.get('primitive_template'):
                    child=self.allocate('leaf-item',56,fill=0);self.write_bytes(child,self.read_bytes(self.item,56));self.put64(self.field+32,child);self.put64(self.item+16,self.field)
            if op=='content_encode':args=[self.slot,0 if case.get('null_output') else self.output,self.arg+8,self.item]
            elif op=='template_encode':args=[self.slot,out,self.field,tag,cls]
            else:args=[self.slot,out,self.item,tag,cls]
        result=self.invoke(ENTRIES[op],args)
        if op in ['object_new','object_dup']:returned=self.label(result)
        elif op=='tag_bit':returned=str(result)
        elif op=='put_object':returned=None
        else:returned=i32(result)
        if op=='canonicalize':n=i32(self.get32(self.object+32));p=self.get64(self.object+24);canonical=self.read_bytes(p,n).hex() if p and 0<=n<=65536 else None
        else:canonical=None
        return dict(returned=returned,cursor=self.label(self.get64(self.cursor)),slot=str(i32(self.get32(self.slot))) if op in ['core_encode','template_encode','primitive_encode','content_encode'] and case.get('utype')==1 else self.label(self.get64(self.slot)),canonical=canonical,output=self.read_bytes(self.output,128).hex(),argument=self.read_bytes(self.arg,64).hex() if op not in ['der_compare'] else None,effects=self.effects,state=self.snapshot(),modeled_ERR_reason=self.last_error)
class NativeScenario(Scenario,X509Native):
    def __init__(self,path):
        X509Native.__init__(self,path);self.encoding_callbacks={n:C.cast(getattr(self.lib,'ESignEncodingTest_'+n),C.c_void_p).value for n in CALLBACKS};self.static_regions.extend((p,1,'function-'+hex(CALLBACKS[n])) for n,p in self.encoding_callbacks.items())
        signatures={
          'core_encode':[C.c_void_p,C.c_void_p,C.c_void_p,C.c_int,C.c_int],'template_encode':[C.c_void_p,C.c_void_p,C.c_void_p,C.c_int,C.c_int],'primitive_encode':[C.c_void_p,C.c_void_p,C.c_void_p,C.c_int,C.c_int],'content_encode':[C.c_void_p]*4,'der_compare':[C.c_void_p]*2,'restore_encode':[C.c_void_p]*4,'put_object':[C.c_void_p,C.c_int,C.c_int,C.c_int,C.c_int],'put_eoc':[C.c_void_p],'object_size':[C.c_int]*3,'bit_encode':[C.c_void_p]*2,'integer_encode':[C.c_void_p]*2,'tag_bit':[C.c_int],'object_new':[],'object_dup':[C.c_void_p],'string_copy':[C.c_void_p]*2,'string_utf8':[C.c_void_p]*2,'mbcopy':[C.c_void_p,C.c_void_p,C.c_int,C.c_int,C.c_uint64],'mbncopy':[C.c_void_p,C.c_void_p,C.c_int,C.c_int,C.c_uint64,C.c_long,C.c_long],'traverse':[C.c_void_p,C.c_int,C.c_int,C.c_void_p,C.c_void_p],'type_mask':[C.c_uint64,C.c_void_p],'copy_ascii':[C.c_uint64,C.c_void_p],'copy_bmp':[C.c_uint64,C.c_void_p],'copy_universal':[C.c_uint64,C.c_void_p],'copy_utf8':[C.c_uint64,C.c_void_p],'utf8_get':[C.c_void_p,C.c_int,C.c_void_p],'utf8_put':[C.c_void_p,C.c_int,C.c_uint64],'canonicalize':[C.c_void_p]}
        for op,a in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'));f.argtypes=signatures[op];f.restype=C.c_void_p if op in ['object_new','object_dup'] else C.c_uint64 if op=='tag_bit' else None if op=='put_object' else C.c_int;self.functions[a]=f;self.static_regions.append((C.cast(f,C.c_void_p).value,1,'function-'+hex(a)))
def cases():
    r=[]
    for data in ['','00','41','7f','80','bf','c080','c280','c2','c241','dfbf','e08080','e0a080','eda080','efbfbf','e1bf','e18041','f0808080','f0908080','f48fbfbf','f7bfbfbf','f888808080','f880808080','fbbfbfbfbf','fc8480808080','fc8080808080','fdbfbfbfbfbf','fe','ff']:
        b=bytes.fromhex(data)
        for length in sorted(set([-1,0,len(b),max(0,len(b)-1)])):r.append(dict(op='utf8_get',data=data,length=length))
    for value in [0,65,127,128,2047,2048,55296,65535,65536,1114111,2097151,2097152,67108863,67108864,2147483647,2147483648,MASK]:
        for length in [-1,0,1,2,3,4,5,6]:r.append(dict(op='utf8_put',value=value,length=length))
        r.append(dict(op='utf8_put',value=value,null_output=True,length=0))
    for op in ['copy_ascii','copy_bmp','copy_universal','copy_utf8']:
        for value in [0,65,255,256,65535,65536,0x12345678,MASK]:r.append(dict(op=op,value=value))
    for mask in [0,2,4,16,256,2048,8192,0x2916,1<<40]:
        for value in [0,32,35,39,42,48,64,65,90,95,97,123,127,128,255,256,65535,65536,MASK]:r.append(dict(op='type_mask',mask=mask,value=value))
    for inform,data in [(4096,'41c280e0a080f0908080'),(4096,'c080'),(4097,'0041ff'),(4098,'000000410100'),(4100,'00000041000100007fffffff')]:
        for opts in [{},{'no_callback':True},{'visit_result':0},{'visit_result':-7},{'visit_result':2}]:r.append(dict(op='traverse',inform=inform,data=data,**opts))
    for op in ['mbcopy','mbncopy']:
        for inform,data in [(4096,'41c280e0a080f0908080'),(4096,'c080'),(4097,'414243'),(4097,'80ff'),(4098,'004101002000'),(4100,'00000041000100007fffffff'),(4098,'00'),(4100,'00'),(4099,'41'),(0,'41'),(4096,''),(4097,'')]:
            for mask in [0,2,4,16,256,2048,8192,0x2916]:r.append(dict(op=op,inform=inform,data=data,mask=mask))
        for opts in [{'existing':True},{'existing':True,'malloc_failures':[0]},{'malloc_failures':[0]},{'malloc_failures':[1]},{'null_slot':True},{'length':-1},{'min':9},{'max':1}]:r.append(dict(op=op,data='414243',inform=4097,**opts))
        for inform,data in [(4096,'41c280'),(4098,'00410100'),(4100,'0000004100010000')]:
            for opts in [{'existing':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'existing':True,'malloc_failures':[0]}]:r.append(dict(op=op,inform=inform,data=data,mask=8192,**opts))
    for tag in range(-1,33):
        r.append(dict(op='tag_bit',tag=tag));r.append(dict(op='string_utf8',string_type=tag,data='00410042' if tag==30 else '00000041' if tag==28 else '4142'))
    for op in ['string_copy','string_utf8']:
        for opts in [{'nil_value':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'data':''}]:r.append(dict(op=op,**opts))
    r += [dict(op='object_new'),dict(op='object_new',malloc_failures=[0])]
    for flags in [0,1,2,5,15]:
        for opts in [{},{'nil_value':True},{'short_name':'Invented short'},{'long_name':'Invented long'},{'short_name':'S','long_name':'Long'},{'data':''},{'no_data':True}]+[dict(short_name='S',long_name='Long',malloc_failures=[i]) for i in range(4)]:r.append(dict(op='object_dup',oid_flags=flags,**opts))
    for mode in [0,1,2]:
        for tag in [-1,0,4,30,31,127,128,16383,16384,2147483647]:
            for length in [0,1,127,128,255,256,65535,65536]:
                r.append(dict(op='object_size',constructed=mode,tag=tag,length=length));r.append(dict(op='put_object',constructed=mode,tag=tag,length=length,xclass=192))
        for length in [-1,2147483640,2147483641,2147483647]:r.append(dict(op='object_size',constructed=mode,tag=4,length=length))
    r.append(dict(op='put_eoc'))
    for opts in [{},{'no_aux':True},{'aux_flags':0},{'modified':1},{'nil_value':True},{'null_slot':True},{'null_output':True},{'no_length':True}]:r.append(dict(op='restore_encode',**opts))
    for a,b in [('',''),('41',''),('41','4142'),('42','41'),('0042','0041'),('4142','4142')]:r.append(dict(op='der_compare',data=a,other=b))
    for op in ['bit_encode','integer_encode']:
        for data in ['','00','0000','01','02','04','08','10','20','40','80','8000','8001','81','ff','ff00','12340000']:
            for flags in [0,8,15] if op=='bit_encode' else [0]:
                for negative in [0,256] if op=='integer_encode' else [0]:
                    for out in [False,True]:r.append(dict(op=op,data=data,string_flags=flags,string_type=2|negative,null_output=out))
        r.append(dict(op=op,nil_value=True));r.append(dict(op=op,data='0000',prefix=128))
    for op in ['primitive_encode','content_encode','core_encode']:
        for utype in [1,2,3,4,5,6,10,12,16,17,-3,-4]:
            for opts in [{},{'null_output':True},{'nil_value':True},{'tag':33,'xclass':128}]:r.append(dict(op=op,utype=utype,**opts))
        for v in [-1,0,1,255]:
            for size in [-1,0,1]:r.append(dict(op=op,utype=1,boolean=v,size=size))
        for opts in [{},{'null_output':True},{'size':2048,'string_flags':16},{'convert':True},{'convert':True,'conversion_length':-1},{'convert':True,'conversion_length':-2},{'type':5,'utype':512}]:r.append(dict(op=op,**opts))
    for op in ['core_encode','template_encode']:
        for flags in [0,8,16,2,4,6,18,20,22,130,136,144,2052,2050]:
            for opts in [{},{'null_output':True},{'tag':7,'xclass':128},{'xclass':2048}]:r.append(dict(op=op,flags=flags,stack=['7a','61','62'] if flags&6 else None,primitive_template=op=='core_encode',**opts))
        for opts in [{'sequence':True},{'sequence':True,'callback':True},{'sequence':True,'callback':True,'pre_result':0},{'sequence':True,'callback':True,'post_result':0},{'sequence':True,'callback':True,'callback_count':0},{'sequence':True,'nil_value':True},{'sequence':True,'sequence_type':6,'xclass':2048},{'choice':True},{'choice':True,'selector':-1,'callback':True},{'choice':True,'selector':4},{'type':3},{'type':3,'tag':7,'xclass':128},{'type':4},{'type':7},{'type':-1}]:
            if op=='core_encode':r.append(dict(op=op,**opts))
        for values in [[],['7a'],['7a','61','62']]:
            for failure in range(3):r.append(dict(op=op,flags=2,stack=values,primitive_template=op=='core_encode',malloc_failures=[failure]))
    for entries in [[],[dict(text='',tag=12,set=0)],[dict(text='2020094142430a2020',tag=12,set=0)],[dict(text='202020',tag=19,set=0)],[dict(text='41c38020c28042',tag=12,set=0)],[dict(text='004100200042',tag=30,set=0)],[dict(text='0000004100000042',tag=28,set=0)],[dict(text='8000ff',tag=4,set=0)],[dict(text='c080',tag=12,set=0)],[dict(text='414243',tag=12,set=-1)],[dict(text='5a',tag=12,set=0,nid=13),dict(text='41',tag=19,set=0,nid=17),dict(text='42',tag=20,set=1,nid=14)]]:
        r.append(dict(op='canonicalize',entries=entries));r.append(dict(op='canonicalize',entries=entries,old_canonical=True))
    for i in range(30):r.append(dict(op='canonicalize',malloc_failures=[i]))
    for data in [name_der(),bytes.fromhex('3000')]:
        r.append(dict(op='name_decode',data=data.hex()));r.append(dict(op='name_decode',data=data.hex(),initial=True))
    for i in range(45):r.append(dict(op='name_decode',data=name_der().hex(),malloc_failures=[i]))
    for item,data in [(0x100b1ea58,certificate_der()),(0x100b1eef0,crl_der())]:r.append(dict(op='entry',item=item,data=data.hex()));r.append(dict(op='entry',item=item,data=data.hex(),cleanup=False))
    r.append(dict(op='cms_bio',data=cms_certificate_der().hex()));r.append(dict(op='cms_bio',data=cms_certificate_der().hex(),cleanup=False))
    for mask in [4,16,2048]:r.append(dict(op='mbncopy',data='4142',inform=4097,mask=mask,null_slot=True))
    r += [dict(op='string_copy',realloc_failure=True),dict(op='core_encode',sequence=True,cached=True),dict(op='core_encode',type=3,null_output=True),dict(op='core_encode',sequence=True,convert=True,conversion_length=2147483647,null_output=True),dict(op='template_encode',flags=16,nil_value=True)]
    for flags in [2064,2066,2068]:r.append(dict(op='template_encode',flags=flags,xclass=2048,stack=['7a','61'] if flags&6 else None))
    for i in range(16):r.append(dict(op='canonicalize',entries=[dict(text='8000ff',tag=4,set=0)],malloc_failures=[i]))
    r.append(dict(op='canonicalize',entries=[dict(text='4142',tag=12,set=0) for i in range(6)],canonical_length_failure=True))
    many=[dict(text='4142',tag=12,set=i) for i in range(6)]
    r.append(dict(op='canonicalize',entries=many,realloc_failure=True))
    for sets in [[],[0],[0,0,1],[0,1,0],[-1]]:
        for opts in [{},{'null_output':True},{'modified':0},{'malloc_failures':[0]},{'malloc_failures':[4]},{'realloc_failure':True,'capacity':0}]:r.append(dict(op='name_encode',sets=sets,**opts))
    return r
