// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90a28
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageCacheKeyFilter : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054a90c | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x10054a9c4 | @24@0:8@16
- (id)cacheKeyForURL:(id)arg0;
// IMP 0x10054aa58 | @?16@0:8
- (id /* block */)block;
// IMP 0x10054aa60 | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x10054aa68 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054a978 | @24@0:8@?16
+ (id)cacheKeyFilterWithBlock:(id /* block */)arg0;
@end
