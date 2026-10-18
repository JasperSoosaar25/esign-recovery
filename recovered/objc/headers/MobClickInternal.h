// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96d10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClickInternal : NSObject
// ivar _terminates encoding=@"NSMutableArray" offset=8
// ivar _events encoding=@"NSMutableArray" offset=16
// ivar _errors encoding=@"NSMutableArray" offset=24
// ivar _ekv encoding=@"NSMutableArray" offset=32
// ivar _tmpContainer encoding=@"NSMutableArray" offset=40
// ivar _error_support_info encoding=@"NSDictionary" offset=48
// ivar _sessionID encoding=@"NSString" offset=56
// ivar _delData encoding=@"NSString" offset=64
// ivar sqlLock encoding=@"NSLock" offset=72
// ivar _pageItems encoding=@"NSMutableArray" offset=80
// ivar _pageItemsHash encoding=@"NSMutableDictionary" offset=88
// ivar _ekvBeginTimes encoding=@"NSMutableDictionary" offset=96
// ivar _eventBeginTimes encoding=@"NSMutableDictionary" offset=104
// ivar _vcDidDic encoding=@"NSMutableDictionary" offset=112
// ivar _vcDic encoding=@"NSMutableArray" offset=120
// ivar _cPages encoding=@"NSMutableArray" offset=128
// ivar _track_list encoding=@"NSMutableDictionary" offset=136
// ivar _dplusSessionBegin encoding=B offset=144
// ivar _uappSessionBegin encoding=B offset=145
// ivar _eLogType encoding=i offset=148
// ivar _ePartType encoding=i offset=152
// ivar _state encoding=i offset=156
// ivar _backstate encoding=i offset=160
// ivar _isNhk encoding=i offset=164
// ivar _cbBlock encoding=@? offset=168
// property terminates attributes=T@"NSMutableArray",&,V_terminates
// property events attributes=T@"NSMutableArray",&,V_events
// property errors attributes=T@"NSMutableArray",&,V_errors
// property ekv attributes=T@"NSMutableArray",&,V_ekv
// property error_support_info attributes=T@"NSDictionary",&,V_error_support_info
// property vcDidDic attributes=T@"NSMutableDictionary",&,V_vcDidDic
// property cPages attributes=T@"NSMutableArray",&,V_cPages
// property track_list attributes=T@"NSMutableDictionary",&,V_track_list
// property dplusSessionBegin attributes=TB,N,V_dplusSessionBegin
// property state attributes=Ti,N,V_state
// property backstate attributes=Ti,N,V_backstate
// property isNhk attributes=Ti,N,V_isNhk
// property vcDic attributes=T@"NSMutableArray",&,V_vcDic
// property cbBlock attributes=T@?,C,V_cbBlock
// property sessionID attributes=T@"NSString",C,V_sessionID
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100687274 | @16@0:8
- (id)init;
// IMP 0x1006877a8 | B16@0:8
- (BOOL)checkEventLimit;
// IMP 0x100687b5c | B16@0:8
- (BOOL)hasJob;
// IMP 0x100687d20 | v20@0:8i16
- (void)beginPerformJob:(int)arg0;
// IMP 0x100687d2c | @20@0:8i16
- (id)arrayWithEventType:(int)arg0;
// IMP 0x100687ed4 | v32@0:8@16@24
- (void)addEvent:(id)arg0 inContainer:(id)arg1;
// IMP 0x1006880b4 | v24@0:8@16
- (void)setEventSessionID:(id)arg0;
// IMP 0x1006881e0 | v24@0:8@16
- (void)workEvent:(id)arg0;
// IMP 0x10068c750 | v24@0:8q16
- (void)stopSession:(long long)arg0;
// IMP 0x10068cf44 | @16@0:8
- (id)ForceBuildReportData;
// IMP 0x10068d038 | @24@0:8@16
- (id)ForceBuildReportDataWithVersion:(id)arg0;
// IMP 0x10068d048 | B24@0:8@16
- (BOOL)shoudleSetupReportDataWithContext:(id)arg0;
// IMP 0x10068d0c4 | @24@0:8q16
- (id)setupReportData:(long long)arg0;
// IMP 0x10068d150 | v24@0:8@16
- (void)removeCacheData:(id)arg0;
// IMP 0x10068d1cc | v32@0:8@16@24
- (void)removeCacheData:(id)arg0 withVersion:(id)arg1;
// IMP 0x10068d360 | v16@0:8
- (void)removeCacheData;
// IMP 0x10068d434 | v16@0:8
- (void)loadCacheFromTempContainer;
// IMP 0x10068d678 | v16@0:8
- (void)saveAndCleanCache;
// IMP 0x10068da24 | v16@0:8
- (void)doPairCurAutoPage;
// IMP 0x10068e184 | v24@0:8@16
- (void)eventBegin:(id)arg0;
// IMP 0x10068e3a0 | v24@0:8@16
- (void)ekvBegin:(id)arg0;
// IMP 0x10068e5bc | v24@0:8@16
- (void)eventEnd:(id)arg0;
// IMP 0x10068e830 | v24@0:8@16
- (void)ekvEnd:(id)arg0;
// IMP 0x10068eae4 | v24@0:8@16
- (void)error:(id)arg0;
// IMP 0x10068f2b8 | v16@0:8
- (void)removeSessions;
// IMP 0x10068f30c | v16@0:8
- (void)removeInstanceMsgs;
// IMP 0x10068f3b4 | v16@0:8
- (void)removeInstanceMsgsFromDB;
// IMP 0x10068f3f8 | v16@0:8
- (void)buildDummySession;
// IMP 0x10068f64c | v24@0:8@16
- (void)outputUMLog:(id)arg0;
// IMP 0x10068fce8 | @16@0:8
- (id)generateNewPreVersionDate;
// IMP 0x10068fd94 | @16@0:8
- (id)preVersionStringInLocal;
// IMP 0x10068fdb0 | v24@0:8@16
- (void)setPreVersionStringInLocal:(id)arg0;
// IMP 0x10068fe14 | @16@0:8
- (id)preVersionDateStringInLocal;
// IMP 0x10068fe30 | v24@0:8@16
- (void)setPreVersionDateStringInLocal:(id)arg0;
// IMP 0x10068fe94 | @16@0:8
- (id)preVersionStringInImprint;
// IMP 0x10068feb0 | @16@0:8
- (id)preVersionDateStringInImprint;
// IMP 0x10068fecc | @16@0:8
- (id)preVersionString;
// IMP 0x10068ffac | @16@0:8
- (id)preVersionDateString;
// IMP 0x1006900a4 | @24@0:8@16
- (id)eventAttribute:(id)arg0;
// IMP 0x100690438 | B32@0:8Q16@24
- (BOOL)additionalConditionFromDelegateWithReportPolicyType:(unsigned long long)arg0 withContext:(id)arg1;
// IMP 0x1006907d8 | v16@0:8
- (void)flushMemoryEventsIntoDB;
// IMP 0x100690998 | @32@0:8@16@24
- (id)buildErrorsWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006909ac | @32@0:8@16@24
- (id)buildEventsWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006909c0 | @32@0:8@16@24
- (id)buildSessionsWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006909d4 | @16@0:8
- (id)buildThreePartiesDataForBegonia;
// IMP 0x1006909e8 | @16@0:8
- (id)buildProfileDataForBegonia;
// IMP 0x100690bf0 | @16@0:8
- (id)buildGameDataForBegonia;
// IMP 0x100690c1c | @16@0:8
- (id)buildABExperimentDataForBegonia;
// IMP 0x100690d18 | @32@0:8@16@24
- (id)buildBodySegForBegoniaWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x100691048 | @32@0:8@16@24
- (id)readCachedDataForBegoniaWithVersion:(id)arg0 withSid:(id)arg1;
// IMP 0x1006910e4 | @40@0:8@16q24@32
- (id)readCachedDataForBegoniaWithBody:(id)arg0 maxSize:(long long)arg1 WithVersion:(id)arg2;
// IMP 0x100691628 | @24@0:8q16
- (id)setupReportDataForBegonia:(long long)arg0;
// IMP 0x1006918f0 | B24@0:8q16
- (BOOL)buildDataForBegoniaWithMaxDataSpace:(long long)arg0;
// IMP 0x1006918f8 | v16@0:8
- (void)buildDataForBegonia;
// IMP 0x100691b78 | v32@0:8@16@24
- (void)removeCacheDataForBegonia:(id)arg0 WithVersion:(id)arg1;
// IMP 0x100691d3c | v20@0:8i16
- (void)beginPerformJobForBegonia:(int)arg0;
// IMP 0x100691e90 | v40@0:8@16@24i32B36
- (void)doMakeSessionStartEnvelopeForBegonia:(id)arg0 version:(id)arg1 defcon:(int)arg2 isProFile:(BOOL)arg3;
// IMP 0x1006929ac | v32@0:8@16@24
- (void)doCreateSessionStartForBegonia:(id)arg0 version:(id)arg1;
// IMP 0x100692f84 | v40@0:8@16@24i32B36
- (void)doSessionStartForBegonia:(id)arg0 version:(id)arg1 defcon:(int)arg2 isProFile:(BOOL)arg3;
// IMP 0x10069316c | v40@0:8@16@24B32B36
- (void)sessionStartForBegonia:(id)arg0 version:(id)arg1 isProFile:(BOOL)arg2 isMake:(BOOL)arg3;
// IMP 0x100693440 | v16@0:8
- (void)buildActivateSessionForBegonia;
// IMP 0x10069389c | v32@0:8@16@24
- (void)asyncMakeSessionStartEnvelopeForBegonia:(id)arg0 version:(id)arg1;
// IMP 0x1006939d4 | v24@0:8@16
- (void)umNetWorkReachabilityChangedFromUMCommon:(id)arg0;
// IMP 0x100693a7c | v40@0:8@16@24i32B36
- (void)doMakeSessionStartEnvelopeForZero:(id)arg0 version:(id)arg1 defcon:(int)arg2 isProFile:(BOOL)arg3;
// IMP 0x100694414 | @16@0:8
- (id)terminates;
// IMP 0x100694420 | v24@0:8@16
- (void)setTerminates:(id)arg0;
// IMP 0x100694434 | @16@0:8
- (id)events;
// IMP 0x100694440 | v24@0:8@16
- (void)setEvents:(id)arg0;
// IMP 0x100694454 | @16@0:8
- (id)errors;
// IMP 0x100694460 | v24@0:8@16
- (void)setErrors:(id)arg0;
// IMP 0x100694474 | @16@0:8
- (id)ekv;
// IMP 0x100694480 | v24@0:8@16
- (void)setEkv:(id)arg0;
// IMP 0x100694494 | @16@0:8
- (id)error_support_info;
// IMP 0x1006944a0 | v24@0:8@16
- (void)setError_support_info:(id)arg0;
// IMP 0x1006944b4 | @16@0:8
- (id)vcDidDic;
// IMP 0x1006944c0 | v24@0:8@16
- (void)setVcDidDic:(id)arg0;
// IMP 0x1006944d4 | @16@0:8
- (id)cPages;
// IMP 0x1006944e0 | v24@0:8@16
- (void)setCPages:(id)arg0;
// IMP 0x1006944f4 | @16@0:8
- (id)track_list;
// IMP 0x100694500 | v24@0:8@16
- (void)setTrack_list:(id)arg0;
// IMP 0x100694514 | B16@0:8
- (BOOL)dplusSessionBegin;
// IMP 0x10069451c | v20@0:8B16
- (void)setDplusSessionBegin:(BOOL)arg0;
// IMP 0x100694524 | i16@0:8
- (int)state;
// IMP 0x10069452c | v20@0:8i16
- (void)setState:(int)arg0;
// IMP 0x100694534 | i16@0:8
- (int)backstate;
// IMP 0x10069453c | v20@0:8i16
- (void)setBackstate:(int)arg0;
// IMP 0x100694544 | i16@0:8
- (int)isNhk;
// IMP 0x10069454c | v20@0:8i16
- (void)setIsNhk:(int)arg0;
// IMP 0x100694554 | @16@0:8
- (id)vcDic;
// IMP 0x100694560 | v24@0:8@16
- (void)setVcDic:(id)arg0;
// IMP 0x100694574 | @?16@0:8
- (id /* block */)cbBlock;
// IMP 0x100694580 | v24@0:8@?16
- (void)setCbBlock:(id /* block */)arg0;
// IMP 0x100694594 | @16@0:8
- (id)sessionID;
// IMP 0x1006945a0 | v24@0:8@16
- (void)setSessionID:(id)arg0;
// IMP 0x1006945b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006876d0 | @16@0:8
+ (id)sharedInstance;
// IMP 0x10068f240 | v24@0:8@16
+ (void)setErrorSupportInfo:(id)arg0;
// IMP 0x10069009c | v16@0:8
+ (void)installBreakpad;
// IMP 0x1006900a0 | v16@0:8
+ (void)uninstallBreakpad;
// IMP 0x100693a54 | B24@0:8@16
+ (BOOL)isFiterEventID:(id)arg0;
// IMP 0x100693a68 | B24@0:8@16
+ (BOOL)isFiterPageName:(id)arg0;
@end
