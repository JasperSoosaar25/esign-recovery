#pragma once
#include "../x509-state/ESignX509State.h"
/* Original navigation symbols. These functions use the recovered LP64 layouts. */
int ESignOriginal_100618744(void **,unsigned char **,const ESignASN1Item *,int,int);
int ESignOriginal_100618af0(void **,unsigned char **,const ESignASN1Template *,int,int);
int ESignOriginal_100618fc8(void **,unsigned char **,const ESignASN1Item *,int,int);
int ESignOriginal_1006190ec(void **,unsigned char *,int *,const ESignASN1Item *);
int ESignOriginal_1006192a8(const void *,const void *);
int ESignOriginal_10061b184(int *,unsigned char **,void **,const ESignASN1Item *);
void ESignOriginal_10061cd1c(unsigned char **,int,int,int,int);
int ESignOriginal_10061ce10(unsigned char **);
int ESignOriginal_10061ce24(int,int,int);
int ESignOriginal_10061107c(void *,unsigned char **);
int ESignOriginal_100612454(void *,unsigned char **);
uint64_t ESignOriginal_1006192e4(int);
void *ESignOriginal_100610fa0(void);
void *ESignOriginal_1005b3dc4(void *);
int ESignOriginal_10061cf50(void *,const void *);
int ESignOriginal_100614d44(unsigned char **,const void *);
int ESignOriginal_100613d94(void **,const unsigned char *,int,int,uint64_t);
int ESignOriginal_100613da0(void **,const unsigned char *,int,int,uint64_t,long,long);
int ESignOriginal_100614364(const unsigned char *,int,int,int (*)(uint64_t,void *),void *);
int ESignOriginal_1006144c4(uint64_t,void *);
int ESignOriginal_10061458c(uint64_t,void *);
int ESignOriginal_1006145a8(uint64_t,void *);
int ESignOriginal_1006145cc(uint64_t,void *);
int ESignOriginal_1006145ec(uint64_t,void *);
int ESignOriginal_1006135a8(const unsigned char *,int,uint64_t *);
int ESignOriginal_100613874(unsigned char *,int,uint64_t);
int ESignOriginal_100616178(void *);
/* Original Darwin data dependency. SDK modules already declare this symbol. */
#ifdef __APPLE__
#include <runetype.h>
typedef _RuneLocale ESignDarwinRuneLocale;
_Static_assert(offsetof(_RuneLocale,__runetype)==60,"Original Darwin runetype offset");
#else
typedef struct {unsigned char prefix[60];uint32_t runetype[256];} ESignDarwinRuneLocale;
extern const ESignDarwinRuneLocale _DefaultRuneLocale;
#endif
int __tolower(int);
/* Remaining original error formatting dependency; no invented runtime backend. */
int ESignOriginal_100601b1c(char *,size_t,const char *,...);
