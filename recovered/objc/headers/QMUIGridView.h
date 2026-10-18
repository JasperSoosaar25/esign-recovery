// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c890f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIGridView : UIView
// ivar _separatorDashed encoding=B offset=8
// ivar _columnCount encoding=q offset=16
// ivar _rowHeight encoding=d offset=24
// ivar _separatorWidth encoding=d offset=32
// ivar _separatorColor encoding=@"UIColor" offset=40
// ivar _separatorLayer encoding=@"CAShapeLayer" offset=48
// ivar _padding encoding={UIEdgeInsets="top"d"left"d"bottom"d"right"d} offset=56
// property separatorLayer attributes=T@"CAShapeLayer",&,N,V_separatorLayer
// property columnCount attributes=Tq,N,V_columnCount
// property rowHeight attributes=Td,N,V_rowHeight
// property padding attributes=T{UIEdgeInsets=dddd},N,V_padding
// property separatorWidth attributes=Td,N,V_separatorWidth
// property separatorColor attributes=T@"UIColor",&,N,V_separatorColor
// property separatorDashed attributes=TB,N,V_separatorDashed
// IMP 0x10048089c | @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48d56
- (id)initWithFrame:(struct CGRect)arg0 column:(long long)arg1 rowHeight:(double)arg2;
// IMP 0x100480914 | @32@0:8q16d24
- (id)initWithColumn:(long long)arg0 rowHeight:(double)arg1;
// IMP 0x10048092c | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x100480938 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x100480988 | v16@0:8
- (void)didInitialize;
// IMP 0x100480ac0 | v24@0:8d16
- (void)setSeparatorWidth:(double)arg0;
// IMP 0x100480b48 | v24@0:8@16
- (void)setSeparatorColor:(id)arg0;
// IMP 0x100480bc8 | d16@0:8
- (double)stretchColumnWidth;
// IMP 0x100480c40 | q16@0:8
- (long long)rowCount;
// IMP 0x100480ca8 | {CGSize=dd}32@0:8{CGSize=dd}16
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
// IMP 0x100480d1c | v16@0:8
- (void)layoutSubviews;
// IMP 0x100481154 | q16@0:8
- (long long)columnCount;
// IMP 0x100481164 | v24@0:8q16
- (void)setColumnCount:(long long)arg0;
// IMP 0x100481174 | d16@0:8
- (double)rowHeight;
// IMP 0x100481184 | v24@0:8d16
- (void)setRowHeight:(double)arg0;
// IMP 0x100481194 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)padding;
// IMP 0x1004811ac | v48@0:8{UIEdgeInsets=dddd}16
- (void)setPadding:(struct UIEdgeInsets)arg0;
// IMP 0x1004811c4 | d16@0:8
- (double)separatorWidth;
// IMP 0x1004811d4 | @16@0:8
- (id)separatorColor;
// IMP 0x1004811e4 | B16@0:8
- (BOOL)separatorDashed;
// IMP 0x1004811f4 | v20@0:8B16
- (void)setSeparatorDashed:(BOOL)arg0;
// IMP 0x100481204 | @16@0:8
- (id)separatorLayer;
// IMP 0x100481214 | v24@0:8@16
- (void)setSeparatorLayer:(id)arg0;
// IMP 0x100481228 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
