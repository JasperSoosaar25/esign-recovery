// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80190
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface AppStoreAppTableViewCell : UITableViewCell
// ivar _logoImageView encoding=@"UIImageView" offset=8
// ivar _nameLabel encoding=@"UILabel" offset=16
// ivar _sourceLabel encoding=@"UILabel" offset=24
// ivar _tagLabel encoding=@"UILabel" offset=32
// ivar _detailLabel encoding=@"UILabel" offset=40
// ivar _separatorView encoding=@"UIView" offset=48
// ivar _downloadButton encoding=@"UIButton" offset=56
// ivar _app encoding=@"YYYAppStoreApp" offset=64
// property logoImageView attributes=T@"UIImageView",&,N,V_logoImageView
// property nameLabel attributes=T@"UILabel",&,N,V_nameLabel
// property sourceLabel attributes=T@"UILabel",&,N,V_sourceLabel
// property tagLabel attributes=T@"UILabel",&,N,V_tagLabel
// property detailLabel attributes=T@"UILabel",&,N,V_detailLabel
// property separatorView attributes=T@"UIView",&,N,V_separatorView
// property downloadButton attributes=T@"UIButton",&,N,V_downloadButton
// property app attributes=T@"YYYAppStoreApp",&,N,V_app
// IMP 0x1002d1c4c | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1002d20b0 | v24@0:8@16
- (void)downloadCompleted:(id)arg0;
// IMP 0x1002d220c | v16@0:8
- (void)prepareForReuse;
// IMP 0x1002d2350 | v16@0:8
- (void)loadSubviews;
// IMP 0x1002d2fe8 | v16@0:8
- (void)yyy_setupViewsConstraints;
// IMP 0x1002d6c7c | v24@0:8@16
- (void)downloadHandle:(id)arg0;
// IMP 0x1002d6fbc | v24@0:8B16B20
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
// IMP 0x1002d7070 | v16@0:8
- (void)checkState;
// IMP 0x1002d79d0 | v16@0:8
- (void)setupDownloaded;
// IMP 0x1002d7bfc | v24@0:8@16
- (void)setupInfo:(id)arg0;
// IMP 0x1002d8f28 | @16@0:8
- (id)logoImageView;
// IMP 0x1002d8f5c | v24@0:8@16
- (void)setLogoImageView:(id)arg0;
// IMP 0x1002d9000 | @16@0:8
- (id)nameLabel;
// IMP 0x1002d901c | v24@0:8@16
- (void)setNameLabel:(id)arg0;
// IMP 0x1002d9074 | @16@0:8
- (id)sourceLabel;
// IMP 0x1002d909c | v24@0:8@16
- (void)setSourceLabel:(id)arg0;
// IMP 0x1002d911c | @16@0:8
- (id)tagLabel;
// IMP 0x1002d9138 | v24@0:8@16
- (void)setTagLabel:(id)arg0;
// IMP 0x1002d919c | @16@0:8
- (id)detailLabel;
// IMP 0x1002d91c4 | v24@0:8@16
- (void)setDetailLabel:(id)arg0;
// IMP 0x1002d9230 | @16@0:8
- (id)separatorView;
// IMP 0x1002d924c | v24@0:8@16
- (void)setSeparatorView:(id)arg0;
// IMP 0x1002d92b0 | @16@0:8
- (id)downloadButton;
// IMP 0x1002d92d8 | v24@0:8@16
- (void)setDownloadButton:(id)arg0;
// IMP 0x1002d9348 | @16@0:8
- (id)app;
// IMP 0x1002d9370 | v24@0:8@16
- (void)setApp:(id)arg0;
// IMP 0x1002d93e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1002d8ca4 | d24@0:8@16
+ (double)heightWithInfo:(id)arg0;
// IMP 0x1002d8f08 | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
