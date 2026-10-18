// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96a40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMInnerRemoteConfig : NSObject
// ivar _cacheCfg encoding=@"NSDictionary" offset=8
// ivar _offModel encoding=@"UMInnerRemoteCfgModel" offset=16
// ivar _unlockModel encoding=@"UMInnerRemoteCfgModel" offset=24
// property cacheCfg attributes=T@"NSDictionary",&,N,V_cacheCfg
// property offModel attributes=T@"UMInnerRemoteCfgModel",&,N,V_offModel
// property unlockModel attributes=T@"UMInnerRemoteCfgModel",&,N,V_unlockModel
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10067d900 | @16@0:8
- (id)init;
// IMP 0x10067da60 | v16@0:8
- (void)addInnerRemoteCfgStartTimes;
// IMP 0x10067db1c | v16@0:8
- (void)notiConfig;
// IMP 0x10067dfb0 | B32@0:8@16@24
- (BOOL)isRefreshInnerRemoteConfig:(id)arg0 iuccArr:(id)arg1;
// IMP 0x10067e184 | v24@0:8@16
- (void)notificationConfig:(id)arg0;
// IMP 0x10067e98c | @16@0:8
- (id)innerRemoteConfigFilePath;
// IMP 0x10067eab0 | @16@0:8
- (id)readLocalConfig;
// IMP 0x10067eb14 | v24@0:8@16
- (void)saveLocalConfig:(id)arg0;
// IMP 0x10067ebb8 | v16@0:8
- (void)registerRemoteConfig;
// IMP 0x10067ec10 | v16@0:8
- (void)unregisterRemoteConfig;
// IMP 0x10067ec68 | v24@0:8@16
- (void)umLockScreen:(id)arg0;
// IMP 0x10067eeac | v24@0:8@16
- (void)umUnlockScreen:(id)arg0;
// IMP 0x10067f0f0 | v40@0:8@16@24@32
- (void)imprintObserveValueForImprintKey:(id)arg0 newImprintValue:(id)arg1 oldImprintValue:(id)arg2;
// IMP 0x10067f3cc | v32@0:8@16@?24
- (void)fetchWithParam:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x10067f97c | v32@0:8@16@?24
- (void)uploadScreenInfoType:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x10067fe20 | @28@0:8f16@20
- (id)gzippedDataWithCompressionLevel:(float)arg0 data:(id)arg1;
// IMP 0x100680000 | @24@0:8@16
- (id)gzippedData:(id)arg0;
// IMP 0x100680010 | @24@0:8@16
- (id)gunzippedData:(id)arg0;
// IMP 0x1006801f0 | B24@0:8@16
- (BOOL)isGzippedData:(id)arg0;
// IMP 0x100680278 | @32@0:8@16@24
- (id)xorDecrypt:(id)arg0 key:(id)arg1;
// IMP 0x100680284 | @32@0:8@16@24
- (id)xorEncrypt:(id)arg0 key:(id)arg1;
// IMP 0x100680440 | @24@0:8@16
- (id)param:(id)arg0;
// IMP 0x100680a88 | @24@0:8@16
- (id)screenInfoParam:(id)arg0;
// IMP 0x100680d40 | @16@0:8
- (id)installDatetime;
// IMP 0x100680df0 | @16@0:8
- (id)cacheCfg;
// IMP 0x100680df8 | v24@0:8@16
- (void)setCacheCfg:(id)arg0;
// IMP 0x100680e04 | @16@0:8
- (id)offModel;
// IMP 0x100680e0c | v24@0:8@16
- (void)setOffModel:(id)arg0;
// IMP 0x100680e18 | @16@0:8
- (id)unlockModel;
// IMP 0x100680e20 | v24@0:8@16
- (void)setUnlockModel:(id)arg0;
// IMP 0x100680e2c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10067d968 | @16@0:8
+ (id)startRemoteConfig;
// IMP 0x10067da04 | @16@0:8
+ (id)innerRemoteConfig;
@end
