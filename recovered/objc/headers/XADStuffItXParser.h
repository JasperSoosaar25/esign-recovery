// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d7d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXParser : XADArchiveParser
// ivar repeatedentrydata encoding=@"NSData" offset=136
// ivar repeatedentries encoding=@"NSArray" offset=144
// ivar repeatedentryhaschecksum encoding=B offset=152
// ivar repeatedentryiscorrect encoding=B offset=153
// IMP 0x1008b1628 | @16@0:8
- (id)init;
// IMP 0x1008b1678 | v16@0:8
- (void)dealloc;
// IMP 0x1008b16d8 | v16@0:8
- (void)parse;
// IMP 0x1008b29fc | v40@0:8@16@24@32
- (void)parseCatalogWithHandle:(id)arg0 entryArray:(id)arg1 entryDictionary:(id)arg2;
// IMP 0x1008b2ee0 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008b30a4 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008b30f4 | @16@0:8
- (id)formatName;
// IMP 0x1008b1564 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008b156c | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
