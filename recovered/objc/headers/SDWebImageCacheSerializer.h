// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90a78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageCacheSerializer : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10054aa74 | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x10054ab2c | @40@0:8@16@24@32
- (id)cacheDataWithImage:(id)arg0 originalData:(id)arg1 imageURL:(id)arg2;
// IMP 0x10054ac00 | @?16@0:8
- (id /* block */)block;
// IMP 0x10054ac08 | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x10054ac10 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054aae0 | @24@0:8@?16
+ (id)cacheSerializerWithBlock:(id /* block */)arg0;
@end
