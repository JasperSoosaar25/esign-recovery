// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c912e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloaderResponseModifier : NSObject
// ivar _block encoding=@? offset=8
// property block attributes=T@?,C,N,V_block
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005519f0 | @24@0:8q16
- (id)initWithStatusCode:(long long)arg0;
// IMP 0x1005519fc | @24@0:8@16
- (id)initWithVersion:(id)arg0;
// IMP 0x100551a0c | @24@0:8@16
- (id)initWithHeaders:(id)arg0;
// IMP 0x100551a1c | @40@0:8q16@24@32
- (id)initWithStatusCode:(long long)arg0 version:(id)arg1 headers:(id)arg2;
// IMP 0x100551888 | @24@0:8@?16
- (id)initWithBlock:(id /* block */)arg0;
// IMP 0x100551940 | @24@0:8@16
- (id)modifiedResponseWithResponse:(id)arg0;
// IMP 0x1005519d4 | @?16@0:8
- (id /* block */)block;
// IMP 0x1005519dc | v24@0:8@?16
- (void)setBlock:(id /* block */)arg0;
// IMP 0x1005519e4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005518f4 | @24@0:8@?16
+ (id)responseModifierWithBlock:(id /* block */)arg0;
@end
