// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97238
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MobClick : NSObject
// IMP 0x1006afc14 | v16@0:8
+ (void)load;
// IMP 0x1006afc40 | @16@0:8
+ (id)getVersion;
// IMP 0x1006afc4c | v24@0:8Q16
+ (void)setScenarioType:(unsigned long long)arg0;
// IMP 0x1006afcf0 | v24@0:8@16
+ (void)setAppVersion:(id)arg0;
// IMP 0x1006afcf4 | v24@0:8@16
+ (void)setSecret:(id)arg0;
// IMP 0x1006afd58 | v28@0:8@16i24
+ (void)logPageView:(id)arg0 seconds:(int)arg1;
// IMP 0x1006afd6c | v24@0:8@16
+ (void)beginLogPageView:(id)arg0;
// IMP 0x1006afd80 | v24@0:8@16
+ (void)endLogPageView:(id)arg0;
// IMP 0x1006afd94 | v24@0:8@16
+ (void)event:(id)arg0;
// IMP 0x1006afda8 | v32@0:8@16@24
+ (void)event:(id)arg0 label:(id)arg1;
// IMP 0x1006afdbc | v32@0:8@16@24
+ (void)event:(id)arg0 attributes:(id)arg1;
// IMP 0x1006afdd0 | v36@0:8@16@24i32
+ (void)event:(id)arg0 attributes:(id)arg1 counter:(int)arg2;
// IMP 0x1006afde4 | v24@0:8@16
+ (void)beginEvent:(id)arg0;
// IMP 0x1006afdf8 | v24@0:8@16
+ (void)endEvent:(id)arg0;
// IMP 0x1006afe0c | v32@0:8@16@24
+ (void)beginEvent:(id)arg0 label:(id)arg1;
// IMP 0x1006afe20 | v32@0:8@16@24
+ (void)endEvent:(id)arg0 label:(id)arg1;
// IMP 0x1006afe34 | v40@0:8@16@24@32
+ (void)beginEvent:(id)arg0 primarykey:(id)arg1 attributes:(id)arg2;
// IMP 0x1006afe48 | v32@0:8@16@24
+ (void)endEvent:(id)arg0 primarykey:(id)arg1;
// IMP 0x1006afe5c | v28@0:8@16i24
+ (void)event:(id)arg0 durations:(int)arg1;
// IMP 0x1006aff58 | v36@0:8@16@24i32
+ (void)event:(id)arg0 label:(id)arg1 durations:(int)arg2;
// IMP 0x1006b0064 | v36@0:8@16@24i32
+ (void)event:(id)arg0 attributes:(id)arg1 durations:(int)arg2;
// IMP 0x1006b0170 | v32@0:8d16d24
+ (void)setLatitude:(double)arg0 longitude:(double)arg1;
// IMP 0x1006b0184 | B16@0:8
+ (BOOL)isJailbroken;
// IMP 0x1006b0198 | B16@0:8
+ (BOOL)isPirated;
// IMP 0x1006b01ac | v24@0:8@16
+ (void)startSession:(id)arg0;
// IMP 0x1006b021c | v24@0:8@16
+ (void)startWithAppkey:(id)arg0;
// IMP 0x1006b0390 | v32@0:8@16@24
+ (void)setWrapperType:(id)arg0 wrapperVersion:(id)arg1;
// IMP 0x1006b0484 | v24@0:8@16
+ (void)profileSignInWithPUID:(id)arg0;
// IMP 0x1006b0498 | v32@0:8@16@24
+ (void)profileSignInWithPUID:(id)arg0 provider:(id)arg1;
// IMP 0x1006b04ac | v16@0:8
+ (void)profileSignOff;
// IMP 0x1006b04c0 | v20@0:8B16
+ (void)setLogEnabled:(BOOL)arg0;
// IMP 0x1006b04fc | v24@0:8@16
+ (void)registerSuperProperty:(id)arg0;
// IMP 0x1006b056c | v24@0:8@16
+ (void)unregisterSuperProperty:(id)arg0;
// IMP 0x1006b05dc | @16@0:8
+ (id)getSuperProperties;
// IMP 0x1006b0638 | v16@0:8
+ (void)clearSuperProperties;
// IMP 0x1006b0680 | v24@0:8@16
+ (void)registerPreProperties:(id)arg0;
// IMP 0x1006b06f0 | v24@0:8@16
+ (void)unregisterPreProperty:(id)arg0;
// IMP 0x1006b0760 | @16@0:8
+ (id)getPreProperties;
// IMP 0x1006b07bc | v16@0:8
+ (void)clearPreProperties;
// IMP 0x1006b0804 | v24@0:8@16
+ (void)setFirstLaunchEvent:(id)arg0;
// IMP 0x1006b0874 | v20@0:8B16
+ (void)setAutoPageEnabled:(BOOL)arg0;
// IMP 0x1006b0a80 | @16@0:8
+ (id)getPageView;
// IMP 0x1006b0b5c | B24@0:8@16
+ (BOOL)handleUrl:(id)arg0;
@end
