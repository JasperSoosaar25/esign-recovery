// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0ff8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFStream : NSObject
// ivar dict encoding=@"NSDictionary" offset=8
// ivar fh encoding=@"XADHandle" offset=16
// ivar offs encoding=q offset=24
// ivar ref encoding=@"PDFObjectReference" offset=32
// ivar parser encoding=@"PDFParser" offset=40
// IMP 0x1009241f4 | @56@0:8@16@24q32@40@48
- (id)initWithDictionary:(id)arg0 fileHandle:(id)arg1 offset:(long long)arg2 reference:(id)arg3 parser:(id)arg4;
// IMP 0x100924284 | v16@0:8
- (void)dealloc;
// IMP 0x1009242dc | @16@0:8
- (id)dictionary;
// IMP 0x1009242e4 | @16@0:8
- (id)reference;
// IMP 0x1009242ec | B16@0:8
- (BOOL)isImage;
// IMP 0x1009243a8 | B16@0:8
- (BOOL)isJPEGImage;
// IMP 0x100924400 | B16@0:8
- (BOOL)isJPEG2000Image;
// IMP 0x10092442c | i16@0:8
- (int)imageWidth;
// IMP 0x100924448 | i16@0:8
- (int)imageHeight;
// IMP 0x100924464 | i16@0:8
- (int)imageBitsPerComponent;
// IMP 0x1009244c8 | i16@0:8
- (int)imageType;
// IMP 0x10092453c | i16@0:8
- (int)numberOfImageComponents;
// IMP 0x1009245b0 | @16@0:8
- (id)imageColourSpaceName;
// IMP 0x1009245f4 | i16@0:8
- (int)imagePaletteType;
// IMP 0x10092463c | i16@0:8
- (int)numberOfImagePaletteComponents;
// IMP 0x100924684 | @16@0:8
- (id)imagePaletteColourSpaceName;
// IMP 0x1009246cc | i16@0:8
- (int)numberOfImagePaletteColours;
// IMP 0x1009247a0 | @16@0:8
- (id)imagePaletteData;
// IMP 0x100924954 | @16@0:8
- (id)_paletteColourSpaceObject;
// IMP 0x100924a1c | i24@0:8@16
- (int)_typeForColourSpaceObject:(id)arg0;
// IMP 0x100924c9c | i24@0:8@16
- (int)_numberOfComponentsForColourSpaceObject:(id)arg0;
// IMP 0x100924ecc | @24@0:8@16
- (id)_nameForColourSpaceObject:(id)arg0;
// IMP 0x100924f88 | @16@0:8
- (id)imageICCColourProfile;
// IMP 0x100924fcc | @24@0:8@16
- (id)_ICCColourProfileForColourSpaceObject:(id)arg0;
// IMP 0x1009251c0 | @16@0:8
- (id)imageSeparationName;
// IMP 0x100925288 | @16@0:8
- (id)imageDecodeArray;
// IMP 0x100925328 | B16@0:8
- (BOOL)hasMultipleFilters;
// IMP 0x1009253a4 | @16@0:8
- (id)finalFilter;
// IMP 0x100925424 | @16@0:8
- (id)rawHandle;
// IMP 0x100925470 | @16@0:8
- (id)handle;
// IMP 0x100925484 | @16@0:8
- (id)JPEGHandle;
// IMP 0x100925498 | @20@0:8B16
- (id)handleExcludingLast:(BOOL)arg0;
// IMP 0x1009254a8 | @24@0:8B16B20
- (id)handleExcludingLast:(BOOL)arg0 decrypted:(BOOL)arg1;
// IMP 0x1009255f4 | @40@0:8@16@24@32
- (id)handleForFilterName:(id)arg0 decodeParms:(id)arg1 parentHandle:(id)arg2;
// IMP 0x100925830 | @32@0:8@16@24
- (id)predictorHandleForDecodeParms:(id)arg0 parentHandle:(id)arg1;
// IMP 0x1009259dc | @16@0:8
- (id)description;
@end
