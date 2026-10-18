// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9fe78
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSubHandle : XADHandle
// ivar start encoding=q offset=32
// ivar end encoding=q offset=40
// IMP 0x1008e2f9c | B16@0:8
- (BOOL)hasChecksum;
// IMP 0x1008e3014 | B16@0:8
- (BOOL)isChecksumCorrect;
// IMP 0x1008e84b8 | @40@0:8@16q24q32
- (id)initWithHandle:(id)arg0 from:(long long)arg1 length:(long long)arg2;
// IMP 0x1008e8560 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e85c4 | v16@0:8
- (void)dealloc;
// IMP 0x1008e85f8 | q16@0:8
- (long long)startOffsetInParent;
// IMP 0x1008e8608 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e8628 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e8670 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e86d8 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e875c | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e8788 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e8818 | @16@0:8
- (id)description;
@end
