// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97ee0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMFileUtility : NSObject
// IMP 0x1006d06e0 | B24@0:8@16
+ (BOOL)isExistAtPath:(id)arg0;
// IMP 0x1006d075c | B24@0:8@16
+ (BOOL)makeAbsDir:(id)arg0;
// IMP 0x1006d07e4 | B32@0:8@16@24
+ (BOOL)saveData:(id)arg0 inPath:(id)arg1;
// IMP 0x1006d0878 | B24@0:8@16
+ (BOOL)removeFile:(id)arg0;
// IMP 0x1006d0914 | @16@0:8
+ (id)bgCacheFilePath;
// IMP 0x1006d09e4 | @16@0:8
+ (id)sqliteDBFilePath;
// IMP 0x1006d0a48 | @16@0:8
+ (id)uaDBFilePath;
// IMP 0x1006d0aac | @16@0:8
+ (id)agManifestPath;
// IMP 0x1006d0b10 | @16@0:8
+ (id)envelopeFilePath;
// IMP 0x1006d0be4 | @16@0:8
+ (id)cacheParentDir;
// IMP 0x1006d0c64 | @16@0:8
+ (id)umengDirectory;
// IMP 0x1006d0dd8 | @24@0:8@16
+ (id)itemsInAbsDir:(id)arg0;
// IMP 0x1006d1038 | v24@0:8@16
+ (void)sortFileWithCreatedTime:(id)arg0;
// IMP 0x1006d123c | @16@0:8
+ (id)envelopeFiles;
// IMP 0x1006d1434 | @24@0:8@16
+ (id)envelopeFilesWithSubFolder:(id)arg0;
// IMP 0x1006d171c | @32@0:8@16@24
+ (id)generateEnvelopeNamePrefix:(id)arg0 withTS:(id)arg1;
// IMP 0x1006d1804 | @40@0:8@16@24@32
+ (id)generateEnvelopeNamePrefix:(id)arg0 withTS:(id)arg1 subFolder:(id)arg2;
// IMP 0x1006d1a18 | @16@0:8
+ (id)umengStatelessDirectory;
// IMP 0x1006d1b68 | @16@0:8
+ (id)umStatelessDirectory;
// IMP 0x1006d1cb8 | @24@0:8@16
+ (id)statelessDirWithEncodeURL:(id)arg0;
// IMP 0x1006d1d94 | @40@0:8@16@24@32
+ (id)generateEnvelopeNamePrefix:(id)arg0 withTS:(id)arg1 pathURL:(id)arg2;
// IMP 0x1006d1edc | @32@0:8@16@24
+ (id)itemsInDir:(id)arg0 validSuffix:(id)arg1;
// IMP 0x1006d21bc | @16@0:8
+ (id)statelessEnvelopeFile;
// IMP 0x1006d2514 | @16@0:8
+ (id)ucDBFilePath;
@end
