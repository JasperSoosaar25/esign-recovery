// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90618
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageLoadersManager : NSObject
// ivar _loadersLock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _imageLoaders encoding=@"NSMutableArray" offset=16
// property imageLoaders attributes=T@"NSMutableArray",&,N,V_imageLoaders
// property loaders attributes=T@"NSArray",C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005482fc | @16@0:8
- (id)init;
// IMP 0x10054839c | @16@0:8
- (id)loaders;
// IMP 0x1005483dc | v24@0:8@16
- (void)setLoaders:(id)arg0;
// IMP 0x100548444 | v24@0:8@16
- (void)addLoader:(id)arg0;
// IMP 0x1005484a8 | v24@0:8@16
- (void)removeLoader:(id)arg0;
// IMP 0x10054850c | B24@0:8@16
- (BOOL)canRequestImageForURL:(id)arg0;
// IMP 0x100548518 | B40@0:8@16Q24@32
- (BOOL)canRequestImageForURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2;
// IMP 0x1005486d0 | @56@0:8@16Q24@32@?40@?48
- (id)requestImageWithURL:(id)arg0 options:(unsigned long long)arg1 context:(id)arg2 progress:(id /* block */)arg3 completed:(id /* block */)arg4;
// IMP 0x1005488a0 | B32@0:8@16@24
- (BOOL)shouldBlockFailedURLWithURL:(id)arg0 error:(id)arg1;
// IMP 0x100548a14 | @16@0:8
- (id)imageLoaders;
// IMP 0x100548a1c | v24@0:8@16
- (void)setImageLoaders:(id)arg0;
// IMP 0x100548a28 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054828c | @16@0:8
+ (id)sharedManager;
@end
