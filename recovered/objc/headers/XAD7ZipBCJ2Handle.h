// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c9c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XAD7ZipBCJ2Handle : XADByteStreamHandle
// ivar calls encoding=@"XADHandle" offset=272
// ivar jumps encoding=@"XADHandle" offset=280
// ivar ranges encoding=@"XADHandle" offset=288
// ivar callstart encoding=q offset=296
// ivar jumpstart encoding=q offset=304
// ivar rangestart encoding=q offset=312
// ivar probabilities encoding=[258S] offset=320
// ivar range encoding=I offset=836
// ivar code encoding=I offset=840
// ivar prevbyte encoding=i offset=844
// ivar val encoding=I offset=848
// ivar valbyte encoding=i offset=852
// IMP 0x10089b890 | @56@0:8@16@24@32@40q48
- (id)initWithHandle:(id)arg0 callHandle:(id)arg1 jumpHandle:(id)arg2 rangeHandle:(id)arg3 length:(long long)arg4;
// IMP 0x10089b984 | v16@0:8
- (void)dealloc;
// IMP 0x10089b9f4 | v16@0:8
- (void)resetByteStream;
// IMP 0x10089bb0c | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
@end
