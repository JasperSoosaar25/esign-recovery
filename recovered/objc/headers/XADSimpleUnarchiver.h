// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0778
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSimpleUnarchiver : NSObject
// ivar parser encoding=@"XADArchiveParser" offset=8
// ivar unarchiver encoding=@"XADUnarchiver" offset=16
// ivar subunarchiver encoding=@"XADUnarchiver" offset=24
// ivar delegate encoding=@ offset=32
// ivar shouldstop encoding=B offset=40
// ivar destination encoding=@"NSString" offset=48
// ivar enclosingdir encoding=@"NSString" offset=56
// ivar extractsubarchives encoding=B offset=64
// ivar removesolo encoding=B offset=65
// ivar overwrite encoding=B offset=66
// ivar rename encoding=B offset=67
// ivar skip encoding=B offset=68
// ivar copydatetoenclosing encoding=B offset=69
// ivar copydatetosolo encoding=B offset=70
// ivar resetsolodate encoding=B offset=71
// ivar propagatemetadata encoding=B offset=72
// ivar regexes encoding=@"NSMutableArray" offset=80
// ivar indices encoding=@"NSMutableIndexSet" offset=88
// ivar entries encoding=@"NSMutableArray" offset=96
// ivar reasonsforinterest encoding=@"NSMutableArray" offset=104
// ivar renames encoding=@"NSMutableDictionary" offset=112
// ivar resourceforks encoding=@"NSMutableSet" offset=120
// ivar metadata encoding=@ offset=128
// ivar unpackdestination encoding=@"NSString" offset=136
// ivar finaldestination encoding=@"NSString" offset=144
// ivar overridesoloitem encoding=@"NSString" offset=152
// ivar numextracted encoding=i offset=160
// ivar toplevelname encoding=@"NSString" offset=168
// ivar lookslikesolo encoding=B offset=176
// ivar totalsize encoding=q offset=184
// ivar currsize encoding=q offset=192
// ivar totalprogress encoding=q offset=200
// IMP 0x10090a324 | @24@0:8@16
- (id)initWithArchiveParser:(id)arg0;
// IMP 0x10090a334 | @32@0:8@16@24
- (id)initWithArchiveParser:(id)arg0 entries:(id)arg1;
// IMP 0x10090a500 | v16@0:8
- (void)dealloc;
// IMP 0x10090a5c0 | @16@0:8
- (id)archiveParser;
// IMP 0x10090a5e0 | @16@0:8
- (id)outerArchiveParser;
// IMP 0x10090a5e8 | @16@0:8
- (id)innerArchiveParser;
// IMP 0x10090a5f8 | @16@0:8
- (id)reasonsForInterest;
// IMP 0x10090a600 | @16@0:8
- (id)delegate;
// IMP 0x10090a608 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10090a610 | @16@0:8
- (id)password;
// IMP 0x10090a620 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x10090a674 | @16@0:8
- (id)destination;
// IMP 0x10090a67c | v24@0:8@16
- (void)setDestination:(id)arg0;
// IMP 0x10090a6b8 | @16@0:8
- (id)enclosingDirectoryName;
// IMP 0x10090a6c0 | v24@0:8@16
- (void)setEnclosingDirectoryName:(id)arg0;
// IMP 0x10090a6fc | B16@0:8
- (BOOL)removesEnclosingDirectoryForSoloItems;
// IMP 0x10090a704 | v20@0:8B16
- (void)setRemovesEnclosingDirectoryForSoloItems:(BOOL)arg0;
// IMP 0x10090a70c | B16@0:8
- (BOOL)alwaysOverwritesFiles;
// IMP 0x10090a714 | v20@0:8B16
- (void)setAlwaysOverwritesFiles:(BOOL)arg0;
// IMP 0x10090a71c | B16@0:8
- (BOOL)alwaysRenamesFiles;
// IMP 0x10090a724 | v20@0:8B16
- (void)setAlwaysRenamesFiles:(BOOL)arg0;
// IMP 0x10090a72c | B16@0:8
- (BOOL)alwaysSkipsFiles;
// IMP 0x10090a734 | v20@0:8B16
- (void)setAlwaysSkipsFiles:(BOOL)arg0;
// IMP 0x10090a73c | B16@0:8
- (BOOL)extractsSubArchives;
// IMP 0x10090a744 | v20@0:8B16
- (void)setExtractsSubArchives:(BOOL)arg0;
// IMP 0x10090a74c | B16@0:8
- (BOOL)copiesArchiveModificationTimeToEnclosingDirectory;
// IMP 0x10090a754 | v20@0:8B16
- (void)setCopiesArchiveModificationTimeToEnclosingDirectory:(BOOL)arg0;
// IMP 0x10090a75c | B16@0:8
- (BOOL)copiesArchiveModificationTimeToSoloItems;
// IMP 0x10090a764 | v20@0:8B16
- (void)setCopiesArchiveModificationTimeToSoloItems:(BOOL)arg0;
// IMP 0x10090a76c | B16@0:8
- (BOOL)resetsDateForSoloItems;
// IMP 0x10090a774 | v20@0:8B16
- (void)setResetsDateForSoloItems:(BOOL)arg0;
// IMP 0x10090a77c | B16@0:8
- (BOOL)propagatesRelevantMetadata;
// IMP 0x10090a784 | v20@0:8B16
- (void)setPropagatesRelevantMetadata:(BOOL)arg0;
// IMP 0x10090a78c | i16@0:8
- (int)macResourceForkStyle;
// IMP 0x10090a79c | v20@0:8i16
- (void)setMacResourceForkStyle:(int)arg0;
// IMP 0x10090a7e4 | B16@0:8
- (BOOL)preservesPermissions;
// IMP 0x10090a7f4 | v20@0:8B16
- (void)setPreserevesPermissions:(BOOL)arg0;
// IMP 0x10090a83c | d16@0:8
- (double)updateInterval;
// IMP 0x10090a84c | v24@0:8d16
- (void)setUpdateInterval:(double)arg0;
// IMP 0x10090a894 | v24@0:8@16
- (void)addGlobFilter:(id)arg0;
// IMP 0x10090a8ec | v24@0:8@16
- (void)addRegexFilter:(id)arg0;
// IMP 0x10090a938 | v20@0:8i16
- (void)addIndexFilter:(int)arg0;
// IMP 0x10090a984 | v24@0:8@16
- (void)setIndices:(id)arg0;
// IMP 0x10090a9e0 | q16@0:8
- (long long)predictedTotalSize;
// IMP 0x10090a9f0 | q20@0:8B16
- (long long)predictedTotalSizeIgnoringUnknownFiles:(BOOL)arg0;
// IMP 0x10090aaa8 | i16@0:8
- (int)numberOfItemsExtracted;
// IMP 0x10090aab0 | B16@0:8
- (BOOL)wasSoloItem;
// IMP 0x10090aab8 | @16@0:8
- (id)actualDestination;
// IMP 0x10090aac0 | @16@0:8
- (id)soloItem;
// IMP 0x10090ab78 | @16@0:8
- (id)createdItem;
// IMP 0x10090abac | @16@0:8
- (id)createdItemOrActualDestination;
// IMP 0x10090abf8 | i16@0:8
- (int)parse;
// IMP 0x10090aea0 | i32@0:8@16@24
- (int)_setupSubArchiveForEntryWithDataFork:(id)arg0 resourceFork:(id)arg1;
// IMP 0x10090aefc | i16@0:8
- (int)unarchive;
// IMP 0x10090af20 | i16@0:8
- (int)_unarchiveRegularArchive;
// IMP 0x10090b1e4 | i16@0:8
- (int)_unarchiveSubArchive;
// IMP 0x10090b53c | i16@0:8
- (int)_finalizeExtraction;
// IMP 0x10090b62c | v24@0:8@16
- (void)_testForSoloItems:(id)arg0;
// IMP 0x10090b700 | v32@0:8@16@24
- (void)archiveParser:(id)arg0 foundEntryWithDictionary:(id)arg1;
// IMP 0x10090b714 | B24@0:8@16
- (BOOL)archiveParsingShouldStop:(id)arg0;
// IMP 0x10090b720 | v24@0:8@16
- (void)archiveParserNeedsPassword:(id)arg0;
// IMP 0x10090b734 | v32@0:8@16@24
- (void)archiveParser:(id)arg0 findsFileInterestingForReason:(id)arg1;
// IMP 0x10090b748 | v24@0:8@16
- (void)unarchiverNeedsPassword:(id)arg0;
// IMP 0x10090b75c | B40@0:8@16@24^@32
- (BOOL)unarchiver:(id)arg0 shouldExtractEntryWithDictionary:(id)arg1 suggestedPath:(id *)arg2;
// IMP 0x10090bb04 | v40@0:8@16@24@32
- (void)unarchiver:(id)arg0 willExtractEntryWithDictionary:(id)arg1 to:(id)arg2;
// IMP 0x10090bba8 | v44@0:8@16@24@32i40
- (void)unarchiver:(id)arg0 didExtractEntryWithDictionary:(id)arg1 to:(id)arg2 error:(int)arg3;
// IMP 0x10090bc28 | B32@0:8@16@24
- (BOOL)unarchiver:(id)arg0 shouldCreateDirectory:(id)arg1;
// IMP 0x10090bc30 | B32@0:8@16@24
- (BOOL)unarchiver:(id)arg0 shouldDeleteFileAndCreateDirectory:(id)arg1;
// IMP 0x10090bc44 | @40@0:8@16@24@32
- (id)unarchiver:(id)arg0 destinationForLink:(id)arg1 from:(id)arg2;
// IMP 0x10090bc9c | B24@0:8@16
- (BOOL)extractionShouldStopForUnarchiver:(id)arg0;
// IMP 0x10090bca8 | v48@0:8@16@24d32d40
- (void)unarchiver:(id)arg0 extractionProgressForEntryWithDictionary:(id)arg1 fileFraction:(double)arg2 estimatedTotalFraction:(double)arg3;
// IMP 0x10090bd04 | v32@0:8@16@24
- (void)unarchiver:(id)arg0 findsFileInterestingForReason:(id)arg1;
// IMP 0x10090bd18 | B16@0:8
- (BOOL)_shouldStop;
// IMP 0x10090bd60 | @36@0:8@16@24B32
- (id)_checkPath:(id)arg0 forEntryWithDictionary:(id)arg1 deferred:(BOOL)arg2;
// IMP 0x10090bf9c | B36@0:8@16@24B32
- (BOOL)_recursivelyMoveItemAtPath:(id)arg0 toPath:(id)arg1 overwrite:(BOOL)arg2;
// IMP 0x10090a2b8 | @24@0:8@16
+ (id)simpleUnarchiverForPath:(id)arg0;
// IMP 0x10090a2c8 | @32@0:8@16^i24
+ (id)simpleUnarchiverForPath:(id)arg0 error:(int *)arg1;
// IMP 0x10090c144 | @24@0:8@16
+ (id)_findUniquePathForOriginalPath:(id)arg0;
// IMP 0x10090c154 | @32@0:8@16@24
+ (id)_findUniquePathForOriginalPath:(id)arg0 reservedPaths:(id)arg1;
@end
