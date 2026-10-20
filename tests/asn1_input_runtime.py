"""Invented ASN.1 inputs shared by original ARM64 and compiled-C comparisons."""
import ctypes as C,hashlib
from bio_input_runtime import Scenario as BIOScenario,NativeScenario as BIONative,CALLBACKS,MASK,i32,i64
ENTRIES={'header':0x10061cb98,'stream':0x10061300c,'itembio':0x100613354,'item':0x100619304}
class Scenario(BIOScenario):
    def dependency(self,target,a):
        if target==0x100604e30:
            self.effects.append({'call':'clear_error'});self.last_error=0;return 0
        if target==0x100605198:
            self.effects.append({'call':'peek_error','reason':self.last_error});return self.last_error
        if target==0x100604c0c:self.last_error=i32(a[2])
        if target==0x10061955c:
            if self.case.get('null_output'):self.temporary_output=a[0]
            self.effects.append({'call':'recursive_item_decoder','output':self.label(a[0]),'cursor':self.label(self.get64(a[1])),'length':str(i64(a[2])),'item':self.label(a[3]),'tag':i32(a[4]),'class':i32(a[5]),'optional':i32(a[6]),'context_first_byte':self.read_bytes(a[7],1).hex(),'depth':i32(a[8])})
            self.put64(a[0],self.decoded)
            advance=self.case.get('decode_advance',0);self.put64(a[1],self.get64(a[1])+advance)
            return self.case.get('decode_result',1)&0xffffffff
        read_targets=[CALLBACKS['read'],self.callbacks['read']]
        if target in read_targets and self.case.get('synthetic',True):
            n=i32(a[2]);ordinal=self.read_count;self.read_count+=1
            schedule=self.case.get('read_limits',[]);limit=schedule[ordinal] if ordinal<len(schedule) else n
            count=min(n,limit,len(self.payload)-self.position) if n>0 and limit>0 else limit if limit<=0 else 0
            if count>0:self.write_bytes(a[1],self.payload[self.position:self.position+count]);self.position+=count
            self.effects.append({'call':'stream_read','length':n,'returned':count,'offset':self.position})
            return count&0xffffffff
        return BIOScenario.dependency(self,target,a)
    def label(self,p):
        if getattr(self,'temporary_output',False) and p==self.temporary_output:return 'temporary-output'
        return BIOScenario.label(self,p)
    def evaluate(self,case):
        setup=dict(case,synthetic=case.get('synthetic',True),data='',buffer_length=0,capacity=0)
        BIOScenario.setup(self,setup);self.case=case;self.last_error=case.get('initial_error',777);self.read_count=0;self.position=0;self.temporary_output=False
        self.payload=bytes.fromhex(case.get('data','0403616263'))
        self.encoded=self.allocate('encoded',max(len(self.payload),16),'encoded',0x7d);self.write_bytes(self.encoded,self.payload)
        self.slot=self.allocate('cursor-slot',8,fill=0);self.put64(self.slot,self.encoded)
        self.length_slot=self.allocate('length-slot',8,fill=0);self.put64(self.length_slot,0x1122334455667788)
        self.tag_slot=self.allocate('tag-slot',4,fill=0);self.put32(self.tag_slot,0x12345678)
        self.class_slot=self.allocate('class-slot',4,fill=0);self.put32(self.class_slot,0x23456789)
        self.out_slot=self.allocate('output-slot',8,fill=0);self.put64(self.out_slot,self.output)
        self.item=self.allocate('item',56,fill=0);self.decoded=self.allocate('decoded-object',64,fill=0x6d)
        if not setup['synthetic']:
            self.put64(self.buffer,len(self.payload));self.put64(self.buffer+8,self.encoded);self.put64(self.buffer+16,max(len(self.payload),16))
        role=case['op']
        if role=='header':args=[self.slot,self.length_slot,self.tag_slot,self.class_slot,case.get('available',len(self.payload))]
        elif role=='stream':args=[self.bio,self.out_slot]
        elif role=='itembio':args=[self.item,self.bio,0 if case.get('null_output') else self.out_slot]
        else:args=[0 if case.get('null_output') else self.out_slot,self.slot,case.get('length',len(self.payload)),self.item]
        result=self.invoke(ENTRIES[role],args)
        pointer=self.get64(self.out_slot)
        value=self.label(result) if role in ['item','itembio'] else str(i32(result))
        buffers=[]
        for p,name,kind,size in self.kinds:
            if kind=='buffer':
                length=self.get64(p);data=self.get64(p+8);capacity=self.get64(p+16)
                buffers.append({'name':name,'length':str(length),'data':self.label(data),'capacity':str(capacity),'sha256':hashlib.sha256(self.read_bytes(data,length)).hexdigest() if data and length<=65536 else None})
        return {'returned':value,'cursor':self.label(self.get64(self.slot)),'length':str(i64(self.get64(self.length_slot))),'tag':i32(self.get32(self.tag_slot)),'class':i32(self.get32(self.class_slot)),'output':self.label(pointer),'effects':self.effects,'buffers':buffers,'bio_bytes_read':str(self.get64(self.bio+80)),'remaining_error':self.last_error}
