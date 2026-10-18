// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d460
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItArsenicHandle : XADByteStreamHandle
// ivar initialmodel encoding={ArithmeticModel="totalfrequency"i"increment"i"frequencylimit"i"numsymbols"i"symbols"[128{ArithmeticSymbol="symbol"i"frequency"i}]} offset=268
// ivar selectormodel encoding={ArithmeticModel="totalfrequency"i"increment"i"frequencylimit"i"numsymbols"i"symbols"[128{ArithmeticSymbol="symbol"i"frequency"i}]} offset=1308
// ivar mtfmodel encoding=[7{ArithmeticModel="totalfrequency"i"increment"i"frequencylimit"i"numsymbols"i"symbols"[128{ArithmeticSymbol="symbol"i"frequency"i}]}] offset=2348
// ivar decoder encoding={ArithmeticDecoder="input"^{CSInputBuffer}"range"i"code"i} offset=9632
// ivar mtf encoding={MTFState="table"[256i]} offset=9648
// ivar blockbits encoding=i offset=10672
// ivar blocksize encoding=i offset=10676
// ivar block encoding=* offset=10680
// ivar endofblocks encoding=B offset=10688
// ivar numbytes encoding=i offset=10692
// ivar bytecount encoding=i offset=10696
// ivar transformindex encoding=i offset=10700
// ivar transform encoding=^I offset=10704
// ivar randomized encoding=i offset=10712
// ivar randcount encoding=i offset=10716
// ivar randindex encoding=i offset=10720
// ivar repeat encoding=i offset=10724
// ivar count encoding=i offset=10728
// ivar last encoding=i offset=10732
// ivar crc encoding=I offset=10736
// ivar compcrc encoding=I offset=10740
// IMP 0x1008ab538 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008ab588 | v16@0:8
- (void)dealloc;
// IMP 0x1008ab5e8 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008abc44 | v16@0:8
- (void)readBlock;
// IMP 0x1008ac05c | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1008ac27c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008ac284 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
