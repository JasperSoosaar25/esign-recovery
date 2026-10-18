// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82360
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDASLLogger : DDAbstractLogger
// ivar _client encoding=^{__asl_object_s=} offset=24
// property logFormatter attributes=T@"<DDLogFormatter>",&,N
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040a1e8 | @16@0:8
- (id)init;
// IMP 0x10040a274 | @16@0:8
- (id)loggerName;
// IMP 0x10040a284 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x10040a144 | @16@0:8
+ (id)sharedInstance;
@end
