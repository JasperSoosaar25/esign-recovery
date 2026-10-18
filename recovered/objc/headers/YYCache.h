// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94018
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYCache : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _memoryCache encoding=@"YYMemoryCache" offset=16
// ivar _diskCache encoding=@"YYDiskCache" offset=24
// property name attributes=T@"NSString",R,C,V_name
// property memoryCache attributes=T@"YYMemoryCache",R,V_memoryCache
// property diskCache attributes=T@"YYDiskCache",R,V_diskCache
// IMP 0x10058ac88 | @16@0:8
- (id)init;
// IMP 0x10058acbc | @24@0:8@16
- (id)initWithName:(id)arg0;
// IMP 0x10058ad84 | @24@0:8@16
- (id)initWithPath:(id)arg0;
// IMP 0x10058af3c | B24@0:8@16
- (BOOL)containsObjectForKey:(id)arg0;
// IMP 0x10058af98 | v32@0:8@16@?24
- (void)containsObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058b0ac | @24@0:8@16
- (id)objectForKey:(id)arg0;
// IMP 0x10058b130 | v32@0:8@16@?24
- (void)objectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058b354 | v32@0:8@16@24
- (void)setObject:(id)arg0 forKey:(id)arg1;
// IMP 0x10058b3c4 | v40@0:8@16@24@?32
- (void)setObject:(id)arg0 forKey:(id)arg1 withBlock:(id /* block */)arg2;
// IMP 0x10058b458 | v24@0:8@16
- (void)removeObjectForKey:(id)arg0;
// IMP 0x10058b4a8 | v32@0:8@16@?24
- (void)removeObjectForKey:(id)arg0 withBlock:(id /* block */)arg1;
// IMP 0x10058b514 | v16@0:8
- (void)removeAllObjects;
// IMP 0x10058b53c | v24@0:8@?16
- (void)removeAllObjectsWithBlock:(id /* block */)arg0;
// IMP 0x10058b588 | v32@0:8@?16@?24
- (void)removeAllObjectsWithProgressBlock:(id /* block */)arg0 endBlock:(id /* block */)arg1;
// IMP 0x10058b5f0 | @16@0:8
- (id)description;
// IMP 0x10058b664 | @16@0:8
- (id)name;
// IMP 0x10058b670 | @16@0:8
- (id)memoryCache;
// IMP 0x10058b67c | @16@0:8
- (id)diskCache;
// IMP 0x10058b688 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10058aeac | @24@0:8@16
+ (id)cacheWithName:(id)arg0;
// IMP 0x10058aef4 | @24@0:8@16
+ (id)cacheWithPath:(id)arg0;
@end
