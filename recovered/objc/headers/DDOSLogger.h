// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82ee0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDOSLogger : DDAbstractLogger
// ivar _subsystem encoding=@"NSString" offset=24
// ivar _category encoding=@"NSString" offset=32
// ivar _logger encoding=@"NSObject<OS_os_log>" offset=40
// property subsystem attributes=T@"NSString",R,C,N,V_subsystem
// property category attributes=T@"NSString",R,C,N,V_category
// property logger attributes=T@"NSObject<OS_os_log>",&,N,V_logger
// property logFormatter attributes=T@"<DDLogFormatter>",&,N
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100413c14 | @32@0:8@16@24
- (id)initWithSubsystem:(id)arg0 category:(id)arg1;
// IMP 0x100413cd4 | @16@0:8
- (id)init;
// IMP 0x100413d84 | @16@0:8
- (id)getLogger;
// IMP 0x100413e54 | @16@0:8
- (id)logger;
// IMP 0x100413ea4 | @16@0:8
- (id)loggerName;
// IMP 0x100413eb4 | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x100414074 | @16@0:8
- (id)subsystem;
// IMP 0x100414084 | @16@0:8
- (id)category;
// IMP 0x100414094 | v24@0:8@16
- (void)setLogger:(id)arg0;
// IMP 0x1004140a8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100413ce0 | @16@0:8
+ (id)sharedInstance;
@end
