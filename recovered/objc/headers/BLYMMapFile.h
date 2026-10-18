// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96360
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYMMapFile : NSObject
// ivar mmapBufferPtr encoding=^v offset=8
// ivar _filePath encoding=@"NSString" offset=16
// ivar _mmapBufferSize encoding=Q offset=24
// property filePath attributes=T@"NSString",&,N,V_filePath
// property mmapBufferSize attributes=TQ,N,V_mmapBufferSize
// IMP 0x100669658 | B16@0:8
- (BOOL)createAndInitInfo;
// IMP 0x10066970c | B16@0:8
- (BOOL)openFileData;
// IMP 0x1006697c8 | B16@0:8
- (BOOL)isMagicCorrect;
// IMP 0x100669800 | v16@0:8
- (void)dealloc;
// IMP 0x100669884 | B24@0:8^{?=QdQQiiiii}16
- (BOOL)writeBLYMMapFile:(void * /* aggregate ? */ *)arg0;
// IMP 0x1006698d0 | B24@0:8^{?=QdQQiiiii}16
- (BOOL)readBLYMMapFile:(void * /* aggregate ? */ *)arg0;
// IMP 0x100669958 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100669934 | @16@0:8
- (id)filePath;
// IMP 0x10066993c | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x100669948 | Q16@0:8
- (unsigned long long)mmapBufferSize;
// IMP 0x100669950 | v24@0:8Q16
- (void)setMmapBufferSize:(unsigned long long)arg0;
// IMP 0x100669498 | @32@0:8@16Q24
+ (id)createBLYMMapFile:(id)arg0 bufferSize:(unsigned long long)arg1;
// IMP 0x100669578 | @32@0:8@16Q24
+ (id)openBLYMMapFile:(id)arg0 bufferSize:(unsigned long long)arg1;
@end
