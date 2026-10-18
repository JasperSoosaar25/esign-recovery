// Reviewed translations of ESign 5.0.2 original instruction bodies.
// These navigation names are new; the original native block names are unknown.
// This declares no replacement YYYArchO class and is not a complete signer.
#import <Foundation/Foundation.h>

FOUNDATION_EXPORT void ESignRecoveredRequirementWord(NSMutableData *data, uint64_t value);
FOUNDATION_EXPORT void ESignRecoveredRequirementString(NSMutableData *data, NSString *value);
FOUNDATION_EXPORT void ESignRecoveredRequirementBytes(NSMutableData *data, const void *bytes, uint32_t length);
FOUNDATION_EXPORT NSData *ESignRecoveredRequirementsSlot(NSString *bundleID, NSString *subjectCN);
