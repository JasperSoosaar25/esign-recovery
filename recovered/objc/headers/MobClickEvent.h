// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96c70
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClickEvent : NSObject
// IMP 0x100684c5c | @32@0:8@16@24
+ (id)filterAttributes:(id)arg0 type:(id)arg1;
// IMP 0x100685820 | B24@0:8@16
+ (BOOL)validEventID:(id)arg0;
// IMP 0x100685a2c | v24@0:8@16
+ (void)event:(id)arg0;
// IMP 0x100685a50 | v32@0:8@16@24
+ (void)event:(id)arg0 label:(id)arg1;
// IMP 0x100685b40 | v28@0:8@16i24
+ (void)event:(id)arg0 durations:(int)arg1;
// IMP 0x100685c18 | v36@0:8@16@24i32
+ (void)event:(id)arg0 label:(id)arg1 durations:(int)arg2;
// IMP 0x100685d60 | v24@0:8@16
+ (void)beginEvent:(id)arg0;
// IMP 0x100685d70 | v24@0:8@16
+ (void)endEvent:(id)arg0;
// IMP 0x100685d80 | v32@0:8@16@24
+ (void)beginEvent:(id)arg0 label:(id)arg1;
// IMP 0x100685e70 | v32@0:8@16@24
+ (void)endEvent:(id)arg0 label:(id)arg1;
// IMP 0x100685f44 | v40@0:8@16@24@32
+ (void)beginEvent:(id)arg0 primarykey:(id)arg1 attributes:(id)arg2;
// IMP 0x100686058 | v32@0:8@16@24
+ (void)endEvent:(id)arg0 primarykey:(id)arg1;
// IMP 0x10068612c | v32@0:8@16@24
+ (void)event:(id)arg0 attributes:(id)arg1;
// IMP 0x1006861e8 | v32@0:8@16@24
+ (void)gameEvent:(id)arg0 attributes:(id)arg1;
// IMP 0x1006862a4 | v36@0:8@16@24i32
+ (void)event:(id)arg0 attributes:(id)arg1 durations:(int)arg2;
// IMP 0x1006863c0 | v36@0:8@16@24i32
+ (void)gameEvent:(id)arg0 attributes:(id)arg1 durations:(int)arg2;
// IMP 0x1006864dc | v28@0:8@16i24
+ (void)logPageView:(id)arg0 seconds:(int)arg1;
// IMP 0x100686748 | v24@0:8@16
+ (void)beginLogPageView:(id)arg0;
// IMP 0x1006868ec | v24@0:8@16
+ (void)endLogPageView:(id)arg0;
// IMP 0x100686a14 | v36@0:8@16@24i32
+ (void)eventCalculation:(id)arg0 attributes:(id)arg1 count:(int)arg2;
// IMP 0x100686b38 | v52@0:8@16@24Q32i40@44
+ (void)eventJobForBegonia:(id)arg0 eventAttributes:(id)arg1 flags:(unsigned long long)arg2 etype:(int)arg3 type:(id)arg4;
@end
