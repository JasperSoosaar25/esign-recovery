// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c937a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKSourceLocalFile : SVGKSource
// ivar _wasRelative encoding=B offset=8
// ivar _filePath encoding=@"NSString" offset=16
// property wasRelative attributes=TB,N,V_wasRelative
// property filePath attributes=T@"NSString",&,N,V_filePath
// IMP 0x100582e50 | @16@0:8
- (id)keyForAppleDictionaries;
// IMP 0x100583244 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100583334 | @24@0:8@16
- (id)sourceFromRelativePath:(id)arg0;
// IMP 0x100583458 | @16@0:8
- (id)description;
// IMP 0x10058355c | @16@0:8
- (id)filePath;
// IMP 0x10058356c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x100583580 | B16@0:8
- (BOOL)wasRelative;
// IMP 0x100583590 | v20@0:8B16
- (void)setWasRelative:(BOOL)arg0;
// IMP 0x1005835a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100582e54 | Q24@0:8@16
+ (unsigned long long)sizeInBytesOfFilePath:(id)arg0;
// IMP 0x100582ef4 | @24@0:8@16
+ (id)sourceFromFilename:(id)arg0;
// IMP 0x100582f94 | @32@0:8@16@24
+ (id)internalSourceAnywhereInBundle:(id)arg0 usingName:(id)arg1;
// IMP 0x1005831c8 | @24@0:8@16
+ (id)internalSourceAnywhereInBundleUsingName:(id)arg0;
@end
