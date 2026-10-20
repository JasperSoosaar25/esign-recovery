"""Shared invented state for original ARM64 and native C BIO comparisons."""
import ctypes as C,json,struct
ENTRIES={'new':0x1005fedf0,'free':0x1005feebc,'write':0x1005ff090,'read':0x1005fef88,'ctrl':0x1005ff4e0,'smem':0x1005ffa5c,'clear':0x1005fef5c,'set':0x1005fef78,'memwrite':0x1005ffb0c,'memread':0x1005ffbc8,'memputs':0x1005ffc7c,'memgets':0x1005ffcac,'memctrl':0x1005ffd40,'memnew':0x1005ffea0,'memfree':0x1005ffed8,'bufnew':0x1005fe7fc,'buffree':0x1005fe850,'bufgrow':0x1005fe990}
CALLBACKS={'create':0x500000100,'destroy':0x500000110,'write':0x500000120,'read':0x500000130,'ctrl':0x500000140,'callback':0x500000150,'create2':0x500000160}
MASK=(1<<64)-1
def i32(v):return C.c_int32(v).value
def i64(v):return C.c_int64(v).value
class Scenario:
    def put32(self,p,v):self.write_bytes(p,struct.pack('<I',v&0xffffffff))
    def get32(self,p):return int.from_bytes(self.read_bytes(p,4),'little')
    def put64(self,p,v):self.write_bytes(p,struct.pack('<Q',v&MASK))
    def get64(self,p):return int.from_bytes(self.read_bytes(p,8),'little')
    def string(self,p):
        b=bytearray()
        for n in range(256):
            c=self.read_bytes(p+n,1)[0]
            if not c:return b.decode()
            b.append(c)
        raise ValueError('Unterminated BIO test string')
    def label(self,p):
        if not p:return None
        if p==self.memory_method:return 'memory_method'
        for name,address in self.callbacks.items():
            if p==address:return 'function-'+name
        for base,size,label in self.regions:
            if base<=p<base+size:return label+('+'+str(p-base) if p!=base else '')
        raise ValueError('Unknown BIO fixture pointer '+hex(p))
    def allocate(self,name,size,kind='raw',fill=0xa5):
        if size>65536:raise ValueError('Unbounded test allocation')
        p=self.raw(name,max(size,1));self.write_bytes(p,bytes([fill])*max(size,1));self.regions.append((p,max(size,1),name));self.kinds.append((p,name,kind,size));return p
    def dependency(self,target,a):
        if target==0x1005b11cc:
            size,file,line=a[0],self.string(a[1]),i32(a[2]);self.effects.append(dict(call='malloc',size=str(size),file=file,line=line));n=self.malloc_count;self.malloc_count+=1
            if n in self.case.get('malloc_failures',[]):return 0
            kind='bio' if file=='bio_lib.c' else 'buffer' if line==74 else 'data'
            return self.allocate('allocation-'+str(n),size,kind)
        if target==0x1005b14c4:
            self.effects.append(dict(call='realloc_clean',old=self.label(a[0]),old_size=str(a[1]),new_size=str(a[2]),file=self.string(a[3]),line=i32(a[4])))
            if self.case.get('realloc_failure'):return 0
            p=self.allocate('reallocated',a[2],'data');self.write_bytes(p,self.read_bytes(a[0],min(a[1],a[2])));return p
        if target==0x1005b1658:self.effects.append(dict(call='free',pointer=self.label(a[0])));return 0
        if target==0x1005b2bb8:
            self.effects.append(dict(call='cleanse',pointer=self.label(a[0]),length=str(a[1])));self.write_bytes(a[0],bytes(a[1]));return 0
        if target in [0x1005b1bdc,0x1005b1c68]:
            self.effects.append(dict(call='new_ex_data' if target==0x1005b1bdc else 'free_ex_data',index=i32(a[0]),bio=self.label(a[1]),ex_data=self.label(a[2])))
            if self.case.get('ex_mutation'):
                self.put64(a[1],self.method2)
                if target==0x1005b1bdc:self.write_bytes(a[2],bytes(range(16)))
            return self.case.get('ex_result',1)&MASK
        if target==0x1005b1044:
            self.effects.append(dict(call='add_reference',field=self.label(a[0]),amount=i32(a[1]),lock=i32(a[2]),file=self.string(a[3]),line=i32(a[4])))
            value=(self.get32(a[0])+i32(a[1]))&0xffffffff;self.put32(a[0],value);return value
        if target==0x100604c0c:
            self.effects.append(dict(call='error',library=i32(a[0]),function=i32(a[1]),reason=i32(a[2]),file=self.string(a[3]),line=i32(a[4])));return 0
        name=next((name for name,address in self.callbacks.items() if address==target),None)
        if not name:name=next((n for n,address in CALLBACKS.items() if address==target),None)
        if not name:raise ValueError('Unknown BIO boundary '+hex(target))
        row=dict(call=name,bio=self.label(a[0]))
        if name=='callback':
            row.update(command=i32(a[1]),data=self.label(a[2]),integer=i32(a[3]),number=str(i64(a[4])),result=str(i64(a[5])))
            self.effects.append(row)
            if i32(a[1])<128 and self.case.get('pre_mutation'):
                self.put64(a[0]+8,0);self.put64(a[0],self.method2);self.put32(a[0]+24,self.case.get('mutated_initialized',1))
            return self.case.get('post_result',123) & MASK if i32(a[1])>=128 else self.case.get('pre_result',1)&MASK
        if name in ['create','create2']:
            self.effects.append(row);self.put32(a[0]+24,1);return self.case.get('create_result',1)&0xffffffff
        if name=='destroy':self.effects.append(row);return self.case.get('destroy_result',1)&0xffffffff
        if name in ['write','read']:
            row.update(data=self.label(a[1]),length=i32(a[2]));self.effects.append(row)
            if self.case.get('io_counter_mutation'):self.put64(a[0]+(88 if name=='write' else 80),MASK)
            return self.case.get('io_result',7)&0xffffffff
        row.update(command=i32(a[1]),number=str(i64(a[2])),data=self.label(a[3]));self.effects.append(row);return self.case.get('ctrl_result',0x100000007)&MASK
    def setup(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.malloc_count=0;self.output_pointer=False
        self.method=self.allocate('method',80,fill=0);self.method2=self.allocate('method2',80,fill=0)
        for method,create in [(self.method,'create'),(self.method2,'create2')]:
            for offset,key in [(16,'write'),(24,'read'),(48,'ctrl'),(56,create),(64,'destroy')]:self.put64(method+offset,self.callbacks[key])
        for key,offset in [('no_write',16),('no_read',24),('no_ctrl',48),('no_create',56),('no_destroy',64)]:
            if case.get(key):self.put64(self.method+offset,0)
        self.bio=self.allocate('bio',112,'bio');self.buffer=self.allocate('buffer',24,'buffer');self.storage=self.allocate('storage',1024,'data',0x55)
        self.input=self.allocate('input',1024,'data',0x33);self.output=self.allocate('output',1024,'data',0x7e)
        raw=bytes.fromhex(case.get('data','6162630a646566'));self.write_bytes(self.storage,raw)
        inp=bytes.fromhex(case.get('input','78797a00'));self.write_bytes(self.input,inp)
        current=case.get('buffer_length',len(raw));capacity=case.get('capacity',32);offset=case.get('data_offset',max(0,capacity-current) if case.get('flags',0)&512 else 0)
        self.write_bytes(self.storage+offset,raw)
        self.put64(self.buffer,current);self.put64(self.buffer+8,0 if case.get('null_buffer_data') else self.storage+offset);self.put64(self.buffer+16,capacity)
        method=self.method if case.get('synthetic') else self.memory_method
        self.put64(self.bio,0 if case.get('no_method') else method);self.put64(self.bio+8,self.callbacks['callback'] if case.get('callback') else 0);self.put64(self.bio+16,0)
        for offset,key,default in [(24,'initialized',1),(28,'shutdown',1),(32,'flags',0),(36,'retry_reason',5),(40,'number',-1),(72,'references',1)]:self.put32(self.bio+offset,case.get(key,default))
        self.put64(self.bio+48,0 if case.get('null_buffer') else self.buffer);self.put64(self.bio+56,0);self.put64(self.bio+64,0);self.put64(self.bio+80,case.get('num_read',0));self.put64(self.bio+88,case.get('num_write',0))
        self.write_bytes(self.bio+96,bytes(range(16)));self.active=self.bio
    def call(self,spec):
        op=spec['op'];bio=0 if spec.get('nil',self.case.get('nil')) else self.active;length=spec.get('length',self.case.get('length',3));arg=0 if spec.get('null_arg',self.case.get('null_arg')) else self.output
        if op=='new':
            args=[self.method if self.case.get('synthetic') else self.memory_method]
        elif op in ['bufnew','smem']:args=[]
        elif op in ['free','memfree','memnew']:args=[bio]
        elif op in ['write','memwrite']:args=[bio,0 if self.case.get('null_input') else self.input,length]
        elif op in ['read','memread','memgets']:args=[bio,0 if self.case.get('null_output') else self.output,length]
        elif op=='memputs':args=[bio,self.input]
        elif op in ['ctrl','memctrl']:
            command=spec.get('command',self.case.get('command',3));number=spec.get('argument',self.case.get('argument',0));args=[bio,command,number,arg]
            if command in [3,115] and arg and bio and not self.case.get('synthetic'):self.output_pointer=True
        elif op=='buffree':args=[0 if self.case.get('nil') else self.buffer]
        elif op=='bufgrow':args=[self.buffer,spec.get('length',self.case.get('length',0))]
        else:args=[bio,self.case.get('flag_bits',15)]
        value=self.invoke(ENTRIES[op],args)
        if op in ['new','bufnew','smem']:
            if op=='new' and value:self.active=value
            return self.label(value)
        if op in ['clear','set','buffree']:return None
        return str(i64(value) if op in ['ctrl','memctrl'] else i32(value))
    def bio_state(self,p):
        return {'method':self.label(self.get64(p)),'callback':self.label(self.get64(p+8)),'callback_arg':self.label(self.get64(p+16)),'initialized':i32(self.get32(p+24)),'shutdown':i32(self.get32(p+28)),'flags':self.get32(p+32),'retry_reason':i32(self.get32(p+36)),'number':i32(self.get32(p+40)),'pointer':self.label(self.get64(p+48)),'next':self.label(self.get64(p+56)),'previous':self.label(self.get64(p+64)),'references':i32(self.get32(p+72)),'read':str(self.get64(p+80)),'written':str(self.get64(p+88)),'ex_data':self.read_bytes(p+96,16).hex(),'padding':(self.read_bytes(p+44,4)+self.read_bytes(p+76,4)).hex()}
    def evaluate(self,case):
        self.setup(case);returned=[self.call(spec) for spec in case.get('steps',[case])]
        states={}
        for p,name,kind,size in self.kinds:
            if kind=='bio':states[name]=self.bio_state(p)
            elif kind=='buffer':states[name]={'length':str(self.get64(p)),'data':self.label(self.get64(p+8)),'capacity':str(self.get64(p+16))}
            elif kind=='data':
                raw=self.read_bytes(p,min(size,128))
                if name=='output' and self.output_pointer:raw=bytes(8)+raw[8:]
                states[name]={'bytes':raw.hex(),'size':str(size)}
        return {'returned':returned,'effects':self.effects,'state':states,'pointer_output':self.label(self.get64(self.output)) if self.output_pointer else None}
def cases():
    r=[]
    for synthetic in [False,True]:
        for failures in [[],[0],[1],[2]]:r.append(dict(op='new',synthetic=synthetic,malloc_failures=failures))
    r += [dict(op='new',synthetic=True,create_result=x) for x in [0,-1,1,2]]
    r += [dict(op='new',synthetic=True,no_create=True),dict(op='new',synthetic=True,ex_mutation=True),dict(op='new',ex_result=-1),dict(op='smem')]
    for op in ['free','memfree','buffree']:
        r.append(dict(op=op,nil=True))
    for ref in [-1,0,1,2,3]:
        for callback in [False,True]:
            for pre in [-1,0,1,0x100000001]:r.append(dict(op='free',references=ref,callback=callback,pre_result=pre,synthetic=True))
    for option in [dict(no_method=True),dict(no_destroy=True),dict(ex_mutation=True),dict(callback=True,pre_mutation=True)]:r.append(dict(op='free',synthetic=True,**option))
    for op in ['write','read','ctrl']:
        r += [dict(op=op,nil=True),dict(op=op,synthetic=True,no_method=True),dict(op=op,synthetic=True,**{'no_'+op:True})]
        for callback in [False,True]:
            for initialized in [0,1,-1]:
                for value in [-2147483648,-2,-1,0,1,7,2147483647]:
                    r.append(dict(op=op,synthetic=True,callback=callback,initialized=initialized,io_result=value,ctrl_result=value,length=-1,num_read=MASK,num_write=MASK))
        for pre in [-1,0,1,0x80000000,0x100000000,0x100000001]:
            r.append(dict(op=op,synthetic=True,callback=True,pre_result=pre,post_result=-0x100000001,pre_mutation=True))
        r.append(dict(op=op,synthetic=True,callback=True,io_counter_mutation=True))
    for op in ['read','memread']:
        for length in [-1,0,1,3,7,8,16]:
            for flags in [15,527]:
                for nullout in [False,True]:r.append(dict(op=op,length=length,flags=flags,null_output=nullout))
        for num in [0,-1,7]:r.append(dict(op=op,length=0,buffer_length=0,number=num,flags=15))
    for op in ['write','memwrite']:
        for length in [0,1,3,7,16]:
            for option in [{},{'flags':512},{'null_input':True},{'capacity':7},{'realloc_failure':True,'capacity':7}]:r.append(dict(op=op,length=length,flags=option.pop('flags',15),**option))
        r += [dict(op=op,buffer_length=0,length=-1),dict(op=op,length=3,null_buffer_data=True,buffer_length=0,capacity=0,malloc_failures=[0])]
    for op in ['memgets']:
        for data in ['','61','616263','610a62','0a616263','6162630a646566']:
            for length in [-1,0,1,2,4,8]:r.append(dict(op=op,data=data,length=length))
    r += [dict(op='memputs',input=s) for s in ['00','61626300','610a00']]
    for op in ['ctrl','memctrl']:
        for command in [-2147483648,-1,0,*range(1,15),113,114,115,116,129,130,131,2147483647]:
            for flags in [0,512]:r.append(dict(op=op,command=command,flags=flags,argument=-0x100000001))
        for command in [1,3,115]:r.append(dict(op=op,command=command,null_arg=True,null_buffer_data=command==1))
        for shutdown,initialized,nullbuffer in [(0,1,False),(1,0,False),(1,1,True)]:r.append(dict(op=op,command=114,shutdown=shutdown,initialized=initialized,null_buffer=nullbuffer))
    for shutdown in [0,1,-1]:
        for initialized in [0,1]:
            for flags in [0,512]:
                for nullbuffer in [False,True]:r.append(dict(op='memfree',shutdown=shutdown,initialized=initialized,flags=flags,null_buffer=nullbuffer))
    r += [dict(op='bufnew'),dict(op='bufnew',malloc_failures=[0]),dict(op='memnew'),dict(op='memnew',malloc_failures=[0])]
    for length in [0,1,3,7,8,16,31,32,33,64,0x5ffffffd,0x60000000]:
        for option in [{},{'realloc_failure':True},{'null_buffer_data':True,'buffer_length':0,'capacity':0},{'null_buffer_data':True,'buffer_length':0,'capacity':0,'malloc_failures':[0]}]:r.append(dict(op='bufgrow',length=length,**option))
    for op in ['clear','set']:
        for flags in [0,15,512,0xffffffff]:
            for bits in [0,1,15,512,-1]:r.append(dict(op=op,flags=flags,flag_bits=bits))
    r.append({'op':'sequence','steps':[{'op':'new'},{'op':'write','length':3},{'op':'read','length':2},{'op':'ctrl','command':3},{'op':'ctrl','command':1},{'op':'free'}]})
    return r
class NativeScenario(Scenario):
    def __init__(self,path):
        self.lib=C.CDLL(str(path));self.buffers=[];self.callback_error=None
        self.memory_method=C.addressof((C.c_ubyte*80).in_dll(self.lib,'ESignOriginalBIOMemoryMethod'))
        self.callbacks={name:C.cast(getattr(self.lib,'ESignBIOTest_'+name),C.c_void_p).value for name in CALLBACKS}
        callback_type=C.CFUNCTYPE(C.c_uint64,*([C.c_uint64]*7))
        def call(target,*args):
            try:return self.dependency(target,args)&MASK
            except Exception as e:self.callback_error=e;return 0
        self.callback=callback_type(call);C.c_void_p.in_dll(self.lib,'ESignBIOTestBoundary').value=C.cast(self.callback,C.c_void_p).value
        self.functions={}
        for op,address in ENTRIES.items():
            fn=getattr(self.lib,'ESignOriginal_'+format(address,'x'))
            fn.restype=C.c_void_p if op in ['new','bufnew','smem'] else None if op in ['clear','set','buffree'] else C.c_long if op in ['ctrl','memctrl'] else C.c_int
            if op in ['new','free','memnew','memfree','buffree','memputs']:fn.argtypes=[C.c_void_p]+([C.c_void_p] if op=='memputs' else [])
            elif op in ['bufnew','smem']:fn.argtypes=[]
            elif op in ['write','read','memwrite','memread','memgets']:fn.argtypes=[C.c_void_p,C.c_void_p,C.c_int]
            elif op in ['ctrl','memctrl']:fn.argtypes=[C.c_void_p,C.c_int,C.c_long,C.c_void_p]
            elif op=='bufgrow':fn.argtypes=[C.c_void_p,C.c_size_t]
            else:fn.argtypes=[C.c_void_p,C.c_int]
            self.functions[address]=fn
    def reset_heap(self):self.buffers=[]
    def raw(self,name,size):
        b=C.create_string_buffer(size);self.buffers.append(b);return C.addressof(b)
    def read_bytes(self,p,n):return C.string_at(p,n)
    def write_bytes(self,p,b):C.memmove(p,b,len(b))
    def invoke(self,address,args):
        result=self.functions[address](*args)
        if self.callback_error:raise self.callback_error
        return result or 0
