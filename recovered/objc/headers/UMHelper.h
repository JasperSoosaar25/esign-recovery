// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97620
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMHelper : NSObject
// ivar _logEnabled encoding=B offset=8
// ivar _notInernational encoding=B offset=9
// ivar moduleTag encoding=@"NSMutableDictionary" offset=16
// ivar moduleVer encoding=@"NSMutableDictionary" offset=24
// ivar autoTestDic encoding=@"NSMutableDictionary" offset=32
// ivar _umsema encoding=^{dispatch_semaphore_s=} offset=40
// ivar _umsemasl encoding=^{dispatch_semaphore_s=} offset=48
// ivar _umfvStr encoding=@"NSString" offset=56
// ivar _machine encoding=@"NSString" offset=64
// ivar _isSilent encoding=@"NSString" offset=72
// property moduleTag attributes=T@"NSMutableDictionary",&,VmoduleTag
// property logEnabled attributes=TB,V_logEnabled
// property moduleVer attributes=T@"NSMutableDictionary",&,VmoduleVer
// property autoTestDic attributes=T@"NSMutableDictionary",&,VautoTestDic
// property umsema attributes=T^{dispatch_semaphore_s=},N,V_umsema
// property umsemasl attributes=T^{dispatch_semaphore_s=},N,V_umsemasl
// property umfvStr attributes=T@"NSString",C,V_umfvStr
// property machine attributes=T@"NSString",C,V_machine
// property isSilent attributes=T@"NSString",C,V_isSilent
// property notInernational attributes=TB,V_notInernational
// IMP 0x1006b9a14 | @16@0:8
- (id)init;
// IMP 0x1006bab64 | @16@0:8
- (id)moduleTag;
// IMP 0x1006bab70 | v24@0:8@16
- (void)setModuleTag:(id)arg0;
// IMP 0x1006bab84 | @16@0:8
- (id)moduleVer;
// IMP 0x1006bab90 | v24@0:8@16
- (void)setModuleVer:(id)arg0;
// IMP 0x1006baba4 | @16@0:8
- (id)autoTestDic;
// IMP 0x1006babb0 | v24@0:8@16
- (void)setAutoTestDic:(id)arg0;
// IMP 0x1006babc4 | B16@0:8
- (BOOL)logEnabled;
// IMP 0x1006babd0 | v20@0:8B16
- (void)setLogEnabled:(BOOL)arg0;
// IMP 0x1006babd8 | ^{dispatch_semaphore_s=}16@0:8
- (struct dispatch_semaphore_s *)umsema;
// IMP 0x1006babe0 | v24@0:8^{dispatch_semaphore_s=}16
- (void)setUmsema:(struct dispatch_semaphore_s *)arg0;
// IMP 0x1006babe8 | ^{dispatch_semaphore_s=}16@0:8
- (struct dispatch_semaphore_s *)umsemasl;
// IMP 0x1006babf0 | v24@0:8^{dispatch_semaphore_s=}16
- (void)setUmsemasl:(struct dispatch_semaphore_s *)arg0;
// IMP 0x1006babf8 | @16@0:8
- (id)umfvStr;
// IMP 0x1006bac04 | v24@0:8@16
- (void)setUmfvStr:(id)arg0;
// IMP 0x1006bac18 | @16@0:8
- (id)machine;
// IMP 0x1006bac24 | v24@0:8@16
- (void)setMachine:(id)arg0;
// IMP 0x1006bac38 | @16@0:8
- (id)isSilent;
// IMP 0x1006bac44 | v24@0:8@16
- (void)setIsSilent:(id)arg0;
// IMP 0x1006bac58 | B16@0:8
- (BOOL)notInernational;
// IMP 0x1006bac64 | v20@0:8B16
- (void)setNotInernational:(BOOL)arg0;
// IMP 0x1006bac6c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006b9964 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006b9b3c | B16@0:8
+ (BOOL)isDebugging;
// IMP 0x1006b9b44 | @16@0:8
+ (id)sdkVersionString;
// IMP 0x1006b9b94 | @16@0:8
+ (id)appVersionString;
// IMP 0x1006b9ba8 | @24@0:8@16
+ (id)arrayToAgStr:(id)arg0;
// IMP 0x1006b9d98 | Q16@0:8
+ (unsigned long long)UTCTimeIntervalMS;
// IMP 0x1006b9df8 | B24@0:8@16
+ (BOOL)checkU48Character:(id)arg0;
// IMP 0x1006b9e9c | @32@0:8@16q24
+ (id)trimUTF8String:(id)arg0 toByteLen:(long long)arg1;
// IMP 0x1006b9f74 | @16@0:8
+ (id)dplusSuperFilePath;
// IMP 0x1006b9fd8 | @16@0:8
+ (id)dplusPreFilePath;
// IMP 0x1006ba03c | @16@0:8
+ (id)dplusEventsPath;
// IMP 0x1006ba0a0 | @16@0:8
+ (id)preInitFilePath;
// IMP 0x1006ba104 | B16@0:8
+ (BOOL)checkIsOverseas;
// IMP 0x1006ba18c | B16@0:8
+ (BOOL)isOverSeas;
// IMP 0x1006ba278 | B16@0:8
+ (BOOL)defconPass;
// IMP 0x1006ba338 | d16@0:8
+ (double)elapsedTimeFromPost;
// IMP 0x1006ba3c4 | d24@0:8@16
+ (double)elapsedTimeFromLastPost:(id)arg0;
// IMP 0x1006ba458 | @24@0:8@16
+ (id)preVersions:(id)arg0;
// IMP 0x1006ba924 | B24@0:8@16
+ (BOOL)isCheckVersion:(id)arg0;
// IMP 0x1006bab00 | i16@0:8
+ (int)getAppState;
@end
