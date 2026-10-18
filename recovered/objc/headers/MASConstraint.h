// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85630
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MASConstraint : NSObject
// ivar _updateExisting encoding=B offset=8
// ivar _delegate encoding=@"<MASConstraintDelegate>" offset=16
// property updateExisting attributes=TB,N,V_updateExisting
// property delegate attributes=T@"<MASConstraintDelegate>",W,N,V_delegate
// IMP 0x100431c78 | @16@0:8
- (id)init;
// IMP 0x100431cac | @?16@0:8
- (id /* block */)equalTo;
// IMP 0x100431d70 | @?16@0:8
- (id /* block */)mas_equalTo;
// IMP 0x100431e34 | @?16@0:8
- (id /* block */)greaterThanOrEqualTo;
// IMP 0x100431ef8 | @?16@0:8
- (id /* block */)mas_greaterThanOrEqualTo;
// IMP 0x100431fbc | @?16@0:8
- (id /* block */)lessThanOrEqualTo;
// IMP 0x100432080 | @?16@0:8
- (id /* block */)mas_lessThanOrEqualTo;
// IMP 0x100432144 | @?16@0:8
- (id /* block */)priorityLow;
// IMP 0x1004321e8 | @?16@0:8
- (id /* block */)priorityMedium;
// IMP 0x10043228c | @?16@0:8
- (id /* block */)priorityHigh;
// IMP 0x100432330 | @?16@0:8
- (id /* block */)insets;
// IMP 0x1004323a8 | @?16@0:8
- (id /* block */)inset;
// IMP 0x100432420 | @?16@0:8
- (id /* block */)sizeOffset;
// IMP 0x100432498 | @?16@0:8
- (id /* block */)centerOffset;
// IMP 0x100432510 | @?16@0:8
- (id /* block */)offset;
// IMP 0x100432588 | @?16@0:8
- (id /* block */)valueOffset;
// IMP 0x100432604 | @?16@0:8
- (id /* block */)mas_offset;
// IMP 0x10043260c | v24@0:8@16
- (void)setLayoutConstantWithValue:(id)arg0;
// IMP 0x100432730 | @16@0:8
- (id)with;
// IMP 0x100432734 | @16@0:8
- (id)and;
// IMP 0x100432738 | @24@0:8q16
- (id)addConstraintWithLayoutAttribute:(long long)arg0;
// IMP 0x1004327d8 | @16@0:8
- (id)left;
// IMP 0x1004327e0 | @16@0:8
- (id)top;
// IMP 0x1004327e8 | @16@0:8
- (id)right;
// IMP 0x1004327f0 | @16@0:8
- (id)bottom;
// IMP 0x1004327f8 | @16@0:8
- (id)leading;
// IMP 0x100432800 | @16@0:8
- (id)trailing;
// IMP 0x100432808 | @16@0:8
- (id)width;
// IMP 0x100432810 | @16@0:8
- (id)height;
// IMP 0x100432818 | @16@0:8
- (id)centerX;
// IMP 0x100432820 | @16@0:8
- (id)centerY;
// IMP 0x100432828 | @16@0:8
- (id)baseline;
// IMP 0x100432830 | @16@0:8
- (id)firstBaseline;
// IMP 0x100432838 | @16@0:8
- (id)lastBaseline;
// IMP 0x100432840 | @16@0:8
- (id)leftMargin;
// IMP 0x100432848 | @16@0:8
- (id)rightMargin;
// IMP 0x100432850 | @16@0:8
- (id)topMargin;
// IMP 0x100432858 | @16@0:8
- (id)bottomMargin;
// IMP 0x100432860 | @16@0:8
- (id)leadingMargin;
// IMP 0x100432868 | @16@0:8
- (id)trailingMargin;
// IMP 0x100432870 | @16@0:8
- (id)centerXWithinMargins;
// IMP 0x100432878 | @16@0:8
- (id)centerYWithinMargins;
// IMP 0x100432880 | @?16@0:8
- (id /* block */)multipliedBy;
// IMP 0x100432920 | @?16@0:8
- (id /* block */)dividedBy;
// IMP 0x1004329c0 | @?16@0:8
- (id /* block */)priority;
// IMP 0x100432a60 | @?16@0:8
- (id /* block */)equalToWithRelation;
// IMP 0x100432b00 | @?16@0:8
- (id /* block */)key;
// IMP 0x100432ba0 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setInsets:(struct UIEdgeInsets)arg0;
// IMP 0x100432c40 | v24@0:8d16
- (void)setInset:(double)arg0;
// IMP 0x100432ce0 | v32@0:8{CGSize=dd}16
- (void)setSizeOffset:(struct CGSize)arg0;
// IMP 0x100432d80 | v32@0:8{CGPoint=dd}16
- (void)setCenterOffset:(struct CGPoint)arg0;
// IMP 0x100432e20 | v24@0:8d16
- (void)setOffset:(double)arg0;
// IMP 0x100432ec0 | v16@0:8
- (void)activate;
// IMP 0x100432f60 | v16@0:8
- (void)deactivate;
// IMP 0x100433000 | v16@0:8
- (void)install;
// IMP 0x1004330a0 | v16@0:8
- (void)uninstall;
// IMP 0x100433140 | B16@0:8
- (BOOL)updateExisting;
// IMP 0x100433148 | v20@0:8B16
- (void)setUpdateExisting:(BOOL)arg0;
// IMP 0x100433150 | @16@0:8
- (id)delegate;
// IMP 0x100433168 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100433174 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
