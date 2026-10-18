// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e770
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSegmentedHandle : XADHandle
// ivar count encoding=q offset=32
// ivar currindex encoding=q offset=40
// ivar currhandle encoding=@"XADHandle" offset=48
// ivar segmentends encoding=^q offset=56
// ivar segmentsizes encoding=@"NSArray" offset=64
// IMP 0x1008cf24c | @16@0:8
- (id)init;
// IMP 0x1008cf2c4 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008cf390 | v16@0:8
- (void)dealloc;
// IMP 0x1008cf400 | @16@0:8
- (id)currentHandle;
// IMP 0x1008cf434 | @16@0:8
- (id)segmentSizes;
// IMP 0x1008cf53c | q16@0:8
- (long long)fileSize;
// IMP 0x1008cf584 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008cf5f8 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008cf668 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008cf754 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008cf7b0 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008cf8b0 | @16@0:8
- (id)name;
// IMP 0x1008cf8d4 | @16@0:8
- (id)description;
// IMP 0x1008cf98c | q16@0:8
- (long long)numberOfSegments;
// IMP 0x1008cf994 | q24@0:8q16
- (long long)segmentSizeAtIndex:(long long)arg0;
// IMP 0x1008cf99c | @24@0:8q16
- (id)handleAtIndex:(long long)arg0;
// IMP 0x1008cf9a4 | v16@0:8
- (void)_open;
// IMP 0x1008cfb18 | v24@0:8q16
- (void)_setCurrentIndex:(long long)arg0;
// IMP 0x1008cfb88 | v16@0:8
- (void)_raiseNoSegments;
// IMP 0x1008cfbac | v24@0:8q16
- (void)_raiseSizeUnknownForSegment:(long long)arg0;
@end
