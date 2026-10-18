// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7eb00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYReaderContentViewController : QMUICommonViewController
// ivar _isSnapshopVC encoding=B offset=16
// ivar _model encoding=@"YYYBookReaderDivision" offset=24
// ivar _textView encoding=@"UITextView" offset=32
// ivar _chapterTitleLabel encoding=@"UILabel" offset=40
// ivar _indexLabel encoding=@"UILabel" offset=48
// ivar _index encoding=q offset=56
// ivar _totalPages encoding=q offset=64
// ivar _otherTextColor encoding=@"UIColor" offset=72
// ivar _contentView encoding=@"YYYReaderContentView" offset=80
// property textView attributes=T@"UITextView",&,N,V_textView
// property chapterTitleLabel attributes=T@"UILabel",&,N,V_chapterTitleLabel
// property indexLabel attributes=T@"UILabel",&,N,V_indexLabel
// property index attributes=Tq,N,V_index
// property totalPages attributes=Tq,N,V_totalPages
// property otherTextColor attributes=T@"UIColor",&,N,V_otherTextColor
// property contentView attributes=T@"YYYReaderContentView",&,N,V_contentView
// property currentIndex attributes=Tq,R,N
// property currentChapterIndex attributes=Tq,R,N
// property model attributes=T@"YYYBookReaderDivision",&,N,V_model
// property isSnapshopVC attributes=TB,N,V_isSnapshopVC
// IMP 0x1002247d4 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100224b4c | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x100224f1c | v16@0:8
- (void)styleChange;
// IMP 0x1002251f0 | v32@0:8q16q24
- (void)setIndex:(long long)arg0 totalPages:(long long)arg1;
// IMP 0x100225484 | v16@0:8
- (void)initSubviews;
// IMP 0x100225a54 | q16@0:8
- (long long)currentIndex;
// IMP 0x100225ac8 | q16@0:8
- (long long)currentChapterIndex;
// IMP 0x100225b24 | v24@0:8@16
- (void)setModel:(id)arg0;
// IMP 0x100225e38 | @16@0:8
- (id)model;
// IMP 0x100225e6c | B16@0:8
- (BOOL)isSnapshopVC;
// IMP 0x100225ea8 | v20@0:8B16
- (void)setIsSnapshopVC:(BOOL)arg0;
// IMP 0x100225ec4 | @16@0:8
- (id)textView;
// IMP 0x100225eec | v24@0:8@16
- (void)setTextView:(id)arg0;
// IMP 0x100225f5c | @16@0:8
- (id)chapterTitleLabel;
// IMP 0x100225f90 | v24@0:8@16
- (void)setChapterTitleLabel:(id)arg0;
// IMP 0x100226008 | @16@0:8
- (id)indexLabel;
// IMP 0x100226030 | v24@0:8@16
- (void)setIndexLabel:(id)arg0;
// IMP 0x100226094 | q16@0:8
- (long long)index;
// IMP 0x1002260bc | v24@0:8q16
- (void)setIndex:(long long)arg0;
// IMP 0x1002260e4 | q16@0:8
- (long long)totalPages;
// IMP 0x100226118 | v24@0:8q16
- (void)setTotalPages:(long long)arg0;
// IMP 0x100226150 | @16@0:8
- (id)otherTextColor;
// IMP 0x100226178 | v24@0:8@16
- (void)setOtherTextColor:(id)arg0;
// IMP 0x1002261f8 | @16@0:8
- (id)contentView;
// IMP 0x100226208 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x100226290 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
