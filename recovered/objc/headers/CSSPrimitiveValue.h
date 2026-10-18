// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92078
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CSSPrimitiveValue : CSSValue
// ivar pixelsPerInch encoding=f offset=16
// ivar internalValue encoding=f offset=20
// ivar primitiveType encoding=i offset=24
// ivar internalString encoding=@"NSString" offset=32
// property internalValue attributes=Tf,N,VinternalValue
// property internalString attributes=T@"NSString",&,N,VinternalString
// property pixelsPerInch attributes=Tf,N,VpixelsPerInch
// property primitiveType attributes=Ti,N,VprimitiveType
// IMP 0x100569b10 | @16@0:8
- (id)init;
// IMP 0x100569b68 | v24@0:8i16f20
- (void)setFloatValue:(int)arg0 floatValue:(float)arg1;
// IMP 0x100569ba8 | f20@0:8i16
- (float)getFloatValue:(int)arg0;
// IMP 0x100569d6c | v28@0:8i16@20
- (void)setStringValue:(int)arg0 stringValue:(id)arg1;
// IMP 0x100569dc8 | @16@0:8
- (id)getStringValue;
// IMP 0x100569dcc | v16@0:8
- (void)getCounterValue;
// IMP 0x100569dd0 | v16@0:8
- (void)getRectValue;
// IMP 0x100569dd4 | v16@0:8
- (void)getRGBColorValue;
// IMP 0x100569dd8 | v24@0:8@16
- (void)setCssText:(id)arg0;
// IMP 0x10056a14c | f16@0:8
- (float)pixelsPerInch;
// IMP 0x10056a15c | v20@0:8f16
- (void)setPixelsPerInch:(float)arg0;
// IMP 0x10056a16c | f16@0:8
- (float)internalValue;
// IMP 0x10056a17c | v20@0:8f16
- (void)setInternalValue:(float)arg0;
// IMP 0x10056a18c | @16@0:8
- (id)internalString;
// IMP 0x10056a19c | v24@0:8@16
- (void)setInternalString:(id)arg0;
// IMP 0x10056a1b0 | i16@0:8
- (int)primitiveType;
// IMP 0x10056a1c0 | v20@0:8i16
- (void)setPrimitiveType:(int)arg0;
// IMP 0x10056a1d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
