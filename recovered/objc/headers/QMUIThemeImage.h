// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8e540
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIThemeImage : UIImage
// ivar _name encoding=@"NSString" offset=8
// ivar _managerName encoding=@"NSObject<NSCopying>" offset=16
// ivar _themeProvider encoding=@? offset=24
// ivar _cachedRawImages encoding=@"QMUIThemeImageCache" offset=32
// property cachedRawImages attributes=T@"QMUIThemeImageCache",&,N,V_cachedRawImages
// property name attributes=T@"NSString",C,N,V_name
// property managerName attributes=T@"NSObject<NSCopying>",C,N,V_managerName
// property themeProvider attributes=T@?,C,N,V_themeProvider
// property qmui_name attributes=T@"NSString",R,C,N
// property qmui_rawImage attributes=T@"UIImage",R,N
// property qmui_isDynamicImage attributes=TB,R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1004f104c | v16@0:8
- (void)dealloc;
// IMP 0x1004f10a0 | @24@0:8:16
- (id)forwardingTargetForSelector:(SEL)arg0;
// IMP 0x1004f1390 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1004f1470 | @16@0:8
- (id)description;
// IMP 0x1004f15b4 | @16@0:8
- (id)init;
// IMP 0x1004f160c | B24@0:8:16
- (BOOL)respondsToSelector:(SEL)arg0;
// IMP 0x1004f1688 | B24@0:8#16
- (BOOL)isKindOfClass:(Class)arg0;
// IMP 0x1004f16f0 | B24@0:8#16
- (BOOL)isMemberOfClass:(Class)arg0;
// IMP 0x1004f1758 | B24@0:8@16
- (BOOL)conformsToProtocol:(id)arg0;
// IMP 0x1004f17bc | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1004f17ec | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1004f17f4 | {CGSize=dd}16@0:8
- (struct CGSize)size;
// IMP 0x1004f1840 | ^{CGImage=}16@0:8
- (struct CGImage *)CGImage;
// IMP 0x1004f1880 | @16@0:8
- (id)CIImage;
// IMP 0x1004f18c4 | q16@0:8
- (long long)imageOrientation;
// IMP 0x1004f1900 | d16@0:8
- (double)scale;
// IMP 0x1004f1944 | @16@0:8
- (id)images;
// IMP 0x1004f1988 | d16@0:8
- (double)duration;
// IMP 0x1004f19cc | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)alignmentRectInsets;
// IMP 0x1004f1a30 | v32@0:8{CGPoint=dd}16
- (void)drawAtPoint:(struct CGPoint)arg0;
// IMP 0x1004f1a78 | v44@0:8{CGPoint=dd}16i32d36
- (void)drawAtPoint:(struct CGPoint)arg0 blendMode:(int)arg1 alpha:(double)arg2;
// IMP 0x1004f1ad8 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawInRect:(struct CGRect)arg0;
// IMP 0x1004f1b38 | v60@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16i48d52
- (void)drawInRect:(struct CGRect)arg0 blendMode:(int)arg1 alpha:(double)arg2;
// IMP 0x1004f1bb0 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawAsPatternInRect:(struct CGRect)arg0;
// IMP 0x1004f1c10 | @48@0:8{UIEdgeInsets=dddd}16
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004f1cd0 | @56@0:8{UIEdgeInsets=dddd}16q48
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets)arg0 resizingMode:(long long)arg1;
// IMP 0x1004f1d98 | {UIEdgeInsets=dddd}16@0:8
- (struct UIEdgeInsets)capInsets;
// IMP 0x1004f1dfc | q16@0:8
- (long long)resizingMode;
// IMP 0x1004f1e38 | @48@0:8{UIEdgeInsets=dddd}16
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets)arg0;
// IMP 0x1004f1eac | @24@0:8q16
- (id)imageWithRenderingMode:(long long)arg0;
// IMP 0x1004f1ef8 | q16@0:8
- (long long)renderingMode;
// IMP 0x1004f1f34 | @16@0:8
- (id)imageRendererFormat;
// IMP 0x1004f1f78 | @16@0:8
- (id)traitCollection;
// IMP 0x1004f1fbc | @16@0:8
- (id)imageAsset;
// IMP 0x1004f2000 | @16@0:8
- (id)imageFlippedForRightToLeftLayoutDirection;
// IMP 0x1004f2044 | B16@0:8
- (BOOL)flipsForRightToLeftLayoutDirection;
// IMP 0x1004f2080 | @16@0:8
- (id)imageWithHorizontallyFlippedOrientation;
// IMP 0x1004f20c4 | B16@0:8
- (BOOL)isSymbolImage;
// IMP 0x1004f2100 | d16@0:8
- (double)baselineOffsetFromBottom;
// IMP 0x1004f2144 | B16@0:8
- (BOOL)hasBaseline;
// IMP 0x1004f2180 | @24@0:8d16
- (id)imageWithBaselineOffsetFromBottom:(double)arg0;
// IMP 0x1004f21d4 | @16@0:8
- (id)imageWithoutBaseline;
// IMP 0x1004f2218 | @16@0:8
- (id)configuration;
// IMP 0x1004f225c | @24@0:8@16
- (id)imageWithConfiguration:(id)arg0;
// IMP 0x1004f22c8 | @16@0:8
- (id)symbolConfiguration;
// IMP 0x1004f230c | @24@0:8@16
- (id)imageByApplyingSymbolConfiguration:(id)arg0;
// IMP 0x1004f2378 | @16@0:8
- (id)qmui_name;
// IMP 0x1004f237c | @16@0:8
- (id)qmui_rawImage;
// IMP 0x1004f25e8 | B16@0:8
- (BOOL)qmui_isDynamicImage;
// IMP 0x1004f25f0 | @24@0:8@16
- (id)imageWithTintColor:(id)arg0;
// IMP 0x1004f26ec | @32@0:8@16q24
- (id)imageWithTintColor:(id)arg0 renderingMode:(long long)arg1;
// IMP 0x1004f27ec | @24@0:8@16
- (id)qmui_imageWithTintColor:(id)arg0;
// IMP 0x1004f28e8 | B16@0:8
- (BOOL)qmui_shouldUseSystemIMP;
// IMP 0x1004f28f0 | @16@0:8
- (id)name;
// IMP 0x1004f2900 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1004f290c | @16@0:8
- (id)managerName;
// IMP 0x1004f291c | v24@0:8@16
- (void)setManagerName:(id)arg0;
// IMP 0x1004f2928 | @?16@0:8
- (id /* block */)themeProvider;
// IMP 0x1004f2938 | v24@0:8@?16
- (void)setThemeProvider:(id /* block */)arg0;
// IMP 0x1004f2944 | @16@0:8
- (id)cachedRawImages;
// IMP 0x1004f2954 | v24@0:8@16
- (void)setCachedRawImages:(id)arg0;
// IMP 0x1004f2968 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004f1244 | v16@0:8
+ (void)initialize;
@end
