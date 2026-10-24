#pragma once
#include "../asn1-item/ESignASN1Item.h"
/* Navigation names and inventory expose the relocated original descriptors. */
typedef struct ESignCMSSchemaNode {uint64_t original_address; const void *pointer; uint64_t size;} ESignCMSSchemaNode;
extern const ESignCMSSchemaNode ESignOriginalCMSSchemaNodes[];
extern const size_t ESignOriginalCMSSchemaNodeCount;
extern const ESignASN1Item ESignCMSSchema_100b24750;
void *ESignOriginal_10062fb30(void *bio,void **output);
int ESignOriginal_10062f838(int operation,void **value,const ESignASN1Item *item,void *argument);
int ESignOriginal_10062f884(int operation,void **value,const ESignASN1Item *item,void *argument);
int ESignOriginal_10062f8ac(int operation,void **value,const ESignASN1Item *item,void *argument);
int ESignOriginal_10062f918(int operation,void **value,const ESignASN1Item *item,void *argument);
int ESignOriginal_10062f9a8(int operation,void **value,const ESignASN1Item *item,void *argument);
int ESignOriginal_1006159c4(void **value,const ESignASN1Item *item);
void ESignOriginal_1006159d4(void **value,const ESignASN1Item *item);
int ESignOriginal_1006159e0(void **value,const unsigned char *content,uint64_t length,int type,unsigned char *free_content,const ESignASN1Item *item);
int ESignOriginal_100615b08(void **value,unsigned char *content,int *type,const ESignASN1Item *item);
int ESignOriginal_100615bac(void *bio,void **value,const ESignASN1Item *item,int indent,const void *context);
