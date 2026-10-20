/* Test-only unresolved original boundaries; never linked into iOS archives. */
#include "../reconstruction/asn1-input/ESignASN1Input.h"
#include <stdint.h>
uint64_t (*ESignASN1TestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
void ESignOriginal_100604e30(void){(void)ESignASN1TestBoundary(0x100604e30,0,0,0,0,0,0,0,0,0);}
unsigned long ESignOriginal_100605198(void){return (unsigned long)ESignASN1TestBoundary(0x100605198,0,0,0,0,0,0,0,0,0);}
int ESignOriginal_10061955c(void **out,const unsigned char **p,long length,const void *item,int tag,int cls,int optional,void *ctx,int depth){
    return (int)ESignASN1TestBoundary(0x10061955c,V(out),V(p),V(length),V(item),V(tag),V(cls),V(optional),V(ctx),V(depth));
}
