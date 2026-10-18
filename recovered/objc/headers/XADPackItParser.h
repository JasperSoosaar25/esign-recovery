// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d2f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPackItParser : XADArchiveParser
// ivar currdesc encoding=@"NSMutableDictionary" offset=136
// ivar currhandle encoding=@"XADHandle" offset=144
// IMP 0x1008a86f0 | v16@0:8
- (void)parse;
// IMP 0x1008a924c | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a9258 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a947c | @16@0:8
- (id)formatName;
// IMP 0x1008a8654 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a865c | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
