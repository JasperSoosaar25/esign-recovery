// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c903e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCodersManager : NSObject
// ivar _codersLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _imageCoders encoding=@"NSMutableArray" offset=16
// property imageCoders attributes=T@"NSMutableArray",&,N,V_imageCoders
// property coders attributes=T@"NSArray",C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100543e70 | @16@0:8
- (id)init;
// IMP 0x100543fb8 | @16@0:8
- (id)coders;
// IMP 0x100543ff8 | v24@0:8@16
- (void)setCoders:(id)arg0;
// IMP 0x100544060 | v24@0:8@16
- (void)addCoder:(id)arg0;
// IMP 0x1005440c4 | v24@0:8@16
- (void)removeCoder:(id)arg0;
// IMP 0x100544128 | B24@0:8@16
- (BOOL)canDecodeFromData:(id)arg0;
// IMP 0x100544268 | B24@0:8q16
- (BOOL)canEncodeToFormat:(long long)arg0;
// IMP 0x100544394 | @32@0:8@16@24
- (id)decodedImageWithData:(id)arg0 options:(id)arg1;
// IMP 0x10054451c | @40@0:8@16q24@32
- (id)encodedDataWithImage:(id)arg0 format:(long long)arg1 options:(id)arg2;
// IMP 0x1005446b0 | @16@0:8
- (id)imageCoders;
// IMP 0x1005446b8 | v24@0:8@16
- (void)setImageCoders:(id)arg0;
// IMP 0x1005446c4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100543dd4 | @16@0:8
+ (id)sharedManager;
@end
