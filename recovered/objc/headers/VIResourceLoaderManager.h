// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b718
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIResourceLoaderManager : NSObject
// ivar _delegate encoding=@"<VIResourceLoaderManagerDelegate>" offset=8
// ivar _loaders encoding=@"NSMutableDictionary" offset=16
// property loaders attributes=T@"NSMutableDictionary",&,N,V_loaders
// property delegate attributes=T@"<VIResourceLoaderManagerDelegate>",W,N,V_delegate
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100035e58 | @24@0:8@16
- (id)playerItemWithURL:(id)arg0;
// IMP 0x1000348c4 | @16@0:8
- (id)init;
// IMP 0x1000349ec | v16@0:8
- (void)cleanCache;
// IMP 0x100034a80 | v16@0:8
- (void)cancelLoaders;
// IMP 0x100034b88 | B32@0:8@16@24
- (BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1;
// IMP 0x1000351e8 | v32@0:8@16@24
- (void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1;
// IMP 0x1000352f4 | v32@0:8@16@24
- (void)resourceLoader:(id)arg0 didFailWithError:(id)arg1;
// IMP 0x100035498 | @24@0:8@16
- (id)keyForResourceLoaderWithURL:(id)arg0;
// IMP 0x1000357a0 | @24@0:8@16
- (id)loaderForRequest:(id)arg0;
// IMP 0x100035858 | v16@0:8
- (void)dealloc;
// IMP 0x1000358e0 | @16@0:8
- (id)delegate;
// IMP 0x100035910 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100035978 | @16@0:8
- (id)loaders;
// IMP 0x100035998 | v24@0:8@16
- (void)setLoaders:(id)arg0;
// IMP 0x1000359f8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100035a54 | @24@0:8@16
+ (id)assetURLWithURL:(id)arg0;
@end
