// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92b68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGGradientStop : SVGElement
// ivar _stopColor encoding={?="r"C"g"C"b"C"a"C} offset=8
// ivar _offset encoding=d offset=16
// ivar _stopOpacity encoding=d offset=24
// property offset attributes=Td,R,N,V_offset
// property stopOpacity attributes=Td,R,N,V_stopOpacity
// property stopColor attributes=T{?=CCCC},R,N,V_stopColor
// IMP 0x10057505c | v16@0:8
- (void)loadDefaults;
// IMP 0x100575070 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x100575208 | d16@0:8
- (double)offset;
// IMP 0x100575218 | {?=CCCC}16@0:8
- (void * /* aggregate ? */)stopColor;
// IMP 0x100575228 | d16@0:8
- (double)stopOpacity;
@end
