/* Controlled test boundaries only; excluded from iOS archives. */
#include "../reconstruction/asn1-item/ESignASN1Item.h"
#include <stdarg.h>
uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
#define B(t,a,b,c,d,e,f,g,h) ESignASN1ItemTestBoundary((t),V(a),V(b),V(c),V(d),V(e),V(f),V(g),V(h),0,0,0)
int ESignOriginal_100617b3c(void **p,const ESignASN1Item *it){return (int)B(0x100617b3c,p,it,0,0,0,0,0,0);}
void ESignOriginal_10061848c(void **p,const ESignASN1Item *it){(void)B(0x10061848c,p,it,0,0,0,0,0,0);}
void ESignOriginal_100618494(void **p,const ESignASN1Template *tt){(void)B(0x100618494,p,tt,0,0,0,0,0,0);}
int ESignOriginal_1005b3138(const void *p){return (int)B(0x1005b3138,p,0,0,0,0,0,0,0);}
long ESignOriginal_100612af0(const void *p){return (long)B(0x100612af0,p,0,0,0,0,0,0,0);}
#ifndef ESIGN_ASN1_VALUE_SOURCE
int ESignOriginal_10061a27c(void **p,const unsigned char **in,long n,const ESignASN1Item *it,int tag,int cls,int opt,ESignASN1Context *ctx){return (int)B(0x10061a27c,p,in,n,it,tag,cls,opt,ctx);}
int ESignOriginal_10061acc8(void **p,const unsigned char **in,long n,const ESignASN1Template *tt,int opt,ESignASN1Context *ctx,int depth){return (int)B(0x10061acc8,p,in,n,tt,opt,ctx,depth,0);}
#endif
void ESignOriginal_100604e30(void){(void)B(0x100604e30,0,0,0,0,0,0,0,0);}
unsigned long ESignOriginal_100605198(void){return (unsigned long)B(0x100605198,0,0,0,0,0,0,0,0);}
void ESignOriginal_1006057d8(int count,...){
    va_list list;va_start(list,count);const char *p[4]={0,0,0,0};
    for(int i=0;i<count && i<4;i++)p[i]=va_arg(list,const char *);
    va_end(list);(void)B(0x1006057d8,count,p[0],p[1],p[2],p[3],0,0,0);
}
int ESignASN1ItemTest_aux(int op,void **p,const ESignASN1Item *it,void *a){return (int)B(0x500000200,op,p,it,a,0,0,0,0);}
void *ESignASN1ItemTest_compat(void **p,const unsigned char **in,long n){return (void *)(uintptr_t)B(0x500000210,p,in,n,0,0,0,0,0);}
int ESignASN1ItemTest_extern(void **p,const unsigned char **in,long n,const ESignASN1Item *it,int tag,int cls,int opt,ESignASN1Context *ctx){return (int)B(0x500000220,p,in,n,it,tag,cls,opt,ctx);}
