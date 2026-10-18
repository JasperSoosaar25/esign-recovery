// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0458
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADARCDistillHandle : XADFastLZSSHandle
// ivar maincode encoding=@"XADPrefixCode" offset=120
// ivar offsetcode encoding=@"XADPrefixCode" offset=128
// IMP 0x100900948 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x100900958 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x100900a34 | v16@0:8
- (void)dealloc;
// IMP 0x100900a94 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x100900da8 | v24@0:8q16
- (void)expandFromPosition:(long long)arg0;
@end
