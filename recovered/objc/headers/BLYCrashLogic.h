// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96220
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashLogic : BLYCommonUploadLogic
// ivar _isCrashed encoding=B offset=8
// ivar _hasCachedFile encoding=B offset=9
// ivar _bNativeCrash encoding=B offset=10
// ivar _jceModel encoding=@"BLYJceObjectV2" offset=16
// ivar _crashModel encoding=@"BLYExceptionUpload" offset=24
// ivar _crashCount encoding=Q offset=32
// property hasCachedFile attributes=TB,N,V_hasCachedFile
// property bNativeCrash attributes=TB,N,V_bNativeCrash
// property crashCount attributes=TQ,N,V_crashCount
// property isCrashed attributes=TB,N,V_isCrashed
// property crashModel attributes=T@"BLYExceptionUpload",&,N,V_crashModel
// IMP 0x1006619dc | @24@0:8@16
- (id)initWithExceptionModel:(id)arg0;
// IMP 0x100661a5c | v16@0:8
- (void)addAttachment;
// IMP 0x100661f40 | v24@0:8@16
- (void)addValueMap:(id)arg0;
// IMP 0x100662520 | v16@0:8
- (void)buildUserMap;
// IMP 0x1006626f4 | @16@0:8
- (id)jceModel;
// IMP 0x100663654 | v32@0:8@16@24
- (void)addImages:(id)arg0 :(id)arg1;
// IMP 0x100663b20 | v32@0:8@16@24
- (void)addThreads:(id)arg0 :(id)arg1;
// IMP 0x100663ec8 | @16@0:8
- (id)generateCrashLog;
// IMP 0x1006647e4 | @16@0:8
- (id)exceptionUploadPackage;
// IMP 0x100664fac | @16@0:8
- (id)persistFileKey;
// IMP 0x100664fbc | q16@0:8
- (long long)persistType;
// IMP 0x100664fc4 | @16@0:8
- (id)jceCMDString;
// IMP 0x10066504c | B16@0:8
- (BOOL)shouldPersist;
// IMP 0x100665194 | B16@0:8
- (BOOL)shouldUpload;
// IMP 0x1006652dc | B24@0:8@16
- (BOOL)jceModelAvailable:(id)arg0;
// IMP 0x100665384 | v20@0:8B16
- (void)persistentSuccessed:(BOOL)arg0;
// IMP 0x1006653c8 | v20@0:8B16
- (void)reportSuccessed:(BOOL)arg0;
// IMP 0x10066542c | v20@0:8B16
- (void)beaconReport:(BOOL)arg0;
// IMP 0x100665678 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006655c0 | v24@0:8@16
- (void)setJceModel:(id)arg0;
// IMP 0x1006655d4 | B16@0:8
- (BOOL)isCrashed;
// IMP 0x1006655e4 | v20@0:8B16
- (void)setIsCrashed:(BOOL)arg0;
// IMP 0x1006655f4 | @16@0:8
- (id)crashModel;
// IMP 0x100665604 | v24@0:8@16
- (void)setCrashModel:(id)arg0;
// IMP 0x100665618 | B16@0:8
- (BOOL)hasCachedFile;
// IMP 0x100665628 | v20@0:8B16
- (void)setHasCachedFile:(BOOL)arg0;
// IMP 0x100665638 | B16@0:8
- (BOOL)bNativeCrash;
// IMP 0x100665648 | v20@0:8B16
- (void)setBNativeCrash:(BOOL)arg0;
// IMP 0x100665658 | Q16@0:8
- (unsigned long long)crashCount;
// IMP 0x100665668 | v24@0:8Q16
- (void)setCrashCount:(unsigned long long)arg0;
@end
