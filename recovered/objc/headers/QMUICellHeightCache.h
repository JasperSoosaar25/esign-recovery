// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87c48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICellHeightCache : NSObject
// ivar _cachedHeights encoding=@"NSMutableDictionary" offset=8
// property cachedHeights attributes=T@"NSMutableDictionary",&,N,V_cachedHeights
// IMP 0x100458334 | @16@0:8
- (id)init;
// IMP 0x1004583a4 | B24@0:8@16
- (BOOL)existsHeightForKey:(id)arg0;
// IMP 0x100458458 | v32@0:8d16@24
- (void)cacheHeight:(double)arg0 byKey:(id)arg1;
// IMP 0x1004584e8 | d24@0:8@16
- (double)heightForKey:(id)arg0;
// IMP 0x100458570 | v24@0:8@16
- (void)invalidateHeightForKey:(id)arg0;
// IMP 0x1004585c0 | v16@0:8
- (void)invalidateAllHeightCache;
// IMP 0x1004585f0 | @16@0:8
- (id)cachedHeights;
// IMP 0x1004585f8 | v24@0:8@16
- (void)setCachedHeights:(id)arg0;
// IMP 0x100458604 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
