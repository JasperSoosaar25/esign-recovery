#import <Foundation/Foundation.h>
#include "ESignLegacyCryptoDependencies.h"
#include <stdlib.h>
#include <string.h>
static NSMutableArray *effects;
static NSMutableDictionary *labels;
static NSDictionary *input;
static ESignLegacyRSA *rsa;
static ESignLegacyPKey *pkey;
static void *bioMethod,*bio,*stream,*outputPointer,*passwordCallback,*passwordData;
static id Label(const void *pointer){
    if(!pointer)return [NSNull null];
    id label=labels[@((uintptr_t)pointer)];
    if(!label)[NSException raise:@"UnknownBoundaryPointer" format:@"missing label"];
    return label;
}
static void *Named(NSString *name,size_t size){
    void *pointer=calloc(1,size);if(!pointer)abort();labels[@((uintptr_t)pointer)]=name;return pointer;
}
static int32_t Wrap(uint32_t value){int32_t result;memcpy(&result,&value,4);return result;}
int ESignOriginal_1005b1044(int32_t *references,int amount,int lock,const char *file,int line){
    NSString *owner=references==&rsa->references?@"rsa":references==&pkey->references?@"pkey":nil;
    if(!owner)abort();
    [effects addObject:@{@"call":@"crypto_add",@"object":owner,@"amount":@(amount),@"lock":@(lock),@"file":@(file),@"line":@(line)}];
    *references=Wrap((uint32_t)*references+(uint32_t)amount);return *references;
}
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line){
    [effects addObject:@{@"call":@"error",@"library":@(library),@"function":@(function),@"reason":@(reason),@"file":@(file),@"line":@(line)}];
}
static void ObjectCall(NSString *name,void *pointer){[effects addObject:@{@"call":name,@"object":Label(pointer)}];}
void ESignOriginal_1005b1658(void *p){ObjectCall(@"free",p);}
int ESignOriginal_1005fe060(void *p){ObjectCall(@"engine_finish",p);return 1;}
void ESignOriginal_1005b1c68(int index,void *parent,void *exData){
    if(exData!=rsa->ex_data)abort();
    [effects addObject:@{@"call":@"free_ex_data",@"index":@(index),@"object":Label(parent)}];
}
void ESignOriginal_1005d1864(ESignLegacyBN *p){ObjectCall(@"bn_clear_free",p);}
void ESignOriginal_1005d60e4(void *p){ObjectCall(@"blinding_free",p);}
void ESignOriginal_1005b1170(void *p){ObjectCall(@"bignum_data_free",p);}
void ESignOriginal_100615740(void *p){(void)p;abort();}
void ESignOriginal_10060258c(void *stack,void(*callback)(void *)){
    [effects addObject:@{@"call":@"attributes_pop_free",@"object":Label(stack),@"callback":Label((const void *)callback)}];
}
void *ESignOriginal_1006000d8(void){[effects addObject:@{@"call":@"bio_s_file"}];return bioMethod;}
void *ESignOriginal_1005fedf0(const void *method){[effects addObject:@{@"call":@"bio_new",@"method":Label(method)}];return [input[@"bio_failure"] boolValue]?NULL:bio;}
long ESignOriginal_1005ff4e0(void *object,int command,long number,void *pointer){
    [effects addObject:@{@"call":@"bio_ctrl",@"object":Label(object),@"command":@(command),@"number":[NSString stringWithFormat:@"%llu",(unsigned long long)number],@"pointer":Label(pointer)}];return 0;
}
ESignLegacyPKey *ESignOriginal_10061ee4c(void *object,ESignLegacyPKey **out,void *callback,void *data){
    [effects addObject:@{@"call":@"pem_read_bio",@"object":Label(object),@"output":Label(out),@"password_callback":Label(callback),@"password_data":Label(data)}];
    ESignLegacyPKey *result=[input[@"parse_failure"] boolValue]?NULL:pkey;if(out)*out=result;return result;
}
int ESignOriginal_1005feebc(void *p){ObjectCall(@"bio_free",p);return 1;}
static int Finish(ESignLegacyRSA *r){
    ObjectCall(@"rsa_finish",r);if([input[@"mutate_callback"] boolValue]){r->engine=NULL;r->n=NULL;}return 7;
}
static void FreeKey(ESignLegacyPKey *key){
    ObjectCall(@"pkey_free_callback",key);if([input[@"mutate_callback"] boolValue]){key->engine=NULL;key->attributes=NULL;}
}
static int Encrypt(int length,const unsigned char *bytes,unsigned char *out,ESignLegacyRSA *r,int padding){
    [effects addObject:@{@"call":@"private_encrypt_callback",@"length":@(length),@"input":Label(bytes),@"output":Label(out),@"rsa":Label(r),@"padding":@(padding)}];return [input[@"callback_result"] intValue];
}
static void Setup(NSDictionary *spec){
    input=spec;effects=[NSMutableArray array];labels=[NSMutableDictionary dictionary];
    labels[@((uintptr_t)ESignOriginal_100615740)]=@"attribute_free_callback";
    rsa=Named(@"rsa",sizeof(*rsa));pkey=Named(@"pkey",sizeof(*pkey));
    ESignLegacyRSAMethodPrefix *method=Named(@"rsa_method",sizeof(*method));method->private_encrypt=Encrypt;method->finish=[input[@"finish"] boolValue]?Finish:NULL;rsa->method=method;
    ESignLegacyASN1MethodPrefix *ameth=Named(@"asn1_method",sizeof(*ameth));ameth->pkey_free=[input[@"finish"] boolValue]?FreeKey:NULL;
    pkey->method=input[@"method"]&&![input[@"method"] boolValue]?NULL:ameth;
    int32_t references=input[@"references"]?[input[@"references"] intValue]:1;rsa->references=references;pkey->references=references;
    pkey->type=input[@"type"]?[input[@"type"] intValue]:6;pkey->key.rsa=rsa;
    if([input[@"populated"] boolValue]){
        rsa->engine=Named(@"rsa_engine",1);rsa->n=Named(@"n",sizeof(ESignLegacyBN));rsa->e=Named(@"e",sizeof(ESignLegacyBN));rsa->d=Named(@"d",sizeof(ESignLegacyBN));rsa->p=Named(@"p",sizeof(ESignLegacyBN));rsa->q=Named(@"q",sizeof(ESignLegacyBN));rsa->dmp1=Named(@"dmp1",sizeof(ESignLegacyBN));rsa->dmq1=Named(@"dmq1",sizeof(ESignLegacyBN));rsa->iqmp=Named(@"iqmp",sizeof(ESignLegacyBN));
        rsa->bignum_data=Named(@"bignum_data",1);rsa->blinding=Named(@"blinding",1);rsa->mt_blinding=Named(@"mt_blinding",1);
        pkey->engine=Named(@"pkey_engine",1);pkey->attributes=Named(@"attributes",1);
    }
    bioMethod=Named(@"bio_method",1);bio=Named(@"bio",1);stream=Named(@"stream",1);outputPointer=Named(@"output",sizeof(void *));*(void **)outputPointer=rsa;
    passwordCallback=Named(@"password_callback",1);passwordData=Named(@"password_data",1);
}
static NSDictionary *Evaluate(NSDictionary *spec){
    Setup(spec);NSString *op=spec[@"op"];id returned=[NSNull null];
    if([op isEqual:@"bn_bits"]||[op isEqual:@"rsa_size"]){
        ESignLegacyBN *number=Named(@"bn",sizeof(*number));NSArray *values=spec[@"limbs"];
        number->limbs=Named(@"limbs",MAX(1,values.count)*4);
        for(NSUInteger i=0;i<values.count;i++)number->limbs[i]=[values[i] unsignedIntValue];
        number->top=[spec[@"top"] intValue];number->capacity=spec[@"capacity"]?[spec[@"capacity"] intValue]:(int32_t)values.count;
        number->negative=[spec[@"negative"] intValue];number->flags=[spec[@"flags"] intValue];
        if([op isEqual:@"rsa_size"]){rsa->n=number;returned=@(ESignRecoveredRSASize(rsa));}else returned=@(ESignRecoveredBNBits(number));
    }else if([op isEqual:@"rsa_up_ref"])returned=@(ESignRecoveredRSAUpRef(rsa));
    else if([op isEqual:@"get1_rsa"])returned=Label(ESignRecoveredGet1RSA(pkey));
    else if([op isEqual:@"rsa_free"])ESignRecoveredRSAFree([spec[@"nil"] boolValue]?NULL:rsa);
    else if([op isEqual:@"pkey_free"])ESignRecoveredPKeyFree([spec[@"nil"] boolValue]?NULL:pkey);
    else if([op isEqual:@"private_encrypt"])returned=@(ESignRecoveredRSAPrivateEncrypt([spec[@"length"] intValue],Named(@"input",1),outputPointer,rsa,[spec[@"padding"] intValue]));
    else returned=Label(ESignRecoveredReadPrivateKey(stream,[spec[@"output_pointer"] boolValue]?outputPointer:NULL,[spec[@"password"] boolValue]?passwordCallback:NULL,[spec[@"password"] boolValue]?passwordData:NULL));
    NSMutableDictionary *result=[@{@"returned":returned,@"effects":effects} mutableCopy];
    if([@[@"rsa_up_ref",@"get1_rsa",@"rsa_free"] containsObject:op])result[@"rsa_references"]=@(rsa->references);
    if([op isEqual:@"pkey_free"]){result[@"pkey_references"]=@(pkey->references);result[@"key"]=Label(pkey->key.pointer);result[@"engine"]=Label(pkey->engine);result[@"attributes"]=Label(pkey->attributes);}
    if([op isEqual:@"read_private_key"])result[@"output"]=Label(*(void **)outputPointer);
    return result;
}
int main(int argc,const char **argv){
    @autoreleasepool{
        if(argc!=2)return 2;
        NSArray *fixtures=[NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
        NSMutableArray *results=[NSMutableArray array];
        for(NSDictionary *fixture in fixtures){NSDictionary *spec=fixture[@"input"];[results addObject:@{@"input":spec,@"result":Evaluate(spec)}];}
        NSData *json=[NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];if(!json)return 3;
        fwrite([json bytes],1,[json length],stdout);fputc('\n',stdout);
    }
    return 0;
}
