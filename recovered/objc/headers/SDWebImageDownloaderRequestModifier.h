// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c911b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloaderRequestModifier : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005515c4 | @24@0:8@16
- (id)initWithMethod:(id)arg0;
// IMP 0x1005515d0 | @24@0:8@16
- (id)initWithHeaders:(id)arg0;
// IMP 0x1005515e0 | @24@0:8@16
- (id)initWithBody:(id)arg0;
// IMP 0x1005515f0 | @40@0:8@16@24@32
- (id)initWithMethod:(id)arg0 headers:(id)arg1 body:(id)arg2;
// IMP 0x10055145c | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x100551514 | @24@0:8@16
- (id)modifiedRequestWithRequest:(id)arg0;
// IMP 0x1005515a8 | @?16@0:8
- (id /* block */)block;
// IMP 0x1005515b0 | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x1005515b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005514c8 | @24@0:8@?16
+ (id)requestModifierWithBlock:(id /* block */)arg0;
@end
