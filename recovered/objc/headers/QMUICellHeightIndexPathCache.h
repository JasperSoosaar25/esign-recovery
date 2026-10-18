// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87c98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICellHeightIndexPathCache : NSObject
// ivar _automaticallyInvalidateEnabled encoding=B offset=8
// ivar _cachedHeights encoding=@"NSMutableArray" offset=16
// property cachedHeights attributes=T@"NSMutableArray",&,N,V_cachedHeights
// property automaticallyInvalidateEnabled attributes=TB,N,V_automaticallyInvalidateEnabled
// IMP 0x100458610 | @16@0:8
- (id)init;
// IMP 0x10045868c | B24@0:8@16
- (BOOL)existsHeightAtIndexPath:(id)arg0;
// IMP 0x1004587e0 | v32@0:8d16@24
- (void)cacheHeight:(double)arg0 byIndexPath:(id)arg1;
// IMP 0x100458920 | d24@0:8@16
- (double)heightForIndexPath:(id)arg0;
// IMP 0x100458a4c | v24@0:8q16
- (void)invalidateHeightInSection:(long long)arg0;
// IMP 0x100458aa8 | v24@0:8@16
- (void)invalidateHeightAtIndexPath:(id)arg0;
// IMP 0x100458bdc | v16@0:8
- (void)invalidateAllHeightCache;
// IMP 0x100458c1c | v24@0:8@16
- (void)buildCachesAtIndexPathsIfNeeded:(id)arg0;
// IMP 0x100458ce8 | v24@0:8q16
- (void)buildSectionsIfNeeded:(long long)arg0;
// IMP 0x100458d9c | v32@0:8q16q24
- (void)buildRowsIfNeeded:(long long)arg0 inExistSection:(long long)arg1;
// IMP 0x100458e54 | B16@0:8
- (BOOL)automaticallyInvalidateEnabled;
// IMP 0x100458e5c | v20@0:8B16
- (void)setAutomaticallyInvalidateEnabled:(BOOL)arg0;
// IMP 0x100458e64 | @16@0:8
- (id)cachedHeights;
// IMP 0x100458e6c | v24@0:8@16
- (void)setCachedHeights:(id)arg0;
// IMP 0x100458e78 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
