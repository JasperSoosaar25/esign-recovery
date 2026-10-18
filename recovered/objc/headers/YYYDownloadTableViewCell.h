// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d6d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDownloadTableViewCell : UITableViewCell
// ivar _fileNameLabel encoding=@"UILabel" offset=8
// ivar _sourceLabel encoding=@"UILabel" offset=16
// ivar _stateLabel encoding=@"UILabel" offset=24
// ivar _fileSizeLabel encoding=@"UILabel" offset=32
// ivar _progressView encoding=@"UIProgressView" offset=40
// ivar _item encoding=@"YYYDownloadItem" offset=48
// property fileNameLabel attributes=T@"UILabel",&,N,V_fileNameLabel
// property sourceLabel attributes=T@"UILabel",&,N,V_sourceLabel
// property stateLabel attributes=T@"UILabel",&,N,V_stateLabel
// property fileSizeLabel attributes=T@"UILabel",&,N,V_fileSizeLabel
// property progressView attributes=T@"UIProgressView",&,N,V_progressView
// property item attributes=T@"YYYDownloadItem",&,N,V_item
// IMP 0x100143f58 | @32@0:8q16@24
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
// IMP 0x1001440c8 | v16@0:8
- (void)loadSubviews;
// IMP 0x100144968 | v16@0:8
- (void)setupLayout;
// IMP 0x100147ff4 | v24@0:8@16
- (void)setItem:(id)arg0;
// IMP 0x100149c74 | @16@0:8
- (id)fileNameLabel;
// IMP 0x100149c9c | v24@0:8@16
- (void)setFileNameLabel:(id)arg0;
// IMP 0x100149d40 | @16@0:8
- (id)sourceLabel;
// IMP 0x100149d68 | v24@0:8@16
- (void)setSourceLabel:(id)arg0;
// IMP 0x100149e04 | @16@0:8
- (id)stateLabel;
// IMP 0x100149e3c | v24@0:8@16
- (void)setStateLabel:(id)arg0;
// IMP 0x100149ecc | @16@0:8
- (id)fileSizeLabel;
// IMP 0x100149ee8 | v24@0:8@16
- (void)setFileSizeLabel:(id)arg0;
// IMP 0x100149f58 | @16@0:8
- (id)progressView;
// IMP 0x100149f74 | v24@0:8@16
- (void)setProgressView:(id)arg0;
// IMP 0x100149fec | @16@0:8
- (id)item;
// IMP 0x100149ffc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100149c6c | B16@0:8
+ (BOOL)requiresConstraintBasedLayout;
@end
