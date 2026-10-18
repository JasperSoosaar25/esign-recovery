// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95168
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAbstraceLogger : NSObject
// ivar _loggerQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar _onGlobalLoggingQueue encoding=B offset=16
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_loggerQueue
// property onGlobalLoggingQueue attributes=TB,R,N,GisOnGlobalLoggingQueue,V_onGlobalLoggingQueue
// property onInternalLoggerQueue attributes=TB,R,N,GisOnInternalLoggerQueue
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property loggerName attributes=T@"NSString",R,N
// IMP 0x100638208 | @16@0:8
- (id)init;
// IMP 0x100638280 | @16@0:8
- (id)loggerQueue;
// IMP 0x100638288 | @16@0:8
- (id)loggerName;
// IMP 0x1006382a4 | B16@0:8
- (BOOL)isOnInternalLoggerQueue;
// IMP 0x1006382c0 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x1006382d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006382c4 | v24@0:8@16
- (void)setLoggerQueue:(id)arg0;
// IMP 0x1006382d0 | B16@0:8
- (BOOL)isOnGlobalLoggingQueue;
@end
