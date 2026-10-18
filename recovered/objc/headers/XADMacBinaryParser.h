// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d208
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMacBinaryParser : XADMacArchiveParser
// IMP 0x1008a7988 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x1008a7a38 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a7a44 | v24@0:8@16
- (void)inspectEntryDictionary:(id)arg0;
// IMP 0x1008a7b50 | @16@0:8
- (id)formatName;
// IMP 0x1008a7950 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a7958 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
