// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e8e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface _QMUITransitionNavigationBar : UINavigationBar
// ivar _shouldPreventAppearance encoding=B offset=8
// ivar _originalNavigationBar encoding=@"UINavigationBar" offset=16
// property originalNavigationBar attributes=T@"UINavigationBar",W,N,V_originalNavigationBar
// property shouldPreventAppearance attributes=TB,N,V_shouldPreventAppearance
// IMP 0x1004fdd14 | v24@0:8@16
- (void)setOriginalNavigationBar:(id)arg0;
// IMP 0x1004fdd78 | v16@0:8
- (void)layoutSubviews;
// IMP 0x1004fde10 | v24@0:8@16
- (void)didAddSubview:(id)arg0;
// IMP 0x1004fdeac | @16@0:8
- (id)originalNavigationBar;
// IMP 0x1004fdecc | B16@0:8
- (BOOL)shouldPreventAppearance;
// IMP 0x1004fdedc | v20@0:8B16
- (void)setShouldPreventAppearance:(BOOL)arg0;
// IMP 0x1004fdeec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004fd9a8 | v16@0:8
+ (void)load;
@end
