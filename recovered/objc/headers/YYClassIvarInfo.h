// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94370
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYClassIvarInfo : NSObject
// ivar _ivar encoding=^{objc_ivar=} offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _offset encoding=q offset=24
// ivar _typeEncoding encoding=@"NSString" offset=32
// ivar _type encoding=Q offset=40
// property ivar attributes=T^{objc_ivar=},R,N,V_ivar
// property name attributes=T@"NSString",R,N,V_name
// property offset attributes=Tq,R,N,V_offset
// property typeEncoding attributes=T@"NSString",R,N,V_typeEncoding
// property type attributes=TQ,R,N,V_type
// IMP 0x100599bd8 | @24@0:8^{objc_ivar=}16
- (id)initWithIvar:(struct objc_ivar *)arg0;
// IMP 0x100599cc8 | ^{objc_ivar=}16@0:8
- (struct objc_ivar *)ivar;
// IMP 0x100599cd0 | @16@0:8
- (id)name;
// IMP 0x100599cd8 | q16@0:8
- (long long)offset;
// IMP 0x100599ce0 | @16@0:8
- (id)typeEncoding;
// IMP 0x100599ce8 | Q16@0:8
- (unsigned long long)type;
// IMP 0x100599cf0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
