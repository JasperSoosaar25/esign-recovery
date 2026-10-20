#!/usr/bin/env python3
"""Replay the original provisioning-profile class with explicit CMS/certificate boundaries."""
import argparse,copy,gzip,hashlib,json,plistlib,struct,zipfile,datetime
from pathlib import Path
from capstone import Cs,CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN
from unicorn import arm64_const as arm
from audit_evidence import EXPECTED_EXECUTABLE,require
from recover_objc import MachO
from recover_dispatch import Dispatch
from recover_method_flow import walk
from recover_entitlements import boundaries_and_branches,validate_instruction_bytes,sparse_image
from recover_signature_blobs import BlobMachine,validate_inputs,FoundationError,HEAP,HEAP_SIZE,MASK
from recover_localization import STACK,STACK_SIZE
from recover_load_commands import setter
ROOT=Path(__file__).resolve().parents[1];OUT=ROOT/'reconstruction/mobileprovision'
NAME='YYYMobileprovision';NAMES=(NAME,);CLASS_SLOTS={0x100c73098:NAME,0x100c73090:'YYYP12'}
HYPOTHESES={0x100719260:[0,1],0x10071ba2c:[0,1]}
BOUNDARIES={0x1005ffa5c:'bio_s_mem',0x1005fedf0:'bio_new',0x1005ff090:'bio_write',0x10062fb30:'d2i_CMS_bio',0x10062edd8:'CMS_get0_content'}
# Fixed original data inputs, populated from the exact input during research.
EXTRA={
    "0x10099b690": "ff300a09acc70776",
    "0x10099b698": "977287548546a277",
    "0x10099b6a0": "eada23880ef19ffe",
    "0x10099b6a8": "120311aadc20ddd6",
    "0x10099b6b0": "806f277fb1b25d6e",
    "0x10099b6e8": "966cdec87948b305",
    "0x10099b6f0": "84545b974960512d",
    "0x10099b6f8": "c0b47fff90f01432",
    "0x100e0e930": "83",
    "0x100e0e931": "67",
    "0x100e0e932": "68",
    "0x100e0e933": "1e",
    "0x100e0e934": "06",
    "0x100e0e935": "aa",
    "0x100e0e936": "b2",
    "0x100e0e937": "2e",
    "0x100e0e938": "86",
    "0x100e0e939": "39",
    "0x100e0e93a": "66",
    "0x100e0e93b": "cd",
    "0x100e0e93c": "ea",
    "0x100e0e93d": "cf",
    "0x100e0e93e": "d0",
    "0x100e0e93f": "59",
    "0x100e0e940": "2e",
    "0x100e0e941": "17",
    "0x100e0e942": "6c",
    "0x100e0e943": "42",
    "0x100e0e944": "4e",
    "0x100e0e945": "a8",
    "0x100e0e946": "dc",
    "0x100e0e947": "42",
    "0x100e0e950": "77227539c1b227168013159379b648c9798edecafb4a13",
    "0x100e0e968": "d302aaa10d24d668",
    "0x100e0e970": "e9",
    "0x100e0e971": "de",
    "0x100e0e972": "92",
    "0x100e0e973": "28",
    "0x100e0e974": "86",
    "0x100e0e978": "ecfe994de9fb1e82d98865b8",
    "0x100e0e985": "5a",
    "0x100e0e986": "ba",
    "0x100e0e987": "ab",
    "0x100e0e988": "78",
    "0x100e0e989": "e0",
    "0x100e0e98a": "c134a1ce",
    "0x100e0e98f": "b4",
    "0x100e0e990": "db",
    "0x100e0e991": "03",
    "0x100e0e992": "71",
    "0x100e0e993": "b8",
    "0x100e0e994": "61",
    "0x100e0e995": "55",
    "0x100e0e996": "84",
    "0x100e0e997": "90",
    "0x100e0e998": "36",
    "0x100e0e999": "de2473c1f67a407b51",
    "0x100e0e9b0": "e5242bfb20033059",
    "0x100e0e9b8": "2e",
    "0x100e0e9b9": "afda5296f4957a46",
    "0x100e0e9c1": "72",
    "0x100e0e9c2": "15",
    "0x100e0e9c3": "83",
    "0x100e0e9c4": "7a",
    "0x100e0e9c5": "3f",
    "0x100e0e9c6": "38",
    "0x100e0e9d0": "f33e3480c75b6caac111c0a594de013bc30b8f48ea3d",
    "0x100e0e9e7": "35",
    "0x100e0e9e8": "60",
    "0x100e0e9e9": "bd",
    "0x100e0e9ea": "16",
    "0x100e0e9eb": "c7",
    "0x100e0e9ec": "8f",
    "0x100e0e9ed": "8e",
    "0x100e0e9ee": "61",
    "0x100e0e9ef": "e1",
    "0x100e0e9f0": "17bef1cd2f1707f8",
    "0x100e0e9f9": "1b",
    "0x100e0e9fa": "a3",
    "0x100e0e9fb": "20",
    "0x100e0e9fc": "91",
    "0x100e0e9fd": "3e",
    "0x100e0e9fe": "53",
    "0x100e0e9ff": "18",
    "0x100e0ea00": "1f",
    "0x100e0ea01": "08",
    "0x100e0ea02": "8e",
    "0x100e0ea03": "d9",
    "0x100e0ea04": "77",
    "0x100e0ea05": "20",
    "0x100e0ea06": "3a",
    "0x100e0ea07": "7c",
    "0x100e0ea08": "8f9aff7f2ef3f7bbe36f5878724b",
    "0x100e0ea17": "cf",
    "0x100e0ea18": "14",
    "0x100e0ea19": "5f",
    "0x100e0ea1a": "85",
    "0x100e0ea1b": "83",
    "0x100e0ea1c": "aa",
    "0x100e0ea1d": "59",
    "0x100e0ea1e": "d5",
    "0x100e0ea1f": "53",
    "0x100e0ea20": "f88fdc763dc66d9f",
    "0x100e0ea29": "16",
    "0x100e0ea2a": "24",
    "0x100e0ea2b": "5e",
    "0x100e0ea2c": "73",
    "0x100e0ea2d": "10",
    "0x100e0ea2e": "9ff2085a",
    "0x100e0ea40": "f5",
    "0x100e0ea41": "34",
    "0x100e0ea42": "93",
    "0x100e0ea43": "c9",
    "0x100e0ea44": "e91c4e10dfc11c02",
    "0x100e0ea4c": "7b",
    "0x100e0ea4d": "46",
    "0x100e0ea4e": "ce",
    "0x100e0ea4f": "1b",
    "0x100e0ea50": "21",
    "0x100e0ea51": "88",
    "0x100e0ea52": "0e",
    "0x100e0ea53": "72",
    "0x100e0ea54": "56",
    "0x100e0ea60": "efe9fa9289a1f85e98ecd5130e9dd9b54a537f64",
    "0x100e0ea75": "05",
    "0x100e0ea76": "606670deb54fb392",
    "0x100e0ea7e": "2f",
    "0x100e0ea7f": "ed",
    "0x100e0ea80": "fd",
    "0x100e0ea81": "9e",
    "0x100e0ea82": "abbc1f8d6af6316a22562685",
    "0x100e0ea8f": "9e",
    "0x100e0ea90": "d7",
    "0x100e0ea91": "87",
    "0x100e0ea92": "51",
    "0x100e0ea93": "3a",
    "0x100e0ea94": "90",
    "0x100e0ea95": "6c",
    "0x100e0ea96": "83b54dcc6f85fafe",
    "0x100e0ea9e": "c87a7cf545764723c77f485f4d1e",
    "0x100e0eab0": "60",
    "0x100e0eab1": "58",
    "0x100e0eab2": "0a",
    "0x100e0eab3": "28",
    "0x100e0eab4": "3f",
    "0x100e0eab5": "a6",
    "0x100e0eab6": "11",
    "0x100e0eab7": "62",
    "0x100e0eab8": "d9",
    "0x100e0eab9": "d2",
    "0x100e0eaba": "42",
    "0x100e0eabb": "91",
    "0x100e0eabc": "3b",
    "0x100e0eabd": "e1",
    "0x100e0eabe": "5c",
    "0x100e0eabf": "1b",
    "0x100e0eac0": "cc",
    "0x100e0eac1": "f11be226d534c711",
    "0x100e0eac9": "51",
    "0x100e0eaca": "6d",
    "0x100e0eacb": "7c",
    "0x100e0ead0": "e4bec8448ce966b4cadac6bf5e8a8f2e3cd0236fad260d7fb593f2",
    "0x100e0eaf0": "87",
    "0x100e0eaf1": "ba",
    "0x100e0eaf2": "cb",
    "0x100e0eaf3": "9c",
    "0x100e0eaf4": "7a",
    "0x100e0eaf5": "bd",
    "0x100e0eaf6": "a4",
    "0x100e0eaf7": "5b",
    "0x100e0eaf8": "61",
    "0x100e0eaf9": "ee",
    "0x100e0eafa": "42",
    "0x100e0eafb": "bb557c60cfa27476",
    "0x100e0eb10": "555d1a5d748870bd8cb5f0c95eef7b8d297c",
    "0x100e0eb30": "66",
    "0x100e0eb31": "b7",
    "0x100e0eb32": "df",
    "0x100e0eb33": "c5",
    "0x100e0eb34": "fc",
    "0x100e0eb35": "66",
    "0x100e0eb36": "c8",
    "0x100e0eb37": "5d",
    "0x100e0eb38": "be",
    "0x100e0eb39": "61",
    "0x100e0eb3a": "7a",
    "0x100e0eb3b": "30",
    "0x100e0eb3c": "f6",
    "0x100e0eb3d": "fa",
    "0x100e0eb3e": "89",
    "0x100e0eb3f": "da",
    "0x100e0eb40": "b0",
    "0x100e0eb41": "51",
    "0x100e0eb42": "c5",
    "0x100e0eb43": "16",
    "0x100e0eb44": "e5",
    "0x100e0eb45": "db",
    "0x100e0eb50": "e772058437c20677d601b9b0bafed284d7900adfcd",
    "0x100e95d84": "00000000",
    "0x100e0eb70": "0000000000000000c80700000000000050e9e000010000001700000000000000",
    "0x100e0eb90": "0000000000000000c80700000000000078e9e000010000000c00000000000000",
    "0x100e0ebb0": "0000000000000000c8070000000000008ae9e000010000000400000000000000",
    "0x100e0ebd0": "0000000000000000c80700000000000099e9e000010000000900000000000000",
    "0x100e0ebf0": "0000000000000000c807000000000000d0e9e000010000001600000000000000",
    "0x100e0ec10": "0000000000000000c807000000000000f0e9e000010000000800000000000000",
    "0x100e0ec30": "0000000000000000c80700000000000008eae000010000000e00000000000000",
    "0x100e0ec50": "0000000000000000c80700000000000020eae000010000000800000000000000",
    "0x100e0ec70": "0000000000000000c8070000000000002eeae000010000000400000000000000",
    "0x100e0ec90": "0000000000000000c80700000000000060eae000010000001400000000000000",
    "0x100e0ecb0": "0000000000000000c80700000000000082eae000010000000c00000000000000",
    "0x100e0ecd0": "0000000000000000c8070000000000009eeae000010000000e00000000000000",
    "0x100e0ecf0": "0000000000000000c807000000000000d0eae000010000001b00000000000000",
    "0x100e0ed10": "0000000000000000c80700000000000010ebe000010000001200000000000000",
    "0x100e0ed30": "0000000000000000c80700000000000050ebe000010000001500000000000000"
}

