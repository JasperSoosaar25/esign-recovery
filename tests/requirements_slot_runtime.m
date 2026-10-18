#import <Foundation/Foundation.h>
#import "ESignRequirementsSlot.h"
#include <stdlib.h>
static NSString *hex(NSData *data) {
    NSMutableString *result = [NSMutableString string];
    const uint8_t *bytes = [data bytes];
    for (NSUInteger i = 0; i < [data length]; i++) [result appendFormat:@"%02x", bytes[i]];
    return result;
}
static NSData *unhex(NSString *text) {
    NSMutableData *result = [NSMutableData data];
    for (NSUInteger i = 0; i < [text length]; i += 2) {
        unsigned value = 0;
        [[NSScanner scannerWithString:[text substringWithRange:NSMakeRange(i, 2)]] scanHexInt:&value];
        uint8_t byte = value;
        [result appendBytes:&byte length:1];
    }
    return result;
}
static id nullable(id value) { return value == [NSNull null] ? nil : value; }
int main(int argc, const char **argv) {
    @autoreleasepool {
        if (argc != 2) return 2;
        NSArray *fixtures = [NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];
        NSMutableArray *results = [NSMutableArray array];
        for (NSDictionary *fixture in fixtures) {
            NSDictionary *input = fixture[@"input"];
            NSMutableDictionary *row = [@{@"input":input} mutableCopy];
            @try {
                NSString *op = input[@"op"];
                NSData *output;
                if ([op isEqual:@"slot"]) output = ESignRecoveredRequirementsSlot(nullable(input[@"bundle_id"]), nullable(input[@"subject_cn"]));
                else {
                    NSMutableData *data = [[@"prefix" dataUsingEncoding:NSUTF8StringEncoding] mutableCopy];
                    if ([op isEqual:@"word"]) ESignRecoveredRequirementWord(data, strtoull([input[@"value"] UTF8String], NULL, 10));
                    else if ([op isEqual:@"string"]) ESignRecoveredRequirementString(data, nullable(input[@"value"]));
                    else { NSData *bytes = unhex(input[@"data"]); ESignRecoveredRequirementBytes(data, [bytes bytes], (uint32_t)[bytes length]); }
                    output = data;
                }
                row[@"result"] = @{@"data":hex(output)};
            } @catch (NSException *exception) { row[@"exception"] = exception.name; }
            [results addObject:row];
        }
        NSData *json = [NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];
        fwrite([json bytes], 1, [json length], stdout);
    }
    return 0;
}
