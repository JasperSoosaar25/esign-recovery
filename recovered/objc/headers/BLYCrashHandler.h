// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c951e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashHandler : NSObject
// IMP 0x100639f90 | @16@0:8
- (id)init;
// IMP 0x10063a2a8 | B16@0:8
- (BOOL)installHandler;
// IMP 0x10063a2b0 | v16@0:8
- (void)uninstallHandler;
// IMP 0x100639f10 | @16@0:8
+ (id)sharedHandler;
// IMP 0x100639fc4 | q24@0:8q16
+ (long long)installHandlerWithCrashType:(long long)arg0;
// IMP 0x10063a114 | v24@0:8q16
+ (void)uninstallHandlerByCrashType:(long long)arg0;
// IMP 0x10063a224 | v16@0:8
+ (void)detectiveHandlerRunning;
@end
