// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c798
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebServerFileResponse : GCDWebServerFileResponse
// ivar _filePath encoding=@"NSString" offset=8
// ivar _progressBlock encoding=@? offset=16
// ivar _finishBlock encoding=@? offset=24
// property filePath attributes=T@"NSString",&,N,V_filePath
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property finishBlock attributes=T@?,C,N,V_finishBlock
// IMP 0x1000acccc | @52@0:8@16{_NSRange=QQ}24B40@44
- (id)initWithFile:(id)arg0 byteRange:(struct _NSRange)arg1 isAttachment:(BOOL)arg2 mimeTypeOverrides:(id)arg3;
// IMP 0x1000acea0 | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x1000ad1ac | v16@0:8
- (void)close;
// IMP 0x1000ad330 | @16@0:8
- (id)filePath;
// IMP 0x1000ad358 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1000ad3d0 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x1000ad3ec | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x1000ad46c | @?16@0:8
- (id /* block */)finishBlock;
// IMP 0x1000ad488 | v24@0:8@?16
- (void)setFinishBlock:(id /* block */)arg0;
// IMP 0x1000ad4a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
