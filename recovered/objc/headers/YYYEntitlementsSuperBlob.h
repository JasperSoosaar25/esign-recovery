// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99a48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYEntitlementsSuperBlob : NSObject
// ivar _byte1 encoding=C offset=8
// ivar _byte2 encoding=C offset=9
// ivar _blobsLength encoding=S offset=10
// ivar _magic encoding=I offset=12
// ivar _length encoding=I offset=16
// ivar _blobs encoding=@"NSArray" offset=24
// property magic attributes=TI,N,V_magic
// property length attributes=TI,N,V_length
// property byte1 attributes=TC,N,V_byte1
// property byte2 attributes=TC,N,V_byte2
// property blobsLength attributes=TS,N,V_blobsLength
// property blobs attributes=T@"NSArray",&,N,V_blobs
// IMP 0x10070d714 | @16@0:8
- (id)data;
// IMP 0x10070dc14 | I16@0:8
- (unsigned int)magic;
// IMP 0x10070dc44 | v20@0:8I16
- (void)setMagic:(unsigned int)arg0;
// IMP 0x10070dc70 | I16@0:8
- (unsigned int)length;
// IMP 0x10070dc84 | v20@0:8I16
- (void)setLength:(unsigned int)arg0;
// IMP 0x10070dca4 | C16@0:8
- (unsigned char)byte1;
// IMP 0x10070dcb8 | v20@0:8C16
- (void)setByte1:(unsigned char)arg0;
// IMP 0x10070dcd8 | C16@0:8
- (unsigned char)byte2;
// IMP 0x10070dcec | v20@0:8C16
- (void)setByte2:(unsigned char)arg0;
// IMP 0x10070dcf4 | S16@0:8
- (unsigned short)blobsLength;
// IMP 0x10070dd14 | v20@0:8S16
- (void)setBlobsLength:(unsigned short)arg0;
// IMP 0x10070dd40 | @16@0:8
- (id)blobs;
// IMP 0x10070dd54 | v24@0:8@16
- (void)setBlobs:(id)arg0;
// IMP 0x10070dde4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10070d14c | @24@0:8@16
+ (id)supperBlobWithPlist:(id)arg0;
@end
