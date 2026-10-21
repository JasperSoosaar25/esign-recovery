/* Original ESign/OpenSSL instruction translations. Retain OPENSSL-LICENSE.txt. */
#include "ESignASN1Item.h"
#include <string.h>
_Static_assert(sizeof(ESignASN1Item)==56 && offsetof(ESignASN1Item,functions)==32,"Original ASN1_ITEM layout");
_Static_assert(sizeof(ESignASN1Template)==40 && offsetof(ESignASN1Template,item)==32,"Original ASN1_TEMPLATE layout");
_Static_assert(sizeof(ESignASN1Context)==32 && offsetof(ESignASN1Context,header_length)==24,"Original ASN1_TLC layout");
_Static_assert(sizeof(ESignASN1Aux)==40 && offsetof(ESignASN1Aux,callback)==24 && offsetof(ESignASN1Aux,encoding_offset)==32,"Original ASN1_AUX layout");
_Static_assert(sizeof(ESignASN1ADB)==56 && sizeof(ESignASN1ADBTable)==48,"Original ASN1_ADB layout");
static const uint64_t TAG_BITS[31]={0x0ULL,0x0ULL,0x0ULL,0x400ULL,0x200ULL,0x0ULL,0x0ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x2000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x10000ULL,0x0ULL,0x1ULL,0x2ULL,0x4ULL,0x8ULL,0x10ULL,0x4000ULL,0x8000ULL,0x20ULL,0x40ULL,0x80ULL,0x100ULL,0x1000ULL,0x800ULL};
static void error_at(int function,int reason,int line){ESignOriginal_100604c0c(13,function,reason,"tasn_dec.c",line);}
static int32_t read32(const void *p){int32_t v;memcpy(&v,p,4);return v;}
static void write32(void *p,int32_t v){memcpy(p,&v,4);}
static void *offset_pointer(const void *p,uint64_t offset){return (void *)((uintptr_t)p+offset);}
int ESignOriginal_10061aff4(void **value,const ESignASN1Item *item){return read32(offset_pointer(*value,(uint64_t)item->utype));}
int ESignOriginal_10061b004(void **value,int selector,const ESignASN1Item *item){
    void *field=offset_pointer(*value,(uint64_t)item->utype);int previous=read32(field);write32(field,selector);return previous;
}
void **ESignOriginal_10061b218(void **value,const ESignASN1Template *field){
    return field->flags&1024U?value:offset_pointer(*value,field->offset);
}
const ESignASN1Template *ESignOriginal_10061b230(void **value,const ESignASN1Template *field,int null_error){
    if(!(field->flags&768U))return field;
    const ESignASN1ADB *adb=field->item;void *selector;
    memcpy(&selector,offset_pointer(*value,adb->offset),sizeof(selector));
    if(!selector){if(adb->null_field)return adb->null_field;}
    else{
        int64_t number=field->flags&256U?(int64_t)ESignOriginal_1005b3138(selector):ESignOriginal_100612af0(selector);
        for(int64_t i=0;i<adb->count;i++)if(adb->table[i].value==number)return &adb->table[i].field;
        if(adb->default_field)return adb->default_field;
    }
    if(null_error)ESignOriginal_100604c0c(13,110,164,"tasn_utl.c",273);
    return NULL;
}
int ESignOriginal_10061b0f8(void **value,const unsigned char *input,uint64_t length,const ESignASN1Item *item){
    if(!value || !*value || !item->functions)return 1;
    const ESignASN1Aux *aux=item->functions;if(!(aux->flags&2))return 1;
    unsigned char *encoding=offset_pointer(*value,(uint64_t)(int64_t)aux->encoding_offset);void *old;
    memcpy(&old,encoding,8);if(old)ESignOriginal_1005b1658(old);
    void *buffer=ESignOriginal_1005b11cc((size_t)length,"tasn_utl.c",174);memcpy(encoding,&buffer,8);
    if(!buffer)return 0;
    int64_t converted=(int32_t)length;memcpy(buffer,input,(size_t)converted);memcpy(encoding+8,&converted,8);write32(encoding+16,0);return 1;
}
int ESignOriginal_10061a738(long *length,int *tag,unsigned char *xclass,unsigned char *indefinite,unsigned char *constructed,const unsigned char **input,long available,int expected_tag,int expected_class,int8_t optional,ESignASN1Context *context){
    const unsigned char *before=*input,*p=before;long size;int actual_tag,actual_class,flags;
    if(context && context->valid){
        flags=context->result;size=context->length;actual_tag=context->tag;actual_class=context->xclass;p=offset_pointer(p,(uint64_t)(int64_t)context->header_length);
    }else{
        flags=ESignOriginal_10061cb98(&p,&size,&actual_tag,&actual_class,available);
        if(context){
            context->result=flags;context->length=size;context->tag=actual_tag;context->xclass=actual_class;
            context->header_length=(int32_t)((uintptr_t)p-(uintptr_t)before);context->valid=1;
            if(!(flags&129) && (int64_t)((uint64_t)size+(uint64_t)(int64_t)context->header_length)>available){
                error_at(104,155,1200);context->valid=0;return 0;
            }
        }
    }
    if(flags&128){error_at(104,102,1208);if(context)context->valid=0;return 0;}
    if(expected_tag>=0){
        if(actual_tag!=expected_tag || actual_class!=expected_class){
            if(optional)return -1;
            if(context)context->valid=0;
            error_at(104,168,1220);return 0;
        }
        if(context)context->valid=0;
    }
    if(flags&1)size=(long)((uintptr_t)before+(uint64_t)available-(uintptr_t)p);
    if(indefinite)*indefinite=(unsigned char)(flags&1);
    if(constructed)*constructed=(unsigned char)(flags&32);
    if(length)*length=size;
    if(xclass)*xclass=(unsigned char)actual_class;
    if(tag)*tag=actual_tag;
    *input=p;return 1;
}
static int eoc(const unsigned char **p,long length){
    if(length<2 || (*p)[0] || (*p)[1])return 0;
    *p+=2;return 1;
}
int ESignOriginal_10061938c(void **value,const unsigned char **input,long length,const ESignASN1Template *field,int optional,ESignASN1Context *context,int depth){
    if(!value)return 0;
    uint32_t flags=(uint32_t)field->flags;const unsigned char *p=*input,*before;long remaining;unsigned char indefinite,constructed;
    if(!(flags&16U))return ESignOriginal_10061acc8(value,input,length,field,optional,context,depth);
    int result=ESignOriginal_10061a738(&remaining,NULL,NULL,&indefinite,&constructed,&p,length,(int32_t)field->tag,(int)(flags&192U),(int8_t)optional,context);
    if(result==-1)return -1;
    if(!result){error_at(132,58,570);return 0;}
    if(!constructed){error_at(132,120,576);return 0;}
    before=p;result=ESignOriginal_10061acc8(value,&p,remaining,field,0,context,depth);
    if(!result){error_at(132,58,582);return 0;}
    remaining=(long)((uint64_t)remaining+(uintptr_t)before-(uintptr_t)p);
    if(indefinite){if(!eoc(&p,remaining)){error_at(132,137,590);ESignOriginal_100618494(value,field);return 0;}}
    else if(remaining){error_at(132,119,599);ESignOriginal_100618494(value,field);return 0;}
    *input=p;return 1;
}
int ESignOriginal_10061955c(void **value,const unsigned char **input,long length,const void *item_pointer,int tag,int xclass,int optional,void *context_pointer,int depth){
    const ESignASN1Item *item=item_pointer;ESignASN1Context *context=context_pointer;
    const ESignASN1Aux *aux=item->functions;
    if(!value)return 0;
    ESignASN1AuxCallback callback=NULL;if(aux)memcpy(&callback,(const unsigned char *)aux+24,sizeof(callback));
    const ESignASN1Template *field=NULL,*error_field=NULL;
    const unsigned char *p=NULL,*q;unsigned char *write_pointer=NULL,old_byte=0;
    int combine=xclass&1024;xclass&=~1024;
    if(depth>=30){error_at(120,219,200);goto error;}
    depth++;
    switch(item->type){
    case 0:
        if(item->templates){
            if(tag!=-1 || optional){error_at(120,170,215);goto error;}
            return ESignOriginal_10061938c(value,input,length,item->templates,optional,context,depth);
        }
        return ESignOriginal_10061a27c(value,input,length,item,tag,xclass,optional,context);
    case 5:{
        p=*input;int actual_tag;unsigned char actual_class;
        int result=ESignOriginal_10061a738(NULL,&actual_tag,&actual_class,NULL,NULL,&p,length,-1,0,1,context);
        if(!result){error_at(120,58,231);goto error;}
        if(actual_class){if(optional)return -1;error_at(120,139,240);goto error;}
        uint64_t bits=(uint32_t)actual_tag<=30?TAG_BITS[(uint32_t)actual_tag]:0;
        if(!(bits&(uint64_t)item->utype)){if(optional)return -1;error_at(120,140,248);goto error;}
        return ESignOriginal_10061a27c(value,input,length,item,actual_tag,0,0,context);
    }
    case 4:{
        typedef int (*Function)(void **,const unsigned char **,long,const ESignASN1Item *,int,int,int,ESignASN1Context *);
        Function function;memcpy(&function,(const unsigned char *)aux+32,sizeof(function));
        return function(value,input,length,item,tag,xclass,optional,context);
    }
    case 3:{
        if(optional){
            p=*input;int expected=tag==-1?(int32_t)item->utype:tag;
            int result=ESignOriginal_10061a738(NULL,NULL,NULL,NULL,NULL,&p,length,expected,xclass,1,context);
            if(result==-1)return -1;
            if(!result){error_at(120,58,277);goto error;}
        }
        if(tag!=-1){
            write_pointer=(unsigned char *)*input;
            if(!p){error_at(120,58,300);goto error;}
            old_byte=*write_pointer;*write_pointer=(unsigned char)((*p&32U)|(unsigned char)item->utype);
        }
        typedef void *(*Function)(void **,const unsigned char **,long);
        Function function;memcpy(&function,(const unsigned char *)aux+16,sizeof(function));
        void *result=function(value,input,length);
        if(tag!=-1)*write_pointer=old_byte;
        if(result)return 1;
        error_at(120,58,315);goto error;
    }
    case 2:{
        if(callback && !callback(4,value,item,NULL))goto auxiliary_error;
        if(*value){
            int selector=ESignOriginal_10061aff4(value,item);
            if(selector>=0 && selector<item->template_count){
                field=item->templates+selector;void **slot=ESignOriginal_10061b218(value,field);
                ESignOriginal_100618494(slot,field);ESignOriginal_10061b004(value,-1,item);
            }
        }else if(!ESignOriginal_100617b3c(value,item)){error_at(120,58,331);goto error;}
        p=*input;int32_t index=0;
        for(field=item->templates;(int64_t)index<item->template_count;field++,index++){
            void **slot=ESignOriginal_10061b218(value,field);
            int result=ESignOriginal_10061938c(slot,&p,length,field,1,context,depth);
            if(result==-1)continue;
            if(result>0)break;
            error_field=field;error_at(120,58,350);goto error;
        }
        if((int64_t)index==item->template_count){
            if(optional){ESignOriginal_10061848c(value,item);return -1;}
            error_at(120,143,362);goto error;
        }
        ESignOriginal_10061b004(value,index,item);
        if(callback && !callback(5,value,item,NULL))goto auxiliary_error;
        *input=p;return 1;
    }
    case 1:case 6:{
        p=*input;long original_length=length;unsigned char indefinite,constructed,no_length;
        int expected=tag==-1?16:tag,expected_class=tag==-1?0:xclass;
        int result=ESignOriginal_10061a738(&length,NULL,NULL,&indefinite,&constructed,&p,length,expected,expected_class,(int8_t)optional,context);
        if(result==-1)return -1;
        if(!result){error_at(120,58,386);goto error;}
        if(aux && (aux->flags&4)){length=(long)((uint64_t)original_length+(uintptr_t)*input-(uintptr_t)p);no_length=1;}
        else no_length=indefinite;
        if(!constructed){error_at(120,149,398);goto error;}
        if(!*value && !ESignOriginal_100617b3c(value,item)){error_at(120,58,403);goto error;}
        if(callback && !callback(4,value,item,NULL))goto auxiliary_error;
        int32_t index;
        for(index=0,field=item->templates;(int64_t)index<item->template_count;index++,field++){
            if(field->flags&768U){
                const ESignASN1Template *selected=ESignOriginal_10061b230(value,field,0);
                if(selected)ESignOriginal_100618494(ESignOriginal_10061b218(value,selected),selected);
            }
        }
        for(index=0,field=item->templates;(int64_t)index<item->template_count;index++,field++){
            const ESignASN1Template *selected=ESignOriginal_10061b230(value,field,1);
            if(!selected)goto error;
            void **slot=ESignOriginal_10061b218(value,selected);
            if(!length)break;
            q=p;
            if(eoc(&p,length)){
                if(!indefinite){error_at(120,159,437);goto error;}
                length=(long)((uint64_t)length+(uintptr_t)q-(uintptr_t)p);indefinite=0;break;
            }
            int field_optional=(int64_t)index==item->template_count-1?0:(int)(selected->flags&1U);
            result=ESignOriginal_10061938c(slot,&p,length,selected,field_optional,context,depth);
            if(!result){error_field=selected;goto error;}
            if(result==-1){ESignOriginal_100618494(slot,selected);continue;}
            length=(long)((uint64_t)length+(uintptr_t)q-(uintptr_t)p);
        }
        if(indefinite && !eoc(&p,length)){error_at(120,137,477);goto error;}
        if(!no_length && length){error_at(120,148,482);goto error;}
        for(;(int64_t)index<item->template_count;index++,field++){
            const ESignASN1Template *selected=ESignOriginal_10061b230(value,field,1);
            if(!selected)goto error;
            if(selected->flags&1U)ESignOriginal_100618494(ESignOriginal_10061b218(value,selected),selected);
            else{error_field=selected;error_at(120,121,502);goto error;}
        }
        int32_t consumed=(int32_t)((uint32_t)(uintptr_t)p-(uint32_t)(uintptr_t)*input);
        if(!ESignOriginal_10061b0f8(value,*input,(uint32_t)consumed,item))goto auxiliary_error;
        if(callback && !callback(5,value,item,NULL))goto auxiliary_error;
        *input=p;return 1;
    }
    default:return 0;
    }
auxiliary_error:
    error_at(120,100,518);
error:
    if(!combine)ESignOriginal_10061848c(value,item);
    if(error_field)ESignOriginal_1006057d8(4,"Field=",error_field->field_name,", Type=",item->name);
    else ESignOriginal_1006057d8(2,"Type=",item->name);
    return 0;
}
