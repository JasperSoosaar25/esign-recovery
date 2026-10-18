// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d7b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUITableView : UITableView
// property delegate attributes=T@"<QMUITableViewDelegate>",W,D,N
// property dataSource attributes=T@"<QMUITableViewDataSource>",W,D,N
// IMP 0x1004c5abc | @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48
- (id)initWithFrame:(struct CGRect)arg0 style:(long long)arg1;
// IMP 0x1004c5b0c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1004c5b5c | v16@0:8
- (void)didInitialize;
// IMP 0x1004c5b60 | v16@0:8
- (void)dealloc;
// IMP 0x1004c5bb4 | v24@0:8@16
- (void)setTableFooterView:(id)arg0;
// IMP 0x1004c5c38 | B24@0:8@16
- (BOOL)touchesShouldCancelInContentView:(id)arg0;
@end
