#pragma once
// Unreconstructed ORIGINAL native boundaries. No substitute backend or default
// implementations are supplied. Addresses are tied to the selected IPA.
#include "ESignLegacyCrypto.h"
int ESignOriginal_1005b1044(int32_t *references,int amount,int lock,const char *file,int line);
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line);
void ESignOriginal_1005b1658(void *pointer);
int ESignOriginal_1005fe060(void *engine);
void ESignOriginal_1005b1c68(int index,void *parent,void *ex_data);
void ESignOriginal_1005d1864(ESignLegacyBN *number);
void ESignOriginal_1005d60e4(void *blinding);
void ESignOriginal_1005b1170(void *bignum_data);
void ESignOriginal_100615740(void *attribute);
void ESignOriginal_10060258c(void *stack,void (*free_item)(void *));
void *ESignOriginal_1006000d8(void);
void *ESignOriginal_1005fedf0(const void *method);
long ESignOriginal_1005ff4e0(void *bio,int command,long number,void *pointer);
ESignLegacyPKey *ESignOriginal_10061ee4c(void *bio,ESignLegacyPKey **output,void *password_callback,void *password_data);
int ESignOriginal_1005feebc(void *bio);
