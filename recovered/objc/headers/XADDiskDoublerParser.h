// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d1b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADDiskDoublerParser : XADArchiveParser
// IMP 0x1008a5894 | v16@0:8
- (void)parse;
// IMP 0x1008a59c4 | v16@0:8
- (void)parseArchive;
// IMP 0x1008a64ac | v16@0:8
- (void)parseArchive2;
// IMP 0x1008a68a8 | I32@0:8@16@24
- (unsigned int)parseFileHeaderWithHandle:(id)arg0 name:(id)arg1;
// IMP 0x1008a71a4 | @20@0:8i16
- (id)nameForMethod:(int)arg0;
// IMP 0x1008a7280 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a7944 | @16@0:8
- (id)formatName;
// IMP 0x1008a56cc | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a56d4 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
