// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94598
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDAsyncSocketPreBuffer : NSObject
// ivar preBuffer encoding=* offset=8
// ivar preBufferSize encoding=Q offset=16
// ivar readPointer encoding=* offset=24
// ivar writePointer encoding=* offset=32
// IMP 0x10059b3ec | @24@0:8Q16
- (id)initWithCapacity:(unsigned long long)arg0;
// IMP 0x10059b44c | v16@0:8
- (void)dealloc;
// IMP 0x10059b498 | v24@0:8Q16
- (void)ensureCapacityForWrite:(unsigned long long)arg0;
// IMP 0x10059b500 | Q16@0:8
- (unsigned long long)availableBytes;
// IMP 0x10059b50c | *16@0:8
- (char *)readBuffer;
// IMP 0x10059b514 | v32@0:8^*16^Q24
- (void)getReadBuffer:(char * *)arg0 availableBytes:(unsigned long long *)arg1;
// IMP 0x10059b534 | v24@0:8Q16
- (void)didRead:(unsigned long long)arg0;
// IMP 0x10059b558 | Q16@0:8
- (unsigned long long)availableSpace;
// IMP 0x10059b56c | *16@0:8
- (char *)writeBuffer;
// IMP 0x10059b574 | v32@0:8^*16^Q24
- (void)getWriteBuffer:(char * *)arg0 availableSpace:(unsigned long long *)arg1;
// IMP 0x10059b59c | v24@0:8Q16
- (void)didWrite:(unsigned long long)arg0;
// IMP 0x10059b5ac | v16@0:8
- (void)reset;
@end
