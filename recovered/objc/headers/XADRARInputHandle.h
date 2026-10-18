// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0818
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRARInputHandle : XADStreamHandle
// ivar parts encoding=@"NSArray" offset=64
// ivar part encoding=i offset=72
// ivar partend encoding=q offset=80
// ivar crc encoding=I offset=88
// ivar correctcrc encoding=I offset=92
// IMP 0x100914a0c | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 parts:(id)arg1;
// IMP 0x100914b08 | v16@0:8
- (void)dealloc;
// IMP 0x100914b58 | v16@0:8
- (void)resetStream;
// IMP 0x100914b7c | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x100914d04 | v16@0:8
- (void)startNextPart;
@end
