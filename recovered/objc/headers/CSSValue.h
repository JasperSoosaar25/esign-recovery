// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92258
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSValue : NSObject
// ivar _cssText encoding=@"NSString" offset=8
// ivar cssValueType encoding=i offset=16
// property cssText attributes=T@"NSString",&,N,V_cssText
// property cssValueType attributes=Ti,N,VcssValueType
// IMP 0x10056b184 | @16@0:8
- (id)init;
// IMP 0x10056b19c | @20@0:8i16
- (id)initWithUnitType:(int)arg0;
// IMP 0x10056b1f4 | @16@0:8
- (id)cssText;
// IMP 0x10056b1fc | v24@0:8@16
- (void)setCssText:(id)arg0;
// IMP 0x10056b208 | i16@0:8
- (int)cssValueType;
// IMP 0x10056b210 | v20@0:8i16
- (void)setCssValueType:(int)arg0;
// IMP 0x10056b218 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
