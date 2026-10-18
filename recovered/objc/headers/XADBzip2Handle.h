// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9f068
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADBzip2Handle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar bzs encoding={?="next_in"*"avail_in"I"total_in_lo32"I"total_in_hi32"I"next_out"*"avail_out"I"total_out_lo32"I"total_out_hi32"I"state"^v"bzalloc"^?"bzfree"^?"opaque"^v} offset=72
// ivar inited encoding=B offset=152
// ivar checksumcorrect encoding=B offset=153
// ivar inbuffer encoding=[16384C] offset=154
// IMP 0x1008e369c | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e3eb4 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008e3f40 | v16@0:8
- (void)dealloc;
// IMP 0x1008e3fa0 | v16@0:8
- (void)resetStream;
// IMP 0x1008e4034 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e423c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e4244 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e4254 | v20@0:8i16
- (void)_raiseBzip2:(int)arg0;
// IMP 0x1008e3e48 | @24@0:8@16
+ (id)bzip2HandleWithHandle:(id)arg0;
// IMP 0x1008e3e7c | @32@0:8@16q24
+ (id)bzip2HandleWithHandle:(id)arg0 length:(long long)arg1;
@end
