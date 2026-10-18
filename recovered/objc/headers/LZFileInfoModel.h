// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d610
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface LZFileInfoModel : NSObject
// ivar _pwd encoding=@"NSString" offset=8
// ivar _onof encoding=@"NSString" offset=16
// ivar _f_id encoding=@"NSString" offset=24
// ivar _taoc encoding=@"NSString" offset=32
// ivar _is_newd encoding=@"NSString" offset=40
// property pwd attributes=T@"NSString",C,N,V_pwd
// property onof attributes=T@"NSString",C,N,V_onof
// property f_id attributes=T@"NSString",C,N,V_f_id
// property taoc attributes=T@"NSString",C,N,V_taoc
// property is_newd attributes=T@"NSString",C,N,V_is_newd
// IMP 0x100142b68 | @16@0:8
- (id)sharedUrl;
// IMP 0x1001431a0 | B16@0:8
- (BOOL)isLockFile;
// IMP 0x100143320 | @16@0:8
- (id)pwd;
// IMP 0x100143334 | v24@0:8@16
- (void)setPwd:(id)arg0;
// IMP 0x1001433ac | @16@0:8
- (id)onof;
// IMP 0x1001433cc | v24@0:8@16
- (void)setOnof:(id)arg0;
// IMP 0x1001433ec | @16@0:8
- (id)f_id;
// IMP 0x100143418 | v24@0:8@16
- (void)setF_id:(id)arg0;
// IMP 0x100143438 | @16@0:8
- (id)taoc;
// IMP 0x100143458 | v24@0:8@16
- (void)setTaoc:(id)arg0;
// IMP 0x10014346c | @16@0:8
- (id)is_newd;
// IMP 0x100143498 | v24@0:8@16
- (void)setIs_newd:(id)arg0;
// IMP 0x1001434c8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
