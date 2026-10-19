// The test build renames digest calls in the source to recording adapters.
// Each adapter forwards to the actual Apple CommonCrypto implementation.
#undef CC_SHA1
#undef CC_SHA256
#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import "ESignCodeDirectory.h"
#include <stdlib.h>
static NSMutableArray *effects;
unsigned char *ESignTestSHA1(const void *data, CC_LONG length, unsigned char *digest) {
    [effects addObject:@{@"digest":@"_CC_SHA1",@"length":@(length)}];
    return CC_SHA1(data,length,digest);
}
unsigned char *ESignTestSHA256(const void *data, CC_LONG length, unsigned char *digest) {
    [effects addObject:@{@"digest":@"_CC_SHA256",@"length":@(length)}];
    return CC_SHA256(data,length,digest);
}
static NSString *hex(NSData *data) {
    NSMutableString *result=[NSMutableString string];const uint8_t *bytes=[data bytes];
    for(NSUInteger i=0;i<[data length];i++)[result appendFormat:@"%02x",bytes[i]];
    return result;
}
static NSData *unhex(id value) {
    if(value==[NSNull null])return nil;
    NSMutableData *data=[NSMutableData data];NSString *text=value;
    for(NSUInteger i=0;i<[text length];i+=2){unsigned v=0;[[NSScanner scannerWithString:[text substringWithRange:NSMakeRange(i,2)]] scanHexInt:&v];uint8_t byte=v;[data appendBytes:&byte length:1];}
    return data;
}
static id nullable(id value){return value==[NSNull null]?nil:value;}
static id flagValue(NSDictionary *spec) {
    NSString *kind=spec[@"kind"];
    if([kind isEqual:@"bool"])return @([spec[@"value"] boolValue]);
    if([kind isEqual:@"number"]){NSString *v=spec[@"value"];return [v hasPrefix:@"-"]?@([v longLongValue]):@(strtoull([v UTF8String],NULL,10));}
    if([kind isEqual:@"fraction"] || [kind isEqual:@"string"])return spec[@"value"];
    if([kind isEqual:@"array"])return @[];
    if([kind isEqual:@"dictionary"])return @{};
    return [NSNull null];
}
@interface TestDirectoryFile:NSObject
@property(nonatomic,strong)NSFileHandle *actual;
@end
@implementation TestDirectoryFile
-(void)seekToFileOffset:(uint64_t)position {
    [effects addObject:@{@"seek":[NSString stringWithFormat:@"%llu",(unsigned long long)position]}];
    [self.actual seekToFileOffset:position];
}
-(NSData *)readDataOfLength:(NSUInteger)length {
    NSData *data=[self.actual readDataOfLength:length];
    [effects addObject:@{@"read":[NSString stringWithFormat:@"%llu",(unsigned long long)length],@"returned":@([data length])}];
    return data;
}
@end
@interface TestDirectoryArchitecture:NSObject<ESignRecoveredArchitectureInputs>
@property(nonatomic,strong)NSDictionary *input;
@property(nonatomic,strong)TestDirectoryFile *file;
@property(nonatomic)NSUInteger codeIndex;
@property(nonatomic)NSUInteger execIndex;
@end
@implementation TestDirectoryArchitecture
-(uint32_t)codeLength{
    [effects addObject:@{@"getter":@"codeLength"}];
    return self.input[@"code_values"]?(uint32_t)strtoull([self.input[@"code_values"][self.codeIndex++] UTF8String],NULL,10):[self.input[@"code_length"] unsignedIntValue];
}
-(uint64_t)execSegLimit{
    [effects addObject:@{@"getter":@"execSegLimit"}];
    return strtoull([(self.input[@"exec_values"]?self.input[@"exec_values"][self.execIndex++]:self.input[@"exec_limit"]) UTF8String],NULL,10);
}
-(int64_t)offset{[effects addObject:@{@"getter":@"offset"}];return (int64_t)strtoull([self.input[@"offset"] UTF8String],NULL,10);}
-(NSFileHandle *)machoFileHandle{[effects addObject:@{@"getter":@"machoFileHandle"}];return [self.input[@"nil_handle"] boolValue]?nil:(NSFileHandle *)self.file;}
@end
int main(int argc,const char **argv){
 @autoreleasepool{
    if(argc!=2)return 2;
    NSArray *fixtures=[NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
    NSMutableArray *results=[NSMutableArray array];
    for(NSDictionary *fixture in fixtures){
        NSDictionary *input=fixture[@"input"];NSMutableDictionary *row=[@{@"input":input} mutableCopy];effects=[NSMutableArray array];
        @try{
            NSString *op=input[@"op"];
            if([op isEqual:@"flag"]){
                NSDictionary *dictionary=[input[@"nil_dictionary"] boolValue]?nil:([input[@"missing"] boolValue]?@{}:@{input[@"key"]:flagValue(input[@"value"])});
                row[@"result"]=@{@"flag":@(ESignRecoveredEntitlementFlag(dictionary,input[@"key"]))};
            }else if([op isEqual:@"digest"]){
                NSData *data=[input[@"sha256"] boolValue]?ESignRecoveredSHA256(unhex(input[@"data"])):ESignRecoveredSHA1(unhex(input[@"data"]));
                row[@"result"]=@{@"data":hex(data),@"effects":effects};
            }else if([op isEqual:@"byte_length"]){
                row[@"result"]=@{@"length":@(ESignRecoveredUTF8Length(nullable(input[@"value"])))};
            }else{
                NSUInteger length=[input[@"file_length"] unsignedIntegerValue];NSMutableData *bytes=[NSMutableData dataWithLength:length];
                for(NSUInteger i=0;i<length;i++)((uint8_t *)[bytes mutableBytes])[i]=(i*37+11)&255;
                NSString *path=[NSTemporaryDirectory() stringByAppendingPathComponent:[[NSUUID UUID] UUIDString]];
                if(![bytes writeToFile:path atomically:YES])return 3;
                NSFileHandle *actual=[NSFileHandle fileHandleForReadingAtPath:path];
                [actual seekToFileOffset:[input[@"initial_position"] unsignedLongLongValue]];
                TestDirectoryFile *file=[TestDirectoryFile new];file.actual=actual;
                TestDirectoryArchitecture *arch=[TestDirectoryArchitecture new];arch.input=input;arch.file=file;
                NSArray *slots=input[@"slots"];
                NSData *data=ESignRecoveredCodeDirectory(arch,[input[@"sha256"] boolValue],nullable(input[@"bundle_id"]),nullable(input[@"team_id"]),unhex(slots[0]),unhex(slots[1]),unhex(slots[2]),unhex(slots[3]),unhex(slots[4]),strtoull([input[@"exec_flags"] UTF8String],NULL,10));
                row[@"result"]=@{@"data":data?hex(data):(id)[NSNull null],@"effects":effects,@"file_position":[NSString stringWithFormat:@"%llu",[actual offsetInFile]]};
                [actual closeFile];[[NSFileManager defaultManager] removeItemAtPath:path error:NULL];
            }
        }@catch(NSException *exception){row[@"exception"]=exception.name;}
        [results addObject:row];
    }
    NSData *json=[NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];if(!json)return 4;
    fwrite([json bytes],1,[json length],stdout);fputc('\n',stdout);
 }
 return 0;
}
