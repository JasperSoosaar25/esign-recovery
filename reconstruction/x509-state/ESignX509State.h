#pragma once
#include "../cms-schema/ESignCMSSchema.h"
#include "../asn1-primitives/ESignASN1Primitives.h"
/* Accessed original layouts, not host OpenSSL declarations. */
typedef struct ESignX509Name {void *entries;int32_t modified;ESignBIOBuffer *bytes;void *canonical;int32_t canonical_length;} ESignX509Name;
extern const ESignCMSSchemaNode ESignOriginalX509SchemaNodes[];
extern const size_t ESignOriginalX509SchemaNodeCount;
extern const ESignASN1Item ESignCMSSchema_100b1e748,ESignCMSSchema_100b1e688,ESignCMSSchema_100b1e7b8,ESignCMSSchema_100b1ea58,ESignCMSSchema_100b1eef0,ESignCMSSchema_100b1ef28,ESignCMSSchema_100b1ef98;
extern const void *const ESignOriginalX509CRLMethod[5];
extern const void *ESignOriginalX509CRLDefaultMethod;
int ESignOriginal_10061660c(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_1006156ec(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_1006168c4(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_100616890(int,void **,const ESignASN1Item *,void *);
int ESignOriginal_100615bfc(void **,const ESignASN1Item *);
void ESignOriginal_100615cc8(void **,const ESignASN1Item *);
int ESignOriginal_100615d1c(void **,const unsigned char **,long,const ESignASN1Item *,int,int,int,ESignASN1Context *);
int ESignOriginal_100615f14(void **,unsigned char **,const ESignASN1Item *,int,int);
int ESignOriginal_1006160dc(void *,void **,int,const ESignASN1Item *,const void *);
void ESignOriginal_1006165f4(void *);
void ESignOriginal_100615be0(void *);
void ESignOriginal_1006165d8(void *);
void ESignOriginal_1006165dc(void *);
int ESignOriginal_10061687c(const void *,const void *);
int ESignOriginal_100619370(void **,const unsigned char **,long,const ESignASN1Item *,int,int,int,ESignASN1Context *);
void *ESignOriginal_100602068(void *,void *);
void *ESignOriginal_100602654(void *,int,void *);
void ESignOriginal_10060258c(void *,void (*)(void *));
uint64_t ESignOriginal_1005fe88c(ESignBIOBuffer *,uint64_t);
void ESignOriginal_10061b32c(void *);
void ESignOriginal_10061b338(void *);
void ESignOriginal_10061b38c(void *);
