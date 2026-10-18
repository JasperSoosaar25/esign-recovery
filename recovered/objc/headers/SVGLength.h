// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c938e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGLength : NSObject
// ivar unitType encoding=i offset=8
// ivar value encoding=f offset=12
// ivar valueInSpecifiedUnits encoding=f offset=16
// ivar valueAsString encoding=@"NSString" offset=24
// ivar internalCSSPrimitiveValue encoding=@"CSSPrimitiveValue" offset=32
// property internalCSSPrimitiveValue attributes=T@"CSSPrimitiveValue",&,N,VinternalCSSPrimitiveValue
// property unitType attributes=Ti,R,N,VunitType
// property value attributes=Tf,N,Vvalue
// property valueInSpecifiedUnits attributes=Tf,N,VvalueInSpecifiedUnits
// property valueAsString attributes=T@"NSString",&,N,VvalueAsString
// IMP 0x100583f10 | @16@0:8
- (id)init;
// IMP 0x100583f28 | @24@0:8@16
- (id)initWithCSSPrimitiveValue:(id)arg0;
// IMP 0x100583f94 | f16@0:8
- (float)value;
// IMP 0x100584004 | i16@0:8
- (int)unitType;
// IMP 0x10058405c | v24@0:8i16f20
- (void)newValueSpecifiedUnits:(int)arg0 valueInSpecifiedUnits:(float)arg1;
// IMP 0x100584060 | v20@0:8i16
- (void)convertToSpecifiedUnits:(int)arg0;
// IMP 0x100584124 | f16@0:8
- (float)pixelsValue;
// IMP 0x10058416c | f20@0:8f16
- (float)pixelsValueWithDimension:(float)arg0;
// IMP 0x1005841f0 | f24@0:8f16B20
- (float)pixelsValueWithGradientDimension:(float)arg0 treatAsPercentage:(BOOL)arg1;
// IMP 0x1005842e0 | f16@0:8
- (float)numberValue;
// IMP 0x100584758 | v20@0:8f16
- (void)setValue:(float)arg0;
// IMP 0x100584760 | f16@0:8
- (float)valueInSpecifiedUnits;
// IMP 0x100584768 | v20@0:8f16
- (void)setValueInSpecifiedUnits:(float)arg0;
// IMP 0x100584770 | @16@0:8
- (id)valueAsString;
// IMP 0x100584778 | v24@0:8@16
- (void)setValueAsString:(id)arg0;
// IMP 0x100584784 | @16@0:8
- (id)internalCSSPrimitiveValue;
// IMP 0x10058478c | v24@0:8@16
- (void)setInternalCSSPrimitiveValue:(id)arg0;
// IMP 0x100584798 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100584064 | v16@0:8
+ (void)initialize;
// IMP 0x100584080 | @16@0:8
+ (id)svgLengthZero;
// IMP 0x1005840a4 | @24@0:8@16
+ (id)svgLengthFromNSString:(id)arg0;
// IMP 0x100584328 | f16@0:8
+ (float)pixelsPerInchForCurrentDevice;
@end
