// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a808
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBlobIndex : NSObject
// ivar _type encoding=I offset=8
// ivar _offset encoding=I offset=12
// ivar _blob encoding=@"YYYBlob" offset=16
// ivar _data encoding=@"NSData" offset=24
// property blob attributes=T@"YYYBlob",&,N,V_blob
// property blobIndex attributes=T{__BlobIndex=II},R,N
// property type attributes=TI,N,V_type
// property offset attributes=TI,N,V_offset
// property data attributes=T@"NSData",&,N,V_data
// IMP 0x100772a60 | {__BlobIndex=II}16@0:8
- (struct __BlobIndex)blobIndex;
// IMP 0x100772bb8 | @16@0:8
- (id)blob;
// IMP 0x100772be4 | v24@0:8@16
- (void)setBlob:(id)arg0;
// IMP 0x100772c08 | I16@0:8
- (unsigned int)type;
// IMP 0x100772c28 | v20@0:8I16
- (void)setType:(unsigned int)arg0;
// IMP 0x100772c58 | I16@0:8
- (unsigned int)offset;
// IMP 0x100772c78 | v20@0:8I16
- (void)setOffset:(unsigned int)arg0;
// IMP 0x100772c98 | @16@0:8
- (id)data;
// IMP 0x100772cb8 | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x100772d4c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100772938 | @28@0:8I16@20
+ (id)blobIndexWithType:(unsigned int)arg0 data:(id)arg1;
// IMP 0x1007729a8 | @28@0:8I16@20
+ (id)blobIndexWithType:(unsigned int)arg0 blob:(id)arg1;
@end
