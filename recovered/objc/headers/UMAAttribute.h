// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96e50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMAAttribute : UMComEvent
// ivar _id encoding=@"NSString" offset=8
// ivar _values encoding=@"NSMutableDictionary" offset=16
// ivar dplusDic encoding=@"NSMutableDictionary" offset=24
// ivar dplusPreDic encoding=@"NSMutableDictionary" offset=32
// property id attributes=T@"NSString",C,N,V_id
// property values attributes=T@"NSMutableDictionary",&,N,V_values
// property dplusDic attributes=T@"NSMutableDictionary",&,VdplusDic
// property dplusPreDic attributes=T@"NSMutableDictionary",&,VdplusPreDic
// IMP 0x100696390 | @16@0:8
- (id)init;
// IMP 0x100696570 | v24@0:8@16
- (void)registerSuperProperty:(id)arg0;
// IMP 0x1006966fc | v24@0:8@16
- (void)registerPreProperties:(id)arg0;
// IMP 0x100696888 | v24@0:8@16
- (void)unregisterSuperProperty:(id)arg0;
// IMP 0x100696990 | v24@0:8@16
- (void)unregisterPreProperty:(id)arg0;
// IMP 0x100696a98 | @16@0:8
- (id)getSuperProperties;
// IMP 0x100696c1c | @16@0:8
- (id)getPreProperties;
// IMP 0x100696d40 | v16@0:8
- (void)clearSuperProperties;
// IMP 0x100696da0 | v16@0:8
- (void)clearPreProperties;
// IMP 0x1006987cc | v24@0:8@16
- (void)setFirstLaunchEvent:(id)arg0;
// IMP 0x100698e38 | v24@0:8@16
- (void)dplusWriteToFile:(id)arg0;
// IMP 0x100698f94 | @16@0:8
- (id)id;
// IMP 0x100698fa4 | v24@0:8@16
- (void)setId:(id)arg0;
// IMP 0x100698fbc | @16@0:8
- (id)values;
// IMP 0x100698fcc | v24@0:8@16
- (void)setValues:(id)arg0;
// IMP 0x100698fe0 | @16@0:8
- (id)dplusDic;
// IMP 0x100698ff0 | v24@0:8@16
- (void)setDplusDic:(id)arg0;
// IMP 0x100699008 | @16@0:8
- (id)dplusPreDic;
// IMP 0x100699018 | v24@0:8@16
- (void)setDplusPreDic:(id)arg0;
// IMP 0x100699030 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100696300 | @16@0:8
+ (id)sharedInstance;
// IMP 0x100696e00 | @24@0:8@16
+ (id)truncateStringKey:(id)arg0;
// IMP 0x100696f18 | @24@0:8@16
+ (id)truncateValueStringKey:(id)arg0;
// IMP 0x100697030 | B32@0:8@16@24
+ (BOOL)checkValidKey:(id)arg0 type:(id)arg1;
// IMP 0x1006972f4 | B24@0:8@16
+ (BOOL)checkValidStringValue:(id)arg0;
// IMP 0x100697378 | B24@0:8@16
+ (BOOL)checkValidNumberValue:(id)arg0;
// IMP 0x1006973e4 | B24@0:8@16
+ (BOOL)checkValidArrayValue:(id)arg0;
// IMP 0x100697450 | @24@0:8@16
+ (id)filterValidArrayValueWithValueArray:(id)arg0;
// IMP 0x100697734 | @32@0:8@16@24
+ (id)propertyFilter:(id)arg0 type:(id)arg1;
// IMP 0x100697d78 | v16@0:8
+ (void)megerImpintAndLocalForFirstLaunch;
// IMP 0x100698290 | @24@0:8@16
+ (id)truncateFirstLaunchEventStringKey:(id)arg0;
// IMP 0x1006983a8 | @24@0:8@16
+ (id)filterValidArrayValueWithFirstLaunchEvent:(id)arg0;
// IMP 0x1006985f4 | @32@0:8@16@24
+ (id)filterValidArray:(id)arg0 containInOrgArray:(id)arg1;
@end
