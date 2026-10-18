// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98d28
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCEncryptionInfo : CDLoadCommand
// ivar _encryptionInfoCommand encoding={encryption_info_command_64="cmd"I"cmdsize"I"cryptoff"I"cryptsize"I"cryptid"I"pad"I} offset=8
// property cryptoff attributes=TI,R,N
// property cryptsize attributes=TI,R,N
// property cryptid attributes=TI,R,N
// property isEncrypted attributes=TB,R,N
// IMP 0x1006f86b8 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006f8784 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006f8794 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006f87a8 | I16@0:8
- (unsigned int)cryptoff;
// IMP 0x1006f87bc | I16@0:8
- (unsigned int)cryptsize;
// IMP 0x1006f87d0 | I16@0:8
- (unsigned int)cryptid;
// IMP 0x1006f87e4 | B16@0:8
- (BOOL)isEncrypted;
@end
