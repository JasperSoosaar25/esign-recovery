// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0408
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADARCCrunchHandle : XADByteStreamHandle
// ivar fast encoding=B offset=268
// ivar numfreecodes encoding=i offset=272
// ivar sp encoding=i offset=276
// ivar lastcode encoding=i offset=280
// ivar lastbyte encoding=C offset=284
// ivar table encoding=[4096{XADARCCrunchEntry="used"B"byte"C"next"i"parent"i}] offset=288
// ivar stack encoding=[4096C] offset=49440
// IMP 0x100900550 | @28@0:8@16B24
- (id)initWithHandle:(id)arg0 useFastHash:(BOOL)arg1;
// IMP 0x100900564 | @36@0:8@16q24B32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 useFastHash:(BOOL)arg2;
// IMP 0x1009005b4 | v16@0:8
- (void)resetByteStream;
// IMP 0x100900684 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1009008a8 | v24@0:8i16i20
- (void)updateTableWithParent:(int)arg0 byteValue:(int)arg1;
@end
