// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e090
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCFBFParser : XADArchiveParser
// ivar minsize encoding=i offset=132
// ivar secsize encoding=i offset=136
// ivar minisecsize encoding=i offset=140
// ivar rootdirectorynode encoding=I offset=144
// ivar firstminisector encoding=I offset=148
// ivar numsectors encoding=i offset=152
// ivar numminisectors encoding=i offset=156
// ivar sectable encoding=^I offset=160
// ivar minisectable encoding=^I offset=168
// ivar secvisitedtable encoding=^B offset=176
// IMP 0x1008c08a8 | @16@0:8
- (id)init;
// IMP 0x1008c08f8 | v16@0:8
- (void)dealloc;
// IMP 0x1008c0a28 | v16@0:8
- (void)parse;
// IMP 0x1008c13ec | @28@0:8*16i24
- (id)decodeFileNameWithBytes:(char *)arg0 length:(int)arg1;
// IMP 0x1008c15bc | v36@0:8I16@20@28
- (void)processEntry:(unsigned int)arg0 atPath:(id)arg1 entries:(id)arg2;
// IMP 0x1008c1770 | v20@0:8I16
- (void)seekToSector:(unsigned int)arg0;
// IMP 0x1008c17e4 | I20@0:8I16
- (unsigned int)nextSectorAfter:(unsigned int)arg0;
// IMP 0x1008c183c | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008c19f4 | @16@0:8
- (id)formatName;
// IMP 0x1008c0958 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008c0960 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
