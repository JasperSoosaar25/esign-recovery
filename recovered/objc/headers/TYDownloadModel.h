// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d278
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface TYDownloadModel : NSObject
// ivar _manualCancle encoding=B offset=8
// ivar _downloadURL encoding=@"NSString" offset=16
// ivar _state encoding=Q offset=24
// ivar _task encoding=@"NSURLSessionTask" offset=32
// ivar _stream encoding=@"NSOutputStream" offset=40
// ivar _progress encoding=@"TYDownloadProgress" offset=48
// ivar _progressBlock encoding=@? offset=56
// ivar _stateBlock encoding=@? offset=64
// ivar _fileName encoding=@"NSString" offset=72
// ivar _downloadDirectory encoding=@"NSString" offset=80
// ivar _filePath encoding=@"NSString" offset=88
// ivar _downloadDate encoding=@"NSDate" offset=96
// ivar _resumeData encoding=@"NSData" offset=104
// property downloadURL attributes=T@"NSString",&,N,V_downloadURL
// property fileName attributes=T@"NSString",&,N,V_fileName
// property downloadDirectory attributes=T@"NSString",&,N,V_downloadDirectory
// property state attributes=TQ,N,V_state
// property task attributes=T@"NSURLSessionTask",&,N,V_task
// property stream attributes=T@"NSOutputStream",&,N,V_stream
// property filePath attributes=T@"NSString",&,N,V_filePath
// property downloadDate attributes=T@"NSDate",&,N,V_downloadDate
// property resumeData attributes=T@"NSData",&,N,V_resumeData
// property manualCancle attributes=TB,N,V_manualCancle
// property progress attributes=T@"TYDownloadProgress",R,N,V_progress
// property totalFileSize attributes=TQ,N
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property stateBlock attributes=T@?,C,N,V_stateBlock
// IMP 0x1000fa474 | @16@0:8
- (id)init;
// IMP 0x1000fa5d0 | @24@0:8@16
- (id)initWithURLString:(id)arg0;
// IMP 0x1000fa690 | @32@0:8@16@24
- (id)initWithURLString:(id)arg0 filePath:(id)arg1;
// IMP 0x1000fa8c0 | v24@0:8@16
- (void)updateProgress:(id)arg0;
// IMP 0x1000fa948 | @16@0:8
- (id)fileName;
// IMP 0x1000faa4c | @16@0:8
- (id)downloadDirectory;
// IMP 0x1000fadd4 | @16@0:8
- (id)filePath;
// IMP 0x1000faf34 | Q16@0:8
- (unsigned long long)totalFileSize;
// IMP 0x1000fb134 | v24@0:8Q16
- (void)setTotalFileSize:(unsigned long long)arg0;
// IMP 0x1000fb3f8 | v16@0:8
- (void)updateStateToNone;
// IMP 0x1000fb418 | @16@0:8
- (id)downloadURL;
// IMP 0x1000fb438 | v24@0:8@16
- (void)setDownloadURL:(id)arg0;
// IMP 0x1000fb490 | Q16@0:8
- (unsigned long long)state;
// IMP 0x1000fb4b0 | v24@0:8Q16
- (void)setState:(unsigned long long)arg0;
// IMP 0x1000fb4d0 | @16@0:8
- (id)task;
// IMP 0x1000fb4fc | v24@0:8@16
- (void)setTask:(id)arg0;
// IMP 0x1000fb58c | @16@0:8
- (id)stream;
// IMP 0x1000fb5ac | v24@0:8@16
- (void)setStream:(id)arg0;
// IMP 0x1000fb614 | @16@0:8
- (id)progress;
// IMP 0x1000fb640 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x1000fb66c | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x1000fb6d8 | @?16@0:8
- (id /* block */)stateBlock;
// IMP 0x1000fb708 | v24@0:8@?16
- (void)setStateBlock:(id /* block */)arg0;
// IMP 0x1000fb728 | v24@0:8@16
- (void)setFileName:(id)arg0;
// IMP 0x1000fb790 | v24@0:8@16
- (void)setDownloadDirectory:(id)arg0;
// IMP 0x1000fb7e4 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1000fb874 | @16@0:8
- (id)downloadDate;
// IMP 0x1000fb894 | v24@0:8@16
- (void)setDownloadDate:(id)arg0;
// IMP 0x1000fb904 | @16@0:8
- (id)resumeData;
// IMP 0x1000fb924 | v24@0:8@16
- (void)setResumeData:(id)arg0;
// IMP 0x1000fb99c | B16@0:8
- (BOOL)manualCancle;
// IMP 0x1000fb9d0 | v20@0:8B16
- (void)setManualCancle:(BOOL)arg0;
// IMP 0x1000fb9f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
