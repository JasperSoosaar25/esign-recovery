// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91400
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageActivityIndicator : NSObject
// ivar _indicatorView encoding=@"UIActivityIndicatorView" offset=8
// property indicatorView attributes=T@"UIActivityIndicatorView",&,N,V_indicatorView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100551d0c | @16@0:8
- (id)init;
// IMP 0x100551d5c | v16@0:8
- (void)commonInit;
// IMP 0x100551dc4 | v16@0:8
- (void)startAnimatingIndicator;
// IMP 0x100551e1c | v16@0:8
- (void)stopAnimatingIndicator;
// IMP 0x100551e74 | @16@0:8
- (id)indicatorView;
// IMP 0x100551e7c | v24@0:8@16
- (void)setIndicatorView:(id)arg0;
// IMP 0x100551e88 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100551e94 | @16@0:8
+ (id)grayIndicator;
// IMP 0x100551ee0 | @16@0:8
+ (id)grayLargeIndicator;
// IMP 0x100551fb4 | @16@0:8
+ (id)whiteIndicator;
// IMP 0x100552000 | @16@0:8
+ (id)whiteLargeIndicator;
// IMP 0x100552054 | @16@0:8
+ (id)largeIndicator;
// IMP 0x1005520cc | @16@0:8
+ (id)mediumIndicator;
@end
