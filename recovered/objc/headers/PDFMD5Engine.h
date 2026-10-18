// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0e68
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFMD5Engine : NSObject
// ivar md5 encoding={?="lo"I"hi"I"a"I"b"I"c"I"d"I"buffer"[64C]"block"[16I]} offset=8
// ivar digest_bytes encoding=[16C] offset=160
// ivar done encoding=B offset=176
// IMP 0x1009206bc | @16@0:8
- (id)init;
// IMP 0x100920710 | v24@0:8@16
- (void)updateWithData:(id)arg0;
// IMP 0x100920770 | v32@0:8r^v16Q24
- (void)updateWithBytes:(void *)arg0 length:(unsigned long long)arg1;
// IMP 0x100920800 | @16@0:8
- (id)digest;
// IMP 0x100920850 | @16@0:8
- (id)hexDigest;
// IMP 0x10092090c | @16@0:8
- (id)description;
// IMP 0x1009205bc | @16@0:8
+ (id)engine;
// IMP 0x1009205e4 | @24@0:8@16
+ (id)digestForData:(id)arg0;
// IMP 0x100920644 | @28@0:8r^v16i24
+ (id)digestForBytes:(void *)arg0 length:(int)arg1;
@end
