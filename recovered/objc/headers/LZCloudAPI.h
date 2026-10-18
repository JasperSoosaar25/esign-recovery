// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c80000
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface LZCloudAPI : NSObject
// ivar _pcHeader encoding=B offset=8
// ivar _session encoding=@"NSURLSession" offset=16
// ivar _douploadUrl encoding=@"NSString" offset=24
// ivar _headers encoding=@"NSDictionary" offset=32
// ivar _uploadSize encoding=q offset=40
// ivar _userid encoding=@"NSNumber" offset=48
// ivar _progressBlock encoding=@? offset=56
// property session attributes=T@"NSURLSession",&,N,V_session
// property douploadUrl attributes=T@"NSString",C,N,V_douploadUrl
// property headers attributes=T@"NSDictionary",&,N,V_headers
// property uploadSize attributes=Tq,N,V_uploadSize
// property userid attributes=T@"NSNumber",&,N,V_userid
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property pcHeader attributes=TB,N,V_pcHeader
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10028cc90 | @16@0:8
- (id)init;
// IMP 0x10028ce2c | v16@0:8
- (void)tryToLogin;
// IMP 0x10028d5ac | @48@0:8@16@24@32@40
- (id)requestForMethod:(id)arg0 url:(id)arg1 header:(id)arg2 param:(id)arg3;
// IMP 0x10028da98 | @40@0:8@16@24@32
- (id)requestForMethod:(id)arg0 url:(id)arg1 param:(id)arg2;
// IMP 0x10028db90 | v48@0:8@16@24@32@?40
- (void)post:(id)arg0 param:(id)arg1 header:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10028e300 | v40@0:8@16@24@?32
- (void)post:(id)arg0 param:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x10028ea04 | v40@0:8@16@24@?32
- (void)get:(id)arg0 param:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x10028f33c | v16@0:8
- (void)refreshUploadSize;
// IMP 0x100290340 | v48@0:8@16@24@?32@?40
- (void)uploadFile:(id)arg0 folderId:(id)arg1 progressBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1002961fc | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1002963d0 | B16@0:8
- (BOOL)isLogin;
// IMP 0x100296834 | v40@0:8@16@24@?32
- (void)loginWithUserName:(id)arg0 password:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x100299020 | v40@0:8@16q24@?32
- (void)getFileListWithFolderId:(id)arg0 page:(long long)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x100299a80 | v32@0:8@16@?24
- (void)getFileInfoWithFileId:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x10029a2e4 | v32@0:8@16@?24
- (void)deleteFileWithFileId:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x10029aaf4 | v44@0:8@16@24B32@?36
- (void)setFilePasswordWithFileId:(id)arg0 password:(id)arg1 isLock:(BOOL)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10029b568 | v40@0:8@16@24@?32
- (void)moveFile:(id)arg0 toFolder:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x10029beb0 | v40@0:8@16@24@?32
- (void)getFileDownloadUrlWithShareUrl:(id)arg0 password:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1002a0be8 | v32@0:8@16@?24
- (void)getFileDownloadUrlWithShareUrl:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1002a3f54 | v32@0:8@16@?24
- (void)getFolderListWithFolderId:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1002a49e0 | v48@0:8@16@24@32@?40
- (void)createFolderWithName:(id)arg0 description:(id)arg1 parentId:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1002a5868 | @32@0:8@16@24
- (id)getHtmlParamWithText:(id)arg0 paramName:(id)arg1;
// IMP 0x1002a5d90 | v32@0:8@16@?24
- (void)deleteFolderWithId:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1002a66cc | @24@0:8@16
- (id)removeNotes:(id)arg0;
// IMP 0x1002a6d14 | @16@0:8
- (id)douploadUrl;
// IMP 0x1002a711c | @16@0:8
- (id)headers;
// IMP 0x1002aa304 | @16@0:8
- (id)session;
// IMP 0x1002aa324 | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x1002aa3b4 | v24@0:8@16
- (void)setDouploadUrl:(id)arg0;
// IMP 0x1002aa42c | v24@0:8@16
- (void)setHeaders:(id)arg0;
// IMP 0x1002aa480 | q16@0:8
- (long long)uploadSize;
// IMP 0x1002aa4ac | v24@0:8q16
- (void)setUploadSize:(long long)arg0;
// IMP 0x1002aa4d8 | @16@0:8
- (id)userid;
// IMP 0x1002aa4ec | v24@0:8@16
- (void)setUserid:(id)arg0;
// IMP 0x1002aa580 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x1002aa5a0 | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x1002aa5c0 | B16@0:8
- (BOOL)pcHeader;
// IMP 0x1002aa5d4 | v20@0:8B16
- (void)setPcHeader:(BOOL)arg0;
// IMP 0x1002aa5f4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10028cad0 | @16@0:8
+ (id)shared;
@end
