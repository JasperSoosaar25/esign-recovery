#pragma once
#include "../asn1-item/ESignASN1Item.h"
/* Navigation names for the four original bodies, not a host OpenSSL ABI. */
int ESignOriginal_100619f5c(void **value,const unsigned char *content,uint64_t length,int type,unsigned char *free_content,const ESignASN1Item *item);
int ESignOriginal_10061a964(ESignBIOBuffer *buffer,const unsigned char **input,long length,int indefinite,int depth);
/* Original dependencies not supplied by this component. */
void *ESignOriginal_10061b3ec(void);
void ESignOriginal_10061b3f8(void *value);
void ESignOriginal_100612e1c(void *value,int type,void *content);
void *ESignOriginal_10061d254(int type);
int ESignOriginal_10061cfa4(void *value,const void *content,uint64_t length);
void ESignOriginal_10061d1e0(void *value);
void *ESignOriginal_1006111c4(void **value,const unsigned char **content,long length);
void *ESignOriginal_100610d4c(void **value,const unsigned char **content,long length);
void *ESignOriginal_1006125f4(void **value,const unsigned char **content,long length);
void *ESignOriginal_100602154(void);
int ESignOriginal_100602610(const void *stack);
void *ESignOriginal_100602560(void *stack);
int ESignOriginal_100602494(void *stack,void *value);
