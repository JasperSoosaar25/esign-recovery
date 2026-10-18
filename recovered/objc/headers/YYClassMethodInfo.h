// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c943c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYClassMethodInfo : NSObject
// ivar _method encoding=^{objc_method=} offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _sel encoding=: offset=24
// ivar _imp encoding=^? offset=32
// ivar _typeEncoding encoding=@"NSString" offset=40
// ivar _returnTypeEncoding encoding=@"NSString" offset=48
// ivar _argumentTypeEncodings encoding=@"NSArray" offset=56
// property method attributes=T^{objc_method=},R,N,V_method
// property name attributes=T@"NSString",R,N,V_name
// property sel attributes=T:,R,N,V_sel
// property imp attributes=T^?,R,N,V_imp
// property typeEncoding attributes=T@"NSString",R,N,V_typeEncoding
// property returnTypeEncoding attributes=T@"NSString",R,N,V_returnTypeEncoding
// property argumentTypeEncodings attributes=T@"NSArray",R,N,V_argumentTypeEncodings
// IMP 0x100599d20 | @24@0:8^{objc_method=}16
- (id)initWithMethod:(struct objc_method *)arg0;
// IMP 0x100599ef8 | ^{objc_method=}16@0:8
- (struct objc_method *)method;
// IMP 0x100599f00 | @16@0:8
- (id)name;
// IMP 0x100599f08 | :16@0:8
- (SEL)sel;
// IMP 0x100599f10 | ^?16@0:8
- (void *)imp;
// IMP 0x100599f18 | @16@0:8
- (id)typeEncoding;
// IMP 0x100599f20 | @16@0:8
- (id)returnTypeEncoding;
// IMP 0x100599f28 | @16@0:8
- (id)argumentTypeEncodings;
// IMP 0x100599f30 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
