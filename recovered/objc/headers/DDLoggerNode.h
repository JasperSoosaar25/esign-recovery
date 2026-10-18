// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82d50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLoggerNode : NSObject
// ivar _logger encoding=@"<DDLogger>" offset=8
// ivar _level encoding=Q offset=16
// ivar _loggerQueue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// property logger attributes=T@"<DDLogger>",R,N,V_logger
// property level attributes=TQ,R,N,V_level
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N,V_loggerQueue
// IMP 0x100412408 | @40@0:8@16@24Q32
- (id)initWithLogger:(id)arg0 loggerQueue:(id)arg1 level:(unsigned long long)arg2;
// IMP 0x10041252c | v16@0:8
- (void)dealloc;
// IMP 0x100412560 | @16@0:8
- (id)logger;
// IMP 0x100412568 | Q16@0:8
- (unsigned long long)level;
// IMP 0x100412570 | @16@0:8
- (id)loggerQueue;
// IMP 0x100412578 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004124b8 | @40@0:8@16@24Q32
+ (id)nodeWithLogger:(id)arg0 loggerQueue:(id)arg1 level:(unsigned long long)arg2;
@end
