// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9db40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADTarParser : XADMacArchiveParser
// ivar currentGlobalHeader encoding=@"NSData" offset=192
// IMP 0x1008b66d0 | v16@0:8
- (void)dealloc;
// IMP 0x1008b6720 | v36@0:8@16i24@28
- (void)parseSparseHeadersFromData:(id)arg0 numHeaders:(int)arg1 toDict:(id)arg2;
// IMP 0x1008b686c | i32@0:8@16@24
- (int)parseGenericTarHeader:(id)arg0 toDict:(id)arg1;
// IMP 0x1008b6cf0 | v32@0:8@16@24
- (void)parsePaxTarHeader:(id)arg0 toDict:(id)arg1;
// IMP 0x1008b6d10 | v32@0:8@16@24
- (void)parseUstarTarHeader:(id)arg0 toDict:(id)arg1;
// IMP 0x1008b7214 | v32@0:8@16@24
- (void)parseGnuTarHeader:(id)arg0 toDict:(id)arg1;
// IMP 0x1008b7478 | v24@0:8@16
- (void)addTarEntryWithDictionaryAndSeek:(id)arg0;
// IMP 0x1008b7578 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x1008b77f4 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008b784c | @16@0:8
- (id)formatName;
// IMP 0x1008b6118 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008b6120 | i24@0:8@16
+ (int)getTarType:(id)arg0;
// IMP 0x1008b6264 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x1008b62ec | d24@0:8*16
+ (double)doubleFromCString:(char *)arg0;
// IMP 0x1008b6378 | q24@0:8*16
+ (long long)longFromCString:(char *)arg0;
// IMP 0x1008b6400 | q40@0:8{_NSRange=QQ}16@32
+ (long long)readNumberInRangeFromBuffer:(struct _NSRange)arg0 buffer:(id)arg1;
// IMP 0x1008b64c0 | q24@0:8q16
+ (long long)octalToDecimal:(long long)arg0;
// IMP 0x1008b6514 | Q40@0:8{_NSRange=QQ}16@32
+ (unsigned long long)readOctalNumberInRangeFromBuffer:(struct _NSRange)arg0 buffer:(id)arg1;
// IMP 0x1008b65fc | B28@0:8@16i24
+ (BOOL)isTarChecksumCorrect:(id)arg0 checksum:(int)arg1;
@end
