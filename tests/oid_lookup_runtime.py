"""Invented test state shared by original-instruction replay and native C execution.

No lookup implementation lives here. Hash/comparator callbacks are explicit
test dependencies; production archives contain none of these callbacks.
"""
import ctypes as C
import struct

ENTRIES={'object':0x1005b3138,'nid_object':0x1005b2eac,'short_name':0x1005b2f80,'long_name':0x1005b305c,'hash_retrieve':0x100602d34}
COUNTERS={'hash_calls':96,'compare_calls':104,'retrieves':144,'misses':152,'hash_compares':160}
MASK=(1<<64)-1
def signed(n):return C.c_int32(n).value

class Scenario:
    def put32(self,p,v):self.write_bytes(p,struct.pack('<I',v&0xffffffff))
    def get32(self,p):return int.from_bytes(self.read_bytes(p,4),'little')
    def put64(self,p,v):self.write_bytes(p,struct.pack('<Q',v&MASK))
    def get64(self,p):return int.from_bytes(self.read_bytes(p,8),'little')
    def name(self,p):
        if not p:return None
        if p not in self.labels:raise ValueError('Unlabeled fixture pointer '+hex(p))
        return self.labels[p]
    def string(self,p):
        if not p:return None
        data=bytearray()
        for i in range(1024):
            b=self.read_bytes(p+i,1)[0]
            if not b:return data.decode()
            data.append(b)
        raise ValueError('Unterminated fixture string')
    def key_state(self,p):
        if self.case['op']=='hash_retrieve':
            if p!=self.input:raise ValueError('Wrong hash key')
            return {'key':'input'}
        typ=self.get32(p);obj=self.get64(p+8)
        if typ==3:return {'type':typ,'nid':signed(self.get32(obj+16))}
        if typ!=0 or obj!=self.input:raise ValueError('Wrong OID lookup key')
        length=signed(self.get32(obj+20))
        return {'type':typ,'object':'input','length':length,'nid':signed(self.get32(obj+16))}
    def hash_callback(self,key):
        self.effects.append(dict(call='hash',**self.key_state(key)))
        if self.case.get('hash_zero_length'):self.put32(self.input+20,0)
        if self.case.get('hash_counters'):
            for offset in COUNTERS.values():self.put64(self.table+offset,MASK)
        return self.case.get('hash',0)
    def compare_callback(self,node,key):
        label=self.name(node);self.effects.append(dict(call='compare',node=label,**self.key_state(key)))
        i=int(label.rsplit('-',1)[1]);spec=self.case['nodes'][i]
        if spec.get('null_link'):self.put64(self.links[i],0)
        if spec.get('replace_link'):self.put64(self.links[i],self.replacement_node)
        if spec.get('zero_length'):self.put32(self.input+20,0)
        if spec.get('change_callback'):self.put64(self.table+8,0)
        return spec.get('compare',0)&0xffffffff
    def error_callback(self,library,function,reason,file,line):
        self.effects.append(dict(call='error',library=signed(library),function=signed(function),reason=signed(reason),file=self.string(file),line=signed(line)))
    def setup(self,case):
        self.case=case;self.effects=[];self.reset_heap();self.labels=dict(self.static_labels)
        self.input=self.raw('input',256);raw=bytes.fromhex(case.get('data',''))
        data=self.raw('input-data',max(256,len(raw)))
        if raw:self.write_bytes(data,raw)
        self.put32(self.input+16,case.get('cached_nid',0));self.put32(self.input+20,case.get('length',len(raw)));self.put64(self.input+24,0 if case.get('null_data') else data)
        self.table=self.raw('table',176);buckets=self.raw('buckets',128)
        self.put64(self.table,buckets);self.put64(self.table+8,self.compare_pointer);self.put64(self.table+16,self.hash_pointer)
        self.put32(self.table+28,case.get('alloc_nodes',8));self.put32(self.table+32,case.get('p',0));self.put32(self.table+36,case.get('pmax',4));self.put32(self.table+168,123)
        for name,offset in COUNTERS.items():self.put64(self.table+offset,case.get('initial_counters',{}).get(name,0))
        self.registered=self.raw('registered-object',40);short=self.raw('registered-short',256);long=self.raw('registered-long',256)
        self.write_bytes(short,b'registered short\0');self.write_bytes(long,b'registered long\0')
        self.put64(self.registered,short);self.put64(self.registered+8,long);self.put32(self.registered+16,case.get('registered_nid',12345))
        self.links=[];nodes=[]
        for i,spec in enumerate(case.get('nodes',[])):
            node=self.raw('node-'+str(i),24);obj=self.raw('data-'+str(i),16)
            self.put32(obj,0);self.put64(obj+8,self.registered);self.put64(node,obj);self.put64(node+16,spec.get('hash',case.get('hash',0)));nodes.append(node)
        self.replacement_node=self.raw('replacement-node',24);replacement=self.raw('replacement-data',16);self.put64(replacement+8,self.registered);self.put64(self.replacement_node,replacement)
        hashvalue=case.get('hash',0)&MASK;denom=case.get('pmax',4);bucket=hashvalue%denom if denom else hashvalue
        if bucket<case.get('p',0):
            denom=case.get('alloc_nodes',8);bucket=hashvalue%denom if denom else hashvalue
        if bucket>=16:raise ValueError('Fixture bucket exceeds allocation')
        slot=buckets+bucket*8
        for node in nodes:self.put64(slot,node);self.links.append(slot);slot=node+8
        self.set_added(self.table if case.get('added') else 0)
    def evaluate(self,case):
        self.setup(case);op=case['op']
        arg=self.input if op=='object' else self.table if op=='hash_retrieve' else case['nid']
        if case.get('nil'):arg=0
        value=self.invoke(ENTRIES[op],[arg,self.input] if op=='hash_retrieve' else [arg])
        if op=='object':result=signed(value)
        elif op in ['short_name','long_name']:result={'pointer':self.name(value),'value':self.string(value)}
        else:result=self.name(value)
        return {'returned':result,'effects':self.effects,'counters':{name:str(self.get64(self.table+offset)) for name,offset in COUNTERS.items()},'error':signed(self.get32(self.table+168)),'input_length':signed(self.get32(self.input+20))}

