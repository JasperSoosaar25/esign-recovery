// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c971c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMConfigureCache : NSObject
// ivar _encryptEnabled encoding=B offset=8
// ivar _isNhk encoding=B offset=9
// ivar _aEnabled encoding=B offset=10
// ivar _eNetStatus encoding=i offset=12
// ivar _appkey encoding=@"NSString" offset=16
// ivar _primaryDomain encoding=@"NSString" offset=24
// ivar _standbyDomain encoding=@"NSString" offset=32
// ivar _channel encoding=@"NSString" offset=40
// ivar _wraperType encoding=@"NSString" offset=48
// ivar _wraperVersion encoding=@"NSString" offset=56
// ivar _debugkey encoding=@"NSString" offset=64
// ivar _slnetworkerQueue encoding=@"NSOperationQueue" offset=72
// ivar _backgroundTaskID encoding=Q offset=80
// ivar _cachedDict encoding=@"NSMutableDictionary" offset=88
// ivar _internetReachability encoding=@"UMReachability" offset=96
// property cachedDict attributes=T@"NSMutableDictionary",&,V_cachedDict
// property internetReachability attributes=T@"UMReachability",&,N,V_internetReachability
// property appkey attributes=T@"NSString",C,V_appkey
// property primaryDomain attributes=T@"NSString",C,V_primaryDomain
// property standbyDomain attributes=T@"NSString",C,V_standbyDomain
// property channel attributes=T@"NSString",C,V_channel
// property wraperType attributes=T@"NSString",C,V_wraperType
// property wraperVersion attributes=T@"NSString",C,V_wraperVersion
// property encryptEnabled attributes=TB,V_encryptEnabled
// property eNetStatus attributes=Ti,V_eNetStatus
// property isNhk attributes=TB,V_isNhk
// property debugkey attributes=T@"NSString",C,V_debugkey
// property slnetworkerQueue attributes=T@"NSOperationQueue",&,V_slnetworkerQueue
// property aEnabled attributes=TB,V_aEnabled
// property backgroundTaskID attributes=TQ,V_backgroundTaskID
// IMP 0x1006adb0c | v16@0:8
- (void)load;
// IMP 0x1006adc24 | @16@0:8
- (id)init;
// IMP 0x1006adf1c | v16@0:8
- (void)dealloc;
// IMP 0x1006ae0a0 | v16@0:8
- (void)monitorNetwork;
// IMP 0x1006ae1dc | v24@0:8@16
- (void)reachabilityChanged:(id)arg0;
// IMP 0x1006ae22c | v24@0:8@16
- (void)updateReachability:(id)arg0;
// IMP 0x1006ae418 | v16@0:8
- (void)flushStatelessFile;
// IMP 0x1006ae510 | v24@0:8@16
- (void)appActivate:(id)arg0;
// IMP 0x1006ae630 | v24@0:8@16
- (void)appInactivate:(id)arg0;
// IMP 0x1006ae678 | v16@0:8
- (void)beginBackgroundTask;
// IMP 0x1006ae7ec | v16@0:8
- (void)endBackgroundTask;
// IMP 0x1006af9f4 | @16@0:8
- (id)appkey;
// IMP 0x1006afa00 | v24@0:8@16
- (void)setAppkey:(id)arg0;
// IMP 0x1006afa14 | @16@0:8
- (id)primaryDomain;
// IMP 0x1006afa20 | v24@0:8@16
- (void)setPrimaryDomain:(id)arg0;
// IMP 0x1006afa34 | @16@0:8
- (id)standbyDomain;
// IMP 0x1006afa40 | v24@0:8@16
- (void)setStandbyDomain:(id)arg0;
// IMP 0x1006afa54 | @16@0:8
- (id)channel;
// IMP 0x1006afa60 | v24@0:8@16
- (void)setChannel:(id)arg0;
// IMP 0x1006afa74 | @16@0:8
- (id)wraperType;
// IMP 0x1006afa80 | v24@0:8@16
- (void)setWraperType:(id)arg0;
// IMP 0x1006afa94 | @16@0:8
- (id)wraperVersion;
// IMP 0x1006afaa0 | v24@0:8@16
- (void)setWraperVersion:(id)arg0;
// IMP 0x1006afab4 | B16@0:8
- (BOOL)encryptEnabled;
// IMP 0x1006afac0 | v20@0:8B16
- (void)setEncryptEnabled:(BOOL)arg0;
// IMP 0x1006afac8 | i16@0:8
- (int)eNetStatus;
// IMP 0x1006afad0 | v20@0:8i16
- (void)setENetStatus:(int)arg0;
// IMP 0x1006afad8 | B16@0:8
- (BOOL)isNhk;
// IMP 0x1006afae4 | v20@0:8B16
- (void)setIsNhk:(BOOL)arg0;
// IMP 0x1006afaec | @16@0:8
- (id)debugkey;
// IMP 0x1006afaf8 | v24@0:8@16
- (void)setDebugkey:(id)arg0;
// IMP 0x1006afb0c | @16@0:8
- (id)slnetworkerQueue;
// IMP 0x1006afb18 | v24@0:8@16
- (void)setSlnetworkerQueue:(id)arg0;
// IMP 0x1006afb2c | B16@0:8
- (BOOL)aEnabled;
// IMP 0x1006afb38 | v20@0:8B16
- (void)setAEnabled:(BOOL)arg0;
// IMP 0x1006afb40 | Q16@0:8
- (unsigned long long)backgroundTaskID;
// IMP 0x1006afb48 | v24@0:8Q16
- (void)setBackgroundTaskID:(unsigned long long)arg0;
// IMP 0x1006afb50 | @16@0:8
- (id)cachedDict;
// IMP 0x1006afb5c | v24@0:8@16
- (void)setCachedDict:(id)arg0;
// IMP 0x1006afb70 | @16@0:8
- (id)internetReachability;
// IMP 0x1006afb78 | v24@0:8@16
- (void)setInternetReachability:(id)arg0;
// IMP 0x1006afb84 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006adb74 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006ae90c | @24@0:8@16
+ (id)memoryCacheObjectWithKey:(id)arg0;
// IMP 0x1006ae9dc | v32@0:8@16@24
+ (void)memoryCacheObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1006aeacc | @24@0:8@16
+ (id)objectWithKey:(id)arg0;
// IMP 0x1006aeb54 | v32@0:8@16@24
+ (void)setObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1006aec38 | v24@0:8@16
+ (void)removeObjectForKey:(id)arg0;
// IMP 0x1006aecf4 | v24@0:8@16
+ (void)incCounterForKey:(id)arg0;
// IMP 0x1006aedd4 | v28@0:8i16@20
+ (void)accumulateCount:(int)arg0 withKey:(id)arg1;
// IMP 0x1006aeed0 | v24@0:8@16
+ (void)resetCounterWithKey:(id)arg0;
// IMP 0x1006aef54 | i24@0:8@16
+ (int)counterThenIncWithKey:(id)arg0;
// IMP 0x1006af068 | v40@0:8@16@24@32
+ (void)keyChainSave:(id)arg0 key:(id)arg1 forKey:(id)arg2;
// IMP 0x1006af214 | @32@0:8@16@24
+ (id)keyChainLoad:(id)arg0 forKey:(id)arg1;
// IMP 0x1006af3c4 | v32@0:8@16@24
+ (void)setSaveObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1006af4b0 | @24@0:8@16
+ (id)getKeychainQuery:(id)arg0;
// IMP 0x1006af538 | @24@0:8@16
+ (id)objectForKey:(id)arg0;
// IMP 0x1006af684 | @24@0:8@16
+ (id)JSONFragment:(id)arg0;
// IMP 0x1006af83c | @16@0:8
+ (id)directoryName;
// IMP 0x1006af8f4 | @24@0:8@16
+ (id)addPrefixIfHave:(id)arg0;
@end
