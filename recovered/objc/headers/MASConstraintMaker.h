// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85680
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MASConstraintMaker : NSObject
// ivar _updateExisting encoding=B offset=8
// ivar _removeExisting encoding=B offset=9
// ivar _view encoding=@"UIView" offset=16
// ivar _constraints encoding=@"NSMutableArray" offset=24
// property view attributes=T@"UIView",W,N,V_view
// property constraints attributes=T@"NSMutableArray",&,N,V_constraints
// property left attributes=T@"MASConstraint",R,N
// property top attributes=T@"MASConstraint",R,N
// property right attributes=T@"MASConstraint",R,N
// property bottom attributes=T@"MASConstraint",R,N
// property leading attributes=T@"MASConstraint",R,N
// property trailing attributes=T@"MASConstraint",R,N
// property width attributes=T@"MASConstraint",R,N
// property height attributes=T@"MASConstraint",R,N
// property centerX attributes=T@"MASConstraint",R,N
// property centerY attributes=T@"MASConstraint",R,N
// property baseline attributes=T@"MASConstraint",R,N
// property firstBaseline attributes=T@"MASConstraint",R,N
// property lastBaseline attributes=T@"MASConstraint",R,N
// property leftMargin attributes=T@"MASConstraint",R,N
// property rightMargin attributes=T@"MASConstraint",R,N
// property topMargin attributes=T@"MASConstraint",R,N
// property bottomMargin attributes=T@"MASConstraint",R,N
// property leadingMargin attributes=T@"MASConstraint",R,N
// property trailingMargin attributes=T@"MASConstraint",R,N
// property centerXWithinMargins attributes=T@"MASConstraint",R,N
// property centerYWithinMargins attributes=T@"MASConstraint",R,N
// property attributes attributes=T@?,R,N
// property edges attributes=T@"MASConstraint",R,N
// property size attributes=T@"MASConstraint",R,N
// property center attributes=T@"MASConstraint",R,N
// property updateExisting attributes=TB,N,V_updateExisting
// property removeExisting attributes=TB,N,V_removeExisting
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10043317c | @24@0:8@16
- (id)initWithView:(id)arg0;
// IMP 0x100433224 | @16@0:8
- (id)install;
// IMP 0x100433458 | v32@0:8@16@24
- (void)constraint:(id)arg0 shouldBeReplacedWithConstraint:(id)arg1;
// IMP 0x1004334fc | @32@0:8@16q24
- (id)constraint:(id)arg0 addConstraintWithLayoutAttribute:(long long)arg1;
// IMP 0x100433698 | @24@0:8q16
- (id)addConstraintWithAttributes:(long long)arg0;
// IMP 0x100433e40 | @24@0:8q16
- (id)addConstraintWithLayoutAttribute:(long long)arg0;
// IMP 0x100433e4c | @16@0:8
- (id)left;
// IMP 0x100433e54 | @16@0:8
- (id)top;
// IMP 0x100433e5c | @16@0:8
- (id)right;
// IMP 0x100433e64 | @16@0:8
- (id)bottom;
// IMP 0x100433e6c | @16@0:8
- (id)leading;
// IMP 0x100433e74 | @16@0:8
- (id)trailing;
// IMP 0x100433e7c | @16@0:8
- (id)width;
// IMP 0x100433e84 | @16@0:8
- (id)height;
// IMP 0x100433e8c | @16@0:8
- (id)centerX;
// IMP 0x100433e94 | @16@0:8
- (id)centerY;
// IMP 0x100433e9c | @16@0:8
- (id)baseline;
// IMP 0x100433ea4 | @?16@0:8
- (id /* block */)attributes;
// IMP 0x100433f00 | @16@0:8
- (id)firstBaseline;
// IMP 0x100433f08 | @16@0:8
- (id)lastBaseline;
// IMP 0x100433f10 | @16@0:8
- (id)leftMargin;
// IMP 0x100433f18 | @16@0:8
- (id)rightMargin;
// IMP 0x100433f20 | @16@0:8
- (id)topMargin;
// IMP 0x100433f28 | @16@0:8
- (id)bottomMargin;
// IMP 0x100433f30 | @16@0:8
- (id)leadingMargin;
// IMP 0x100433f38 | @16@0:8
- (id)trailingMargin;
// IMP 0x100433f40 | @16@0:8
- (id)centerXWithinMargins;
// IMP 0x100433f48 | @16@0:8
- (id)centerYWithinMargins;
// IMP 0x100433f50 | @16@0:8
- (id)edges;
// IMP 0x100433f58 | @16@0:8
- (id)size;
// IMP 0x100433f60 | @16@0:8
- (id)center;
// IMP 0x100433f68 | @?16@0:8
- (id /* block */)group;
// IMP 0x1004340a8 | B16@0:8
- (BOOL)updateExisting;
// IMP 0x1004340b0 | v20@0:8B16
- (void)setUpdateExisting:(BOOL)arg0;
// IMP 0x1004340b8 | B16@0:8
- (BOOL)removeExisting;
// IMP 0x1004340c0 | v20@0:8B16
- (void)setRemoveExisting:(BOOL)arg0;
// IMP 0x1004340c8 | @16@0:8
- (id)view;
// IMP 0x1004340e0 | v24@0:8@16
- (void)setView:(id)arg0;
// IMP 0x1004340ec | @16@0:8
- (id)constraints;
// IMP 0x1004340f4 | v24@0:8@16
- (void)setConstraints:(id)arg0;
// IMP 0x100434100 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
