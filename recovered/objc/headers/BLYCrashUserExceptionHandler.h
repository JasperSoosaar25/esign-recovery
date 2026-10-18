// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95370
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashUserExceptionHandler : BLYCrashHandler
// IMP 0x10063ea5c | @16@0:8
- (id)init;
// IMP 0x10063ea90 | B16@0:8
- (BOOL)installHandler;
// IMP 0x10063ea98 | v16@0:8
- (void)uninstallHandler;
// IMP 0x10063ea9c | v24@0:8@16
- (void)reportUserException:(id)arg0;
// IMP 0x10063e9dc | @16@0:8
+ (id)sharedHandler;
@end
