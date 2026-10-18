// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9cc40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD7ZipParser : XADMacArchiveParser
// ivar startoffset encoding=q offset=192
// ivar mainstreams encoding=@"NSDictionary" offset=200
// ivar currfolder encoding=@"NSDictionary" offset=208
// ivar currfolderhandle encoding=@"XADHandle" offset=216
// IMP 0x10089c274 | @16@0:8
- (id)init;
// IMP 0x10089c2b8 | v16@0:8
- (void)dealloc;
// IMP 0x10089c308 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x10089cb74 | @24@0:8@16
- (id)parseFilesForHandle:(id)arg0;
// IMP 0x10089ce80 | v40@0:8@16@24@32
- (void)parseBitVectorForHandle:(id)arg0 array:(id)arg1 key:(id)arg2;
// IMP 0x10089cf6c | @28@0:8@16i24
- (id)parseDefintionVectorForHandle:(id)arg0 numberOfElements:(int)arg1;
// IMP 0x10089d05c | v40@0:8@16@24@32
- (void)parseDatesForHandle:(id)arg0 array:(id)arg1 key:(id)arg2;
// IMP 0x10089d1dc | v32@0:8@16@24
- (void)parseCRCsForHandle:(id)arg0 array:(id)arg1;
// IMP 0x10089d308 | v32@0:8@16@24
- (void)parseNamesForHandle:(id)arg0 array:(id)arg1;
// IMP 0x10089d494 | v32@0:8@16@24
- (void)parseAttributesForHandle:(id)arg0 array:(id)arg1;
// IMP 0x10089d600 | @24@0:8@16
- (id)parseStreamsForHandle:(id)arg0;
// IMP 0x10089d79c | @24@0:8@16
- (id)parsePackedStreamsForHandle:(id)arg0;
// IMP 0x10089d97c | @32@0:8@16@24
- (id)parseFoldersForHandle:(id)arg0 packedStreams:(id)arg1;
// IMP 0x10089dc28 | v48@0:8@16@24@32^i40
- (void)parseFolderForHandle:(id)arg0 dictionary:(id)arg1 packedStreams:(id)arg2 packedStreamIndex:(int *)arg3;
// IMP 0x10089e2ec | v32@0:8@16@24
- (void)parseSubStreamsInfoForHandle:(id)arg0 folders:(id)arg1;
// IMP 0x10089e89c | v24@0:8@16
- (void)setupDefaultSubStreamsForFolders:(id)arg0;
// IMP 0x10089eb5c | @24@0:8@16
- (id)collectAllSubStreamsFromFolders:(id)arg0;
// IMP 0x10089ec28 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10089ed38 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10089ed84 | @28@0:8@16i24
- (id)handleForStreams:(id)arg0 folderIndex:(int)arg1;
// IMP 0x10089ee10 | @28@0:8@16i24
- (id)outHandleForFolder:(id)arg0 index:(int)arg1;
// IMP 0x10089f3bc | @36@0:8@16@24i32
- (id)inHandleForFolder:(id)arg0 coder:(id)arg1 index:(int)arg2;
// IMP 0x10089f420 | @28@0:8@16i24
- (id)inHandleForFolder:(id)arg0 index:(int)arg1;
// IMP 0x10089f5a8 | i24@0:8@16
- (int)IDForCoder:(id)arg0;
// IMP 0x10089f66c | q24@0:8@16
- (long long)compressedSizeForFolder:(id)arg0;
// IMP 0x10089f734 | q24@0:8@16
- (long long)uncompressedSizeForFolder:(id)arg0;
// IMP 0x10089f7c0 | @24@0:8@16
- (id)compressorNameForFolder:(id)arg0;
// IMP 0x10089f818 | @28@0:8@16i24
- (id)compressorNameForFolder:(id)arg0 index:(int)arg1;
// IMP 0x10089f96c | @24@0:8@16
- (id)compressorNameForCoder:(id)arg0;
// IMP 0x10089fdf0 | B24@0:8@16
- (BOOL)isFolderEncrypted:(id)arg0;
// IMP 0x10089fe48 | B28@0:8@16i24
- (BOOL)isFolderEncrypted:(id)arg0 index:(int)arg1;
// IMP 0x10089ff90 | @16@0:8
- (id)formatName;
// IMP 0x10089c114 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x10089c11c | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x10089c198 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
