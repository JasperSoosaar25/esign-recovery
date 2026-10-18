// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d258
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADNowCompressParser : XADArchiveParser
// ivar totalentries encoding=i offset=132
// ivar currentries encoding=i offset=136
// ivar entries encoding=@"NSMutableArray" offset=144
// ivar filesarray encoding=@"NSMutableArray" offset=152
// ivar solidoffset encoding=q offset=160
// IMP 0x1008a7c40 | v16@0:8
- (void)parse;
// IMP 0x1008a7dc8 | v28@0:8@16i24
- (void)parseDirectoryWithParent:(id)arg0 numberOfEntries:(int)arg1;
// IMP 0x1008a8588 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a85e8 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008a8648 | @16@0:8
- (id)formatName;
// IMP 0x1008a7b5c | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008a7b64 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
