// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c970
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARProgramInvocation : NSObject
// ivar programcode encoding=@"XADRARProgramCode" offset=8
// ivar initialregisters encoding=[8I] offset=16
// ivar globaldata encoding=@"NSMutableData" offset=48
// IMP 0x100898d4c | @40@0:8@16@24^I32
- (id)initWithProgramCode:(id)arg0 globalData:(id)arg1 registers:(unsigned int *)arg2;
// IMP 0x100898e38 | v16@0:8
- (void)dealloc;
// IMP 0x100898e88 | @16@0:8
- (id)programCode;
// IMP 0x100898e90 | @16@0:8
- (id)globalData;
// IMP 0x100898e98 | I20@0:8i16
- (unsigned int)initialRegisterState:(int)arg0;
// IMP 0x100898ef0 | v24@0:8i16I20
- (void)setInitialRegisterState:(int)arg0 toValue:(unsigned int)arg1;
// IMP 0x100898f54 | v24@0:8i16I20
- (void)setGlobalValueAtOffset:(int)arg0 toValue:(unsigned int)arg1;
// IMP 0x100898fdc | v16@0:8
- (void)backupGlobalData;
// IMP 0x100899048 | v16@0:8
- (void)restoreGlobalDataIfAvailable;
// IMP 0x1008990a8 | B24@0:8@16
- (BOOL)executeOnVitualMachine:(id)arg0;
@end
