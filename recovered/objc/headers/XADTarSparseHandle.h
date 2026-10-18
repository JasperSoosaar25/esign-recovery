// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9db90
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADTarSparseHandle : XADHandle
// ivar regions encoding=^{XADTarSparseRegion=iqqBq} offset=32
// ivar numRegions encoding=i offset=40
// ivar currentRegion encoding=i offset=44
// ivar currentOffset encoding=q offset=48
// ivar realFileSize encoding=q offset=56
// IMP 0x1008b7858 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 size:(long long)arg1;
// IMP 0x1008b7928 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008b79e8 | v16@0:8
- (void)dealloc;
// IMP 0x1008b7a38 | i24@0:8q16
- (int)regionIndexForOffset:(long long)arg0;
// IMP 0x1008b7ad8 | v32@0:8q16q24
- (void)addSparseRegionFrom:(long long)arg0 length:(long long)arg1;
// IMP 0x1008b7c7c | v24@0:8q16
- (void)addFinalSparseRegionEndingAt:(long long)arg0;
// IMP 0x1008b7dbc | v16@0:8
- (void)setSingleEmptySparseRegion;
// IMP 0x1008b7e54 | q16@0:8
- (long long)fileSize;
// IMP 0x1008b7e64 | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008b7e74 | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008b7eac | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008b7ebc | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008b7ef0 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
@end
