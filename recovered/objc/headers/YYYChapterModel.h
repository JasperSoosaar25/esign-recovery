// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7df98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYChapterModel : NSObject
// ivar _title encoding=@"NSString" offset=8
// ivar _content encoding=@"NSString" offset=16
// ivar _index encoding=q offset=24
// ivar _divisionCache encoding=@"NSMutableDictionary" offset=32
// property divisionCache attributes=T@"NSMutableDictionary",&,N,V_divisionCache
// property title attributes=T@"NSString",C,N,V_title
// property content attributes=T@"NSString",C,N,V_content
// property index attributes=Tq,N,V_index
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1001b18f4 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001b19b0 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001b1a38 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1001b1a8c | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1001b1dc8 | @16@0:8
- (id)description;
// IMP 0x1001b200c | @32@0:8{CGSize=dd}16
- (id)pagingWithContentSize:(struct CGSize)arg0;
// IMP 0x1001b28c0 | @16@0:8
- (id)divisionCache;
// IMP 0x1001b29d0 | @16@0:8
- (id)title;
// IMP 0x1001b29fc | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x1001b2a74 | @16@0:8
- (id)content;
// IMP 0x1001b2a94 | v24@0:8@16
- (void)setContent:(id)arg0;
// IMP 0x1001b2b0c | q16@0:8
- (long long)index;
// IMP 0x1001b2b38 | v24@0:8q16
- (void)setIndex:(long long)arg0;
// IMP 0x1001b2b64 | v24@0:8@16
- (void)setDivisionCache:(id)arg0;
// IMP 0x1001b2bf4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001b1680 | @16@0:8
+ (id)modelPropertyBlacklist;
@end
