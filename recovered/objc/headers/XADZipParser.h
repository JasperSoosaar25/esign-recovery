// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c100
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZipParser : XADMacArchiveParser
// ivar prevdict encoding=@"NSMutableDictionary" offset=192
// ivar prevname encoding=@"NSData" offset=200
// IMP 0x100889818 | @16@0:8
- (id)init;
// IMP 0x100889868 | v16@0:8
- (void)dealloc;
// IMP 0x1008898c8 | v32@0:8^q16^q24
- (void)findCentralDirectoryRecordOffset:(long long *)arg0 zip64Offset:(long long *)arg1;
// IMP 0x100889b58 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x100889c24 | v32@0:8q16q24
- (void)parseWithCentralDirectoryAtOffset:(long long)arg0 zip64Offset:(long long)arg1;
// IMP 0x10088a240 | {XADZipParserCentralDirectoryRecord=IiiiiiIIqqiiiiiIq}16@0:8
- (struct XADZipParserCentralDirectoryRecord)readCentralDirectoryRecord;
// IMP 0x10088a558 | q28@0:8i16q20
- (long long)offsetForVolume:(int)arg0 offset:(long long)arg1;
// IMP 0x10088a600 | v16@0:8
- (void)parseWithoutCentralDirectory;
// IMP 0x10088aa88 | v44@0:8B16^q20^q28^I36
- (void)findEndOfStreamMarkerWithZip64Flag:(BOOL)arg0 uncompressedSizePointer:(long long *)arg1 compressedSizePointer:(long long *)arg2 CRCPointer:(unsigned int *)arg3;
// IMP 0x10088ae90 | v16@0:8
- (void)findNextEntry;
// IMP 0x10088af40 | @44@0:8i16@20^q28^q36
- (id)parseZipExtraWithLength:(int)arg0 nameData:(id)arg1 uncompressedSizePointer:(long long *)arg2 compressedSizePointer:(long long *)arg3;
// IMP 0x10088be08 | v100@0:8i16i20i24i28I32I36I40q44q52I60@64q72@80@88B96
- (void)addZipEntryWithSystem:(int)arg0 extractVersion:(int)arg1 flags:(int)arg2 compressionMethod:(int)arg3 date:(unsigned int)arg4 crc:(unsigned int)arg5 localDate:(unsigned int)arg6 compressedSize:(long long)arg7 uncompressedSize:(long long)arg8 extendedFileAttributes:(unsigned int)arg9 extraDictionary:(id)arg10 dataOffset:(long long)arg11 nameData:(id)arg12 commentData:(id)arg13 isLastEntry:(BOOL)arg14;
// IMP 0x10088c864 | v32@0:8@16@24
- (void)rememberEntry:(id)arg0 withName:(id)arg1;
// IMP 0x10088c8ac | v16@0:8
- (void)addRemeberedEntryAndForget;
// IMP 0x10088c908 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10088cd48 | @40@0:8@16i24i28q32
- (id)decompressionHandleWithHandle:(id)arg0 method:(int)arg1 flags:(int)arg2 size:(long long)arg3;
// IMP 0x10088cfa4 | @16@0:8
- (id)formatName;
// IMP 0x1008895f4 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008895fc | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x1008896c8 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
