// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8fa60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDGraphicsImageRenderer : NSObject
// ivar _format encoding=@"SDGraphicsImageRendererFormat" offset=8
// ivar _uirenderer encoding=@"UIGraphicsImageRenderer" offset=16
// ivar _size encoding={CGSize="width"d"height"d} offset=24
// property size attributes=T{CGSize=dd},N,V_size
// property format attributes=T@"SDGraphicsImageRendererFormat",&,N,V_format
// property uirenderer attributes=T@"UIGraphicsImageRenderer",&,N,V_uirenderer
// IMP 0x10053af60 | @32@0:8{CGSize=dd}16
- (id)initWithSize:(struct CGSize)arg0;
// IMP 0x10053afc8 | @40@0:8{CGSize=dd}16@32
- (id)initWithSize:(struct CGSize)arg0 format:(id)arg1;
// IMP 0x10053b0ac | @24@0:8@?16
- (id)imageWithActions:(id /* block */)arg0;
// IMP 0x10053b1b0 | {CGSize=dd}16@0:8
- (struct CGSize)size;
// IMP 0x10053b1b8 | v32@0:8{CGSize=dd}16
- (void)setSize:(struct CGSize)arg0;
// IMP 0x10053b1c0 | @16@0:8
- (id)format;
// IMP 0x10053b1c8 | v24@0:8@16
- (void)setFormat:(id)arg0;
// IMP 0x10053b1d4 | @16@0:8
- (id)uirenderer;
// IMP 0x10053b1dc | v24@0:8@16
- (void)setUirenderer:(id)arg0;
// IMP 0x10053b1e8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
