// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e108
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZHParser : XADMacArchiveParser
// IMP 0x1008c1b14 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x1008c2880 | v28@0:8@16i24
- (void)parseExtendedForDictionary:(id)arg0 size:(int)arg1;
// IMP 0x1008c2fcc | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008c338c | @16@0:8
- (id)formatName;
// IMP 0x1008c1a00 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008c1a08 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
