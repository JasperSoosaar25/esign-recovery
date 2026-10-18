// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90438
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageFrame : NSObject
// ivar _image encoding=@"UIImage" offset=8
// ivar _duration encoding=d offset=16
// property image attributes=T@"UIImage",&,N,V_image
// property duration attributes=Td,N,V_duration
// IMP 0x100544738 | @16@0:8
- (id)image;
// IMP 0x100544740 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x10054474c | d16@0:8
- (double)duration;
// IMP 0x100544754 | v24@0:8d16
- (void)setDuration:(double)arg0;
// IMP 0x10054475c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005446d0 | @32@0:8@16d24
+ (id)frameWithImage:(id)arg0 duration:(double)arg1;
@end
