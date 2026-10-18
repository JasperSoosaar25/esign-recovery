// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90938
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDMemoryCache : NSCache
// ivar _weakCacheLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _config encoding=@"SDImageCacheConfig" offset=16
// ivar _weakCache encoding=@"NSMapTable" offset=24
// property config attributes=T@"SDImageCacheConfig",&,N,V_config
// property weakCache attributes=T@"NSMapTable",&,N,V_weakCache
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549bbc | v16@0:8
- (void)dealloc;
// IMP 0x100549ccc | @16@0:8
- (id)init;
// IMP 0x100549d44 | @24@0:8@16
- (id)initWithConfig:(id)arg0;
// IMP 0x100549dcc | v16@0:8
- (void)commonInit;
// IMP 0x100549f1c | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x100549f50 | v40@0:8@16@24Q32
- (void)setObject:(id)arg0 forKey:(id)arg1 cost:(unsigned long long)arg2;
// IMP 0x10054a050 | @24@0:8@16
- (id)objectForKey:(id)arg0;
// IMP 0x10054a1a8 | v24@0:8@16
- (void)removeObjectForKey:(id)arg0;
// IMP 0x10054a274 | v16@0:8
- (void)removeAllObjects;
// IMP 0x10054a320 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x10054a470 | @16@0:8
- (id)config;
// IMP 0x10054a480 | v24@0:8@16
- (void)setConfig:(id)arg0;
// IMP 0x10054a494 | @16@0:8
- (id)weakCache;
// IMP 0x10054a4a4 | v24@0:8@16
- (void)setWeakCache:(id)arg0;
// IMP 0x10054a4b8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
