// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c969f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComEventFactory : NSObject
// IMP 0x10067d5f8 | v44@0:8@16@24@32i40
+ (void)gameEvent:(id)arg0 eventId:(id)arg1 attributes:(id)arg2 durations:(int)arg3;
// IMP 0x10067d6ac | v48@0:8@16@24@32@40
+ (void)calculationEvent:(id)arg0 eventId:(id)arg1 attributes:(id)arg2 counter:(id)arg3;
// IMP 0x10067d78c | v60@0:8@16@24@32@40i48@52
+ (void)countEvent:(id)arg0 eventId:(id)arg1 label:(id)arg2 attributes:(id)arg3 durations:(int)arg4 primarykey:(id)arg5;
@end
