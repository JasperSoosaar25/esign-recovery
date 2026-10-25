/* Original ARM64 translations. Legacy OpenSSL notices in adjacent license. */
#include "ESignASN1Encoding.h"
#include <string.h>
#include <limits.h>
void qsort(void *,size_t,size_t,int (*)(const void *,const void *));
static int32_t r32(const void *p){int32_t v;memcpy(&v,p,4);return v;}
static void w32(void *p,int32_t v){memcpy(p,&v,4);}
static void *at(void *p,int64_t n){return (void *)((uintptr_t)p+(uint64_t)n);}
static void *ptr(const void *p,size_t n){void *v;memcpy(&v,(const unsigned char *)p+n,8);return v;}
static uint64_t word(const void *p,size_t n){uint64_t v;memcpy(&v,(const unsigned char *)p+n,8);return v;}
static int add(int a,int b){return (int32_t)((uint32_t)a+(uint32_t)b);}
int ESignOriginal_10061ce24(int constructed,int length,int tag){
    if(length<0)return -1;
    uint32_t n=1,t=(uint32_t)tag;
    if(tag>=31){do{t>>=7;n++;}while(t);}
    if(constructed==2)n+=3;
    else{n++;if(length>=128){uint32_t v=(uint32_t)length;do{v>>=8;n++;}while(v);}}
    return (int32_t)n < INT_MAX-length ? (int32_t)(n+(uint32_t)length) : -1;
}
void ESignOriginal_10061cd1c(unsigned char **output,int constructed,int length,int tag,int cls){
    unsigned char *p=*output;unsigned first=((unsigned)cls&192)|(constructed?32:0);
    if(tag<=30)*p++=(unsigned char)(first|((uint32_t)tag&31));
    else{*p++=(unsigned char)(first|31);uint32_t t=(uint32_t)tag;int n=0;do{t>>=7;n++;}while(t);for(int j=n-1;j>=0;j--){p[j]=(unsigned char)(((uint32_t)tag&127)|(j==n-1?0:128));tag>>=7;}p+=n;}
    if(constructed==2)*p++=128;
    else if(length<128)*p++=(unsigned char)length;
    else{uint32_t v=(uint32_t)length;int n=0;do{v>>=8;n++;}while(v);*p++=(unsigned char)(128|n);for(int j=n-1;j>=0;j--){p[j]=(unsigned char)length;length>>=8;}p+=n;}
    *output=p;
}
int ESignOriginal_10061ce10(unsigned char **output){(*output)[0]=0;(*output)[1]=0;*output+=2;return 2;}
int ESignOriginal_10061b184(int *length,unsigned char **output,void **value,const ESignASN1Item *item){
    if(!value || !*value || !item->functions)return 0;
    const ESignASN1Aux *aux=item->functions;if(!(aux->flags&2))return 0;
    void *enc=at(*value,aux->encoding_offset);if(r32(at(enc,16)))return 0;
    if(output){uint64_t n=word(enc,8);memcpy(*output,ptr(enc,0),(size_t)n);*output=(unsigned char *)((uintptr_t)*output+word(enc,8));}
    if(length)*length=(int32_t)word(enc,8);
    return 1;
}
int ESignOriginal_100618744(void **value,unsigned char **output,const ESignASN1Item *item,int tag,int cls){
    int type=item->type;if(type && !*value)return 0;
    const void *functions=item->functions;ESignASN1AuxCallback callback=NULL;if(functions)memcpy(&callback,(const unsigned char *)functions+24,8);
    switch(type){
    case 0:if(item->templates)return ESignOriginal_100618af0(value,output,item->templates,tag,cls);return ESignOriginal_100618fc8(value,output,item,tag,cls);
    case 5:return ESignOriginal_100618fc8(value,output,item,-1,cls);
    case 2:{if(callback && !callback(6,value,item,NULL))return 0;int which=ESignOriginal_10061aff4(value,item);if(which>=0 && which<item->template_count){const ESignASN1Template *field=item->templates+which;return ESignOriginal_100618af0(ESignOriginal_10061b218(value,field),output,field,-1,cls);}if(callback)(void)callback(7,value,item,NULL);return 0;}
    case 3:{typedef int (*Old)(void *,unsigned char **);Old f;memcpy(&f,(const unsigned char *)functions+24,8);unsigned char *start=output?*output:NULL;int n=f(*value,output);if(output && tag!=-1)*start=(unsigned char)(cls|tag|(*start&32));return n;}
    case 4:{typedef int (*External)(void **,unsigned char **,const ESignASN1Item *,int,int);External f;memcpy(&f,(const unsigned char *)functions+40,8);return f(value,output,item,tag,cls);}
    case 1:case 6:{int mode=type==6 && (cls&2048)?2:1,content=0,n=ESignOriginal_10061b184(&content,output,value,item);if(n<0)return 0;if(n)return content;
        if(tag==-1){tag=16;cls&=~192;}if(callback && !callback(6,value,item,NULL))return 0;
        const ESignASN1Template *field=item->templates;
        for(int64_t i=0;i<item->template_count;i++,field++){
            const ESignASN1Template *f=ESignOriginal_10061b230(value,field,1);if(!f)return 0;
            n=ESignOriginal_100618af0(ESignOriginal_10061b218(value,f),NULL,f,-1,cls);if(n==-1 || n>(int32_t)((uint32_t)INT_MAX-(uint32_t)content))return -1;content=add(content,n);
        }
        int total=ESignOriginal_10061ce24(mode,content,tag);if(!output || total==-1)return total;ESignOriginal_10061cd1c(output,mode,content,tag,cls);
        field=item->templates;for(int64_t i=0;i<item->template_count;i++,field++){const ESignASN1Template *f=ESignOriginal_10061b230(value,field,1);if(!f)return 0;(void)ESignOriginal_100618af0(ESignOriginal_10061b218(value,f),output,f,-1,cls);}
        if(mode==2)ESignOriginal_10061ce10(output);
        if(callback && !callback(7,value,item,NULL))return 0;
        return total;
    }
    default:return 0;
    }
}
typedef struct {unsigned char *data;int32_t length;void *value;} DER;
_Static_assert(sizeof(DER)==24,"Original DER sorting record");
int ESignOriginal_1006192a8(const void *a,const void *b){const DER *x=a,*y=b;int n=x->length<y->length?x->length:y->length;int c=memcmp(x->data,y->data,(size_t)(int64_t)n);return c?c:(int32_t)((uint32_t)x->length-(uint32_t)y->length);}
int ESignOriginal_100618af0(void **value,unsigned char **output,const ESignASN1Template *field,int tag,int cls){
    uint32_t flags=(uint32_t)field->flags;int tclass;
    if(flags&24){if(tag!=-1)return -1;tag=(int32_t)field->tag;tclass=flags&192;}else tclass=tag!=-1?cls&192:0;
    cls&=~192;int indefinite=cls&flags&2048,mode=indefinite?2:1;
    if(flags&6){
        void *stack=*value;if(!stack)return 0;int sort=(flags&2)?((flags&4)?2:1):0;
        int inner_tag=tag!=-1 && !(flags&16)?tag:(sort?17:16),inner_class=tag!=-1 && !(flags&16)?tclass:0,content=0;
        for(int i=0;i<ESignOriginal_100602610(stack);i=add(i,1)){void *v=ESignOriginal_100602624(stack,i);int n=ESignOriginal_100618744(&v,NULL,field->item,-1,cls);if(n==-1 || content>(int32_t)((uint32_t)INT_MAX-(uint32_t)n))return -1;content=add(content,n);}
        int inner=ESignOriginal_10061ce24(mode,content,inner_tag);if(inner==-1)return -1;
        int total=(flags&16)?ESignOriginal_10061ce24(mode,inner,tag):inner;if(!output || total==-1)return total;
        if(flags&16)ESignOriginal_10061cd1c(output,mode,inner,tag,tclass);
        ESignOriginal_10061cd1c(output,mode,content,inner_tag,inner_class);
        const ESignASN1Item *item=field->item;DER *list=NULL;unsigned char *tmp=NULL;
        if(sort && ESignOriginal_100602610(stack)>1){
            uint32_t bytes=(uint32_t)ESignOriginal_100602610(stack)*24;list=ESignOriginal_1005b11cc(bytes,"tasn_enc.c",442);if(!list)goto set_done;
            tmp=ESignOriginal_1005b11cc((uint64_t)(int64_t)content,"tasn_enc.c",445);if(!tmp){ESignOriginal_1005b1658(list);goto set_done;}
            unsigned char *p=tmp;for(int i=0;i<ESignOriginal_100602610(stack);i=add(i,1)){void *v=ESignOriginal_100602624(stack,i);list[i].data=p;list[i].length=ESignOriginal_100618744(&v,&p,item,-1,cls);list[i].value=v;}
            qsort(list,(size_t)(int64_t)ESignOriginal_100602610(stack),24,ESignOriginal_1006192a8);
            p=*output;for(int i=0;i<ESignOriginal_100602610(stack);i=add(i,1)){memcpy(p,list[i].data,(size_t)(int64_t)list[i].length);p=(unsigned char *)((uintptr_t)p+(uint64_t)(int64_t)list[i].length);}*output=p;
            if(sort==2)for(int i=0;i<ESignOriginal_100602610(stack);i=add(i,1))(void)ESignOriginal_100602654(stack,i,list[i].value);
            ESignOriginal_1005b1658(list);ESignOriginal_1005b1658(tmp);
        }else for(int i=0;i<ESignOriginal_100602610(stack);i=add(i,1)){void *v=ESignOriginal_100602624(stack,i);(void)ESignOriginal_100618744(&v,output,item,-1,cls);}
set_done:
        if(indefinite){ESignOriginal_10061ce10(output);if(flags&16)ESignOriginal_10061ce10(output);}return total;
    }
    if(flags&16){int n=ESignOriginal_100618744(value,NULL,field->item,-1,cls);if(!n)return 0;int total=ESignOriginal_10061ce24(mode,n,tag);if(output && total!=-1){ESignOriginal_10061cd1c(output,mode,n,tag,tclass);(void)ESignOriginal_100618744(value,output,field->item,-1,cls);if(indefinite)ESignOriginal_10061ce10(output);}return total;}
    return ESignOriginal_100618744(value,output,field->item,tag,cls|tclass);
}
int ESignOriginal_100618fc8(void **value,unsigned char **output,const ESignASN1Item *item,int tag,int cls){
    int type=(int32_t)item->utype;int n=ESignOriginal_1006190ec(value,NULL,&type,item);int use_tag=type!=16 && type!=17 && type!=-3;if(n==-1)return 0;
    int mode=n==-2?2:0;if(n==-2)n=0;if(tag==-1)tag=type;
    if(output){if(use_tag)ESignOriginal_10061cd1c(output,mode,n,tag,cls);(void)ESignOriginal_1006190ec(value,*output,&type,item);if(mode)ESignOriginal_10061ce10(output);else *output=(unsigned char *)((uintptr_t)*output+(uint64_t)(int64_t)n);}
    return use_tag?ESignOriginal_10061ce24(mode,n,tag):n;
}
int ESignOriginal_1006190ec(void **value,unsigned char *output,int *type,const ESignASN1Item *item){
    if(item->functions){typedef int (*Convert)(void **,unsigned char *,int *,const ESignASN1Item *);Convert f;memcpy(&f,(const unsigned char *)item->functions+48,8);if(f)return f(value,output,type,item);}
    if((item->type!=0 || item->utype!=1) && !*value)return -1;
    if(item->type==5)*type=r32(at(*value,4));else if(item->utype==-4){*type=r32(*value);value=(void **)at(*value,8);}
    const unsigned char *data=NULL;int n=0;unsigned char boolean;
    switch(*type){
    case 2:case 10:{unsigned char *p=output;return ESignOriginal_100612454(*value,output?&p:NULL);}
    case 3:{unsigned char *p=output;return ESignOriginal_10061107c(*value,output?&p:NULL);}
    case 1:{int v=r32(value);if(v==-1)return -1;if(item->utype!=-4 && ((v && item->size>0)||(!v && !item->size)))return -1;boolean=(unsigned char)v;data=&boolean;n=1;break;}
    case 5:break;
    case 6:data=ptr(*value,24);n=r32(at(*value,20));if(!data || !n)return -1;break;
    default:{void *s=*value;if(item->size==2048 && (word(s,16)&16)){if(output){memcpy(at(s,8),&output,8);w32(s,0);}return -2;}data=ptr(s,8);n=r32(s);break;}
    }
    if(output && n)memcpy(output,data,(size_t)(int64_t)n);
    return n;
}
int ESignOriginal_10061107c(void *value,unsigned char **output){
    if(!value)return 0;
    int n=r32(value),unused=0;
    if(n>0){uint64_t flags=word(value,16);if(flags&8)unused=flags&7;else{unsigned char *p=ptr(value,8);while(n>0 && !p[n-1])n--;unsigned char last=p[(int64_t)n-1];unused=0;if(!(last&1)){if(last&2)unused=1;else if(last&4)unused=2;else if(last&8)unused=3;else if(last&16)unused=4;else if(last&32)unused=5;else if(last&64)unused=6;else if(last&128)unused=7;}}}
    int total=add(n,1);if(output){unsigned char *p=*output;*p++=(unsigned char)unused;if(n>0){memcpy(p,ptr(value,8),(size_t)n);p+=n;p[-1]&=(unsigned char)(255u<<unused);}*output=p;}return total;
}
int ESignOriginal_100612454(void *value,unsigned char **output){
    if(!value)return 0;
    int n=r32(value),negative=r32(at(value,4))&256,pad=0;unsigned char padding=0,*data=ptr(value,8);
    if(n){unsigned char first=data[0];if(first==0 && n==1)negative=0;
        if(!negative)pad=(first&128)!=0;
        else if(first>128){pad=1;padding=255;}
        else if(first==128 && n>=2){for(int i=1;i<n;i++)if(data[i]){pad=1;padding=255;break;}}
    }
    int total=n?add(n,pad):1;
    if(output){unsigned char *p=*output;if(pad){*p++=padding;n=r32(value);}if(!n)*p=0;else if(!negative)memcpy(p,ptr(value,8),(uint32_t)n);else{data=ptr(value,8);int i=n-1;while(i>0 && !data[i]){p[i]=0;i--;}p[i]=(unsigned char)(0u-data[i]);for(i--;i>=0;i--)p[i]=(unsigned char)~data[i];}*output=(unsigned char *)((uintptr_t)*output+(uint64_t)(int64_t)total);}
    return total;
}
