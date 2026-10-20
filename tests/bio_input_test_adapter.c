/* Test boundaries only; excluded from all iOS runtime archives. */
#include "../reconstruction/bio-input/ESignBIOInput.h"
#include <stdint.h>
uint64_t (*ESignBIOTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define B(t,a,b,c,d,e,f) ESignBIOTestBoundary((t),(uint64_t)(uintptr_t)(a),(uint64_t)(uintptr_t)(b),(uint64_t)(uintptr_t)(c),(uint64_t)(uintptr_t)(d),(uint64_t)(uintptr_t)(e),(uint64_t)(uintptr_t)(f))
void *ESignOriginal_1005b11cc(size_t n,const char *f,int l){return (void *)(uintptr_t)B(0x1005b11cc,n,f,l,0,0,0);}
void *ESignOriginal_1005b14c4(void *p,size_t o,size_t n,const char *f,int l){return (void *)(uintptr_t)B(0x1005b14c4,p,o,n,f,l,0);}
void ESignOriginal_1005b1658(void *p){(void)B(0x1005b1658,p,0,0,0,0,0);}
void ESignOriginal_1005b2bb8(void *p,size_t n){(void)B(0x1005b2bb8,p,n,0,0,0,0);}
int ESignOriginal_1005b1bdc(int n,void *p,void *e){return (int)B(0x1005b1bdc,n,p,e,0,0,0);}
void ESignOriginal_1005b1c68(int n,void *p,void *e){(void)B(0x1005b1c68,n,p,e,0,0,0);}
int ESignOriginal_1005b1044(int32_t *p,int a,int k,const char *f,int l){return (int)B(0x1005b1044,p,a,k,f,l,0);}
void ESignOriginal_100604c0c(int a,int b,int c,const char *f,int l){(void)B(0x100604c0c,a,b,c,f,l,0);}
int ESignBIOTest_create(void *p){return (int)B(0x500000100,p,0,0,0,0,0);}
int ESignBIOTest_destroy(void *p){return (int)B(0x500000110,p,0,0,0,0,0);}
int ESignBIOTest_write(void *p,const void *b,int n){return (int)B(0x500000120,p,b,n,0,0,0);}
int ESignBIOTest_read(void *p,void *b,int n){return (int)B(0x500000130,p,b,n,0,0,0);}
long ESignBIOTest_ctrl(void *p,int c,long n,void *b){return (long)B(0x500000140,p,c,n,b,0,0);}
long ESignBIOTest_callback(void *p,int c,const char *b,int n,long a,long r){return (long)B(0x500000150,p,c,b,n,a,r);}
int ESignBIOTest_create2(void *p){return (int)B(0x500000160,p,0,0,0,0,0);}
