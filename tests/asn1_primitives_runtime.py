"""Invented content and live stack state for original/native comparisons."""
import ctypes as C,hashlib
from bio_input_runtime import MASK,i32,i64
from asn1_object_runtime import Scenario as ObjectScenario,NativeScenario as ObjectNative
ENTRIES={'stack_new':0x100602154,'stack_num':0x100602610,'stack_pop':0x100602560,'stack_push':0x100602494,'stack_free':0x100602124,'stack_value':0x100602624,'bit':0x1006111c4,'object':0x100610d4c,'integer':0x1006125f4,'object_free':0x100610ffc}
COMPOSITIONS={'core':0x10061955c,'entry':0x100619304,'biodecode':0x100613354,'noexp':0x10061acc8,'template':0x10061938c}
class Scenario(ObjectScenario):
    def label(self,p):
        if p==0xa5a5a5a5a5a5a5a5:return 'fixture-fill-a5'
        return ObjectScenario.label(self,p)
    def retag(self,p,kind):
        if p:self.kinds=[(b,n,kind if b==p else k,z) for b,n,k,z in self.kinds]
    def dependency(self,target,a):
        if target==0x100604c0c:self.last_error=i32(a[2]);return ObjectScenario.dependency(self,target,a)
        if target==0x100605198:self.effects.append({'call':'error_peek','modeled_reason':self.last_error});return self.last_error
        if target==0x100604e30:self.effects.append({'call':'error_clear'});self.last_error=0;return 0
        if target==0x1005b11cc:
            file,line=self.string(a[1]),i32(a[2]);index=self.malloc_count
            if file=='a_object.c' and line==330 and self.case.get('allocation_oid_flags') is not None:
                self.put32(self.active_oid+32,self.case['allocation_oid_flags']);self.put64(self.active_oid,self.short_name);self.put64(self.active_oid+8,self.long_name);self.put64(self.active_oid+24,self.storage)
            p=ObjectScenario.dependency(self,target,a)
            if file=='stack.c':self.retag(p,'stack' if line==162 else 'pointers')
            if file=='a_object.c' and line==361:self.retag(p,'oid');self.active_oid=p if p else self.active_oid
            if self.case.get('malloc_cursor_index')==index:self.put64(self.cursor,self.alt)
            return p
        if target==0x1005b137c:
            p=ObjectScenario.dependency(self,target,a)
            if self.string(a[2])=='stack.c':
                self.retag(p,'pointers')
                if 'realloc_count' in self.case:self.put32(self.stack,self.case['realloc_count'])
                if 'realloc_capacity' in self.case:self.put32(self.stack+20,self.case['realloc_capacity'])
            return p
        if target==0x1005b2eac:
            self.effects.append({'call':'nid2obj','nid':i32(a[0])});return self.static_oid
        if target==0x1005b1658:
            result=ObjectScenario.dependency(self,target,a);n=self.free_count;self.free_count+=1
            flags=self.case.get('free_oid_flags',[])
            if n<len(flags):self.put32(self.active_oid+32,flags[n])
            if n==0 and self.case.get('clear_long_name'):self.put64(self.active_oid+8,0)
            return result
        return ObjectScenario.dependency(self,target,a)
    def evaluate(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.stacks={};self.malloc_count=0;self.push_count=0;self.free_count=0;self.last_error=0
        self.item=self.allocate('item',56,fill=0);self.child=self.allocate('child',56,fill=0);self.fields=self.allocate('fields',120,fill=0)
        name=self.allocate('name',32,fill=0);self.write_bytes(name,b'InventedPrimitive\0')
        self.existing=self.string_object('string',case.get('string_type',4));self.converted=self.string_object('other-string',2)
        self.storage=self.allocate('storage',128,'data',0x76);self.put64(self.existing+8,0 if case.get('null_old_data') else self.storage);self.put32(self.existing,case.get('old_length',3));self.put64(self.existing+16,case.get('string_flags',0))
        self.short_name=self.allocate('short-name',16,'data',0x73);self.long_name=self.allocate('long-name',16,'data',0x6c)
        self.oid=self.allocate('oid',40,'oid',0);self.active_oid=self.oid
        for offset,value in [(0,self.short_name),(8,self.long_name),(24,self.storage)]:self.put64(self.oid+offset,0 if case.get('null_oid_fields') else value)
        self.put32(self.oid+16,case.get('nid',77));self.put32(self.oid+20,case.get('old_length',3));self.put32(self.oid+32,case.get('object_flags',9));self.write_bytes(self.oid+36,b'PAD!')
        self.static_oid=self.allocate('invented-static-oid',40,'oid',0)
        self.stack=self.allocate('stack',32,'stack',0x6a);self.stack_data=self.allocate('stack-data',128,'pointers',0)
        self.put32(self.stack,case.get('count',2));self.put64(self.stack+8,0 if case.get('null_stack_data') else self.stack_data);self.put32(self.stack+16,case.get('sorted',7));self.put32(self.stack+20,case.get('capacity',4));self.put64(self.stack+24,0)
        child_type=case.get('child_type',4)
        for i in range(16):self.put64(self.stack_data+8*i,[self.existing,self.converted,0][i%3])
        if child_type==6:
            self.put64(self.stack_data,self.oid);self.put32(self.stack,1)
        data=bytes.fromhex(case.get('data','00ff'));self.input=self.allocate('input',4096,'data',0x7b);self.write_bytes(self.input,data)
        self.alt=self.allocate('alternate-input',4096,'data',0x42);self.write_bytes(self.alt,bytes.fromhex(case.get('alternate','03ff01020304')))
        self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,0 if case.get('null_content') else self.input)
        self.slot=self.allocate('slot',8,fill=0);op=case['op'];tag=case.get('tag',4);initial=case.get('initial',False)
        self.any_value=self.allocate('any',16,'any',0);self.put32(self.any_value,12);self.put64(self.any_value+8,self.existing)
        for it,t in [(self.item,-4 if case.get('any') else tag),(self.child,child_type)]:self.put64(it+8,t);self.put64(it+40,128);self.put64(it+48,name)
        flags=case.get('flags',4)
        for i in range(3):
            field=self.fields+40*i;self.put64(field,flags if op in ['noexp','template'] else 0);self.put64(field+8,case.get('field_tag',16));self.put64(field+16,8*i);self.put64(field+24,name);self.put64(field+32,self.child)
        value=self.oid if op=='object' else self.existing
        if op in ['noexp','template']:value=self.stack if flags&6 else self.existing
        if op in ['core','entry','biodecode'] and case.get('any'):value=self.any_value
        if op in COMPOSITIONS and case.get('sequence'):
            self.write_bytes(self.item,b'\1');self.put64(self.item+16,self.fields);self.put64(self.item+24,2)
        self.put64(self.slot,value if initial else 0)
        slot=0 if case.get('null_slot') else self.slot;cursor=0 if case.get('null_cursor') else self.cursor;length=case.get('length',len(data))
        if op in ['bit','object','integer']:args=[slot,cursor,length]
        elif op=='object_free':args=[0 if case.get('nil') else self.oid]
        elif op=='stack_new':args=[]
        elif op=='stack_push':args=[0 if case.get('nil') else self.stack,0 if case.get('null_entry') else self.existing]
        elif op=='stack_value':args=[0 if case.get('nil') else self.stack,case.get('index',0)]
        elif op.startswith('stack_'):args=[0 if case.get('nil') else self.stack]
        elif op=='entry':args=[slot,cursor,length,self.item]
        elif op=='core':args=[slot,cursor,length,self.item,-1,0,0,0,0]
        elif op in ['noexp','template']:args=[slot,cursor,length,self.fields,case.get('optional',0),0,case.get('depth',0)]
        else:
            bio=self.invoke(0x1005fedf0,[self.memory_method]);self.invoke(0x1005ff090,[bio,self.input,len(data)]);args=[self.item,bio,slot]
        if op=='stack_sequence':
            p=self.invoke(ENTRIES['stack_new'],[]);self.active_stack=p;returned=[]
            if p:
                for n in range(case.get('pushes',6)):returned.append(i32(self.invoke(ENTRIES['stack_push'],[p,self.existing if n%2 else self.converted])))
                for n in range(case.get('pops',3)):returned.append(self.label(self.invoke(ENTRIES['stack_pop'],[p])))
                self.invoke(ENTRIES['stack_free'],[p])
        else:
            result=self.invoke((ENTRIES|COMPOSITIONS)[op],args)
            returned=None if op in ['object_free','stack_free'] else i32(result) if op in ['stack_num','stack_push','noexp','template','core'] else self.label(result)
            if case.get('cleanup') and result and op in ['entry','biodecode']:self.invoke(0x100618078,[result,self.item])
        states={}
        for p,n,k,z in self.kinds:
            if k=='string':states[n]={'length':i32(self.get32(p)),'type':i32(self.get32(p+4)),'data':self.label(self.get64(p+8)),'flags':str(self.get64(p+16))}
            elif k=='any':states[n]={'type':i32(self.get32(p)),'value':self.label(self.get64(p+8)),'padding':self.read_bytes(p+4,4).hex()}
            elif k=='oid':states[n]={'short':self.label(self.get64(p)),'long':self.label(self.get64(p+8)),'nid':i32(self.get32(p+16)),'length':i32(self.get32(p+20)),'data':self.label(self.get64(p+24)),'flags':self.get32(p+32),'padding':self.read_bytes(p+36,4).hex()}
            elif k=='stack':states[n]={'count':i32(self.get32(p)),'data':self.label(self.get64(p+8)),'sorted':i32(self.get32(p+16)),'capacity':i32(self.get32(p+20)),'compare':self.label(self.get64(p+24)),'padding':self.read_bytes(p+4,4).hex()}
            elif k=='pointers':states[n]=[self.label(self.get64(p+i*8)) for i in range(z//8)]
            elif k=='object':states[n]={'fields':[self.label(self.get64(p+i*8)) for i in range(3)],'other':self.read_bytes(p+24,z-24).hex()}
            elif k=='buffer':states[n]={'length':str(self.get64(p)),'data':self.label(self.get64(p+8)),'capacity':str(self.get64(p+16))}
            elif k=='data':states[n]={'size':z,'sha256':hashlib.sha256(self.read_bytes(p,z)).hexdigest()}
        return {'returned':returned,'value':self.label(self.get64(self.slot)),'cursor':self.label(self.get64(self.cursor)),'effects':self.effects,'state':states,'modeled_ERR_reason':self.last_error}
class NativeScenario(Scenario,ObjectNative):
    def __init__(self,path):
        ObjectNative.__init__(self,path)
        for op,a in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'))
            f.argtypes=[C.c_void_p,C.c_void_p,C.c_long] if op in ['bit','object','integer'] else [] if op=='stack_new' else [C.c_void_p,C.c_void_p] if op=='stack_push' else [C.c_void_p,C.c_int] if op=='stack_value' else [C.c_void_p]
            f.restype=None if op in ['stack_free','object_free'] else C.c_int if op in ['stack_num','stack_push'] else C.c_void_p;self.functions[a]=f
        for a,sig in [(0x10061acc8,[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_void_p,C.c_int]),(0x10061938c,[C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_void_p,C.c_int])]:
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'));f.argtypes=sig;f.restype=C.c_int;self.functions[a]=f
def cases():
    r=[]
    for op in ['stack_num','stack_pop','stack_value','stack_free','stack_push']:
        for count in [-2147483648,-1,0,1,2,3]:
            if op=='stack_push' and count<0:continue
            for nil in [False,True]:r.append(dict(op=op,count=count,nil=nil))
    for index in [-2147483648,-1,0,1,2,3,2147483647]:r.append(dict(op='stack_value',index=index))
    r += [dict(op='stack_new',malloc_failures=fail) for fail in [[],[0],[1]]]
    for count in [0,1,3,4]:
        for options in [{},{'realloc_failure':True},{'realloc_count':5},{'realloc_count':1},{'realloc_count':5,'realloc_capacity':16},{'null_entry':True}]:r.append(dict(op='stack_push',count=count,**options))
    r += [dict(op='stack_push',count=-1,capacity=0,realloc_failure=True),dict(op='stack_push',count=0x10000000,capacity=0x10000000,realloc_failure=True),dict(op='stack_free',null_stack_data=True)]
    for pushes in [0,1,3,4,8,12]:r.append(dict(op='stack_sequence',pushes=pushes,pops=pushes+1))
    for op,values in [('bit',['','00','01','07','08','ff','00ff','01ff','07ff','0301ff','00ff00']),('object',['','00','2a','80','81','8100','808100','2a80','2a818000','2a0380','2a038100','ffffffff7f']),('integer',['','00','01','7f','80','ff','0000','007f','0080','ff00','ff7f','ffff','8000','800000','ff000000','ff000100','00000080','ffffffff00'])]:
        for data in values:
            for initial in [False,True]:
                for options in [{},{'null_slot':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'string_flags':0xffffffffffffffff},{'null_old_data':True},{'malloc_cursor_index':0},{'malloc_cursor_index':1}]:r.append(dict(op=op,data=data,initial=initial,**options))
    for length in [-1,0,1,0x7fffffff,0x80000000]:
        for op in ['bit','object']:
            if length>1 and length<=0x7fffffff:continue
            r.append(dict(op=op,length=length,data='00',null_cursor=op=='object'))
    r += [dict(op='object',null_content=True,data='2a'),dict(op='object',null_cursor=True,data='2a'),dict(op='integer',length=0x100000001,malloc_failures=[1],data='01'),dict(op='integer',length=0,null_content=True),dict(op='object',data='2a',alternate='80',malloc_cursor_index=0)]
    for flags in [0,1,4,5,8,9,12,13,0xffffffff]:
        for length in [0,3,8]:
            for option in [{},{'malloc_failures':[0]},{'null_oid_fields':True}]:r.append(dict(op='object',data='2a0304',initial=True,object_flags=flags,old_length=length,**option))
        for null in [False,True]:r.append(dict(op='object_free',object_flags=flags,null_oid_fields=null))
    r += [dict(op='object_free',nil=True),dict(op='object_free',object_flags=4,free_oid_flags=[13]),dict(op='object_free',object_flags=13,clear_long_name=True),dict(op='object_free',object_flags=9,free_oid_flags=[0]),dict(op='object',data='2a03',malloc_failures=[1],allocation_oid_flags=13)]
    def tl(tag,data):return bytes([tag,len(data)])+data
    values=[(1,b'\xff'),(2,b'\xff\x00'),(3,b'\x03\xff'),(4,b'abc'),(5,b''),(6,b'\x2a\x03'),(10,b'\x80')]
    for op in ['core','entry','biodecode']:
        for tag,data in values:
            for any_ in [False,True]:
                for cleanup in [False,True]:r.append(dict(op=op,tag=tag,data=tl(tag,data).hex(),any=any_,cleanup=cleanup))
        for tag in [2,3,4,6]:
            body=tl(tag,dict(values)[tag])*2
            r.append(dict(op=op,sequence=True,child_type=tag,data=tl(48,body).hex(),cleanup=op!='core'))
    for op in ['noexp','template']:
        for tag in [2,3,4,6]:
            for indefinite in [False,True]:
                body=tl(tag,dict(values)[tag])*5;data=b'\x30\x80'+body+b'\0\0' if indefinite else tl(48,body)
                if op=='template':data=tl(48,data)
                for initial in [False,True]:r.append(dict(op=op,child_type=tag,data=data.hex(),initial=initial,flags=4 if op=='noexp' else 16|4))
    for op in ['noexp','template']:
        data=tl(48,tl(4,b'abc')*5)
        if op=='template':data=tl(48,data)
        for option in [{'realloc_failure':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'malloc_failures':[2]},{'malloc_failures':[3]}]:r.append(dict(op=op,data=data.hex(),flags=4 if op=='noexp' else 20,**option))
    return r
