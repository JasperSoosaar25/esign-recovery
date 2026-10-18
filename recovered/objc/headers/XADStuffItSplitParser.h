// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0980
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItSplitParser : XADArchiveParser
// IMP 0x10091aa88 | v16@0:8
- (void)parse;
// IMP 0x10091b2a0 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10091b2ac | @16@0:8
- (id)formatName;
// IMP 0x10091a6a4 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10091a6ac | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x10091a768 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