class NativeScenario(Scenario,BIONative):
    def __init__(self,path):
        BIONative.__init__(self,path)
        callback_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*10))
        def call(target,*args):
            try:return self.dependency(target,args)&MASK
            except Exception as e:self.callback_error=e;return 0
        self.asn_callback=callback_type(call);C.c_void_p.in_dll(self.lib,'ESignASN1TestBoundary').value=C.cast(self.asn_callback,C.c_void_p).value
        for role,address in ENTRIES.items():
            fn=getattr(self.lib,'ESignOriginal_'+format(address,'x'))
            fn.restype=C.c_void_p if role in ['item','itembio'] else C.c_int
            fn.argtypes=[C.c_void_p,C.c_void_p,C.c_void_p,C.c_void_p,C.c_long] if role=='header' else [C.c_void_p,C.c_void_p] if role=='stream' else [C.c_void_p,C.c_void_p,C.c_void_p] if role=='itembio' else [C.c_void_p,C.c_void_p,C.c_long,C.c_void_p]
            self.functions[address]=fn
    def dependency(self,target,a):
        if target==0x10061955c and self.case.get('null_output'):
            self.temporary_output=a[0]
        return Scenario.dependency(self,target,a)
def encoded(size):
    length=bytes([size]) if size<128 else bytes([128+(size.bit_length()+7)//8])+size.to_bytes((size.bit_length()+7)//8,'big')
    return bytes([4])+length+bytes((i*13+7)%256 for i in range(size))
def cases():
    r=[]
    headers=['','00','0000','0400','040161','0403616263','0480','3080','30800000','0480ffff','048100','04810161','04820001ff','04880000000000000001ff','04887fffffffffffffff','04888000000000000000','0489000000000000000000','04800000','1f0000','1f1e00','1f1f00','1f810000','1fffffff7f00','1f888080800000','1f81808080800000','1f800000','ff810003616263']
    for data in headers:
        for available in sorted(set([0,1,2,3,len(bytes.fromhex(data)),len(bytes.fromhex(data))+1,-1])):
            # Enough backing bytes are always allocated, including diagnostic probes.
            r.append(dict(op='header',data=data,available=available))
    for first in [0,1,4,16,31,32,48,63,64,128,192,255]:
        for length in [0,1,7,127,128,255,256,16384]:
            data=encoded(length);data=bytes([first])+data[1:]
            r.append(dict(op='header',data=data.hex()))
    streams=['','00','0000','0400','040161','0403616263','0480','3080','30800000','30800401610000','3080308004016100000000','3080308000000000','3080308000000401620000','04820001ff','0484800000000000','0484800000020000','04887fffffffffffffff','1f810003616263','1f81808080800000']
    streams += [encoded(n).hex() for n in [7,8,9,127,128,255,256,1024,17000,33000]]
    for data in streams:
        for synthetic in [True,False]:r.append(dict(op='stream',data=data,synthetic=synthetic))
    for limits in [[1],[2],[3],[4],[7],[8],[8,1,1,1],[8,2,0],[8,-1],[-1],[0],[8,3,3,3,3]]:
        r.append(dict(op='stream',data=encoded(32).hex(),read_limits=limits))
    for failures in [[0],[1],[2]]:
        r.append(dict(op='stream',data=encoded(32).hex(),malloc_failures=failures))
    r.append(dict(op='stream',data=encoded(32).hex(),realloc_failure=True))
    for result in [-2147483648,-1,0,1,2,2147483647]:
        for null in [False,True]:
            for op in ['item','itembio']:r.append(dict(op=op,decode_result=result,null_output=null,decode_advance=1))
    for data in ['', '3080','040161','3080308004016100000000']:
        for synthetic in [True,False]:r.append(dict(op='itembio',data=data,synthetic=synthetic))
    r.append(dict(op='item',length=0x100000001))
    r.append(dict(op='item',length=-1))
    return r
