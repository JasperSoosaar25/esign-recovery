// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1160
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPlatform : NSObject
// IMP 0x100926388 | i40@0:8@16@24@32
+ (int)extractResourceForkEntryWithDictionary:(id)arg0 unarchiver:(id)arg1 toPath:(id)arg2;
// IMP 0x100926390 | i44@0:8@16@24@32B40
+ (int)updateFileAttributesAtPath:(id)arg0 forEntryWithDictionary:(id)arg1 parser:(id)arg2 preservePermissions:(BOOL)arg3;
// IMP 0x100926734 | i32@0:8@16@24
+ (int)createLinkAtPath:(id)arg0 withDestinationPath:(id)arg1;
// IMP 0x1009267ac | @24@0:8@16
+ (id)readCloneableMetadataFromPath:(id)arg0;
// IMP 0x1009267b4 | v32@0:8@16@24
+ (void)writeCloneableMetadata:(id)arg0 toPath:(id)arg1;
// IMP 0x1009267b8 | B32@0:8@16@24
+ (BOOL)copyDateFromPath:(id)arg0 toPath:(id)arg1;
// IMP 0x100926894 | B24@0:8@16
+ (BOOL)resetDateAtPath:(id)arg0;
// IMP 0x1009268c4 | B24@0:8@16
+ (BOOL)fileExistsAtPath:(id)arg0;
// IMP 0x1009268d4 | B32@0:8@16^B24
+ (BOOL)fileExistsAtPath:(id)arg0 isDirectory:(BOOL *)arg1;
// IMP 0x100926934 | @24@0:8@16
+ (id)uniqueDirectoryPathWithParentDirectory:(id)arg0;
// IMP 0x1009269d8 | @24@0:8@16
+ (id)sanitizedPathComponent:(id)arg0;
// IMP 0x100926ad4 | @24@0:8@16
+ (id)contentsOfDirectoryAtPath:(id)arg0;
// IMP 0x100926b14 | B32@0:8@16@24
+ (BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1;
// IMP 0x100926b5c | B24@0:8@16
+ (BOOL)removeItemAtPath:(id)arg0;
// IMP 0x100926b9c | @24@0:8@16
+ (id)handleForReadingResourceForkAtPath:(id)arg0;
// IMP 0x100926ba4 | d16@0:8
+ (double)currentTimeInSeconds;
@end
