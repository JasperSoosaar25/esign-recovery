// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c7e0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARAESHandle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar aes encoding={?="ks"[60I]"inf"(?="l"I"b"[4C])} offset=72
// ivar iv encoding=[16C] offset=316
// ivar block encoding=[16C] offset=332
// ivar blockbuffer encoding=[16C] offset=348
// IMP 0x100895aa0 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 key:(id)arg1;
// IMP 0x100895ab4 | @40@0:8@16q24@32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 key:(id)arg2;
// IMP 0x100895b58 | @40@0:8@16@24@32
- (id)initWithHandle:(id)arg0 RAR5Key:(id)arg1 IV:(id)arg2;
// IMP 0x100895b70 | @48@0:8@16q24@32@40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 RAR5Key:(id)arg2 IV:(id)arg3;
// IMP 0x100895c30 | v16@0:8
- (void)resetStream;
// IMP 0x100895c8c | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x100895868 | @36@0:8@16@24B32
+ (id)keyForPassword:(id)arg0 salt:(id)arg1 brokenHash:(BOOL)arg2;
@end
