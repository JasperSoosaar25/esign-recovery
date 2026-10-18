// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b4e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRawPath : XADPath
// ivar data encoding=@"NSData" offset=32
// ivar source encoding=@"XADStringSource" offset=40
// ivar separators encoding=r* offset=48
// IMP 0x10087f638 | @40@0:8@16@24r*32
- (id)initWithData:(id)arg0 source:(id)arg1 separators:(char *)arg2;
// IMP 0x10087f6c8 | @48@0:8@16@24r*32@40
- (id)initWithData:(id)arg0 source:(id)arg1 separators:(char *)arg2 parent:(id)arg3;
// IMP 0x10087f75c | @32@0:8@16@24
- (id)initWithPath:(id)arg0 parent:(id)arg1;
// IMP 0x10087f794 | v16@0:8
- (void)dealloc;
// IMP 0x10087f7f4 | B16@0:8
- (BOOL)_isPartAbsolute;
// IMP 0x10087f864 | B16@0:8
- (BOOL)_isPartEmpty;
// IMP 0x10087f894 | i24@0:8@16
- (int)_depthOfPartWithEncodingName:(id)arg0;
// IMP 0x10087f934 | v32@0:8@16@24
- (void)_addPathComponentsOfPartToArray:(id)arg0 encodingName:(id)arg1;
// IMP 0x10087fa20 | @24@0:8@16
- (id)_lastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087fb14 | @24@0:8@16
- (id)_firstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087fbbc | @24@0:8@16
- (id)_pathByDeletingLastPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087fd68 | @24@0:8@16
- (id)_pathByDeletingFirstPathComponentOfPartWithEncodingName:(id)arg0;
// IMP 0x10087feb8 | B24@0:8@16
- (BOOL)_canDecodePartWithEncodingName:(id)arg0;
// IMP 0x10087fee0 | v24@0:8@16
- (void)_appendPathForPartToData:(id)arg0;
// IMP 0x10087ff00 | @16@0:8
- (id)_sourceForPart;
// IMP 0x10087ff10 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x10087ffe4 | Q16@0:8
- (unsigned long long)hash;
@end
