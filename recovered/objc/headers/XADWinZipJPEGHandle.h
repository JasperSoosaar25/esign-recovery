// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca07c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADWinZipJPEGHandle : XADBlockStreamHandle
// ivar decompressor encoding=^{WinZipJPEGDecompressor=^?^vI*BB{WinZipJPEGMetadata=IIIIIIIII[4{WinZipJPEGComponent=III^{WinZipJPEGQuantizationTable}}]I[4{WinZipJPEGScanComponent=^{WinZipJPEGComponent}^{WinZipJPEGHuffmanTable}^{WinZipJPEGHuffmanTable}}][4{WinZipJPEGQuantizationTable=[64s]}][2[4{WinZipJPEGHuffmanTable=[256{WinZipJPEGHuffmanCode=II}]}]]}BIIII[4i]QIB{WinZipJPEGArithmeticDecoder=^?^vBCCCCCCIiiiiI}[4[13[63{WinZipJPEGContext=iiCC}]]][4[62[3[6{WinZipJPEGContext=iiCC}]]]][4[63[5[7{WinZipJPEGContext=iiCC}]]]][4[3[9[9[9{WinZipJPEGContext=iiCC}]]]]][4[3[7[13{WinZipJPEGContext=iiCC}]]]][4[27[3[2{WinZipJPEGContext=iiCC}]]]][4[13[10{WinZipJPEGContext=iiCC}]]][4[13[14{WinZipJPEGContext=iiCC}]]][4[2[2[2{WinZipJPEGContext=iiCC}]]]]{WinZipJPEGContext=iiCC}[4^{WinZipJPEGBlock}]^{WinZipJPEGBlock}BIIIIIIIIB} offset=88
// ivar buffer encoding=[65536C] offset=96
// IMP 0x10090e9bc | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x10090ea00 | v16@0:8
- (void)dealloc;
// IMP 0x10090ea50 | v16@0:8
- (void)resetBlockStream;
// IMP 0x10090ec3c | i24@0:8q16
- (int)produceBlockAtOffset:(long long)arg0;
@end
