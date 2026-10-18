// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91450
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageProgressIndicator : NSObject
// ivar _indicatorView encoding=@"UIProgressView" offset=8
// property indicatorView attributes=T@"UIProgressView",&,N,V_indicatorView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100552144 | @16@0:8
- (id)init;
// IMP 0x100552194 | v16@0:8
- (void)commonInit;
// IMP 0x1005521fc | v16@0:8
- (void)startAnimatingIndicator;
// IMP 0x1005522d8 | v16@0:8
- (void)stopAnimatingIndicator;
// IMP 0x1005523b4 | v24@0:8d16
- (void)updateIndicatorProgress:(double)arg0;
// IMP 0x100552480 | @16@0:8
- (id)indicatorView;
// IMP 0x100552488 | v24@0:8@16
- (void)setIndicatorView:(id)arg0;
// IMP 0x100552494 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005524a0 | @16@0:8
+ (id)defaultIndicator;
// IMP 0x1005524bc | @16@0:8
+ (id)barIndicator;
@end
