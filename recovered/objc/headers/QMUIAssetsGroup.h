// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87998
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAssetsGroup : NSObject
// ivar _phAssetCollection encoding=@"PHAssetCollection" offset=8
// ivar _phFetchResult encoding=@"PHFetchResult" offset=16
// property phAssetCollection attributes=T@"PHAssetCollection",&,N,V_phAssetCollection
// property phFetchResult attributes=T@"PHFetchResult",&,N,V_phFetchResult
// IMP 0x100451928 | @32@0:8@16@24
- (id)initWithPHCollection:(id)arg0 fetchAssetsOptions:(id)arg1;
// IMP 0x1004519e8 | @24@0:8@16
- (id)initWithPHCollection:(id)arg0;
// IMP 0x1004519f0 | q16@0:8
- (long long)numberOfAssets;
// IMP 0x100451a2c | @16@0:8
- (id)name;
// IMP 0x100451ac0 | @32@0:8{CGSize=dd}16
- (id)posterImageWithSize:(struct CGSize)arg0;
// IMP 0x100451d60 | v32@0:8Q16@?24
- (void)enumerateAssetsWithOptions:(unsigned long long)arg0 usingBlock:(id /* block */)arg1;
// IMP 0x100451ef8 | v24@0:8@?16
- (void)enumerateAssetsUsingBlock:(id /* block */)arg0;
// IMP 0x100451f04 | @16@0:8
- (id)phAssetCollection;
// IMP 0x100451f0c | v24@0:8@16
- (void)setPhAssetCollection:(id)arg0;
// IMP 0x100451f18 | @16@0:8
- (id)phFetchResult;
// IMP 0x100451f20 | v24@0:8@16
- (void)setPhFetchResult:(id)arg0;
// IMP 0x100451f2c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
