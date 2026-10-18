// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90348
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageCachesManagerOperation : NSOperation
// ivar _pendingCountLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _executing encoding=B offset=12
// ivar _finished encoding=B offset=13
// ivar _cancelled encoding=B offset=14
// ivar _pendingCount encoding=Q offset=16
// property pendingCount attributes=TQ,R,N,V_pendingCount
// IMP 0x100542508 | @16@0:8
- (id)init;
// IMP 0x100542558 | v24@0:8Q16
- (void)beginWithTotalCount:(unsigned long long)arg0;
// IMP 0x100542598 | Q16@0:8
- (unsigned long long)pendingCount;
// IMP 0x1005425e0 | v16@0:8
- (void)completeOne;
// IMP 0x100542630 | v16@0:8
- (void)cancel;
// IMP 0x100542658 | v16@0:8
- (void)done;
// IMP 0x10054268c | v16@0:8
- (void)reset;
// IMP 0x1005426cc | v20@0:8B16
- (void)setFinished:(BOOL)arg0;
// IMP 0x100542718 | v20@0:8B16
- (void)setExecuting:(BOOL)arg0;
// IMP 0x100542764 | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x1005427b0 | B16@0:8
- (BOOL)isExecuting;
// IMP 0x1005427c4 | B16@0:8
- (BOOL)isFinished;
// IMP 0x1005427d8 | B16@0:8
- (BOOL)isCancelled;
@end
