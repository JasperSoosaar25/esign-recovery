// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95500
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYASLLogger : NSObject
// ivar _client encoding=^{__asl_object_s=} offset=8
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,N
// IMP 0x100640b60 | @16@0:8
- (id)init;
// IMP 0x100640be4 | @16@0:8
- (id)loggerName;
// IMP 0x100640c10 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x100640aa4 | @16@0:8
+ (id)defaultLogger;
@end
