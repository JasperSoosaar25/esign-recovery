// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca09f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPDFParser : XADArchiveParser
// ivar parser encoding=@"PDFParser" offset=136
// IMP 0x10091bb9c | @16@0:8
- (id)init;
// IMP 0x10091bbe0 | v16@0:8
- (void)dealloc;
// IMP 0x10091bc30 | v16@0:8
- (void)parse;
// IMP 0x10091d688 | v24@0:8@16
- (void)needsPassword:(id)arg0;
// IMP 0x10091d6e4 | @28@0:8@16B24
- (id)compressionNameForStream:(id)arg0 excludingLast:(BOOL)arg1;
// IMP 0x10091d86c | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10091dd50 | @16@0:8
- (id)formatName;
// IMP 0x10091bb08 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10091bb10 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
