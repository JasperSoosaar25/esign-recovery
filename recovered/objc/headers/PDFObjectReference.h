// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0f30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFObjectReference : NSObject
// ivar num encoding=i offset=8
// ivar gen encoding=i offset=12
// IMP 0x100924084 | @24@0:8i16i20
- (id)initWithNumber:(int)arg0 generation:(int)arg1;
// IMP 0x1009240d0 | i16@0:8
- (int)number;
// IMP 0x1009240d8 | i16@0:8
- (int)generation;
// IMP 0x1009240e0 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100924154 | I16@0:8
- (unsigned int)hash;
// IMP 0x10092416c | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1009241b4 | @16@0:8
- (id)description;
// IMP 0x100923fc8 | @24@0:8i16i20
+ (id)referenceWithNumber:(int)arg0 generation:(int)arg1;
// IMP 0x10092400c | @32@0:8@16@24
+ (id)referenceWithNumberObject:(id)arg0 generationObject:(id)arg1;
@end
