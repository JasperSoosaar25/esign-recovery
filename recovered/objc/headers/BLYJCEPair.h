// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c961d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJCEPair : NSObject
// ivar _key encoding=@ offset=8
// ivar _value encoding=@ offset=16
// property key attributes=T@,&,N,V_key
// property value attributes=T@,&,N,V_value
// IMP 0x100661654 | @16@0:8
- (id)description;
// IMP 0x1006619ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100661984 | @16@0:8
- (id)key;
// IMP 0x10066198c | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x100661998 | @16@0:8
- (id)value;
// IMP 0x1006619a0 | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x1006615b4 | @32@0:8@16@24
+ (id)pairWithValue:(id)arg0 forKey:(id)arg1;
// IMP 0x100661748 | @24@0:8@16
+ (id)parseExtString:(id)arg0;
// IMP 0x100661978 | @24@0:8@16
+ (id)pairFromExtString:(id)arg0;
@end
