// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a858
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSuperBlob : NSObject
// ivar _magic encoding=I offset=8
// ivar _blobs encoding=@"NSMutableArray" offset=16
// property magic attributes=TI,N,V_magic
// property length attributes=TI,R,N
// property count attributes=TI,R,N
// property blobs attributes=T@"NSMutableArray",&,N,V_blobs
// IMP 0x100772dd4 | @16@0:8
- (id)init;
// IMP 0x1007737d0 | v16@0:8
- (void)setupBlobIndexsOffset;
// IMP 0x100773a6c | v24@0:8@16
- (void)addBlobIndex:(id)arg0;
// IMP 0x100773b58 | I16@0:8
- (unsigned int)count;
// IMP 0x100773be8 | I16@0:8
- (unsigned int)length;
// IMP 0x100773ea0 | {__SuperBlob=III[0{__BlobIndex=II}]}16@0:8
- (struct __SuperBlob)superBlob;
// IMP 0x100774068 | @16@0:8
- (id)superBlobData;
// IMP 0x1007745fc | I16@0:8
- (unsigned int)magic;
// IMP 0x100774628 | v20@0:8I16
- (void)setMagic:(unsigned int)arg0;
// IMP 0x100774648 | @16@0:8
- (id)blobs;
// IMP 0x100774668 | v24@0:8@16
- (void)setBlobs:(id)arg0;
// IMP 0x1007746d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100772f38 | @20@0:8I16
+ (id)superBlobWithMagic:(unsigned int)arg0;
// IMP 0x100772ff8 | @24@0:8@16
+ (id)superBlobWithSuperBlobData:(id)arg0;
@end
