// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ee10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSkipHandle : XADHandle
// ivar regions encoding=^{XADSkipRegion=qq} offset=32
// ivar numregions encoding=i offset=40
// IMP 0x1008e252c | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x1008e259c | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e2624 | v16@0:8
- (void)dealloc;
// IMP 0x1008e2674 | v32@0:8q16q24
- (void)addSkipFrom:(long long)arg0 length:(long long)arg1;
// IMP 0x1008e2684 | v32@0:8q16q24
- (void)addSkipFrom:(long long)arg0 to:(long long)arg1;
// IMP 0x1008e28a4 | q24@0:8q16
- (long long)actualOffsetForSkipOffset:(long long)arg0;
// IMP 0x1008e297c | q24@0:8q16
- (long long)skipOffsetForActualOffset:(long long)arg0;
// IMP 0x1008e2a1c | q16@0:8
- (long long)fileSize;
// IMP 0x1008e2a74 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e2ab4 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e2ae8 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e2b28 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e2b44 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
