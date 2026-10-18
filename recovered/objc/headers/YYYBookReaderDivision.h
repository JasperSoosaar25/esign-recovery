// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dfc0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBookReaderDivision : NSObject
// ivar _title encoding=@"NSString" offset=8
// ivar _content encoding=@"NSMutableAttributedString" offset=16
// ivar _chapter encoding=@"YYYChapterModel" offset=24
// ivar _index encoding=q offset=32
// ivar _range encoding={_NSRange="location"Q"length"Q} offset=40
// property title attributes=T@"NSString",C,N,V_title
// property content attributes=T@"NSMutableAttributedString",&,N,V_content
// property chapter attributes=T@"YYYChapterModel",&,N,V_chapter
// property range attributes=T{_NSRange=QQ},N,V_range
// property index attributes=Tq,N,V_index
// IMP 0x1001b4b84 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001b4c58 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001b4c84 | @16@0:8
- (id)title;
// IMP 0x1001b4cb4 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x1001b4cd8 | @16@0:8
- (id)content;
// IMP 0x1001b4cf8 | v24@0:8@16
- (void)setContent:(id)arg0;
// IMP 0x1001b4d8c | @16@0:8
- (id)chapter;
// IMP 0x1001b4dbc | v24@0:8@16
- (void)setChapter:(id)arg0;
// IMP 0x1001b4e50 | {_NSRange=QQ}16@0:8
- (struct _NSRange)range;
// IMP 0x1001b4e80 | v32@0:8{_NSRange=QQ}16
- (void)setRange:(struct _NSRange)arg0;
// IMP 0x1001b4ecc | q16@0:8
- (long long)index;
// IMP 0x1001b4eec | v24@0:8q16
- (void)setIndex:(long long)arg0;
// IMP 0x1001b4f0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
