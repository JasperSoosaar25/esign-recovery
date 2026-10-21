#pragma once
#include "../asn1-input/ESignASN1Input.h"
typedef struct ESignASN1Template {
    uint64_t flags; int64_t tag; uint64_t offset; const char *field_name; const void *item;
} ESignASN1Template;
typedef struct ESignASN1Item {
    int8_t type; int64_t utype; const ESignASN1Template *templates;
    int64_t template_count; const void *functions; int64_t size; const char *name;
} ESignASN1Item;
typedef int (*ESignASN1AuxCallback)(int,void **,const ESignASN1Item *,void *);
typedef struct ESignASN1Aux {
    void *application_data; int32_t flags,reference_offset,reference_lock;
    ESignASN1AuxCallback callback; int32_t encoding_offset;
} ESignASN1Aux;
typedef struct ESignASN1Context {
    unsigned char valid; int32_t result; int64_t length; int32_t tag,xclass,header_length;
} ESignASN1Context;
typedef struct ESignASN1ADBTable {int64_t value; ESignASN1Template field;} ESignASN1ADBTable;
typedef struct ESignASN1ADB {
    uint64_t flags,offset; void *application_table; const ESignASN1ADBTable *table;
    int64_t count; const ESignASN1Template *default_field,*null_field;
} ESignASN1ADB;
int ESignOriginal_10061938c(void **value,const unsigned char **input,long length,const ESignASN1Template *field,int optional,ESignASN1Context *context,int depth);
int ESignOriginal_10061a738(long *length,int *tag,unsigned char *xclass,unsigned char *indefinite,unsigned char *constructed,const unsigned char **input,long available,int expected_tag,int expected_class,int8_t optional,ESignASN1Context *context);
int ESignOriginal_10061aff4(void **value,const ESignASN1Item *item);
int ESignOriginal_10061b004(void **value,int selector,const ESignASN1Item *item);
int ESignOriginal_10061b0f8(void **value,const unsigned char *input,uint64_t length,const ESignASN1Item *item);
void **ESignOriginal_10061b218(void **value,const ESignASN1Template *field);
const ESignASN1Template *ESignOriginal_10061b230(void **value,const ESignASN1Template *field,int null_error);
/* Remaining original constructors, destructors, value conversion and noexp parser. */
int ESignOriginal_100617b3c(void **value,const ESignASN1Item *item);
void ESignOriginal_10061848c(void **value,const ESignASN1Item *item);
void ESignOriginal_100618494(void **value,const ESignASN1Template *field);
int ESignOriginal_10061a27c(void **value,const unsigned char **input,long length,const ESignASN1Item *item,int tag,int xclass,int optional,ESignASN1Context *context);
int ESignOriginal_10061acc8(void **value,const unsigned char **input,long length,const ESignASN1Template *field,int optional,ESignASN1Context *context,int depth);
int ESignOriginal_1005b3138(const void *object);
long ESignOriginal_100612af0(const void *integer);
void ESignOriginal_1006057d8(int count,...);
