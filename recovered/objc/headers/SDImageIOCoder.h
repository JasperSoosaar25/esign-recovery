// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c905c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageIOCoder : NSObject
// ivar _width encoding=Q offset=8
// ivar _height encoding=Q offset=16
// ivar _orientation encoding=I offset=24
// ivar _imageSource encoding=^{CGImageSource=} offset=32
// ivar _scale encoding=d offset=40
// ivar _finished encoding=B offset=48
// ivar _preserveAspectRatio encoding=B offset=49
// ivar _thumbnailSize encoding={CGSize="width"d"height"d} offset=56
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100546c3c | v16@0:8
- (void)dealloc;
// IMP 0x100546cc4 | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x100546df0 | B24@0:8@16
- (BOOL)canDecodeFromData:(id)arg0;
// IMP 0x100546df8 | @32@0:8@16@24
- (id)decodedImageWithData:(id)arg0 options:(id)arg1;
// IMP 0x1005470e4 | B24@0:8@16
- (BOOL)canIncrementalDecodeFromData:(id)arg0;
// IMP 0x1005470e8 | @24@0:8@16
- (id)initIncrementalWithOptions:(id)arg0;
// IMP 0x100547274 | v28@0:8@16B24
- (void)updateIncrementalData:(id)arg0 finished:(BOOL)arg1;
// IMP 0x10054736c | @24@0:8@16
- (id)incrementalDecodedImageWithOptions:(id)arg0;
// IMP 0x10054744c | B24@0:8q16
- (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x100547454 | @40@0:8@16q24@32
- (id)encodedDataWithImage:(id)arg0 format:(long long)arg1 options:(id)arg2;
// IMP 0x100546cd8 | @16@0:8
+ (id)sharedCoder;
// IMP 0x100546d48 | {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
+ (struct CGRect)boxRectFromPDFFData:(id)arg0;
@end
