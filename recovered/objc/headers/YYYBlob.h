// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a7b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBlob : NSObject
// ivar _magic encoding=I offset=8
// ivar _data encoding=@"NSData" offset=16
// ivar _entitlements encoding=@"NSDictionary" offset=24
// property magic attributes=TI,N,V_magic
// property data attributes=T@"NSData",&,N,V_data
// property blob attributes=T{__Blob=II},R,N
// property length attributes=TI,R,N
// property entitlements attributes=T@"NSDictionary",&,N,V_entitlements
// IMP 0x1007724e4 | {__Blob=II}16@0:8
- (struct __Blob)blob;
// IMP 0x10077261c | I16@0:8
- (unsigned int)length;
// IMP 0x1007726b8 | @16@0:8
- (id)blobData;
// IMP 0x100772780 | I16@0:8
- (unsigned int)magic;
// IMP 0x1007727a0 | v20@0:8I16
- (void)setMagic:(unsigned int)arg0;
// IMP 0x1007727cc | @16@0:8
- (id)data;
// IMP 0x1007727ec | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x10077284c | @16@0:8
- (id)entitlements;
// IMP 0x100772878 | v24@0:8@16
- (void)setEntitlements:(id)arg0;
// IMP 0x1007728d4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100771f6c | @28@0:8I16@20
+ (id)blobWithMagic:(unsigned int)arg0 data:(id)arg1;
// IMP 0x100772048 | @24@0:8@16
+ (id)blobWithdata:(id)arg0;
@end
