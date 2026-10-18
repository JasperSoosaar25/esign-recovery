// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c922a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSValueList : CSSValue
// ivar internalArray encoding=@"NSArray" offset=16
// property internalArray attributes=T@"NSArray",&,N,VinternalArray
// property length attributes=TQ,R,N
// IMP 0x10056b224 | @16@0:8
- (id)init;
// IMP 0x10056b29c | Q16@0:8
- (unsigned long long)length;
// IMP 0x10056b2d8 | @24@0:8Q16
- (id)item:(unsigned long long)arg0;
// IMP 0x10056b324 | v24@0:8@16
- (void)setCssText:(id)arg0;
// IMP 0x10056b3a8 | @16@0:8
- (id)internalArray;
// IMP 0x10056b3b8 | v24@0:8@16
- (void)setInternalArray:(id)arg0;
// IMP 0x10056b3cc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
