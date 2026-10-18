// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85770
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MASViewAttribute : NSObject
// ivar _view encoding=@"UIView" offset=8
// ivar _item encoding=@ offset=16
// ivar _layoutAttribute encoding=q offset=24
// property view attributes=T@"UIView",R,W,N,V_view
// property item attributes=T@,R,W,N,V_item
// property layoutAttribute attributes=Tq,R,N,V_layoutAttribute
// IMP 0x100434164 | @32@0:8@16q24
- (id)initWithView:(id)arg0 layoutAttribute:(long long)arg1;
// IMP 0x100434170 | @40@0:8@16@24q32
- (id)initWithView:(id)arg0 item:(id)arg1 layoutAttribute:(long long)arg2;
// IMP 0x100434220 | B16@0:8
- (BOOL)isSizeAttribute;
// IMP 0x100434260 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100434348 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1004343c0 | @16@0:8
- (id)view;
// IMP 0x1004343d8 | @16@0:8
- (id)item;
// IMP 0x1004343f0 | q16@0:8
- (long long)layoutAttribute;
// IMP 0x1004343f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
