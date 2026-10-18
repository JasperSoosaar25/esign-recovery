// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca06d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSWFParser : XADArchiveParser
// ivar parser encoding=@"XADSWFTagParser" offset=136
// ivar dataobjects encoding=@"NSMutableArray" offset=144
// IMP 0x100907bf4 | @16@0:8
- (id)init;
// IMP 0x100907c68 | v16@0:8
- (void)dealloc;
// IMP 0x100907cc8 | v16@0:8
- (void)parse;
// IMP 0x100908c00 | @24@0:8i16i20
- (id)createWAVHeaderForFlags:(int)arg0 length:(int)arg1;
// IMP 0x100908d30 | v32@0:8@16@24
- (void)addEntryWithName:(id)arg0 data:(id)arg1;
// IMP 0x100908ed8 | v40@0:8@16q24q32
- (void)addEntryWithName:(id)arg0 offset:(long long)arg1 length:(long long)arg2;
// IMP 0x100909030 | v48@0:8@16@24q32q40
- (void)addEntryWithName:(id)arg0 data:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
// IMP 0x100909228 | v56@0:8@16i24i28i32B36q40q48
- (void)addEntryWithName:(id)arg0 losslessFormat:(int)arg1 width:(int)arg2 height:(int)arg3 alpha:(BOOL)arg4 offset:(long long)arg5 length:(long long)arg6;
// IMP 0x1009093d0 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x100909634 | @40@0:8i16i20i24B28@32
- (id)convertLosslessFormat:(int)arg0 width:(int)arg1 height:(int)arg2 alpha:(BOOL)arg3 handle:(id)arg4;
// IMP 0x100909ca0 | @16@0:8
- (id)formatName;
// IMP 0x100907b60 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x100907b68 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
