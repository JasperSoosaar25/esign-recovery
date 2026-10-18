// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b4b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStringPath : XADPath
// ivar string encoding=@"NSString" offset=32
// IMP 0x10087f314 | @24@0:8@16
- (id)initWithComponentString:(id)arg0;
// IMP 0x10087f374 | @32@0:8@16@24
- (id)initWithComponentString:(id)arg0 parent:(id)arg1;
// IMP 0x10087f3d8 | @32@0:8@16@24
- (id)initWithPath:(id)arg0 parent:(id)arg1;
// IMP 0x10087f3f0 | v16@0:8
- (void)dealloc;
// IMP 0x10087f440 | B16@0:8
- (BOOL)_isPartAbsolute;
// IMP 0x10087f460 | B16@0:8
- (BOOL)_isPartEmpty;
// IMP 0x10087f490 | i24@0:8@16
- (int)_depthOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f498 | v32@0:8@16@24
- (void)_addPathComponentsOfPartToArray:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087f4b8 | @24@0:8@16
- (id)_lastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f4c8 | @24@0:8@16
- (id)_firstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f4d8 | @24@0:8@16
- (id)_pathByDeletingLastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f4e0 | @24@0:8@16
- (id)_pathByDeletingFirstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f4e8 | B24@0:8@16
- (BOOL)_canDecodePartWithEncodingName:(id)arg0;
// IMP 0x10087f4f0 | v24@0:8@16
- (void)_appendPathForPartToData:(id)arg0;
// IMP 0x10087f540 | @16@0:8
- (id)_sourceForPart;
// IMP 0x10087f548 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10087f5e4 | Q16@0:8
- (unsigned long long)hash;
@end
