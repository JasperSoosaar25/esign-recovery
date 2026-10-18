// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96ef0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMEnvelopeBuild : NSObject
// ivar _networkerQueue encoding=@"NSOperationQueue" offset=8
// ivar _header encoding=@"NSMutableDictionary" offset=16
// ivar _identityMD5 encoding=@"NSData" offset=24
// ivar _entityMD5 encoding=* offset=32
// ivar _timestamp encoding=i offset=40
// ivar _jobRunning encoding=B offset=44
// ivar _defcon encoding=i offset=48
// ivar _signature encoding=@"NSData" offset=56
// ivar _guid encoding=@"NSData" offset=64
// property signature attributes=T@"NSData",&,N,V_signature
// property guid attributes=T@"NSData",&,N,V_guid
// property jobRunning attributes=TB,V_jobRunning
// property defcon attributes=Ti,V_defcon
// IMP 0x100699440 | @16@0:8
- (id)init;
// IMP 0x1006996d4 | v24@0:8[32C]16
- (void)buildGUIDWithData:(void * /* aggregate 32C */)arg0;
// IMP 0x1006997d0 | v24@0:8@16
- (void)setSignatureWithData:(id)arg0;
// IMP 0x1006998c4 | @16@0:8
- (id)mergeEntityAndIdentity;
// IMP 0x100699994 | @32@0:8@16i24i28
- (id)toEnvelopeWithEntity:(id)arg0 rawLen:(int)arg1 serNum:(int)arg2;
// IMP 0x100699fd8 | q16@0:8
- (long long)maxDataSpace;
// IMP 0x10069a00c | B16@0:8
- (BOOL)isReadyBuild;
// IMP 0x10069a340 | @32@0:8@16@24
- (id)buildEnvelopeWithExtHeader:(id)arg0 content:(id)arg1;
// IMP 0x10069a5a4 | @56@0:8@16@24@32@40@48
- (id)buildEnvelopeWithExtHeader:(id)arg0 content:(id)arg1 pathURL:(id)arg2 type:(id)arg3 version:(id)arg4;
// IMP 0x10069a8c8 | @40@0:8@16@24@32
- (id)buildEnvelopeWithExtHeader:(id)arg0 content:(id)arg1 subFolder:(id)arg2;
// IMP 0x10069ab78 | v16@0:8
- (void)preparePerformLog;
// IMP 0x10069af28 | v24@0:8@16
- (void)validateEnvelopeFiles:(id)arg0;
// IMP 0x10069b0f8 | @16@0:8
- (id)buildInternalData;
// IMP 0x10069b3fc | @16@0:8
- (id)envelopeFilesForSubFolders;
// IMP 0x10069b7ac | v32@0:8@16@24
- (void)buildZeroEnvelopeWithExtHeader:(id)arg0 content:(id)arg1;
// IMP 0x10069c07c | v32@0:8@16@24
- (void)buildSilentEnvelopeWithExtHeader:(id)arg0 content:(id)arg1;
// IMP 0x10069c960 | @56@0:8@16@24@32@40@48
- (id)buildEnvelopeWithHeader:(id)arg0 content:(id)arg1 path:(id)arg2 type:(id)arg3 version:(id)arg4;
// IMP 0x10069d598 | @40@0:8@16@24@32
- (id)buildEnvelopeWithHeader:(id)arg0 content:(id)arg1 subFolder:(id)arg2;
// IMP 0x10069e168 | v64@0:8@16@24@32@40@48@56
- (void)buildCacheData:(id)arg0 content:(id)arg1 type:(id)arg2 sid:(id)arg3 path:(id)arg4 version:(id)arg5;
// IMP 0x10069e39c | @56@0:8@16@24@32@40@48
- (id)insertToCacheTable:(id)arg0 content:(id)arg1 type:(id)arg2 path:(id)arg3 version:(id)arg4;
// IMP 0x10069e6c4 | v16@0:8
- (void)loadCacheData;
// IMP 0x10069eca4 | @16@0:8
- (id)signature;
// IMP 0x10069ecac | v24@0:8@16
- (void)setSignature:(id)arg0;
// IMP 0x10069ecb8 | @16@0:8
- (id)guid;
// IMP 0x10069ecc0 | v24@0:8@16
- (void)setGuid:(id)arg0;
// IMP 0x10069eccc | B16@0:8
- (BOOL)jobRunning;
// IMP 0x10069ecd8 | v20@0:8B16
- (void)setJobRunning:(BOOL)arg0;
// IMP 0x10069ece0 | i16@0:8
- (int)defcon;
// IMP 0x10069ece8 | v20@0:8i16
- (void)setDefcon:(int)arg0;
// IMP 0x10069ecf0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100699280 | @24@0:8@16
+ (id)imprintProperty:(id)arg0;
// IMP 0x100699318 | B16@0:8
+ (BOOL)isIntegratedTestModel;
// IMP 0x100699388 | @16@0:8
+ (id)sharedInstance;
// IMP 0x10069a850 | v32@0:8@16Q24
+ (void)setEnvelopeSubFolder:(id)arg0 maxCount:(unsigned long long)arg1;
// IMP 0x10069b798 | v32@0:8@16@?24
+ (void)setFilterImprintKey:(id)arg0 withHandler:(id /* block */)arg1;
@end
