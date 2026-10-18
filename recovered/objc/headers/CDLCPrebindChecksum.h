// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c982f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCPrebindChecksum : CDLoadCommand
// ivar _prebindChecksumCommand encoding={prebind_cksum_command="cmd"I"cmdsize"I"cksum"I} offset=8
// property cksum attributes=TI,R,N
// IMP 0x1006e406c | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006e4108 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006e4118 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006e412c | I16@0:8
- (unsigned int)cksum;
@end
