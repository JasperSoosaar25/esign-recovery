// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94868
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPDataResponse : NSObject
// ivar offset encoding=Q offset=8
// ivar data encoding=@"NSData" offset=16
// IMP 0x1005ab28c | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x1005ab308 | v16@0:8
- (void)dealloc;
// IMP 0x1005ab33c | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005ab344 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1005ab34c | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005ab354 | @24@0:8Q16
- (id)readDataOfLength:(unsigned long long)arg0;
// IMP 0x1005ab3b4 | B16@0:8
- (BOOL)isDone;
// IMP 0x1005ab3dc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
