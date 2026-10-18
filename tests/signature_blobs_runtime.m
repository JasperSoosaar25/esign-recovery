// Controlled native Foundation tests for original-derived signing containers.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ESignSignatureBlobs.h"

static id Nullable(id value) { return value ?: [NSNull null]; }
static NSString *Hex(NSData *data) {
    if (!data) return (id)[NSNull null];
    const unsigned char *bytes = data.bytes;
    NSMutableString *value = [NSMutableString stringWithCapacity:data.length * 2];
    for (NSUInteger i = 0; i < data.length; i++) [value appendFormat:@"%02x", bytes[i]];
    return value;
}
static NSData *Unhex(NSString *hex) {
    NSMutableData *data = [NSMutableData dataWithCapacity:hex.length / 2];
    for (NSUInteger i = 0; i < hex.length; i += 2) {
        unsigned int value;
        [[NSScanner scannerWithString:[hex substringWithRange:NSMakeRange(i, 2)]] scanHexInt:&value];
        unsigned char byte = (unsigned char)value;
        [data appendBytes:&byte length:1];
    }
    return data;
}
static id Describe(id object) {
    if (!object) return [NSNull null];
    if ([object isKindOfClass:[YYYBlob class]]) {
        YYYBlob *blob = object;
        ESignBlobHeader header = blob.blob;
        return @{@"magic": @(blob.magic), @"length": @(blob.length), @"data": Hex(blob.data),
            @"entitlements": Nullable(blob.entitlements), @"header": Hex([NSData dataWithBytes:&header length:8]),
            @"serialized": Hex([blob blobData])};
    }
    if ([object isKindOfClass:[YYYBlobIndex class]]) {
        YYYBlobIndex *index = object;
        ESignBlobIndexHeader header = index.blobIndex;
        return @{@"type": @(index.type), @"offset": @(index.offset), @"data": Hex(index.data),
            @"blob": Describe(index.blob), @"header": Hex([NSData dataWithBytes:&header length:8])};
    }
    YYYSuperBlob *superBlob = object;
    NSMutableArray *before = [NSMutableArray array];
    for (YYYBlobIndex *index in superBlob.blobs) [before addObject:Describe(index)];
    ESignSuperBlobHeader header = superBlob.superBlob;
    NSData *serialized = [superBlob superBlobData];
    NSMutableArray *after = [NSMutableArray array];
    for (YYYBlobIndex *index in superBlob.blobs) [after addObject:@(index.offset)];
    return @{@"magic": @(superBlob.magic), @"count": @(superBlob.count), @"length": @(superBlob.length),
        @"indexes_before_serialization": before, @"header": Hex([NSData dataWithBytes:&header length:12]),
        @"serialized": Hex(serialized), @"offsets_after": after};
}

@interface TestLengthOnly : NSObject
@property(nonatomic) NSUInteger fakeLength;
- (NSUInteger)length;
@end
@implementation TestLengthOnly
- (NSUInteger)length { return self.fakeLength; }
@end

static const uint32_t Sequence[] = {0x12345678, 0x89abcdef, 0x11223344, 0x55667788};
@interface TestBlobHeaders : YYYBlob
@property(nonatomic) NSUInteger magicReads, lengthReads;
@end
@implementation TestBlobHeaders
- (uint32_t)magic { return Sequence[self.magicReads++ % 4]; }
- (uint32_t)length { return Sequence[self.lengthReads++ % 4]; }
@end
@interface TestIndexHeaders : YYYBlobIndex
@property(nonatomic) NSUInteger typeReads, offsetReads;
@end
@implementation TestIndexHeaders
- (uint32_t)type { return Sequence[self.typeReads++ % 4]; }
- (uint32_t)offset { return Sequence[self.offsetReads++ % 4]; }
@end
@interface TestSuperHeaders : YYYSuperBlob
@property(nonatomic) NSUInteger magicReads, lengthReads, countReads;
@end
@implementation TestSuperHeaders
- (uint32_t)magic { return Sequence[self.magicReads++ % 4]; }
- (uint32_t)length { return Sequence[self.lengthReads++ % 4]; }
- (uint32_t)count { return Sequence[self.countReads++ % 4]; }
@end

