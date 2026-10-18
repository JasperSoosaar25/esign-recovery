// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c830
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARParser : XADArchiveParser
// ivar archiveflags encoding=i offset=132
// ivar encryptversion encoding=i offset=136
// ivar keys encoding=@"NSMutableDictionary" offset=144
// IMP 0x100896144 | @16@0:8
- (id)init;
// IMP 0x100896188 | v16@0:8
- (void)dealloc;
// IMP 0x1008961d8 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x10089623c | v16@0:8
- (void)parse;
// IMP 0x100896954 | {RARFileHeader=qiIIiiiI@@}24@0:8^{RARBlock=iiiiqqq@}16
- (struct RARFileHeader)readFileHeaderWithBlock:(struct RARBlock *)arg0;
// IMP 0x100896a98 | @16@0:8
- (id)readComment;
// IMP 0x100896cbc | {RARBlock=iiiiqqq@}16@0:8
- (struct RARBlock)readBlockHeader;
// IMP 0x100896eb0 | v64@0:8{RARBlock=iiiiqqq@}16
- (void)skipBlock:(struct RARBlock)arg0;
// IMP 0x100896eec | v60@0:8r^{RARBlock=iiiiqqq@}16r^{RARFileHeader=qiIIiiiI@@}24q32@40q48B56
- (void)addEntryWithBlock:(struct RARBlock *)arg0 header:(struct RARFileHeader *)arg1 compressedSize:(long long)arg2 files:(id)arg3 solidOffset:(long long)arg4 isCorrupted:(BOOL)arg5;
// IMP 0x100897570 | @28@0:8@16i24
- (id)parseNameData:(id)arg0 flags:(int)arg1;
// IMP 0x10089793c | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x100897ba8 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x100897c74 | ^{CSInputBuffer=@qB*IIIII}28@0:8i16@20
- (struct CSInputBuffer *)inputBufferForFileWithIndex:(int)arg0 files:(id)arg1;
// IMP 0x100897c94 | @28@0:8i16@20
- (id)inputHandleForFileWithIndex:(int)arg0 files:(id)arg1;
// IMP 0x100897dac | @40@0:8@16B24i28@32
- (id)inputHandleWithParts:(id)arg0 encrypted:(BOOL)arg1 cryptoVersion:(int)arg2 salt:(id)arg3;
// IMP 0x100897f18 | @24@0:8@16
- (id)keyForSalt:(id)arg0;
// IMP 0x100897fec | q28@0:8i16@20
- (long long)outputLengthOfFileWithIndex:(int)arg0 files:(id)arg1;
// IMP 0x100898078 | @16@0:8
- (id)formatName;
// IMP 0x100895e08 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x100895e10 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x100895f04 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
