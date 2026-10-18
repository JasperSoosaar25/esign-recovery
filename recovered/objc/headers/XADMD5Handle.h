// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca11d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMD5Handle : XADStreamHandle
// ivar digest encoding=@"NSData" offset=64
// ivar context encoding={?="lo"I"hi"I"a"I"b"I"c"I"d"I"buffer"[64C]"block"[16I]} offset=72
// IMP 0x10092bbe8 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 correctDigest:(id)arg2;
// IMP 0x10092bc48 | v16@0:8
- (void)dealloc;
// IMP 0x10092bc98 | v16@0:8
- (void)resetStream;
// IMP 0x10092bce0 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x10092bd44 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x10092bd4c | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x10092be38 | d16@0:8
- (double)estimatedProgress;
@end
