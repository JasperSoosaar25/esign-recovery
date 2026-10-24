/* Original ARM64 translations. OpenSSL notices in OPENSSL-LICENSE.txt.
 * Binary offsets/control flow are authoritative, including callback reloads. */
#include "ESignCMSSchema.h"
#include "ESignCMSSchemaDependencies.h"
#include <string.h>
_Static_assert(sizeof(void *)==8 && sizeof(long)==8,"Original LP64 layout required");
static void *at(void *p,size_t n){return (void *)((uintptr_t)p+n);}
static void *pointer(const void *p,size_t n){void *v;memcpy(&v,(const unsigned char *)p+n,8);return v;}
static int32_t integer(const void *p){int32_t v;memcpy(&v,p,4);return v;}
static uint64_t word(const void *p){uint64_t v;memcpy(&v,p,8);return v;}
static void putword(void *p,uint64_t v){memcpy(p,&v,8);}
void *ESignOriginal_10062fb30(void *bio,void **output){return ESignOriginal_100613354(&ESignCMSSchema_100b24750,bio,output);}
int ESignOriginal_10062f838(int operation,void **value,const ESignASN1Item *item,void *argument){
    (void)item;(void)argument;
    if(operation==3){void *v=*value,*p=pointer(v,64);if(p)ESignOriginal_10060c954(p);p=pointer(v,56);if(p)ESignOriginal_1006165f4(p);if(pointer(v,120))ESignOriginal_100606c78(at(v,72));}
    return 1;
}
int ESignOriginal_10062f884(int operation,void **value,const ESignASN1Item *item,void *argument){
    (void)item;(void)argument;
    if(operation==3){void *p=pointer(*value,16);if(p)ESignOriginal_10060c954(p);}return 1;
}
int ESignOriginal_10062f8ac(int operation,void **value,const ESignASN1Item *item,void *argument){
    (void)item;(void)argument;void *v=*value;
    if(operation==3){void *p=pointer(v,40);if(p)ESignOriginal_10060f3fc(p);ESignOriginal_100607474(at(v,48));}
    else if(operation==1){void *ctx=at(v,48);ESignOriginal_10060700c(ctx);ESignOriginal_10060e13c(ctx,1);putword(at(v,40),0);}
    return 1;
}
int ESignOriginal_10062f918(int operation,void **value,const ESignASN1Item *item,void *argument){
    (void)item;(void)argument;
    if(operation==2){void *v=*value;int32_t type=integer(v);
        if(type==0){void *recipient=pointer(v,8),*p=pointer(recipient,40);if(p)ESignOriginal_10060c954(p);p=pointer(recipient,32);if(p)ESignOriginal_1006165f4(p);p=pointer(recipient,48);if(p)ESignOriginal_10060f3fc(p);}
        else if(type==2 || type==3){void *recipient=pointer(v,8),*p=pointer(recipient,32);if(p){ESignOriginal_1005b2bb8(p,word(at(recipient,40)));ESignOriginal_1005b1658(pointer(recipient,32));}}
    }return 1;
}
int ESignOriginal_10062f9a8(int operation,void **value,const ESignASN1Item *item,void *argument){
    (void)item;if(!value)return 1;
    if((uint32_t)operation-10u>3u)return 1;
    void *cms=*value;
    switch(operation){
    case 10:if(ESignOriginal_10062faac((void **)at(argument,16),cms)<1)return 0;/* fall through */
    case 12:{void *bio=ESignOriginal_10062eef4(cms,pointer(argument,0));putword(at(argument,8),(uint64_t)(uintptr_t)bio);return bio!=NULL;}
    default:return ESignOriginal_10062effc(cms,pointer(argument,8))>=1;
    }
}
int ESignOriginal_1006159c4(void **value,const ESignASN1Item *item){putword(value,(uint64_t)item->size);return 1;}
void ESignOriginal_1006159d4(void **value,const ESignASN1Item *item){putword(value,(uint64_t)item->size);}
int ESignOriginal_1006159e0(void **value,const unsigned char *content,uint64_t length,int type,unsigned char *free_content,const ESignASN1Item *item){
    (void)type;(void)free_content;int32_t len=(int32_t)length,negative=0;uint64_t result=0;
    if(len){unsigned first=*content;
        if(first==0 || first==255){content++;len=(int32_t)((uint32_t)len-1);negative=first==255;}
        else negative=-1;
    }
    if(len>8){ESignOriginal_100604c0c(13,166,128,"x_long.c",183);return 0;}
    if(negative==-1)negative=len && ((int8_t)*content<0);
    for(int32_t i=0;i<len;i++)result=(result<<8)|(unsigned char)(content[i]^(negative?255:0));
    if(negative)result=~result;
    if(result==(uint64_t)item->size){ESignOriginal_100604c0c(13,166,128,"x_long.c",207);return 0;}
    putword(value,result);return 1;
}
int ESignOriginal_100615b08(void **value,unsigned char *content,int *type,const ESignASN1Item *item){
    (void)type;uint64_t v=word(value);if(v==(uint64_t)item->size)return -1;
    uint64_t sign=(v>>63)?UINT64_MAX:0,mag=v^sign;int bits=ESignOriginal_1005d160c(mag),pad=(bits&7)==0,length=(bits+7)>>3;
    if(content){if(pad)*content++=(unsigned char)sign;if(bits>0)for(int i=length-1;i>=0;i--){content[i]=(unsigned char)(mag^sign);mag>>=8;}}
    return length+pad;
}
int ESignOriginal_100615bac(void *bio,void **value,const ESignASN1Item *item,int indent,const void *context){
    (void)item;(void)indent;(void)context;return ESignOriginal_100600ed8(bio,"%ld\n",(long)word(value));
}
