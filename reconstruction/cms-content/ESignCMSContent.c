#include "ESignCMSContent.h"
#include <string.h>
_Static_assert(sizeof(void *)==8,"Original LP64 pointer layout required");
_Static_assert(offsetof(ESignCMSASN1String,data)==8,"Original ASN1_STRING data offset");
// memcpy expresses original untyped pointer-prefix loads without host OpenSSL types.
static void *PointerAt(const void *object,size_t offset){
    void *value;memcpy(&value,(const unsigned char *)object+offset,sizeof(value));return value;
}
ESignCMSASN1String **ESignOriginal_10062edd8(void *cms){
    int nid=ESignOriginal_1005b3138(PointerAt(cms,0));
    if(nid==21)return (ESignCMSASN1String **)((unsigned char *)cms+8);
    void *content=PointerAt(cms,8),*nested;
    switch(nid){
        case 22:case 25:nested=PointerAt(content,16);return (ESignCMSASN1String **)((unsigned char *)nested+8);
        case 23:nested=PointerAt(content,24);return (ESignCMSASN1String **)((unsigned char *)nested+16);
        case 26:nested=PointerAt(content,8);return (ESignCMSASN1String **)((unsigned char *)nested+16);
        case 205:nested=PointerAt(content,40);return (ESignCMSASN1String **)((unsigned char *)nested+8);
        case 786:nested=PointerAt(content,24);return (ESignCMSASN1String **)((unsigned char *)nested+8);
        default:{
            int32_t type;memcpy(&type,content,sizeof(type));
            if(type==4)return (ESignCMSASN1String **)((unsigned char *)content+8);
            ESignOriginal_100604c0c(46,129,152,"cms_lib.c",234);return NULL;
        }
    }
}
