// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97a80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComFilter : NSObject
// ivar _filterSource encoding=@"NSString" offset=8
// ivar _realWhiteListEventFilter encoding=@"UMComBlackAndWhiteFilter" offset=16
// property realWhiteListEventFilter attributes=T@"UMComBlackAndWhiteFilter",&,N,V_realWhiteListEventFilter
// IMP 0x1006c407c | @24@0:8@16
- (id)initWithFilterSource:(id)arg0;
// IMP 0x1006c40f0 | B24@0:8@16
- (BOOL)isFilterValue:(id)arg0;
// IMP 0x1006c4190 | @16@0:8
- (id)filterSource;
// IMP 0x1006c4198 | B24@0:8@16
- (BOOL)setFilterSource:(id)arg0;
// IMP 0x1006c4220 | @16@0:8
- (id)realWhiteListEventFilter;
// IMP 0x1006c4228 | v24@0:8@16
- (void)setRealWhiteListEventFilter:(id)arg0;
// IMP 0x1006c4234 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
