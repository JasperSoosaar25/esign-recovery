#pragma once
#include "../asn1-value/ESignASN1Value.h"
extern const ESignASN1Item ESignOriginalASN1AnyItem;
int ESignOriginal_100617b44(void **value,const ESignASN1Item *item,int combine);
void ESignOriginal_10061809c(void **value,const ESignASN1Item *item,int combine);
void ESignOriginal_100617e98(void **value,const ESignASN1Template *field);
int ESignOriginal_100617f50(void **value,const ESignASN1Item *item);
void ESignOriginal_100618544(void **value,const ESignASN1Item *item);
int ESignOriginal_10061b018(void **value,int operation,const ESignASN1Item *item);
void ESignOriginal_10061b074(void **value,const ESignASN1Item *item);
void ESignOriginal_10061b0a8(void **value,const ESignASN1Item *item);
void *ESignOriginal_100617b08(const ESignASN1Item *item);
void ESignOriginal_100618078(void *value,const ESignASN1Item *item);
/* Remaining original allocation, stack and object boundaries. */
void *ESignOriginal_1005b137c(void *old,uint64_t size,const char *file,int line);
const void *ESignOriginal_1005b2eac(int nid);
void ESignOriginal_100610ffc(void *object);
void ESignOriginal_100602124(void *stack);
void *ESignOriginal_100602624(const void *stack,int index);
