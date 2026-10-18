// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e088
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIMediaCacheWorker : NSObject
// ivar _writting encoding=B offset=8
// ivar _writeBytes encoding=f offset=12
// ivar _setupError encoding=@"NSError" offset=16
// ivar _readFileHandle encoding=@"NSFileHandle" offset=24
// ivar _writeFileHandle encoding=@"NSFileHandle" offset=32
// ivar _filePath encoding=@"NSString" offset=40
// ivar _internalCacheConfiguration encoding=@"VICacheConfiguration" offset=48
// ivar _currentOffset encoding=q offset=56
// ivar _startWriteDate encoding=@"NSDate" offset=64
// property readFileHandle attributes=T@"NSFileHandle",&,N,V_readFileHandle
// property writeFileHandle attributes=T@"NSFileHandle",&,N,V_writeFileHandle
// property setupError attributes=T@"NSError",&,N,V_setupError
// property filePath attributes=T@"NSString",C,N,V_filePath
// property internalCacheConfiguration attributes=T@"VICacheConfiguration",&,N,V_internalCacheConfiguration
// property currentOffset attributes=Tq,N,V_currentOffset
// property startWriteDate attributes=T@"NSDate",&,N,V_startWriteDate
// property writeBytes attributes=Tf,N,V_writeBytes
// property writting attributes=TB,N,V_writting
// property cacheConfiguration attributes=T@"VICacheConfiguration",R,N
// IMP 0x1001b5a34 | v16@0:8
- (void)dealloc;
// IMP 0x1001b5b30 | @24@0:8@16
- (id)initWithURL:(id)arg0;
// IMP 0x1001b61a4 | @16@0:8
- (id)cacheConfiguration;
// IMP 0x1001b61d0 | v48@0:8@16{_NSRange=QQ}24^@40
- (void)cacheData:(id)arg0 forRange:(struct _NSRange)arg1 error:(id *)arg2;
// IMP 0x1001b67e8 | @40@0:8{_NSRange=QQ}16^@32
- (id)cachedDataForRange:(struct _NSRange)arg0 error:(id *)arg1;
// IMP 0x1001b6f5c | @32@0:8{_NSRange=QQ}16
- (id)cachedDataActionsForRange:(struct _NSRange)arg0;
// IMP 0x1001b7c2c | v32@0:8@16^@24
- (void)setContentInfo:(id)arg0 error:(id *)arg1;
// IMP 0x1001b8298 | v16@0:8
- (void)save;
// IMP 0x1001b841c | v16@0:8
- (void)startWritting;
// IMP 0x1001b85d8 | v16@0:8
- (void)finishWritting;
// IMP 0x1001b8714 | v24@0:8@16
- (void)applicationDidEnterBackground:(id)arg0;
// IMP 0x1001b8780 | @16@0:8
- (id)setupError;
// IMP 0x1001b8794 | v24@0:8@16
- (void)setSetupError:(id)arg0;
// IMP 0x1001b87f4 | @16@0:8
- (id)readFileHandle;
// IMP 0x1001b8814 | v24@0:8@16
- (void)setReadFileHandle:(id)arg0;
// IMP 0x1001b8844 | @16@0:8
- (id)writeFileHandle;
// IMP 0x1001b8858 | v24@0:8@16
- (void)setWriteFileHandle:(id)arg0;
// IMP 0x1001b88b4 | @16@0:8
- (id)filePath;
// IMP 0x1001b88d4 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1001b894c | @16@0:8
- (id)internalCacheConfiguration;
// IMP 0x1001b8960 | v24@0:8@16
- (void)setInternalCacheConfiguration:(id)arg0;
// IMP 0x1001b89c0 | q16@0:8
- (long long)currentOffset;
// IMP 0x1001b89e0 | v24@0:8q16
- (void)setCurrentOffset:(long long)arg0;
// IMP 0x1001b8a00 | @16@0:8
- (id)startWriteDate;
// IMP 0x1001b8a14 | v24@0:8@16
- (void)setStartWriteDate:(id)arg0;
// IMP 0x1001b8aa4 | f16@0:8
- (float)writeBytes;
// IMP 0x1001b8ab8 | v20@0:8f16
- (void)setWriteBytes:(float)arg0;
// IMP 0x1001b8ad8 | B16@0:8
- (BOOL)writting;
// IMP 0x1001b8b00 | v20@0:8B16
- (void)setWritting:(BOOL)arg0;
// IMP 0x1001b8b20 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
