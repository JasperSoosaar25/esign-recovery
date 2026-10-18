// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9fce8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStreamHandle : XADHandle
// ivar streampos encoding=q offset=32
// ivar streamlength encoding=q offset=40
// ivar needsreset encoding=B offset=48
// ivar endofstream encoding=B offset=49
// ivar nextstreambyte encoding=i offset=52
// ivar input encoding=^{CSInputBuffer=@qB*IIIII} offset=56
// IMP 0x1008e3618 | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e3030 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e305c | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e7e90 | @24@0:8@16
- (id)initWithParentHandle:(id)arg0;
// IMP 0x1008e7ea0 | @32@0:8@16q24
- (id)initWithParentHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008e7f34 | @24@0:8@16
- (id)initWithInputBufferForHandle:(id)arg0;
// IMP 0x1008e7f48 | @32@0:8@16q24
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008e7f58 | @28@0:8@16i24
- (id)initWithInputBufferForHandle:(id)arg0 bufferSize:(int)arg1;
// IMP 0x1008e7f6c | @36@0:8@16q24i32
- (id)initWithInputBufferForHandle:(id)arg0 length:(long long)arg1 bufferSize:(int)arg2;
// IMP 0x1008e8024 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e8048 | v16@0:8
- (void)dealloc;
// IMP 0x1008e8098 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e80a8 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e80b8 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e81a4 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e824c | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e825c | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e836c | v16@0:8
- (void)resetStream;
// IMP 0x1008e8370 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e8378 | v16@0:8
- (void)endStream;
// IMP 0x1008e838c | B24@0:8q16
- (BOOL)_prepareStreamSeekTo:(long long)arg0;
// IMP 0x1008e846c | v24@0:8q16
- (void)setStreamLength:(long long)arg0;
// IMP 0x1008e847c | v24@0:8^{CSInputBuffer=@qB*IIIII}16
- (void)setInputBuffer:(struct CSInputBuffer *)arg0;
@end
