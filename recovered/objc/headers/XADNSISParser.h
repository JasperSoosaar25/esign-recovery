// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e630
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADNSISParser : XADArchiveParser
// ivar base encoding=q offset=136
// ivar solidhandle encoding=@"XADHandle" offset=144
// ivar detectedformat encoding=i offset=152
// ivar expansiontypes encoding=i offset=156
// ivar _outdir encoding=@"XADPath" offset=160
// IMP 0x1008cab24 | @16@0:8
- (id)init;
// IMP 0x1008cab8c | v16@0:8
- (void)dealloc;
// IMP 0x1008cabdc | v16@0:8
- (void)parse;
// IMP 0x1008cacd8 | v16@0:8
- (void)parseOlderFormat;
// IMP 0x1008cb06c | v16@0:8
- (void)parseOldFormat;
// IMP 0x1008cb2d0 | v16@0:8
- (void)parseNewFormat;
// IMP 0x1008cb7b8 | v80@0:8@16@24i32B36i40i44i48i52i56i60i64i68B72B76
- (void)parseOpcodesWithHeader:(id)arg0 blocks:(id)arg1 extractOpcode:(int)arg2 ignoreOverwrite:(BOOL)arg3 directoryOpcode:(int)arg4 directoryArgument:(int)arg5 assignOpcode:(int)arg6 startOffset:(int)arg7 endOffset:(int)arg8 stride:(int)arg9 stringStartOffset:(int)arg10 stringEndOffset:(int)arg11 unicode:(BOOL)arg12 newDateTimeOrder:(BOOL)arg13;
// IMP 0x1008cc170 | v24@0:8@16
- (void)makeEntryArrayStrictlyIncreasing:(id)arg0;
// IMP 0x1008cc3e0 | @24@0:8@16
- (id)findBlocksWithHandle:(id)arg0;
// IMP 0x1008cc53c | i28@0:8@16i24
- (int)findStringTableOffsetInData:(id)arg0 maxOffsets:(int)arg1;
// IMP 0x1008cc718 | i88@0:8@16@24i32i36i40i44^i48i56^i60i68^i72^i80
- (int)findOpcodeWithData:(id)arg0 blocks:(id)arg1 startOffset:(int)arg2 endOffset:(int)arg3 stringStartOffset:(int)arg4 stringEndOffset:(int)arg5 opcodePossibilities:(int *)arg6 count:(int)arg7 stridePossibilities:(int *)arg8 count:(int)arg9 foundStride:(int *)arg10 foundPhase:(int *)arg11;
// IMP 0x1008ccb38 | B24@0:8@16
- (BOOL)isSectionedHeader:(id)arg0;
// IMP 0x1008ccbbc | B32@0:8@16i24i28
- (BOOL)isUnicodeHeader:(id)arg0 stringStartOffset:(int)arg1 stringEndOffset:(int)arg2;
// IMP 0x1008ccc74 | @48@0:8i16B20@24i32i36@40
- (id)expandAnyPathWithOffset:(int)arg0 unicode:(BOOL)arg1 header:(id)arg2 stringStartOffset:(int)arg3 stringEndOffset:(int)arg4 currentPath:(id)arg5;
// IMP 0x1008ccca4 | @44@0:8i16@20i28i32@36
- (id)expandPathWithOffset:(int)arg0 header:(id)arg1 stringStartOffset:(int)arg2 stringEndOffset:(int)arg3 currentPath:(id)arg4;
// IMP 0x1008cce14 | @36@0:8r*16i24@28
- (id)expandDollarVariablesWithBytes:(char *)arg0 length:(int)arg1 currentPath:(id)arg2;
// IMP 0x1008cceb8 | @36@0:8r*16i24@28
- (id)expandOldVariablesWithBytes:(char *)arg0 length:(int)arg1 currentPath:(id)arg2;
// IMP 0x1008cd44c | @36@0:8r*16i24@28
- (id)expandNewVariablesWithBytes:(char *)arg0 length:(int)arg1 currentPath:(id)arg2;
// IMP 0x1008cd840 | @48@0:8^{NSISVariableExpansion=**}16i24r*28i36@40
- (id)expandVariables:(struct NSISVariableExpansion *)arg0 count:(int)arg1 bytes:(char *)arg2 length:(int)arg3 currentPath:(id)arg4;
// IMP 0x1008cda60 | @44@0:8i16@20i28i32@36
- (id)expandUnicodePathWithOffset:(int)arg0 header:(id)arg1 stringStartOffset:(int)arg2 stringEndOffset:(int)arg3 currentPath:(id)arg4;
// IMP 0x1008cdd74 | @24@0:8q16
- (id)handleForBlockAtOffset:(long long)arg0;
// IMP 0x1008cdd84 | @32@0:8q16q24
- (id)handleForBlockAtOffset:(long long)arg0 length:(long long)arg1;
// IMP 0x1008cdf4c | @36@0:8@16q24i32
- (id)handleWithHandle:(id)arg0 length:(long long)arg1 format:(int)arg2;
// IMP 0x1008ce118 | v32@0:8q16i24I28
- (void)attemptSolidHandleAtPosition:(long long)arg0 format:(int)arg1 headerLength:(unsigned int)arg2;
// IMP 0x1008ce1ec | @16@0:8
- (id)compressionName;
// IMP 0x1008ce278 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ce2cc | @16@0:8
- (id)formatName;
// IMP 0x1008ca978 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008ca980 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
