/* Original ESign 5.0.2 ARM64 body translations. OpenSSL notices in adjacent file.
 * Reference-family names aid navigation; instruction evidence is authoritative. */
#include "ESignASN1Value.h"
#include <string.h>
static int32_t read32(const void *p){int32_t v;memcpy(&v,p,4);return v;}
static void write32(void *p,int32_t v){memcpy(p,&v,4);}
static void *offset(void *p,size_t n){return (void *)((uintptr_t)p+n);}
static long delta(const unsigned char *a,const unsigned char *b){return (long)((uintptr_t)a-(uintptr_t)b);}
static void error(int function,int reason,int line){ESignOriginal_100604c0c(13,function,reason,"tasn_dec.c",line);}
/* The original collector and find-end have this header check inlined. */
static int header(const unsigned char **p,long *length,unsigned char *inf,unsigned char *constructed,long available){
    int tag,xclass;
    int result=ESignOriginal_10061cb98(p,length,&tag,&xclass,available);
    if(result&128){error(104,102,1208);return 0;}
    *inf=(unsigned char)(result&1);*constructed=(unsigned char)(result&32);
    return 1;
}
int ESignOriginal_100619f5c(void **value,const unsigned char *content,uint64_t length,int type,unsigned char *free_content,const ESignASN1Item *item){
    typedef int (*Convert)(void **,const unsigned char *,uint64_t,int,unsigned char *,const ESignASN1Item *);
    Convert callback=NULL;
    if(item->functions)memcpy(&callback,(const unsigned char *)item->functions+40,sizeof(callback));
    if(callback)return callback(value,content,length,type,free_content,item);
    void *any=NULL;void **outer=NULL;int32_t len=(int32_t)length;
    if(item->utype==-4){
        any=*value;
        if(!any){any=ESignOriginal_10061b3ec();if(!any){ESignOriginal_10061b3f8(NULL);return 0;}*value=any;}
        if(read32(any)!=type)ESignOriginal_100612e1c(any,type,NULL);
        outer=value;value=(void **)offset(any,8);
    }
    switch(type){
    case 6:
        if(!ESignOriginal_100610d4c(value,&content,(long)len))goto fail;
        break;
    case 5:
        if(len){error(204,144,904);goto fail;}
        *value=(void *)(uintptr_t)1;
        if(any)*(void **)offset(any,8)=NULL;
        break;
    case 1:
        if(len!=1){error(204,106,912);goto fail;}
        write32(value,*content);break;
    case 3:
        if(!ESignOriginal_1006111c4(value,&content,(long)len))goto fail;
        break;
    case 2:case 10:
        if(!ESignOriginal_1006125f4(value,&content,(long)len))goto fail;
        write32(offset(*value,4),type|(read32(offset(*value,4))&256));break;
    default:{
        if(type==30 && (len&1)){error(204,214,954);goto fail;}
        if(type==28 && (len&3)){error(204,215,959);goto fail;}
        void *string=*value;
        if(string)write32(offset(string,4),type);
        else{
            string=ESignOriginal_10061d254(type);
            if(!string){error(204,65,966);goto fail;}
            *value=string;
        }
        if(*free_content){
            void *old=*(void **)offset(string,8);
            if(old)ESignOriginal_1005b1658(old);
            *(const unsigned char **)offset(string,8)=content;write32(string,len);*free_content=0;
        }else if(!ESignOriginal_10061cfa4(string,content,length)){
            error(204,65,983);ESignOriginal_10061d1e0(string);*value=NULL;goto fail;
        }
        break;
    }}
    return 1;
fail:
    ESignOriginal_10061b3f8(any);if(outer)*outer=NULL;return 0;
}
int ESignOriginal_10061a964(ESignBIOBuffer *buffer,const unsigned char **input,long length,int indefinite,int depth){
    const unsigned char *p=*input;
    if(!buffer && !(indefinite&1)){*input=(const unsigned char *)((uintptr_t)p+(uint64_t)length);return 1;}
    while(length>0){
        const unsigned char *q=p;
        if(length>=2 && !p[0] && !p[1]){
            p+=2;
            if(!(indefinite&1)){error(106,159,1098);return 0;}
            *input=p;return 1;
        }
        long plen;unsigned char inf,cst;
        if(!header(&p,&plen,&inf,&cst,length)){error(106,58,1107);return 0;}
        if(inf)plen=length-delta(p,q);
        if(cst){
            if(depth>4){error(106,197,1114);return 0;}
            if(!ESignOriginal_10061a964(buffer,&p,plen,(int)(int8_t)inf,(int32_t)((uint32_t)depth+1)))return 0;
        }else if(plen){
            if(buffer){
                long old=(long)(int32_t)buffer->length;
                if(!ESignOriginal_1005fe990(buffer,(uint64_t)old+(uint64_t)plen)){error(140,65,1137);return 0;}
                memcpy(buffer->data+old,p,(size_t)plen);
            }
            p=(const unsigned char *)((uintptr_t)p+(uint64_t)plen);
        }
        length-=delta(p,q);
    }
    if(indefinite&1){error(106,137,1124);return 0;}
    *input=p;return 1;
}
int ESignOriginal_10061a27c(void **value,const unsigned char **input,long length,const ESignASN1Item *item,int tag,int xclass,int optional,ESignASN1Context *context){
    unsigned char free_content=0;ESignBIOBuffer buffer={0,NULL,0};
    if(!value){error(108,125,747);return 0;}
    int type;
    if(item->type==5){type=tag;tag=-1;}else type=(int32_t)item->utype;
    const unsigned char *p;
    if(type==-4){
        if(tag>=0){error(108,127,761);return 0;}
        if(optional){error(108,126,766);return 0;}
        unsigned char cls;p=*input;
        if(!ESignOriginal_10061a738(NULL,&type,&cls,NULL,NULL,&p,length,-1,0,0,context)){error(108,58,773);return 0;}
        if(cls)type=-3;
    }
    if(tag==-1){tag=type;xclass=0;}
    p=*input;long plen;unsigned char inf,cst;
    int ret=ESignOriginal_10061a738(&plen,NULL,NULL,&inf,&cst,&p,length,tag,xclass,(int8_t)optional,context);
    if(!ret){error(108,58,788);return 0;}if(ret==-1)return -1;
    const unsigned char *content;uint64_t len;
    if(type==16 || type==17 || type==-3){
        if(type==-3){if(context)context->valid=0;}
        else if(!cst){error(108,156,806);return 0;}
        content=*input;
        if(inf){
            long left=plen;uint32_t expected=1;
            while(left>0){
                const unsigned char *q=p;
                if(left>=2 && !p[0] && !p[1]){p+=2;if(!--expected)break;left-=2;continue;}
                long n;unsigned char nested,c;
                if(!header(&p,&n,&nested,&c,left)){error(190,58,1041);goto fail;}
                if(nested){n=left-delta(p,q);expected++;}else p=(const unsigned char *)((uintptr_t)p+(uint64_t)n);
                left-=delta(p,q);
            }
            if(expected){error(190,137,1051);goto fail;}
            len=(uint64_t)delta(p,content);
        }else{len=(uint64_t)delta(p,content)+(uint64_t)plen;p=(const unsigned char *)((uintptr_t)p+(uint64_t)plen);}
    }else if(cst){
        if((uint32_t)type<=10 && (0x466u&(1u<<type))){error(108,218,824);return 0;}
        free_content=1;
        if(!ESignOriginal_10061a964(&buffer,&p,plen,(int)(int8_t)inf,0))goto fail;
        len=buffer.length;
        if(!ESignOriginal_1005fe990(&buffer,len+1)){error(108,65,842);goto fail;}
        buffer.data[len]=0;content=buffer.data;
    }else{content=p;len=(uint64_t)plen;p=(const unsigned char *)((uintptr_t)p+(uint64_t)plen);}
    ret=ESignOriginal_100619f5c(value,content,len,type,&free_content,item);
    if(ret){*input=p;ret=1;}
    if(free_content && buffer.data)ESignOriginal_1005b1658(buffer.data);
    return ret;
fail:
    if(free_content && buffer.data)ESignOriginal_1005b1658(buffer.data);
    return 0;
}
int ESignOriginal_10061acc8(void **value,const unsigned char **input,long length,const ESignASN1Template *field,int optional,ESignASN1Context *context,int depth){
    if(!value)return 0;
    uint32_t flags=(uint32_t)field->flags;int cls=(int)(flags&192);const unsigned char *p=*input;
    if(flags&6){
        int tag=(flags&8)?(int32_t)field->tag:((flags&2)?17:16);unsigned char inf;
        if(!(flags&8))cls=0;
        int ret=ESignOriginal_10061a738(&length,NULL,NULL,&inf,NULL,&p,length,tag,cls,(int8_t)optional,context);
        if(!ret){error(131,58,649);return 0;}if(ret==-1)return -1;
        void *stack=*value;
        if(!stack)*value=ESignOriginal_100602154();
        else while(ESignOriginal_100602610(stack)>0){void *v=ESignOriginal_100602560(stack);ESignOriginal_10061848c(&v,field->item);}
        if(!*value){error(131,65,668);goto fail;}
        while(length>0){
            const unsigned char *q=p;
            if(length>=2 && !p[0] && !p[1]){
                p+=2;if(!inf){error(131,159,680);goto fail;}
                length-=delta(p,q);inf=0;break;
            }
            void *v=NULL;
            if(!ESignOriginal_10061955c(&v,&p,length,field->item,-1,0,0,context,depth)){error(131,58,691);goto fail;}
            length-=delta(p,q);
            if(!ESignOriginal_100602494(*value,v)){ESignOriginal_10061848c(&v,field->item);error(131,65,697);goto fail;}
        }
        if(inf){error(131,137,702);goto fail;}
    }else{
        int ret;
        if(flags&8)ret=ESignOriginal_10061955c(value,&p,length,field->item,(int32_t)field->tag,cls,optional,context,depth);
        else ret=ESignOriginal_10061955c(value,&p,length,field->item,-1,(int)(flags&1024),optional,context,depth);
        if(!ret){error(131,58,(flags&8)?710:720);goto fail;}if(ret==-1)return -1;
    }
    *input=p;return 1;
fail:
    ESignOriginal_100618494(value,field);return 0;
}
