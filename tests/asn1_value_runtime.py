"""Invented schemas and controlled dependencies for original/native comparisons."""
import ctypes as C,hashlib
from bio_input_runtime import Scenario as Memory,MASK,i32,i64
ENTRIES={'convert':0x100619f5c,'primitive':0x10061a27c,'collect':0x10061a964,'noexp':0x10061acc8}
COMPOSITIONS={'core':0x10061955c,'entry':0x100619304,'template':0x10061938c,'biodecode':0x100613354}
CALLBACKS={'convert':0x500000230}
DEPENDENCIES={0x10061b3ec:'ASN1_TYPE_new',0x10061b3f8:'ASN1_TYPE_free',0x100612e1c:'ASN1_TYPE_set',0x10061d254:'ASN1_STRING_type_new',0x10061cfa4:'ASN1_STRING_set',0x10061d1e0:'ASN1_STRING_free',0x1006111c4:'c2i_ASN1_BIT_STRING',0x100610d4c:'c2i_ASN1_OBJECT',0x1006125f4:'c2i_ASN1_INTEGER',0x100602154:'sk_new_null',0x100602610:'sk_num',0x100602560:'sk_pop',0x100602494:'sk_push',**{v:k for k,v in CALLBACKS.items()}}
class Scenario(Memory):
    def label(self,p):
        try:return Memory.label(self,p)
        except ValueError:
            if p and p<=0xffffffff:return 'scalar-'+str(p)
            raise
    def string_object(self,name,type_=4):
        p=self.allocate(name,24,'string',0);self.put32(p+4,type_);return p
    def dependency(self,target,a):
        if target==0x10061b3ec:
            self.effects.append({'call':'any_new'})
            return 0 if self.case.get('any_new_failure') else self.allocate('new-any',16,'any',0)
        if target==0x10061b3f8:self.effects.append({'call':'any_free','value':self.label(a[0])});return 0
        if target==0x100612e1c:
            self.effects.append({'call':'any_set','value':self.label(a[0]),'type':i32(a[1]),'content':self.label(a[2])});self.put32(a[0],a[1]);self.put64(a[0]+8,a[2]);return 0
        if target==0x10061d254:
            self.effects.append({'call':'string_new','type':i32(a[0])})
            return 0 if self.case.get('string_new_failure') else self.string_object('new-string-'+str(len(self.kinds)),a[0])
        if target==0x10061cfa4:
            n=i32(a[2]);self.effects.append({'call':'string_set','value':self.label(a[0]),'content':self.label(a[1]),'length_register':str(a[2]),'length':n})
            if self.case.get('string_set_failure'):return 0
            if n<0 or n>65535:raise ValueError('Unbounded invented string setter')
            p=self.allocate('set-data-'+str(len(self.kinds)),n+1,'data',0);self.write_bytes(p,self.read_bytes(a[1],n));self.put64(a[0]+8,p);self.put32(a[0],n);return 1
        if target==0x10061d1e0:self.effects.append({'call':'string_free','value':self.label(a[0])});return 0
        if target in [0x1006111c4,0x100610d4c,0x1006125f4]:
            n=i64(a[2]);self.effects.append({'call':DEPENDENCIES[target],'previous':self.label(self.get64(a[0])),'content':self.label(self.get64(a[1])),'length':str(n)})
            if self.case.get('content_decoder_failure'):return 0
            self.put64(a[0],self.converted);self.put64(a[1],self.get64(a[1])+max(0,n));return self.converted
        if target==0x100602154:
            self.effects.append({'call':'stack_new'})
            if self.case.get('stack_new_failure'):return 0
            p=self.allocate('new-stack',32,'stack',0);self.stacks[p]=[];return p
        if target in [0x100602610,0x100602560,0x100602494]:
            stack=self.stacks[a[0]];name=DEPENDENCIES[target];row={'call':name,'stack':self.label(a[0])}
            if target==0x100602610:result=len(stack);row['count']=result
            elif target==0x100602560:result=stack.pop();row['value']=self.label(result)
            else:
                row['value']=self.label(a[1]);index=self.push_count;self.push_count+=1;result=0 if index in self.case.get('push_failures',[]) else 1
                row['result']=result
                if result:stack.append(a[1])
            self.effects.append(row);return result
        if target in [0x10061848c,0x100618494]:
            self.effects.append({'call':'item_free' if target==0x10061848c else 'template_free','previous':self.label(self.get64(a[0])),'descriptor':self.label(a[1])})
            self.put64(a[0],0);return 0
        if target==0x100617b3c:
            self.effects.append({'call':'item_new','item':self.label(a[1])});p=self.allocate('new-object-'+str(len(self.kinds)),256,'object',0);self.put64(a[0],p);return 1
        if target==0x500000230:
            self.effects.append({'call':'convert_callback','previous':self.label(self.get64(a[0])),'content':self.label(a[1]),'length_register':str(a[2]),'type':i32(a[3]),'free_content':self.read_bytes(a[4],1).hex(),'item':self.label(a[5])})
            self.put64(a[0],self.converted)
            if 'callback_free' in self.case:self.write_bytes(a[4],bytes([self.case['callback_free']]))
            return self.case.get('callback_result',1)&0xffffffff
        if target==0x1006057d8:
            self.effects.append({'call':'error_data','strings':[self.string(p) for p in a[1:i32(a[0])+1]]});return 0
        if target in [0x100604e30,0x100605198]:return 0
        return Memory.dependency(self,target,a)
    def evaluate(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.malloc_count=0;self.push_count=0;self.stacks={}
        self.item=self.allocate('item',56,fill=0);self.child=self.allocate('child',56,fill=0);self.fields=self.allocate('fields',80,fill=0);self.functions_table=self.allocate('primitive-functions',48,fill=0)
        name=self.allocate('item-name',32,fill=0);self.write_bytes(name,b'InventedSchema\0')
        typ=case.get('type',4);any_=case.get('any',False)
        for p in [self.item,self.child]:
            self.put64(p+8,-4 if any_ else typ);self.put64(p+40,256);self.put64(p+48,name)
        self.write_bytes(self.item,bytes([case.get('item_type',0)&255]))
        if case.get('callback'):
            self.put64(self.functions_table+40,self.callbacks['convert']);self.put64(self.item+32,self.functions_table);self.put64(self.child+32,self.functions_table)
        elif case.get('null_callback'):self.put64(self.item+32,self.functions_table)
        for i in range(2):
            f=self.fields+40*i;self.put64(f,case.get('flags',0));self.put64(f+8,case.get('field_tag',4));self.put64(f+16,i*8);self.put64(f+24,name);self.put64(f+32,self.child)
        self.converted=self.string_object('converted',case.get('converted_type',258));self.existing=self.string_object('existing',case.get('existing_type',12))
        old=self.allocate('old-data',32,'data',0x76);self.put64(self.existing+8,0 if case.get('no_old_data') else old);self.put32(self.existing,3)
        self.any_value=self.allocate('existing-any',16,'any',0);self.put32(self.any_value,case.get('any_type',12));self.put64(self.any_value+8,self.existing if case.get('any_inner') else 0)
        self.stack=self.allocate('existing-stack',32,'stack',0);self.stacks[self.stack]=[self.existing,self.converted][:case.get('old_count',2)]
        data=bytes.fromhex(case.get('data','0403616263'));self.encoded=self.allocate('encoded',4096,'data',0x7b);self.write_bytes(self.encoded,data)
        self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,self.encoded)
        self.slot=self.allocate('value-slot',8,fill=0);self.free_flag=self.allocate('free-content',1,fill=case.get('free_content',0))
        self.context=self.allocate('context',32,fill=0x6b);self.write_bytes(self.context,b'\0')
        self.buffer=self.allocate('collect-buffer',24,'buffer',0)
        if case.get('buffer_length',0):self.put64(self.buffer,case['buffer_length']);self.put64(self.buffer+8,old);self.put64(self.buffer+16,32)
        self.object=self.allocate('existing-object',256,'object',0)
        op=case['op'];flags=case.get('flags',0);initial=case.get('initial',False)
        value=self.stack if op in ['noexp','template'] and flags&6 else self.any_value if any_ else self.existing
        if typ==1 and not any_:value=case.get('boolean_initial',0)
        if op in ['core','entry','biodecode'] and case.get('sequence'):
            self.write_bytes(self.item,b'\1');self.put64(self.item+16,self.fields);self.put64(self.item+24,case.get('field_count',2));value=self.object
        self.put64(self.slot,value if initial else 0)
        slot=0 if case.get('null_slot') else self.slot;ctx=0 if case.get('no_context') else self.context
        length=case.get('length',len(data));tag=case.get('tag',-1);cls=case.get('xclass',0);opt=case.get('optional',0);depth=case.get('depth',0)
        if op=='convert':args=[slot,self.encoded,case.get('content_length',len(data)),typ,self.free_flag,self.item]
        elif op=='primitive':args=[slot,self.cursor,length,self.item,tag,cls,opt,ctx]
        elif op=='collect':args=[0 if case.get('null_buffer') else self.buffer,self.cursor,length,case.get('indefinite',0),depth]
        elif op in ['noexp','template']:args=[slot,self.cursor,length,self.fields,opt,ctx,depth]
        elif op=='entry':args=[slot,self.cursor,length,self.item]
        elif op=='biodecode':
            bio=self.invoke(0x1005fedf0,[self.memory_method]);self.invoke(0x1005ff090,[bio,self.encoded,len(data)]);args=[self.item,bio,slot]
        else:args=[slot,self.cursor,length,self.item,tag,cls,opt,ctx,depth]
        result=self.invoke((ENTRIES|COMPOSITIONS)[op],args)
        states={}
        for p,name,kind,size in self.kinds:
            if kind=='string':states[name]={'length':i32(self.get32(p)),'type':i32(self.get32(p+4)),'data':self.label(self.get64(p+8)),'flags':str(self.get64(p+16))}
            elif kind=='any':states[name]={'type':i32(self.get32(p)),'padding':self.read_bytes(p+4,4).hex(),'value':self.label(self.get64(p+8))}
            elif kind=='stack':states[name]=[self.label(v) for v in self.stacks[p]]
            elif kind=='buffer':states[name]={'length':str(self.get64(p)),'data':self.label(self.get64(p+8)),'capacity':str(self.get64(p+16))}
            elif kind=='object':states[name]=[self.label(self.get64(p+i*8)) for i in range(2)]
            elif kind=='data':states[name]={'size':size,'sha256':hashlib.sha256(self.read_bytes(p,size)).hexdigest()}
        return {'returned':self.label(result) if op in ['entry','biodecode'] else i32(result),'value':self.label(self.get64(self.slot)),'cursor':self.label(self.get64(self.cursor)),'context':self.read_bytes(self.context,32).hex(),'free_content':self.read_bytes(self.free_flag,1).hex(),'effects':self.effects,'state':states}
