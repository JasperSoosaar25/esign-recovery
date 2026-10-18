// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96900
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComEvent : UMComBaseEvent
// ivar _hws encoding=i offset=8
// ivar _sws encoding=i offset=12
// ivar _session_id encoding=@"NSString" offset=16
// ivar _pn encoding=@"NSString" offset=24
// ivar _type encoding=@"NSString" offset=32
// ivar _values encoding=@"NSMutableDictionary" offset=40
// ivar _label encoding=@"NSString" offset=48
// property session_id attributes=T@"NSString",C,N,V_session_id
// property hws attributes=Ti,N,V_hws
// property pn attributes=T@"NSString",C,N,V_pn
// property sws attributes=Ti,N,V_sws
// property type attributes=T@"NSString",C,N,V_type
// property values attributes=T@"NSMutableDictionary",&,N,V_values
// property label attributes=T@"NSString",C,N,V_label
// IMP 0x10067b050 | @16@0:8
- (id)init;
// IMP 0x10067b1b4 | @16@0:8
- (id)umComEventDic;
// IMP 0x10067bfac | v16@0:8
- (void)outputUMLog;
// IMP 0x10067bfb0 | @16@0:8
- (id)session_id;
// IMP 0x10067bfc0 | v24@0:8@16
- (void)setSession_id:(id)arg0;
// IMP 0x10067bfd8 | i16@0:8
- (int)hws;
// IMP 0x10067bfe8 | v20@0:8i16
- (void)setHws:(int)arg0;
// IMP 0x10067bff8 | @16@0:8
- (id)pn;
// IMP 0x10067c008 | v24@0:8@16
- (void)setPn:(id)arg0;
// IMP 0x10067c020 | i16@0:8
- (int)sws;
// IMP 0x10067c030 | v20@0:8i16
- (void)setSws:(int)arg0;
// IMP 0x10067c040 | @16@0:8
- (id)type;
// IMP 0x10067c050 | v24@0:8@16
- (void)setType:(id)arg0;
// IMP 0x10067c068 | @16@0:8
- (id)values;
// IMP 0x10067c078 | v24@0:8@16
- (void)setValues:(id)arg0;
// IMP 0x10067c08c | @16@0:8
- (id)label;
// IMP 0x10067c09c | v24@0:8@16
- (void)setLabel:(id)arg0;
// IMP 0x10067c0b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10067b438 | v24@0:8@16
+ (void)addEvent:(id)arg0;
// IMP 0x10067b6f8 | v24@0:8@16
+ (void)addPreEvent:(id)arg0;
// IMP 0x10067bb58 | v48@0:8@16@24@32@40
+ (void)insertTable:(id)arg0 eventId:(id)arg1 event:(id)arg2 type:(id)arg3;
// IMP 0x10067bc24 | i16@0:8
+ (int)rowCountInTable;
// IMP 0x10067bc80 | @24@0:8@16
+ (id)loadTable:(id)arg0;
// IMP 0x10067bd04 | @24@0:8@16
+ (id)loadTableWithVersion:(id)arg0;
// IMP 0x10067bd88 | @32@0:8@16@24
+ (id)loadTableWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x10067be28 | v24@0:8@16
+ (void)clearDataInTable:(id)arg0;
// IMP 0x10067bea0 | v24@0:8@16
+ (void)clearDataInTableWithVersion:(id)arg0;
// IMP 0x10067bf18 | v32@0:8@16@24
+ (void)clearDataInTableWithVersion:(id)arg0 withSid:(id)arg1;
@end
