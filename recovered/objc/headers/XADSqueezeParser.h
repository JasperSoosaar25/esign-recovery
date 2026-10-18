// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca02c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSqueezeParser : XADArchiveParser
// IMP 0x1008ff200 | v16@0:8
- (void)parse;
// IMP 0x1008ff350 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ff398 | @16@0:8
- (id)formatName;
// IMP 0x1008fed68 | @40@0:8@16q24@32
+ (id)parseWithHandle:(id)arg0 endOffset:(long long)arg1 parser:(id)arg2;
// IMP 0x1008ff07c | @36@0:8@16B24@28
+ (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1 handle:(id)arg2;
// IMP 0x1008ff154 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008ff15c | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
