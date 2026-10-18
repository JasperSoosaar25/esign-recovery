// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c803c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface TYDownLoadDataManager : NSObject
// ivar _resumeDownloadFIFO encoding=B offset=8
// ivar _isBatchDownload encoding=B offset=9
// ivar _delegate encoding=@"<TYDownloadDelegate>" offset=16
// ivar _maxDownloadCount encoding=q offset=24
// ivar _fileManager encoding=@"NSFileManager" offset=32
// ivar _session encoding=@"NSURLSession" offset=40
// ivar _downloadingModelDic encoding=@"NSMutableDictionary" offset=48
// ivar _waitingDownloadModels encoding=@"NSMutableArray" offset=56
// ivar _downloadingModels encoding=@"NSMutableArray" offset=64
// ivar _queue encoding=@"NSOperationQueue" offset=72
// property fileManager attributes=T@"NSFileManager",&,N,V_fileManager
// property session attributes=T@"NSURLSession",&,N,V_session
// property downloadingModelDic attributes=T@"NSMutableDictionary",&,N,V_downloadingModelDic
// property waitingDownloadModels attributes=T@"NSMutableArray",&,N,V_waitingDownloadModels
// property downloadingModels attributes=T@"NSMutableArray",&,N,V_downloadingModels
// property queue attributes=T@"NSOperationQueue",&,N,V_queue
// property delegate attributes=T@"<TYDownloadDelegate>",W,N,V_delegate
// property maxDownloadCount attributes=Tq,N,V_maxDownloadCount
// property resumeDownloadFIFO attributes=TB,N,V_resumeDownloadFIFO
// property isBatchDownload attributes=TB,N,V_isBatchDownload
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1002fa5f8 | @16@0:8
- (id)init;
// IMP 0x1002fa784 | @16@0:8
- (id)fileManager;
// IMP 0x1002fa870 | @16@0:8
- (id)session;
// IMP 0x1002fb350 | @16@0:8
- (id)queue;
// IMP 0x1002fb470 | @24@0:8@16
- (id)fileSizePathWithDownloadModel:(id)arg0;
// IMP 0x1002fb860 | @16@0:8
- (id)downloadingModelDic;
// IMP 0x1002fb980 | @16@0:8
- (id)waitingDownloadModels;
// IMP 0x1002fba8c | @16@0:8
- (id)downloadingModels;
// IMP 0x1002fbb80 | @48@0:8@16@24@?32@?40
- (id)startDownloadURLString:(id)arg0 toDestinationPath:(id)arg1 progress:(id /* block */)arg2 state:(id /* block */)arg3;
// IMP 0x1002fbec8 | v40@0:8@16@?24@?32
- (void)startWithDownloadModel:(id)arg0 progress:(id /* block */)arg1 state:(id /* block */)arg2;
// IMP 0x1002fbfe8 | v24@0:8@16
- (void)startWithDownloadModel:(id)arg0;
// IMP 0x1002fc3a4 | v24@0:8@16
- (void)willResumeNextWithDowloadModel:(id)arg0;
// IMP 0x1002fc860 | B24@0:8@16
- (BOOL)canResumeDownlaodModel:(id)arg0;
// IMP 0x1002fce94 | v24@0:8@16
- (void)resumeWithDownloadModel:(id)arg0;
// IMP 0x1002fd7b0 | v24@0:8@16
- (void)suspendWithDownloadModel:(id)arg0;
// IMP 0x1002fd91c | v24@0:8@16
- (void)cancleWithDownloadModel:(id)arg0;
// IMP 0x1002fdcd8 | v24@0:8@16
- (void)deleteFileWithDownloadModel:(id)arg0;
// IMP 0x1002fe290 | @24@0:8@16
- (id)downLoadingModelForURLString:(id)arg0;
// IMP 0x1002fe348 | B24@0:8@16
- (BOOL)isDownloadCompletedWithDownloadModel:(id)arg0;
// IMP 0x1002fe58c | @24@0:8@16
- (id)progessWithDownloadModel:(id)arg0;
// IMP 0x1002fe7a8 | v48@0:8@16Q24@32@40
- (void)downloadModel:(id)arg0 didChangeState:(unsigned long long)arg1 filePath:(id)arg2 error:(id)arg3;
// IMP 0x1002feac4 | v32@0:8@16@24
- (void)downloadModel:(id)arg0 updateProgress:(id)arg1;
// IMP 0x1002feda0 | v24@0:8@16
- (void)createDirectory:(id)arg0;
// IMP 0x1002feec8 | v24@0:8@16
- (void)removeDownLoadingModelForURLString:(id)arg0;
// IMP 0x1002fef9c | v48@0:8@16@24@32@?40
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1002ff390 | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
// IMP 0x1002ffcbc | v40@0:8@16@24@32
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// IMP 0x100300dec | @16@0:8
- (id)delegate;
// IMP 0x100300e44 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100300eac | q16@0:8
- (long long)maxDownloadCount;
// IMP 0x100300ed8 | v24@0:8q16
- (void)setMaxDownloadCount:(long long)arg0;
// IMP 0x100300f04 | B16@0:8
- (BOOL)resumeDownloadFIFO;
// IMP 0x100300f2c | v20@0:8B16
- (void)setResumeDownloadFIFO:(BOOL)arg0;
// IMP 0x100300f5c | B16@0:8
- (BOOL)isBatchDownload;
// IMP 0x100300f88 | v20@0:8B16
- (void)setIsBatchDownload:(BOOL)arg0;
// IMP 0x100300fb4 | v24@0:8@16
- (void)setFileManager:(id)arg0;
// IMP 0x100300fd8 | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x100301034 | v24@0:8@16
- (void)setDownloadingModelDic:(id)arg0;
// IMP 0x1003010b8 | v24@0:8@16
- (void)setWaitingDownloadModels:(id)arg0;
// IMP 0x100301114 | v24@0:8@16
- (void)setDownloadingModels:(id)arg0;
// IMP 0x1003011a8 | v24@0:8@16
- (void)setQueue:(id)arg0;
// IMP 0x1003011d8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1002fa430 | @16@0:8
+ (id)manager;
@end
