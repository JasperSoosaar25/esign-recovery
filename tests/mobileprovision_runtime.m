#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "ESignMobileprovision.h"
#import "ESignMobileprovisionDependencies.h"
static NSDictionary *spec;
static NSMutableArray *effects;
static NSUInteger certificateIndex;
static NSMapTable *serialNumbers;
static NSData *payload;
static ESignProfileASN1String octets,*content;
static unsigned char bioMethodToken,bioToken,cmsToken;
static NSString *Hex(const void *bytes,NSUInteger length){
    const unsigned char *p=bytes;NSMutableString *s=[NSMutableString string];
    for(NSUInteger i=0;i<length;i++)[s appendFormat:@"%02x",p[i]];return s;
}
static NSData *Unhex(id text){
    if(!text||text==[NSNull null])return nil;
    NSMutableData *data=[NSMutableData data];
    for(NSUInteger i=0;i<[text length];i+=2){unsigned byte=0;[[NSScanner scannerWithString:[text substringWithRange:NSMakeRange(i,2)]] scanHexInt:&byte];unsigned char b=(unsigned char)byte;[data appendBytes:&b length:1];}return data;
}
static id Canon(id value){
    if(!value)return [NSNull null];
    if([value isKindOfClass:[NSData class]])return @{@"data_hex":Hex([value bytes],[value length])};
    if([value isKindOfClass:[NSDate class]])return @{@"date_unix":@((int64_t)[value timeIntervalSince1970])};
    if([value isKindOfClass:[YYYP12 class]])return @{@"certificate_serial":[value serialNumber]?:[NSNull null]};
    if([value isKindOfClass:[NSArray class]]){NSMutableArray *a=[NSMutableArray array];for(id v in value)[a addObject:Canon(v)];return a;}
    if([value isKindOfClass:[NSDictionary class]]){NSMutableDictionary *d=[NSMutableDictionary dictionary];for(id k in value)d[k]=Canon(value[k]);return d;}
    return value;
}
@implementation YYYP12
- (id)initWithCertificateData:(id)data{
    self=[super init];if(!self)return nil;
    NSUInteger index=certificateIndex++;[effects addObject:@{@"call":@"initWithCertificateData:",@"data":Canon(data)}];
    if(spec[@"certificate_failure"]&&index==[spec[@"certificate_failure"] unsignedIntegerValue])return nil;
    NSArray *values=spec[@"certificate_serials"];id serial=index<values.count?values[index]:[NSString stringWithFormat:@"CERT-%lu",(unsigned long)index];
    if(serial!=[NSNull null])[serialNumbers setObject:serial forKey:self];return self;
}
- (id)serialNumber{return [serialNumbers objectForKey:self];}
@end
void *ESignOriginal_1005ffa5c(void){[effects addObject:@{@"call":@"bio_s_mem"}];return &bioMethodToken;}
void *ESignOriginal_1005fedf0(const void *method){
    if(method!=&bioMethodToken)abort();[effects addObject:@{@"call":@"bio_new",@"method":@"memory"}];return [spec[@"bio_failure"] boolValue]?NULL:&bioToken;
}
int ESignOriginal_1005ff090(void *bio,const void *data,int length){
    [effects addObject:@{@"call":@"bio_write",@"bio":bio?@"bio":[NSNull null],@"length":@(length),@"data":Hex(data,(NSUInteger)MAX(0,length))}];
    return spec[@"write_result"]?[spec[@"write_result"] intValue]:(int)Unhex(spec[@"data"]).length;
}
void *ESignOriginal_10062fb30(void *bio,void **output){
    if(output)abort();[effects addObject:@{@"call":@"d2i_CMS_bio",@"bio":bio?@"bio":[NSNull null]}];return [spec[@"decode_failure"] boolValue]?NULL:&cmsToken;
}
ESignProfileASN1String **ESignOriginal_10062edd8(void *cms){
    if(cms!=&cmsToken)abort();[effects addObject:@{@"call":@"CMS_get0_content",@"cms":@"cms"}];return [spec[@"content_failure"] boolValue]?NULL:&content;
}
static void Configure(NSDictionary *input){
    spec=input;effects=[NSMutableArray array];certificateIndex=0;serialNumbers=[NSMapTable weakToStrongObjectsMapTable];
    payload=Unhex(spec[@"payload_hex"]?:@"");octets.length=(int32_t)payload.length;octets.type=4;octets.data=(unsigned char *)payload.bytes;
    content=[spec[@"octets_failure"] boolValue]?NULL:&octets;
}
static NSDictionary *Snapshot(YYYMobileprovision *object){
    NSMutableDictionary *d=[NSMutableDictionary dictionary];
    for(NSString *name in @[@"provisionsAllDevices",@"name",@"appIDName",@"appID",@"teamName",@"teamIdentifier",@"platform",@"UUID",@"createDate",@"expirationDate",@"applicationIdentifierPrefix",@"provisionedDevices",@"developerCertificates",@"developerCertificatesFormatter",@"entitlements",@"info",@"data"])d[name]=Canon([object valueForKey:name]);
    return d;
}
static YYYP12 *Certificate(id serial){
    YYYP12 *object=[YYYP12 new];if(serial!=[NSNull null])[serialNumbers setObject:serial forKey:object];return object;
}
static NSDictionary *Evaluate(NSDictionary *input){
    Configure(input);NSString *op=input[@"op"];
    if([op isEqual:@"profile"]||[op isEqual:@"setup"]){
        NSData *data=Unhex(input[@"data"]);YYYMobileprovision *object;BOOL returned;
        if([op isEqual:@"setup"]){object=[YYYMobileprovision new];object.name=@"before";object.info=@{@"before":@YES};object.data=data;returned=[object setup];}
        else{object=[[YYYMobileprovision alloc] initWithData:data];returned=object!=nil;}
        return @{@"returned":@(returned),@"state":object?Snapshot(object):[NSNull null],@"effects":effects};
    }
    YYYMobileprovision *object=[YYYMobileprovision new];
    if([op isEqual:@"contains"]){
        NSMutableArray *array=[NSMutableArray array];for(id value in input[@"serials"])[array addObject:Certificate(value)];object.developerCertificatesFormatter=array;
        id target=input[@"wanted"]==[NSNull null]?nil:Certificate(input[@"wanted"]);
        return @{@"contains":@([object containsCertificate:target])};
    }
    if([op isEqual:@"property"]){
        id value=input[@"value"]==[NSNull null]?nil:input[@"value"];if([input[@"mutable"] boolValue])value=[value mutableCopy];
        [object setValue:value forKey:input[@"field"]];if([input[@"mutable"] boolValue]&&value)[value setString:@"after"];
        id observed=Canon([object valueForKey:input[@"field"]]);[object setValue:nil forKey:input[@"field"]];return @{@"value":observed,@"cleared":@([object valueForKey:input[@"field"]]==nil)};
    }
    if([op isEqual:@"strong_properties"]){
        NSMutableDictionary *d=[NSMutableDictionary dictionary];
        for(NSString *name in @[@"teamIdentifier",@"platform",@"applicationIdentifierPrefix",@"provisionedDevices",@"developerCertificates",@"developerCertificatesFormatter",@"entitlements",@"info",@"data"]){
            NSMutableArray *value=[NSMutableArray arrayWithObject:@"before"];[object setValue:value forKey:name];[value addObject:@"after"];id observed=[object valueForKey:name];d[name]=@{@"same_object":@(observed==value),@"value":Canon(observed)};
        }
        object.provisionsAllDevices=NO;d[@"bool_0"]=@(object.provisionsAllDevices);object.provisionsAllDevices=YES;d[@"bool_1"]=@(object.provisionsAllDevices);return d;
    }
    unsigned count;Ivar *fields=class_copyIvarList([YYYMobileprovision class],&count);
    for(unsigned i=0;i<count;i++){NSString *name=@(ivar_getName(fields[i]));if(![name isEqual:@"_provisionsAllDevices"])[object setValue:@"owned" forKey:[name substringFromIndex:1]];}free(fields);
    ((void(*)(id,SEL))objc_msgSend)(object,sel_registerName(".cxx_destruct"));return Snapshot(object);
}

