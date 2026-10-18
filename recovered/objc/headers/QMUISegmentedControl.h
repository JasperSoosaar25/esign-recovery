// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d3d0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUISegmentedControl : UISegmentedControl
// ivar _items encoding=@"NSMutableArray" offset=8
// ivar _preSelectedImage encoding=@"UIImage" offset=16
// ivar _preSegmentIndex encoding=Q offset=24
// property segmentItems attributes=T@"NSArray",R,C,N
// IMP 0x1004c15b0 | @24@0:8@16
- (id)initWithItems:(id)arg0;
// IMP 0x1004c1640 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004c16b0 | v40@0:8@16@24@32
- (void)updateSegmentedUIWithTintColor:(id)arg0 selectedTextColor:(id)arg1 fontSize:(id)arg2;
// IMP 0x1004c1734 | v80@0:8@16@24@32@40@48@56@64@72
- (void)setBackgroundWithNormalImage:(id)arg0 selectedImage:(id)arg1 devideImage00:(id)arg2 devideImage01:(id)arg3 devideImage10:(id)arg4 textColor:(id)arg5 selectedTextColor:(id)arg6 fontSize:(id)arg7;
// IMP 0x1004c1818 | v40@0:8@16@24@32
- (void)setTitleTextAttributesWithTextColor:(id)arg0 selectedTextColor:(id)arg1 fontSize:(id)arg2;
// IMP 0x1004c1910 | v56@0:8@16@24@32@40@48
- (void)setBackgroundWithNormalImage:(id)arg0 selectedImage:(id)arg1 devideImage00:(id)arg2 devideImage01:(id)arg3 devideImage10:(id)arg4;
// IMP 0x1004c1b60 | v36@0:8@16Q24B32
- (void)insertSegmentWithTitle:(id)arg0 atIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
// IMP 0x1004c1bf4 | v36@0:8@16Q24B32
- (void)insertSegmentWithImage:(id)arg0 atIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
// IMP 0x1004c1c88 | v28@0:8Q16B24
- (void)removeSegmentAtIndex:(unsigned long long)arg0 animated:(BOOL)arg1;
// IMP 0x1004c1ce0 | v16@0:8
- (void)removeAllSegments;
// IMP 0x1004c1d30 | @16@0:8
- (id)segmentItems;
// IMP 0x1004c1d4c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
