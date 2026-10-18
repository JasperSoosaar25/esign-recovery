// Native fixture and ABI checks for ESign's original-derived entitlement codec.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ESignEntitlements.h"

static id Nullable(id value) { return value ?: [NSNull null]; }
static id Input(id value) { return value == [NSNull null] ? nil : value; }
static id Hex(NSData *data) {
    if (!data) return [NSNull null];
    NSMutableString *result = [NSMutableString string];
    const unsigned char *bytes = data.bytes;
    for (NSUInteger i = 0; i < data.length; i++) [result appendFormat:@"%02x", bytes[i]];
    return result;
}

// Dictionary enumeration order is external Foundation behavior. Controlled
// pairs make the native callback order identical to the explicit ARM64 model.
@interface TestOrderedDictionary : NSDictionary
@property(nonatomic, copy) NSArray *pairs;
- (id)initWithPairs:(NSArray *)pairs;
@end
@implementation TestOrderedDictionary
- (id)initWithPairs:(NSArray *)pairs { self = [super init]; if (self) _pairs = [pairs copy]; return self; }
- (NSUInteger)count { return self.pairs.count; }
- (id)objectForKey:(id)key {
    for (NSArray *pair in self.pairs) if ([pair[0] isEqual:key]) return pair[1];
    return nil;
}
- (NSEnumerator *)keyEnumerator {
    NSMutableArray *keys = [NSMutableArray array];
    for (NSArray *pair in self.pairs) [keys addObject:pair[0]];
    return keys.objectEnumerator;
}
- (void)enumerateKeysAndObjectsUsingBlock:(void (NS_NOESCAPE ^)(id, id, BOOL *))block {
    BOOL stop = NO;
    for (NSArray *pair in self.pairs) { block(pair[0], pair[1], &stop); if (stop) break; }
}
@end

static id Describe(id object) {
    if (!object) return [NSNull null];
    if ([object isKindOfClass:[YYYEntitlementValue class]]) {
        YYYEntitlementValue *value = object;
        return @{@"type": @(value.type), @"length": @(value.length), @"totalLength": @(value.totalLength),
            @"value": Hex(value.value), @"origValue": Nullable(value.origValue), @"data": Hex(value.data)};
    }
    if ([object isKindOfClass:[YYYEntitlementBlob class]]) {
        YYYEntitlementBlob *blob = object;
        NSMutableArray *values = [NSMutableArray array];
        for (id value in blob.values) [values addObject:Describe(value)];
        return @{@"padding": @(blob.padding), @"length": @(blob.length), @"isArray": @(blob.isArray),
            @"key": Describe(blob.key), @"values": blob.values ? values : [NSNull null],
            @"totalLenght": @(blob.totalLenght), @"data": Hex(blob.data)};
    }
    YYYEntitlementsSuperBlob *superBlob = object;
    NSMutableArray *blobs = [NSMutableArray array];
    for (id blob in superBlob.blobs) [blobs addObject:Describe(blob)];
    return @{@"magic": @(superBlob.magic), @"length": @(superBlob.length), @"byte1": @(superBlob.byte1),
        @"byte2": @(superBlob.byte2), @"blobsLength": @(superBlob.blobsLength),
        @"blobs": superBlob.blobs ? blobs : [NSNull null], @"data": Hex(superBlob.data)};
}

@interface TestEntitlementHeaders : YYYEntitlementsSuperBlob
@property(nonatomic) NSUInteger magicReads, lengthReads, blobsReads;
@end
@implementation TestEntitlementHeaders
- (unsigned int)magic {
    static const uint32_t values[] = {0x12345678, 0x89abcdef, 0x11223344, 0x55667788};
    return values[self.magicReads++ % 4];
}
- (unsigned int)length {
    static const uint32_t values[] = {0xfedcba98, 0x76543210, 0x01234567, 0x89abcdef};
    return values[self.lengthReads++ % 4];
}
- (unsigned short)blobsLength {
    static const uint16_t values[] = {0x1234, 0x5678, 0x9abc, 0xdef0, 0x1357};
    return values[self.blobsReads++ % 5];
}
@end

