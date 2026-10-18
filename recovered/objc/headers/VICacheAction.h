// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81440
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VICacheAction : NSObject
// ivar _actionType encoding=Q offset=8
// ivar _range encoding={_NSRange="location"Q"length"Q} offset=16
// property actionType attributes=TQ,N,V_actionType
// property range attributes=T{_NSRange=QQ},N,V_range
// IMP 0x10037be44 | @40@0:8Q16{_NSRange=QQ}24
- (id)initWithActionType:(unsigned long long)arg0 range:(struct _NSRange)arg1;
// IMP 0x10037bf70 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10037c104 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10037c2b4 | @16@0:8
- (id)description;
// IMP 0x10037c678 | Q16@0:8
- (unsigned long long)actionType;
// IMP 0x10037c698 | v24@0:8Q16
- (void)setActionType:(unsigned long long)arg0;
// IMP 0x10037c6d4 | {_NSRange=QQ}16@0:8
- (struct _NSRange)range;
// IMP 0x10037c6ec | v32@0:8{_NSRange=QQ}16
- (void)setRange:(struct _NSRange)arg0;
@end
