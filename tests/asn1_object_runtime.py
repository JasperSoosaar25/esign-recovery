"""Invented lifetime schemas shared by original-instruction and native tests."""
import ctypes as C,hashlib
from bio_input_runtime import MASK,i32,i64,Scenario as Memory
from asn1_value_runtime import Scenario as ValueScenario,NativeScenario as ValueNative
ENTRIES={'new_core':0x100617b44,'new':0x100617b3c,'free_core':0x10061809c,'free':0x10061848c,'template_free':0x100618494,'clear':0x100617e98,'primitive_new':0x100617f50,'primitive_free':0x100618544,'reference':0x10061b018,'encoding_init':0x10061b074,'encoding_free':0x10061b0a8,'new_return':0x100617b08,'free_value':0x100618078,'any_new':0x10061b3ec,'any_free':0x10061b3f8,'any_set':0x100612e1c,'string_new':0x10061d254,'string_set':0x10061cfa4,'string_free':0x10061d1e0,'integer':0x100612af0}
COMPOSITIONS={'core':0x10061955c,'entry':0x100619304,'biodecode':0x100613354}
CALLBACKS={name:0x500000300+i*16 for i,name in enumerate(['aux','compat_new','compat_free','extern_new','extern_free','extern_clear','primitive_new','primitive_free','primitive_clear'])}
DEPENDENCIES={0x1005b137c:'realloc',0x1005b2eac:'OBJ_nid2obj',0x100610ffc:'ASN1_OBJECT_free',0x100602124:'sk_free',0x100602624:'sk_value',**{p:n for n,p in CALLBACKS.items()}}
VOID={'free_core','free','template_free','clear','primitive_free','encoding_init','encoding_free','free_value','any_free','any_set','string_free'}
POINTER={'new_return','any_new','string_new','entry','biodecode'}
class Scenario(ValueScenario):
    def label(self,p):
        if p==self.any_item:return 'original-ANY-item'
        try:return ValueScenario.label(self,p)
        except ValueError:
            if p in [0x1234567800000000,0x1234567800000001,0x12345678ffffffff,0x12345678000000ff]:return 'raw-'+hex(p)
            raise
    def dependency(self,target,a):
        if target==0x1005b11cc:
            p=Memory.dependency(self,target,a)
            if p:
                file,line=self.string(a[1]),i32(a[2]);kind='string' if file=='asn1_lib.c' and line==412 else 'any' if file=='tasn_new.c' and line==346 else 'object' if file=='tasn_new.c' and line in [155,180] else self.kinds[-1][2]
                last=self.kinds[-1];self.kinds[-1]=(last[0],last[1],kind,last[3])
                if 'malloc_item_type' in self.case:self.write_bytes(self.item,bytes([self.case['malloc_item_type']&255]))
            return p
        if target==0x1005b137c:
            self.effects.append({'call':'realloc','old':self.label(a[0]),'size':str(a[1]),'file':self.string(a[2]),'line':i32(a[3])})
            if self.case.get('realloc_failure'):return 0
            p=self.allocate('realloc-'+str(len(self.kinds)),a[1],'data');oldsize=next(n for b,n,_ in self.regions if b==a[0]);self.write_bytes(p,self.read_bytes(a[0],min(oldsize,a[1])));return p
        if target==0x1005b2eac:self.effects.append({'call':'nid2obj','nid':i32(a[0])});return 0 if self.case.get('nid_null') else self.oid
        if target==0x100610ffc:self.effects.append({'call':'object_free','value':self.label(a[0])});return 0
        if target==0x100602124:self.effects.append({'call':'sk_free','value':self.label(a[0])});return 0
        if target==0x100602624:
            self.effects.append({'call':'sk_value','stack':self.label(a[0]),'index':i32(a[1])});return self.stacks[a[0]][i32(a[1])]
        if target==0x100602610 and not a[0]:self.effects.append({'call':'sk_num','stack':None,'count':-1});return MASK
        name=next((n for n,p in CALLBACKS.items() if p==target),None)
        if name=='aux':
            op=i32(a[0]);ret=self.case.get('pre_result',1) if op==0 else self.case.get('post_result',1) if op==1 else self.case.get('free_pre_result',1)
            self.effects.append({'call':'aux','operation':op,'previous':self.label(self.get64(a[1])),'item':self.label(a[2]),'argument':self.label(a[3]),'result':ret})
            if self.case.get('callback_mutation'):self.put64(self.funcs+24,0)
            if op==0 and 'callback_count' in self.case:self.put64(self.item+24,self.case['callback_count'])
            return ret&0xffffffff
        if name:
            row={'call':name}
            if name!='compat_new':row['value']=self.label(a[0]) if name=='compat_free' else self.label(self.get64(a[0]))
            if name not in ['compat_new','compat_free']:row['item']=self.label(a[1])
            self.effects.append(row)
            if name=='compat_new':return 0 if self.case.get('callback_result',1)==0 else self.existing
            if name=='compat_free':return 0
            self.put64(a[0],self.existing if name.endswith('new') else 0);return self.case.get('callback_result',1)&0xffffffff
        return ValueScenario.dependency(self,target,a)
    def evaluate(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.stacks={};self.malloc_count=0;self.push_count=0
        self.item=self.allocate('item',56,fill=0);self.child=self.allocate('child',56,fill=0);self.fields=self.allocate('fields',120,fill=0);self.funcs=self.allocate('functions',64,fill=0);self.adb=self.allocate('adb',56,fill=0)
        name=self.allocate('name',32,fill=0);self.write_bytes(name,b'InventedObject\0')
        self.object=self.allocate('object',256,'object',0);self.existing=self.string_object('existing',case.get('string_type',4));self.converted=self.string_object('converted',258)
        self.oid=self.allocate('oid',24,fill=0)
        self.stack=self.allocate('stack',32,'stack',0);self.stacks[self.stack]=[self.existing,self.converted][:case.get('old_count',2)]
        self.any_value=self.allocate('any',16,'any',0);self.put32(self.any_value,case.get('any_type',4));self.put64(self.any_value+8,255 if case.get('boolean_any_true') else self.existing if case.get('any_inner',True) else 0)
        self.storage=self.allocate('storage',64,'data',0x76);self.put64(self.existing+8,0 if case.get('null_data') else self.storage);self.put32(self.existing,case.get('old_length',3));self.put64(self.existing+16,case.get('string_flags',0))
        payload=bytes.fromhex(case.get('data','61626300'));self.input=self.allocate('input',4096,'data',0x7b);self.write_bytes(self.input,payload)
        self.slot=self.allocate('slot',8,fill=0);self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,self.input)
        op=case['op'];typ=case.get('item_type',0);utype=case.get('utype',4);count=case.get('count',3);flags=case.get('field_flags',[0,1,4])
        self.write_bytes(self.item,bytes([typ&255]));self.put64(self.item+8,80 if typ==2 and op not in ['primitive_new','primitive_free'] else utype);self.put64(self.item+16,self.fields if typ in [1,2,6] or case.get('template') else 0);self.put64(self.item+24,count);self.put64(self.item+40,case.get('size',128 if typ in [1,2,6] else -1));self.put64(self.item+48,name)
        self.write_bytes(self.child,bytes([case.get('child_type',0)&255]));self.put64(self.child+8,case.get('child_utype',4));self.put64(self.child+40,-1);self.put64(self.child+48,name)
        self.put32(self.funcs+8,case.get('aux_flags',0));self.put32(self.funcs+12,64);self.put32(self.funcs+16,7);self.put32(self.funcs+32,96)
        if typ not in [1,2,6] or op in ['primitive_new','primitive_free']:self.write_bytes(self.funcs,bytes(64))
        if case.get('functions') or case.get('callback') or case.get('aux_flags'):self.put64(self.item+32,self.funcs)
        if typ in [1,2,6] and case.get('callback') and op not in ['primitive_new','primitive_free']:self.put64(self.funcs+24,self.callbacks['aux'])
        elif (typ in [0,5] or op in ['primitive_new','primitive_free']) and case.get('callback'):
            for offset,n in [(16,'primitive_new'),(24,'primitive_free'),(32,'primitive_clear')]:self.put64(self.funcs+offset,self.callbacks[n])
        elif typ==3 and case.get('callback'):
            self.put64(self.funcs,self.callbacks['compat_new']);self.put64(self.funcs+8,self.callbacks['compat_free'])
        elif typ==4 and case.get('callback'):
            for offset,n in [(8,'extern_new'),(16,'extern_free'),(24,'extern_clear')]:self.put64(self.funcs+offset,self.callbacks[n])
        for n in range(3):
            f=self.fields+n*40;flag=flags[n] if n<len(flags) else 0;self.put64(f,flag);self.put64(f+16,n*8);self.put64(f+24,name);self.put64(f+32,self.adb if flag&768 else self.child)
            self.put64(self.object+n*8,self.stack if flag&6 else self.existing)
        self.put64(self.adb+8,72);self.put32(self.object+80,case.get('selector',0));self.put32(self.object+64,case.get('references',1));self.put64(self.object+96,self.storage if case.get('old_encoding') else 0);self.put64(self.object+104,13);self.put32(self.object+112,8)
        if case.get('nested_template'):
            self.put64(self.child+16,self.fields+40);self.put64(self.fields+72,self.item)
            # A third descriptor terminates the invented chain.
            p=self.allocate('terminal',56,fill=0);self.put64(p+8,1);self.put64(p+40,255);self.put64(self.fields+72,p)
        if op=='clear' and (case.get('functions') or case.get('callback')):self.put64(self.child+32,self.funcs)
        if flags[0]&1024:self.write_bytes(self.child,b'\1')
        value=self.object if typ in [1,2,6] and op not in ['primitive_new','primitive_free'] else self.existing
        if case.get('template') and flags[0]&6:value=self.stack
        primitive_value=typ!=5 and (typ not in [1,2,6] or op in ['primitive_new','primitive_free'])
        if (primitive_value and utype==-4) or op in ['any_set','any_free']:value=self.any_value
        if primitive_value and utype==1:value=case.get('boolean_initial',0)
        if case.get('nested_template'):value=0x1234567800000000
        if case.get('null_value'):value=0
        if op.startswith('new') or op in ['primitive_new','any_new','string_new']:value=0 if not case.get('preserve_initial') else value
        if op=='new_core' and case.get('combine'):value=self.object
        self.put64(self.slot,value)
        slot=0 if case.get('null_slot') else self.slot;it=0 if case.get('null_item') else self.item
        if op in ['new_core','free_core']:args=[slot,it,case.get('combine',0)]
        elif op in ['new','free','primitive_new','primitive_free','encoding_init','encoding_free']:args=[slot,it]
        elif op in ['template_free','clear']:args=[slot,self.fields]
        elif op=='reference':args=[slot,case.get('operation',0),it]
        elif op=='new_return':args=[it]
        elif op=='free_value':args=[value,it]
        elif op=='any_new':args=[]
        elif op in ['any_free','string_free','integer']:args=[0 if case.get('null_arg') else value]
        elif op=='any_set':args=[self.any_value,case.get('set_type',4),0 if case.get('null_content') else self.converted]
        elif op=='string_new':args=[case.get('string_type',4)]
        elif op=='string_set':args=[self.existing,0 if case.get('null_content') else self.input,case.get('length',3)]
        else:
            self.put64(self.slot,0)
            if case.get('decode_sequence'):
                self.write_bytes(self.item,b'\1');self.put64(self.item+16,self.fields);self.put64(self.item+24,2);self.put64(self.item+40,128)
            if op=='entry':args=[slot,self.cursor,len(payload),it]
            elif op=='biodecode':
                bio=self.invoke(0x1005fedf0,[self.memory_method]);self.invoke(0x1005ff090,[bio,self.input,len(payload)]);args=[it,bio,slot]
            else:args=[slot,self.cursor,len(payload),it,-1,0,0,0,0]
        result=self.invoke((ENTRIES|COMPOSITIONS)[op],args)
        if op in VOID:returned=None
        elif op in POINTER:returned=self.label(result)
        elif op=='integer':returned=str(i64(result))
        else:returned=i32(result)
        if case.get('roundtrip') and result:self.invoke(ENTRIES['free_value'],[result,it])
        states={}
        for p,n,k,size in self.kinds:
            if k=='string':states[n]={'length':i32(self.get32(p)),'type':i32(self.get32(p+4)),'data':self.label(self.get64(p+8)),'flags':str(self.get64(p+16))}
            elif k=='any':states[n]={'type':i32(self.get32(p)),'padding':self.read_bytes(p+4,4).hex(),'value':self.label(self.get64(p+8))}
            elif k=='object':states[n]={'fields':[self.label(self.get64(p+i*8)) for i in range(3)],'selector':i32(self.get32(p+80)),'references':i32(self.get32(p+64)),'encoding':[self.label(self.get64(p+96)),str(self.get64(p+104)),i32(self.get32(p+112))]}
            elif k=='stack':states[n]=[self.label(v) for v in self.stacks[p]]
            elif k=='data':states[n]={'size':size,'sha256':hashlib.sha256(self.read_bytes(p,size)).hexdigest()}
            elif k=='buffer':states[n]={'length':str(self.get64(p)),'data':self.label(self.get64(p+8)),'capacity':str(self.get64(p+16))}
        return {'returned':returned,'value':self.label(self.get64(self.slot)),'cursor':self.label(self.get64(self.cursor)),'effects':self.effects,'state':states}
