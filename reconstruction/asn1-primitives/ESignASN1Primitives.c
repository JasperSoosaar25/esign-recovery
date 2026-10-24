/* Original ESign 5.0.2 bodies. Preserve adjacent OpenSSL/SSLeay notices. */
#include "ESignASN1Primitives.h"
#include <string.h>
_Static_assert(sizeof(ESignASN1Stack)==32 && offsetof(ESignASN1Stack,capacity)==20,"Original stack ABI");
_Static_assert(sizeof(ESignASN1DecodedObject)==40 && offsetof(ESignASN1DecodedObject,flags)==32,"Original object ABI");
static void *off(void *p,int64_t n){return (void *)((uintptr_t)p+(uint64_t)n);}
static uint64_t r64(const void *p){uint64_t v;memcpy(&v,p,8);return v;}
static void w32(void *p,int32_t v){memcpy(p,&v,4);}
static void w64(void *p,uint64_t v){memcpy(p,&v,8);}
static void error(int f,int reason,const char *file,int line){ESignOriginal_100604c0c(13,f,reason,file,line);}
void *ESignOriginal_100602154(void){
    ESignASN1Stack *s=ESignOriginal_1005b11cc(32,"stack.c",162);if(!s)return NULL;
    s->data=ESignOriginal_1005b11cc(32,"stack.c",164);
    if(!s->data){ESignOriginal_1005b1658(s);return NULL;}
    for(int i=0;i<4;i++)s->data[i]=NULL;
    s->compare=NULL;s->count=0;s->sorted=0;s->capacity=4;return s;
}
int ESignOriginal_100602610(const void *value){return value?((const ESignASN1Stack *)value)->count:-1;}
void *ESignOriginal_100602560(void *value){
    ESignASN1Stack *s=value;if(!s)return NULL;
    if(s->count<1)return NULL;
    int32_t n=s->count-1;
    void *v=s->data[n];s->count=n;return v;
}
int ESignOriginal_100602494(void *value,void *entry){
    ESignASN1Stack *s=value;if(!s)return 0;
    int32_t before=s->count;void **data;
    if(s->capacity<=(int32_t)((uint32_t)before+1)){
        data=ESignOriginal_1005b137c(s->data,(uint32_t)s->capacity<<4,"stack.c",187);
        if(!data)return 0;
        s->data=data;s->capacity=(int32_t)((uint32_t)s->capacity<<1);
        int32_t now=s->count;
        if(before>=0 && now>before){
            int64_t i=now;
            do{data[i+1]=data[i];}while(i-->before);
            data=s->data;data[before]=entry;
        }else{before=now;data[before]=entry;}
        s->count=(int32_t)((uint32_t)now+1);
    }else{data=s->data;data[before]=entry;s->count=(int32_t)((uint32_t)before+1);}
    s->sorted=0;return s->count;
}
void ESignOriginal_100602124(void *value){
    ESignASN1Stack *s=value;if(!s)return;
    if(s->data)ESignOriginal_1005b1658(s->data);
    ESignOriginal_1005b1658(s);
}
void *ESignOriginal_100602624(const void *value,int index){
    const ESignASN1Stack *s=value;if(!s || index<0 || s->count<=index)return NULL;
    return s->data[index];
}
void ESignOriginal_100610ffc(void *value){
    ESignASN1DecodedObject *o=value;if(!o)return;int32_t flags=o->flags;
    if(flags&4){
        if(o->short_name)ESignOriginal_1005b1658((void *)o->short_name);
        if(o->long_name)ESignOriginal_1005b1658((void *)o->long_name);
        o->short_name=NULL;o->long_name=NULL;flags=o->flags;
    }
    if(flags&8){
        if(o->data){ESignOriginal_1005b1658(o->data);flags=o->flags;}
        o->data=NULL;o->length=0;
    }
    if(flags&1)ESignOriginal_1005b1658(o);
}
void *ESignOriginal_1006111c4(void **value,const unsigned char **input,long length){
    if(length<1 || length>0x7fffffffL){error(189,length<1?152:151,"a_bitstr.c",186);return NULL;}
    void *s=value?*value:NULL;if(!s)s=ESignOriginal_10061d254(3);if(!s)return NULL;
    const unsigned char *start=*input,*p=start;unsigned bits=*p++;
    if(bits>7){error(189,220,"a_bitstr.c",186);goto fail;}
    w64(off(s,16),(r64(off(s,16))&~UINT64_C(15))|bits|8);
    long n=length-1;unsigned char *data=NULL;
    if(length>=2){
        data=ESignOriginal_1005b11cc((uint64_t)n,"a_bitstr.c",165);
        if(!data){error(189,65,"a_bitstr.c",186);goto fail;}
        memcpy(data,p,(size_t)(int64_t)(int32_t)n);data[length-2]&=(unsigned char)(255u<<bits);
        p=(const unsigned char *)((uintptr_t)start+(uint64_t)length);
    }
    w32(s,(int32_t)n);void *old=*(void **)off(s,8);if(old)ESignOriginal_1005b1658(old);
    *(void **)off(s,8)=data;w32(off(s,4),3);if(value)*value=s;*input=p;return s;
fail:
    if(!value || *value!=s)ESignOriginal_10061d1e0(s);
    return NULL;
}
void *ESignOriginal_100610d4c(void **value,const unsigned char **input,long length){
    if(!input || (uint64_t)length-1>UINT64_C(0x7ffffffe) || !*input || ((*input)[length-1]&128)){
        error(196,216,"a_object.c",298);return NULL;
    }
    const unsigned char *p=*input;
    for(long i=0;i<length;i++)if(p[i]==128 && (!i || !(p[i-1]&128))){error(196,216,"a_object.c",305);return NULL;}
    ESignASN1DecodedObject *o=value?*value:NULL;
    if(!o || !(o->flags&1)){
        o=ESignOriginal_1005b11cc(40,"a_object.c",361);
        if(!o){error(123,65,"a_object.c",363);return NULL;}
        memset(o,0,32);o->flags=1;p=*input;
    }
    unsigned char *data=o->data;o->data=NULL;
    if(!data || o->length<(int32_t)length){
        o->length=0;if(data)ESignOriginal_1005b1658(data);
        data=ESignOriginal_1005b11cc((uint64_t)length,"a_object.c",330);
        if(!data){error(196,65,"a_object.c",351);if(!value || *value!=o)ESignOriginal_100610ffc(o);return NULL;}
        o->flags|=8;
    }
    memcpy(data,p,(size_t)(int64_t)(int32_t)length);o->data=data;o->length=(int32_t)length;
    o->short_name=NULL;o->long_name=NULL;if(value)*value=o;*input=p+(int32_t)length;return o;
}
void *ESignOriginal_1006125f4(void **value,const unsigned char **input,long length){
    void *s=value?*value:NULL;if(!s)s=ESignOriginal_10061d254(2);if(!s)return NULL;
    const unsigned char *p=*input;unsigned char *data=ESignOriginal_1005b11cc((uint32_t)((uint32_t)length+1),"a_int.c",208);
    if(!data){error(194,65,"a_int.c",269);if(!value || *value!=s)ESignOriginal_10061d1e0(s);return NULL;}
    long n=length;
    if(!length)w32(off(s,4),2);
    else if(!(p[0]&128)){
        w32(off(s,4),2);int skip=p[0]==0 && length!=1;n=length-skip;
        memcpy(data,p+skip,(size_t)(int64_t)(int32_t)n);
    }else{
        w32(off(s,4),258);int skip=p[0]==255 && length!=1;n=length-skip;
        int32_t i=(int32_t)((uint32_t)n-1);const unsigned char *q=p+skip;
        while(i>=0 && !q[i]){data[i]=0;i--;}
        if(i<0){data[0]=1;data[n]=0;n++;}
        else{data[i]=(unsigned char)(0-q[i]);while(i-->0)data[i]=(unsigned char)~q[i];}
    }
    void *old=*(void **)off(s,8);if(old)ESignOriginal_1005b1658(old);
    *(void **)off(s,8)=data;w32(s,(int32_t)n);if(value)*value=s;
    *input=(const unsigned char *)((uintptr_t)p+(uint64_t)length);return s;
}
