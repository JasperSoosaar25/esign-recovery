// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9fa18
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMemoryHandle : XADHandle
// ivar backingdata encoding=@"NSData" offset=32
// ivar memorypos encoding=q offset=40
// IMP 0x1008e7480 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x1008e74ec | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e7564 | v16@0:8
- (void)dealloc;
// IMP 0x1008e75b4 | @16@0:8
- (id)data;
// IMP 0x1008e75c4 | @16@0:8
- (id)mutableData;
// IMP 0x1008e763c | q16@0:8
- (long long)fileSize;
// IMP 0x1008e7654 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e7664 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e76a8 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e771c | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e775c | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e780c | v28@0:8i16r^v20
- (void)writeBytes:(int)arg0 fromBuffer:(void *)arg1;
// IMP 0x1008e7908 | @16@0:8
- (id)fileContents;
// IMP 0x1008e7918 | @16@0:8
- (id)remainingFileContents;
// IMP 0x1008e796c | @20@0:8i16
- (id)readDataOfLength:(int)arg0;
// IMP 0x1008e7a04 | @20@0:8i16
- (id)readDataOfLengthAtMost:(int)arg0;
// IMP 0x1008e7a80 | @20@0:8i16
- (id)copyDataOfLength:(int)arg0;
// IMP 0x1008e7a9c | @20@0:8i16
- (id)copyDataOfLengthAtMost:(int)arg0;
// IMP 0x1008e7ab8 | @16@0:8
- (id)name;
// IMP 0x1008e7334 | @24@0:8@16
+ (id)memoryHandleForReadingData:(id)arg0;
// IMP 0x1008e736c | @28@0:8r^v16I24
+ (id)memoryHandleForReadingBuffer:(void *)arg0 length:(unsigned int)arg1;
// IMP 0x1008e73d8 | @24@0:8@16
+ (id)memoryHandleForReadingMappedFile:(id)arg0;
// IMP 0x1008e7430 | @16@0:8
+ (id)memoryHandleForWriting;
@end