static NSArray *RuntimeMetadata(void) {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *name in @[@"YYYMobileprovision"]) {
        Class cls = NSClassFromString(name);
        NSMutableArray *ivars = [NSMutableArray array], *methods = [NSMutableArray array];
        unsigned count;
        Ivar *fields = class_copyIvarList(cls, &count);
        for (unsigned i = 0; i < count; i++) [ivars addObject:@{
            @"name": @(ivar_getName(fields[i])), @"type_encoding": @(ivar_getTypeEncoding(fields[i])), @"offset": @(ivar_getOffset(fields[i]))}];
        free(fields);
        for (unsigned kind = 0; kind < 2; kind++) {
            Method *entries = class_copyMethodList(kind ? object_getClass(cls) : cls, &count);
            for (unsigned i = 0; i < count; i++) [methods addObject:@{
                @"kind": kind ? @"+" : @"-", @"selector": @(sel_getName(method_getName(entries[i]))),
                @"type_encoding": @(method_getTypeEncoding(entries[i]))}];
            free(entries);
        }
        [result addObject:@{@"name": name, @"superclass": @(class_getName(class_getSuperclass(cls))),
            @"instance_size": @(class_getInstanceSize(cls)), @"ivars": ivars, @"methods": methods}];
    }
    return result;
}

int main(int argc, const char *argv[]) {
    @autoreleasepool {
        if (argc != 2) return 2;
        NSArray *fixtures = [NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
        NSMutableArray *results = [NSMutableArray array];
        for (NSDictionary *fixture in fixtures) [results addObject:@{@"input": fixture[@"input"], @"result": Evaluate(fixture[@"input"])}];
        NSData *json = [NSJSONSerialization dataWithJSONObject:@{@"fixtures": results, @"metadata": RuntimeMetadata()}
                                                     options:NSJSONWritingSortedKeys error:NULL];
        if (!json) return 3;
        fwrite(json.bytes, 1, json.length, stdout);
        fputc('\n', stdout);
    }
    return 0;
}
