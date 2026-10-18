// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c855e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MASCompositeConstraint : MASConstraint
// ivar _mas_key encoding=@ offset=8
// ivar _childConstraints encoding=@"NSMutableArray" offset=16
// property mas_key attributes=T@,&,N,V_mas_key
// property childConstraints attributes=T@"NSMutableArray",&,N,V_childConstraints
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004307c0 | @24@0:8@16
- (id)initWithChildren:(id)arg0;
// IMP 0x100430928 | v32@0:8@16@24
- (void)constraint:(id)arg0 shouldBeReplacedWithConstraint:(id)arg1;
// IMP 0x1004309cc | @32@0:8@16q24
- (id)constraint:(id)arg0 addConstraintWithLayoutAttribute:(long long)arg1;
// IMP 0x100430a54 | @?16@0:8
- (id /* block */)multipliedBy;
// IMP 0x100430bdc | @?16@0:8
- (id /* block */)dividedBy;
// IMP 0x100430d64 | @?16@0:8
- (id /* block */)priority;
// IMP 0x100430eec | @?16@0:8
- (id /* block */)equalToWithRelation;
// IMP 0x1004310ac | @24@0:8q16
- (id)addConstraintWithLayoutAttribute:(long long)arg0;
// IMP 0x1004310e0 | @?16@0:8
- (id /* block */)key;
// IMP 0x1004312dc | v48@0:8{UIEdgeInsets=dddd}16
- (void)setInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004313fc | v24@0:8d16
- (void)setInset:(double)arg0;
// IMP 0x1004314fc | v24@0:8d16
- (void)setOffset:(double)arg0;
// IMP 0x1004315fc | v32@0:8{CGSize=dd}16
- (void)setSizeOffset:(struct CGSize)arg0;
// IMP 0x100431704 | v32@0:8{CGPoint=dd}16
- (void)setCenterOffset:(struct CGPoint)arg0;
// IMP 0x10043180c | v16@0:8
- (void)activate;
// IMP 0x1004318fc | v16@0:8
- (void)deactivate;
// IMP 0x1004319ec | v16@0:8
- (void)install;
// IMP 0x100431b00 | v16@0:8
- (void)uninstall;
// IMP 0x100431bf0 | @16@0:8
- (id)mas_key;
// IMP 0x100431c00 | v24@0:8@16
- (void)setMas_key:(id)arg0;
// IMP 0x100431c14 | @16@0:8
- (id)childConstraints;
// IMP 0x100431c24 | v24@0:8@16
- (void)setChildConstraints:(id)arg0;
// IMP 0x100431c38 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
