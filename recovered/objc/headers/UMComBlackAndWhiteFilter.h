// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96bd0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComBlackAndWhiteFilter : NSObject
// ivar _set encoding=@"NSMutableSet" offset=8
// ivar _originSerialize encoding=@"NSString" offset=16
// ivar _filterAlgorithmic encoding=Q offset=24
// property set attributes=T@"NSMutableSet",&,N,V_set
// property originSerialize attributes=T@"NSString",C,N,V_originSerialize
// property filterAlgorithmic attributes=TQ,N,V_filterAlgorithmic
// IMP 0x100682c68 | v24@0:8@16
- (void)doProcessSerializeForWhiteFilter:(id)arg0;
// IMP 0x100682db4 | v24@0:8@16
- (void)doProcessSerializeForBlackFilter:(id)arg0;
// IMP 0x100682e78 | v24@0:8@16
- (void)processSerialize:(id)arg0;
// IMP 0x100682ee4 | @24@0:8@16
- (id)initWithSerialize:(id)arg0;
// IMP 0x100682fe4 | @32@0:8@16Q24
- (id)initWithSerialize:(id)arg0 withFilterAlgorithmic:(unsigned long long)arg1;
// IMP 0x100683228 | v24@0:8@16
- (void)doAddFilterValueForWhiteFilter:(id)arg0;
// IMP 0x1006832f8 | v24@0:8@16
- (void)doAddFilterValueForBlackFilter:(id)arg0;
// IMP 0x100683374 | v24@0:8@16
- (void)addFilterValue:(id)arg0;
// IMP 0x1006833e0 | B24@0:8@16
- (BOOL)isFilterValueForWhiteFilter:(id)arg0;
// IMP 0x1006834c4 | B24@0:8@16
- (BOOL)isFilterValueForBlackFilter:(id)arg0;
// IMP 0x10068355c | B24@0:8@16
- (BOOL)isFilterValue:(id)arg0;
// IMP 0x1006835dc | @16@0:8
- (id)toStringForWhiteFilter;
// IMP 0x100683804 | @16@0:8
- (id)toStringForBlackFilter;
// IMP 0x100683a28 | @16@0:8
- (id)toString;
// IMP 0x100683df8 | @16@0:8
- (id)set;
// IMP 0x100683e00 | v24@0:8@16
- (void)setSet:(id)arg0;
// IMP 0x100683e0c | @16@0:8
- (id)originSerialize;
// IMP 0x100683e18 | v24@0:8@16
- (void)setOriginSerialize:(id)arg0;
// IMP 0x100683e2c | Q16@0:8
- (unsigned long long)filterAlgorithmic;
// IMP 0x100683e34 | v24@0:8Q16
- (void)setFilterAlgorithmic:(unsigned long long)arg0;
// IMP 0x100683e3c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006830e8 | @24@0:8@16
+ (id)createFilterWithSerialize:(id)arg0;
// IMP 0x100683150 | @24@0:8@16
+ (id)createBlackFilterWithSerialize:(id)arg0;
// IMP 0x1006831bc | @24@0:8@16
+ (id)createWhiteFilterWithSerialize:(id)arg0;
// IMP 0x100683a8c | @24@0:8@16
+ (id)md5DataWithData:(id)arg0;
// IMP 0x100683b58 | *24@0:8@16
+ (char *)md5BytesWithString:(id)arg0;
// IMP 0x100683be4 | i24@0:8@16
+ (int)MD5ToIntWithString:(id)arg0;
// IMP 0x100683c58 | @24@0:8@16
+ (id)decodeBase64:(id)arg0;
// IMP 0x100683cf4 | @24@0:8@16
+ (id)encodeBase64:(id)arg0;
// IMP 0x100683d7c | B24@0:8@16
+ (BOOL)checkValidString:(id)arg0;
@end
