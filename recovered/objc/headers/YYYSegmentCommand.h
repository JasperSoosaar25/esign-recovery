// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a790
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSegmentCommand : YYYLoadCommand
// ivar _segmentCommand encoding=^{segment_command=II[16c]IIIIiiII} offset=8
// ivar _segmentCommand64 encoding=^{segment_command_64=II[16c]QQQQiiII} offset=16
// property segmentCommand attributes=T^{segment_command=II[16c]IIIIiiII},N,V_segmentCommand
// property segmentCommand64 attributes=T^{segment_command_64=II[16c]QQQQiiII},N,V_segmentCommand64
// IMP 0x10076e874 | ^{segment_command=II[16c]IIIIiiII}16@0:8
- (struct segment_command *)segmentCommand;
// IMP 0x10076e8a8 | v24@0:8^{segment_command=II[16c]IIIIiiII}16
- (void)setSegmentCommand:(struct segment_command *)arg0;
// IMP 0x10076e8e0 | ^{segment_command_64=II[16c]QQQQiiII}16@0:8
- (struct segment_command_64 *)segmentCommand64;
// IMP 0x10076e908 | v24@0:8^{segment_command_64=II[16c]QQQQiiII}16
- (void)setSegmentCommand64:(struct segment_command_64 *)arg0;
@end
