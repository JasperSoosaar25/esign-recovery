// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97350
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTImprintValue : NSObject
// ivar __value encoding=@"NSString" offset=8
// ivar __ts encoding=q offset=16
// ivar __guid encoding=@"NSString" offset=24
// ivar __value_isset encoding=B offset=32
// ivar __ts_isset encoding=B offset=33
// ivar __guid_isset encoding=B offset=34
// property value attributes=T@"NSString",&,N,Gvalue,SsetValue:
// property ts attributes=Tq,N,Gts,SsetTs:
// property guid attributes=T@"NSString",&,N,Gguid,SsetGuid:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b3ae4 | @16@0:8
- (id)init;
// IMP 0x1006b3b18 | @40@0:8@16q24@32
- (id)initWithValue:(id)arg0 ts:(long long)arg1 guid:(id)arg2;
// IMP 0x1006b3c04 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b3d8c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b3e28 | v16@0:8
- (void)dealloc;
// IMP 0x1006b3ec8 | @16@0:8
- (id)value;
// IMP 0x1006b3f20 | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x1006b3f98 | B16@0:8
- (BOOL)valueIsSet;
// IMP 0x1006b3fa0 | v16@0:8
- (void)unsetValue;
// IMP 0x1006b3fe8 | q16@0:8
- (long long)ts;
// IMP 0x1006b3ff0 | v24@0:8q16
- (void)setTs:(long long)arg0;
// IMP 0x1006b4000 | B16@0:8
- (BOOL)tsIsSet;
// IMP 0x1006b4008 | v16@0:8
- (void)unsetTs;
// IMP 0x1006b4010 | @16@0:8
- (id)guid;
// IMP 0x1006b4068 | v24@0:8@16
- (void)setGuid:(id)arg0;
// IMP 0x1006b40e0 | B16@0:8
- (BOOL)guidIsSet;
// IMP 0x1006b40e8 | v16@0:8
- (void)unsetGuid;
// IMP 0x1006b4130 | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b4334 | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b4480 | v16@0:8
- (void)validate;
// IMP 0x1006b4484 | @16@0:8
- (id)description;
// IMP 0x1006b45c0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