class NativeScenario(Scenario):
    def __init__(self,path):
        self.lib=C.CDLL(str(path));self.buffers=[];self.callback_error=None;self.memory_method=C.addressof((C.c_ubyte*80).in_dll(self.lib,'ESignOriginalBIOMemoryMethod'))
        self.callbacks={n:C.cast(getattr(self.lib,'ESignASN1ValueTest_'+n),C.c_void_p).value for n in CALLBACKS}
        callback_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*12))
        def call(target,*a):
            try:return self.dependency(target,a)&MASK
            except Exception as ex:self.callback_error=ex;return 0
        self.callback=callback_type(call);C.c_void_p.in_dll(self.lib,'ESignASN1ItemTestBoundary').value=C.cast(self.callback,C.c_void_p).value
        bio_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*7));self.bio_callback=bio_type(call);C.c_void_p.in_dll(self.lib,'ESignBIOTestBoundary').value=C.cast(self.bio_callback,C.c_void_p).value
        signatures={'convert':[C.c_void_p,C.c_void_p,C.c_uint64,C.c_int,C.c_void_p,C.c_void_p],'primitive':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_int,C.c_int,C.c_void_p],'collect':[C.c_void_p,C.c_void_p,C.c_long,C.c_int,C.c_int],'noexp':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_void_p,C.c_int],'template':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_void_p,C.c_int],'core':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_int,C.c_int,C.c_void_p,C.c_int],'entry':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p]}
        signatures['biodecode']=[C.c_void_p]*3
        self.functions={}
        for op,address in (ENTRIES|COMPOSITIONS).items():
            f=getattr(self.lib,'ESignOriginal_'+format(address,'x'));f.argtypes=signatures[op];f.restype=C.c_void_p if op in ['entry','biodecode'] else C.c_int;self.functions[address]=f
        for address,signature in [(0x1005fedf0,[C.c_void_p]),(0x1005ff090,[C.c_void_p,C.c_void_p,C.c_int])]:
            f=getattr(self.lib,'ESignOriginal_'+format(address,'x'));f.argtypes=signature;f.restype=C.c_void_p if address==0x1005fedf0 else C.c_int;self.functions[address]=f
    def reset_heap(self):self.buffers=[];self.callback_error=None
    def raw(self,name,size):
        b=C.create_string_buffer(size);self.buffers.append(b);return C.addressof(b)
    def read_bytes(self,p,n):return C.string_at(p,n)
    def write_bytes(self,p,b):C.memmove(p,b,len(b))
    def invoke(self,address,args):
        result=self.functions[address](*args)
        if self.callback_error:raise self.callback_error
        return result or 0
