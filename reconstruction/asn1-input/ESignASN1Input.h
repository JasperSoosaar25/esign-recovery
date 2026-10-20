#pragma once
#include "../bio-input/ESignBIOInput.h"
/* Original LP64 ABI; new symbol names identify original entry addresses. */
int ESignOriginal_10061cb98(const unsigned char **cursor,long *length,int *tag,int *xclass,long available);
int ESignOriginal_10061300c(void *bio,ESignBIOBuffer **buffer);
void *ESignOriginal_100613354(const void *item,void *bio,void **output);
void *ESignOriginal_100619304(void **output,const unsigned char **cursor,long length,const void *item);
/* Still unresolved original ERR state and recursive ASN.1 item decoder. */
void ESignOriginal_100604e30(void);
unsigned long ESignOriginal_100605198(void);
int ESignOriginal_10061955c(void **output,const unsigned char **cursor,long length,const void *item,int tag,int xclass,int optional,void *context,int depth);
