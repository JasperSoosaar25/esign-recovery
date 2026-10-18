// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c914c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageCombinedOperation : NSObject
// ivar _cancelled encoding=B offset=8
// ivar _cacheOperation encoding=@"<SDWebImageOperation>" offset=16
// ivar _loaderOperation encoding=@"<SDWebImageOperation>" offset=24
// ivar _manager encoding=@"SDWebImageManager" offset=32
// property cancelled attributes=TB,N,GisCancelled,V_cancelled
// property loaderOperation attributes=T@"<SDWebImageOperation>",&,N,V_loaderOperation
// property cacheOperation attributes=T@"<SDWebImageOperation>",&,N,V_cacheOperation
// property manager attributes=T@"SDWebImageManager",W,N,V_manager
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005562d0 | v16@0:8
- (void)cancel;
// IMP 0x1005563e0 | @16@0:8
- (id)cacheOperation;
// IMP 0x1005563e8 | v24@0:8@16
- (void)setCacheOperation:(id)arg0;
// IMP 0x1005563f4 | @16@0:8
- (id)loaderOperation;
// IMP 0x1005563fc | v24@0:8@16
- (void)setLoaderOperation:(id)arg0;
// IMP 0x100556408 | B16@0:8
- (BOOL)isCancelled;
// IMP 0x100556410 | v20@0:8B16
- (void)setCancelled:(BOOL)arg0;
// IMP 0x100556418 | @16@0:8
- (id)manager;
// IMP 0x100556430 | v24@0:8@16
- (void)setManager:(id)arg0;
// IMP 0x10055643c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
