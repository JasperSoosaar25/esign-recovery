// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1340
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADWARCParser : XADArchiveParser
// IMP 0x10092d464 | v16@0:8
- (void)parse;
// IMP 0x10092dd38 | @24@0:8@16
- (id)parseHTTPHeadersWithHandle:(id)arg0;
// IMP 0x10092de4c | @24@0:8@16
- (id)readHTTPHeadersWithHandle:(id)arg0;
// IMP 0x10092defc | @24@0:8@16
- (id)getTargetURI:(id)arg0;
// IMP 0x10092dfc8 | @24@0:8@16
- (id)pathComponentsForURLString:(id)arg0;
// IMP 0x10092e0e0 | @32@0:8@16@24
- (id)insertDirectory:(id)arg0 inDirectory:(id)arg1;
// IMP 0x10092e1f0 | v40@0:8@16@24@32
- (void)insertFile:(id)arg0 record:(id)arg1 inDirectory:(id)arg2;
// IMP 0x10092e354 | v32@0:8@16@24
- (void)buildXADPathsForFilesInDirectory:(id)arg0 parentPath:(id)arg1;
// IMP 0x10092e488 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10092e494 | @16@0:8
- (id)formatName;
// IMP 0x10092d3dc | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10092d3e4 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
