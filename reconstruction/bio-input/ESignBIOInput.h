#pragma once
#include <stdint.h>
#include <stddef.h>
typedef struct ESignBIOBuffer { uint64_t length; unsigned char *data; uint64_t capacity; } ESignBIOBuffer;
typedef long (*ESignBIOCallback)(void *,int,const char *,int,long,long);
typedef struct ESignBIOMethod {
    int32_t type; const char *name;
    int (*write)(void *,const void *,int);
    int (*read)(void *,void *,int);
    int (*puts)(void *,const char *);
    int (*gets)(void *,char *,int);
    long (*ctrl)(void *,int,long,void *);
    int (*create)(void *); int (*destroy)(void *);
    long (*callback_ctrl)(void *,int,void *);
} ESignBIOMethod;
typedef struct ESignBIO {
    ESignBIOMethod *method; ESignBIOCallback callback; void *callback_arg;
    int32_t initialized,shutdown; uint32_t flags; int32_t retry_reason,number;
    void *pointer; struct ESignBIO *next,*previous; int32_t references;
    uint64_t num_read,num_write; unsigned char ex_data[16];
} ESignBIO;
extern ESignBIOMethod ESignOriginalBIOMemoryMethod;
void *ESignOriginal_1005fedf0(const void *method);
int ESignOriginal_1005feebc(void *bio);
int ESignOriginal_1005ff090(void *bio,const void *input,int length);
int ESignOriginal_1005fef88(void *bio,void *output,int length);
long ESignOriginal_1005ff4e0(void *bio,int command,long number,void *pointer);
void *ESignOriginal_1005ffa5c(void);
void ESignOriginal_1005fef5c(void *bio,int flags);
void ESignOriginal_1005fef78(void *bio,int flags);
int ESignOriginal_1005ffb0c(void *bio,const void *input,int length);
int ESignOriginal_1005ffbc8(void *bio,void *output,int length);
int ESignOriginal_1005ffc7c(void *bio,const char *input);
int ESignOriginal_1005ffcac(void *bio,char *output,int length);
long ESignOriginal_1005ffd40(void *bio,int command,long number,void *pointer);
int ESignOriginal_1005ffea0(void *bio);
int ESignOriginal_1005ffed8(void *bio);
ESignBIOBuffer *ESignOriginal_1005fe7fc(void);
void ESignOriginal_1005fe850(ESignBIOBuffer *buffer);
int ESignOriginal_1005fe990(ESignBIOBuffer *buffer,size_t length);
// Original unresolved allocation, ex-data, refcount, cleansing and ERR boundaries.
void *ESignOriginal_1005b11cc(size_t size,const char *file,int line);
void *ESignOriginal_1005b14c4(void *old,size_t old_size,size_t new_size,const char *file,int line);
void ESignOriginal_1005b1658(void *pointer);
void ESignOriginal_1005b2bb8(void *pointer,size_t length);
int ESignOriginal_1005b1bdc(int index,void *parent,void *ex_data);
void ESignOriginal_1005b1c68(int index,void *parent,void *ex_data);
int ESignOriginal_1005b1044(int32_t *references,int amount,int lock,const char *file,int line);
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line);
