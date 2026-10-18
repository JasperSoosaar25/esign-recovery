// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96db0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMAOCTools : NSObject
// IMP 0x100694a90 | v20@0:8B16
- (void)umchook_viewDidAppear:(BOOL)arg0;
// IMP 0x100694c84 | v20@0:8B16
- (void)umchook_viewDidDisappear:(BOOL)arg0;
// IMP 0x100694970 | v16@0:8
+ (void)setupHook;
// IMP 0x100694e18 | v32@0:8:16:24
+ (void)swizzleSelector:(SEL)arg0 altSelector:(SEL)arg1;
// IMP 0x100694efc | @24@0:8@16
+ (id)blackPrefix:(id)arg0;
@end
