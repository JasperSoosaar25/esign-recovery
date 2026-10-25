"""Invented X509/name/CRL state shared by original ARM64 and compiled C."""
import ctypes as C,struct
from cms_schema_runtime import Scenario as CMSScenario,NativeScenario as CMSNative,ENTRIES as CMS_ENTRIES,DEPENDENCIES as CMS_DEPS,tl
from bio_input_runtime import MASK,i32,i64
from x509_schema_data import schema,base_schema
ENTRIES={'certificate_callback':0x10061660c,'pubkey_callback':0x1006156ec,'crl_callback':0x1006168c4,'crl_info_callback':0x100616890,'name_new':0x100615bfc,'name_free':0x100615cc8,'name_decode':0x100615d1c,'name_encode':0x100615f14,'name_print':0x1006160dc,'certificate_free':0x1006165f4,'entry_free':0x100615be0,'inner_stack_free':0x1006165d8,'inner_stack_pop_free':0x1006165dc,'revoked_compare':0x10061687c,'tagged_entry':0x100619370,'stack_compare':0x100602068,'stack_set':0x100602654,'stack_pop_free':0x10060258c,'buffer_grow':0x1005fe88c,'integer_free':0x10061b32c,'enumerated_free':0x10061b338,'octet_free':0x10061b38c}
DEPENDENCIES={0x10061f458:'X509_NAME_oneline',0x100616708:'X509_CERT_AUX_free',0x100627840:'AUTHORITY_KEYID_free',0x10062559c:'CRL_DIST_POINTS_free',0x100628c28:'policy_cache_free',0x10062278c:'GENERAL_NAMES_free',0x100627f14:'NAME_CONSTRAINTS_free',0x10060c0b4:'EVP_sha1',0x100620884:'X509_CRL_digest',0x100620150:'X509_CRL_get_ext_d2i',0x10062018c:'X509_REVOKED_get_ext_d2i',0x100625a20:'DIST_POINT_set_dpname',0x1006255a8:'ISSUING_DIST_POINT_free',0x1006134a4:'ASN1_ENUMERATED_get',0x10061d308:'ASN1_INTEGER_cmp',0x100616178:'name_canonicalize',0x100618744:'ASN1_item_ex_i2d',0x100614624:'X509_NAME_print_ex',0x100616d34:'default_CRL_lookup',0x100616f74:'default_CRL_verify'}
CALLBACKS={'init':0x500000400,'free':0x500000410,'pop':0x500000420}
class Scenario(CMSScenario):
    def allocate(self,name,size,kind="raw",fill=0xa5):
        return CMSScenario.allocate(self,name,4096 if name=="input" and size==512 else size,kind,fill)
    def stack(self,name,values,capacity=None):
        cap=capacity or max(4,len(values)+1);p=self.allocate(name,32,fill=0);d=self.allocate(name+'-data',cap*8,fill=0xa5);self.put32(p,len(values));self.put64(p+8,d);self.put32(p+20,cap)
        for i,v in enumerate(values):self.put64(d+i*8,v)
        return p
    def oid(self,nid):return self.oid_pointer(nid)
    def dependency(self,target,a):
        if target in [0x1005b1bdc,0x1005b1c68] and i32(a[0])==10:
            self.effects.append(dict(call='X509_new_ex_data' if target==0x1005b1bdc else 'X509_free_ex_data',index=i32(a[0]),owner=self.label(a[1]),data=self.label(a[2])))
            if self.case.get('mutate_cleanup'):self.put64(a[1]+176,self.token1);self.put64(a[1]+32,self.token2)
            return self.case.get('ex_result',0)&MASK
        if target in CALLBACKS.values():
            name=next(n for n,p in self.callbacks_x509.items() if p==target) if target in self.callbacks_x509.values() else next(n for n,p in CALLBACKS.items() if p==target)
            self.effects.append(dict(call='controlled-'+name,value=self.label(a[0])))
            if name=='pop':
                if 'pop_count' in self.case:self.put32(self.direct_stack,self.case['pop_count'])
                if self.case.get('pop_swap'):self.put64(self.direct_stack+8,self.alternate_data)
                return 0
            if self.case.get('method_mutation'):self.put64(a[0]+32,0);self.put64(a[0]+40,0)
            return self.case.get('method_'+name,1)&MASK
        if target in self.callbacks_x509.values():
            return self.dependency(CALLBACKS[next(n for n,p in self.callbacks_x509.items() if p==target)],a)
        name=DEPENDENCIES.get(target)
        if name:
            if target in [0x100616708,0x100627840,0x10062559c,0x100628c28,0x10062278c,0x100627f14,0x1006255a8]:
                self.effects.append(dict(call=name,value=self.label(a[0])))
                if self.case.get('mutate_cleanup'):
                    self.put64(self.object+120,0);self.put64(self.object+128,self.token2);self.put64(self.object+32,self.token2)
                return 0
            if target==0x10061f458:
                self.effects.append(dict(call=name,value=self.label(a[0]),buffer=self.label(a[1]),size=i32(a[2])));return 0 if self.case.get('oneline_null',True) else self.token2
            if target==0x10060c0b4:self.effects.append(dict(call=name));return self.allocate('sha1-return-token-'+str(len(self.kinds)),8,fill=0)
            if target==0x100620884:
                self.effects.append(dict(call=name,crl=self.label(a[0]),method=self.label(a[1]),output=self.label(a[2]),length=self.label(a[3])));self.write_bytes(a[2],b'Z'*20);return self.case.get('digest_result',0)&MASK
            if target==0x100620150:
                nid=i32(a[1]);self.effects.append(dict(call=name,value=self.label(a[0]),nid=nid,critical=self.label(a[2]),index=self.label(a[3])));return self.extension_values.get(nid,0)
            if target==0x10062018c:
                idx=self.revoked_values.index(a[0]) if a[0] in self.revoked_values else None;spec=self.case.get('revoked',[{}])[idx] if idx is not None else {};nid=i32(a[1]);crit=spec.get('issuer_critical' if nid==771 else 'reason_critical',-1);self.put32(a[2],crit)
                self.effects.append(dict(call=name,value=self.label(a[0]),nid=nid,critical_output=crit,index=self.label(a[3])))
                return self.issuers[idx] if nid==771 and spec.get('issuer') else self.reasons[idx] if nid==141 and 'reason' in spec else 0
            if target==0x100625a20:self.effects.append(dict(call=name,value=self.label(a[0]),issuer=self.label(a[1])));return 0
            if target==0x1006134a4:
                idx=self.reasons.index(a[0]);result=self.case['revoked'][idx]['reason'];self.effects.append(dict(call=name,value=self.label(a[0]),result=str(result)));return result&MASK
            if target==0x10061d308:self.effects.append(dict(call=name,left=self.label(a[0]),right=self.label(a[1])));return self.case.get('compare_result',-3)&MASK
            if target==0x100616178:
                self.effects.append(dict(call=name,value=self.label(a[0])))
                if self.case.get('canonical_data'):
                    b=bytes.fromhex(self.case['canonical_data']);p=self.allocate('controlled-canonical',len(b),'data',0);self.write_bytes(p,b);self.put64(a[0]+24,p);self.put32(a[0]+32,len(b))
                return self.case.get('canonical_result',1)&MASK
            if target==0x100618744:
                p=self.get64(a[0]);groups=[[self.label(self.get64(self.get64(s+8)+j*8)) for j in range(i32(self.get32(s)))] for s in [self.get64(self.get64(p+8)+i*8) for i in range(i32(self.get32(p)))]]
                self.effects.append(dict(call=name,groups=groups,output=bool(a[1]),item=self.label(a[2]),tag=i32(a[3]),xclass=i32(a[4])))
                b=bytes.fromhex(self.case.get('encoded','3000'));n=self.case.get('encoding_length',len(b))
                if a[1]:
                    out=self.get64(a[1]);self.write_bytes(out,b);self.put64(a[1],out+len(b))
                return n&MASK
            if target==0x100614624:
                self.effects.append(dict(call=name,bio=self.label(a[0]),value=self.label(a[1]),indent=i32(a[2]),flags=str(a[3])));return self.case.get('print_result',1)&MASK
            raise ValueError('Unexpected unresolved original X509 operation '+name)
        if target==0x1005b1658 and self.case.get('mutate_subject'):
            self.put64(self.object,self.info2)
        if target==0x1005b137c and self.case.get('grow_reload'):
            self.put64(self.buffer,self.case['grow_reload'])
        return CMSScenario.dependency(self,target,a)
    def decoded(self,p,item,depth=0):
        if item==0x100b1e7b8:
            if not p:return None
            entries=self.get64(p);n=i32(self.get32(entries));values=[]
            for i in range(n):
                entry=self.get64(self.get64(entries+8)+8*i);values.append(dict(oid=CMSScenario.decoded(self,self.get64(entry),0x100b1f008,depth+1),value=CMSScenario.decoded(self,self.get64(entry+8),0x100b1f158,depth+1),set=i32(self.get32(entry+16))))
            b=self.get64(p+16);return dict(item='X509_NAME',entries=values,encoded=self.read_bytes(self.get64(b+8),self.get64(b)).hex(),modified=i32(self.get32(p+8)))
        return CMSScenario.decoded(self,p,item,depth)
    def evaluate(self,case):
        if case['op'] in ['entry','cms_bio']:
            self.reset_extra(case);self.set_default_method(self.default_method);return CMSScenario.evaluate(self,case)
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.stacks={};self.malloc_count=0;self.push_count=0;self.free_count=0;self.last_error=0;self.setup_direct(case)
        op=case['op'];a=ENTRIES[op];value=0 if case.get('null_slot') else self.slot;operation=case.get('operation',5);length=case.get('length',len(self.payload))
        if op.endswith('_callback'):args=[operation,value,0,0]
        elif op in ['name_new','name_free']:args=[value,0]
        elif op=='name_decode':args=[value,self.cursor,length,0,case.get('tag',-1),case.get('xclass',0),case.get('optional',0),0]
        elif op=='name_encode':args=[value,0 if case.get('null_output') else self.cursor,0,0,0]
        elif op=='name_print':args=[self.token1,value,case.get('indent',3),0,self.print_context]
        elif op=='tagged_entry':args=[value,self.cursor,length,self.schema_pointer(0x100b1e748),-1,0,0,0]
        elif op=='buffer_grow':args=[self.buffer,length]
        elif op=='stack_set':args=[0 if case.get('nil') else self.direct_stack,case.get('index',0),self.token2]
        elif op=='stack_compare':args=[self.direct_stack,self.callbacks_x509['pop'] if case.get('change_compare',True) else self.callbacks_x509['init']]
        elif op=='stack_pop_free':args=[0 if case.get('nil') else self.direct_stack,self.callbacks_x509['pop']]
        elif op=='revoked_compare':args=[self.slot,self.other_slot]
        elif op in ['integer_free','enumerated_free','octet_free']:args=[0 if case.get('nil') else self.scalar_string]
        elif op in ['inner_stack_free','inner_stack_pop_free']:args=[0 if case.get('nil') else self.direct_stack]
        else:args=[0] # Public free wrappers are also exercised via real parser cleanup.
        result=self.invoke(a,args)
        returned=None if op in ['name_free','certificate_free','entry_free','inner_stack_free','inner_stack_pop_free','integer_free','enumerated_free','octet_free','stack_pop_free'] else self.label(result) if op in ['stack_set','stack_compare'] else str(result) if op=='buffer_grow' else i32(result)
        decoded=self.decoded(self.get64(self.slot),0x100b1e7b8) if op=='name_decode' and result else None
        return dict(returned=returned,slot=self.label(self.get64(self.slot)),cursor=self.label(self.get64(self.cursor)),decoded=decoded,effects=self.effects,state=self.snapshot(),modeled_ERR_reason=self.last_error,default_method=self.label(self.get_default_method()))
    def reset_extra(self,case):
        self.extension_values={};self.revoked_values=[];self.issuers=[];self.reasons=[]
    def setup_direct(self,case):
        self.reset_extra(case);self.object=self.allocate('object',256,fill=0x6a);self.info=self.allocate('info',104,fill=0);self.info2=self.allocate('info2',104,fill=0)
        self.token1=self.allocate('token1',32,fill=0x71);self.token2=self.allocate('token2',32,fill=0x72);self.digest_token=self.allocate('digest-token',8,fill=0)
        self.slot=self.allocate('slot',8,fill=0);self.other_slot=self.allocate('other-slot',8,fill=0);self.put64(self.slot,self.object);self.put64(self.other_slot,self.info2)
        self.payload=bytes.fromhex(case.get('data','3000'));self.input=self.allocate('input',2048,fill=0x7b);self.write_bytes(self.input,self.payload);self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,self.input)
        self.print_context=self.allocate('print-context',24,fill=0);self.put64(self.print_context+8,case.get('print_flags',0x100000001))
        self.buffer=self.allocate('buffer',24,fill=0);self.storage=self.allocate('buffer-data',128,fill=0x77);self.put64(self.buffer,case.get('old_length',4));self.put64(self.buffer+8,0 if case.get('null_buffer_data') else self.storage);self.put64(self.buffer+16,case.get('capacity',16));self.write_bytes(self.storage,b'ABCD')
        self.scalar_string=self.string_object('string',10);self.put64(self.scalar_string+8,0);self.put64(self.scalar_string+16,0)
        self.direct_stack=self.stack('stack',[self.scalar_string,0,self.token1] if case['op']=='stack_pop_free' else []);self.alternate_data=self.allocate('alternate-stack-data',64,fill=0);self.put64(self.alternate_data,self.scalar_string)
        self.put64(self.direct_stack+24,self.callbacks_x509['init']);self.put32(self.direct_stack+16,7)
        op=case['op'];present=case.get('present',True);self.put64(self.object,self.info);self.put64(self.info+40,self.token1);self.put64(self.info2+40,self.token2)
        self.put64(self.info+16,self.token1)
        for off in [32,40,56,64,96,104,112,120,128,136,144,176]:self.put64(self.object+off,0)
        if op=='certificate_callback':
            for off in [32,112,120,128,136,144,176]:self.put64(self.object+off,self.token1 if present else 0)
            self.put64(self.object+104,self.scalar_string if present else 0)
        if op=='pubkey_callback':self.put64(self.object+16,self.token1 if present else 0)
        if op=='crl_info_callback':self.put64(self.object+40,self.direct_stack if present else 0)
        self.method=self.allocate('method',40,fill=0);self.put64(self.method+8,self.callbacks_x509['init'] if case.get('method_callback') else 0);self.put64(self.method+16,self.callbacks_x509['free'] if case.get('method_callback') else 0)
        self.set_default_method(self.method if case.get('default_custom') else self.default_method)
        if op=='crl_callback':
            self.put64(self.object+104,self.method);self.put32(self.object+28,case.get('crl_flags',0));self.put32(self.object+48,case.get('idp_flags',0));self.put32(self.object+52,0x807f)
            idp=self.allocate('idp',32,fill=0);self.put64(idp,self.token1)
            for off,key in [(8,'user'),(12,'ca'),(24,'indirect'),(28,'attribute')]:self.put32(idp+off,case.get(key,0))
            if 'reasons' in case:
                b=bytes.fromhex(case['reasons']);bits=self.string_object('idp-reasons',3);p=self.allocate('idp-reason-data',max(1,len(b)),fill=0);self.write_bytes(p,b);self.put32(bits,len(b));self.put64(bits+8,p);self.put64(idp+16,bits)
            self.extension_values={770:idp if case.get('idp') else 0,90:self.token1 if case.get('akid') else 0,88:self.scalar_string if case.get('number') else 0,140:self.scalar_string if case.get('delta') else 0}
            if case.get('present_free'):
                self.put64(self.object+32,self.token1);self.put64(self.object+40,idp);self.put64(self.object+56,self.scalar_string);self.put64(self.object+64,self.scalar_string)
            ext=[]
            for i,s in enumerate(case.get('extensions',[])):
                p=self.allocate('extension-'+str(i),24,fill=0);self.put64(p,self.oid(s['nid']));self.put32(p+8,s.get('critical',0));ext.append(p)
            self.put64(self.info+48,self.stack('extensions',ext))
            for i,s in enumerate(case.get('revoked',[])):
                v=self.allocate('revoked-'+str(i),40,fill=0);ex=[]
                for j,e in enumerate(s.get('extensions',[])):
                    p=self.allocate('rev-ext-'+str(i)+'-'+str(j),24,fill=0);self.put64(p,self.oid(e['nid']));self.put32(p+8,e.get('critical',0));ex.append(p)
                self.put64(v+16,self.stack('rev-ext-stack-'+str(i),ex));self.revoked_values.append(v);self.issuers.append(self.stack('issuer-'+str(i),[]));self.reasons.append(self.string_object('reason-'+str(i),10))
            self.put64(self.info+40,self.stack('revoked',self.revoked_values))
        if op in ['name_new','name_decode','tagged_entry']:self.put64(self.slot,0)
        if op in ['name_free','name_encode','name_print'] or (op=='name_decode' and case.get('initial')):
            self.write_bytes(self.object,bytes(40));entries=[]
            for i,s in enumerate(case.get('sets',[0,0,1])):
                p=self.allocate('name-entry-'+str(i),24,fill=0);self.put64(p,self.oid(13));self.put64(p+8,self.string_object('name-string-'+str(i),12));self.put32(p+16,s);entries.append(p)
            self.put64(self.object,self.stack('name-entries',entries));self.put32(self.object+8,case.get('modified',1));self.put64(self.object+16,self.buffer);self.put64(self.object+24,self.token1 if case.get('canonical_old') else 0);self.put64(self.slot,self.object)
        if case.get('nil_value'):self.put64(self.slot,0)
        if op=='revoked_compare':self.put64(self.object,self.scalar_string);self.put64(self.info2,self.token1)
        if op=='stack_set':
            for i in range(3):self.put64(self.get64(self.direct_stack+8)+8*i,self.scalar_string)
            self.put32(self.direct_stack,case.get('count',2))
