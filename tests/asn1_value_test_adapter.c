/* Invented test dependencies. Never included in the recovered iOS archive. */
#include "../reconstruction/asn1-value/ESignASN1Value.h"
extern uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
#define B(t,a,b,c,d,e,f) ESignASN1ItemTestBoundary((t),V(a),V(b),V(c),V(d),V(e),V(f),0,0,0,0,0)
#ifndef ESIGN_ASN1_OBJECT_SOURCE
void *ESignOriginal_10061b3ec(void){return (void *)(uintptr_t)B(0x10061b3ec,0,0,0,0,0,0);}
void ESignOriginal_10061b3f8(void *p){(void)B(0x10061b3f8,p,0,0,0,0,0);}
void ESignOriginal_100612e1c(void *p,int t,void *v){(void)B(0x100612e1c,p,t,v,0,0,0);}
void *ESignOriginal_10061d254(int t){return (void *)(uintptr_t)B(0x10061d254,t,0,0,0,0,0);}
int ESignOriginal_10061cfa4(void *p,const void *v,uint64_t n){return (int)B(0x10061cfa4,p,v,n,0,0,0);}
void ESignOriginal_10061d1e0(void *p){(void)B(0x10061d1e0,p,0,0,0,0,0);}
#endif
void *ESignOriginal_1006111c4(void **p,const unsigned char **v,long n){return (void *)(uintptr_t)B(0x1006111c4,p,v,n,0,0,0);}
void *ESignOriginal_100610d4c(void **p,const unsigned char **v,long n){return (void *)(uintptr_t)B(0x100610d4c,p,v,n,0,0,0);}
void *ESignOriginal_1006125f4(void **p,const unsigned char **v,long n){return (void *)(uintptr_t)B(0x1006125f4,p,v,n,0,0,0);}
void *ESignOriginal_100602154(void){return (void *)(uintptr_t)B(0x100602154,0,0,0,0,0,0);}
int ESignOriginal_100602610(const void *p){return (int)B(0x100602610,p,0,0,0,0,0);}
void *ESignOriginal_100602560(void *p){return (void *)(uintptr_t)B(0x100602560,p,0,0,0,0,0);}
int ESignOriginal_100602494(void *p,void *v){return (int)B(0x100602494,p,v,0,0,0,0);}
int ESignASN1ValueTest_convert(void **p,const unsigned char *v,uint64_t n,int t,unsigned char *f,const ESignASN1Item *it){return (int)B(0x500000230,p,v,n,t,f,it);}
