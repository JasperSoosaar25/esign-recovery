// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c949f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPRedirectResponse : NSObject
// ivar redirectPath encoding=@"NSString" offset=8
// IMP 0x1005ac1a0 | @24@0:8@16
- (id)initWithPath:(id)arg0;
// IMP 0x1005ac218 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005ac220 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1005ac228 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005ac22c | @24@0:8Q16
- (id)readDataOfLength:(unsigned long long)arg0;
// IMP 0x1005ac234 | B16@0:8
- (BOOL)isDone;
// IMP 0x1005ac23c | @16@0:8
- (id)httpHeaders;
// IMP 0x1005ac258 | q16@0:8
- (long long)status;
// IMP 0x1005ac260 | v16@0:8
- (void)dealloc;
// IMP 0x1005ac294 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
