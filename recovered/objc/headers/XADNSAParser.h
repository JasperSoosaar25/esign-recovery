// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e590
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADNSAParser : XADArchiveParser
// IMP 0x1008c90fc | v16@0:8
- (void)parse;
// IMP 0x1008c948c | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008c992c | @16@0:8
- (id)formatName;
// IMP 0x1008c90b4 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008c90bc | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
