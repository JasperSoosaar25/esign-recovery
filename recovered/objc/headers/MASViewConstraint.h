// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c857c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MASViewConstraint : MASConstraint
// ivar _hasLayoutRelation encoding=B offset=8
// ivar _useAnimator encoding=B offset=9
// ivar _layoutPriority encoding=f offset=12
// ivar _firstViewAttribute encoding=@"MASViewAttribute" offset=16
// ivar _secondViewAttribute encoding=@"MASViewAttribute" offset=24
// ivar _installedView encoding=@"UIView" offset=32
// ivar _layoutConstraint encoding=@"MASLayoutConstraint" offset=40
// ivar _layoutRelation encoding=q offset=48
// ivar _layoutMultiplier encoding=d offset=56
// ivar _layoutConstant encoding=d offset=64
// ivar _mas_key encoding=@ offset=72
// property secondViewAttribute attributes=T@"MASViewAttribute",&,N,V_secondViewAttribute
// property installedView attributes=T@"UIView",W,N,V_installedView
// property layoutConstraint attributes=T@"MASLayoutConstraint",W,N,V_layoutConstraint
// property layoutRelation attributes=Tq,N,V_layoutRelation
// property layoutPriority attributes=Tf,N,V_layoutPriority
// property layoutMultiplier attributes=Td,N,V_layoutMultiplier
// property layoutConstant attributes=Td,N,V_layoutConstant
// property hasLayoutRelation attributes=TB,N,V_hasLayoutRelation
// property mas_key attributes=T@,&,N,V_mas_key
// property useAnimator attributes=TB,N,V_useAnimator
// property firstViewAttribute attributes=T@"MASViewAttribute",R,N,V_firstViewAttribute
// IMP 0x10043448c | @24@0:8@16
- (id)initWithFirstViewAttribute:(id)arg0;
// IMP 0x100434538 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100434650 | v24@0:8d16
- (void)setLayoutConstant:(double)arg0;
// IMP 0x10043469c | v24@0:8q16
- (void)setLayoutRelation:(long long)arg0;
// IMP 0x1004346b0 | B16@0:8
- (BOOL)supportsActiveProperty;
// IMP 0x1004346f4 | B16@0:8
- (BOOL)isActive;
// IMP 0x100434748 | B16@0:8
- (BOOL)hasBeenInstalled;
// IMP 0x100434798 | v24@0:8@16
- (void)setSecondViewAttribute:(id)arg0;
// IMP 0x1004348a0 | @?16@0:8
- (id /* block */)multipliedBy;
// IMP 0x100434918 | @?16@0:8
- (id /* block */)dividedBy;
// IMP 0x100434998 | @?16@0:8
- (id /* block */)priority;
// IMP 0x100434a10 | @?16@0:8
- (id /* block */)equalToWithRelation;
// IMP 0x100434c70 | @16@0:8
- (id)with;
// IMP 0x100434c74 | @16@0:8
- (id)and;
// IMP 0x100434c78 | @24@0:8q16
- (id)addConstraintWithLayoutAttribute:(long long)arg0;
// IMP 0x100434cd4 | @?16@0:8
- (id /* block */)key;
// IMP 0x100434d50 | v48@0:8{UIEdgeInsets=dddd}16
- (void)setInsets:(struct UIEdgeInsets)arg0;
// IMP 0x100434e0c | v24@0:8d16
- (void)setInset:(double)arg0;
// IMP 0x100434e1c | v24@0:8d16
- (void)setOffset:(double)arg0;
// IMP 0x100434e20 | v32@0:8{CGSize=dd}16
- (void)setSizeOffset:(struct CGSize)arg0;
// IMP 0x100434ea4 | v32@0:8{CGPoint=dd}16
- (void)setCenterOffset:(struct CGPoint)arg0;
// IMP 0x100434f28 | v16@0:8
- (void)activate;
// IMP 0x100434f2c | v16@0:8
- (void)deactivate;
// IMP 0x100434f30 | v16@0:8
- (void)install;
// IMP 0x1004353e0 | @24@0:8@16
- (id)layoutConstraintSimilarTo:(id)arg0;
// IMP 0x100435668 | v16@0:8
- (void)uninstall;
// IMP 0x100435768 | @16@0:8
- (id)firstViewAttribute;
// IMP 0x100435778 | @16@0:8
- (id)secondViewAttribute;
// IMP 0x100435788 | @16@0:8
- (id)installedView;
// IMP 0x1004357a8 | v24@0:8@16
- (void)setInstalledView:(id)arg0;
// IMP 0x1004357bc | @16@0:8
- (id)layoutConstraint;
// IMP 0x1004357dc | v24@0:8@16
- (void)setLayoutConstraint:(id)arg0;
// IMP 0x1004357f0 | q16@0:8
- (long long)layoutRelation;
// IMP 0x100435800 | f16@0:8
- (float)layoutPriority;
// IMP 0x100435810 | v20@0:8f16
- (void)setLayoutPriority:(float)arg0;
// IMP 0x100435820 | d16@0:8
- (double)layoutMultiplier;
// IMP 0x100435830 | v24@0:8d16
- (void)setLayoutMultiplier:(double)arg0;
// IMP 0x100435840 | d16@0:8
- (double)layoutConstant;
// IMP 0x100435850 | B16@0:8
- (BOOL)hasLayoutRelation;
// IMP 0x100435860 | v20@0:8B16
- (void)setHasLayoutRelation:(BOOL)arg0;
// IMP 0x100435870 | @16@0:8
- (id)mas_key;
// IMP 0x100435880 | v24@0:8@16
- (void)setMas_key:(id)arg0;
// IMP 0x100435894 | B16@0:8
- (BOOL)useAnimator;
// IMP 0x1004358a4 | v20@0:8B16
- (void)setUseAnimator:(BOOL)arg0;
// IMP 0x1004358b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100434608 | @24@0:8@16
+ (id)installedConstraintsForView:(id)arg0;
@end
