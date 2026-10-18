// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81e60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYInjectFolderTableViewCell : UITableViewCell
// ivar _segmentedControl encoding=@"UISegmentedControl" offset=8
// ivar _selectIndexChangeHandle encoding=@? offset=16
// property segmentedControl attributes=T@"UISegmentedControl",&,N,V_segmentedControl
// property selectIndexChangeHandle attributes=T@?,C,N,V_selectIndexChangeHandle
// IMP 0x1003e8284 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1003e8c2c | v24@0:8@16
- (void)segmentedControlHandle:(id)arg0;
// IMP 0x1003e8d60 | v16@0:8
- (void)awakeFromNib;
// IMP 0x1003e8df0 | v24@0:8B16B20
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
// IMP 0x1003e8e34 | @16@0:8
- (id)segmentedControl;
// IMP 0x1003e8e68 | v24@0:8@16
- (void)setSegmentedControl:(id)arg0;
// IMP 0x1003e8ec0 | @?16@0:8
- (id /* block */)selectIndexChangeHandle;
// IMP 0x1003e8ef4 | v24@0:8@?16
- (void)setSelectIndexChangeHandle:(id /* block */)arg0;
// IMP 0x1003e8f7c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
