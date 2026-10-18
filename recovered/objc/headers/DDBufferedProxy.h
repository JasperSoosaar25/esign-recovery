// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82cb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDBufferedProxy : NSProxy
// ivar _fileLogger encoding=@"DDFileLogger" offset=8
// ivar _buffer encoding=@"NSOutputStream" offset=16
// ivar _maxBufferSizeBytes encoding=Q offset=24
// ivar _currentBufferSizeBytes encoding=Q offset=32
// property fileLogger attributes=T@"DDFileLogger",&,N,V_fileLogger
// property buffer attributes=T@"NSOutputStream",&,N,V_buffer
// property maxBufferSizeBytes attributes=TQ,N,V_maxBufferSizeBytes
// property currentBufferSizeBytes attributes=TQ,N,V_currentBufferSizeBytes
// IMP 0x10040fb4c | @24@0:8@16
- (id)initWithFileLogger:(id)arg0;
// IMP 0x10040fbc4 | v16@0:8
- (void)dealloc;
// IMP 0x10040fcc4 | v16@0:8
- (void)flushBuffer;
// IMP 0x10040fd28 | v16@0:8
- (void)lt_sendBufferedDataToFileLogger;
// IMP 0x10040fd8c | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x10040fe8c | v16@0:8
- (void)flush;
// IMP 0x100410050 | v24@0:8Q16
- (void)setMaxBufferSizeBytes:(unsigned long long)arg0;
// IMP 0x1004100b4 | @16@0:8
- (id)wrapWithBuffer;
// IMP 0x1004100b8 | @16@0:8
- (id)unwrapFromBuffer;
// IMP 0x1004100bc | @24@0:8:16
- (id)methodSignatureForSelector:(SEL)arg0;
// IMP 0x100410108 | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x10041014c | v24@0:8@16
- (void)forwardInvocation:(id)arg0;
// IMP 0x1004101a0 | @16@0:8
- (id)fileLogger;
// IMP 0x1004101b0 | v24@0:8@16
- (void)setFileLogger:(id)arg0;
// IMP 0x1004101c4 | @16@0:8
- (id)buffer;
// IMP 0x1004101d4 | v24@0:8@16
- (void)setBuffer:(id)arg0;
// IMP 0x1004101e8 | Q16@0:8
- (unsigned long long)maxBufferSizeBytes;
// IMP 0x1004101f8 | Q16@0:8
- (unsigned long long)currentBufferSizeBytes;
// IMP 0x100410208 | v24@0:8Q16
- (void)setCurrentBufferSizeBytes:(unsigned long long)arg0;
// IMP 0x100410218 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