static id Evaluate(NSDictionary *input) {
    NSString *op = input[@"op"];
    id object;
    if ([op isEqual:@"blob"]) {
        object = [YYYBlob blobWithMagic:[input[@"magic"] unsignedIntValue] data:Unhex(input[@"payload"])];
    } else if ([op isEqual:@"parse_blob"]) {
        object = [YYYBlob blobWithdata:Unhex(input[@"data"])];
    } else if ([op isEqual:@"super"]) {
        YYYSuperBlob *container = [YYYSuperBlob superBlobWithMagic:0xfade0cc0];
        for (NSDictionary *entry in input[@"entries"]) {
            YYYBlob *blob = [YYYBlob blobWithMagic:[entry[@"magic"] unsignedIntValue] data:Unhex(entry[@"payload"])];
            [container addBlobIndex:[YYYBlobIndex blobIndexWithType:[entry[@"type"] unsignedIntValue] blob:blob]];
        }
        NSDictionary *built = Describe(container);
        YYYSuperBlob *parsed = [YYYSuperBlob superBlobWithSuperBlobData:Unhex(built[@"serialized"])];
        return @{@"built": built, @"parsed": Describe(parsed)};
    } else if ([op isEqual:@"parse_super"]) {
        NSData *data = Unhex(input[@"data"]);
        const unsigned char *bytes = data.bytes;
        BOOL incompleteMagic = data.length < 4;
        BOOL incompleteMatchingHeader = data.length >= 4 && data.length < 12 &&
            bytes[0] == 0xfa && bytes[1] == 0xde && bytes[2] == 0x0c && bytes[3] == 0xc0;
        if (incompleteMagic || incompleteMatchingHeader) {
            unsigned char buffer[12];
            memset(buffer, 0xa5, sizeof buffer);
            [data getBytes:buffer length:sizeof buffer];
            return @{@"original_parser_result_unverified": @"incomplete-original-header",
                     @"foundation_partial_copy": Hex([NSData dataWithBytes:buffer length:sizeof buffer])};
        }
        object = [YYYSuperBlob superBlobWithSuperBlobData:data];
    } else if ([op isEqual:@"length"]) {
        TestLengthOnly *data = [TestLengthOnly new];
        data.fakeLength = [input[@"length"] unsignedLongLongValue];
        YYYBlob *blob = [YYYBlob blobWithMagic:0 data:data];
        return @{@"length": @(blob.length)};
    } else if ([op isEqual:@"raw_index"]) {
        YYYBlobIndex *index = [YYYBlobIndex blobIndexWithType:0xffffffff data:[@"raw" dataUsingEncoding:NSUTF8StringEncoding]];
        index.offset = 0x81234567;
        object = index;
    } else if ([op isEqual:@"snapshot"]) {
        YYYBlob *blob = [YYYBlob blobWithMagic:0x12345678 data:[@"before" dataUsingEncoding:NSUTF8StringEncoding]];
        object = [YYYBlobIndex blobIndexWithType:7 blob:blob];
        blob.data = [@"after" dataUsingEncoding:NSUTF8StringEncoding];
    } else if ([op isEqual:@"header_reads"]) {
        TestBlobHeaders *blob = [TestBlobHeaders new];
        TestIndexHeaders *index = [TestIndexHeaders new];
        TestSuperHeaders *superBlob = [TestSuperHeaders new];
        ESignBlobHeader a = blob.blob;
        ESignBlobIndexHeader b = index.blobIndex;
        ESignSuperBlobHeader c = superBlob.superBlob;
        return @{@"YYYBlob": @{@"bytes": Hex([NSData dataWithBytes:&a length:8]),
                @"reads": @{@"magic": @(blob.magicReads), @"length": @(blob.lengthReads)}},
            @"YYYBlobIndex": @{@"bytes": Hex([NSData dataWithBytes:&b length:8]),
                @"reads": @{@"type": @(index.typeReads), @"offset": @(index.offsetReads)}},
            @"YYYSuperBlob": @{@"bytes": Hex([NSData dataWithBytes:&c length:12]),
                @"reads": @{@"magic": @(superBlob.magicReads), @"length": @(superBlob.lengthReads), @"count": @(superBlob.countReads)}}};
    } else if ([op isEqual:@"destructors"]) {
        NSMutableDictionary *output = [NSMutableDictionary dictionary];
        for (NSString *name in @[@"YYYBlob", @"YYYBlobIndex", @"YYYSuperBlob"]) {
            id instance = [NSClassFromString(name) new];
            NSArray *fields = [name isEqual:@"YYYBlob"] ? @[@"_data", @"_entitlements"] :
                ([name isEqual:@"YYYBlobIndex"] ? @[@"_blob", @"_data"] : @[@"_blobs"]);
            for (NSString *field in fields) [instance setValue:[NSObject new] forKey:field];
            SEL selector = sel_registerName(".cxx_destruct");
            IMP implementation = class_getMethodImplementation([instance class], selector);
            ((void (*)(id, SEL))implementation)(instance, selector);
            NSMutableDictionary *values = [NSMutableDictionary dictionary];
            for (NSString *field in fields) values[field] = @([instance valueForKey:field] == nil ? 0 : 1);
            output[name] = values;
        }
        return output;
    } else {
        [NSException raise:@"UnknownFixture" format:@"%@", op];
    }
    return Describe(object);
}

static NSArray *RuntimeMetadata(void) {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *name in @[@"YYYBlob", @"YYYBlobIndex", @"YYYSuperBlob"]) {
        Class cls = NSClassFromString(name);
        NSMutableArray *ivars = [NSMutableArray array], *methods = [NSMutableArray array];
        unsigned count;
        Ivar *fields = class_copyIvarList(cls, &count);
        for (unsigned i = 0; i < count; i++) [ivars addObject:@{
            @"name": @(ivar_getName(fields[i])), @"type_encoding": @(ivar_getTypeEncoding(fields[i])),
            @"offset": @(ivar_getOffset(fields[i]))}];
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
        NSData *input = [NSData dataWithContentsOfFile:@(argv[1])];
        NSArray *fixtures = [NSJSONSerialization JSONObjectWithData:input options:0 error:NULL];
        NSMutableArray *results = [NSMutableArray array];
        for (NSDictionary *fixture in fixtures) {
            @try { [results addObject:@{@"input": fixture[@"input"], @"result": Evaluate(fixture[@"input"])}]; }
            @catch (NSException *exception) { [results addObject:@{@"input": fixture[@"input"], @"exception": exception.name}]; }
        }
        NSDictionary *report = @{@"fixtures": results, @"metadata": RuntimeMetadata()};
        NSData *json = [NSJSONSerialization dataWithJSONObject:report options:NSJSONWritingSortedKeys error:NULL];
        if (!json) return 3;
        fwrite(json.bytes, 1, json.length, stdout);
        fputc('\n', stdout);
    }
    return 0;
}
