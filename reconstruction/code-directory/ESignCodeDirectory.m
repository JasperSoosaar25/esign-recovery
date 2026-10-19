#import "ESignCodeDirectory.h"
#import <CommonCrypto/CommonDigest.h>
#include <math.h>

// Original helpers 0x100776324 and 0x100776104. Nil is a zero-filled digest;
// non-nil empty NSData is hashed. The original CC_LONG parameter is 32 bits.
NSData *ESignRecoveredSHA1(NSData *data) {
    if (!data) return [[NSMutableData dataWithLength:20] copy];
    unsigned char digest[20];
    CC_SHA1([data bytes], (CC_LONG)[data length], digest);
    return [[NSData alloc] initWithBytes:digest length:20];
}
NSData *ESignRecoveredSHA256(NSData *data) {
    if (!data) return [[NSMutableData dataWithLength:32] copy];
    unsigned char digest[32];
    CC_SHA256([data bytes], (CC_LONG)[data length], digest);
    return [[NSData alloc] initWithBytes:digest length:32];
}

// Original -[NSString(Code) y_length], 0x10076aa20.
NSUInteger ESignRecoveredUTF8Length(NSString *string) {
    return [[string dataUsingEncoding:NSUTF8StringEncoding] length];
}
// Original signature-assembly captured block invoke 0x10077cb50. Its original
// block captures the dictionary at +32 and receives the key in x1.
BOOL ESignRecoveredEntitlementFlag(NSDictionary *entitlements, NSString *key) {
    id value = entitlements[key];
    if (value && [value isKindOfClass:[NSNumber class]]) return [value boolValue];
    return NO;
}
static void word(uint8_t *bytes, uint32_t value) {
    bytes[0] = value >> 24; bytes[1] = value >> 16;
    bytes[2] = value >> 8; bytes[3] = value;
}
static NSData *hashSlot(NSData *data, BOOL sha256) {
    // Original global block 0x100776570 and captured block 0x100775ef4.
    return sha256 ? ESignRecoveredSHA256(data) : ESignRecoveredSHA1(data);
}

// Original -[YYYArchO generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:
// infoPlistData:requirementsSlot:codeResources:entitlementsSlot:
// entitlementsSlotDER:execSegFlags:], 0x10077473c.
NSData *ESignRecoveredCodeDirectory(id<ESignRecoveredArchitectureInputs> architecture,
    BOOL sha256, NSString *bundleID, NSString *teamID, NSData *infoPlist,
    NSData *requirements, NSData *resources, NSData *entitlements, NSData *derEntitlements,
    uint64_t execFlags) {
    if (!teamID) return nil;
    uint8_t header[88] = {0};
    word(header, 0xfade0c02);
    word(header + 8, 0x20400);
    // The instructions issue four separate codeLength getters for these bytes.
    header[32] = [architecture codeLength] >> 24;
    header[33] = [architecture codeLength] >> 16;
    header[34] = [architecture codeLength] >> 8;
    header[35] = [architecture codeLength];
    uint32_t hashSize = sha256 ? 32 : 20;
    header[36] = hashSize;
    header[37] = sha256 ? 2 : 1;
    header[39] = 12;
    // Likewise, eight separate execSegLimit messages are preserved.
    header[72] = [architecture execSegLimit] >> 56;
    header[73] = [architecture execSegLimit] >> 48;
    header[74] = [architecture execSegLimit] >> 40;
    header[75] = [architecture execSegLimit] >> 32;
    header[76] = [architecture execSegLimit] >> 24;
    header[77] = [architecture execSegLimit] >> 16;
    header[78] = [architecture execSegLimit] >> 8;
    header[79] = [architecture execSegLimit];
    for (unsigned i = 0; i < 8; i++) header[80 + i] = execFlags >> (56 - 8 * i);
    NSMutableData *zero = [NSMutableData dataWithLength:hashSize];
    NSMutableArray *special = [NSMutableArray array];
    [special addObject:hashSlot(derEntitlements, sha256)];
    [special addObject:zero];
    [special addObject:hashSlot(entitlements, sha256)];
    [special addObject:zero];
    [special addObject:hashSlot(resources, sha256)];
    [special addObject:hashSlot(requirements, sha256)];
    [special addObject:hashSlot(infoPlist, sha256)];
    uint32_t pageSize = (uint32_t)ldexp(1.0, header[39]);
    uint32_t completePages = [architecture codeLength] / pageSize;
    uint32_t remainder = [architecture codeLength] % pageSize;
    uint32_t codeSlots = completePages + (remainder != 0);
    uint32_t headerSize = 88;
    uint32_t bundleLength = (uint32_t)ESignRecoveredUTF8Length(bundleID);
    uint32_t teamLength = (uint32_t)ESignRecoveredUTF8Length(teamID) + 1;
    uint32_t teamOffset = headerSize + bundleLength + 1;
    uint32_t hashOffset = teamOffset + (uint32_t)[special count] * hashSize + teamLength;
    uint32_t totalLength = hashOffset + codeSlots * hashSize;
    word(header + 4, totalLength);
    word(header + 16, hashOffset);
    word(header + 20, headerSize);
    header[24] = (uint32_t)[special count] >> 24;
    header[25] = (uint32_t)[special count] >> 16;
    header[26] = (uint32_t)[special count] >> 8;
    header[27] = (uint32_t)[special count];
    word(header + 28, codeSlots);
    word(header + 48, teamOffset);
    NSMutableData *result = [NSMutableData data];
    [result appendBytes:header length:headerSize];
    [result appendData:[bundleID dataUsingEncoding:NSUTF8StringEncoding]];
    [result appendData:[NSMutableData dataWithLength:1]];
    [result appendData:[teamID dataUsingEncoding:NSUTF8StringEncoding]];
    [result appendData:[NSMutableData dataWithLength:1]];
    for (NSData *slot in special) [result appendData:slot];
    @autoreleasepool {
        for (uint32_t i = 0; i < completePages; i++) {
            NSFileHandle *handle = [architecture machoFileHandle];
            uint64_t position = (uint64_t)[architecture offset] + (uint32_t)(i * pageSize);
            [handle seekToFileOffset:position];
            NSData *page = [[architecture machoFileHandle] readDataOfLength:pageSize];
            [result appendData:hashSlot(page, sha256)];
        }
    }
    if (remainder) {
        NSFileHandle *handle = [architecture machoFileHandle];
        uint64_t position = (uint64_t)[architecture offset] + (uint32_t)(completePages * pageSize);
        [handle seekToFileOffset:position];
        NSData *page = [[architecture machoFileHandle] readDataOfLength:remainder];
        [result appendData:hashSlot(page, sha256)];
    }
    return result;
}
