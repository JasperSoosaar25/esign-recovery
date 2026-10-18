// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9bf20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADArchiveParser : NSObject
// ivar sourcehandle encoding=@"XADHandle" offset=8
// ivar skiphandle encoding=@"XADSkipHandle" offset=16
// ivar resourcefork encoding=@"XADResourceFork" offset=24
// ivar delegate encoding=@ offset=32
// ivar password encoding=@"NSString" offset=40
// ivar passwordencodingname encoding=@"NSString" offset=48
// ivar caresaboutpasswordencoding encoding=B offset=56
// ivar properties encoding=@"NSMutableDictionary" offset=64
// ivar stringsource encoding=@"XADStringSource" offset=72
// ivar currindex encoding=i offset=80
// ivar parsersolidobj encoding=@ offset=88
// ivar firstsoliddict encoding=@"NSMutableDictionary" offset=96
// ivar prevsoliddict encoding=@"NSMutableDictionary" offset=104
// ivar currsolidobj encoding=@ offset=112
// ivar currsolidhandle encoding=@"XADHandle" offset=120
// ivar forcesolid encoding=B offset=128
// ivar shouldstop encoding=B offset=129
// IMP 0x100917524 | @32@0:8@16@24
- (id)descriptionOfValueInDictionary:(id)arg0 key:(id)arg1;
// IMP 0x1009181e8 | @24@0:8@16
- (id)descriptionOfKey:(id)arg0;
// IMP 0x1009190ec | @24@0:8@16
- (id)descriptiveOrderingOfKeysInDictionary:(id)arg0;
// IMP 0x100883f28 | @16@0:8
- (id)init;
// IMP 0x100883fc8 | v16@0:8
- (void)dealloc;
// IMP 0x100884058 | @16@0:8
- (id)handle;
// IMP 0x100884060 | v24@0:8@16
- (void)setHandle:(id)arg0;
// IMP 0x100884108 | @16@0:8
- (id)resourceFork;
// IMP 0x100884110 | v24@0:8@16
- (void)setResourceFork:(id)arg0;
// IMP 0x100884144 | @16@0:8
- (id)name;
// IMP 0x10088415c | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1008841a0 | @16@0:8
- (id)filename;
// IMP 0x1008841d4 | v24@0:8@16
- (void)setFilename:(id)arg0;
// IMP 0x100884240 | @16@0:8
- (id)allFilenames;
// IMP 0x100884258 | v24@0:8@16
- (void)setAllFilenames:(id)arg0;
// IMP 0x1008842b4 | @16@0:8
- (id)delegate;
// IMP 0x1008842bc | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1008842c4 | @16@0:8
- (id)properties;
// IMP 0x1008842cc | @16@0:8
- (id)currentFilename;
// IMP 0x100884340 | B16@0:8
- (BOOL)isEncrypted;
// IMP 0x10088437c | @16@0:8
- (id)password;
// IMP 0x1008843c4 | B16@0:8
- (BOOL)hasPassword;
// IMP 0x1008843d4 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x100884420 | @16@0:8
- (id)encodingName;
// IMP 0x100884430 | f16@0:8
- (float)encodingConfidence;
// IMP 0x100884440 | v24@0:8@16
- (void)setEncodingName:(id)arg0;
// IMP 0x100884450 | B16@0:8
- (BOOL)caresAboutPasswordEncoding;
// IMP 0x100884458 | @16@0:8
- (id)passwordEncodingName;
// IMP 0x100884474 | v24@0:8@16
- (void)setPasswordEncodingName:(id)arg0;
// IMP 0x1008844b0 | @16@0:8
- (id)stringSource;
// IMP 0x1008844b8 | @24@0:8@16
- (id)linkDestinationForDictionary:(id)arg0;
// IMP 0x1008845b4 | @32@0:8@16^i24
- (id)linkDestinationForDictionary:(id)arg0 error:(int *)arg1;
// IMP 0x100884634 | @24@0:8@16
- (id)extendedAttributesForDictionary:(id)arg0;
// IMP 0x100884734 | @24@0:8@16
- (id)finderInfoForDictionary:(id)arg0;
// IMP 0x100884924 | B16@0:8
- (BOOL)wasStopped;
// IMP 0x10088492c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x10088493c | B16@0:8
- (BOOL)testChecksum;
// IMP 0x100884998 | i16@0:8
- (int)testChecksumWithoutExceptions;
// IMP 0x100884c64 | B16@0:8
- (BOOL)shouldKeepParsing;
// IMP 0x100884cb8 | @24@0:8@16
- (id)handleAtDataOffsetForDictionary:(id)arg0;
// IMP 0x100884de0 | @16@0:8
- (id)skipHandle;
// IMP 0x100884e24 | @20@0:8B16
- (id)zeroLengthHandleWithChecksum:(BOOL)arg0;
// IMP 0x100884ea4 | @24@0:8@16
- (id)subHandleFromSolidStreamForEntryWithDictionary:(id)arg0;
// IMP 0x100884fb4 | B16@0:8
- (BOOL)hasVolumes;
// IMP 0x100884ff4 | @16@0:8
- (id)volumeSizes;
// IMP 0x1008850a8 | @16@0:8
- (id)currentHandle;
// IMP 0x100885110 | v32@0:8@16@24
- (void)setObject:(id)arg0 forPropertyKey:(id)arg1;
// IMP 0x100885120 | v24@0:8@16
- (void)addPropertiesFromDictionary:(id)arg0;
// IMP 0x100885130 | v20@0:8B16
- (void)setIsMacArchive:(BOOL)arg0;
// IMP 0x100885140 | v24@0:8@16
- (void)addEntryWithDictionary:(id)arg0;
// IMP 0x100885150 | v28@0:8@16B24
- (void)addEntryWithDictionary:(id)arg0 retainPosition:(BOOL)arg1;
// IMP 0x1008858cc | @24@0:8@16
- (id)XADStringWithString:(id)arg0;
// IMP 0x1008858e0 | @24@0:8@16
- (id)XADStringWithData:(id)arg0;
// IMP 0x1008858fc | @32@0:8@16@24
- (id)XADStringWithData:(id)arg0 encodingName:(id)arg1;
// IMP 0x100885910 | @28@0:8r^v16i24
- (id)XADStringWithBytes:(void *)arg0 length:(int)arg1;
// IMP 0x10088595c | @36@0:8r^v16i24@28
- (id)XADStringWithBytes:(void *)arg0 length:(int)arg1 encodingName:(id)arg2;
// IMP 0x1008859a8 | @24@0:8r*16
- (id)XADStringWithCString:(char *)arg0;
// IMP 0x100885a10 | @32@0:8r*16@24
- (id)XADStringWithCString:(char *)arg0 encodingName:(id)arg1;
// IMP 0x100885a78 | @16@0:8
- (id)XADPath;
// IMP 0x100885a8c | @24@0:8@16
- (id)XADPathWithString:(id)arg0;
// IMP 0x100885aa0 | @24@0:8@16
- (id)XADPathWithUnseparatedString:(id)arg0;
// IMP 0x100885ab4 | @32@0:8@16r*24
- (id)XADPathWithData:(id)arg0 separators:(char *)arg1;
// IMP 0x100885ad4 | @40@0:8@16@24r*32
- (id)XADPathWithData:(id)arg0 encodingName:(id)arg1 separators:(char *)arg2;
// IMP 0x100885ae8 | @36@0:8r^v16i24r*28
- (id)XADPathWithBytes:(void *)arg0 length:(int)arg1 separators:(char *)arg2;
// IMP 0x100885b3c | @44@0:8r^v16i24@28r*36
- (id)XADPathWithBytes:(void *)arg0 length:(int)arg1 encodingName:(id)arg2 separators:(char *)arg3;
// IMP 0x100885b90 | @32@0:8r*16r*24
- (id)XADPathWithCString:(char *)arg0 separators:(char *)arg1;
// IMP 0x100885c00 | @40@0:8r*16@24r*32
- (id)XADPathWithCString:(char *)arg0 encodingName:(id)arg1 separators:(char *)arg2;
// IMP 0x100885c70 | @16@0:8
- (id)encodedPassword;
// IMP 0x100885ccc | r*16@0:8
- (char *)encodedCStringPassword;
// IMP 0x100885d2c | v24@0:8@16
- (void)reportInterestingFileWithReason:(id)arg0;
// IMP 0x100885dfc | v16@0:8
- (void)parse;
// IMP 0x100885e00 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x100885e08 | @16@0:8
- (id)formatName;
// IMP 0x100885e10 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x100885e18 | i16@0:8
- (int)parseWithoutExceptions;
// IMP 0x100885e9c | @36@0:8@16B24^i28
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1 error:(int *)arg2;
// IMP 0x1008828a4 | v16@0:8
+ (void)initialize;
// IMP 0x100883034 | #56@0:8@16@24@32@40@48
+ (Class)archiveParserClassForHandle:(id)arg0 firstBytes:(id)arg1 resourceFork:(id)arg2 name:(id)arg3 propertiesToAdd:(id)arg4;
// IMP 0x10088322c | #56@0:8@16@24@32@40@48
+ (Class)archiveParserFromParsersWithFloatingSignature:(id)arg0 forHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3 propertiesToAdd:(id)arg4;
// IMP 0x100883500 | B56@0:8#16@24@32@40@48
+ (BOOL)isValidParserClass:(Class)arg0 forHandle:(id)arg1 firstBytes:(id)arg2 name:(id)arg3 propertiesToAdd:(id)arg4;
// IMP 0x100883568 | @32@0:8@16@24
+ (id)archiveParserForHandle:(id)arg0 name:(id)arg1;
// IMP 0x10088357c | @40@0:8@16@24^i32
+ (id)archiveParserForHandle:(id)arg0 name:(id)arg1 error:(int *)arg2;
// IMP 0x100883604 | @40@0:8@16@24@32
+ (id)archiveParserForHandle:(id)arg0 resourceFork:(id)arg1 name:(id)arg2;
// IMP 0x100883668 | @48@0:8@16@24@32^i40
+ (id)archiveParserForHandle:(id)arg0 resourceFork:(id)arg1 name:(id)arg2 error:(int *)arg3;
// IMP 0x1008836e8 | @40@0:8@16@24@32
+ (id)archiveParserForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x1008836fc | @48@0:8@16@24@32^i40
+ (id)archiveParserForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 error:(int *)arg3;
// IMP 0x100883784 | @48@0:8@16@24@32@40
+ (id)archiveParserForHandle:(id)arg0 firstBytes:(id)arg1 resourceFork:(id)arg2 name:(id)arg3;
// IMP 0x100883860 | @56@0:8@16@24@32@40^i48
+ (id)archiveParserForHandle:(id)arg0 firstBytes:(id)arg1 resourceFork:(id)arg2 name:(id)arg3 error:(int *)arg4;
// IMP 0x1008838e0 | @24@0:8@16
+ (id)archiveParserForPath:(id)arg0;
// IMP 0x100883ba0 | @32@0:8@16^i24
+ (id)archiveParserForPath:(id)arg0 error:(int *)arg1;
// IMP 0x100883c20 | @36@0:8@16@24B32
+ (id)archiveParserForEntryWithDictionary:(id)arg0 archiveParser:(id)arg1 wantChecksum:(BOOL)arg2;
// IMP 0x100883c38 | @44@0:8@16@24B32^i36
+ (id)archiveParserForEntryWithDictionary:(id)arg0 archiveParser:(id)arg1 wantChecksum:(BOOL)arg2 error:(int *)arg3;
// IMP 0x100883cc4 | @44@0:8@16@24@32B40
+ (id)archiveParserForEntryWithDictionary:(id)arg0 resourceForkDictionary:(id)arg1 archiveParser:(id)arg2 wantChecksum:(BOOL)arg3;
// IMP 0x100883ea8 | @52@0:8@16@24@32B40^i44
+ (id)archiveParserForEntryWithDictionary:(id)arg0 resourceForkDictionary:(id)arg1 archiveParser:(id)arg2 wantChecksum:(BOOL)arg3 error:(int *)arg4;
// IMP 0x100884a14 | @32@0:8@16@24
+ (id)scanForVolumesWithFilename:(id)arg0 regex:(id)arg1;
// IMP 0x100884a24 | @40@0:8@16@24@32
+ (id)scanForVolumesWithFilename:(id)arg0 regex:(id)arg1 firstFileExtension:(id)arg2;
// IMP 0x100885dd8 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x100885de0 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x100885de8 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
// IMP 0x100885df4 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
@end
