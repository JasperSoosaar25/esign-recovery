// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95a50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYJceOutputStreamV2 : BLYJceStream
// IMP 0x100646e68 | @16@0:8
- (id)init;
// IMP 0x100646e78 | @20@0:8i16
- (id)initWithBufferSize:(int)arg0;
// IMP 0x100646f00 | v16@0:8
- (void)dealloc;
// IMP 0x100646f54 | v20@0:8i16
- (void)preventBufferOverflow:(int)arg0;
// IMP 0x1006470d4 | @16@0:8
- (id)data;
// IMP 0x10064710c | v24@0:8i16i20
- (void)writeTag:(int)arg0 type:(int)arg1;
// IMP 0x1006471d8 | v20@0:8c16
- (void)writeInt1:(signed char)arg0;
// IMP 0x100647250 | v20@0:8s16
- (void)writeInt2:(short)arg0;
// IMP 0x1006472d0 | v20@0:8i16
- (void)writeInt4:(int)arg0;
// IMP 0x100647360 | v24@0:8q16
- (void)writeInt8:(long long)arg0;
// IMP 0x100647410 | v28@0:8r^v16i24
- (void)writeBytes:(void *)arg0 size:(int)arg1;
// IMP 0x100647488 | v24@0:8f16i20
- (void)writeFloat:(float)arg0 tag:(int)arg1;
// IMP 0x10064750c | v28@0:8d16i24
- (void)writeDouble:(double)arg0 tag:(int)arg1;
// IMP 0x1006475ac | v28@0:8q16i24
- (void)writeInt:(long long)arg0 tag:(int)arg1;
// IMP 0x100647690 | v32@0:8@16i24B28
- (void)writeDictionary:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x10064792c | v32@0:8@16i24B28
- (void)writeArray:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x100647be8 | v32@0:8@16i24B28
- (void)writeNumber:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x100647e30 | v32@0:8@16i24B28
- (void)writeObject:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x1006480c0 | v32@0:8@16i24B28
- (void)writeString:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x1006482d8 | v32@0:8@16i24B28
- (void)writeData:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x1006484f8 | v32@0:8@16i24B28
- (void)writeAnything:(id)arg0 tag:(int)arg1 required:(BOOL)arg2;
// IMP 0x100646e08 | @16@0:8
+ (id)stream;
// IMP 0x100646e30 | @20@0:8i16
+ (id)streamWithCapability:(int)arg0;
@end
