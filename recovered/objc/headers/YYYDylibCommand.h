// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a0c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDylibCommand : YYYLoadCommand
// ivar _linkName encoding=@"NSString" offset=8
// ivar _dylibCmd encoding=^{dylib_command=II{dylib=(lc_str=I)III}} offset=16
// property linkName attributes=T@"NSString",C,N,V_linkName
// property dylibCmd attributes=T^{dylib_command=II{dylib=(lc_str=I)III}},N,V_dylibCmd
// IMP 0x10075e3c0 | @16@0:8
- (id)linkName;
// IMP 0x10075e3e8 | v24@0:8@16
- (void)setLinkName:(id)arg0;
// IMP 0x10075e41c | ^{dylib_command=II{dylib=(lc_str=I)III}}16@0:8
- (struct dylib_command *)dylibCmd;
// IMP 0x10075e444 | v24@0:8^{dylib_command=II{dylib=(lc_str=I)III}}16
- (void)setDylibCmd:(struct dylib_command *)arg0;
// IMP 0x10075e488 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