class NativeScenario(Scenario,ValueNative):
    def __init__(self,path):
        ValueNative.__init__(self,path);self.any_item=C.addressof((C.c_ubyte*56).in_dll(self.lib,'ESignOriginalASN1AnyItem'));self.callbacks.update({n:C.cast(getattr(self.lib,'ESignASN1ObjectTest_'+n),C.c_void_p).value for n in CALLBACKS})
        if self.read_bytes(self.any_item,48)!=bytes.fromhex('0000000000000000fcffffffffffffff')+bytes(32) or self.string(self.get64(self.any_item+48))!='ASN1_ANY':raise ValueError('Changed relocated original ANY descriptor')
        for op,a in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'))
            if op in ['new_core','free_core']:sig=[C.c_void_p,C.c_void_p,C.c_int]
            elif op=='reference':sig=[C.c_void_p,C.c_int,C.c_void_p]
            elif op=='any_new':sig=[]
            elif op=='string_new':sig=[C.c_int]
            elif op=='any_set':sig=[C.c_void_p,C.c_int,C.c_void_p]
            elif op=='string_set':sig=[C.c_void_p,C.c_void_p,C.c_uint64]
            elif op in ['new_return','any_free','string_free','integer']:sig=[C.c_void_p]
            else:sig=[C.c_void_p]*2
            f.argtypes=sig;f.restype=None if op in VOID else C.c_void_p if op in POINTER else C.c_long if op=='integer' else C.c_int;self.functions[a]=f