def cases():
    r=[]
    for typ in [-5,-4,-3,-1,*range(0,33),255,0x7fffffff]:
        for length in [0,1,2,3,4]:
            for initial in [False,True]:r.append(dict(op='convert',type=typ,data='ff6162636465',content_length=length,initial=initial))
    for typ in [1,2,3,4,5,6,10,16,17,28,30,-3]:
        for initial in [False,True]:
            for any_ in [False,True]:
                for opt in [{'string_new_failure':True},{'string_set_failure':True},{'content_decoder_failure':True},{'free_content':1},{'no_old_data':True}]:r.append(dict(op='convert',type=typ,initial=initial,any=any_,data='ff616263',content_length=4,**opt))
    for typ in [1,2,3,4,5,6,10,16,28,30,-3]:
        for any_ in [False,True]:
            for oldtype in [typ,12]:r.append(dict(op='convert',type=typ,any=any_,any_type=oldtype,initial=True,data='ff',content_length=0 if typ==5 else 1,any_inner=typ!=1))
    r += [dict(op='convert',any=True,any_new_failure=True),dict(op='convert',type=4,content_length=0x100000003,data='616263'),dict(op='convert',type=2,content_length=0xffffffff,data='00',content_decoder_failure=True),dict(op='convert',type=4,callback=True,content_length=0x100000003,callback_result=-1)]
    for op in ['primitive','core','entry']:
        for tag in [1,2,3,4,5,6,10,12,16,17,28,30]:
            for body in [b'',b'\xff',b'ab',b'abcd']:
                for constructed in [False,True]:
                    t=tag|(32 if constructed else 0);data=(bytes([t,len(body)])+body).hex();r.append(dict(op=op,type=tag,data=data))
        for data in ['0403616263','4403616263','a003040161','3003040161','30800401610000','3080308004016100000000','3080040161','2406040161040162','24800401610401620000','2480248004016100000000','040561','1f1f00','0400']:
            for any_ in [False,True]:r.append(dict(op=op,type=4,any=any_,data=data))
    for data in ['040161','040561','0400','0500','3000','24800000','2403040161']:
        for optional in [0,1,256]:
            for tag in [-1,4,5]:r.append(dict(op='primitive',data=data,optional=optional,tag=tag))
    r += [dict(op='primitive',null_slot=True),dict(op='primitive',any=True,tag=4),dict(op='primitive',any=True,optional=1),dict(op='primitive',any=True,data='040561'),dict(op='primitive',item_type=5,tag=4,data='040161')]
    for data in ['040161','2403040161','24800401610000','2400']:
        for options in [{'callback':True,'callback_result':0},{'callback':True,'callback_free':1},{'malloc_failures':[0]},{'realloc_failure':True},{'string_new_failure':True},{'string_set_failure':True}]:r.append(dict(op='primitive',data=data,**options))
    chunks=['','0400','040161','040161040162','040561','0000','0401610000','24800401610000','2403040161','24020000','24800000','2480040161','1f1f00']
    for data in chunks:
        for inf in [0,1,2,3,-1]:
            for depth in [-1,0,4,5,2147483647]:r.append(dict(op='collect',data=data,indefinite=inf,depth=depth))
    for data in chunks:
        for inf in [0,1]:r.append(dict(op='collect',data=data,indefinite=inf,null_buffer=True))
    for d in range(1,8):r.append(dict(op='collect',data=('2480'*d+'040161'+'0000'*d),indefinite=0))
    for data in ['040161','0401610403626364','24800401610000']:
        for options in [{'malloc_failures':[0]},{'realloc_failure':True,'buffer_length':3},{'buffer_length':3}]:r.append(dict(op='collect',data=data,**options))
    for op in ['noexp','template']:
        for flags in [0,8,72,136,200,1024,2,4,6,10,12,74,140,0x100000004]:
            for data in ['040161','440161','3000','3006040161040162','3103040161','30800401610000','3080040161','30020000','3003040561']:
                for initial in [False,True]:r.append(dict(op=op,flags=flags,data=data,initial=initial))
        for options in [{'stack_new_failure':True},{'push_failures':[0]},{'push_failures':[1]},{'content_decoder_failure':True,'type':2},{'optional':1},{'depth':30}]:r.append(dict(op=op,flags=4,data='3006040161040162',**options))
        r.append(dict(op=op,null_slot=True))
    for op in ['core','entry']:
        for data in ['3006040161040162','30800401610401620000','3003040161','3000','3006040161020162']:
            for initial in [False,True]:r.append(dict(op=op,sequence=True,data=data,initial=initial))
    r += [dict(op='convert',type=0,any=True,content_length=0),dict(op='collect',data='040161',depth=5,malloc_failures=[0])]
    for data in ['308061','308030800000','30801fff','3080040561']:
        r.append(dict(op='primitive',type=16,data=data))
    for data in ['0403616263','2406040161040162','24800401610401620000','30800401610000','0500','0101ff','02017f','06012a']:
        for any_ in [False,True]:
            r.append(dict(op='biodecode',type=int(data[:2],16)&31,any=any_,data=data))
    for data in ['3006040161040162','30800401610401620000']:
        r.append(dict(op='biodecode',sequence=True,data=data))
    # A matching implicit collection containing one raw byte reaches a header
    # failure before all outputs are defined. Compare that path without a TLC;
    # do not turn its uninitialized cached output into a claimed C equivalence.
    for c in r:
        if c['op'] in ['noexp','template'] and c.get('flags',0)&6 and c.get('flags',0)&8 and c.get('data') in ['040161','440161']:c['no_context']=True
    return r
