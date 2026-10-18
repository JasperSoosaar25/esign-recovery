// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c920
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARProgramCode : NSObject
// ivar opcodes encoding=@"NSMutableData" offset=8
// ivar staticdata encoding=@"NSData" offset=16
// ivar globalbackup encoding=@"NSMutableData" offset=24
// ivar fingerprint encoding=Q offset=32
// IMP 0x100898678 | @28@0:8r*16i24
- (id)initWithByteCode:(char *)arg0 length:(int)arg1;
// IMP 0x10089872c | v16@0:8
- (void)dealloc;
// IMP 0x100898784 | B28@0:8r*16i24
- (BOOL)parseByteCode:(char *)arg0 length:(int)arg1;
// IMP 0x100898ae0 | v52@0:8^{CSInputBuffer=@qB*IIIII}16^I24^I32B40B44i48
- (void)parseOperandFromBuffer:(struct CSInputBuffer *)arg0 addressingMode:(unsigned int *)arg1 value:(unsigned int *)arg2 byteMode:(BOOL)arg3 isRelativeJump:(BOOL)arg4 currentInstructionOffset:(int)arg5;
// IMP 0x100898c2c | ^{RAROpcode=^v^?^?I^?^?ICCCC[12C]}16@0:8
- (struct RAROpcode *)opcodes;
// IMP 0x100898c3c | i16@0:8
- (int)numberOfOpcodes;
// IMP 0x100898c74 | @16@0:8
- (id)staticData;
// IMP 0x100898c7c | @16@0:8
- (id)globalBackup;
// IMP 0x100898c84 | Q16@0:8
- (unsigned long long)fingerprint;
// IMP 0x100898c8c | @16@0:8
- (id)disassemble;
@end
