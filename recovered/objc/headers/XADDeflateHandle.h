// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9bfc0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADDeflateHandle : XADLZSSHandle
// ivar variant encoding=i offset=300
// ivar literalcode encoding=@"XADPrefixCode" offset=304
// ivar distancecode encoding=@"XADPrefixCode" offset=312
// ivar fixedliteralcode encoding=@"XADPrefixCode" offset=320
// ivar fixeddistancecode encoding=@"XADPrefixCode" offset=328
// ivar storedblock encoding=B offset=336
// ivar lastblock encoding=B offset=337
// ivar storedcount encoding=i offset=340
// ivar order encoding=[19i] offset=344
// IMP 0x1008878ec | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008878fc | @36@0:8@16q24i32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 variant:(int)arg2;
// IMP 0x1008879ac | v16@0:8
- (void)dealloc;
// IMP 0x100887a2c | v24@0:8r^i16
- (void)setMetaTableOrder:(int *)arg0;
// IMP 0x100887a5c | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x100887a68 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x100887d10 | v16@0:8
- (void)readBlockHeader;
// IMP 0x10088813c | @20@0:8i16
- (id)allocAndParseMetaCodeOfSize:(int)arg0;
// IMP 0x100888244 | @16@0:8
- (id)fixedLiteralCode;
// IMP 0x100888334 | @16@0:8
- (id)fixedDistanceCode;
@end
