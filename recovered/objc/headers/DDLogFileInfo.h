// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82b98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLogFileInfo : NSObject
// ivar _filePath encoding=@"NSString" offset=8
// ivar _fileName encoding=@"NSString" offset=16
// ivar _fileAttributes encoding=@"NSDictionary" offset=24
// ivar _creationDate encoding=@"NSDate" offset=32
// ivar _modificationDate encoding=@"NSDate" offset=40
// ivar _fileSize encoding=Q offset=48
// ivar filePath encoding=@"NSString" offset=56
// property filePath attributes=T@"NSString",R,N,VfilePath
// property fileName attributes=T@"NSString",R,D,N
// property fileAttributes attributes=T@"NSDictionary",R,D,N
// property creationDate attributes=T@"NSDate",R,D,N
// property modificationDate attributes=T@"NSDate",R,D,N
// property fileSize attributes=TQ,R,D,N
// property age attributes=Td,R,D,N
// property isSymlink attributes=TB,R,N
// property isArchived attributes=TB,D,N
// IMP 0x10040eeec | @24@0:8@16
- (id)initWithFilePath:(id)arg0;
// IMP 0x10040ef64 | @16@0:8
- (id)fileAttributes;
// IMP 0x10040f018 | @16@0:8
- (id)fileName;
// IMP 0x10040f060 | @16@0:8
- (id)modificationDate;
// IMP 0x10040f0cc | @16@0:8
- (id)creationDate;
// IMP 0x10040f138 | Q16@0:8
- (unsigned long long)fileSize;
// IMP 0x10040f1b0 | d16@0:8
- (double)age;
// IMP 0x10040f1f4 | B16@0:8
- (BOOL)isSymlink;
// IMP 0x10040f258 | @16@0:8
- (id)description;
// IMP 0x10040f4c4 | B16@0:8
- (BOOL)isArchived;
// IMP 0x10040f4d0 | v20@0:8B16
- (void)setIsArchived:(BOOL)arg0;
// IMP 0x10040f4ec | v16@0:8
- (void)reset;
// IMP 0x10040f534 | v24@0:8@16
- (void)renameFile:(id)arg0;
// IMP 0x10040f6b0 | B24@0:8@16
- (BOOL)hasExtendedAttributeWithName:(id)arg0;
// IMP 0x10040f75c | v24@0:8@16
- (void)addExtendedAttributeWithName:(id)arg0;
// IMP 0x10040f834 | v24@0:8@16
- (void)removeExtendedAttributeWithName:(id)arg0;
// IMP 0x10040f914 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10040f9a0 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10040f9a8 | q32@0:8@16@24
- (long long)reverseCompareDatesUs:(id)arg0 them:(id)arg1;
// IMP 0x10040f9d4 | q24@0:8@16
- (long long)reverseCompareByCreationDate:(id)arg0;
// IMP 0x10040fa5c | q24@0:8@16
- (long long)reverseCompareByModificationDate:(id)arg0;
// IMP 0x10040fae4 | @16@0:8
- (id)filePath;
// IMP 0x10040faec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10040ee98 | @24@0:8@16
+ (id)logFileWithPath:(id)arg0;
@end
