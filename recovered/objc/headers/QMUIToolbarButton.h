// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e200
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIToolbarButton : UIButton
// ivar _type encoding=Q offset=8
// property type attributes=TQ,R,N,V_type
// IMP 0x1004d9984 | @16@0:8
- (id)init;
// IMP 0x1004d998c | @24@0:8Q16
- (id)initWithType:(unsigned long long)arg0;
// IMP 0x1004d9994 | @32@0:8Q16@24
- (id)initWithType:(unsigned long long)arg0 title:(id)arg1;
// IMP 0x1004d9a2c | @24@0:8@16
- (id)initWithImage:(id)arg0;
// IMP 0x1004d9b78 | v16@0:8
- (void)renderButtonStyle;
// IMP 0x1004da1dc | Q16@0:8
- (unsigned long long)type;
// IMP 0x1004da004 | @40@0:8@16@24:32
+ (id)barButtonItemWithToolbarButton:(id)arg0 target:(id)arg1 action:(SEL)arg2;
// IMP 0x1004da06c | @48@0:8Q16@24@32:40
+ (id)barButtonItemWithType:(unsigned long long)arg0 title:(id)arg1 target:(id)arg2 action:(SEL)arg3;
// IMP 0x1004da160 | @40@0:8@16@24:32
+ (id)barButtonItemWithImage:(id)arg0 target:(id)arg1 action:(SEL)arg2;
@end
