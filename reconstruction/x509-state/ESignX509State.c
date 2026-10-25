/* Original ESign 5.0.2 ARM64 translations. Legacy OpenSSL notices adjacent.
 * Original instructions govern offsets, truncation and post-callback reloads. */
#include "ESignX509StateDependencies.h"
#include <string.h>
_Static_assert(sizeof(ESignX509Name)==40,"Original name layout");
_Static_assert(offsetof(ESignX509Name,bytes)==16 && offsetof(ESignX509Name,canonical_length)==32,"Original name offsets");
static void *at(void *p,size_t n){return (void *)((uintptr_t)p+n);}
static void *ptr(const void *p,size_t n){void *v;memcpy(&v,(const unsigned char *)p+n,8);return v;}
static void pp(void *p,size_t n,void *v){memcpy(at(p,n),&v,8);}
static int32_t r32(const void *p,size_t n){int32_t v;memcpy(&v,(const unsigned char *)p+n,4);return v;}
static void w32(void *p,size_t n,int32_t v){memcpy(at(p,n),&v,4);}
static void flags(void *p,size_t n,uint32_t bits){w32(p,n,(int32_t)((uint32_t)r32(p,n)|bits));}
static int increment(int v){return (int32_t)((uint32_t)v+1);}
const void *const ESignOriginalX509CRLMethod[5]={NULL,NULL,NULL,(const void *)ESignOriginal_100616d34,(const void *)ESignOriginal_100616f74};
const void *ESignOriginalX509CRLDefaultMethod=ESignOriginalX509CRLMethod;
int ESignOriginal_10061660c(int op,void **value,const ESignASN1Item *it,void *arg){
    (void)it;(void)arg;void *v=*value;
    if(op==1){w32(v,24,0);pp(v,32,NULL);pp(v,72,NULL);pp(v,56,(void *)UINTPTR_MAX);pp(v,176,NULL);pp(v,128,NULL);pp(v,104,NULL);pp(v,112,NULL);(void)ESignOriginal_1005b1bdc(10,v,at(v,40));}
    else if(op==5){void *p=ptr(v,32);if(p)ESignOriginal_1005b1658(p);p=ESignOriginal_10061f458(ptr(ptr(v,0),40),NULL,0);pp(v,32,p);}
    else if(op==3){ESignOriginal_1005b1c68(10,v,at(v,40));ESignOriginal_100616708(ptr(v,176));ESignOriginal_10061b38c(ptr(v,104));ESignOriginal_100627840(ptr(v,112));ESignOriginal_10062559c(ptr(v,128));ESignOriginal_100628c28(ptr(v,120));ESignOriginal_10062278c(ptr(v,136));ESignOriginal_100627f14(ptr(v,144));void *p=ptr(v,32);if(p)ESignOriginal_1005b1658(p);}
    return 1;
}
int ESignOriginal_1006156ec(int op,void **value,const ESignASN1Item *it,void *arg){(void)it;(void)arg;if(op==3)ESignOriginal_10060c954(ptr(*value,16));return 1;}
int ESignOriginal_100616890(int op,void **value,const ESignASN1Item *it,void *arg){
    (void)it;(void)arg;void *v=*value;if(v && op==5){void *s=ptr(v,40);if(s)(void)ESignOriginal_100602068(s,(void *)ESignOriginal_10061687c);}return 1;
}
int ESignOriginal_1006168c4(int op,void **value,const ESignASN1Item *it,void *arg){
    (void)it;(void)arg;void *v=*value;
    if(op==1){memset(at(v,36),0,8);memset(at(v,28),0,8);memset(at(v,44),0,8);w32(v,52,0x807f);pp(v,96,NULL);pp(v,104,(void *)ESignOriginalX509CRLDefaultMethod);pp(v,112,NULL);pp(v,56,NULL);pp(v,64,NULL);}
    else if(op==3){
        typedef int (*Method)(void *);Method cb;void *method=ptr(v,104);memcpy(&cb,at(method,16),8);if(cb && !cb(v))return 0;
        void *p=ptr(v,32);if(p)ESignOriginal_100627840(p);p=ptr(v,40);if(p)ESignOriginal_1006255a8(p);ESignOriginal_10061b32c(ptr(v,56));ESignOriginal_10061b32c(ptr(v,64));ESignOriginal_10060258c(ptr(v,96),ESignOriginal_10062278c);
    }else if(op==5){
        void *digest=ESignOriginal_10060c0b4();(void)ESignOriginal_100620884(v,digest,at(v,72),NULL);
        void *idp=ESignOriginal_100620150(v,770,NULL,NULL);pp(v,40,idp);
        if(idp){
            uint32_t f=(uint32_t)r32(v,48)|1u;w32(v,48,(int32_t)f);int count=0;
            if(r32(idp,8)>0){f|=4;w32(v,48,(int32_t)f);count=1;}
            if(r32(idp,12)>0){count++;f|=8;w32(v,48,(int32_t)f);}
            int only_attribute=r32(idp,28);if(only_attribute>0){f|=16;count++;}if(count>1)f|=2;
            if(only_attribute>0 || count>1)w32(v,48,(int32_t)f);
            if(r32(idp,24)>0){f|=32;w32(v,48,(int32_t)f);}
            void *reason=ptr(idp,16);
            if(reason){f|=64;w32(v,48,(int32_t)f);int n=r32(reason,0);uint32_t reasons=(uint32_t)r32(v,52);if(n>0){unsigned char *p=ptr(reason,8);reasons=p[0];w32(v,52,(int32_t)reasons);if(n!=1){reasons|=(uint32_t)p[1]<<8;w32(v,52,(int32_t)reasons);}}w32(v,52,(int32_t)(reasons&0x807f));}
            ESignOriginal_100625a20(ptr(idp,0),ptr(ptr(v,0),16));
        }
        pp(v,32,ESignOriginal_100620150(v,90,NULL,NULL));pp(v,56,ESignOriginal_100620150(v,88,NULL,NULL));pp(v,64,ESignOriginal_100620150(v,140,NULL,NULL));if(ptr(v,64)&&!ptr(v,56))flags(v,28,128);
        void *exts=ptr(ptr(v,0),48);
        for(int i=0;i<ESignOriginal_100602610(exts);i=increment(i)){
            void *ext=ESignOriginal_100602624(exts,i);int nid=ESignOriginal_1005b3138(ptr(ext,0));if(nid==857)flags(v,28,4096);
            if(r32(ext,8)>0 && nid!=90 && nid!=140 && nid!=770){flags(v,28,512);break;}
        }
        void *revoked=ptr(ptr(v,0),40),*issuer=NULL;
        for(int i=0;i<ESignOriginal_100602610(revoked);i=increment(i)){
            void *rev=ESignOriginal_100602624(revoked,i);int critical;void *names=ESignOriginal_10062018c(rev,771,&critical,NULL);
            if(!names && critical!=-1){flags(v,28,128);goto finish;}
            if(names){void *issuers=ptr(v,96);if(!issuers){issuers=ESignOriginal_100602154();pp(v,96,issuers);if(!issuers)return 0;}if(!ESignOriginal_100602494(issuers,names))return 0;issuer=names;}
            pp(rev,24,issuer);void *reason=ESignOriginal_10062018c(rev,141,&critical,NULL);
            if(!reason && critical!=-1){flags(v,28,128);goto finish;}
            if(reason){w32(rev,32,(int32_t)ESignOriginal_1006134a4(reason));ESignOriginal_10061b338(reason);}else w32(rev,32,-1);
            exts=ptr(rev,16);
            for(int j=0;j<ESignOriginal_100602610(exts);j=increment(j)){
                void *ext=ESignOriginal_100602624(exts,j);if(r32(ext,8)>0 && ESignOriginal_1005b3138(ptr(ext,0))!=771){flags(v,28,512);break;}
            }
        }
finish:;
        typedef int (*Method)(void *);Method cb;void *method=ptr(v,104);memcpy(&cb,at(method,8),8);if(cb && !cb(v))return 0;
    }
    return 1;
}
void *ESignOriginal_100602068(void *stack,void *compare){void *old=ptr(stack,24);if(old!=compare)w32(stack,16,0);pp(stack,24,compare);return old;}
void *ESignOriginal_100602654(void *stack,int index,void *value){if(!stack || index<0 || index>=r32(stack,0))return NULL;pp(ptr(stack,8),(size_t)index*8,value);return value;}
void ESignOriginal_10060258c(void *stack,void (*callback)(void *)){
    if(!stack)return;
    int count=r32(stack,0);void *data=ptr(stack,8);int64_t i=0;
    while(i<count){void *p=ptr(data,(size_t)i*8);if(p){callback(p);count=r32(stack,0);data=ptr(stack,8);}i++;}
    if(data)ESignOriginal_1005b1658(data);
    ESignOriginal_1005b1658(stack);
}
uint64_t ESignOriginal_1005fe88c(ESignBIOBuffer *buffer,uint64_t length){
    uint64_t old=buffer->length;
    if(old<length){
        if(buffer->capacity<length){
            if(length>=0x5ffffffd){ESignOriginal_100604c0c(7,100,65,"buffer.c",113);return 0;}
            uint64_t cap=(((uint64_t)((uint32_t)length+3)*UINT64_C(0xaaaaaaab))>>31)&UINT64_C(0x1fffffffc);
            void *p=buffer->data?ESignOriginal_1005b137c(buffer->data,cap,"buffer.c",120):ESignOriginal_1005b11cc(cap,"buffer.c",118);
            if(!p){ESignOriginal_100604c0c(7,100,65,"buffer.c",122);return 0;}
            buffer->data=p;buffer->capacity=cap;old=buffer->length;
        }
        memset(buffer->data+old,0,(size_t)(length-old));
    }
    buffer->length=length;return length;
}
int ESignOriginal_100619370(void **v,const unsigned char **in,long n,const ESignASN1Item *it,int tag,int cls,int opt,ESignASN1Context *ctx){return ESignOriginal_10061955c(v,in,n,it,tag,cls,opt,ctx,0);}
void ESignOriginal_1006165f4(void *v){ESignOriginal_100618078(v,&ESignCMSSchema_100b1ea58);}
void ESignOriginal_100615be0(void *v){ESignOriginal_100618078(v,&ESignCMSSchema_100b1e688);}
void ESignOriginal_1006165d8(void *v){ESignOriginal_100602124(v);}
void ESignOriginal_1006165dc(void *v){ESignOriginal_10060258c(v,ESignOriginal_100615be0);}
int ESignOriginal_10061687c(const void *a,const void *b){return ESignOriginal_10061d308(ptr(ptr(a,0),0),ptr(ptr(b,0),0));}
void ESignOriginal_10061b32c(void *v){ESignOriginal_100618078(v,&ESignCMSSchema_100b1eef0);}
void ESignOriginal_10061b338(void *v){ESignOriginal_100618078(v,&ESignCMSSchema_100b1ef28);}
void ESignOriginal_10061b38c(void *v){ESignOriginal_100618078(v,&ESignCMSSchema_100b1ef98);}
int ESignOriginal_100615bfc(void **value,const ESignASN1Item *it){
    (void)it;ESignX509Name *name=ESignOriginal_1005b11cc(40,"x_name.c",143);
    if(name){name->entries=ESignOriginal_100602154();if(name->entries){name->bytes=ESignOriginal_1005fe7fc();if(name->bytes){name->canonical=NULL;name->canonical_length=0;name->modified=1;*value=name;return 1;}}}
    ESignOriginal_100604c0c(13,171,65,"x_name.c",157);
    if(name){if(name->entries)ESignOriginal_100602124(name->entries);ESignOriginal_1005b1658(name);}return 0;
}
void ESignOriginal_100615cc8(void **value,const ESignASN1Item *it){
    (void)it;if(!value || !*value)return;ESignX509Name *name=*value;ESignOriginal_1005fe850(name->bytes);ESignOriginal_10060258c(name->entries,ESignOriginal_100615be0);if(name->canonical)ESignOriginal_1005b1658(name->canonical);ESignOriginal_1005b1658(name);*value=NULL;
}
int ESignOriginal_100615d1c(void **value,const unsigned char **input,long length,const ESignASN1Item *it,int tag,int cls,int opt,ESignASN1Context *ctx){
    (void)it;const unsigned char *start=*input,*p=start;void *internal=NULL;ESignX509Name *name=NULL;
    if(length>0x100000)length=0x100000;
    int ret=ESignOriginal_100619370(&internal,&p,length,&ESignCMSSchema_100b1e748,tag,cls,opt,ctx);if(ret<1)return ret;
    if(*value)ESignOriginal_100615cc8(value,NULL);
    if(!ESignOriginal_100615bfc((void **)&name,NULL))goto fail;
    if(!(int32_t)ESignOriginal_1005fe88c(name->bytes,(uintptr_t)p-(uintptr_t)start))goto fail;
    memcpy(name->bytes->data,start,(size_t)((uintptr_t)p-(uintptr_t)start));
    for(int i=0;i<ESignOriginal_100602610(internal);i=increment(i)){
        void *entries=ESignOriginal_100602624(internal,i);
        for(int j=0;j<ESignOriginal_100602610(entries);j=increment(j)){
            void *entry=ESignOriginal_100602624(entries,j);w32(entry,16,i);
            if(!ESignOriginal_100602494(name->entries,entry))goto fail;
            (void)ESignOriginal_100602654(entries,j,NULL);
        }
    }
    ret=ESignOriginal_100616178(name);if(!ret)goto fail;
    ESignOriginal_10060258c(internal,ESignOriginal_1006165d8);name->modified=0;*value=name;*input=p;return ret;
fail:
    if(name)ESignOriginal_100618078(name,&ESignCMSSchema_100b1e7b8);
    ESignOriginal_10060258c(internal,ESignOriginal_1006165dc);ESignOriginal_100604c0c(13,158,58,"x_name.c",258);return 0;
}
int ESignOriginal_100615f14(void **value,unsigned char **output,const ESignASN1Item *it,int tag,int cls){
    (void)it;(void)tag;(void)cls;ESignX509Name *name=*value;int ret;
    if(name->modified){
        void *internal=ESignOriginal_100602154(),*entries=NULL;if(!internal)goto memerr;
        int set=-1;
        for(int i=0;i<ESignOriginal_100602610(name->entries);i=increment(i)){
            void *entry=ESignOriginal_100602624(name->entries,i);
            if(r32(entry,16)!=set){entries=ESignOriginal_100602154();if(!entries)goto memerr;
                if(!ESignOriginal_100602494(internal,entries)){ESignOriginal_100602124(entries);goto memerr;}set=r32(entry,16);}
            if(!ESignOriginal_100602494(entries,entry))goto memerr;
        }
        ret=ESignOriginal_100618744(&internal,NULL,&ESignCMSSchema_100b1e748,-1,-1);
        if(!(int32_t)ESignOriginal_1005fe88c(name->bytes,(uint64_t)(int64_t)ret))goto memerr;
        unsigned char *p=name->bytes->data;(void)ESignOriginal_100618744(&internal,&p,&ESignCMSSchema_100b1e748,-1,-1);
        ESignOriginal_10060258c(internal,ESignOriginal_1006165d8);name->modified=0;
        if(ret<0)return ret;
        ret=ESignOriginal_100616178(name);if(ret<0)return ret;
        goto encoded;
memerr:
        ESignOriginal_10060258c(internal,ESignOriginal_1006165d8);ESignOriginal_100604c0c(13,203,65,"x_name.c",328);return -1;
    }
encoded:
    ret=(int32_t)name->bytes->length;if(output){memcpy(*output,name->bytes->data,(size_t)(int64_t)ret);*output=(unsigned char *)((uintptr_t)*output+(uint64_t)(int64_t)ret);}return ret;
}
int ESignOriginal_1006160dc(void *bio,void **value,int indent,const ESignASN1Item *it,const void *context){
    (void)it;uint64_t nm_flags;memcpy(&nm_flags,(const unsigned char *)context+8,8);return ESignOriginal_100614624(bio,*value,indent,nm_flags)>0?2:0;
}
