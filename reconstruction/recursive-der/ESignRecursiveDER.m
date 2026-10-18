// Reviewed translations of two original native functions, not a new DER design.
#import "ESignRecursiveDER.h"
#import <CoreFoundation/CoreFoundation.h>

NSData *ESignRecoveredDERLength(uint64_t value) {
    NSMutableData *result = [NSMutableData data];
    if (value < 128) {
        unsigned char byte = (unsigned char)value;
        [result appendBytes:&byte length:1];
    } else {
        unsigned count = (71u - (unsigned)__builtin_clzll(value)) / 8u;
        unsigned char marker = (unsigned char)(0x80u | count);
        [result appendBytes:&marker length:1];
        for (unsigned shift = count * 8u; shift != 0;) {
            shift -= 8;
            unsigned char byte = (unsigned char)(value >> (shift & 63u));
            [result appendBytes:&byte length:1];
        }
    }
    return result;
}

NSData *ESignRecoveredDEREncode(id value) {
    NSMutableData *result = [NSMutableData data];
    if ([value isKindOfClass:[NSNumber class]]) {
        CFTypeID booleanType = CFBooleanGetTypeID();
        CFTypeID valueType = CFGetTypeID((__bridge CFTypeRef)value);
        if (valueType == booleanType) {
            unsigned char bytes[] = {1, 1, [value boolValue]};
            [result appendBytes:&bytes[0] length:1];
            [result appendBytes:&bytes[1] length:1];
            [result appendBytes:&bytes[2] length:1];
        } else {
            uint64_t number = [value unsignedLongLongValue];
            unsigned char tag = 2;
            [result appendBytes:&tag length:1];
            // Original passes the number itself here, not its byte width.
            [result appendData:ESignRecoveredDERLength(number)];
            unsigned leadingZeros = number ? (unsigned)__builtin_clzll(number) : 64u;
            uint32_t shift = (71u - leadingZeros) & 0xf8u;
            // Preserve original do/while and wrapping shift. A zero NSNumber
            // did not finish the bounded original probe; native zero parity is
            // explicitly unverified and that input is excluded from tests.
            do {
                shift -= 8u;
                unsigned char byte = (unsigned char)(number >> (shift & 63u));
                [result appendBytes:&byte length:1];
            } while (shift != 0);
        }
    } else if ([value isKindOfClass:[NSArray class]]) {
        NSMutableData *body = [NSMutableData data];
        int32_t index = 0;
        while ([value count] > (uint64_t)(int64_t)index) {
            [body appendData:ESignRecoveredDEREncode([value objectAtIndexedSubscript:(NSUInteger)(int64_t)index])];
            index = (int32_t)((uint32_t)index + 1u);
        }
        unsigned char tag = 0x30;
        [result appendBytes:&tag length:1];
        [result appendData:ESignRecoveredDERLength(body.length)];
        [result appendData:body];
    } else if ([value isKindOfClass:[NSDictionary class]]) {
        NSArray *keys = [value allKeys];
        NSMutableData *body = [NSMutableData data];
        for (id key in keys) {
            NSData *encoded = ESignRecoveredDEREncode([value objectForKeyedSubscript:key]);
            unsigned char tag = 0x30;
            [body appendBytes:&tag length:1];
            [body appendData:ESignRecoveredDERLength([key length] + encoded.length + 2)];
            tag = 0x0c;
            [body appendBytes:&tag length:1];
            [body appendData:ESignRecoveredDERLength([key length])];
            [body appendData:[key dataUsingEncoding:NSUTF8StringEncoding]];
            [body appendData:encoded];
        }
        unsigned char tag = 0x31;
        [result appendBytes:&tag length:1];
        [result appendData:ESignRecoveredDERLength(body.length)];
        [result appendData:body];
    } else if ([value isKindOfClass:[NSString class]]) {
        unsigned char tag = 0x0c;
        [result appendBytes:&tag length:1];
        // Original NSString length is UTF-16 units, despite its UTF-8 payload.
        [result appendData:ESignRecoveredDERLength([value length])];
        [result appendData:[value dataUsingEncoding:NSUTF8StringEncoding]];
    }
    return result;
}
