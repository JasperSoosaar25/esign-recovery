// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c811c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSourceManager : NSObject
// ivar _agreeDeal encoding=B offset=8
// ivar _alwayDeleted encoding=B offset=9
// ivar _sortASC encoding=B offset=10
// ivar _canUseTroll encoding=B offset=11
// ivar _canMDM encoding=B offset=12
// ivar _cache encoding=@"YYCache" offset=16
// ivar _sourceDirPath encoding=@"NSString" offset=24
// ivar _trashDirPath encoding=@"NSString" offset=32
// ivar _fileControlPath encoding=@"NSString" offset=40
// ivar _fileOrignPath encoding=@"NSString" offset=48
// ivar _backupPath encoding=@"NSString" offset=56
// ivar _decryptDocPath encoding=@"NSString" offset=64
// ivar _fileState encoding=Q offset=72
// ivar _sortState encoding=Q offset=80
// ivar _uploaderServer encoding=@"GCDWebUploader" offset=88
// ivar _httpsServer encoding=@"HTTPServer" offset=96
// ivar _appFolder encoding=@"NSString" offset=104
// ivar _esign_version encoding=@"NSString" offset=112
// ivar _certs encoding=@"NSMutableArray" offset=120
// ivar _unsignApps encoding=@"NSMutableArray" offset=128
// ivar _signApps encoding=@"NSMutableArray" offset=136
// ivar _bookmarks encoding=@"NSMutableArray" offset=144
// property appStoreSources attributes=T@"NSMutableArray",R,N
// property blackSourceList attributes=T@"NSMutableArray",R,N
// property httpDelegate attributes=T@"<YYYSourceManagerHTTPDelegate>",W,N
// property installDictionary attributes=T@"NSMutableDictionary",R,N
// property gitRemote attributes=TQ,N
// property unSignedAppFolder attributes=T@"NSString",R,C,N
// property signedAppFolder attributes=T@"NSString",R,C,N
// property logoCacheFolder attributes=T@"NSString",R,C,N
// property certSerialNumber attributes=T@"NSString",C,N
// property certs attributes=T@"NSMutableArray",&,N,V_certs
// property unsignApps attributes=T@"NSMutableArray",&,N,V_unsignApps
// property signApps attributes=T@"NSMutableArray",&,N,V_signApps
// property bookmarks attributes=T@"NSMutableArray",&,N,V_bookmarks
// property appFolder attributes=T@"NSString",&,N,V_appFolder
// property agreeDeal attributes=TB,N,V_agreeDeal
// property cache attributes=T@"YYCache",&,N,V_cache
// property sourceDirPath attributes=T@"NSString",C,N,V_sourceDirPath
// property trashDirPath attributes=T@"NSString",C,N,V_trashDirPath
// property fileControlPath attributes=T@"NSString",C,N,V_fileControlPath
// property fileOrignPath attributes=T@"NSString",C,N,V_fileOrignPath
// property backupPath attributes=T@"NSString",C,N,V_backupPath
// property decryptDocPath attributes=T@"NSString",C,N,V_decryptDocPath
// property alwayDeleted attributes=TB,N,V_alwayDeleted
// property fileState attributes=TQ,N,V_fileState
// property sortState attributes=TQ,N,V_sortState
// property sortASC attributes=TB,N,V_sortASC
// property uploaderServer attributes=T@"GCDWebUploader",&,N,V_uploaderServer
// property httpsServer attributes=T@"HTTPServer",&,N,V_httpsServer
// property udid attributes=T@"NSString",R,N
// property deviceFreeDiskSpace attributes=Tq,R,N
// property canUseTroll attributes=TB,N,V_canUseTroll
// property esign_version attributes=T@"NSString",C,N,V_esign_version
// property canMDM attributes=TB,N,V_canMDM
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1003b8340 | v16@0:8
- (void)saveCerts;
// IMP 0x1003b854c | v24@0:8@16
- (void)addCert:(id)arg0;
// IMP 0x1003b900c | v24@0:8@16
- (void)addCertWithDictionary:(id)arg0;
// IMP 0x1003ba698 | v16@0:8
- (void)checkNewEnterpriseCert;
// IMP 0x1003bbc50 | v24@0:8@16
- (void)checkCertStatus:(id)arg0;
// IMP 0x1003bcddc | v24@0:8@16
- (void)removeCert:(id)arg0;
// IMP 0x1003bceb0 | @16@0:8
- (id)allCert;
// IMP 0x1003bcf3c | @16@0:8
- (id)selectCert;
// IMP 0x1003bd790 | v24@0:8@16
- (void)setCertSerialNumber:(id)arg0;
// IMP 0x1003bda00 | @16@0:8
- (id)certSerialNumber;
// IMP 0x1003bdbf4 | v24@0:8@16
- (void)importMpFile:(id)arg0;
// IMP 0x1003bee58 | v24@0:8@16
- (void)importP12File:(id)arg0;
// IMP 0x1003c13b4 | v32@0:8@16@24
- (void)showInputPasswordAlertWithMessage:(id)arg0 file:(id)arg1;
// IMP 0x1003b3464 | v24@0:8@16
- (void)importApps:(id)arg0;
// IMP 0x1003b5270 | v32@0:8@16B24B28
- (void)installByPath:(id)arg0 isAppDir:(BOOL)arg1 force:(BOOL)arg2;
// IMP 0x1003b6210 | v16@0:8
- (void)saveSignApps;
// IMP 0x1003b63d4 | v16@0:8
- (void)saveUnsignApps;
// IMP 0x1003b66b4 | v24@0:8@16
- (void)addSignedApp:(id)arg0;
// IMP 0x1003b6798 | @24@0:8@16
- (id)saveLogoData:(id)arg0;
// IMP 0x1003b742c | @16@0:8
- (id)unSignedAppFolder;
// IMP 0x1003b7658 | @16@0:8
- (id)signedAppFolder;
// IMP 0x1003b78a4 | @16@0:8
- (id)logoCacheFolder;
// IMP 0x10025f364 | @16@0:8
- (id)getKey;
// IMP 0x10025f7fc | @24@0:8@16
- (id)getInstallAppUrl:(id)arg0;
// IMP 0x10025f8e4 | v24@0:8@16
- (void)installApp:(id)arg0;
// IMP 0x100261540 | @24@0:8@16
- (id)plistForIdf:(id)arg0;
// IMP 0x1002637b0 | v16@0:8
- (void)setupIPAResp;
// IMP 0x100267358 | @16@0:8
- (id)installDictionary;
// IMP 0x1002674bc | v24@0:8Q16
- (void)setGitRemote:(unsigned long long)arg0;
// IMP 0x1002676d8 | Q16@0:8
- (unsigned long long)gitRemote;
// IMP 0x1002535fc | v16@0:8
- (void)HTTPSetup;
// IMP 0x100253810 | v16@0:8
- (void)setupMPFileResp;
// IMP 0x100257a04 | v16@0:8
- (void)runHTTP;
// IMP 0x100257c40 | B16@0:8
- (BOOL)runHTTPS;
// IMP 0x100257db0 | v16@0:8
- (void)stopHTTP;
// IMP 0x100257fb4 | v32@0:8@16@24
- (void)webUploader:(id)arg0 didUploadFileAtPath:(id)arg1;
// IMP 0x100258514 | v32@0:8@16@24
- (void)webUploader:(id)arg0 didCreateDirectoryAtPath:(id)arg1;
// IMP 0x100258ae0 | v32@0:8@16@24
- (void)webUploader:(id)arg0 didDeleteItemAtPath:(id)arg1;
// IMP 0x100259094 | v40@0:8@16@24@32
- (void)webUploader:(id)arg0 didMoveItemFromPath:(id)arg1 toPath:(id)arg2;
// IMP 0x100259608 | v24@0:8@16
- (void)setHttpDelegate:(id)arg0;
// IMP 0x1002596c0 | @16@0:8
- (id)httpDelegate;
// IMP 0x10019584c | @16@0:8
- (id)blackSourceList;
// IMP 0x100195d08 | v16@0:8
- (void)checkBlackList;
// IMP 0x1001975b8 | v16@0:8
- (void)removeBlackAppStoreSource;
// IMP 0x100197a2c | @16@0:8
- (id)appStoreSources;
// IMP 0x1001983f8 | v16@0:8
- (void)saveAppStoreSource;
// IMP 0x100198694 | Q24@0:8@16
- (unsigned long long)checkCanAddToSource:(id)arg0;
// IMP 0x100198e74 | v24@0:8@16
- (void)addSourceWithUrl:(id)arg0;
// IMP 0x10019a3a4 | v16@0:8
- (void)updateCache;
// IMP 0x10019b0a4 | v16@0:8
- (void)updateCache2;
// IMP 0x10019c4d8 | v32@0:8@16@24
- (void)updateCacheIfNeed:(id)arg0 url:(id)arg1;
// IMP 0x100059640 | v32@0:8@16@24
- (void)addBookmark:(id)arg0 url:(id)arg1;
// IMP 0x100059928 | v24@0:8@16
- (void)removeBookmark:(id)arg0;
// IMP 0x100059a00 | v16@0:8
- (void)saveBookmark;
// IMP 0x10033eea0 | @16@0:8
- (id)init;
// IMP 0x100341a48 | v16@0:8
- (void)requestMDM;
// IMP 0x1003424b0 | v24@0:8@16
- (void)sortDirFilePaths:(id)arg0;
// IMP 0x100342fe8 | @24@0:8@16
- (id)fileListWithDirPath:(id)arg0;
// IMP 0x10034312c | @32@0:8@16@?24
- (id)fileListWithDirPath:(id)arg0 filter:(id /* block */)arg1;
// IMP 0x100343478 | v24@0:8@16
- (void)copyFile:(id)arg0;
// IMP 0x100343b5c | v24@0:8@16
- (void)moveFile:(id)arg0;
// IMP 0x100343fc8 | v24@0:8@16
- (void)pasteToPath:(id)arg0;
// IMP 0x100344024 | B32@0:8@16^@24
- (BOOL)removeFile:(id)arg0 error:(id *)arg1;
// IMP 0x100345548 | v32@0:8@16@?24
- (void)readFileStringWithPath:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x1003467d0 | v28@0:8Q16B24
- (void)changeSortState:(unsigned long long)arg0 asc:(BOOL)arg1;
// IMP 0x100346a24 | @16@0:8
- (id)sourceDirPath;
// IMP 0x100346ae8 | @16@0:8
- (id)trashDirPath;
// IMP 0x100346cc8 | B24@0:8@16
- (BOOL)isOfficeFile:(id)arg0;
// IMP 0x100349860 | Q24@0:8@16
- (unsigned long long)fileTypeWithMIMEType:(id)arg0;
// IMP 0x10034cf94 | Q24@0:8@16
- (unsigned long long)fileTypeWithPath:(id)arg0;
// IMP 0x10034e418 | Q24@0:8@16
- (unsigned long long)fileStringEncoding:(id)arg0;
// IMP 0x10034ec54 | B24@0:8@16
- (BOOL)checkIsDylibFile:(id)arg0;
// IMP 0x10034eedc | B24@0:8@16
- (BOOL)checkIsFramework:(id)arg0;
// IMP 0x10034f214 | v24@0:8@16
- (void)shareFile:(id)arg0;
// IMP 0x10034fd90 | @16@0:8
- (id)certs;
// IMP 0x10035017c | @16@0:8
- (id)unsignApps;
// IMP 0x100350648 | @16@0:8
- (id)signApps;
// IMP 0x100350a8c | @16@0:8
- (id)bookmarks;
// IMP 0x100350e5c | @16@0:8
- (id)udid;
// IMP 0x100351b5c | q16@0:8
- (long long)deviceFreeDiskSpace;
// IMP 0x100351cc4 | @16@0:8
- (id)backupPath;
// IMP 0x100352020 | B16@0:8
- (BOOL)agreeDeal;
// IMP 0x10035204c | v20@0:8B16
- (void)setAgreeDeal:(BOOL)arg0;
// IMP 0x100352078 | @16@0:8
- (id)cache;
// IMP 0x100352098 | v24@0:8@16
- (void)setCache:(id)arg0;
// IMP 0x1003520f4 | v24@0:8@16
- (void)setSourceDirPath:(id)arg0;
// IMP 0x100352178 | v24@0:8@16
- (void)setTrashDirPath:(id)arg0;
// IMP 0x1003521fc | @16@0:8
- (id)fileControlPath;
// IMP 0x10035221c | v24@0:8@16
- (void)setFileControlPath:(id)arg0;
// IMP 0x1003522a0 | @16@0:8
- (id)fileOrignPath;
// IMP 0x1003522c0 | v24@0:8@16
- (void)setFileOrignPath:(id)arg0;
// IMP 0x1003522d4 | v24@0:8@16
- (void)setBackupPath:(id)arg0;
// IMP 0x100352358 | @16@0:8
- (id)decryptDocPath;
// IMP 0x100352378 | v24@0:8@16
- (void)setDecryptDocPath:(id)arg0;
// IMP 0x1003523f0 | B16@0:8
- (BOOL)alwayDeleted;
// IMP 0x1003523f8 | v20@0:8B16
- (void)setAlwayDeleted:(BOOL)arg0;
// IMP 0x10035240c | Q16@0:8
- (unsigned long long)fileState;
// IMP 0x100352438 | v24@0:8Q16
- (void)setFileState:(unsigned long long)arg0;
// IMP 0x100352458 | Q16@0:8
- (unsigned long long)sortState;
// IMP 0x100352484 | v24@0:8Q16
- (void)setSortState:(unsigned long long)arg0;
// IMP 0x1003524c0 | B16@0:8
- (BOOL)sortASC;
// IMP 0x1003524e0 | v20@0:8B16
- (void)setSortASC:(BOOL)arg0;
// IMP 0x10035251c | @16@0:8
- (id)uploaderServer;
// IMP 0x100352530 | v24@0:8@16
- (void)setUploaderServer:(id)arg0;
// IMP 0x10035258c | @16@0:8
- (id)httpsServer;
// IMP 0x1003525b8 | v24@0:8@16
- (void)setHttpsServer:(id)arg0;
// IMP 0x100352614 | @16@0:8
- (id)appFolder;
// IMP 0x100352640 | v24@0:8@16
- (void)setAppFolder:(id)arg0;
// IMP 0x1003526a0 | B16@0:8
- (BOOL)canUseTroll;
// IMP 0x1003526c8 | v20@0:8B16
- (void)setCanUseTroll:(BOOL)arg0;
// IMP 0x1003526e8 | @16@0:8
- (id)esign_version;
// IMP 0x100352708 | v24@0:8@16
- (void)setEsign_version:(id)arg0;
// IMP 0x10035278c | B16@0:8
- (BOOL)canMDM;
// IMP 0x1003527a8 | v20@0:8B16
- (void)setCanMDM:(BOOL)arg0;
// IMP 0x1003527d4 | v24@0:8@16
- (void)setCerts:(id)arg0;
// IMP 0x100352864 | v24@0:8@16
- (void)setUnsignApps:(id)arg0;
// IMP 0x1003528cc | v24@0:8@16
- (void)setSignApps:(id)arg0;
// IMP 0x100352934 | v24@0:8@16
- (void)setBookmarks:(id)arg0;
// IMP 0x100352964 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10025972c | @16@0:8
+ (id)bridgeAddress;
// IMP 0x100259c00 | @16@0:8
+ (id)ipAddress;
// IMP 0x10033ed18 | @16@0:8
+ (id)shared;
@end
