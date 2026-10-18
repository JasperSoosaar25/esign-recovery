// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1368
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPMArc1Handle : XADLZSSHandle
// ivar bytesleft encoding=i offset=300
// ivar nextismatch encoding=B offset=304
// ivar byte_decode_tree encoding=r* offset=312
// ivar history_list encoding={?="history"[256{?="prev"C"next"C}]"history_head"C} offset=320
// IMP 0x10092e4a0 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x10092e4d8 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x10092e678 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x10092eae0 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
