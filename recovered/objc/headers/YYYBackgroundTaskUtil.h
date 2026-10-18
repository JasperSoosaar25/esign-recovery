// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7cff8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBackgroundTaskUtil : NSObject
// ivar _keepRunning encoding=B offset=8
// ivar _getUDIDRun encoding=B offset=9
// ivar _timer encoding=@"NSTimer" offset=16
// ivar _player encoding=@"AVAudioPlayer" offset=24
// ivar _backgroundTask encoding=Q offset=32
// property timer attributes=T@"NSTimer",&,N,V_timer
// property player attributes=T@"AVAudioPlayer",&,N,V_player
// property backgroundTask attributes=TQ,N,V_backgroundTask
// property keepRunning attributes=TB,N,V_keepRunning
// property getUDIDRun attributes=TB,N,V_getUDIDRun
// IMP 0x1000cdcec | @16@0:8
- (id)init;
// IMP 0x1000ce258 | v16@0:8
- (void)playNoVoliceBackgroundTask;
// IMP 0x1000ce2c4 | v24@0:8@16
- (void)applicationDidEnterBackground:(id)arg0;
// IMP 0x1000ce78c | v24@0:8@16
- (void)applicationDidBecomeActive:(id)arg0;
// IMP 0x1000ce9f4 | v16@0:8
- (void)backgroundMode;
// IMP 0x1000ceb00 | v16@0:8
- (void)applyToSystemForMoreTime;
// IMP 0x1000cec08 | @16@0:8
- (id)player;
// IMP 0x1000cf014 | v20@0:8B16
- (void)setKeepRunning:(BOOL)arg0;
// IMP 0x1000cf2e0 | B16@0:8
- (BOOL)keepRunning;
// IMP 0x1000cf300 | B16@0:8
- (BOOL)getUDIDRun;
// IMP 0x1000cf320 | v20@0:8B16
- (void)setGetUDIDRun:(BOOL)arg0;
// IMP 0x1000cf35c | @16@0:8
- (id)timer;
// IMP 0x1000cf364 | v24@0:8@16
- (void)setTimer:(id)arg0;
// IMP 0x1000cf3e8 | v24@0:8@16
- (void)setPlayer:(id)arg0;
// IMP 0x1000cf3f4 | Q16@0:8
- (unsigned long long)backgroundTask;
// IMP 0x1000cf420 | v24@0:8Q16
- (void)setBackgroundTask:(unsigned long long)arg0;
// IMP 0x1000cf434 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000cda5c | @16@0:8
+ (id)shared;
@end
