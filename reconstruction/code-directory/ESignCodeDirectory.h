// Reviewed translations of ESign 5.0.2 bodies; new C navigation names.
// This protocol describes original getter dependencies, not a replacement app class.
#import <Foundation/Foundation.h>
@protocol ESignRecoveredArchitectureInputs <NSObject>
- (uint32_t)codeLength;
- (uint64_t)execSegLimit;
- (int64_t)offset;
- (NSFileHandle *)machoFileHandle;
@end
FOUNDATION_EXPORT NSData *ESignRecoveredSHA1(NSData *data);
FOUNDATION_EXPORT NSData *ESignRecoveredSHA256(NSData *data);
FOUNDATION_EXPORT NSUInteger ESignRecoveredUTF8Length(NSString *string);
FOUNDATION_EXPORT NSData *ESignRecoveredCodeDirectory(id<ESignRecoveredArchitectureInputs> architecture,
    BOOL sha256, NSString *bundleID, NSString *teamID, NSData *infoPlist,
    NSData *requirements, NSData *resources, NSData *entitlements, NSData *derEntitlements,
    uint64_t execFlags);
