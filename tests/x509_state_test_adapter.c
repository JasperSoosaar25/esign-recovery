/* Controlled unresolved boundaries only; excluded from the iOS archive. */
#include "../reconstruction/x509-state/ESignX509StateDependencies.h"
extern uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
#define B(t,a,b,c,d,e) ESignASN1ItemTestBoundary((t),V(a),V(b),V(c),V(d),V(e),0,0,0,0,0,0)
#define ONE(a) void ESignOriginal_##a(void *p){(void)B(0x##a,p,0,0,0,0);}
ONE(100616708) ONE(100627840) ONE(10062559c) ONE(100628c28) ONE(10062278c) ONE(100627f14) ONE(1006255a8)
void *ESignOriginal_10061f458(void *p,void *b,int n){return (void *)(uintptr_t)B(0x10061f458,p,b,n,0,0);}
void *ESignOriginal_10060c0b4(void){return (void *)(uintptr_t)B(0x10060c0b4,0,0,0,0,0);}
int ESignOriginal_100620884(void *v,void *md,void *out,void *len){return (int)B(0x100620884,v,md,out,len,0);}
void *ESignOriginal_100620150(void *v,int nid,void *crit,void *idx){return (void *)(uintptr_t)B(0x100620150,v,nid,crit,idx,0);}
void *ESignOriginal_10062018c(void *v,int nid,int *crit,void *idx){return (void *)(uintptr_t)B(0x10062018c,v,nid,crit,idx,0);}
void ESignOriginal_100625a20(void *v,void *issuer){(void)B(0x100625a20,v,issuer,0,0,0);}
long ESignOriginal_1006134a4(void *p){return (long)B(0x1006134a4,p,0,0,0,0);}
int ESignOriginal_10061d308(void *a,void *b){return (int)B(0x10061d308,a,b,0,0,0);}

#ifndef ESIGN_ASN1_ENCODING_SOURCE
int ESignOriginal_100616178(void *v){return (int)B(0x100616178,v,0,0,0,0);}
int ESignOriginal_100618744(void **v,unsigned char **out,const ESignASN1Item *it,int tag,int cls){return (int)B(0x100618744,v,out,it,tag,cls);}

#endif
int ESignOriginal_100614624(void *bio,void *v,int indent,uint64_t flags){return (int)B(0x100614624,bio,v,indent,flags,0);}
int ESignOriginal_100616d34(void *v,void **ret,void *serial,void *issuer){return (int)B(0x100616d34,v,ret,serial,issuer,0);}
int ESignOriginal_100616f74(void *v,void *key){return (int)B(0x100616f74,v,key,0,0,0);}
int ESignX509Test_init(void *v){return (int)B(0x500000400,v,0,0,0,0);}
int ESignX509Test_free(void *v){return (int)B(0x500000410,v,0,0,0,0);}
void ESignX509Test_pop(void *v){(void)B(0x500000420,v,0,0,0,0);}
