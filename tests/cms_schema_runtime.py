"""Invented CMS messages, original-schema relocation audit, and native comparisons."""
import ctypes as C,gzip,json,struct
from pathlib import Path
from asn1_primitives_runtime import Scenario as PrimitiveScenario,NativeScenario as PrimitiveNative
from bio_input_runtime import MASK,i32,i64
ROOT=Path(__file__).resolve().parents[1]
ENTRIES={'cms_bio':0x10062fb30,'signer_callback':0x10062f838,'recipient_key_callback':0x10062f884,'key_agree_callback':0x10062f8ac,'recipient_callback':0x10062f918,'cms_callback':0x10062f9a8,'long_new':0x1006159c4,'long_free':0x1006159d4,'long_decode':0x1006159e0,'long_encode':0x100615b08,'long_print':0x100615bac}
DEPENDENCIES={0x10060c954:'EVP_PKEY_free',0x1006165f4:'X509_free',0x100606c78:'EVP_MD_CTX_cleanup',0x10060700c:'EVP_CIPHER_CTX_init',0x10060e13c:'EVP_CIPHER_CTX_set_flags',0x10060f3fc:'EVP_PKEY_CTX_free',0x100607474:'EVP_CIPHER_CTX_cleanup',0x10062faac:'CMS_stream',0x10062eef4:'CMS_dataInit',0x10062effc:'CMS_dataFinal',0x1005d160c:'BN_num_bits_word',0x100600ed8:'BIO_printf',0x10061660c:'X509_aux',0x1006156ec:'X509_PUBKEY_aux',0x1006168c4:'X509_CRL_aux',0x100616890:'X509_CRL_INFO_aux',0x100615bfc:'X509_NAME_new',0x100615cc8:'X509_NAME_free',0x100615d1c:'X509_NAME_d2i',0x100615f14:'X509_NAME_i2d',0x1006160dc:'X509_NAME_print'}
def schema():return json.loads(gzip.decompress((ROOT/'reconstruction/cms-schema/schema.json.gz').read_bytes()))
class Scenario(PrimitiveScenario):
    def label(self,p):
        for base,n,name in self.static_regions:
            if base<=p<base+n:return name+('+'+str(p-base) if p!=base else '')
        return PrimitiveScenario.label(self,p)
    def dependency(self,target,a):
        if target in DEPENDENCIES:
            name=DEPENDENCIES[target]
            if target==0x1005d160c:self.effects.append(dict(call=name,word=str(a[0])));return a[0].bit_length()
            if target==0x100600ed8:self.effects.append(dict(call=name,bio=self.label(a[0]),format=self.string(a[1]),value=str(i64(a[2]))));return self.case.get('print_result',7)&MASK
            if target in [0x10061660c,0x1006156ec,0x1006168c4,0x100616890,0x100615bfc,0x100615cc8,0x100615d1c,0x100615f14,0x1006160dc]:raise ValueError('Fixture reached unreconstructed X509 callback '+name)
            row=dict(call=name)
            if target==0x10062faac:
                row.update(boundary=self.label(a[0]),cms=self.label(a[1]));self.put64(a[0],self.output);result=self.case.get('stream_result',1)
            elif target==0x10062eef4:
                row.update(cms=self.label(a[0]),bio=self.label(a[1]));result=0 if self.case.get('init_failure') else self.output
            elif target==0x10062effc:row.update(cms=self.label(a[0]),bio=self.label(a[1]));result=self.case.get('final_result',1)
            else:
                row['value']=self.label(a[0]);result=self.case.get('boundary_result',-1)
                if target==0x10060e13c:row['flags']=i32(a[1])
                if self.case.get('mutate_fields'):
                    self.put64(self.object+56,self.token2);self.put64(self.object+120,0);self.put64(self.recipient+32,self.token2);self.put64(self.recipient+48,0)
            self.effects.append(row);return result&MASK
        if target==0x1005b2bb8 and self.case.get('mutate_fields'):
            result=PrimitiveScenario.dependency(self,target,a);self.put64(self.recipient+32,self.token2);return result
        return PrimitiveScenario.dependency(self,target,a)
    def snapshot(self):
        states={}
        for p,name,kind,n in self.kinds:
            data=self.read_bytes(p,n);words=[]
            for i in range(0,n//8*8,8):
                v=int.from_bytes(data[i:i+8],'little')
                try:label=self.label(v)
                except ValueError:label=None
                words.append({'pointer':label} if label is not None else data[i:i+8].hex())
            states[name]={'size':n,'words':words,'tail':data[n//8*8:].hex()}
        return states
    def decoded(self,p,item,depth=0):
        if depth>30:raise ValueError('Unbounded decoded fixture tree')
        row=self.schema_items[item];b=bytes.fromhex(row['bytes']);typ,utype,templates,count,fn,size,name=struct.unpack('<b7xqQqQqQ',b)
        nm=self.schema_strings[name]
        if nm=='LONG':return str(i64(p))
        if not p:return None
        if typ in [0,5]:
            if utype==5:return 'NULL'
            if utype==1:return i32(p)
            if utype==6:
                n=i32(self.get32(p+20));d=self.get64(p+24);return {'oid':self.read_bytes(d,n).hex() if d else '', 'nid':i32(self.get32(p+16))}
            if utype==-4:return {'type':i32(self.get32(p)),'value':self.label(self.get64(p+8))}
            n=i32(self.get32(p));d=self.get64(p+8);return {'type':i32(self.get32(p+4)),'bytes':self.read_bytes(d,n).hex() if d else ''}
        fields=self.schema_fields[templates]
        if typ==2:
            choice=i32(self.get32(p+utype));fields=fields[choice:choice+1] if choice>=0 else []
        out={'item':nm,'fields':{}}
        for flags,tag,off,field_name,child in fields:
            if flags&768:
                # This graph has exactly one ADB, keyed by CMS contentType.
                nid=i32(self.invoke(0x1005b3138,[self.get64(p)]));flags,tag,off,field_name,child=self.schema_adb.get(nid,self.schema_default)
            v=p if flags&1024 else self.get64(p+off);fnm=self.schema_strings[field_name] if field_name else "<unnamed>"
            if flags&6:
                out['fields'][fnm]=[self.decoded(self.get64(self.get64(v+8)+8*i),child,depth+1) for i in range(max(0,i32(self.get32(v))))] if v else None
            else:out['fields'][fnm]=self.decoded(v,child,depth+1)
        return out
    def evaluate(self,case):
        self.reset_heap();self.case=case;self.effects=[];self.regions=[];self.kinds=[];self.stacks={};self.malloc_count=0;self.push_count=0;self.free_count=0;self.last_error=0
        self.item=self.schema_pointer(0x100b1e5c8);self.input=self.allocate('input',512,fill=0x7b);data=bytes.fromhex(case.get('data','00'));self.write_bytes(self.input,data)
        self.slot=self.allocate('slot',8,fill=0);self.cursor=self.allocate('cursor',8,fill=0);self.put64(self.cursor,self.input)
        self.object=self.allocate('callback-object',256,fill=0);self.recipient=self.allocate('recipient',128,fill=0);self.token1=self.allocate('token1',16,fill=0x71);self.token2=self.allocate('token2',16,fill=0x72);self.output=self.allocate('output',32,fill=0x73)
        self.argument=self.allocate('stream-argument',24,fill=0);self.put64(self.argument,self.token1);self.put64(self.argument+8,self.token2)
        self.free_flag=self.allocate('free-content',1,fill=0x45)
        op=case['op'];a=ENTRIES.get(op);decode=op in ['cms_bio','entry'];item=case.get('item',0x100b24750)
        if decode:
            if op=='entry':a=0x100619304;args=[self.slot,self.cursor,len(data),self.schema_pointer(item)]
            else:
                bio=self.invoke(0x1005fedf0,[self.memory_method]);self.invoke(0x1005ff090,[bio,self.input,len(data)]);args=[bio,self.slot]
        elif op in ['long_new','long_free']:self.put64(self.slot,case.get('value',99));args=[self.slot,self.item]
        elif op=='long_decode':self.put64(self.slot,case.get('value',99));args=[self.slot,self.input,case.get('length',len(data)),0,self.free_flag,self.item]
        elif op=='long_encode':self.put64(self.slot,case.get('value',99));args=[self.slot,0 if case.get('null_output') else self.output,self.free_flag,self.item]
        elif op=='long_print':self.put64(self.slot,case.get('value',99));args=[self.token1,self.slot,self.item,3,0]
        else:
            self.put64(self.slot,self.object);present=case.get('present',True)
            if op=='signer_callback':
                for off in [56,64,120]:self.put64(self.object+off,self.token1 if present else 0)
            elif op=='recipient_key_callback':self.put64(self.object+16,self.token1 if present else 0)
            elif op=='key_agree_callback':self.put64(self.object+40,self.token1 if present else 0)
            elif op=='recipient_callback':
                self.put32(self.object,case.get('recipient_type',0));self.put64(self.object+8,self.recipient)
                for off in [32,40,48]:self.put64(self.recipient+off,self.token1 if present else 0)
                if case.get('recipient_type') in [2,3]:self.put64(self.recipient+40,8)
            args=[case.get('operation',3),0 if case.get('null_slot') else self.slot,0, self.argument]
        result=self.invoke(a,args);tree=None;content=None
        if decode and result:
            tree=self.decoded(result,item)
            slot=self.invoke(0x10062edd8,[result])
            if slot and self.get64(slot):
                v=self.get64(slot);n=i32(self.get32(v));d=self.get64(v+8);content=self.read_bytes(d,n).hex() if d else ''
            if case.get('cleanup',True):self.invoke(0x100618078,[result,self.schema_pointer(item)])
        result=None if op=='long_free' else self.label(result) if decode else i32(result)
        return {'returned':result,'slot':str(i64(self.get64(self.slot))) if op.startswith('long_') else self.label(self.get64(self.slot)),'cursor':self.label(self.get64(self.cursor)),'free_content':self.read_bytes(self.free_flag,1).hex(),'decoded':tree,'content':content,'effects':self.effects,'state':self.snapshot(),'modeled_ERR_reason':self.last_error}
    def setup_schema(self,nodes):
        self.nodes=nodes;self.schema_items={int(r['address'],16):r for r in nodes if r['kind']=='item'}
        self.schema_strings={int(r['address'],16):bytes.fromhex(r['bytes']).rstrip(b'\0').decode() for r in nodes if r['kind']=='string'}
        self.schema_fields={int(r['address'],16):[struct.unpack_from('<QqQQQ',bytes.fromhex(r['bytes']),i) for i in range(0,len(r['bytes'])//2,40)] for r in nodes if r['kind']=='templates'}
        table=next(bytes.fromhex(r['bytes']) for r in nodes if r['kind']=='adb_table');self.schema_adb={struct.unpack_from('<q',table,i)[0]:struct.unpack_from('<QqQQQ',table,i+8) for i in range(0,len(table),48)}
        self.schema_default=self.schema_fields[0x100b24a20][0]
class NativeScenario(Scenario,PrimitiveNative):
    def __init__(self,path):
        PrimitiveNative.__init__(self,path);nodes=schema();self.setup_schema(nodes)
        class Node(C.Structure):_fields_=[('original',C.c_uint64),('pointer',C.c_void_p),('size',C.c_uint64)]
        count=C.c_size_t.in_dll(self.lib,'ESignOriginalCMSSchemaNodeCount').value
        self.schema_map={r.original:r.pointer for r in (Node*count).in_dll(self.lib,'ESignOriginalCMSSchemaNodes')}
        # Reuse the earlier original ANY descriptor. Its equivalent C string
        # is already owned by that component and is audited by exact bytes.
        self.schema_map[0x100a5ca2e]=self.get64(self.schema_map[0x100b1f0e8]+48)
        self.static_regions=[(self.schema_map[int(r['address'],16)],len(r['bytes'])//2,'schema-'+r['address']) for r in nodes]
        objects=C.addressof((C.c_ubyte*(958*40)).in_dll(self.lib,'ESignOriginalOIDObjects'));self.static_regions.extend((objects+i*40,40,'static-oid-'+str(i)) for i in range(958))
        for a in set(ENTRIES.values())|set(DEPENDENCIES):self.static_regions.append((C.cast(getattr(self.lib,'ESignOriginal_'+format(a,'x')),C.c_void_p).value,1,'function-'+hex(a)))
        for op,a in ENTRIES.items():
            f=getattr(self.lib,'ESignOriginal_'+format(a,'x'))
            f.argtypes=[C.c_void_p,C.c_void_p] if op in ['cms_bio','long_new','long_free'] else [C.c_void_p,C.c_void_p,C.c_uint64,C.c_int,C.c_void_p,C.c_void_p] if op=='long_decode' else [C.c_void_p]*4 if op=='long_encode' else [C.c_void_p,C.c_void_p,C.c_void_p,C.c_int,C.c_void_p] if op=='long_print' else [C.c_int,C.c_void_p,C.c_void_p,C.c_void_p]
            f.restype=C.c_void_p if op=='cms_bio' else None if op=='long_free' else C.c_int;self.functions[a]=f
        f=self.lib.ESignOriginal_1005b3138;f.argtypes=[C.c_void_p];f.restype=C.c_int;self.functions[0x1005b3138]=f
        f=self.lib.ESignOriginal_10062edd8;f.argtypes=[C.c_void_p];f.restype=C.c_void_p;self.functions[0x10062edd8]=f
        self.audit_schema(nodes)
    def schema_pointer(self,a):return self.schema_map[a]
    def audit_schema(self,nodes):
        if len(self.schema_map)!=len(nodes):raise ValueError('Changed relocated schema node count')
        for r in nodes:
            a=int(r['address'],16);expected=bytearray.fromhex(r['bytes']);p=self.schema_map[a]
            for rel in r['relocations']:
                target=int(rel['target'],16);value=C.cast(getattr(self.lib,'ESignOriginal_'+format(target,'x')),C.c_void_p).value if rel['kind']=='function' else self.schema_map[target]
                expected[rel['offset']:rel['offset']+8]=struct.pack('<Q',value)
            if self.read_bytes(p,len(expected))!=expected:raise ValueError('Changed original relocated schema bytes '+r['address'])
def tl(tag,b,indef=False):
    if indef:return bytes([tag,128])+b+b'\0\0'
    n=len(b);l=bytes([n]) if n<128 else bytes([128+(n.bit_length()+7)//8])+n.to_bytes((n.bit_length()+7)//8,'big');return bytes([tag])+l+b
def messages():
    oid=lambda h:tl(6,bytes.fromhex(h));seq=lambda b:tl(48,b);ver=tl(2,b'\0');alg=seq(oid('608648016503040201')+tl(5,b''));dataoid=oid('2a864886f70d010701');encap=seq(dataoid+tl(160,tl(4,b'Invented CMS payload')));eci=seq(dataoid+alg+tl(128,b'invented ciphertext'))
    signer=seq(tl(2,b'\3')+tl(128,b'invented key id')+alg+alg+tl(4,b'invented signature'))
    content={21:tl(4,b'Invented CMS payload'),22:seq(ver+tl(49,alg)+encap+tl(49,signer)),23:seq(ver+tl(49,b'')+eci),25:seq(ver+alg+encap+tl(4,b'invented digest')),26:seq(ver+eci),205:seq(ver+tl(49,b'')+alg+tl(161,oid('608648016503040201')+tl(5,b''))+encap+tl(4,b'invented MAC')),786:seq(ver+alg+encap)}
    oids={21:'2a864886f70d010701',22:'2a864886f70d010702',23:'2a864886f70d010703',25:'2a864886f70d010705',26:'2a864886f70d010706',205:'2a864886f70d0109100102',786:'2a864886f70d0109100109'}
    return {nid:seq(oid(oids[nid])+tl(160,b)) for nid,b in content.items()}
def extended_messages():
    oid=lambda h:tl(6,bytes.fromhex(h));seq=lambda b:tl(48,b);ver=tl(2,b'\0');alg=seq(oid('608648016503040201')+tl(5,b''));dataoid=oid('2a864886f70d010701');encap=seq(dataoid+tl(160,tl(4,b'Invented CMS payload')));eci=seq(dataoid+alg+tl(128,b'invented ciphertext'))
    wrap=lambda oidhex,body:seq(oid(oidhex)+tl(160,body))
    ktri=seq(ver+tl(128,b'key-id')+alg+tl(4,b'wrapped key'))
    rid=tl(160,tl(4,b'recipient-id')+tl(24,b'20261024000000Z')+seq(oid('2a0304')+tl(4,b'key attribute')))
    kari=tl(161,ver+tl(160,tl(128,b'originator-id'))+tl(161,tl(4,b'ukm'))+alg+seq(seq(rid+tl(4,b'wrapped key'))))
    kek=tl(162,ver+seq(tl(4,b'key-id'))+alg+tl(4,b'wrapped key'))
    password=tl(163,ver+tl(160,oid('2a0304'))+alg+tl(4,b'wrapped key'))
    other=tl(164,oid('2a0304')+tl(4,b'other recipient'))
    attr=seq(oid('2a0304')+tl(49,tl(4,b'invented attribute')))
    signer=seq(tl(2,b'\3')+tl(128,b'signer-id')+alg+tl(160,attr)+alg+tl(4,b'invented signature')+tl(161,attr))
    result=[('enveloped-all-recipients',wrap('2a864886f70d010703',seq(ver+tl(49,ktri+kari+kek+password+other)+eci+tl(161,attr)))),('signed-attributes',wrap('2a864886f70d010702',seq(ver+tl(49,alg)+encap+tl(49,signer)))),('unknown-octet',wrap('2a030405',tl(4,b'Invented CMS payload'))),('unknown-null',wrap('2a030405',tl(5,b'')))]
    # Original NDEF sequence, explicit wrapper and constructed OCTET STRING.
    result.append(('indefinite-data',tl(48,dataoid+tl(160,tl(36,tl(4,b'Invented ')+tl(4,b'CMS payload'),True),True),True)))
    return result
def cases():
    r=[]
    for op in ['long_new','long_free']:r.append(dict(op=op))
    for data in ['','00','ff','01','7f','80','007f','0080','ff7f','ff80','ffff','7fffffff','0080000000','7fffffffffffffff','8000000000000000','00ffffffffffffffff','ffffffffffffffffff','010203040506070809','00010203040506070809']:
        r.append(dict(op='long_decode',data=data))
    for length in [-2,-1,0,0x100000001,0x100000000]:r.append(dict(op='long_decode',data='80',length=length))
    for v in [-(1<<63),-65537,-256,-129,-128,-1,0,1,127,128,255,256,65535,0x7fffffff,(1<<63)-1]:
        for null in [False,True]:r.append(dict(op='long_encode',value=v,null_output=null))
        r.append(dict(op='long_print',value=v,print_result=-3 if v&1 else 7))
    for op in ['signer_callback','recipient_key_callback','key_agree_callback','recipient_callback','cms_callback']:
        for operation in [-1,0,1,2,3,4,5,9,10,11,12,13,14,0x100000003]:
            for option in [{},{'present':False},{'mutate_fields':True}]:r.append(dict(op=op,operation=operation,**option))
    for typ in [-1,0,1,2,3,4,99]:
        for option in [{},{'present':False},{'mutate_fields':True}]:r.append(dict(op='recipient_callback',operation=2,recipient_type=typ,**option))
    for op in [10,11,12,13]:
        for options in [{'null_slot':True},{'stream_result':0},{'stream_result':-1},{'final_result':0},{'final_result':-1},{'init_failure':True}]:r.append(dict(op='cms_callback',operation=op,**options))
    for nid,data in messages().items():
        for op in ['entry','cms_bio']:
            for cleanup in [False,True]:r.append(dict(op=op,data=data.hex(),nid=nid,cleanup=cleanup))
            # Reject declared lengths beyond available data, not undefined
            # single-byte fresh-cache outputs in old original item code.
            r.append(dict(op=op,data=(data[:-4]).hex(),nid=nid,malformed=True))
    for nid in [21,22]:
        for i in range(11 if nid==21 else 37):r.append(dict(op='cms_bio',data=messages()[nid].hex(),nid=nid,malloc_failures=[i]))
    for data in ['3000','30020600','300d06092a864886f70d010701a000','301006092a864886f70d010701a0030500']:
        for op in ['entry','cms_bio']:r.append(dict(op=op,data=data,malformed=True))
    for name,data in extended_messages():
        for op in ['entry','cms_bio']:r.append(dict(op=op,data=data.hex(),variant=name))
    return r
