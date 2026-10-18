// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c010
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADWinZipAESHandle : XADStreamHandle
// ivar password encoding=@"NSData" offset=64
// ivar keybytes encoding=i offset=72
// ivar startoffs encoding=q offset=80
// ivar aes encoding={?="ks"[60I]"inf"(?="l"I"b"[4C])} offset=88
// ivar counter encoding=[16C] offset=332
// ivar aesbuffer encoding=[16C] offset=348
// ivar hmac encoding={_HMAC_SHA1_CTX="ipad"[64C]"opad"[64C]"shactx"(_SHA_CTX="s1"{?="state"[5I]"bitcount"Q"buffer"[64C]}"s256"{?="state"[8I]"bitcount"Q"buffer"[64C]}"s512"{?="state"[8Q]"bitcount"[2Q]"buffer"[128C]})"key"[64C]"keylen"I"hashkey"I} offset=368
// ivar hmac_done encoding=B offset=776
// ivar hmac_correct encoding=B offset=777
// IMP 0x1008883d4 | @44@0:8@16q24@32i40
- (id)initWithHandle:(id)arg0 length:(long long)arg1 password:(id)arg2 keyLength:(int)arg3;
// IMP 0x100888498 | v16@0:8
- (void)dealloc;
// IMP 0x1008884e8 | v16@0:8
- (void)resetStream;
// IMP 0x1008888ac | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008889e8 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008889f0 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
