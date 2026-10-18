// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99458
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDLCLinkeditData : CDLoadCommand
// ivar _linkeditDataCommand encoding={linkedit_data_command="cmd"I"cmdsize"I"dataoff"I"datasize"I} offset=8
// ivar _linkeditData encoding=@"NSData" offset=24
// property linkeditData attributes=T@"NSData",R,N
// IMP 0x1007038a0 | @24@0:8@16
- (id)initWithDataCursor:(id)arg0;
// IMP 0x100703948 | I16@0:8
- (unsigned int)cmd;
// IMP 0x100703958 | I16@0:8
- (unsigned int)cmdsize;
// IMP 0x10070396c | @16@0:8
- (id)linkeditData;
// IMP 0x100703a0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
