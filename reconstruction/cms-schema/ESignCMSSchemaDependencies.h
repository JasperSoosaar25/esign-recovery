#pragma once
#include "ESignCMSSchema.h"
/* Original dependencies still external to this library. No replacement engine. */
void ESignOriginal_10060c954(void *key);
void ESignOriginal_1006165f4(void *certificate);
int ESignOriginal_100606c78(void *context);
void ESignOriginal_10060700c(void *context);
void ESignOriginal_10060e13c(void *context,int flags);
void ESignOriginal_10060f3fc(void *context);
int ESignOriginal_100607474(void *context);
void ESignOriginal_1005b2bb8(void *data,uint64_t length);
void ESignOriginal_1005b1658(void *data);
int ESignOriginal_10062faac(void **boundary,void *cms);
void *ESignOriginal_10062eef4(void *cms,void *bio);
int ESignOriginal_10062effc(void *cms,void *bio);
int ESignOriginal_1005d160c(uint64_t word);
int ESignOriginal_100600ed8(void *bio,const char *format,...);
/* Referenced X509 callbacks and name codecs: source not yet reconstructed. */
int ESignOriginal_10061660c(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_1006156ec(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_1006168c4(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_100616890(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_100615bfc(void **,const ESignASN1Item *);
void ESignOriginal_100615cc8(void **,const ESignASN1Item *);
int ESignOriginal_100615d1c(void **,const unsigned char **,long,const ESignASN1Item *,int,int,int,ESignASN1Context *);
int ESignOriginal_100615f14(void **,unsigned char **,const ESignASN1Item *,int,int);
int ESignOriginal_1006160dc(void *,void **,int,const ESignASN1Item *,const void *);
