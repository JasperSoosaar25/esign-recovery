// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c967c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYConsoleLog : NSObject
// ivar _date encoding=@"NSDate" offset=8
// ivar _sender encoding=@"NSString" offset=16
// ivar _messageText encoding=@"NSString" offset=24
// ivar _messageID encoding=q offset=32
// ivar _PID encoding=@"NSString" offset=40
// property date attributes=T@"NSDate",&,N,V_date
// property sender attributes=T@"NSString",C,N,V_sender
// property messageText attributes=T@"NSString",C,N,V_messageText
// property messageID attributes=Tq,N,V_messageID
// property PID attributes=T@"NSString",C,N,V_PID
// IMP 0x100678eac | @24@0:8@16
- (id)searchResultOfLog:(id)arg0;
// IMP 0x100679094 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100679034 | @16@0:8
- (id)date;
// IMP 0x10067903c | v24@0:8@16
- (void)setDate:(id)arg0;
// IMP 0x100679048 | @16@0:8
- (id)sender;
// IMP 0x100679054 | v24@0:8@16
- (void)setSender:(id)arg0;
// IMP 0x10067905c | @16@0:8
- (id)messageText;
// IMP 0x100679068 | v24@0:8@16
- (void)setMessageText:(id)arg0;
// IMP 0x100679070 | q16@0:8
- (long long)messageID;
// IMP 0x100679078 | v24@0:8q16
- (void)setMessageID:(long long)arg0;
// IMP 0x100679080 | @16@0:8
- (id)PID;
// IMP 0x10067908c | v24@0:8@16
- (void)setPID:(id)arg0;
// IMP 0x1006785ac | @16@0:8
+ (id)logs;
// IMP 0x100678878 | @16@0:8
+ (id)allLogMessagesForCurrentProcess;
// IMP 0x100678a00 | @24@0:8^{__asl_object_s=}16
+ (id)logMessageFromASLMessage:(struct __asl_object_s *)arg0;
// IMP 0x100678ca0 | @24@0:8@16
+ (id)logContent:(id)arg0;
@end
