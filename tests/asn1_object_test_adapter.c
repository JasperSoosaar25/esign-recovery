/* Test boundaries only, excluded from iOS output. */
#include "../reconstruction/asn1-object/ESignASN1Object.h"
extern uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
#define B(t,a,b,c,d) ESignASN1ItemTestBoundary((t),V(a),V(b),V(c),V(d),0,0,0,0,0,0,0)
void *ESignOriginal_1005b137c(void *p,uint64_t n,const char *f,int l){return (void *)(uintptr_t)B(0x1005b137c,p,n,f,l);}
const void *ESignOriginal_1005b2eac(int n){return (void *)(uintptr_t)B(0x1005b2eac,n,0,0,0);}
#ifndef ESIGN_ASN1_PRIMITIVES_SOURCE
void ESignOriginal_100610ffc(void *p){(void)B(0x100610ffc,p,0,0,0);}
void ESignOriginal_100602124(void *p){(void)B(0x100602124,p,0,0,0);}
void *ESignOriginal_100602624(const void *p,int n){return (void *)(uintptr_t)B(0x100602624,p,n,0,0);}
#endif
int ESignASN1ObjectTest_aux(int n,void **p,const ESignASN1Item *it,void *arg){return (int)B(0x500000300,n,p,it,arg);}
void *ESignASN1ObjectTest_compat_new(void){return (void *)(uintptr_t)B(0x500000310,0,0,0,0);}
void ESignASN1ObjectTest_compat_free(void *p){(void)B(0x500000320,p,0,0,0);}
int ESignASN1ObjectTest_extern_new(void **p,const ESignASN1Item *it){return (int)B(0x500000330,p,it,0,0);}
void ESignASN1ObjectTest_extern_free(void **p,const ESignASN1Item *it){(void)B(0x500000340,p,it,0,0);}
void ESignASN1ObjectTest_extern_clear(void **p,const ESignASN1Item *it){(void)B(0x500000350,p,it,0,0);}
int ESignASN1ObjectTest_primitive_new(void **p,const ESignASN1Item *it){return (int)B(0x500000360,p,it,0,0);}
void ESignASN1ObjectTest_primitive_free(void **p,const ESignASN1Item *it){(void)B(0x500000370,p,it,0,0);}
void ESignASN1ObjectTest_primitive_clear(void **p,const ESignASN1Item *it){(void)B(0x500000380,p,it,0,0);}
