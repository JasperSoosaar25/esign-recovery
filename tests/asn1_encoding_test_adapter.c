/* Test-only platform/error boundaries. Never part of the recovered archive. */
#include "../reconstruction/asn1-encoding/ESignASN1Encoding.h"
#include <stdarg.h>
extern uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(x) ((uint64_t)(uintptr_t)(x))
#define B(t,a,b,c,d,e) ESignASN1ItemTestBoundary(t,V(a),V(b),V(c),V(d),V(e),0,0,0,0,0,0)
#ifdef __APPLE__
ESignDarwinRuneLocale _DefaultRuneLocale={.__runetype={[9]=0x4000,[10]=0x4000,[11]=0x4000,[12]=0x4000,[13]=0x4000,[32]=0x4000}};
#else
const ESignDarwinRuneLocale _DefaultRuneLocale={.runetype={[9]=0x4000,[10]=0x4000,[11]=0x4000,[12]=0x4000,[13]=0x4000,[32]=0x4000}};
#endif
int ESignEncodingTest_tolower(int c){return (int)B(0x1009308b4,c,0,0,0,0);}
void ESignEncodingTest_qsort(void *p,size_t n,size_t size,int (*cmp)(const void *,const void *)){(void)B(0x10093179c,p,n,size,cmp,0);}
int ESignEncodingTest_memcmp(const void *a,const void *b,size_t n){return (int)B(0x10093122c,a,b,n,0,0);}
int ESignOriginal_100601b1c(char *p,size_t n,const char *format,...){va_list ap;va_start(ap,format);long value=va_arg(ap,long);va_end(ap);return (int)B(0x100601b1c,p,n,format,value,0);}
int ESignEncodingTest_aux(int op,void **v,const ESignASN1Item *it,void *arg){return (int)B(0x500000500,op,v,it,arg,0);}
int ESignEncodingTest_compat(void *v,unsigned char **out){return (int)B(0x500000510,v,out,0,0,0);}
int ESignEncodingTest_extern(void **v,unsigned char **out,const ESignASN1Item *it,int tag,int cls){return (int)B(0x500000520,v,out,it,tag,cls);}
int ESignEncodingTest_convert(void **v,unsigned char *out,int *type,const ESignASN1Item *it){return (int)B(0x500000530,v,out,type,it,0);}
int ESignEncodingTest_visit(uint64_t value,void *arg){return (int)B(0x500000540,value,arg,0,0,0);}
