// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88ee0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIEmotion : NSObject
// ivar _identifier encoding=@"NSString" offset=8
// ivar _displayName encoding=@"NSString" offset=16
// ivar _image encoding=@"UIImage" offset=24
// property identifier attributes=T@"NSString",C,N,V_identifier
// property displayName attributes=T@"NSString",C,N,V_displayName
// property image attributes=T@"UIImage",&,N,V_image
// IMP 0x100479590 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100479648 | @16@0:8
- (id)description;
// IMP 0x10047970c | @16@0:8
- (id)identifier;
// IMP 0x100479714 | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x10047971c | @16@0:8
- (id)displayName;
// IMP 0x100479724 | v24@0:8@16
- (void)setDisplayName:(id)arg0;
// IMP 0x10047972c | @16@0:8
- (id)image;
// IMP 0x100479734 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x100479740 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100479518 | @32@0:8@16@24
+ (id)emotionWithIdentifier:(id)arg0 displayName:(id)arg1;
@end
