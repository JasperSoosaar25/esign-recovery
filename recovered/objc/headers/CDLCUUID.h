// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99098
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCUUID : CDLoadCommand
// ivar _uuidCommand encoding={uuid_command="cmd"I"cmdsize"I"uuid"[16C]} offset=8
// ivar _UUID encoding=@"NSUUID" offset=32
// property UUID attributes=T@"NSUUID",R,N,V_UUID
// IMP 0x1006fdfb8 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x1006fe094 | I16@0:8
- (unsigned int)cmd;
// IMP 0x1006fe0a4 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x1006fe0b8 | v28@0:8@16B24
- (void)appendToString:(id)arg0 verbose:(BOOL)arg1;
// IMP 0x1006fe184 | @16@0:8
- (id)extraDescription;
// IMP 0x1006fe1c8 | @16@0:8
- (id)UUID;
// IMP 0x1006fe1d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