def cases():
    r=[]
    for op in ['new_core','free_core','primitive_new','primitive_free','new_return','free_value','clear']:
        for typ in [-1,0,1,2,3,4,5,6,7]:
            for utype in [-4,1,4,5,6]:
                for opt in [{},{'callback':True},{'functions':True}]:
                    if op=='clear':opt={**opt,'child_type':typ,'child_utype':utype}
                    r.append(dict(op=op,item_type=typ,utype=utype,**opt))
    for op in ['new_core','free_core','new','free']:
        for typ in [1,2,6]:
            for opt in [{'combine':1},{'callback':True,'pre_result':0},{'callback':True,'pre_result':2},{'callback':True,'post_result':0},{'callback':True,'callback_mutation':True},{'callback':True,'free_pre_result':2},{'aux_flags':3},{'aux_flags':1,'references':2},{'aux_flags':2,'old_encoding':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'stack_new_failure':True},{'callback':True,'callback_count':0}]:r.append(dict(op=op,item_type=typ,**opt))
    for flags in [0,1,2,4,6,256,512,1024]:
        for op in ['new_core','free_core','template_free','clear']:
            for count in [-1,0,1,2]:r.append(dict(op=op,item_type=1 if not op in ['template_free','clear'] else 0,template=op in ['template_free','clear'],field_flags=[flags,1,0],count=count))
    for typ in [0,3,4,5,7]:
        for ret in [0,1,2,-1]:
            for op in ['new','primitive_new']:r.append(dict(op=op,item_type=typ,callback=True,callback_result=ret))
    for typ in [0,5]:
        for utype in [-4,1,4,5,6,0x100000004]:
            for failure in [[],[0]]:r.append(dict(op='primitive_new',item_type=typ,utype=utype,malloc_failures=failure,preserve_initial=True))
    r += [dict(op='primitive_new',item_type=5,malloc_item_type=0),dict(op='primitive_new',utype=6,nid_null=True),dict(op='primitive_new',null_item=True)]
    for op in ['free_core','free','primitive_free']:
        for typ in [0,1,2,3,4,5,6]:r.append(dict(op=op,item_type=typ,null_value=True))
    for flags in [0,1,2,3]:
        for typ in [0,1,2,6]:
            for op in ['reference','encoding_init','encoding_free']:
                for option in [{},{'null_slot':True},{'null_value':True}]:
                    if op=='reference' and flags&1 and typ in [1,6] and option:continue
                    r.append(dict(op=op,item_type=typ,aux_flags=flags,operation=-1,old_encoding=True,**option))
    for typ in [-1,0,1,2,3,4,5,6,258]:
        for newtype in [1,4]:
            for null in [False,True]:r.append(dict(op='any_set',any_type=typ,set_type=newtype,null_content=null,any_inner=typ not in [1,5]))
    for op in ['any_new','any_free']:
        for opt in [{},{'malloc_failures':[0]},{'null_arg':True}]:r.append(dict(op=op,**opt))
    for typ in [-2147483648,-4,-1,0,1,4,30,2147483647]:
        for fail in [[],[0]]:r.append(dict(op='string_new',string_type=typ,malloc_failures=fail))
    for length in [-1,0,1,2,3,4,8,0x100000003,0x7fffffff]:
        for old in [0,3,16]:
            for opt in [{},{'null_content':True},{'null_data':True},{'realloc_failure':True},{'malloc_failures':[0]}]:
                if length==0x7fffffff and not (opt.get('realloc_failure') or opt.get('malloc_failures')):continue
                if length==0x7fffffff and opt.get('malloc_failures'):opt={**opt,'null_data':True}
                r.append(dict(op='string_set',length=length,old_length=old,**opt))
    for flags in [0,1,16,17,64,0xffffffffffffffff]:
        for null in [False,True]:r.append(dict(op='string_free',string_flags=flags,null_data=null))
    r += [dict(op='string_free',null_arg=True),dict(op='integer',null_arg=True)]
    for typ in [0,2,258,10]:
        for length in [-1,0,1,7,8,9]:
            for null in [False,True]:r.append(dict(op='integer',string_type=typ,old_length=length,null_data=null))
    for op in ['core','entry','biodecode']:
        for data in ['0403616263','2406040161040162','24800401610401620000','0500','0101ff']:
            for any_ in [False,True]:r.append(dict(op=op,utype=-4 if any_ else int(data[:2],16)&31,data=data))
        for data in ['3006040161040162','30800401610401620000']:
            for opt in [{},{'malloc_failures':[0]},{'malloc_failures':[1]}]:r.append(dict(op=op,decode_sequence=True,data=data,**opt))
    r += [dict(op='new_return',item_type=t,roundtrip=True) for t in [0,1,2,5,6]]
    for flags in [0,1,2,4,6,256,512,1024]:
        r.append(dict(op='new_core',template=True,field_flags=[flags,1,4]))
        if not flags&768:r.append(dict(op='free_core',template=True,field_flags=[flags,1,4]))
    for selector in [-1,1,2,3]:r.append(dict(op='free_core',item_type=2,selector=selector))
    r += [dict(op='clear',nested_template=True),dict(op='clear',utype=1,child_utype=1,boolean_initial=0x1234567800000000)]
    r += [dict(op='new_core',template=True,field_flags=[4,1,4],stack_new_failure=True),dict(op='any_free',any_type=1,boolean_any_true=True),dict(op='primitive_free',utype=-4,any_type=1,boolean_any_true=True)]
    return r
