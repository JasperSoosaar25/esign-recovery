// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96950
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComBaseEvent : NSObject
// ivar event_id encoding=@"NSString" offset=8
// ivar ts encoding=d offset=16
// property ts attributes=Td,N,Vts
// property event_id attributes=T@"NSString",C,N,Vevent_id
// IMP 0x10067c130 | @16@0:8
- (id)init;
// IMP 0x10067c1a0 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10067c228 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x10067c288 | v16@0:8
- (void)outputUMLog;
// IMP 0x10067c28c | @16@0:8
- (id)event_id;
// IMP 0x10067c298 | v24@0:8@16
- (void)setEvent_id:(id)arg0;
// IMP 0x10067c2ac | d16@0:8
- (double)ts;
// IMP 0x10067c2b4 | v24@0:8d16
- (void)setTs:(double)arg0;
// IMP 0x10067c2bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