class NativeScenario(Scenario,CMSNative):
    def __init__(self,path):
        CMSNative.__init__(self,path);extra=schema()
        class Node(C.Structure):_fields_=[('original',C.c_uint64),('pointer',C.c_void_p),('size',C.c_uint64)]
        count=C.c_size_t.in_dll(self.lib,'ESignOriginalX509SchemaNodeCount').value
        self.schema_map.update({r.original:r.pointer for r in (Node*count).in_dll(self.lib,'ESignOriginalX509SchemaNodes')});self.setup_schema(base_schema()+extra);self.static_regions.extend((self.schema_map[int(r['address'],16)],len(r['bytes'])//2,'schema-'+r['address']) for r in extra)
        self.default_method=C.addressof((C.c_void_p*5).in_dll(self.lib,'ESignOriginalX509CRLMethod'));self.default_slot=C.c_void_p.in_dll(self.lib,'ESignOriginalX509CRLDefaultMethod');self.static_regions.append((self.default_method,40,'default-crl-method'))
        self.callbacks_x509={n:C.cast(getattr(self.lib,'ESignX509Test_'+n),C.c_void_p).value for n in CALLBACKS}
        self.static_regions.extend((p,1,'function-'+hex(CALLBACKS[n])) for n,p in self.callbacks_x509.items())
        self.static_regions.extend((C.cast(getattr(self.lib,'ESignOriginal_'+format(a,'x')),C.c_void_p).value,1,'function-'+hex(a)) for a in set(ENTRIES.values())|set(DEPENDENCIES))
        for op,a in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'));sig=[C.c_int,C.c_void_p,C.c_void_p,C.c_void_p] if op.endswith('_callback') else [C.c_void_p,C.c_void_p] if op in ['name_new','name_free','stack_compare','stack_pop_free','revoked_compare'] else [C.c_void_p,C.c_void_p,C.c_long,C.c_void_p,C.c_int,C.c_int,C.c_int,C.c_void_p] if op in ['name_decode','tagged_entry'] else [C.c_void_p,C.c_void_p,C.c_void_p,C.c_int,C.c_int] if op=='name_encode' else [C.c_void_p,C.c_void_p,C.c_int,C.c_void_p,C.c_void_p] if op=='name_print' else [C.c_void_p,C.c_uint64] if op=='buffer_grow' else [C.c_void_p,C.c_int,C.c_void_p] if op=='stack_set' else [C.c_void_p]
            f.argtypes=sig;f.restype=C.c_void_p if op in ['stack_compare','stack_set'] else C.c_uint64 if op=='buffer_grow' else C.c_int;self.functions[a]=f
        CMSNative.audit_schema(self,base_schema()+extra)
        for off,a in [(0,0),(8,0),(16,0),(24,0x100616d34),(32,0x100616f74)]:
            expect=0 if not a else C.cast(getattr(self.lib,'ESignOriginal_'+format(a,'x')),C.c_void_p).value
            if self.get64(self.default_method+off)!=expect:raise ValueError('Changed original default CRL method')
    def oid_pointer(self,nid):return C.addressof((C.c_ubyte*(958*40)).in_dll(self.lib,'ESignOriginalOIDObjects'))+nid*40
    def get_default_method(self):return self.default_slot.value
    def set_default_method(self,p):self.default_slot.value=p
def name_der():
    ent=lambda oid,text:tl(48,tl(6,bytes.fromhex(oid))+tl(12,text))
    return tl(48,tl(49,ent('550403',b'Invented Name')+ent('55040a',b'Invented Org'))+tl(49,ent('550406',b'ZZ')))
def certificate_der():
    alg=tl(48,tl(6,bytes.fromhex('2a864886f70d01010b'))+tl(5,b''));name=name_der();valid=tl(48,tl(23,b'261024000000Z')+tl(23,b'271024000000Z'));pub=tl(48,alg+tl(3,b'\0invented public key'))
    return tl(48,tl(48,tl(2,b'\1')+alg+name+valid+name+pub)+alg+tl(3,b'\0invented signature'))
def crl_der():
    alg=tl(48,tl(6,bytes.fromhex('2a864886f70d01010b'))+tl(5,b''));date=tl(23,b'261024000000Z');ext=tl(48,tl(6,bytes.fromhex('550403'))+tl(1,b'\xff')+tl(4,b'invented extension'))
    revoked=tl(48,tl(2,b'\2')+date+tl(48,ext))
    return tl(48,tl(48,tl(2,b'\1')+alg+name_der()+date+tl(48,revoked))+alg+tl(3,b'\0invented signature'))
def cms_certificate_der():
    oid=tl(6,bytes.fromhex('2a864886f70d010702'));encap=tl(48,tl(6,bytes.fromhex('2a864886f70d010701'))+tl(160,tl(4,b'Invented certificate payload')))
    return tl(48,oid+tl(160,tl(48,tl(2,b'\1')+tl(49,b'')+encap+tl(160,certificate_der())+tl(161,crl_der())+tl(49,b''))))
def cases():
    r=[]
    for op in ['certificate_callback','pubkey_callback','crl_info_callback','crl_callback']:
        for operation in [-1,0,1,2,3,4,5,6,0x100000005]:
            for opts in [{},{'present':False},{'method_callback':True},{'method_callback':True,'method_init':0,'method_free':0},{'mutate_cleanup':True}]:r.append(dict(op=op,operation=operation,**opts))
    for user in [-1,0,1]:
        for ca in [0,1]:
            for attribute in [0,1]:
                for reasons in [None,'','7f','ffff']:
                    c=dict(op='crl_callback',idp=True,user=user,ca=ca,attribute=attribute,indirect=1,number=True,delta=True,method_callback=True)
                    if reasons is not None:c['reasons']=reasons
                    r.append(c)
    for opts in [{'akid':True},{'delta':True},{'present_free':True,'operation':3},{'method_callback':True,'method_mutation':True,'present_free':True,'operation':3},{'extensions':[{'nid':857}]},{'extensions':[{'nid':13,'critical':1}]},{'extensions':[{'nid':n,'critical':1} for n in [90,140,770]]},{'revoked':[{}]},{'revoked':[{'issuer':True,'reason':7},{'reason':-1}]},{'revoked':[{'issuer_critical':0}]},{'revoked':[{'reason_critical':1}]},{'revoked':[{'extensions':[{'nid':771,'critical':1},{'nid':13,'critical':1}]}]},{'revoked':[{'issuer':True}],'malloc_failures':[0]},{'revoked':[{'issuer':True}],'malloc_failures':[1]}]:r.append(dict(op='crl_callback',**opts))
    for op in ['name_new','name_free']:
        for opts in [{},{'nil_value':True},{'canonical_old':True},{'malloc_failures':[0]},{'malloc_failures':[1]},{'malloc_failures':[2]},{'malloc_failures':[3]}]:r.append(dict(op=op,**opts))
    for data in [name_der(),tl(48,b''),tl(5,b''),b'\x30\x10\x31\x00']:
        for initial in [False,True]:
            for result in [-1,0,1,2]:r.append(dict(op='name_decode',data=data.hex(),initial=initial,canonical_result=result))
    r.append(dict(op='name_decode',data=name_der().hex(),initial=True,canonical_old=True))
    r.append(dict(op='name_encode',sets=[0,1,2,3],realloc_failure=True))
    for i in range(40):r.append(dict(op='name_decode',data=name_der().hex(),malloc_failures=[i]))
    for op in ['name_encode']:
        for sets in [[],[0],[0,0,1],[0,1,0],[-1]]:
            for opts in [{},{'modified':0},{'null_output':True},{'realloc_failure':True,'capacity':0},{'canonical_result':-1},{'canonical_result':0},{'malloc_failures':[0]},{'malloc_failures':[1]},{'malloc_failures':[2]},{'encoding_length':-1}]:r.append(dict(op=op,sets=sets,**opts))
    for result in [-3,0,1,2,2147483647]:r.append(dict(op='name_print',print_result=result,print_flags=MASK))
    for op in ['stack_set']:
        for index in [-1,0,1,2,2147483647]:r.append(dict(op=op,index=index))
        r.append(dict(op=op,nil=True))
    for change in [False,True]:r.append(dict(op='stack_compare',change_compare=change))
    for opts in [{},{'nil':True},{'pop_count':1},{'pop_count':4},{'pop_swap':True,'pop_count':1}]:r.append(dict(op='stack_pop_free',**opts))
    for length in [0,1,4,8,16,17,32,0x5ffffffd,0x100000001]:
        for opts in [{},{'realloc_failure':True},{'null_buffer_data':True,'old_length':0,'capacity':0},{'null_buffer_data':True,'old_length':0,'capacity':0,'malloc_failures':[0]}]:r.append(dict(op='buffer_grow',length=length,**opts))
    r += [dict(op='buffer_grow',length=8,grow_reload=2),dict(op='revoked_compare')]
    for op in ['integer_free','enumerated_free','octet_free','certificate_free','entry_free','inner_stack_free','inner_stack_pop_free']:
        for nil in [False,True]:r.append(dict(op=op,nil=nil))
    for cleanup in [False,True]:
        r.append(dict(op='entry',item=0x100b1ea58,data=certificate_der().hex(),cleanup=cleanup))
    for data,item in [(crl_der(),0x100b1ee58)]:
        for cleanup in [False,True]:r.append(dict(op='entry',item=item,data=data.hex(),cleanup=cleanup))
    for cleanup in [False,True]:r.append(dict(op='cms_bio',data=cms_certificate_der().hex(),cleanup=cleanup))
    return r
