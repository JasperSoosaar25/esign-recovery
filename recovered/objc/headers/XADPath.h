// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b490
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPath : NSObject
// ivar parent encoding=@"XADPath" offset=8
// ivar cachedcanonicalcomponents encoding=@"NSArray" offset=16
// ivar cachedencoding encoding=@"NSString" offset=24
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10087dd9c | @16@0:8
- (id)init;
// IMP 0x10087dddc | @24@0:8@16
- (id)initWithParent:(id)arg0;
// IMP 0x10087de58 | @32@0:8@16@24
- (id)initWithPath:(id)arg0 parent:(id)arg1;
// IMP 0x10087de68 | v16@0:8
- (void)dealloc;
// IMP 0x10087dec0 | B16@0:8
- (BOOL)isAbsolute;
// IMP 0x10087dee8 | B16@0:8
- (BOOL)isEmpty;
// IMP 0x10087df04 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10087df8c | B24@0:8@16
- (BOOL)isCanonicallyEqual:(id)arg0;
// IMP 0x10087dfcc | B32@0:8@16@24
- (BOOL)isCanonicallyEqual:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087e02c | B24@0:8@16
- (BOOL)hasPrefix:(id)arg0;
// IMP 0x10087e06c | B24@0:8@16
- (BOOL)hasCanonicalPrefix:(id)arg0;
// IMP 0x10087e0ac | B32@0:8@16@24
- (BOOL)hasCanonicalPrefix:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087e1fc | i16@0:8
- (int)depth;
// IMP 0x10087e234 | i24@0:8@16
- (int)depthWithEncodingName:(id)arg0;
// IMP 0x10087e28c | @16@0:8
- (id)pathComponents;
// IMP 0x10087e2c4 | @24@0:8@16
- (id)pathComponentsWithEncodingName:(id)arg0;
// IMP 0x10087e330 | @16@0:8
- (id)canonicalPathComponents;
// IMP 0x10087e368 | @24@0:8@16
- (id)canonicalPathComponentsWithEncodingName:(id)arg0;
// IMP 0x10087e5f0 | v32@0:8@16@24
- (void)_addPathComponentsToArray:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087e64c | @16@0:8
- (id)lastPathComponent;
// IMP 0x10087e684 | @24@0:8@16
- (id)lastPathComponentWithEncodingName:(id)arg0;
// IMP 0x10087e690 | @16@0:8
- (id)firstPathComponent;
// IMP 0x10087e6c8 | @24@0:8@16
- (id)firstPathComponentWithEncodingName:(id)arg0;
// IMP 0x10087e6f0 | @16@0:8
- (id)firstCanonicalPathComponent;
// IMP 0x10087e728 | @24@0:8@16
- (id)firstCanonicalPathComponentWithEncodingName:(id)arg0;
// IMP 0x10087e784 | @16@0:8
- (id)pathByDeletingLastPathComponent;
// IMP 0x10087e7bc | @24@0:8@16
- (id)pathByDeletingLastPathComponentWithEncodingName:(id)arg0;
// IMP 0x10087e80c | @16@0:8
- (id)pathByDeletingFirstPathComponent;
// IMP 0x10087e844 | @24@0:8@16
- (id)pathByDeletingFirstPathComponentWithEncodingName:(id)arg0;
// IMP 0x10087e8d8 | @24@0:8@16
- (id)pathByAppendingXADStringComponent:(id)arg0;
// IMP 0x10087e9b0 | @24@0:8@16
- (id)pathByAppendingPath:(id)arg0;
// IMP 0x10087ea20 | @24@0:8@16
- (id)_copyWithParent:(id)arg0;
// IMP 0x10087ea60 | @16@0:8
- (id)sanitizedPathString;
// IMP 0x10087ea98 | @24@0:8@16
- (id)sanitizedPathStringWithEncodingName:(id)arg0;
// IMP 0x10087ec14 | B24@0:8@16
- (BOOL)canDecodeWithEncodingName:(id)arg0;
// IMP 0x10087ec6c | @16@0:8
- (id)string;
// IMP 0x10087eca4 | @24@0:8@16
- (id)stringWithEncodingName:(id)arg0;
// IMP 0x10087ee7c | @16@0:8
- (id)data;
// IMP 0x10087eed8 | v24@0:8@16
- (void)_appendPathToData:(id)arg0;
// IMP 0x10087ef64 | B16@0:8
- (BOOL)encodingIsKnown;
// IMP 0x10087ef98 | @16@0:8
- (id)encodingName;
// IMP 0x10087efd4 | f16@0:8
- (float)confidence;
// IMP 0x10087f008 | @16@0:8
- (id)source;
// IMP 0x10087f04c | B24@0:8Q16
- (BOOL)canDecodeWithEncoding:(unsigned long long)arg0;
// IMP 0x10087f08c | @24@0:8Q16
- (id)stringWithEncoding:(unsigned long long)arg0;
// IMP 0x10087f0cc | @24@0:8Q16
- (id)sanitizedPathStringWithEncoding:(unsigned long long)arg0;
// IMP 0x10087f10c | Q16@0:8
- (unsigned long long)encoding;
// IMP 0x10087f140 | @16@0:8
- (id)description;
// IMP 0x10087f14c | Q16@0:8
- (unsigned long long)hash;
// IMP 0x10087f154 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x10087f158 | @16@0:8
- (id)safePath;
// IMP 0x10087f2bc | B16@0:8
- (BOOL)_isPartAbsolute;
// IMP 0x10087f2c4 | B16@0:8
- (BOOL)_isPartEmpty;
// IMP 0x10087f2cc | i24@0:8@16
- (int)_depthOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f2d4 | v32@0:8@16@24
- (void)_addPathComponentsOfPartToArray:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087f2d8 | @24@0:8@16
- (id)_lastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f2e4 | @24@0:8@16
- (id)_firstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f2f0 | @24@0:8@16
- (id)_pathByDeletingLastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f2f8 | @24@0:8@16
- (id)_pathByDeletingFirstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f300 | B24@0:8@16
- (BOOL)_canDecodePartWithEncodingName:(id)arg0;
// IMP 0x10087f308 | v24@0:8@16
- (void)_appendPathForPartToData:(id)arg0;
// IMP 0x10087f30c | @16@0:8
- (id)_sourceForPart;
// IMP 0x10087d744 | @16@0:8
+ (id)emptyPath;
// IMP 0x10087d784 | @24@0:8@16
+ (id)pathWithString:(id)arg0;
// IMP 0x10087d7bc | @24@0:8@16
+ (id)pathWithStringComponents:(id)arg0;
// IMP 0x10087d898 | @24@0:8@16
+ (id)separatedPathWithString:(id)arg0;
// IMP 0x10087d9b8 | @40@0:8@16@24r*32
+ (id)decodedPathWithData:(id)arg0 encodingName:(id)arg1 separators:(char *)arg2;
// IMP 0x10087dc88 | @40@0:8@16@24r*32
+ (id)analyzedPathWithData:(id)arg0 source:(id)arg1 separators:(char *)arg2;
@end