def original_flows():return [json.loads(l) for l in gzip.decompress((ROOT/'analysis/app-methods'/f'{NAME}.jsonl.gz').read_bytes()).splitlines()]
def expanded(image,dispatch):
    starts,branches=boundaries_and_branches();result=[]
    for base in original_flows():
        r=walk(image.data,int(base['entry'],16),starts,branches,image=image,dispatch=dispatch,call_return_values=HYPOTHESES)
        r.update({k:base[k] for k in ['class_name','kind','selector','abi','executable_sha256']})
        require(not r['unresolved_indirect_jumps'] and r['boundary_stops']==base['boundary_stops'],'Incomplete profile flow '+base['selector']);result.append(r)
    return result

def profile_metadata(metadata):
    c=metadata[NAME]
    return [{'name':NAME,'superclass':c['superclass'],'instance_size':c['instance_size'],
        'ivars':[{k:v[k] for k in ['name','type_encoding','offset']} for v in c['ivars']],
        'methods':[{k:v[k] for k in ['kind','selector','type_encoding']} for v in c['methods']]}]

def plain(value):
    if isinstance(value,bytes):return {'data_hex':value.hex()}
    if isinstance(value,datetime.datetime):return {'date_unix':int((value-datetime.datetime(1970,1,1)).total_seconds())}
    if isinstance(value,list):return [plain(v) for v in value]
    if isinstance(value,dict):return {k:plain(v) for k,v in value.items() if k!='class_name'}
    return value

