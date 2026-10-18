// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92618
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface ProcessingInstruction : Node
// ivar target encoding=@"NSString" offset=8
// ivar data encoding=@"NSString" offset=16
// property target attributes=T@"NSString",&,N,Vtarget
// property data attributes=T@"NSString",&,N,Vdata
// IMP 0x10056f4b4 | @32@0:8@16@24
- (id)initProcessingInstruction:(id)arg0 value:(id)arg1;
// IMP 0x10056f558 | @16@0:8
- (id)target;
// IMP 0x10056f568 | v24@0:8@16
- (void)setTarget:(id)arg0;
// IMP 0x10056f57c | @16@0:8
- (id)data;
// IMP 0x10056f58c | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x10056f5a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
