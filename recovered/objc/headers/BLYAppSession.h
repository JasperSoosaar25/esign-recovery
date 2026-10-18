// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95be0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAppSession : BLYJceObjectV2
// ivar jcev2_p_0_r_sessionId encoding=@"NSString" offset=8
// ivar jcev2_p_1_o_events__b0x9i_VONSString encoding=@"NSArray" offset=16
// property jcev2_p_0_r_sessionId attributes=T@"NSString",&,N,Gjce_sessionId,SsetJce_sessionId:,Vjcev2_p_0_r_sessionId
// property jcev2_p_1_o_events__b0x9i_VONSString attributes=T@"NSArray",&,N,Gjce_events,SsetJce_events:,Vjcev2_p_1_o_events__b0x9i_VONSString
// IMP 0x10064ede0 | @16@0:8
- (id)init;
// IMP 0x10064eeb4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10064ee6c | @16@0:8
- (id)jce_sessionId;
// IMP 0x10064ee7c | v24@0:8@16
- (void)setJce_sessionId:(id)arg0;
// IMP 0x10064ee90 | @16@0:8
- (id)jce_events;
// IMP 0x10064eea0 | v24@0:8@16
- (void)setJce_events:(id)arg0;
// IMP 0x10064ed84 | v16@0:8
+ (void)initialize;
// IMP 0x10064ee40 | @16@0:8
+ (id)jceType;
@end
