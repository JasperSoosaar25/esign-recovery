"""Invented schemas/state shared by original ARM64 and native C comparisons."""
import ctypes as C,hashlib,struct
from bio_input_runtime import Scenario as Memory,MASK,i32,i64
ENTRIES={'core':0x10061955c,'template':0x10061938c,'check':0x10061a738,'get_choice':0x10061aff4,'set_choice':0x10061b004,'save':0x10061b0f8,'field':0x10061b218,'adb':0x10061b230,'entry':0x100619304}
CALLBACKS={'aux':0x500000200,'compat':0x500000210,'extern':0x500000220}
class Scenario(Memory):
    def dependency(self,target,a):
        if target==0x1006057d8:
            count=i32(a[0]);self.effects.append({'call':'error_data','strings':[self.string(p) for p in a[1:count+1]]});return 0
        if target==0x100617b3c:
            result=self.case.get('new_result',1);self.effects.append({'call':'item_new','value':self.label(a[0]),'item':self.label(a[1]),'result':result})
            if result or self.case.get('new_failure_mutation'):self.put64(a[0],self.object)
            return result&0xffffffff
        if target in [0x10061848c,0x100618494]:
            self.effects.append({'call':'item_free' if target==0x10061848c else 'template_free','value':self.label(a[0]),'descriptor':self.label(a[1])})
            if not self.case.get('free_preserves'):self.put64(a[0],0)
            return 0
        if target in [0x1005b3138,0x100612af0]:
            result=self.case.get('oid_result' if target==0x1005b3138 else 'integer_result',2)
            self.effects.append({'call':'obj2nid' if target==0x1005b3138 else 'integer_get','value':self.label(a[0]),'result':str(result)});return result&MASK
        if target in [0x10061a27c,0x10061acc8]:
            primitive=target==0x10061a27c
            ctx=a[7] if primitive else a[5]
            row={'call':'primitive' if primitive else 'noexp','value':self.label(a[0]),'cursor':self.label(self.get64(a[1])),'length':str(i64(a[2])),'descriptor':self.label(a[3]),'context':'entry-context' if self.case['op']=='entry' else self.label(ctx),'context_first_byte':self.read_bytes(ctx,1).hex() if ctx else None}
            if primitive:row.update(tag=i32(a[4]),xclass=i32(a[5]),optional=i32(a[6]))
            else:row.update(optional=i32(a[4]),depth=i32(a[6]))
            n=self.parser_count;self.parser_count+=1;results=self.case.get('parser_results',[]);result=results[n] if n<len(results) else self.case.get('parser_result',1)
            row['result']=result;self.effects.append(row)
            if result>0 or self.case.get('parser_failure_mutation'):
                self.put64(a[0],self.decoded);advance=self.case.get('consume',1);self.put64(a[1],self.get64(a[1])+advance)
            elif result==-1 and self.case.get('absent_advance'):self.put64(a[1],self.get64(a[1])+self.case['absent_advance'])
            return result&0xffffffff
        name=next((n for n,p in self.callbacks.items() if p==target),None)
        if not name:name=next((n for n,p in CALLBACKS.items() if p==target),None)
        if name=='aux':
            operation=i32(a[0]);result=self.case.get('pre_result',1) if operation==4 else self.case.get('post_result',1)
            self.effects.append({'call':'aux','operation':operation,'value':self.label(a[1]),'item':self.label(a[2]),'argument':self.label(a[3]),'result':result})
            if self.case.get('callback_mutation'):self.put64(self.aux+24,0)
            if operation==4 and 'callback_count' in self.case:self.put64(self.item+24,self.case['callback_count'])
            if self.case.get('callback_cursor_mutation'):self.put64(self.cursor_slot,self.encoded+5)
            return result&0xffffffff
        if name in ['compat','extern']:
            row={'call':name,'value':self.label(a[0]),'cursor':self.label(self.get64(a[1])),'length':str(i64(a[2])),'first_byte':self.read_bytes(self.get64(a[1]),1).hex()}
            if name=='extern':row.update(item=self.label(a[3]),tag=i32(a[4]),xclass=i32(a[5]),optional=i32(a[6]),context='entry-context' if self.case['op']=='entry' else self.label(a[7]))
            self.effects.append(row);self.put64(a[0],self.decoded);self.put64(a[1],self.get64(a[1])+self.case.get('consume',1))
            return (self.decoded if self.case.get('compat_result',1) else 0) if name=='compat' else self.case.get('extern_result',1)&0xffffffff
        if target in [0x100604e30,0x100605198]:return 0
        return Memory.dependency(self,target,a)
    def evaluate(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.malloc_count=0;self.parser_count=0
        self.object=self.allocate('object',512,fill=0);self.decoded=self.allocate('decoded',64,fill=0x6c)
        self.item=self.allocate('item',56,fill=0);self.aux=self.allocate('aux',40,fill=0);self.templates=self.allocate('templates',160,fill=0)
        self.selector=self.allocate('selector',24,fill=0);self.adb=self.allocate('adb',56,fill=0);self.adb_table=self.allocate('adb-table',144,fill=0)
        self.default_field=self.allocate('default-field',40,fill=0);self.null_field=self.allocate('null-field',40,fill=0)
        self.item_name=self.allocate('item-name',32,fill=0);self.write_bytes(self.item_name,b'SyntheticItem\0')
        self.field_names=[]
        for i in range(4):
            p=self.allocate('field-name-'+str(i),16,fill=0);self.write_bytes(p,('Field'+str(i)).encode()+bytes(1));self.field_names.append(p)
        payload=bytes.fromhex(case.get('data','300401020304'));self.encoded=self.allocate('encoded',256,fill=0x7b);self.write_bytes(self.encoded,payload)
        self.cursor_slot=self.allocate('cursor-slot',8,fill=0);self.put64(self.cursor_slot,self.encoded)
        self.value_slot=self.allocate('value-slot',8,fill=0);self.put64(self.value_slot,0 if case.get('initial_null') else self.object)
        self.context=self.allocate('context',32,fill=0x6b);self.write_bytes(self.context,bytes([case.get('valid',0)]))
        for o,key,default in [(4,'cached_result',32),(8,'cached_length',4),(16,'cached_tag',16),(20,'cached_class',0),(24,'cached_header',2)]:
            (self.put64 if o==8 else self.put32)(self.context+o,case.get(key,default))
        self.outputs=self.allocate('outputs',32,fill=0x6a)
        type_=case.get('type',1);count=case.get('count',2);flags=case.get('field_flags',[0,1,1,1]);self.count=count
        self.write_bytes(self.item,bytes([type_&255]));self.put64(self.item+8,case.get('utype',80 if type_==2 else 512 if type_==5 else 4))
        self.put64(self.item+16,0 if case.get('no_templates',type_ in [0,3,4,5]) else self.templates);self.put64(self.item+24,count)
        has_aux=case.get('callback',False) or case.get('aux_flags',0) or type_ in [3,4]
        self.put64(self.item+32,self.aux if has_aux else 0);self.put64(self.item+40,128);self.put64(self.item+48,self.item_name)
        self.put32(self.aux+8,case.get('aux_flags',0));self.put32(self.aux+32,case.get('encoding_offset',96))
        self.put64(self.aux+24,self.callbacks['aux'] if case.get('callback') else 0)
        if type_==3:self.put64(self.aux+16,self.callbacks['compat'])
        if type_==4:self.put64(self.aux+32,self.callbacks['extern'])
        for i in range(4):
            f=self.templates+40*i;flag=flags[i] if i<len(flags) else 1
            self.put64(f,flag);self.put64(f+8,case.get('field_tag',16));self.put64(f+16,case.get('field_offset',i*8));self.put64(f+24,self.field_names[i]);self.put64(f+32,self.adb if flag&768 else self.item)
        self.put32(self.object+case.get('choice_offset',80),case.get('selector',-1));self.put64(self.object+64,0 if case.get('null_selector') else self.selector)
        self.put64(self.adb+8,64);self.put64(self.adb+24,self.adb_table);self.put64(self.adb+32,case.get('adb_count',3))
        self.put64(self.adb+40,self.default_field if case.get('default_field') else 0);self.put64(self.adb+48,self.null_field if case.get('null_field') else 0)
        for i,number in enumerate(case.get('adb_values',[0,2,-1])):
            self.put64(self.adb_table+48*i,number);self.put64(self.adb_table+48*i+8+16,24);self.put64(self.adb_table+48*i+8+24,self.field_names[i]);self.put64(self.adb_table+48*i+8+32,self.item)
        encoding=self.object+case.get('encoding_offset',96);self.put64(encoding,0);self.put64(encoding+8,77);self.put32(encoding+16,5)
        if case.get('old_encoding'):self.put64(encoding,self.allocate('old-encoding',128,fill=0x76))
        if case.get('null_value'):self.put64(self.value_slot,0)
        op=case['op'];value=0 if case.get('null_slot') else self.value_slot;ctx=0 if case.get('no_context') else self.context
        tag=case.get('tag',-1);cls=case.get('xclass',0);optional=case.get('optional',0);depth=case.get('depth',0);length=case.get('length',len(payload))
        if op=='core':args=[value,self.cursor_slot,length,self.item,tag,cls,optional,ctx,depth]
        elif op=='entry':args=[value,self.cursor_slot,length,self.item]
        elif op=='template':args=[value,self.cursor_slot,length,self.templates,optional,ctx,depth]
        elif op=='check':
            output=[0 if case.get('null_outputs') else self.outputs+o for o in [0,8,12,13,14]]
            args=output+[self.cursor_slot,length,tag,cls,optional,ctx]
        elif op in ['get_choice','field','adb']:args=[value,self.item if op=='get_choice' else self.templates]+([case.get('null_error',1)] if op=='adb' else [])
        elif op=='set_choice':args=[value,case.get('new_selector',3),self.item]
        else:args=[value,self.encoded,case.get('save_length',length),self.item]
        returned=self.invoke(ENTRIES[op],args)
        if op in ['field','adb','entry']:returned=self.label(returned)
        else:returned=str(i32(returned))
        ep=self.get64(encoding);el=self.get64(encoding+8)
        return {'returned':returned,'value':self.label(self.get64(self.value_slot)),'cursor':self.label(self.get64(self.cursor_slot)),'input':self.read_bytes(self.encoded,min(len(payload)+2,64)).hex(),'effects':self.effects,'context':self.read_bytes(self.context,32).hex(),'outputs':self.read_bytes(self.outputs,32).hex(),'selector':i32(self.get32(self.object+case.get('choice_offset',80))),'fields':[self.label(self.get64(self.object+i*8)) for i in range(4)],'encoding':{'pointer':self.label(ep),'length':str(i64(el)),'modified':i32(self.get32(encoding+16)),'sha256':hashlib.sha256(self.read_bytes(ep,el)).hexdigest() if ep and el<=65536 else None}}
class NativeScenario(Scenario):
    def __init__(self,path):
        self.lib=C.CDLL(str(path));self.buffers=[];self.callback_error=None;self.memory_method=0
        self.callbacks={n:C.cast(getattr(self.lib,'ESignASN1ItemTest_'+n),C.c_void_p).value for n in CALLBACKS}
        callback_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*12))
        def call(target,*a):
            try:return self.dependency(target,a)&MASK
            except Exception as ex:self.callback_error=ex;return 0
        self.callback=callback_type(call);C.c_void_p.in_dll(self.lib,'ESignASN1ItemTestBoundary').value=C.cast(self.callback,C.c_void_p).value
        bio_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*7))
        self.bio_callback=bio_type(call);C.c_void_p.in_dll(self.lib,'ESignBIOTestBoundary').value=C.cast(self.bio_callback,C.c_void_p).value
        self.functions={}
        signatures={'core':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_int,C.c_int,C.c_void_p,C.c_int], 'template':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_void_p,C.c_int], 'check':[C.c_void_p]*6+[C.c_long,C.c_int,C.c_int,C.c_int8,C.c_void_p], 'get_choice':[C.c_void_p]*2,'set_choice':[C.c_void_p,C.c_int,C.c_void_p],'save':[C.c_void_p,C.c_void_p,C.c_uint64,C.c_void_p],'field':[C.c_void_p]*2,'adb':[C.c_void_p,C.c_void_p,C.c_int],'entry':[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p]}
        for op,address in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(address,'x'));f.argtypes=signatures[op];f.restype=C.c_void_p if op in ['field','adb','entry'] else C.c_int;self.functions[address]=f
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
    for type_ in [-1,0,1,2,3,4,5,6,7,127]:
        for depth in [-1,0,29,30,2147483647]:
            for cls in [0,1024]:r.append(dict(op='core',type=type_,depth=depth,xclass=cls))
    for op in ['get_choice','set_choice']:
        for selector in [-2147483648,-1,0,1,2147483647]:r.append(dict(op=op,type=2,selector=selector,new_selector=~selector))
    for flags in [0,1,256,512,768,1024,0xffffffffffffffff]:r.append(dict(op='field',field_flags=[flags],field_offset=16))
    for flags in [0,256,512,768]:
        for number in [-1,0,1,2,3,0x100000001]:
            for default in [False,True]:r.append(dict(op='adb',field_flags=[flags],oid_result=number,integer_result=number,default_field=default))
        for nullerr in [0,1]:
            for nullfield in [False,True]:r.append(dict(op='adb',field_flags=[flags],null_selector=True,null_field=nullfield,null_error=nullerr))
    for op in ['core','entry']:
        for type_ in [0,1,2,3,4,5,6]:
            for option in [{},{'initial_null':True},{'callback':True},{'optional':1},{'callback':True,'callback_mutation':True},{'callback':True,'pre_result':0},{'callback':True,'post_result':0},{'new_result':0,'initial_null':True}]:r.append(dict(op=op,type=type_,**option))
    for optional in [-1,0,1]:
        for result in [-2,-1,0,1,2]:
            for type_ in [0,2]:r.append(dict(op='core',type=type_,optional=optional,parser_result=result))
    for count in [-1,0,1,2,3,4]:
        for selector in [-2,-1,0,1,3,4]:r.append(dict(op='core',type=2,count=count,selector=selector,parser_results=[-1,1,-1,1]))
    for results in [[-1,-1],[-1,0],[0],[1],[-1,1]]:
        for optional in [0,1]:r.append(dict(op='core',type=2,parser_results=results,optional=optional,callback=True))
    for type_ in [1,6]:
        for data in ['3000','30020102','300401020304','308001020000','30800000','30800102','30020000','0400','3100','a000']:
            for count in [0,1,2]:r.append(dict(op='core',type=type_,data=data,count=count))
        for flags in [[1,1],[0,0],[256,1],[512,1],[1024,1]]:
            for result in [0,-1,1]:r.append(dict(op='core',type=type_,field_flags=flags,parser_result=result,count=1 if flags[0]&1024 else 2))
        for option in [{'aux_flags':4},{'aux_flags':2},{'aux_flags':2,'malloc_failures':[0]},{'callback':True,'callback_count':1},{'callback':True,'callback_cursor_mutation':True},{'callback':True,'pre_result':-1,'post_result':-1},{'aux_flags':2,'old_encoding':True}]:r.append(dict(op='core',type=type_,**option))
    for type_ in [0,5]:
        for tag in [-1,4,5,31]:
            for optional in [0,1]:r.append(dict(op='core',type=type_,tag=tag,optional=optional,data='040161'))
    for data in ['040161','440161','1f1f00','0200','2400']:
        for optional in [0,1]:r.append(dict(op='core',type=5,data=data,optional=optional))
    r += [dict(op='core',type=0,no_templates=False,tag=t,optional=o) for t,o in [(-1,0),(4,0),(-1,1)]]
    for tag in [-1,4,16]:
        for optional in [0,1]:
            for result in [0,1]:r.append(dict(op='core',type=3,tag=tag,optional=optional,compat_result=result,data='30000102'))
    for op in ['core','template','save']:
        r.append(dict(op=op,null_slot=True))
    for flags in [0,2,4,6]:
        for old in [False,True]:
            for fail in [[],[0]]:r.append(dict(op='save',aux_flags=flags,old_encoding=old,malloc_failures=fail,save_length=4))
    r += [dict(op='save',aux_flags=2,save_length=0),dict(op='save',aux_flags=2,save_length=0x100000001,malloc_failures=[0]),dict(op='save',aux_flags=2,null_value=True)]
    for data in ['3000','30020102','308001020000','30800102','0400','30020000','300401020304']:
        for flags in [0,16,80]:
            for optional in [0,1]:r.append(dict(op='template',data=data,field_flags=[flags],optional=optional))
    for result in [-1,0,1]:r.append(dict(op='template',data='30020102',field_flags=[16],parser_result=result))
    for data in ['3000','30020102','30800000','040161','040361','0400','a000','1f1f00']:
        for tag in [-1,4,16]:
            for optional in [0,1]:
                for noctx in [False,True]:r.append(dict(op='check',data=data,tag=tag,optional=optional,no_context=noctx))
    for tag in [-1,4,16]:
        for optional in [0,1]:
            for cached in [0,1,32,33,128]:r.append(dict(op='check',valid=1,tag=tag,optional=optional,cached_result=cached))
    r += [dict(op='check',null_outputs=True),dict(op='check',no_context=True,data='',length=0),dict(op='check',valid=1,cached_header=-1,tag=4,optional=1)]
    r += [dict(op='template',field_flags=[16],data='30020102',consume=2),dict(op='template',field_flags=[16],data='308001020000',consume=2),dict(op='template',field_flags=[16],field_tag=4,data='0400')]
    r += [dict(op='core',type=3,optional=1,data='040561'),dict(op='core',type=5,data='040561'),dict(op='core',type=1,tag=4,data='0400')]
    r += [dict(op='core',type=2,xclass=1024,parser_result=0),dict(op='core',type=1,xclass=1024,data='3000')]
    r += [dict(op='core',type=t,field_flags=[1,1],data='3000',callback=True) for t in [1,6]]
    r += [dict(op='adb',field_flags=[512],adb_count=0)]
    bits=[0,0,0,1024,512,0,0,4096,4096,4096,4096,4096,8192,4096,4096,4096,65536,0,1,2,4,8,16,16384,32768,32,64,128,256,4096,2048]
    for tag,bit in enumerate(bits):
        for mask in [bit,(~bit)&MASK]:r.append(dict(op='core',type=5,utype=mask,data=bytes([tag,0]).hex()))
    return r
