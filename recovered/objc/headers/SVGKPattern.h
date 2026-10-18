// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c936b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKPattern : NSObject
// ivar color encoding=@"UIColor" offset=8
// property color attributes=T@"UIColor",&,N,Vcolor
// IMP 0x100580fec | ^{CGColor=}16@0:8
- (struct CGColor *)CGColor;
// IMP 0x10058102c | @16@0:8
- (id)color;
// IMP 0x100581034 | v24@0:8@16
- (void)setColor:(id)arg0;
// IMP 0x100581040 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100580f44 | @24@0:8@16
+ (id)patternWithColor:(id)arg0;
// IMP 0x100580f94 | @24@0:8@16
+ (id)patternWithImage:(id)arg0;
@end
