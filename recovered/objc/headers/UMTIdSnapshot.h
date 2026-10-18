// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97260
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTIdSnapshot : NSObject
// ivar __identity encoding=@"NSString" offset=8
// ivar __ts encoding=q offset=16
// ivar __version encoding=i offset=24
// ivar __identity_isset encoding=B offset=28
// ivar __ts_isset encoding=B offset=29
// ivar __version_isset encoding=B offset=30
// property identity attributes=T@"NSString",&,N,Gidentity,SsetIdentity:
// property ts attributes=Tq,N,Gts,SsetTs:
// property version attributes=Ti,N,Gversion,SsetVersion:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b1138 | @16@0:8
- (id)init;
// IMP 0x1006b116c | @36@0:8@16q24i32
- (id)initWithIdentity:(id)arg0 ts:(long long)arg1 version:(int)arg2;
// IMP 0x1006b1220 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b1374 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b140c | v16@0:8
- (void)dealloc;
// IMP 0x1006b1494 | @16@0:8
- (id)identity;
// IMP 0x1006b14ec | v24@0:8@16
- (void)setIdentity:(id)arg0;
// IMP 0x1006b1564 | B16@0:8
- (BOOL)identityIsSet;
// IMP 0x1006b156c | v16@0:8
- (void)unsetIdentity;
// IMP 0x1006b15b4 | q16@0:8
- (long long)ts;
// IMP 0x1006b15bc | v24@0:8q16
- (void)setTs:(long long)arg0;
// IMP 0x1006b15cc | B16@0:8
- (BOOL)tsIsSet;
// IMP 0x1006b15d4 | v16@0:8
- (void)unsetTs;
// IMP 0x1006b15dc | i16@0:8
- (int)version;
// IMP 0x1006b15e4 | v20@0:8i16
- (void)setVersion:(int)arg0;
// IMP 0x1006b15f4 | B16@0:8
- (BOOL)versionIsSet;
// IMP 0x1006b15fc | v16@0:8
- (void)unsetVersion;
// IMP 0x1006b1604 | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b180c | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b1950 | v16@0:8
- (void)validate;
// IMP 0x1006b1a04 | @16@0:8
- (id)description;
// IMP 0x1006b1b40 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
