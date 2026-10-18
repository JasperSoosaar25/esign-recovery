// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97800
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComFilterManager : NSObject
// ivar _filterListDic encoding=@"NSMutableDictionary" offset=8
// ivar _filterComFilterDic encoding=@"NSMutableDictionary" offset=16
// property filterListDic attributes=T@"NSMutableDictionary",&,N,V_filterListDic
// property filterComFilterDic attributes=T@"NSMutableDictionary",&,N,V_filterComFilterDic
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006c0d68 | @16@0:8
- (id)init;
// IMP 0x1006c0e50 | @24@0:8q16
- (id)filterStringFromFilterType:(long long)arg0;
// IMP 0x1006c0eac | v16@0:8
- (void)initFilterConfigAndVerify;
// IMP 0x1006c121c | Q40@0:8@16@24@32
- (unsigned long long)verifyFilterValue:(id)arg0 withImprintMD5Value:(id)arg1 withUserdefaultMD5Vlaue:(id)arg2;
// IMP 0x1006c134c | @16@0:8
- (id)filterConfigUmengDirectory;
// IMP 0x1006c1464 | v32@0:8@16q24
- (void)writeFilterListValue:(id)arg0 withFilterType:(long long)arg1;
// IMP 0x1006c1534 | @24@0:8q16
- (id)readFilterListValueWithFilterType:(long long)arg0;
// IMP 0x1006c1618 | v24@0:8q16
- (void)removeFilterListValueWithFilterType:(long long)arg0;
// IMP 0x1006c16c8 | v32@0:8@16q24
- (void)createUMComFilterWithFilterListValue:(id)arg0 withFilterType:(long long)arg1;
// IMP 0x1006c191c | @24@0:8q16
- (id)getUMComFilterWithFilterType:(long long)arg0;
// IMP 0x1006c19e0 | v24@0:8q16
- (void)removeUMComFilterWithFilterType:(long long)arg0;
// IMP 0x1006c1a90 | B32@0:8@16@24
- (BOOL)writeFileName:(id)arg0 withFilterListValue:(id)arg1;
// IMP 0x1006c1b64 | @24@0:8@16
- (id)readFilterListValueWithFileName:(id)arg0;
// IMP 0x1006c1c24 | B24@0:8@16
- (BOOL)removeFilterListValueWithFileName:(id)arg0;
// IMP 0x1006c1d44 | v16@0:8
- (void)registerWhiteListAndBlackList;
// IMP 0x1006c22c4 | v40@0:8@16@24@32
- (void)imprintObserveValueForImprintKey:(id)arg0 newImprintValue:(id)arg1 oldImprintValue:(id)arg2;
// IMP 0x1006c2568 | Q32@0:8@16q24
- (unsigned long long)doIsFilterValue:(id)arg0 withFilterType:(long long)arg1;
// IMP 0x1006c267c | Q32@0:8@16q24
- (unsigned long long)doIsWhiteFilterValue:(id)arg0 withFilterType:(long long)arg1;
// IMP 0x1006c2688 | Q32@0:8@16q24
- (unsigned long long)doIsBlackFilterValue:(id)arg0 withFilterType:(long long)arg1;
// IMP 0x1006c2694 | B32@0:8@16Q24
- (BOOL)isFilterValue:(id)arg0 withFilterTypeLevel:(unsigned long long)arg1;
// IMP 0x1006c2860 | @16@0:8
- (id)filterListDic;
// IMP 0x1006c2868 | v24@0:8@16
- (void)setFilterListDic:(id)arg0;
// IMP 0x1006c2874 | @16@0:8
- (id)filterComFilterDic;
// IMP 0x1006c287c | v24@0:8@16
- (void)setFilterComFilterDic:(id)arg0;
// IMP 0x1006c2888 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006c0dd0 | @16@0:8
+ (id)sharedInstance;
// IMP 0x1006c2760 | B24@0:8@16
+ (BOOL)isFiterEventID:(id)arg0;
// IMP 0x1006c27e0 | B24@0:8@16
+ (BOOL)isFiterPageName:(id)arg0;
@end
