// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c950a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYLoggerInfo : NSObject
// ivar _logger encoding=@"<BLYLoggerDelegate>" offset=8
// ivar _level encoding=Q offset=16
// ivar _loggerQueue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// property logger attributes=T@"<BLYLoggerDelegate>",R,N,V_logger
// property level attributes=TQ,R,N,V_level
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N,V_loggerQueue
// IMP 0x1006382e4 | @40@0:8@16Q24@32
- (id)initWithLogger:(id)arg0 level:(unsigned long long)arg1 queue:(id)arg2;
// IMP 0x100638440 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100638428 | @16@0:8
- (id)logger;
// IMP 0x100638430 | Q16@0:8
- (unsigned long long)level;
// IMP 0x100638438 | @16@0:8
- (id)loggerQueue;
// IMP 0x100638394 | @40@0:8@16Q24@32
+ (id)infoWithLogger:(id)arg0 level:(unsigned long long)arg1 queue:(id)arg2;
@end
