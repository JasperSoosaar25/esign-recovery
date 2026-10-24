/* Controlled unresolved boundaries only, excluded from every iOS archive. */
#include "../reconstruction/cms-schema/ESignCMSSchemaDependencies.h"
#include <stdarg.h>
extern uint64_t (*ESignASN1ItemTestBoundary)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
#define V(v) ((uint64_t)(uintptr_t)(v))
#define B(t,a,b,c,d,e,f,g,h) ESignASN1ItemTestBoundary((t),V(a),V(b),V(c),V(d),V(e),V(f),V(g),V(h),0,0,0)
#define ONE_VOID(a) void ESignOriginal_##a(void *p){(void)B(0x##a,p,0,0,0,0,0,0,0);}
ONE_VOID(10060c954) ONE_VOID(1006165f4) ONE_VOID(10060700c) ONE_VOID(10060f3fc)
int ESignOriginal_100606c78(void *p){return (int)B(0x100606c78,p,0,0,0,0,0,0,0);}
int ESignOriginal_100607474(void *p){return (int)B(0x100607474,p,0,0,0,0,0,0,0);}
void ESignOriginal_10060e13c(void *p,int n){(void)B(0x10060e13c,p,n,0,0,0,0,0,0);}
int ESignOriginal_10062faac(void **p,void *cms){return (int)B(0x10062faac,p,cms,0,0,0,0,0,0);}
void *ESignOriginal_10062eef4(void *cms,void *bio){return (void *)(uintptr_t)B(0x10062eef4,cms,bio,0,0,0,0,0,0);}
int ESignOriginal_10062effc(void *cms,void *bio){return (int)B(0x10062effc,cms,bio,0,0,0,0,0,0);}
int ESignOriginal_1005d160c(uint64_t n){return (int)B(0x1005d160c,n,0,0,0,0,0,0,0);}
int ESignOriginal_100600ed8(void *bio,const char *format,...){va_list v;va_start(v,format);long n=va_arg(v,long);va_end(v);return (int)B(0x100600ed8,bio,format,n,0,0,0,0,0);}
#define AUX(a) int ESignOriginal_##a(int op,void **v,const ESignASN1Item *it,void *arg){return (int)B(0x##a,op,v,it,arg,0,0,0,0);}
AUX(10061660c) AUX(1006156ec) AUX(1006168c4) AUX(100616890)
int ESignOriginal_100615bfc(void **p,const ESignASN1Item *it){return (int)B(0x100615bfc,p,it,0,0,0,0,0,0);}
void ESignOriginal_100615cc8(void **p,const ESignASN1Item *it){(void)B(0x100615cc8,p,it,0,0,0,0,0,0);}
int ESignOriginal_100615d1c(void **p,const unsigned char **in,long n,const ESignASN1Item *it,int tag,int cls,int opt,ESignASN1Context *ctx){return (int)B(0x100615d1c,p,in,n,it,tag,cls,opt,ctx);}
int ESignOriginal_100615f14(void **p,unsigned char **out,const ESignASN1Item *it,int tag,int cls){return (int)B(0x100615f14,p,out,it,tag,cls,0,0,0);}
int ESignOriginal_1006160dc(void *bio,void **p,int indent,const ESignASN1Item *it,const void *ctx){return (int)B(0x1006160dc,bio,p,indent,it,ctx,0,0,0);}
