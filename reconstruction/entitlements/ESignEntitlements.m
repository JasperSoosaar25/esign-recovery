// Reviewed reconstruction of all 41 original methods and enumeration block.
// This preserves the original encoding, including its length truncations.
#import "ESignEntitlements.h"

static uint32_t FourReadSwap(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    return (a >> 24) | ((b >> 8) & 0xff00) | ((c << 8) & 0xff0000) | (d << 24);
}

@implementation YYYEntitlementValue
@synthesize type = _type, length = _length, origValue = _origValue, value = _value;
+ (id)entitlementValueWithValue:(id)value {
    YYYEntitlementValue *result = [YYYEntitlementValue new];
    result.origValue = value;
    if ([value isKindOfClass:[NSNumber class]]) {
        result.type = 1;
        unsigned char boolean = [value boolValue];
        result.value = [NSData dataWithBytes:&boolean length:1];
    } else {
        result.type = 12;
        result.value = [value dataUsingEncoding:NSUTF8StringEncoding];
    }
    result.length = (unsigned char)result.value.length;
    return result;
}
- (unsigned char)totalLength { return (unsigned char)(self.length + 2); }
- (id)data {
    NSMutableData *result = [NSMutableData data];
    [result appendBytes:&_type length:1];
    [result appendBytes:&_length length:1];
    [result appendData:self.value];
    return result;
}
@end

@implementation YYYEntitlementBlob
@synthesize padding = _padding, length = _length, isArray = _isArray, key = _key, values = _values;
+ (id)blobWithKey:(id)key value:(id)value {
    YYYEntitlementBlob *result = [YYYEntitlementBlob new];
    result.padding = 0x30;
    result.key = [YYYEntitlementValue entitlementValueWithValue:key];
    unsigned char keyLength = result.key.totalLength;
    result.length = (unsigned char)(result.length + keyLength);
    if ([value isKindOfClass:[NSArray class]]) {
        NSMutableArray *values = [NSMutableArray array];
        for (id item in value) {
            YYYEntitlementValue *encoded = [YYYEntitlementValue entitlementValueWithValue:item];
            [values addObject:encoded];
            unsigned char count = encoded.totalLength;
            result.length = (unsigned char)(result.length + count);
        }
        result.length = (unsigned char)(result.length + 2);
        result.isArray = YES;
        result.values = values;
    } else {
        YYYEntitlementValue *encoded = [YYYEntitlementValue entitlementValueWithValue:value];
        result.values = @[encoded];
        unsigned char count = encoded.totalLength;
        result.length = (unsigned char)(result.length + count);
    }
    return result;
}
- (unsigned char)totalLenght {
    if (self.length >> 7) return (unsigned char)(self.length + 3);
    return (unsigned char)(self.length + 2);
}
- (id)data {
    NSMutableData *result = [NSMutableData data];
    [result appendBytes:&_padding length:1];
    if (self.length >> 7) {
        unsigned char marker = 0x81;
        [result appendBytes:&marker length:1];
    }
    [result appendBytes:&_length length:1];
    [result appendData:self.key.data];
    if (self.isArray) {
        unsigned char marker = 0x30;
        uint32_t count = 0;
        for (YYYEntitlementValue *value in self.values) count += value.totalLength;
        unsigned char byteCount = (unsigned char)count;
        [result appendBytes:&marker length:1];
        [result appendBytes:&byteCount length:1];
    }
    for (YYYEntitlementValue *value in self.values) [result appendData:value.data];
    return result;
}
@end

@implementation YYYEntitlementsSuperBlob
@synthesize magic = _magic, length = _length, byte1 = _byte1, byte2 = _byte2, blobsLength = _blobsLength, blobs = _blobs;
+ (id)supperBlobWithPlist:(id)plist {
    if (!plist || ![plist isKindOfClass:[NSDictionary class]]) return nil;
    YYYEntitlementsSuperBlob *result = [YYYEntitlementsSuperBlob new];
    result.magic = 0xfade7172;
    result.byte1 = 0x31;
    NSMutableArray *blobs = [NSMutableArray array];
    __block uint32_t count = 0;
    [plist enumerateKeysAndObjectsUsingBlock:^(id key, id value, BOOL *stop) {
        (void)stop;
        YYYEntitlementBlob *blob = [YYYEntitlementBlob blobWithKey:key value:value];
        [blobs addObject:blob];
        count += blob.totalLenght;
    }];
    result.blobs = blobs;
    result.blobsLength = (unsigned short)count;
    if (count > 255) { result.length = count + 12; result.byte2 = 0x82; }
    else { result.length = count + 11; result.byte2 = 0x81; }
    return result;
}
- (id)data {
    NSMutableData *result = [NSMutableData data];
    uint32_t a = self.magic, b = self.magic, c = self.magic, d = self.magic;
    uint32_t magic = FourReadSwap(a, b, c, d);
    uint32_t e = self.length, f = self.length, g = self.length, h = self.length;
    uint32_t length = FourReadSwap(e, f, g, h);
    [result appendBytes:&magic length:4];
    [result appendBytes:&length length:4];
    [result appendBytes:&_byte1 length:1];
    [result appendBytes:&_byte2 length:1];
    if (self.blobsLength > 255) {
        // The original live path evaluates this getter twice after the test.
        uint16_t high = self.blobsLength, low = self.blobsLength;
        uint16_t swapped = (uint16_t)((high >> 8) | (low << 8));
        [result appendBytes:&swapped length:2];
    } else [result appendBytes:&_blobsLength length:1];
    for (YYYEntitlementBlob *blob in self.blobs) [result appendData:blob.data];
    return result;
}
@end
