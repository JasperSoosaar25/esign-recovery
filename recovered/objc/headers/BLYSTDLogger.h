// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c954b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYSTDLogger : BLYAbstraceLogger
// ivar _calendarUnitFlags encoding=Q offset=16
// ivar _appName encoding=@"NSString" offset=24
// ivar _app encoding=* offset=32
// ivar _appLen encoding=Q offset=40
// ivar _processID encoding=@"NSString" offset=48
// ivar _pid encoding=* offset=56
// ivar _pidLen encoding=Q offset=64
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,N
// IMP 0x100640500 | @16@0:8
- (id)init;
// IMP 0x100640734 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x100640740 | v24@0:8@16
- (void)printMessage:(id)arg0;
// IMP 0x100640a38 | @16@0:8
- (id)loggerName;
// IMP 0x100640a64 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100640444 | @16@0:8
+ (id)defaultLogger;
@end
