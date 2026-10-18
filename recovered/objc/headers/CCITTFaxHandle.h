// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0a98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CCITTFaxHandle : XADByteStreamHandle
// ivar columns encoding=i offset=268
// ivar white encoding=i offset=272
// ivar column encoding=i offset=276
// ivar colour encoding=i offset=280
// ivar bitsleft encoding=i offset=284
// IMP 0x10091dfa4 | @32@0:8@16i24i28
- (id)initWithInputBufferForHandle:(id)arg0 columns:(int)arg1 white:(int)arg2;
// IMP 0x10091e004 | v16@0:8
- (void)resetByteStream;
// IMP 0x10091e028 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x10091e17c | v16@0:8
- (void)startNewLine;
// IMP 0x10091e180 | v16@0:8
- (void)findNextSpanLength;
@end
