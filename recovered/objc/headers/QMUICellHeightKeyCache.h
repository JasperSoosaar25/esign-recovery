// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87ce8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICellHeightKeyCache : NSObject
// ivar _cachedHeights encoding=@"NSMutableDictionary" offset=8
// property cachedHeights attributes=T@"NSMutableDictionary",&,N,V_cachedHeights
// IMP 0x10045ce94 | @16@0:8
- (id)init;
// IMP 0x10045cf08 | B24@0:8@16
- (BOOL)existsHeightForKey:(id)arg0;
// IMP 0x10045cf84 | v32@0:8d16@24
- (void)cacheHeight:(double)arg0 forKey:(id)arg1;
// IMP 0x10045d014 | d24@0:8@16
- (double)heightForKey:(id)arg0;
// IMP 0x10045d09c | v24@0:8@16
- (void)invalidateHeightForKey:(id)arg0;
// IMP 0x10045d0ec | v16@0:8
- (void)invalidateAllHeightCache;
// IMP 0x10045d11c | @16@0:8
- (id)description;
// IMP 0x10045d1a8 | @16@0:8
- (id)cachedHeights;
// IMP 0x10045d1b0 | v24@0:8@16
- (void)setCachedHeights:(id)arg0;
// IMP 0x10045d1bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
