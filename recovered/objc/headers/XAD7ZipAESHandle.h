// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1188
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD7ZipAESHandle : XADBlockStreamHandle
// ivar startoffs encoding=q offset=88
// ivar aes encoding={?="ks"[60I]"inf"(?="l"I"b"[4C])} offset=96
// ivar iv encoding=[16C] offset=340
// ivar block encoding=[16C] offset=356
// ivar buffer encoding=[65536C] offset=372
// IMP 0x100926fc8 | @48@0:8@16q24@32@40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 key:(id)arg2 IV:(id)arg3;
// IMP 0x1009270a8 | v16@0:8
- (void)resetBlockStream;
// IMP 0x100927120 | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
// IMP 0x100926be8 | i24@0:8@16
+ (int)logRoundsForPropertyData:(id)arg0;
// IMP 0x100926c40 | @24@0:8@16
+ (id)saltForPropertyData:(id)arg0;
// IMP 0x100926cfc | @24@0:8@16
+ (id)IVForPropertyData:(id)arg0;
// IMP 0x100926dd0 | @36@0:8@16@24i32
+ (id)keyForPassword:(id)arg0 salt:(id)arg1 logRounds:(int)arg2;
@end
