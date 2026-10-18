// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a020
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYLoadCommand : YYYOffsetNode
// ivar _loadCmd encoding=^{load_command=II} offset=8
// property loadCmd attributes=T^{load_command=II},N,V_loadCmd
// property cmd attributes=TI,R,N
// property cmdSize attributes=TI,R,N
// IMP 0x10075a438 | I16@0:8
- (unsigned int)cmd;
// IMP 0x10075a498 | I16@0:8
- (unsigned int)cmdSize;
// IMP 0x10075a4f8 | ^{load_command=II}16@0:8
- (struct load_command *)loadCmd;
// IMP 0x10075a52c | v24@0:8^{load_command=II}16
- (void)setLoadCmd:(struct load_command *)arg0;
@end
