// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99bb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYRPathCommand : YYYLoadCommand
// ivar _path encoding=@"NSString" offset=8
// ivar _rpathCmd encoding=^{rpath_command=II(lc_str=I)} offset=16
// property path attributes=T@"NSString",C,N,V_path
// property rpathCmd attributes=T^{rpath_command=II(lc_str=I)},N,V_rpathCmd
// IMP 0x100739d50 | @16@0:8
- (id)path;
// IMP 0x100739d60 | v24@0:8@16
- (void)setPath:(id)arg0;
// IMP 0x100739de8 | ^{rpath_command=II(lc_str=I)}16@0:8
- (struct rpath_command *)rpathCmd;
// IMP 0x100739e1c | v24@0:8^{rpath_command=II(lc_str=I)}16
- (void)setRpathCmd:(struct rpath_command *)arg0;
// IMP 0x100739e38 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
