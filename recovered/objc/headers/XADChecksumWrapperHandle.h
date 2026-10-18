// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9eeb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADChecksumWrapperHandle : XADHandle
// ivar checksum encoding=@"XADHandle" offset=32
// IMP 0x1008e3088 | @32@0:8@16@24
- (id)initWithHandle:(id)arg0 checksumHandle:(id)arg1;
// IMP 0x1008e30e8 | v16@0:8
- (void)dealloc;
// IMP 0x1008e3138 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e3154 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e3170 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e318c | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e31a8 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e31c4 | v20@0:8i16
- (void)pushBackByte:(int)arg0;
// IMP 0x1008e31e0 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e31fc | v28@0:8i16r^v20
- (void)writeBytes:(int)arg0 fromBuffer:(void *)arg1;
// IMP 0x1008e3218 | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e3230 | B16@0:8
- (BOOL)isChecksumCorrect;
@end
