/* Selected original name canonicalizer and ownership helpers, not a redesign. */
#include "ESignASN1Encoding.h"
#include <string.h>
typedef struct {int32_t length,type;unsigned char *data;uint64_t flags;} String;
typedef struct {void *oid;String *value;int32_t set;} Entry;
typedef struct {void *entries;int32_t modified;void *buffer;unsigned char *canonical;int32_t length;} Name;
static const uint64_t ESignOriginalASN1TagBits[31]={0x0ULL,0x0ULL,0x0ULL,0x400ULL,0x200ULL,0x0ULL,0x0ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x2000ULL,0x1000ULL,0x1000ULL,0x1000ULL,0x10000ULL,0x0ULL,0x1ULL,0x2ULL,0x4ULL,0x8ULL,0x10ULL,0x4000ULL,0x8000ULL,0x20ULL,0x40ULL,0x80ULL,0x100ULL,0x1000ULL,0x800ULL};
extern const ESignASN1Item ESignCMSSchema_100b1e6e8;
uint64_t ESignOriginal_1006192e4(int tag){return (uint32_t)tag<=30?ESignOriginalASN1TagBits[(uint32_t)tag]:0;}
void *ESignOriginal_100610fa0(void){
    ESignASN1DecodedObject *p=ESignOriginal_1005b11cc(40,"a_object.c",361);
    if(!p){ESignOriginal_100604c0c(13,123,65,"a_object.c",363);return NULL;}
    memset(p,0,32);p->flags=1;return p;
}
void *ESignOriginal_1005b3dc4(void *value){
    ESignASN1DecodedObject *src=value;if(!src || !(src->flags&1))return src;
    ESignASN1DecodedObject *out=ESignOriginal_100610fa0();
    if(!out){ESignOriginal_100604c0c(8,101,13,"obj_lib.c",80);return NULL;}
    unsigned char *data=ESignOriginal_1005b11cc((uint32_t)src->length,"obj_lib.c",83);
    if(!data){ESignOriginal_100604c0c(8,101,65,"obj_lib.c",115);ESignOriginal_1005b1658(out);return NULL;}
    if(src->data)memcpy(data,src->data,(size_t)(int64_t)src->length);
    out->data=data;memcpy(&out->nid,&src->nid,8);out->short_name=NULL;out->long_name=NULL;char *long_name=NULL;
    if(src->long_name){int n=(int32_t)((uint32_t)strlen(src->long_name)+1);long_name=ESignOriginal_1005b11cc((uint32_t)n,"obj_lib.c",95);if(!long_name)goto fail;memcpy(long_name,src->long_name,(size_t)(int64_t)n);out->long_name=long_name;}
    if(src->short_name){int n=(int32_t)((uint32_t)strlen(src->short_name)+1);char *short_name=ESignOriginal_1005b11cc((uint32_t)n,"obj_lib.c",104);if(!short_name)goto fail;memcpy(short_name,src->short_name,(size_t)(int64_t)n);out->short_name=short_name;}
    out->flags=src->flags|13;return out;
fail:
    ESignOriginal_100604c0c(8,101,65,"obj_lib.c",115);if(long_name)ESignOriginal_1005b1658(long_name);ESignOriginal_1005b1658(data);ESignOriginal_1005b1658(out);return NULL;
}
int ESignOriginal_10061cf50(void *destination,const void *source){
    String *out=destination;const String *in=source;if(!in)return 0;out->type=in->type;if(!ESignOriginal_10061cfa4(out,in->data,(uint32_t)in->length))return 0;out->flags=in->flags;return 1;
}
static int ascii_space(unsigned c){
#ifdef __APPLE__
    return !(c&128) && (_DefaultRuneLocale.__runetype[c]&0x4000);
#else
    return !(c&128) && (_DefaultRuneLocale.runetype[c]&0x4000);
#endif
}
int ESignOriginal_100616178(void *value){
    Name *name=value;if(name->canonical){ESignOriginal_1005b1658(name->canonical);name->canonical=NULL;}
    if(!ESignOriginal_100602610(name->entries)){name->length=0;return 1;}
    void *outer=ESignOriginal_100602154();if(!outer)return 0;
    void *group=NULL;int set=-1;Entry *pending=NULL;int success=0;
    for(int i=0;i<ESignOriginal_100602610(name->entries);i=(int32_t)((uint32_t)i+1)){
        Entry *old=ESignOriginal_100602624(name->entries,i);
        if(old->set!=set){group=ESignOriginal_100602154();if(!group)goto done;if(!ESignOriginal_100602494(outer,group)){ESignOriginal_100602124(group);goto done;}set=old->set;}
        pending=ESignOriginal_100617b08(&ESignCMSSchema_100b1e688);if(!pending)goto done;pending->oid=ESignOriginal_1005b3dc4(old->oid);
        String *out=pending->value,*in=old->value;
        if(ESignOriginal_1006192e4(in->type)&0x2956){out->type=12;out->length=ESignOriginal_100614d44(&out->data,in);if(out->length==-1)goto entry_fail;
            unsigned char *start=out->data,*end=start;if(out->length>0){unsigned char *p=start;int n=out->length;while(n>0 && ascii_space(*p)){p++;n--;}while(n>0 && ascii_space(p[n-1]))n--;
                int i=0;while(i<n){unsigned c=p[i];if(c&128){*end++=(unsigned char)c;i++;}else if(ascii_space(c)){*end++=32;do{i++;}while(i<n && ascii_space(p[i]));}else{*end++=(unsigned char)__tolower((int)c);i++;}}
            }out->length=(int32_t)((uintptr_t)end-(uintptr_t)out->data);
        }else if(!ESignOriginal_10061cf50(out,in))goto entry_fail;
        if(!ESignOriginal_100602494(group,pending))goto entry_fail;
        pending=NULL;
    }
    uint64_t length=0;
    for(int i=0;i<ESignOriginal_100602610(outer);i=(int32_t)((uint32_t)i+1)){void *rdn=ESignOriginal_100602624(outer,i);int n=ESignOriginal_100618744(&rdn,NULL,&ESignCMSSchema_100b1e6e8,-1,-1);if(n<0){length=(uint32_t)n;goto allocate;}length=(uint32_t)length+(uint32_t)n;length=(uint32_t)length;}
allocate:
    name->length=(int32_t)length;unsigned char *p=ESignOriginal_1005b11cc(length,"x_name.c",399);if(!p)goto done;name->canonical=p;
    for(int i=0;i<ESignOriginal_100602610(outer);i=(int32_t)((uint32_t)i+1)){void *rdn=ESignOriginal_100602624(outer,i);if(ESignOriginal_100618744(&rdn,&p,&ESignCMSSchema_100b1e6e8,-1,-1)<0)break;}
    success=1;goto done;
entry_fail:
    ESignOriginal_100618078(pending,&ESignCMSSchema_100b1e688);
done:
    ESignOriginal_10060258c(outer,ESignOriginal_1006165dc);return success;
}
