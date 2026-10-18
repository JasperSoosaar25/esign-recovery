#import "ESignRequirementsSlot.h"
#import "../signature-blobs/ESignSignatureBlobs.h"

// Original block invoke 0x100777e78: x0 (the block) is unused.
void ESignRecoveredRequirementWord(NSMutableData *data, uint64_t value) {
    uint32_t word = (uint32_t)value;
    uint8_t bytes[4] = {word >> 24, word >> 16, word >> 8, word};
    [data appendBytes:bytes length:4];
}

// Original block invoke 0x100777f54. The prefix truncates to uint32_t;
// the payload and padding use the full NSData length.
void ESignRecoveredRequirementString(NSMutableData *data, NSString *value) {
    NSData *encoded = [value dataUsingEncoding:NSUTF8StringEncoding];
    ESignRecoveredRequirementWord(data, (uint32_t)[encoded length]);
    [data appendData:encoded];
    NSUInteger remainder = [encoded length] & 3;
    NSUInteger padding = remainder ? 4 - ([encoded length] & 3) : 0;
    if ((NSInteger)padding > 0) [data appendData:[NSMutableData dataWithLength:padding]];
}

// Original block invoke 0x1007781cc; length is a 32-bit input in the instructions.
void ESignRecoveredRequirementBytes(NSMutableData *data, const void *bytes, uint32_t length) {
    ESignRecoveredRequirementWord(data, length);
    [data appendBytes:bytes length:length];
    uint32_t remainder = length & 3;
    uint32_t padding = remainder ? 4 - remainder : 0;
    if (padding) [data appendData:[NSMutableData dataWithLength:padding]];
}

// -[YYYArchO generateSlotBuildRequirementsWithBundleId:subjectCN:] 0x100777638.
// self and _cmd are unused. Original decoded constants replace only the literal
// initialization obfuscation; no new requirement policy is introduced here.
NSData *ESignRecoveredRequirementsSlot(NSString *bundleID, NSString *subjectCN) {
    if (!bundleID || !subjectCN) {
        // The original calls strlen on fade0c010000000c00000000. Its first
        // zero is byte 4, so it returns four bytes, not an empty 12-byte vector.
        const uint8_t missing[] = {0xfa, 0xde, 0x0c, 0x01};
        return [NSData dataWithBytes:missing length:sizeof(missing)];
    }
    NSMutableData *body = [NSMutableData data];
    ESignRecoveredRequirementWord(body, 1);
    ESignRecoveredRequirementWord(body, 6);
    ESignRecoveredRequirementWord(body, 2);
    ESignRecoveredRequirementString(body, bundleID);
    ESignRecoveredRequirementWord(body, 6);
    ESignRecoveredRequirementWord(body, 15);
    ESignRecoveredRequirementWord(body, 6);
    ESignRecoveredRequirementWord(body, 11);
    ESignRecoveredRequirementWord(body, 0);
    ESignRecoveredRequirementString(body, @"subject.CN");
    ESignRecoveredRequirementWord(body, 1);
    ESignRecoveredRequirementString(body, subjectCN);
    ESignRecoveredRequirementWord(body, 14);
    ESignRecoveredRequirementWord(body, 1);
    const uint8_t oid[] = {0x2a,0x86,0x48,0x86,0xf7,0x63,0x64,0x06,0x02,0x01};
    ESignRecoveredRequirementBytes(body, oid, sizeof(oid));
    ESignRecoveredRequirementWord(body, 0);
    YYYBlob *requirement = [YYYBlob blobWithMagic:0xfade0c00 data:body];
    YYYSuperBlob *requirements = [YYYSuperBlob superBlobWithMagic:0xfade0c01];
    YYYBlobIndex *index = [YYYBlobIndex blobIndexWithType:3 data:[requirement blobData]];
    [requirements addBlobIndex:index];
    return [requirements superBlobData];
}
