// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c88060
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICollectionViewPagingLayout : UICollectionViewFlowLayout
// ivar _maximumScale encoding=d offset=8
// ivar _minimumScale encoding=d offset=16
// ivar _rotationRatio encoding=d offset=24
// ivar _rotationRadius encoding=d offset=32
// ivar _finalItemSize encoding={CGSize="width"d"height"d} offset=40
// ivar _pagingThreshold encoding=d offset=56
// ivar _debug encoding=B offset=64
// ivar _allowsMultipleItemScroll encoding=B offset=65
// ivar _style encoding=q offset=72
// ivar _velocityForEnsurePageDown encoding=d offset=80
// ivar _multipleItemScrollVelocityLimit encoding=d offset=88
// ivar _debugLayer encoding=@"CALayer" offset=96
// property pagingThreshold attributes=Td,N
// property debug attributes=TB,N
// property maximumScale attributes=Td,N
// property minimumScale attributes=Td,N
// property rotationRatio attributes=Td,N
// property rotationRadius attributes=Td,N
// property debugLayer attributes=T@"CALayer",&,N,V_debugLayer
// property style attributes=Tq,R,N,V_style
// property velocityForEnsurePageDown attributes=Td,N,V_velocityForEnsurePageDown
// property allowsMultipleItemScroll attributes=TB,N,V_allowsMultipleItemScroll
// property multipleItemScrollVelocityLimit attributes=Td,N,V_multipleItemScrollVelocityLimit
// IMP 0x10045d83c | d16@0:8
- (double)rotationRatio;
// IMP 0x10045d84c | v24@0:8d16
- (void)setRotationRatio:(double)arg0;
// IMP 0x10045d878 | d16@0:8
- (double)rotationRadius;
// IMP 0x10045d888 | v24@0:8d16
- (void)setRotationRadius:(double)arg0;
// IMP 0x10045d898 | d24@0:8d16
- (double)validatedRotationRatio:(double)arg0;
// IMP 0x10045d7fc | d16@0:8
- (double)maximumScale;
// IMP 0x10045d80c | v24@0:8d16
- (void)setMaximumScale:(double)arg0;
// IMP 0x10045d81c | d16@0:8
- (double)minimumScale;
// IMP 0x10045d82c | v24@0:8d16
- (void)setMinimumScale:(double)arg0;
// IMP 0x10045d534 | d16@0:8
- (double)pagingThreshold;
// IMP 0x10045d544 | v24@0:8d16
- (void)setPagingThreshold:(double)arg0;
// IMP 0x10045d554 | B16@0:8
- (BOOL)debug;
// IMP 0x10045d564 | v20@0:8B16
- (void)setDebug:(BOOL)arg0;
// IMP 0x10045d8ac | @24@0:8q16
- (id)initWithStyle:(long long)arg0;
// IMP 0x10045d988 | @16@0:8
- (id)init;
// IMP 0x10045d990 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10045d994 | v16@0:8
- (void)prepareLayout;
// IMP 0x10045dd4c | B48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg0;
// IMP 0x10045ddd4 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg0;
// IMP 0x10045e340 | {CGPoint=dd}48@0:8{CGPoint=dd}16{CGPoint=dd}32
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg0 withScrollingVelocity:(struct CGPoint)arg1;
// IMP 0x10045e8f4 | q16@0:8
- (long long)style;
// IMP 0x10045e904 | d16@0:8
- (double)velocityForEnsurePageDown;
// IMP 0x10045e914 | v24@0:8d16
- (void)setVelocityForEnsurePageDown:(double)arg0;
// IMP 0x10045e924 | B16@0:8
- (BOOL)allowsMultipleItemScroll;
// IMP 0x10045e934 | v20@0:8B16
- (void)setAllowsMultipleItemScroll:(BOOL)arg0;
// IMP 0x10045e944 | d16@0:8
- (double)multipleItemScrollVelocityLimit;
// IMP 0x10045e954 | v24@0:8d16
- (void)setMultipleItemScrollVelocityLimit:(double)arg0;
// IMP 0x10045e964 | @16@0:8
- (id)debugLayer;
// IMP 0x10045e974 | v24@0:8@16
- (void)setDebugLayer:(id)arg0;
// IMP 0x10045e988 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
