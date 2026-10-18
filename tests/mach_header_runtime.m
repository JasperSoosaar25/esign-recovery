// Native checks for original-derived header reads/writes and realized layout.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ESignMachHeader.h"

static NSString *Hex(const void *pointer, NSUInteger length) {
    const unsigned char *bytes = pointer;
    NSMutableString *result = [NSMutableString string];
    for (NSUInteger i = 0; i < length; i++) [result appendFormat:@"%02x", bytes[i]];
    return result;
}
static NSData *Unhex(NSString *hex) {
    NSMutableData *data = [NSMutableData data];
    for (NSUInteger i = 0; i < hex.length; i += 2) {
        unsigned int value = 0;
        [[NSScanner scannerWithString:[hex substringWithRange:NSMakeRange(i, 2)]] scanHexInt:&value];
        unsigned char byte = (unsigned char)value;
        [data appendBytes:&byte length:1];
    }
    return data;
}
static NSDictionary *Fields(YYYMachHeader *header) {
    return @{@"magic": @(header.magic), @"filetype": @(header.filetype),
             @"ncmds": @(header.ncmds), @"sizeofcmds": @(header.sizeofcmds)};
}
static id Evaluate(NSDictionary *input) {
    NSString *op = input[@"op"];
    BOOL isNode = [op isEqual:@"node"];
    YYYOffsetNode *node = isNode ? [YYYOffsetNode new] : [YYYMachHeader new];
    node.offset = (long long)UINT64_C(0xa5a5a5a5a5a5a5a5);
    node.shouldSwap = YES;
    node = [node init];
    NSDictionary *initial = @{@"offset": [NSString stringWithFormat:@"%lld", node.offset], @"swap": @(node.shouldSwap)};
    YYYMachHeader *header = isNode ? nil : (YYYMachHeader *)node;
    if ([op isEqual:@"empty_header"]) {
        return @{@"initial": initial, @"header_size": @(header.header_size),
            @"load_commands_offset": [NSString stringWithFormat:@"%lld", header.load_commands_offset],
            @"has32": @(header.machHeader != NULL), @"has64": @(header.machHeader64 != NULL)};
    }
    node.offset = [input[@"offset"] longLongValue];
    node.shouldSwap = [input[@"swap"] boolValue];
    NSMutableDictionary *result = [@{@"initial": initial,
        @"offset": [NSString stringWithFormat:@"%lld", node.offset], @"swap": @(node.shouldSwap)} mutableCopy];
    if (isNode) return result;
    struct mach_header h32;
    struct mach_header_64 h64;
    [Unhex(input[@"h32"]) getBytes:&h32 length:sizeof(h32)];
    [Unhex(input[@"h64"]) getBytes:&h64 length:sizeof(h64)];
    header.machHeader = [input[@"mode"] isEqual:@"64"] ? NULL : &h32;
    header.machHeader64 = [input[@"mode"] isEqual:@"32"] ? NULL : &h64;
    [result addEntriesFromDictionary:@{@"has32": @(header.machHeader == &h32), @"has64": @(header.machHeader64 == &h64),
        @"header_size": @(header.header_size), @"load_commands_offset": [NSString stringWithFormat:@"%lld", header.load_commands_offset],
        @"before": Fields(header)}];
    header.ncmds = [input[@"ncmds"] unsignedIntValue];
    header.sizeofcmds = [input[@"sizeofcmds"] unsignedIntValue];
    [result addEntriesFromDictionary:@{@"after": Fields(header), @"h32_after": Hex(&h32, sizeof(h32)),
        @"h64_after": Hex(&h64, sizeof(h64)), @"offset_after": [NSString stringWithFormat:@"%lld", node.offset],
        @"swap_after": @(node.shouldSwap)}];
    return result;
}

static NSArray *RuntimeMetadata(void) {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *name in @[@"YYYOffsetNode", @"YYYMachHeader"]) {
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