def plist_value(value):
    if isinstance(value,dict):
        if set(value)=={'data_hex'}:return bytes.fromhex(value['data_hex'])
        if set(value)=={'date_unix'}:return datetime.datetime(1970,1,1)+datetime.timedelta(seconds=value['date_unix'])
        return {k:plist_value(v) for k,v in value.items()}
    if isinstance(value,list):return [plist_value(v) for v in value]
    return value

class ProfileMachine(BlobMachine):
    def __init__(self,chunks,records,bindings,classes,external,metadata):
        super().__init__(chunks,records,bindings,classes,external,metadata,names=NAMES)
        self.metadata=metadata;self.case={};self.effects=[];self.literal_values={}
    def raw(self,size=256):
        p=self.obj(('raw',self.next_token));self.next_token+=max(0,((size+255)//256)*256-256);self.uc.mem_write(p,bytes(size));return p
    def value(self,token):
        if token and 0x100e0eb70<=token<=0x100e0ed30:
            self.reads[(token,32)]=True
            _,flags,pointer,length=struct.unpack('<QQQQ',bytes(self.uc.mem_read(token,32)))
            require(flags==0x7c8 and length<100,'Changed original CFString prefix')
            self.reads[(pointer,length)]=True;raw=bytes(self.uc.mem_read(pointer,length));text=raw.decode('utf8')
            self.literal_values[token]=text;return text
        return super().value(token)
    def write(self,uc,access,address,size,value,user):
        if 0x100e0e930<=address and address+size<=0x100e0eb66 or 0x100e95d84<=address and address+size<=0x100e95d88:return
        super().write(uc,access,address,size,value,user)
    def message(self,selector,receiver,args):
        if not receiver:return 0
        value=self.value(receiver)
        if selector=='alloc' and value==('class','YYYP12'):return self.obj({'class_name':'YYYP12'})
        if selector=='initWithCertificateData:':
            data=self.value(args[0]);index=self.cert_index;self.cert_index+=1
            self.effects.append({'call':'initWithCertificateData:','data':plain(data)})
            if index==self.case.get('certificate_failure',-1):return 0
            serial=self.case.get('certificate_serials',[])[index] if index<len(self.case.get('certificate_serials',[])) else 'CERT-'+str(index)
            value['certificate_serial']=serial;return receiver
        if selector=='serialNumber':return self.obj(value.get('certificate_serial'))
        if selector=='isEqualToString:':return int(value==self.value(args[0]))
        if selector=='mutableCopy':return self.obj(copy.copy(value))
        if selector=='objectForKeyedSubscript:':
            if not isinstance(value,dict):raise FoundationError('NSInvalidArgumentException')
            return self.obj(value.get(self.value(args[0])))
        if selector=='setObject:forKeyedSubscript:':
            key=self.value(args[1]);item=self.value(args[0]);require(isinstance(value,dict),'Unexpected profile dictionary')
            if item is None:value.pop(key,None)
            else:value[key]=item
            return 0
        if selector=='boolValue':
            if isinstance(value,str):return int(value.strip().lower().startswith(('y','t')) or value.strip().lstrip('+-').startswith(tuple('123456789')))
            return int(bool(value))
        if selector=='init':return receiver
        if selector=='length':return len(value['mutable_string']) if isinstance(value,dict) and 'mutable_string' in value else len(value)
        if selector=='bytes':
            p=self.raw(max(256,len(value)));self.uc.mem_write(p,bytes(value));return p
        if selector=='dataWithBytes:length:':
            length=args[1];require(length<1000000,'Oversized original content read');return self.obj(bytes(self.uc.mem_read(args[0],length)))
        if selector=='propertyListWithData:options:format:error:':
            require(args[1:4]==[0,0,0],'Unexpected original profile plist options')
            try:return self.obj(plistlib.loads(bytes(self.value(args[0]))))
            except (plistlib.InvalidFileException,ValueError):return 0
        if selector=='addObject:':value.append(self.value(args[0]));return 0
        if selector=='countByEnumeratingWithState:objects:count:':
            state,buffer,limit=args[:3];start=self.get64(state);batch=value[start:start+limit]
            for i,v in enumerate(batch):self.put64(buffer+8*i,self.obj(v))
            self.put64(state,start+len(batch));self.put64(state+8,buffer)
            if not self.get64(state+16):p=self.raw();self.put64(p,0);self.put64(state+16,p)
            return len(batch)
        return super().message(selector,receiver,args)
    def finish_call(self,uc,address,row,result):
        continuation=address+4 if row['mnemonic']=='bl' else self.get(30)
        for i in range(1,19):uc.reg_write(getattr(arm,'UC_ARM64_REG_X'+str(i)),0xcccc00000000+i)
        uc.reg_write(arm.UC_ARM64_REG_X0,result&MASK);uc.reg_write(arm.UC_ARM64_REG_LR,continuation);uc.reg_write(arm.UC_ARM64_REG_PC,continuation)
    def code(self,uc,address,size,user):
        try:
            row=self.rows.get(address)
            if row and row['mnemonic'] in ['bl','b']:
                target=int(row.get('call_target',row['operands'].lstrip('#')),16);name=BOUNDARIES.get(target,self.external.get(target))
                if name in ['_objc_alloc','_objc_setProperty_nonatomic_copy'] or target in BOUNDARIES:
                    self.visited.add(address);a=[self.get(i) for i in range(4)]
                    if name=='_objc_alloc':result=self.message('alloc',a[0],[])
                    elif name=='_objc_setProperty_nonatomic_copy':
                        val=self.value(a[2]);val=val['mutable_string'] if isinstance(val,dict) and 'mutable_string' in val else copy.copy(val)
                        self.put64(a[0]+a[3],self.obj(val));result=0
                    else:
                        effect={'call':name}
                        if name=='bio_s_mem':result=self.bio_method
                        elif name=='bio_new':effect['method']='memory';result=0 if self.case.get('bio_failure') else self.bio
                        elif name=='bio_write':
                            length=struct.unpack('<i',struct.pack('<I',a[2]&0xffffffff))[0]
                            effect.update(bio=None if not a[0] else 'bio',length=length,data=bytes(self.uc.mem_read(a[1],max(0,length))).hex())
                            result=self.case.get('write_result',len(bytes.fromhex(self.case.get('data') or '')))
                        elif name=='d2i_CMS_bio':require(a[1]==0,'Changed CMS output argument');effect['bio']=None if not a[0] else 'bio';result=0 if self.case.get('decode_failure') else self.cms
                        else:effect['cms']='cms';result=0 if self.case.get('content_failure') else self.content_pointer
                        self.effects.append(effect)
                    self.finish_call(uc,address,row,result);return
            super().code(uc,address,size,user)
        except Exception as ex:self.error=str(ex);uc.emu_stop()
    def configure(self,case):
        self.case=case;self.effects=[];self.cert_index=0;self.bio_method=self.raw();self.bio=self.raw();self.cms=self.raw();self.content_pointer=self.raw();octets=self.raw();payload=bytes.fromhex(case.get('payload_hex',''));data=self.raw(max(256,len(payload)));self.uc.mem_write(data,payload)
        self.put64(self.content_pointer,0 if case.get('octets_failure') else octets);self.uc.mem_write(octets,struct.pack('<iiQ',len(payload),4,data))

def cases():
    basic={'Name':'Fixture profile','AppIDName':'Recovery test','TeamName':'Invented team','TeamIdentifier':['TEAMTEST00'],'Platform':['iOS'],'UUID':'00000000-0000-4000-8000-000000000000','ProvisionsAllDevices':True,'CreationDate':{'date_unix':1},'ExpirationDate':{'date_unix':1800000000},'ApplicationIdentifierPrefix':['TEAMTEST00'],'ProvisionedDevices':['invented-device'],'DeveloperCertificates':[{'data_hex':'0102'},{'data_hex':'0304'}],'Entitlements':{'application-identifier':'TEAMTEST00.example.recovery','get-task-allow':False}}
    def profile(payload,**options):return dict(op='profile',data='01020304',payload_hex=plistlib.dumps(plist_value(payload),sort_keys=False).hex(),**options)
    result=[profile(basic),profile({}),profile({'DeveloperCertificates':[]}),profile(basic,certificate_failure=0),profile(basic,certificate_failure=1)]
    for key in ['bio_failure','decode_failure','content_failure','octets_failure']:result.append(profile(basic,**{key:True}))
    for n in [-1,0,3,4,5]:result.append(profile(basic,write_result=n))
    for data in [None,'','ff']:result.append(profile(basic)|{'data':data})
    for payload in ['',b'not a plist'.hex(),plistlib.dumps({}).hex()]:result.append(dict(op='profile',data='01020304',payload_hex=payload))
    for n in [0,1,16,17,33]:result.append(profile({'DeveloperCertificates':[{'data_hex':f'{i:04x}'} for i in range(n)]}))
    for v in [False,0,1,'YES','NO']:result.append(profile({'ProvisionsAllDevices':v}))
    for serials in [[],['A'],['A','B'],[None],['X']*16+['MATCH'],['X']*33]:
        for wanted in [None,'A','a','MATCH','missing']:result.append({'op':'contains','serials':serials,'wanted':wanted})
    result += [{'op':'property','field':field,'value':value,'mutable':mutable} for field in ['name','appIDName','appID','teamName','UUID','createDate','expirationDate'] for value in [None,'','before','ö💙'] for mutable in [False,True]]
    result += [dict(c,op='setup',preexisting=True) for c in result if c['op']=='profile']
    result += [{'op':'strong_properties'},{'op':'destructor'}]
    return result

def snapshot(machine,token):
    result={}
    for field in machine.metadata[NAME]['ivars']:
        name=field['name'][1:];value=machine.call(token,name)[0]
        result[name]=bool(value) if name=='provisionsAllDevices' else plain(machine.value(value))
    return result

def evaluate(machine,case):
    machine.configure(case);token=machine.allocate(NAME)
    if case['op'] in ['profile','setup']:
        data=None if case['data'] is None else bytes.fromhex(case['data'])
        if case['op']=='setup':
            machine.call(token,'setName:',machine.obj('before'));machine.call(token,'setInfo:',machine.obj({'before':True}));machine.call(token,'setData:',machine.obj(data));returned=machine.call(token,'setup')[0]
        else:returned=machine.call(token,'initWithData:',machine.obj(data))[0]
        return {'returned':bool(returned),'state':snapshot(machine,token) if returned or case['op']=='setup' else None,'effects':machine.effects}
    if case['op']=='contains':
        machine.call(token,'setDeveloperCertificatesFormatter:',machine.obj([{'class_name':'YYYP12','certificate_serial':s} for s in case['serials']]))
        arg=0 if case['wanted'] is None else machine.obj({'class_name':'YYYP12','certificate_serial':case['wanted']})
        return {'contains':bool(machine.call(token,'containsCertificate:',arg)[0])}
    if case['op']=='property':
        value={'mutable_string':case['value']} if case['mutable'] and case['value'] is not None else case['value'];machine.call(token,setter(case['field']),machine.obj(value))
        if isinstance(value,dict):value['mutable_string']='after'
        observed=plain(machine.value(machine.call(token,case['field'])[0]));machine.call(token,setter(case['field']),0)
        return {'value':observed,'cleared':machine.call(token,case['field'])[0]==0}
    if case['op']=='strong_properties':
        result={}
        for field in ['teamIdentifier','platform','applicationIdentifierPrefix','provisionedDevices','developerCertificates','developerCertificatesFormatter','entitlements','info','data']:
            value=['before'];pointer=machine.obj(value);machine.call(token,setter(field),pointer);value.append('after');observed=machine.call(token,field)[0]
            result[field]={'same_object':observed==pointer,'value':plain(machine.value(observed))}
        for value in [0,1]:machine.call(token,'setProvisionsAllDevices:',value);result['bool_'+str(value)]=bool(machine.call(token,'provisionsAllDevices')[0])
        return result
    for field in machine.metadata[NAME]['ivars']:
        if field['name']!='_provisionsAllDevices':machine.call(token,setter(field['name'][1:]),machine.obj('owned'))
    machine.call(token,'.cxx_destruct');return snapshot(machine,token)

# Input validation and generation follow the same exact-byte replay format as
# the other native components; baseline traces are never modified.
def validate(evidence,metadata,ipa=None):
    require(evidence['native_boundaries']=={hex(k):v for k,v in BOUNDARIES.items()},'Changed profile CMS boundary')
    validate_instruction_bytes(evidence['records'])
    from verify_app_analysis import dispatch_evidence
    dispatch,_=dispatch_evidence(ROOT);baseline=json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())
    require(expanded(sparse_image(evidence,baseline),dispatch)==evidence['records'],'Changed expanded profile flow')
    validate_inputs(evidence,metadata,ipa,names=(NAME,'YYYP12'),class_slots=CLASS_SLOTS,extra_inputs={int(a,16):bytes.fromhex(v) for a,v in EXTRA.items()})

def run(ipa=None,original_ipa=None):
    metadata={c['name']:c for c in json.loads((ROOT/'recovered/objc/objc-metadata.json').read_text())['classes']}
    if ipa:
        with zipfile.ZipFile(ipa) as z:data=z.read('Payload/ESign.app/ESign')
        require(hashlib.sha256(data).hexdigest()==EXPECTED_EXECUTABLE,'Wrong original input');image=MachO(data);flows=expanded(image,Dispatch(image));bindings=image.binds;classes={n:int(metadata[n]['address'],16) for n in [NAME,'YYYP12']}
        chunks=[(s['vmaddr'],data[s['fileoff']:s['fileoff']+s['filesize']]+bytes(s['vmsize']-s['filesize'])) for s in image.segments if s['name']!='__PAGEZERO']
        external={};cs=Cs(CS_ARCH_ARM64,CS_MODE_LITTLE_ENDIAN);cs.detail=True
        for f in flows:
            for r in f['instructions']:
                if r['mnemonic'] not in ['b','bl']:continue
                a=int(r.get('call_target',r['operands'].lstrip('#')),16);off=image.fileoff(a);ins=list(cs.disasm(data[off:off+12],a))
                if len(ins)==3 and [i.mnemonic for i in ins]==['adrp','ldr','br']:
                    slot=ins[0].operands[1].imm+ins[1].operands[1].mem.disp
                    if slot in bindings:external[a]=bindings[slot]
    else:
        index=json.loads((OUT/'index.json').read_text())
        for name,digest in index['files'].items():require(Path(name).name==name and hashlib.sha256((OUT/name).read_bytes()).hexdigest()==digest,'Changed profile source/evidence: '+name)
        e=json.loads(gzip.decompress((OUT/'evidence.json.gz').read_bytes()));validate(e,metadata,original_ipa);require(json.loads((OUT/'metadata.json').read_text())==profile_metadata(metadata),'Changed original profile metadata');flows=e['records'];classes=e['classes'];bindings={int(a,16):v for a,v in e['bindings'].items()};external={int(a,16):v for a,v in e['external_targets'].items()}
        chunks=[(int(r['address'],16),bytes.fromhex(r['bytes'])) for r in e['memory']]+[(int(r['address'],16),bytes.fromhex(r['bytes'])) for f in flows for r in f['instructions']]
    machine=ProfileMachine(chunks,flows,bindings,classes,external,metadata);results=[]
    for i,c in enumerate(cases()):
        try:results.append({'input':c,'result':evaluate(machine,c)})
        except Exception as ex:raise ValueError('profile fixture '+str(i)+': '+str(ex)+'; pc='+hex(machine.uc.reg_read(arm.UC_ARM64_REG_PC))+'; effects='+repr(machine.effects)+'; literals='+repr(machine.literal_values)) from ex
    require(all(int(f['entry'],16) in machine.visited for f in flows),'Untested profile method')
    if ipa:
        OUT.mkdir(parents=True,exist_ok=True);reads=set(machine.reads)|{(int(s,16),8) for f in flows for r in f['instructions'] for s in r.get('pointer_slots',[])};memory=[]
        for a,size in sorted(reads):
            s=next(s for s in image.segments if s['vmaddr']<=a<s['vmaddr']+s['vmsize']);offset=a-s['vmaddr'];backed=max(0,min(size,s['filesize']-offset));raw=data[s['fileoff']+offset:s['fileoff']+offset+backed]+bytes(size-backed);memory.append({'address':hex(a),'bytes':raw.hex()})
        e={'records':flows,'classes':classes,'memory':memory,'bindings':{hex(a):v for a,v in bindings.items() if any(a==p for p,_ in reads)},'external_targets':{hex(a):v for a,v in external.items()},'native_boundaries':{hex(a):v for a,v in BOUNDARIES.items()}}
        (OUT/'evidence.json.gz').write_bytes(gzip.compress(json.dumps(e,separators=(',',':')).encode(),mtime=0));(OUT/'fixtures.json').write_text(json.dumps(results,indent=2)+'\n')
        (OUT/'metadata.json').write_text(json.dumps(profile_metadata(metadata),indent=2)+'\n')
        print('LITERALS',json.dumps({hex(k):v for k,v in machine.literal_values.items()}))
        validate(e,metadata,ipa)
        index={'executable_sha256':EXPECTED_EXECUTABLE,'new_classes':1,'original_methods':38,'fixtures':len(results),'original_instructions_executed':len(machine.visited),'CMS_decoder_and_certificate_parser_are_unreconstructed_boundaries':True,'full_app_built':False,'source_built_ipa':False,'iphone_runtime_verified':False,'files':{p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.iterdir() if p.is_file() and p.name!='index.json'}}
        (OUT/'index.json').write_text(json.dumps(index,indent=2)+'\n')
    else:require(results==json.loads((OUT/'fixtures.json').read_text()),'Changed original profile behavior')
    print(json.dumps({'result':'PASS','methods':38,'fixtures':len(results),'original_instructions_executed':len(machine.visited),'complete_signer':False},indent=2));machine.close()
if __name__=='__main__':
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('ipa',type=Path,nargs='?');p.add_argument('--verify',action='store_true');p.add_argument('--original-ipa',type=Path);a=p.parse_args();require(a.verify or a.ipa is not None,'Supply exact IPA or --verify');run(None if a.verify else a.ipa,a.original_ipa)