def cases(database):
    result=[]
    for op in ['nid_object','short_name','long_name']:
        result += [{'op':op,'nid':n} for n in range(958)]
        for n in [-2147483648,-1,958,959,2147483647]:
            result += [{'op':op,'nid':n}, {'op':op,'nid':n,'added':True}, {'op':op,'nid':n,'added':True,'nodes':[{}]}]
    result += [{'op':'object','nil':True},{'op':'object','length':0,'null_data':True}]
    result += [{'op':'object','cached_nid':n,'null_data':True,'length':123} for n in [-2147483648,-1,1,22,957,123456,2147483647]]
    result += [{'op':'object','length':n,'null_data':True} for n in [-2147483648,-1,127,2147483647]]
    seen=set()
    for obj in database['objects']:
        data=obj['encoded']
        if not data or data in seen:continue
        seen.add(data)
        for raw in [data,data[:-2],('%02x'%(int(data[:2],16)^0xff))+data[2:]]:
            # Avoid unbounded negative-length data reads; length-only cases above
            # choose lengths absent from the original positive-length table.
            result.append({'op':'object','data':raw})
    known=database['objects'][22]['encoded']
    for spec in [
        {},{'nodes':[{}]}, {'nodes':[{'hash':1},{}]}, {'nodes':[{'compare':7},{}]},
        {'nodes':[{'compare':-1},{'compare':-1}]}, {'nodes':[{'null_link':True}]},
        {'nodes':[{'replace_link':True}]}, {'nodes':[{'change_callback':True,'compare':1},{}]},
        {'hash_zero_length':True}, {'nodes':[{'zero_length':True,'compare':1}]},
        {'hash_counters':True,'nodes':[{}]},
    ]:result.append(dict(op='object',data=known,added=True,**spec))
    for h,p,pmax,alloc in [(0,0,4,8),(3,2,4,8),(5,2,4,8),(MASK,0,4,8),(0,0,0,0),(1,2,4,0)]:
        for nodes in [[],[{}],[{'hash':123},{}],[{'compare':1},{}],[{'compare':-1}],[{'null_link':True}],[{'replace_link':True}]]:
            result.append(dict(op='hash_retrieve',hash=h,p=p,pmax=pmax,alloc_nodes=alloc,nodes=nodes))
    result.append(dict(op='hash_retrieve',nodes=[{}],initial_counters={k:MASK for k in COUNTERS}))
    return result

class NativeScenario(Scenario):
    def __init__(self,path,database):
        self.library=C.CDLL(str(path));self.allocations=[];self.callback_error=None
        self.static_labels={};objects=(C.c_ubyte*(958*40)).in_dll(self.library,'ESignOriginalOIDObjects');self.objects_address=C.addressof(objects)
        for i,obj in enumerate(database['objects']):
            p=self.objects_address+i*40;self.static_labels[p]='static-object-'+str(i)
            for offset,field in [(0,'short_address'),(8,'long_address'),(24,'data_address')]:
                address=obj[field]
                if address:self.static_labels[self.get64(p+offset)]='static-'+hex(address)
        hash_type=C.CFUNCTYPE(C.c_uint64,C.c_void_p);compare_type=C.CFUNCTYPE(C.c_int,C.c_void_p,C.c_void_p)
        def protect(fn):
            def callback(*args):
                try:return fn(*args)
                except Exception as e:self.callback_error=e;return 0
            return callback
        self.hash_fn=hash_type(protect(self.hash_callback));self.compare_fn=compare_type(protect(self.compare_callback))
        self.hash_pointer=C.cast(self.hash_fn,C.c_void_p).value;self.compare_pointer=C.cast(self.compare_fn,C.c_void_p).value
        error_type=C.CFUNCTYPE(None,C.c_int,C.c_int,C.c_int,C.c_void_p,C.c_int)
        self.error_fn=error_type(protect(self.error_callback));C.c_void_p.in_dll(self.library,'ESignOIDTestError').value=C.cast(self.error_fn,C.c_void_p).value
        self.functions={}
        for op,address in ENTRIES.items():
            fn=getattr(self.library,'ESignOriginal_'+format(address,'x'));fn.restype=C.c_int if op=='object' else C.c_void_p
            fn.argtypes=[C.c_void_p,C.c_void_p] if op=='hash_retrieve' else [C.c_int if op in ['nid_object','short_name','long_name'] else C.c_void_p];self.functions[address]=fn
    def read_bytes(self,p,n):return C.string_at(p,n)
    def write_bytes(self,p,raw):C.memmove(p,raw,len(raw))
    def reset_heap(self):self.allocations=[]
    def raw(self,label,size=256):
        buf=C.create_string_buffer(size);self.allocations.append(buf);p=C.addressof(buf);self.labels[p]=label;return p
    def set_added(self,p):C.c_void_p.in_dll(self.library,'ESignOriginalOIDAdded').value=p
    def invoke(self,address,args):
        value=self.functions[address](*args)
        if self.callback_error:raise self.callback_error
        return value or 0
