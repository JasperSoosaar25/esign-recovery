// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0908
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCrunchYHandle : XADLibXADIOHandle
// ivar oldversion encoding=B offset=20760
// ivar haschecksum encoding=B offset=20761
// ivar checksumcorrect encoding=B offset=20762
// IMP 0x10091702c | @32@0:8@16B24B28
- (id)initWithHandle:(id)arg0 old:(BOOL)arg1 hasChecksum:(BOOL)arg2;
// IMP 0x10091708c | i16@0:8
- (int)unpackData;
// IMP 0x100917504 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x100917514 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
