// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95730
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYDFTLogger : BLYAbstraceLogger
// ivar _calendarUnitFlags encoding=Q offset=16
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,N
// IMP 0x1006440d4 | @16@0:8
- (id)init;
// IMP 0x100644188 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x1006443d0 | v24@0:8@16
- (void)addLog:(id)arg0;
// IMP 0x100644610 | @16@0:8
- (id)logs;
// IMP 0x1006446e8 | @16@0:8
- (id)loggerName;
// IMP 0x100644018 | @16@0:8
+ (id)defaultLogger;
@end
