// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8fb00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageAssetManager : NSObject
// ivar _lock encoding={os_unfair_lock_s="_os_unfair_lock_opaque"I} offset=8
// ivar _imageTable encoding=@"NSMapTable" offset=16
// property imageTable attributes=T@"NSMapTable",&,N,V_imageTable
// IMP 0x10053b354 | @16@0:8
- (id)init;
// IMP 0x10053b40c | v16@0:8
- (void)dealloc;
// IMP 0x10053b484 | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x10053b4d0 | @40@0:8@16@24^d32
- (id)getPathForName:(id)arg0 bundle:(id)arg1 preferredScale:(double *)arg2;
// IMP 0x10053b848 | @24@0:8@16
- (id)imageForName:(id)arg0;
// IMP 0x10053b8c8 | v32@0:8@16@24
- (void)storeImage:(id)arg0 forName:(id)arg1;
// IMP 0x10053b950 | @16@0:8
- (id)imageTable;
// IMP 0x10053b958 | v24@0:8@16
- (void)setImageTable:(id)arg0;
// IMP 0x10053b964 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10053b2e4 | @16@0:8
+ (id)sharedAssetManager;
@end
