// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c973f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTResponse : NSObject
// ivar __resp_code encoding=i offset=8
// ivar __msg encoding=@"NSString" offset=16
// ivar __imprint encoding=@"UMTImprint" offset=24
// ivar __resp_code_isset encoding=B offset=32
// ivar __msg_isset encoding=B offset=33
// ivar __imprint_isset encoding=B offset=34
// property resp_code attributes=Ti,N,Gresp_code,SsetResp_code:
// property msg attributes=T@"NSString",&,N,Gmsg,SsetMsg:
// property imprint attributes=T@"UMTImprint",&,N,Gimprint,SsetImprint:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b5420 | @16@0:8
- (id)init;
// IMP 0x1006b5454 | @36@0:8i16@20@28
- (id)initWithResp_code:(int)arg0 msg:(id)arg1 imprint:(id)arg2;
// IMP 0x1006b5540 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b56c8 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b5764 | v16@0:8
- (void)dealloc;
// IMP 0x1006b5804 | i16@0:8
- (int)resp_code;
// IMP 0x1006b580c | v20@0:8i16
- (void)setResp_code:(int)arg0;
// IMP 0x1006b581c | B16@0:8
- (BOOL)resp_codeIsSet;
// IMP 0x1006b5824 | v16@0:8
- (void)unsetResp_code;
// IMP 0x1006b582c | @16@0:8
- (id)msg;
// IMP 0x1006b5884 | v24@0:8@16
- (void)setMsg:(id)arg0;
// IMP 0x1006b58fc | B16@0:8
- (BOOL)msgIsSet;
// IMP 0x1006b5904 | v16@0:8
- (void)unsetMsg;
// IMP 0x1006b594c | @16@0:8
- (id)imprint;
// IMP 0x1006b59a4 | v24@0:8@16
- (void)setImprint:(id)arg0;
// IMP 0x1006b5a1c | B16@0:8
- (BOOL)imprintIsSet;
// IMP 0x1006b5a24 | v16@0:8
- (void)unsetImprint;
// IMP 0x1006b5a6c | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b5cc8 | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b5e14 | v16@0:8
- (void)validate;
// IMP 0x1006b5e60 | @16@0:8
- (id)description;
// IMP 0x1006b5f9c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
