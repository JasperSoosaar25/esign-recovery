// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c948b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPDynamicFileResponse : HTTPAsyncFileResponse
// ivar separator encoding=@"NSData" offset=128
// ivar replacementDict encoding=@"NSDictionary" offset=136
// IMP 0x1005ab3e8 | @48@0:8@16@24@32@40
- (id)initWithFilePath:(id)arg0 forConnection:(id)arg1 separator:(id)arg2 replacementDictionary:(id)arg3;
// IMP 0x1005ab4c0 | B16@0:8
- (BOOL)isChunked;
// IMP 0x1005ab4c8 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005ab4d0 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005ab4d4 | B16@0:8
- (BOOL)isDone;
// IMP 0x1005ab520 | v16@0:8
- (void)processReadBuffer;
// IMP 0x1005ab914 | v16@0:8
- (void)dealloc;
// IMP 0x1005ab948 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
