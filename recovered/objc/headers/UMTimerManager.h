// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97da0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTimerManager : NSObject
// ivar _timerContainer encoding=@"NSMutableDictionary" offset=8
// property timerContainer attributes=T@"NSMutableDictionary",&,N,V_timerContainer
// IMP 0x1006ca7e0 | v52@0:8@16d24^{dispatch_queue_s=}32B40@?44
- (void)scheduledDispatchTimerWithName:(id)arg0 timeInterval:(double)arg1 queue:(struct dispatch_queue_s *)arg2 repeats:(BOOL)arg3 action:(id /* block */)arg4;
// IMP 0x1006caa60 | v24@0:8@16
- (void)cancelTimerWithName:(id)arg0;
// IMP 0x1006cab50 | B24@0:8@16
- (BOOL)existTimer:(id)arg0;
// IMP 0x1006cac0c | @16@0:8
- (id)timerContainer;
// IMP 0x1006cac64 | v24@0:8@16
- (void)setTimerContainer:(id)arg0;
// IMP 0x1006cac70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006ca760 | @16@0:8
+ (id)sharedInstance;
@end
