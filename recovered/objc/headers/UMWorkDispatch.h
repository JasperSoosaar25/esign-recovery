// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c975d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMWorkDispatch : NSObject
// ivar _workQueue encoding=^{dispatch_queue_s=} offset=8
// ivar _components encoding=@"NSMutableArray" offset=16
// property components attributes=T@"NSMutableArray",&,N,V_components
// IMP 0x1006b7934 | @16@0:8
- (id)init;
// IMP 0x1006b79e8 | ^{dispatch_queue_s=}16@0:8
- (struct dispatch_queue_s *)getWorkQueue;
// IMP 0x1006b7a44 | B16@0:8
- (BOOL)isInWorkQueue;
// IMP 0x1006b7c84 | v32@0:8@16@24
- (void)dispatchEvent:(id)arg0 inComponent:(id)arg1;
// IMP 0x1006b9944 | @16@0:8
- (id)components;
// IMP 0x1006b994c | v24@0:8@16
- (void)setComponents:(id)arg0;
// IMP 0x1006b9958 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006b7884 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006b79f0 | ^{dispatch_queue_s=}16@0:8
+ (struct dispatch_queue_s *)getWorkQueue;
// IMP 0x1006b7a84 | B16@0:8
+ (BOOL)isInWorkQueue;
// IMP 0x1006b7ad8 | v36@0:8@16i24@28
+ (void)sendEvent:(id)arg0 withType:(int)arg1 component:(id)arg2;
@end
