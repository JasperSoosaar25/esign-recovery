// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c929d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGElementInstanceList : SVGElement
// ivar internalArray encoding=@"NSMutableArray" offset=8
// property internalArray attributes=T@"NSMutableArray",&,N,VinternalArray
// property length attributes=TQ,R,N
// IMP 0x100573198 | @16@0:8
- (id)init;
// IMP 0x10057320c | Q16@0:8
- (unsigned long long)length;
// IMP 0x100573248 | @24@0:8Q16
- (id)item:(unsigned long long)arg0;
// IMP 0x1005732d4 | @16@0:8
- (id)internalArray;
// IMP 0x1005732e4 | v24@0:8@16
- (void)setInternalArray:(id)arg0;
// IMP 0x1005732f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
