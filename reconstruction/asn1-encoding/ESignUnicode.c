/* Translations of the selected ESign ARM64 bodies; legacy notices adjacent. */
#include "ESignASN1Encoding.h"
#include <string.h>
typedef struct {int32_t length,type;unsigned char *data;uint64_t flags;} String;
int ESignOriginal_1006135a8(const unsigned char *p,int len,uint64_t *value){
    if(len<=0)return 0;
    unsigned b=p[0];int n;uint64_t v,minimum;
    if(!(b&128)){*value=b;return 1;}
    if((b&224)==192){n=2;v=b&31;minimum=128;}
    else if((b&240)==224){n=3;v=b&15;minimum=2048;}
    else if((b&248)==240){n=4;v=b&7;minimum=65536;}
    else if((b&252)==248){n=5;v=b&3;minimum=2097152;}
    else if((b&254)==252){n=6;v=b&1;minimum=67108864;}
    else return -2;
    if(len<n)return -1;
    for(int i=1;i<n;i++){if((p[i]&192)!=128)return -3;v=(v<<6)|(p[i]&63);}
    if(v<minimum)return -4;
    *value=v;return n;
}
int ESignOriginal_100613874(unsigned char *p,int len,uint64_t value){
    if(!p)len=6;
    else if(len<=0)return -1;
    int n=value<128?1:value<2048?2:value<65536?3:value<2097152?4:value<67108864?5:6;
    if(len<n)return -1;
    if(p){if(n==1)*p=(unsigned char)value;else{static const unsigned char prefix[]={0,0,192,224,240,248,252};static const unsigned char mask[]={0,0,31,15,7,3,1};p[0]=(unsigned char)(prefix[n]|((value>>(6*(n-1)))&mask[n]));for(int i=1;i<n;i++)p[i]=(unsigned char)(128|((value>>(6*(n-1-i)))&63));}}
    return n;
}
int ESignOriginal_100614364(const unsigned char *p,int len,int inform,int (*callback)(uint64_t,void *),void *arg){
    while(len){uint64_t value;int n;
        if(inform==4097){value=*p;n=1;}
        else if(inform==4098){value=((uint64_t)p[0]<<8)|p[1];n=2;}
        else if(inform==4100){value=((uint64_t)p[0]<<24)|((uint64_t)p[1]<<16)|((uint64_t)p[2]<<8)|p[3];n=4;}
        else{n=ESignOriginal_1006135a8(p,len,&value);if(n<0)return -1;}
        p+=n;len=(int32_t)((uint32_t)len-(uint32_t)n);
        if(callback){int ret=callback(value,arg);if(ret<1)return ret;}
    }
    return 1;
}
int ESignOriginal_1006144c4(uint64_t value,void *arg){
    uint64_t mask=*(uint64_t *)arg;
    int printable=value==32 || (value>='A' && value<='Z') || (value>='a' && value<='z') || (value>='0' && value<='9') || (value<=63 && ((UINT64_C(0xa400fb8000000001)>>value)&1));
    if(value>127 || !printable)mask&=~UINT64_C(2);
    if(value>127)mask&=~UINT64_C(16);
    if(value>255)mask&=~UINT64_C(4);
    if(value>>16)mask&=~UINT64_C(2048);
    if(!mask)return -1;
    *(uint64_t *)arg=mask;return 1;
}
int ESignOriginal_10061458c(uint64_t value,void *arg){unsigned char **p=arg;**p=(unsigned char)value;*p+=1;return 1;}
int ESignOriginal_1006145a8(uint64_t value,void *arg){unsigned char **p=arg;unsigned char *q=*p;q[0]=(unsigned char)(value>>8);q[1]=(unsigned char)value;*p+=2;return 1;}
int ESignOriginal_1006145cc(uint64_t value,void *arg){unsigned char **p=arg;unsigned char *q=*p;q[0]=(unsigned char)(value>>24);q[1]=(unsigned char)(value>>16);q[2]=(unsigned char)(value>>8);q[3]=(unsigned char)value;*p+=4;return 1;}
int ESignOriginal_1006145ec(uint64_t value,void *arg){unsigned char **p=arg;int n=ESignOriginal_100613874(*p,255,value);*p=(unsigned char *)((uintptr_t)*p+(uint64_t)(int64_t)n);return 1;}
static int mb_error(int reason,int line){ESignOriginal_100604c0c(13,122,reason,"a_mbstr.c",line);return -1;}
int ESignOriginal_100613d94(void **out,const unsigned char *in,int len,int inform,uint64_t mask){return ESignOriginal_100613da0(out,in,len,inform,mask,0,0);}
int ESignOriginal_100613da0(void **out,const unsigned char *in,int len,int inform,uint64_t mask,long min,long max){
    uint64_t raw_length=(uint64_t)(uint32_t)len;
    if(len==-1){raw_length=strlen((const char *)in);len=(int32_t)raw_length;}
    if(!mask)mask=0x2806;
    int nchar=len;
    switch(inform){
    case 4096:{nchar=0;const unsigned char *p=in;int remaining=len;uint64_t v;while(remaining){int n=ESignOriginal_1006135a8(p,remaining,&v);if(n<0)return mb_error(134,136);p+=n;nchar=(int32_t)((uint32_t)nchar+1);remaining=(int32_t)((uint32_t)remaining-(uint32_t)n);}break;}
    case 4097:break;
    case 4098:if(len&1)return mb_error(129,116);nchar=len>>1;break;
    case 4100:if(len&3)return mb_error(133,125);nchar=len>>2;break;
    default:return mb_error(160,146);
    }
    if((min>0 && nchar<min) || (max>0 && nchar>max)){char formatted[32];int short_string=min>0 && nchar<min;mb_error(short_string?152:151,short_string?151:158);ESignOriginal_100601b1c(formatted,sizeof(formatted),"%ld",short_string?min:max);ESignOriginal_1006057d8(2,short_string?"minsize=":"maxsize=",formatted);return -1;}
    if(ESignOriginal_100614364(in,len,inform,ESignOriginal_1006144c4,&mask)<0)return mb_error(124,166);
    int type,form=4097;
    if(mask&2)type=19;
    else if(mask&16)type=22;
    else if(mask&4)type=20;
    else if(mask&2048){type=30;form=4098;}
    else if(mask&256){type=28;form=4100;}
    else{type=12;form=4096;}
    if(!out)return type;
    String *dest=*out;int created=0;
    if(dest){if(dest->data){dest->length=0;ESignOriginal_1005b1658(dest->data);dest->data=NULL;}dest->type=type;}
    else{dest=ESignOriginal_10061d254(type);if(!dest)return mb_error(65,203);*out=dest;created=1;}
    if(form==inform){if(!ESignOriginal_10061cfa4(dest,in,raw_length))return mb_error(65,211);return type;}
    int outlen=0;int (*copy)(uint64_t,void *);
    if(form==4097){outlen=nchar;copy=ESignOriginal_10061458c;}
    else if(form==4098){outlen=(int32_t)((uint32_t)nchar<<1);copy=ESignOriginal_1006145a8;}
    else if(form==4100){outlen=(int32_t)((uint32_t)nchar<<2);copy=ESignOriginal_1006145cc;}
    else{copy=ESignOriginal_1006145ec;const unsigned char *p=in;int remaining=len;while(remaining){uint64_t v;int n;if(inform==4097){v=*p;n=1;}else if(inform==4098){v=((uint64_t)p[0]<<8)|p[1];n=2;}else if(inform==4100){v=((uint64_t)p[0]<<24)|((uint64_t)p[1]<<16)|((uint64_t)p[2]<<8)|p[3];n=4;}else{n=ESignOriginal_1006135a8(p,remaining,&v);if(n<0)break;}p+=n;remaining=(int32_t)((uint32_t)remaining-(uint32_t)n);outlen=(int32_t)((uint32_t)outlen+(uint32_t)ESignOriginal_100613874(NULL,-1,v));}}
    unsigned char *p=ESignOriginal_1005b11cc((uint32_t)outlen+1u,"a_mbstr.c",240);
    if(!p){if(created)ESignOriginal_10061d1e0(dest);return mb_error(65,243);}
    dest->length=outlen;dest->data=p;p[(int64_t)outlen]=0;(void)ESignOriginal_100614364(in,len,inform,copy,&p);return type;
}
int ESignOriginal_100614d44(unsigned char **out,const void *source){
    const String *s=source;if(!s || (uint32_t)s->type>30 || ((UINT32_C(0x2a23efff)>>s->type)&1))return -1;
    static const signed char forms[31]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,1,1,1,-1,1,1,1,-1,1,-1,4,-1,2};
    String value={0,0,NULL,0};void *slot=&value;int n=ESignOriginal_100613d94(&slot,s->data,s->length,4096|forms[s->type],8192);if(n<0)return n;*out=value.data;return value.length;
}
