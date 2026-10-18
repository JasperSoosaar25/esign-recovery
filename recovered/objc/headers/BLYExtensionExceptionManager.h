// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96770
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYExtensionExceptionManager : BLYAbstractModule
// ivar _uploading encoding=B offset=8
// ivar _wcsessionExist encoding=B offset=9
// ivar _appGroupAvailable encoding=B offset=10
// ivar _appGroupIdentifier encoding=@"NSString" offset=16
// ivar _uploadingFiles encoding=@"NSMutableArray" offset=24
// property uploadingFiles attributes=T@"NSMutableArray",&,N,V_uploadingFiles
// property uploading attributes=TB,N,GisUploading,V_uploading
// property wcsessionExist attributes=TB,N,V_wcsessionExist
// property appGroupAvailable attributes=TB,N,GisAppGroupAvailable,V_appGroupAvailable
// property appGroupIdentifier attributes=T@"NSString",C,N,V_appGroupIdentifier
// IMP 0x1006763dc | B16@0:8
- (BOOL)enableModule;
// IMP 0x1006764c8 | B16@0:8
- (BOOL)disableModule;
// IMP 0x10067650c | B16@0:8
- (BOOL)isAppGroupAvailable;
// IMP 0x10067668c | v16@0:8
- (void)buglyMartian_wcSessionDelegate;
// IMP 0x100676954 | @24@0:8@16
- (id)packageDataWithException:(id)arg0;
// IMP 0x100676ee4 | @24@0:8@16
- (id)packetExtraValues:(id)arg0;
// IMP 0x1006776d0 | @16@0:8
- (id)documentDirectoryPath;
// IMP 0x100677898 | @16@0:8
- (id)appGroupDirectoryPath;
// IMP 0x1006779d4 | @16@0:8
- (id)exceptionsFromOldPath;
// IMP 0x100677fec | @24@0:8@16
- (id)exceptionFromFileURL:(id)arg0;
// IMP 0x1006780d8 | v16@0:8
- (void)checkAndUpload;
// IMP 0x1006783b0 | v24@0:8@16
- (void)saveException:(id)arg0;
// IMP 0x10067856c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006784dc | @16@0:8
- (id)appGroupIdentifier;
// IMP 0x1006784ec | v24@0:8@16
- (void)setAppGroupIdentifier:(id)arg0;
// IMP 0x1006784f8 | B16@0:8
- (BOOL)isUploading;
// IMP 0x100678508 | v20@0:8B16
- (void)setUploading:(BOOL)arg0;
// IMP 0x100678518 | @16@0:8
- (id)uploadingFiles;
// IMP 0x100678528 | v24@0:8@16
- (void)setUploadingFiles:(id)arg0;
// IMP 0x10067853c | B16@0:8
- (BOOL)wcsessionExist;
// IMP 0x10067854c | v20@0:8B16
- (void)setWcsessionExist:(BOOL)arg0;
// IMP 0x10067855c | v20@0:8B16
- (void)setAppGroupAvailable:(BOOL)arg0;
// IMP 0x100676350 | @16@0:8
+ (id)sharedManager;
// IMP 0x1006763d0 | @16@0:8
+ (id)constructSelector;
@end
