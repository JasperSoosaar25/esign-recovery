// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d5c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItParser : XADArchiveParser
// IMP 0x1008ad0c4 | v16@0:8
- (void)parse;
// IMP 0x1008addbc | @20@0:8i16
- (id)nameOfCompressionMethod:(int)arg0;
// IMP 0x1008ade64 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ae16c | @32@0:8@16@24
- (id)decryptHandleForEntryWithDictionary:(id)arg0 handle:(id)arg1;
// IMP 0x1008ae2f8 | @16@0:8
- (id)formatName;
// IMP 0x1008acfd8 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008acfe0 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
