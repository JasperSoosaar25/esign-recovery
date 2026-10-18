// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94728
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPAsyncFileResponse : NSObject
// ivar connection encoding=@"HTTPConnection" offset=8
// ivar filePath encoding=@"NSString" offset=16
// ivar fileLength encoding=Q offset=24
// ivar fileOffset encoding=Q offset=32
// ivar readOffset encoding=Q offset=40
// ivar aborted encoding=B offset=48
// ivar data encoding=@"NSData" offset=56
// ivar fileFD encoding=i offset=64
// ivar readBuffer encoding=^v offset=72
// ivar readBufferSize encoding=Q offset=80
// ivar readBufferOffset encoding=Q offset=88
// ivar readRequestLength encoding=Q offset=96
// ivar readQueue encoding=@"NSObject<OS_dispatch_queue>" offset=104
// ivar readSource encoding=@"NSObject<OS_dispatch_source>" offset=112
// ivar readSourceSuspended encoding=B offset=120
// IMP 0x1005a6398 | @32@0:8@16@24
- (id)initWithFilePath:(id)arg0 forConnection:(id)arg1;
// IMP 0x1005a64ec | v16@0:8
- (void)abort;
// IMP 0x1005a651c | v16@0:8
- (void)processReadBuffer;
// IMP 0x1005a656c | v16@0:8
- (void)pauseReadSource;
// IMP 0x1005a6588 | v16@0:8
- (void)resumeReadSource;
// IMP 0x1005a65a0 | v16@0:8
- (void)cancelReadSource;
// IMP 0x1005a65e0 | B16@0:8
- (BOOL)openFileAndSetupReadSource;
// IMP 0x1005a6808 | B16@0:8
- (BOOL)openFileIfNeeded;
// IMP 0x1005a6830 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005a6838 | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1005a6840 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005a6894 | @24@0:8Q16
- (id)readDataOfLength:(unsigned long long)arg0;
// IMP 0x1005a694c | B16@0:8
- (BOOL)isDone;
// IMP 0x1005a695c | @16@0:8
- (id)filePath;
// IMP 0x1005a6964 | B16@0:8
- (BOOL)isAsynchronous;
// IMP 0x1005a696c | v16@0:8
- (void)connectionDidClose;
// IMP 0x1005a6a00 | v16@0:8
- (void)dealloc;
// IMP 0x1005a6a4c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
