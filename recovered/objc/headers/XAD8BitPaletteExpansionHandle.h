// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0a20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD8BitPaletteExpansionHandle : XADByteStreamHandle
// ivar palette encoding=@"NSData" offset=272
// ivar bytebuffer encoding=[8C] offset=280
// ivar numchannels encoding=i offset=288
// ivar currentchannel encoding=i offset=292
// IMP 0x10091dd5c | @44@0:8@16q24i32@36
- (id)initWithHandle:(id)arg0 length:(long long)arg1 numberOfChannels:(int)arg2 palette:(id)arg3;
// IMP 0x10091ddd4 | v16@0:8
- (void)dealloc;
// IMP 0x10091de24 | v16@0:8
- (void)resetByteStream;
// IMP 0x10091de40 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
