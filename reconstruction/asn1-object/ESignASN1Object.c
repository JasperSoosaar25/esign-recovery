/* Original ESign 5.0.2 translations; preserve adjacent OpenSSL/SSLeay notices. */
#include "ESignASN1Object.h"
#include <string.h>
static void *off(void *p,int64_t n){return (void *)((uintptr_t)p+(uint64_t)n);}
static int32_t r32(const void *p){int32_t v;memcpy(&v,p,4);return v;}
static void w32(void *p,int32_t n){memcpy(p,&n,4);}
static void err(int f,int reason,int line){ESignOriginal_100604c0c(13,f,reason,"tasn_new.c",line);}
const ESignASN1Item ESignOriginalASN1AnyItem={0,-4,NULL,0,NULL,0,"ASN1_ANY"};
static ESignASN1AuxCallback aux_callback(const ESignASN1Item *it){ESignASN1AuxCallback cb=NULL;if(it->functions)memcpy(&cb,(const unsigned char *)it->functions+24,sizeof(cb));return cb;}
static void stack_free(void **p,const ESignASN1Template *field){
    void *s=*p;
    for(int32_t n=0;n<ESignOriginal_100602610(s);n=(int32_t)((uint32_t)n+1)){void *v=ESignOriginal_100602624(s,n);ESignOriginal_10061809c(&v,field->item,0);}
    ESignOriginal_100602124(s);*p=NULL;
}
void *ESignOriginal_10061d254(int type){
    void *p=ESignOriginal_1005b11cc(24,"asn1_lib.c",412);
    if(!p){ESignOriginal_100604c0c(13,130,65,"asn1_lib.c",414);return NULL;}
    w32(p,0);w32(off(p,4),type);memset(off(p,8),0,16);return p;
}
int ESignOriginal_10061cfa4(void *value,const void *content,uint64_t length){
    if((int32_t)length<0){if(!content)return 0;length=strlen(content);}
    int32_t len=(int32_t)length;void *data=*(void **)off(value,8);
    if(r32(value)<=len || !data){
        void *old=data;uint64_t n=(uint32_t)((uint32_t)len+1);
        data=old?ESignOriginal_1005b137c(old,n,"asn1_lib.c",378):ESignOriginal_1005b11cc(n,"asn1_lib.c",376);
        *(void **)off(value,8)=data;
        if(!data){ESignOriginal_100604c0c(13,186,65,"asn1_lib.c",381);*(void **)off(value,8)=old;return 0;}
    }
    w32(value,len);
    if(content){memcpy(data,content,(size_t)(int64_t)len);((unsigned char *)*(void **)off(value,8))[len]=0;}
    return 1;
}
void ESignOriginal_10061d1e0(void *value){
    if(!value)return;
    void *data=*(void **)off(value,8);
    if(data && !(*(unsigned char *)off(value,16)&16))ESignOriginal_1005b1658(data);
    ESignOriginal_1005b1658(value);
}
long ESignOriginal_100612af0(const void *value){
    if(!value)return 0;
    int type=r32((const unsigned char *)value+4),length=r32(value);
    if((type!=2 && type!=258) || length>8)return -1;
    const unsigned char *data=*(const unsigned char *const *)((const unsigned char *)value+8);
    if(!data)return 0;
    uint64_t result=0;for(int32_t n=0;n<length;n++)result=(result<<8)|data[n];
    return (long)(type==258?0-result:result);
}
int ESignOriginal_10061b018(void **value,int operation,const ESignASN1Item *item){
    const ESignASN1Aux *aux=item->functions;
    if((item->type!=1 && item->type!=6) || !aux || !(aux->flags&1))return 0;
    int32_t *field=off(*value,aux->reference_offset);
    if(!operation){w32(field,1);return 1;}
    return ESignOriginal_1005b1044(field,operation,aux->reference_lock,"tasn_utl.c",118);
}
void ESignOriginal_10061b074(void **value,const ESignASN1Item *item){
    if(!value || !*value || !item->functions)return;
    const ESignASN1Aux *aux=item->functions;if(!(aux->flags&2))return;
    void *enc=off(*value,aux->encoding_offset);memset(enc,0,16);w32(off(enc,16),1);
}
void ESignOriginal_10061b0a8(void **value,const ESignASN1Item *item){
    if(!value || !*value || !item->functions)return;
    const ESignASN1Aux *aux=item->functions;if(!(aux->flags&2))return;
    void *enc=off(*value,aux->encoding_offset);void *data=*(void **)enc;if(data)ESignOriginal_1005b1658(data);
    memset(enc,0,16);w32(off(enc,16),1);
}
void ESignOriginal_100617e98(void **value,const ESignASN1Template *field){
    const ESignASN1Item *it;
    for(;;){
        if(field->flags&774){*value=NULL;return;}
        it=field->item;
        if(it->type!=0 || !it->templates)break;
        field=it->templates;
    }
    typedef void (*Clear)(void **,const ESignASN1Item *);
    Clear cb=NULL;
    if(it->type==0 || it->type==5){
        if(it->functions){memcpy(&cb,(const unsigned char *)it->functions+32,sizeof(cb));if(cb)cb(value,it);else *value=NULL;return;}
        if(it->type==0 && (int32_t)it->utype==1){w32(value,(int32_t)it->size);return;}
    }else if(it->type==4){if(it->functions)memcpy(&cb,(const unsigned char *)it->functions+24,sizeof(cb));if(cb){cb(value,it);return;}}
    else if((uint32_t)((int32_t)it->type-1)>5)return;
    *value=NULL;
}
int ESignOriginal_100617f50(void **value,const ESignASN1Item *it){
    if(!it)return 0;
    typedef int (*New)(void **,const ESignASN1Item *);New cb=NULL;
    if(it->functions)memcpy(&cb,(const unsigned char *)it->functions+16,sizeof(cb));
    if(cb)return cb(value,it);
    int type=it->type==5?-1:(int32_t)it->utype;void *p;
    if(it->type!=5){
        if(type==-4){p=ESignOriginal_1005b11cc(16,"tasn_new.c",346);if(!p)return 0;*(void **)off(p,8)=NULL;w32(p,-1);*value=p;return 1;}
        if(type==1){w32(value,(int32_t)it->size);return 1;}
        if(type==5){*value=(void *)(uintptr_t)1;return 1;}
        if(type==6){*value=(void *)ESignOriginal_1005b2eac(0);return 1;}
    }
    p=ESignOriginal_10061d254(type);
    if(p && it->type==5)*(uint64_t *)off(p,16)|=64;
    *value=p;return p!=NULL;
}
void ESignOriginal_100618544(void **value,const ESignASN1Item *it){
    typedef void (*Free)(void **,const ESignASN1Item *);Free cb=NULL;
    if(it && it->functions)memcpy(&cb,(const unsigned char *)it->functions+24,sizeof(cb));
    if(cb){cb(value,it);return;}
    int type;
    if(!it){void *any=*value;type=r32(any);value=(void **)off(any,8);if(!*value)return;}
    else{
        if(it->type==5){if(*value){ESignOriginal_10061d1e0(*value);*value=NULL;*value=NULL;}return;}
        type=(int32_t)it->utype;
        if(type==1){w32(value,(int32_t)it->size);return;}
        if(!*value)return;
    }
    if(type==-4){ESignOriginal_100618544(value,NULL);ESignOriginal_1005b1658(*value);*value=NULL;}
    else if(type==1)w32(value,it?(int32_t)it->size:-1);
    else if(type==5)*value=NULL;
    else if(type==6){ESignOriginal_100610ffc(*value);*value=NULL;}
    else{ESignOriginal_10061d1e0(*value);*value=NULL;*value=NULL;}
}
int ESignOriginal_100617b44(void **value,const ESignASN1Item *it,int combine){
    ESignASN1AuxCallback cb=aux_callback(it);int type=it->type;
    if(type==0){
        const ESignASN1Template *field=it->templates;
        if(!field){if(ESignOriginal_100617f50(value,it))return 1;goto fail;}
        if(field->flags&1){ESignOriginal_100617e98(value,field);return 1;}
        if(field->flags&768){*value=NULL;return 1;}
        if(field->flags&6){void *s=ESignOriginal_100602154();if(s){*value=s;return 1;}err(133,65,281);goto fail;}
        if(ESignOriginal_100617b44(value,field->item,(int)(field->flags&1024)))return 1;
        goto fail;
    }
    if(type==5){if(ESignOriginal_100617f50(value,it))return 1;goto fail;}
    if(type==3){typedef void *(*New)(void);New f=NULL;if(it->functions)memcpy(&f,it->functions,sizeof(f));if(!f)return 1;*value=f();if(*value)return 1;goto fail;}
    if(type==4){typedef int (*New)(void **,const ESignASN1Item *);New f=NULL;if(it->functions)memcpy(&f,(const unsigned char *)it->functions+8,sizeof(f));if(!f || f(value,it))return 1;goto fail;}
    if(type!=1 && type!=2 && type!=6)return 1;
    if(cb){int ret=cb(0,value,it,NULL);if(!ret)goto callback_fail;if(ret==2)return 1;}
    if(!combine){
        *value=ESignOriginal_1005b11cc((uint32_t)it->size,"tasn_new.c",type==2?155:180);
        if(!*value)goto fail;
        memset(*value,0,(size_t)it->size);
    }
    if(type==2)ESignOriginal_10061b004(value,-1,it);
    else{
        if(!combine){ESignOriginal_10061b018(value,0,it);ESignOriginal_10061b074(value,it);}
        const ESignASN1Template *field=it->templates;
        for(int64_t n=0;n<it->template_count;n++,field++){
            void **slot=ESignOriginal_10061b218(value,field);
            if(field->flags&1)ESignOriginal_100617e98(slot,field);
            else if(field->flags&768)*slot=NULL;
            else if(field->flags&6){void *s=ESignOriginal_100602154();if(!s){err(133,65,281);goto cleanup;}*slot=s;}
            else if(!ESignOriginal_100617b44(slot,field->item,(int)(field->flags&1024)))goto cleanup;
        }
    }
    if(!cb || cb(1,value,it,NULL))return 1;
    ESignOriginal_10061809c(value,it,combine);
callback_fail:err(121,100,215);return 0;
cleanup:ESignOriginal_10061809c(value,it,combine);
fail:err(121,65,205);return 0;
}
void ESignOriginal_10061809c(void **value,const ESignASN1Item *it,int combine){
    if(!value)return;
    int type=it->type;if(type && !*value)return;
    ESignASN1AuxCallback cb=aux_callback(it);
    if(type==0){
        const ESignASN1Template *field=it->templates;
        if(!field){ESignOriginal_100618544(value,it);return;}
        if(field->flags&6)stack_free(value,field);
        else ESignOriginal_10061809c(value,field->item,(int)(field->flags&1024));
        return;
    }
    if(type==5){ESignOriginal_100618544(value,it);return;}
    if(type==3){typedef void (*Free)(void *);Free f=NULL;if(it->functions)memcpy(&f,(const unsigned char *)it->functions+8,sizeof(f));if(f)f(*value);return;}
    if(type==4){typedef void (*Free)(void **,const ESignASN1Item *);Free f=NULL;if(it->functions)memcpy(&f,(const unsigned char *)it->functions+16,sizeof(f));if(f)f(value,it);return;}
    if(type!=1 && type!=2 && type!=6)return;
    if(type!=2 && ESignOriginal_10061b018(value,-1,it)>0)return;
    if(cb && cb(2,value,it,NULL)==2)return;
    if(type==2){
        int selector=ESignOriginal_10061aff4(value,it);
        if(selector>=0 && it->template_count>selector){
            const ESignASN1Template *f=it->templates+selector;void **slot=ESignOriginal_10061b218(value,f);
            if(f->flags&6)stack_free(slot,f);else ESignOriginal_10061809c(slot,f->item,(int)(f->flags&1024));
        }
    }else{
        ESignOriginal_10061b0a8(value,it);
        const ESignASN1Template *f=off((void *)it->templates,(int64_t)((uint64_t)it->template_count*40));
        for(int64_t n=0;n<it->template_count;n++){
            --f;const ESignASN1Template *actual=ESignOriginal_10061b230(value,f,0);if(!actual)continue;
            void **slot=ESignOriginal_10061b218(value,actual);
            if(actual->flags&6)stack_free(slot,actual);else ESignOriginal_10061809c(slot,actual->item,(int)(actual->flags&1024));
        }
    }
    if(cb)cb(3,value,it,NULL);
    if(!combine){ESignOriginal_1005b1658(*value);*value=NULL;}
}
int ESignOriginal_100617b3c(void **value,const ESignASN1Item *item){return ESignOriginal_100617b44(value,item,0);}
void ESignOriginal_10061848c(void **value,const ESignASN1Item *item){ESignOriginal_10061809c(value,item,0);}
void ESignOriginal_100618494(void **value,const ESignASN1Template *field){if(field->flags&6)stack_free(value,field);else ESignOriginal_10061809c(value,field->item,(int)(field->flags&1024));}
void *ESignOriginal_100617b08(const ESignASN1Item *item){void *v=NULL;return ESignOriginal_100617b44(&v,item,0)>0?v:NULL;}
void ESignOriginal_100618078(void *value,const ESignASN1Item *item){ESignOriginal_10061809c(&value,item,0);}
void *ESignOriginal_10061b3ec(void){return ESignOriginal_100617b08(&ESignOriginalASN1AnyItem);}
void ESignOriginal_10061b3f8(void *value){ESignOriginal_100618078(value,&ESignOriginalASN1AnyItem);}
void ESignOriginal_100612e1c(void *value,int type,void *content){
    if(*(void **)off(value,8))ESignOriginal_100618544(&value,NULL);
    w32(value,type);
    if(type==1)w32(off(value,8),content?255:0);else *(void **)off(value,8)=content;
}
