// Apple Foundation checks for two original native function translations.
#import <Foundation/Foundation.h>
#import "ESignRecursiveDER.h"
#include <stdlib.h>

@interface TestDERDictionary : NSDictionary
@property(nonatomic, copy) NSArray *pairs;
- (id)initWithPairs:(NSArray *)pairs;
@end
@implementation TestDERDictionary
- (id)initWithPairs:(NSArray *)pairs { self = [super init]; if (self) _pairs = [pairs copy]; return self; }
- (NSUInteger)count { return self.pairs.count; }
- (id)objectForKey:(id)key {
    for (NSArray *pair in self.pairs) if ([pair[0] isEqual:key]) return pair[1];
    return nil;
}
- (NSArray *)allKeys {
    NSMutableArray *keys = [NSMutableArray array];
    for (NSArray *pair in self.pairs) [keys addObject:pair[0]];
    return keys;
}
- (NSEnumerator *)keyEnumerator { return self.allKeys.objectEnumerator; }
@end

static id MakeInput(NSDictionary *spec) {
    NSString *kind = spec[@"kind"];
    if ([kind isEqual:@"nil"]) return nil;
    if ([kind isEqual:@"bool"]) return @([spec[@"value"] boolValue]);
    if ([kind isEqual:@"number"]) {
        NSString *value = spec[@"value"];
        return [value hasPrefix:@"-"] ? @([value longLongValue]) : @(strtoull(value.UTF8String, NULL, 10));
    }
    if ([kind isEqual:@"fraction"] || [kind isEqual:@"string"]) return spec[@"value"];
    if ([kind isEqual:@"array"]) {
        NSMutableArray *values = [NSMutableArray array];
        for (NSDictionary *item in spec[@"items"]) [values addObject:MakeInput(item) ?: [NSNull null]];
        return values;
    }
    if ([kind isEqual:@"dictionary"]) {
        NSMutableArray *pairs = [NSMutableArray array];
        for (NSArray *pair in spec[@"pairs"]) [pairs addObject:@[MakeInput(pair[0]), MakeInput(pair[1])]];
        if (pairs.count < 2) return pairs.count ? @{pairs[0][0]: pairs[0][1]} : @{};
        return [[TestDERDictionary alloc] initWithPairs:pairs];
    }
    return [NSNull null];
}

static NSString *Hex(NSData *data) {
    const unsigned char *bytes = data.bytes;
    NSMutableString *result = [NSMutableString string];
    for (NSUInteger i = 0; i < data.length; i++) [result appendFormat:@"%02x", bytes[i]];
    return result;
}

int main(int argc, const char *argv[]) {
    @autoreleasepool {
        if (argc != 2) return 2;
        NSArray *fixtures = [NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
        NSMutableArray *results = [NSMutableArray array];
        for (NSDictionary *fixture in fixtures) {
            // The bounded original zero probe is explicitly excluded from
            // native source comparisons; no result is copied or fabricated.
            if ([fixture[@"unverified_original_input"] boolValue]) continue;
            NSDictionary *input = fixture[@"input"];
            @try {
                NSData *data = [input[@"op"] isEqual:@"length"] ?
                    ESignRecoveredDERLength(strtoull([input[@"value"] UTF8String], NULL, 10)) :
                    ESignRecoveredDEREncode(MakeInput(input[@"value"]));
                [results addObject:@{@"input": input, @"result": @{@"data": Hex(data)}}];
            } @catch (NSException *exception) { [results addObject:@{@"input": input, @"exception": exception.name}]; }
        }
        NSData *json = [NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];
        if (!json) return 3;
        fwrite(json.bytes, 1, json.length, stdout);
        fputc('\n', stdout);
    }
    return 0;
}
