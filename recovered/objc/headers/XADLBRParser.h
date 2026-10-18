// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0340
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLBRParser : XADArchiveParser
// IMP 0x1008ff4c8 | v16@0:8
- (void)parse;
// IMP 0x1008ffae4 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ffc64 | @16@0:8
- (id)formatName;
// IMP 0x1008ff3a4 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008ff3ac | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
