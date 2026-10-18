// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c748
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAnnotationView : MKAnnotationView
// ivar _useButton encoding=@"UIButton" offset=8
// ivar _coorLabel encoding=@"UILabel" offset=16
// ivar _detailview encoding=@"UIView" offset=24
// ivar _useButtonHandleBlock encoding=@? offset=32
// property useButton attributes=T@"UIButton",&,N,V_useButton
// property coorLabel attributes=T@"UILabel",&,N,V_coorLabel
// property detailview attributes=T@"UIView",&,N,V_detailview
// property useButtonHandleBlock attributes=T@?,C,N,V_useButtonHandleBlock
// IMP 0x1000ac220 | @32@0:8@16@24
- (id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1000ac7e0 | v16@0:8
- (void)useButtonHandle;
// IMP 0x1000ac970 | @16@0:8
- (id)useButton;
// IMP 0x1000ac998 | v24@0:8@16
- (void)setUseButton:(id)arg0;
// IMP 0x1000aca10 | @16@0:8
- (id)coorLabel;
// IMP 0x1000aca44 | v24@0:8@16
- (void)setCoorLabel:(id)arg0;
// IMP 0x1000acaac | @16@0:8
- (id)detailview;
// IMP 0x1000acac8 | v24@0:8@16
- (void)setDetailview:(id)arg0;
// IMP 0x1000acb38 | @?16@0:8
- (id /* block */)useButtonHandleBlock;
// IMP 0x1000acb60 | v24@0:8@?16
- (void)setUseButtonHandleBlock:(id /* block */)arg0;
// IMP 0x1000acbec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
