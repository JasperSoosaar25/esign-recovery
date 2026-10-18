// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94248
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYMemoryCache : NSObject
// ivar _lock encoding={_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]} offset=8
// ivar _lru encoding=@"_YYLinkedMap" offset=72
// ivar _queue encoding=@"NSObject<OS_dispatch_queue>" offset=80
// ivar _shouldRemoveAllObjectsOnMemoryWarning encoding=B offset=88
// ivar _shouldRemoveAllObjectsWhenEnteringBackground encoding=B offset=89
// ivar _name encoding=@"NSString" offset=96
// ivar _countLimit encoding=Q offset=104
// ivar _costLimit encoding=Q offset=112
// ivar _ageLimit encoding=d offset=120
// ivar _autoTrimInterval encoding=d offset=128
// ivar _didReceiveMemoryWarningBlock encoding=@? offset=136
// ivar _didEnterBackgroundBlock encoding=@? offset=144
// property name attributes=T@"NSString",C,V_name
// property totalCount attributes=TQ,R
// property totalCost attributes=TQ,R
// property countLimit attributes=TQ,V_countLimit
// property costLimit attributes=TQ,V_costLimit
// property ageLimit attributes=Td,V_ageLimit
// property autoTrimInterval attributes=Td,V_autoTrimInterval
// property shouldRemoveAllObjectsOnMemoryWarning attributes=TB,V_shouldRemoveAllObjectsOnMemoryWarning
// property shouldRemoveAllObjectsWhenEnteringBackground attributes=TB,V_shouldRemoveAllObjectsWhenEnteringBackground
// property didReceiveMemoryWarningBlock attributes=T@?,C,V_didReceiveMemoryWarningBlock
// property didEnterBackgroundBlock attributes=T@?,C,V_didEnterBackgroundBlock
// property releaseOnMainThread attributes=TB
// property releaseAsynchronously attributes=TB
// IMP 0x1005919a0 | v16@0:8
- (void)_trimRecursively;
// IMP 0x100591ab4 | v16@0:8
- (void)_trimInBackground;
// IMP 0x100591b48 | v24@0:8Q16
- (void)_trimToCost:(unsigned long long)arg0;
// IMP 0x100591cec | v24@0:8Q16
- (void)_trimToCount:(unsigned long long)arg0;
// IMP 0x100591e90 | v24@0:8d16
- (void)_trimToAge:(double)arg0;
// IMP 0x100592058 | v16@0:8
- (void)_appDidReceiveMemoryWarningNotification;
// IMP 0x1005920d0 | v16@0:8
- (void)_appDidEnterBackgroundNotification;
// IMP 0x100592148 | @16@0:8
- (id)init;
// IMP 0x10059227c | v16@0:8
- (void)dealloc;
// IMP 0x100592340 | Q16@0:8
- (unsigned long long)totalCount;
// IMP 0x10059237c | Q16@0:8
- (unsigned long long)totalCost;
// IMP 0x1005923b8 | B16@0:8
- (BOOL)releaseOnMainThread;
// IMP 0x1005923f4 | v20@0:8B16
- (void)setReleaseOnMainThread:(BOOL)arg0;
// IMP 0x100592434 | B16@0:8
- (BOOL)releaseAsynchronously;
// IMP 0x100592470 | v20@0:8B16
- (void)setReleaseAsynchronously:(BOOL)arg0;
// IMP 0x1005924b0 | B24@0:8@16
- (BOOL)containsObjectForKey:(id)arg0;
// IMP 0x100592528 | @24@0:8@16
- (id)objectForKey:(id)arg0;
// IMP 0x1005925dc | v32@0:8@16@24
- (void)setObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1005925e4 | v40@0:8@16@24Q32
- (void)setObject:(id)arg0 forKey:(id)arg1 withCost:(unsigned long long)arg2;
// IMP 0x1005928d8 | v24@0:8@16
- (void)removeObjectForKey:(id)arg0;
// IMP 0x100592a78 | v16@0:8
- (void)removeAllObjects;
// IMP 0x100592aac | v24@0:8Q16
- (void)trimToCount:(unsigned long long)arg0;
// IMP 0x100592ab8 | v24@0:8Q16
- (void)trimToCost:(unsigned long long)arg0;
// IMP 0x100592abc | v24@0:8d16
- (void)trimToAge:(double)arg0;
// IMP 0x100592ac0 | @16@0:8
- (id)description;
// IMP 0x100592b34 | @16@0:8
- (id)name;
// IMP 0x100592b40 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100592b48 | Q16@0:8
- (unsigned long long)countLimit;
// IMP 0x100592b50 | v24@0:8Q16
- (void)setCountLimit:(unsigned long long)arg0;
// IMP 0x100592b58 | Q16@0:8
- (unsigned long long)costLimit;
// IMP 0x100592b60 | v24@0:8Q16
- (void)setCostLimit:(unsigned long long)arg0;
// IMP 0x100592b68 | d16@0:8
- (double)ageLimit;
// IMP 0x100592b74 | v24@0:8d16
- (void)setAgeLimit:(double)arg0;
// IMP 0x100592b80 | d16@0:8
- (double)autoTrimInterval;
// IMP 0x100592b8c | v24@0:8d16
- (void)setAutoTrimInterval:(double)arg0;
// IMP 0x100592b98 | B16@0:8
- (BOOL)shouldRemoveAllObjectsOnMemoryWarning;
// IMP 0x100592ba4 | v20@0:8B16
- (void)setShouldRemoveAllObjectsOnMemoryWarning:(BOOL)arg0;
// IMP 0x100592bac | B16@0:8
- (BOOL)shouldRemoveAllObjectsWhenEnteringBackground;
// IMP 0x100592bb8 | v20@0:8B16
- (void)setShouldRemoveAllObjectsWhenEnteringBackground:(BOOL)arg0;
// IMP 0x100592bc0 | @?16@0:8
- (id /* block */)didReceiveMemoryWarningBlock;
// IMP 0x100592bcc | v24@0:8@?16
- (void)setDidReceiveMemoryWarningBlock:(id /* block */)arg0;
// IMP 0x100592bd4 | @?16@0:8
- (id /* block */)didEnterBackgroundBlock;
// IMP 0x100592be0 | v24@0:8@?16
- (void)setDidEnterBackgroundBlock:(id /* block */)arg0;
// IMP 0x100592be8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
