// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92730
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGAngle : NSObject
// ivar unitType encoding=i offset=8
// ivar value encoding=f offset=12
// ivar valueInSpecifiedUnits encoding=f offset=16
// ivar valueAsString encoding=@"NSString" offset=24
// property unitType attributes=Ti,R,N,VunitType
// property value attributes=Tf,N,Vvalue
// property valueInSpecifiedUnits attributes=Tf,N,VvalueInSpecifiedUnits
// property valueAsString attributes=T@"NSString",&,N,VvalueAsString
// IMP 0x10056f7e4 | v24@0:8i16f20
- (void)newValueSpecifiedUnits:(int)arg0 valueInSpecifiedUnits:(float)arg1;
// IMP 0x10056f7e8 | v20@0:8i16
- (void)convertToSpecifiedUnits:(int)arg0;
// IMP 0x10056f7ec | i16@0:8
- (int)unitType;
// IMP 0x10056f7f4 | f16@0:8
- (float)value;
// IMP 0x10056f7fc | v20@0:8f16
- (void)setValue:(float)arg0;
// IMP 0x10056f804 | f16@0:8
- (float)valueInSpecifiedUnits;
// IMP 0x10056f80c | v20@0:8f16
- (void)setValueInSpecifiedUnits:(float)arg0;
// IMP 0x10056f814 | @16@0:8
- (id)valueAsString;
// IMP 0x10056f81c | v24@0:8@16
- (void)setValueAsString:(id)arg0;
// IMP 0x10056f828 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
