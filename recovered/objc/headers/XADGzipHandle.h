// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d9b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADGzipHandle : XADStreamHandle
// ivar currhandle encoding=@"XADHandle" offset=64
// ivar startoffs encoding=q offset=72
// ivar state encoding=i offset=80
// ivar checksumscorrect encoding=B offset=84
// ivar crc encoding=I offset=88
// IMP 0x1008b4fd0 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008b504c | v16@0:8
- (void)dealloc;
// IMP 0x1008b509c | v16@0:8
- (void)resetStream;
// IMP 0x1008b50fc | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008b5460 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008b5468 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008b5498 | d16@0:8
- (double)estimatedProgress;
@end
