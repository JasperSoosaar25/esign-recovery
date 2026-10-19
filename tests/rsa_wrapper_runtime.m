// Reuse the same explicit crypto boundary recorders as the eight helper tests.
#define main LegacyCryptoHarnessMain
#include "legacy_crypto_runtime.m"
#undef main
#include "ESignRSASignWrapper.h"

// Invented identity token. The fmemopen test adapter never reads these bytes.
unsigned char ESignOriginalEmbeddedKey_100e34468[] = {0xa5};
FILE *ESignTestFmemopen(void *buffer,size_t size,const char *mode){
    [effects addObject:@{@"call":@"fmemopen",@"buffer":Label(buffer),
        @"size":[NSString stringWithFormat:@"%llu",(unsigned long long)size],@"mode":@(mode)}];
    return [input[@"file_failure"] boolValue]?NULL:stream;
}
int ESignTestFclose(FILE *object){ObjectCall(@"fclose",object);return 0;}
void *ESignTestMalloc(size_t size){
    [effects addObject:@{@"call":@"malloc",@"size":[NSString stringWithFormat:@"%llu",(unsigned long long)size]}];
    return [input[@"allocation_failure"] boolValue]?NULL:Named(@"allocation",MAX((size_t)1,size));
}
int ESignTestPrintf(const char *format,...){
    [effects addObject:@{@"call":@"printf",@"message":@(format)}];return (int)strlen(format);
}
int ESignTestFprintf(FILE *object,const char *format,...){
    [effects addObject:@{@"call":@"fprintf",@"stream":Label(object),@"message":@(format)}];return (int)strlen(format);
}
static NSDictionary *EvaluateWrapper(NSDictionary *spec){
    Setup(spec);
    labels[@((uintptr_t)stderr)]=@"stderr";
    labels[@((uintptr_t)ESignOriginalEmbeddedKey_100e34468)]=@"embedded-key";
    ESignLegacyBN *number=Named(@"bn",sizeof(*number));NSArray *values=spec[@"limbs"];
    number->limbs=Named(@"limbs",MAX((NSUInteger)1,values.count)*4);
    for(NSUInteger i=0;i<values.count;i++)number->limbs[i]=[values[i] unsignedIntValue];
    number->top=[spec[@"top"] intValue];number->capacity=(int32_t)values.count;
    number->flags=[spec[@"flags"] intValue];rsa->n=number;
    int64_t outputLength=INT64_C(0x1122334455667788);
    unsigned char *result=ESignRecoveredRSASignWrapper(Named(@"input",1),
        [spec[@"length"] unsignedLongLongValue],Named(@"ignored-key",1),
        (size_t)[spec[@"key_length"] longLongValue],&outputLength);
    NSString *length=outputLength==INT64_C(0x1122334455667788)?@"unchanged":
        [NSString stringWithFormat:@"%lld",(long long)outputLength];
    return @{@"returned":Label(result),@"out_length":length,
        @"rsa_references":@(rsa->references),@"pkey_references":@(pkey->references),@"effects":effects};
}
int main(int argc,const char **argv){
    @autoreleasepool{
        if(argc!=2)return 2;
        NSArray *fixtures=[NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
        NSMutableArray *results=[NSMutableArray array];
        for(NSDictionary *fixture in fixtures){
            if([fixture[@"unverified_source_input"] boolValue])continue;
            NSDictionary *spec=fixture[@"input"];
            [results addObject:@{@"input":spec,@"result":EvaluateWrapper(spec)}];
        }
        NSData *json=[NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];if(!json)return 3;
        fwrite([json bytes],1,[json length],stdout);fputc('\n',stdout);
    }
    return 0;
}
