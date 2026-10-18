// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9dc30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADXZHandle : XADStreamHandle
// ivar currhandle encoding=@"XADHandle" offset=64
// ivar startoffs encoding=q offset=72
// ivar state encoding=i offset=80
// ivar checksumscorrect encoding=B offset=84
// ivar checksumflags encoding=i offset=88
// ivar crc encoding=Q offset=96
// IMP 0x1008ba450 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008ba460 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008ba4dc | v16@0:8
- (void)dealloc;
// IMP 0x1008ba52c | v16@0:8
- (void)resetStream;
// IMP 0x1008ba5ac | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008baefc | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008baf20 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008baf30 | d16@0:8
- (double)estimatedProgress;
@end
