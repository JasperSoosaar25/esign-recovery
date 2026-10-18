// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94958
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPFileResponse : NSObject
// ivar connection encoding=@"HTTPConnection" offset=8
// ivar filePath encoding=@"NSString" offset=16
// ivar fileLength encoding=Q offset=24
// ivar fileOffset encoding=Q offset=32
// ivar aborted encoding=B offset=40
// ivar fileFD encoding=i offset=44
// ivar buffer encoding=^v offset=48
// ivar bufferSize encoding=Q offset=56
// IMP 0x1005aba00 | @32@0:8@16@24
- (id)initWithFilePath:(id)arg0 forConnection:(id)arg1;
// IMP 0x1005abb6c | v16@0:8
- (void)abort;
// IMP 0x1005abb9c | B16@0:8
- (BOOL)openFile;
// IMP 0x1005abbe8 | B16@0:8
- (BOOL)openFileIfNeeded;
// IMP 0x1005abc10 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005abc18 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1005abc20 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005abc74 | @24@0:8Q16
- (id)readDataOfLength:(unsigned long long)arg0;
// IMP 0x1005abd28 | B16@0:8
- (BOOL)isDone;
// IMP 0x1005abd38 | @16@0:8
- (id)filePath;
// IMP 0x1005abd40 | v16@0:8
- (void)dealloc;
// IMP 0x1005abd9c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
