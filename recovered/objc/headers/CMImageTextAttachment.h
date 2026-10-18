// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9af88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMImageTextAttachment : NSTextAttachment
// ivar _textContainer encoding=@"NSTextContainer" offset=8
// ivar _downloadTask encoding=@"NSURLSessionDataTask" offset=16
// ivar _isImageLoaded encoding=B offset=24
// ivar _imageURL encoding=@"NSURL" offset=32
// property imageURL attributes=T@"NSURL",R,N,V_imageURL
// IMP 0x100850774 | @40@0:8@16{CGSize=dd}24
- (id)initWithImageURL:(id)arg0 defaultImageSize:(struct CGSize)arg1;
// IMP 0x1008509a0 | {CGRect={CGPoint=dd}{CGSize=dd}}80@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24{CGPoint=dd}56Q72
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg0 proposedLineFragment:(struct CGRect)arg1 glyphPosition:(struct CGPoint)arg2 characterIndex:(unsigned long long)arg3;
// IMP 0x100850ae8 | @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48Q56
- (id)imageForBounds:(struct CGRect)arg0 textContainer:(id)arg1 characterIndex:(unsigned long long)arg2;
// IMP 0x10085101c | v24@0:8@16
- (void)setImageWithData:(id)arg0;
// IMP 0x1008513f4 | @40@0:8@16d24d32
- (id)imageWithImage:(id)arg0 scaledToMaxWidth:(double)arg1 maxHeight:(double)arg2;
// IMP 0x100851540 | @40@0:8@16{CGSize=dd}24
- (id)imageWithImage:(id)arg0 scaledToSize:(struct CGSize)arg1;
// IMP 0x10085164c | v32@0:8{CGSize=dd}16
- (void)setImageTextAttachementSize:(struct CGSize)arg0;
// IMP 0x1008516ac | v24@0:8@16
- (void)setImagePlaceHolderImageName:(id)arg0;
// IMP 0x100851708 | @16@0:8
- (id)imageURL;
// IMP 0x10085172c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1008503a8 | @16@0:8
+ (id)placeholderImage;
@end
