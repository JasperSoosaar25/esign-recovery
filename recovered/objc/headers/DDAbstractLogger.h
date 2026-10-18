// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82e18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDAbstractLogger : NSObject
// ivar _logFormatter encoding=@"<DDLogFormatter>" offset=8
// ivar _loggerQueue encoding=@"NSObject<OS_dispatch_queue>" offset=16
// property logFormatter attributes=T@"<DDLogFormatter>",&,N
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",&,N,V_loggerQueue
// property onGlobalLoggingQueue attributes=TB,R,N,GisOnGlobalLoggingQueue
// property onInternalLoggerQueue attributes=TB,R,N,GisOnInternalLoggerQueue
// property loggerName attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100412f50 | @16@0:8
- (id)init;
// IMP 0x100413014 | v16@0:8
- (void)dealloc;
// IMP 0x100413048 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x10041304c | @16@0:8
- (id)logFormatter;
// IMP 0x100413188 | v24@0:8@16
- (void)setLogFormatter:(id)arg0;
// IMP 0x100413340 | @16@0:8
- (id)loggerQueue;
// IMP 0x100413348 | @16@0:8
- (id)loggerName;
// IMP 0x10041335c | B16@0:8
- (BOOL)isOnGlobalLoggingQueue;
// IMP 0x100413380 | B16@0:8
- (BOOL)isOnInternalLoggerQueue;
// IMP 0x10041339c | v24@0:8@16
- (void)setLoggerQueue:(id)arg0;
// IMP 0x1004133a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
