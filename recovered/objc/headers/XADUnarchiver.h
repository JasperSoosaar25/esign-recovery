// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b7a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADUnarchiver : NSObject
// ivar parser encoding=@"XADArchiveParser" offset=8
// ivar destination encoding=@"NSString" offset=16
// ivar forkstyle encoding=i offset=24
// ivar preservepermissions encoding=B offset=28
// ivar updateinterval encoding=d offset=32
// ivar delegate encoding=@ offset=40
// ivar shouldstop encoding=B offset=48
// ivar deferreddirectories encoding=@"NSMutableArray" offset=56
// ivar deferredlinks encoding=@"NSMutableArray" offset=64
// IMP 0x100880ea8 | @24@0:8@16
- (id)initWithArchiveParser:(id)arg0;
// IMP 0x100880f54 | v16@0:8
- (void)dealloc;
// IMP 0x100880fb4 | @16@0:8
- (id)archiveParser;
// IMP 0x100880fbc | @16@0:8
- (id)delegate;
// IMP 0x100880fc4 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100880fcc | @16@0:8
- (id)destination;
// IMP 0x100880fd4 | v24@0:8@16
- (void)setDestination:(id)arg0;
// IMP 0x100881008 | i16@0:8
- (int)macResourceForkStyle;
// IMP 0x100881010 | v20@0:8i16
- (void)setMacResourceForkStyle:(int)arg0;
// IMP 0x100881018 | B16@0:8
- (BOOL)preservesPermissions;
// IMP 0x100881020 | v20@0:8B16
- (void)setPreserevesPermissions:(BOOL)arg0;
// IMP 0x100881028 | d16@0:8
- (double)updateInterval;
// IMP 0x100881030 | v24@0:8d16
- (void)setUpdateInterval:(double)arg0;
// IMP 0x100881038 | i16@0:8
- (int)parseAndUnarchive;
// IMP 0x100881104 | v32@0:8@16@24
- (void)archiveParser:(id)arg0 foundEntryWithDictionary:(id)arg1;
// IMP 0x100881114 | B24@0:8@16
- (BOOL)archiveParsingShouldStop:(id)arg0;
// IMP 0x100881120 | v24@0:8@16
- (void)archiveParserNeedsPassword:(id)arg0;
// IMP 0x100881134 | v32@0:8@16@24
- (void)archiveParser:(id)arg0 findsFileInterestingForReason:(id)arg1;
// IMP 0x100881148 | i24@0:8@16
- (int)extractEntryWithDictionary:(id)arg0;
// IMP 0x10088115c | i28@0:8@16B24
- (int)extractEntryWithDictionary:(id)arg0 forceDirectories:(BOOL)arg1;
// IMP 0x100881170 | i32@0:8@16@24
- (int)extractEntryWithDictionary:(id)arg0 as:(id)arg1;
// IMP 0x100881180 | i36@0:8@16@24B32
- (int)extractEntryWithDictionary:(id)arg0 as:(id)arg1 forceDirectories:(BOOL)arg2;
// IMP 0x1008815f0 | i16@0:8
- (int)finishExtractions;
// IMP 0x100881634 | i16@0:8
- (int)_fixDeferredLinks;
// IMP 0x100881740 | i16@0:8
- (int)_fixDeferredDirectories;
// IMP 0x100881974 | @36@0:8@16B24^i28
- (id)unarchiverForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1 error:(int *)arg2;
// IMP 0x10088198c | @44@0:8@16@24B32^i36
- (id)unarchiverForEntryWithDictionary:(id)arg0 resourceForkDictionary:(id)arg1 wantChecksum:(BOOL)arg2 error:(int *)arg3;
// IMP 0x100881a54 | i32@0:8@16@24
- (int)_extractFileEntryWithDictionary:(id)arg0 as:(id)arg1;
// IMP 0x100881ae4 | i32@0:8@16@24
- (int)_extractDirectoryEntryWithDictionary:(id)arg0 as:(id)arg1;
// IMP 0x100881af4 | i32@0:8@16@24
- (int)_extractLinkEntryWithDictionary:(id)arg0 as:(id)arg1;
// IMP 0x100881d18 | i40@0:8@16@24@32
- (int)_extractArchiveEntryWithDictionary:(id)arg0 to:(id)arg1 name:(id)arg2;
// IMP 0x100881de8 | i32@0:8@16@24
- (int)_extractResourceForkEntryWithDictionary:(id)arg0 asAppleDoubleFile:(id)arg1;
// IMP 0x100881f40 | i36@0:8@16@24B32
- (int)_updateFileAttributesAtPath:(id)arg0 forEntryWithDictionary:(id)arg1 deferDirectories:(BOOL)arg2;
// IMP 0x100882014 | i24@0:8@16
- (int)_ensureDirectoryExists:(id)arg0;
// IMP 0x100882154 | i32@0:8@16@24
- (int)runExtractorWithDictionary:(id)arg0 outputHandle:(id)arg1;
// IMP 0x100882170 | i36@0:8@16*24i32
- (int)_outputToHandle:(id)arg0 bytes:(char *)arg1 length:(int)arg2;
// IMP 0x1008821a8 | i48@0:8@16@24:32@40
- (int)runExtractorWithDictionary:(id)arg0 outputTarget:(id)arg1 selector:(SEL)arg2 argument:(id)arg3;
// IMP 0x100882560 | @32@0:8@16@24
- (id)adjustPathString:(id)arg0 forEntryWithDictionary:(id)arg1;
// IMP 0x10088267c | B16@0:8
- (BOOL)_shouldStop;
// IMP 0x100880e0c | @24@0:8@16
+ (id)unarchiverForArchiveParser:(id)arg0;
// IMP 0x100880e3c | @24@0:8@16
+ (id)unarchiverForPath:(id)arg0;
// IMP 0x100880e4c | @32@0:8@16^i24
+ (id)unarchiverForPath:(id)arg0 error:(int *)arg1;
@end
