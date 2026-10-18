// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87d38
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUICellSizeKeyCache : NSObject
// ivar _cachedSizes encoding=@"NSMutableDictionary" offset=8
// property cachedSizes attributes=T@"NSMutableDictionary",&,N,V_cachedSizes
// IMP 0x10045d1c8 | @16@0:8
- (id)init;
// IMP 0x10045d23c | B24@0:8@16
- (BOOL)existsSizeForKey:(id)arg0;
// IMP 0x10045d2dc | v40@0:8{CGSize=dd}16@32
- (void)cacheSize:(struct CGSize)arg0 forKey:(id)arg1;
// IMP 0x10045d378 | {CGSize=dd}24@0:8@16
- (struct CGSize)sizeForKey:(id)arg0;
// IMP 0x10045d408 | v24@0:8@16
- (void)invalidateSizeForKey:(id)arg0;
// IMP 0x10045d458 | v16@0:8
- (void)invalidateAllSizeCache;
// IMP 0x10045d488 | @16@0:8
- (id)description;
// IMP 0x10045d514 | @16@0:8
- (id)cachedSizes;
// IMP 0x10045d51c | v24@0:8@16
- (void)setCachedSizes:(id)arg0;
// IMP 0x10045d528 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
