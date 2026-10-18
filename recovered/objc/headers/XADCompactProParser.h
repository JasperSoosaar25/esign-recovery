// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d078
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCompactProParser : XADArchiveParser
// IMP 0x1008a31c4 | v16@0:8
- (void)parse;
// IMP 0x1008a3378 | B36@0:8@16i24@28
- (BOOL)parseDirectoryWithPath:(id)arg0 numberOfEntries:(int)arg1 entryArray:(id)arg2;
// IMP 0x1008a3cbc | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a3e04 | @16@0:8
- (id)formatName;
// IMP 0x1008a2f00 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a2f08 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
