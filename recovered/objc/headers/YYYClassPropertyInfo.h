// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b8a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYClassPropertyInfo : NSObject
// ivar _property encoding=^{objc_property=} offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _type encoding=Q offset=24
// ivar _typeEncoding encoding=@"NSString" offset=32
// ivar _ivarName encoding=@"NSString" offset=40
// ivar _cls encoding=# offset=48
// ivar _protocols encoding=@"NSArray" offset=56
// ivar _getter encoding=: offset=64
// ivar _setter encoding=: offset=72
// property property attributes=T^{objc_property=},R,N,V_property
// property name attributes=T@"NSString",R,N,V_name
// property type attributes=TQ,R,N,V_type
// property typeEncoding attributes=T@"NSString",R,N,V_typeEncoding
// property ivarName attributes=T@"NSString",R,N,V_ivarName
// property cls attributes=T#,R,N,V_cls
// property protocols attributes=T@"NSArray",R,N,V_protocols
// property getter attributes=T:,R,N,V_getter
// property setter attributes=T:,R,N,V_setter
// IMP 0x10003c6b8 | @24@0:8^{objc_property=}16
- (id)initWithProperty:(struct objc_property *)arg0;
// IMP 0x10003d770 | @16@0:8
- (id)description;
// IMP 0x10003efe8 | ^{objc_property=}16@0:8
- (struct objc_property *)property;
// IMP 0x10003f014 | @16@0:8
- (id)name;
// IMP 0x10003f034 | Q16@0:8
- (unsigned long long)type;
// IMP 0x10003f054 | @16@0:8
- (id)typeEncoding;
// IMP 0x10003f080 | @16@0:8
- (id)ivarName;
// IMP 0x10003f0b0 | #16@0:8
- (Class)cls;
// IMP 0x10003f0b8 | @16@0:8
- (id)protocols;
// IMP 0x10003f0d8 | :16@0:8
- (SEL)getter;
// IMP 0x10003f0ec | :16@0:8
- (SEL)setter;
// IMP 0x10003f118 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