static id Evaluate(NSDictionary *input) {
    NSString *op = input[@"op"];
    id object;
    if ([op isEqual:@"value"]) object = [YYYEntitlementValue entitlementValueWithValue:Input(input[@"value"])];
    else if ([op isEqual:@"blob"]) object = [YYYEntitlementBlob blobWithKey:Input(input[@"key"]) value:Input(input[@"value"])];
    else if ([op isEqual:@"super"]) {
        NSArray *pairs = input[@"pairs"];
        // Empty and single-entry cases also exercise ordinary NSDictionary.
        NSDictionary *dictionary = pairs.count < 2 ? (pairs.count ? @{pairs[0][0]: pairs[0][1]} : @{}) :
            [[TestOrderedDictionary alloc] initWithPairs:pairs];
        object = [YYYEntitlementsSuperBlob supperBlobWithPlist:dictionary];
    } else if ([op isEqual:@"invalid_super"]) object = [YYYEntitlementsSuperBlob supperBlobWithPlist:Input(input[@"value"])];
    else if ([op isEqual:@"raw_value"]) {
        YYYEntitlementValue *value = [YYYEntitlementValue new];
        value.type = [input[@"type"] unsignedCharValue];
        value.length = [input[@"length"] unsignedCharValue];
        value.value = [@"raw" dataUsingEncoding:NSUTF8StringEncoding];
        value.origValue = @"raw-fixture";
        object = value;
    } else if ([op isEqual:@"raw_blob"]) {
        YYYEntitlementBlob *blob = [YYYEntitlementBlob new];
        blob.padding = 0xa5;
        blob.length = [input[@"length"] unsignedCharValue];
        blob.isArray = [input[@"isArray"] boolValue];
        blob.key = [YYYEntitlementValue entitlementValueWithValue:@"k"];
        blob.values = @[[YYYEntitlementValue entitlementValueWithValue:@YES]];
        object = blob;
    } else if ([op isEqual:@"raw_super"] || [op isEqual:@"header_reads"]) {
        BOOL headers = [op isEqual:@"header_reads"];
        YYYEntitlementsSuperBlob *superBlob = headers ? [TestEntitlementHeaders new] : [YYYEntitlementsSuperBlob new];
        superBlob.magic = 0x12345678;
        superBlob.length = 0x89abcdef;
        superBlob.byte1 = 0xa5;
        superBlob.byte2 = 0x5a;
        superBlob.blobsLength = [input[@"blobsLength"] unsignedShortValue];
        superBlob.blobs = @[];
        if (headers) {
            TestEntitlementHeaders *test = (TestEntitlementHeaders *)superBlob;
            NSData *data = test.data;
            return @{@"data": Hex(data), @"reads": @{@"magic": @(test.magicReads), @"length": @(test.lengthReads),
                                                   @"blobsLength": @(test.blobsReads)}};
        }
        object = superBlob;
    } else if ([op isEqual:@"destructors"]) {
        NSMutableDictionary *results = [NSMutableDictionary dictionary];
        for (NSString *name in @[@"YYYEntitlementValue", @"YYYEntitlementBlob", @"YYYEntitlementsSuperBlob"]) {
            Class cls = NSClassFromString(name);
            id instance = [cls new];
            unsigned count;
            Ivar *ivars = class_copyIvarList(cls, &count);
            for (unsigned i = 0; i < count; i++) if (ivar_getTypeEncoding(ivars[i])[0] == '@')
                [instance setValue:[NSObject new] forKey:[@(ivar_getName(ivars[i])) substringFromIndex:1]];
            SEL selector = sel_registerName(".cxx_destruct");
            ((void (*)(id, SEL))method_getImplementation(class_getInstanceMethod(cls, selector)))(instance, selector);
            NSMutableDictionary *fields = [NSMutableDictionary dictionary];
            for (unsigned i = 0; i < count; i++) if (ivar_getTypeEncoding(ivars[i])[0] == '@')
                fields[@(ivar_getName(ivars[i]))] = @(object_getIvar(instance, ivars[i]) != nil);
            free(ivars);
            results[name] = fields;
        }
        return results;
    } else [NSException raise:@"InvalidFixture" format:@"Unknown operation %@", op];
    return Describe(object);
}

static NSArray *RuntimeMetadata(void) {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *name in @[@"YYYEntitlementValue", @"YYYEntitlementBlob", @"YYYEntitlementsSuperBlob"]) {
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
        for (NSDictionary *fixture in fixtures) {
            @try { [results addObject:@{@"input": fixture[@"input"], @"result": Evaluate(fixture[@"input"])}]; }
            @catch (NSException *exception) { [results addObject:@{@"input": fixture[@"input"], @"exception": exception.name}]; }
        }
        NSData *json = [NSJSONSerialization dataWithJSONObject:@{@"fixtures": results, @"metadata": RuntimeMetadata()}
                                                     options:NSJSONWritingSortedKeys error:NULL];
        if (!json) return 3;
        fwrite(json.bytes, 1, json.length, stdout);
        fputc('\n', stdout);
    }
    return 0;
}
