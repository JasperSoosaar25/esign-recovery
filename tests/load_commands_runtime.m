// Native checks for original command pointer identity, aliasing and string copies.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ESignLoadCommands.h"

static NSDictionary *PointerFields(void) {
    return @{@"YYYLoadCommand": @[@"loadCmd"], @"YYYDylibCommand": @[@"loadCmd", @"dylibCmd"],
        @"YYYRPathCommand": @[@"loadCmd", @"rpathCmd"], @"YYYlinkeditDataCommand": @[@"loadCmd", @"linkeditDataCommand"],
        @"YYYSegmentCommand": @[@"loadCmd", @"segmentCommand", @"segmentCommand64"]};
}
static NSString *Setter(NSString *name) {
    return [NSString stringWithFormat:@"set%@%@:", [[name substringToIndex:1] uppercaseString], [name substringFromIndex:1]];
}
static void SetPointer(id object, NSString *property, void *pointer) {
    SEL selector = NSSelectorFromString(Setter(property));
    ((void (*)(id, SEL, void *))method_getImplementation(class_getInstanceMethod([object class], selector)))(object, selector, pointer);
}
static void *GetPointer(id object, NSString *property) {
    SEL selector = NSSelectorFromString(property);
    return ((void *(*)(id, SEL))method_getImplementation(class_getInstanceMethod([object class], selector)))(object, selector);
}
static void SetString(id object, NSString *property, id value) {
    SEL selector = NSSelectorFromString(Setter(property));
    ((void (*)(id, SEL, id))method_getImplementation(class_getInstanceMethod([object class], selector)))(object, selector, value);
}
static id GetString(id object, NSString *property) {
    return [object valueForKey:property];
}
static NSString *Hex(const void *pointer, NSUInteger count) {
    const unsigned char *bytes = pointer;
    NSMutableString *result = [NSMutableString string];
    for (NSUInteger i = 0; i < count; i++) [result appendFormat:@"%02x", bytes[i]];
    return result;
}
static NSDictionary *ReadCommand(YYYLoadCommand *command) { return @{@"cmd": @(command.cmd), @"cmdSize": @(command.cmdSize)}; }

static id Evaluate(NSDictionary *input) {
    NSString *op = input[@"op"];
    NSDictionary *copyFields = @{@"YYYDylibCommand": @"linkName", @"YYYRPathCommand": @"path"};
    if ([op isEqual:@"destructors"]) {
        NSMutableDictionary *results = [NSMutableDictionary dictionary];
        for (NSString *name in @[@"YYYDylibCommand", @"YYYRPathCommand"]) {
            YYYOffsetNode *object = [NSClassFromString(name) new];
            SetString(object, copyFields[name], @"owned-fixture");
            object.offset = 0x123456789;
            SEL selector = sel_registerName(".cxx_destruct");
            ((void (*)(id, SEL))method_getImplementation(class_getInstanceMethod([object class], selector)))(object, selector);
            results[name] = @{@"cleared": @(GetString(object, copyFields[name]) == nil), @"offset": @(object.offset)};
        }
        return results;
    }
    NSString *name = input[@"class"];
    YYYLoadCommand *object = [NSClassFromString(name) new];
    NSDictionary *initial = @{@"offset": @(object.offset), @"swap": @(object.shouldSwap)};
    object.offset = 0x123456789;
    object.shouldSwap = input[@"swap"] ? [input[@"swap"] boolValue] : YES;
    if ([op isEqual:@"copy"]) {
        id original = input[@"value"] == [NSNull null] ? nil : input[@"value"];
        BOOL mutable = [input[@"mutable"] boolValue] && original != nil;
        if (mutable) original = [original mutableCopy];
        NSString *field = copyFields[name];
        SetString(object, field, original);
        if (mutable) [(NSMutableString *)original setString:@"after-mutation"];
        id copied = GetString(object, field) ?: [NSNull null];
        SetString(object, field, nil);
        return @{@"initial": initial, @"copied": copied, @"cleared": @(GetString(object, field) == nil),
                 @"offset": @(object.offset), @"swap": @(object.shouldSwap)};
    }
    NSArray *fields = PointerFields()[name];
    if ([op isEqual:@"null_pointers"]) {
        NSMutableDictionary *nulls = [NSMutableDictionary dictionary];
        for (NSString *field in fields) { SetPointer(object, field, NULL); nulls[field] = @(GetPointer(object, field) == NULL); }
        return @{@"initial": initial, @"nulls": nulls, @"offset": @(object.offset), @"swap": @(object.shouldSwap)};
    }
    union { uint64_t alignment; unsigned char bytes[128]; } storage[3];
    uint32_t words[] = {[input[@"cmd"] unsignedIntValue], [input[@"cmdSize"] unsignedIntValue]};
    NSMutableDictionary *pointers = [NSMutableDictionary dictionary];
    for (NSUInteger i = 0; i < fields.count; i++) {
        memset(storage[i].bytes, 0xa5 + (int)i, sizeof(storage[i].bytes));
        memcpy(storage[i].bytes, words, sizeof(words));
        SetPointer(object, fields[i], storage[i].bytes);
    }
    NSDictionary *before = ReadCommand(object);
    for (NSUInteger i = 0; i < fields.count; i++) pointers[fields[i]] = @(GetPointer(object, fields[i]) == storage[i].bytes);
    words[0] ^= 0xffffffff;
    words[1] ^= 0x12345678;
    memcpy(storage[0].bytes, words, sizeof(words));
    return @{@"initial": initial, @"pointers": pointers, @"before": before, @"after": ReadCommand(object),
             @"loadBytes": Hex(storage[0].bytes, 8), @"offset": @(object.offset), @"swap": @(object.shouldSwap)};
}

static NSArray *RuntimeMetadata(void) {
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *name in @[@"YYYOffsetNode", @"YYYLoadCommand", @"YYYDylibCommand", @"YYYRPathCommand", @"YYYlinkeditDataCommand", @"YYYSegmentCommand"]) {
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
