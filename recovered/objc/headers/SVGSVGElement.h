// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93ca8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGSVGElement : SVGElement
// ivar useCurrentView encoding=B offset=8
// ivar pixelUnitToMillimeterX encoding=f offset=12
// ivar pixelUnitToMillimeterY encoding=f offset=16
// ivar screenPixelToMillimeterX encoding=f offset=20
// ivar screenPixelToMillimeterY encoding=f offset=24
// ivar currentScale encoding=f offset=28
// ivar x encoding=@"SVGLength" offset=32
// ivar y encoding=@"SVGLength" offset=40
// ivar width encoding=@"SVGLength" offset=48
// ivar height encoding=@"SVGLength" offset=56
// ivar contentScriptType encoding=@"NSString" offset=64
// ivar contentStyleType encoding=@"NSString" offset=72
// ivar currentView encoding=@"SVGViewSpec" offset=80
// ivar currentTranslate encoding=@"SVGPoint" offset=88
// ivar source encoding=@"SVGKSource" offset=96
// ivar preserveAspectRatio encoding=@"SVGAnimatedPreserveAspectRatio" offset=104
// ivar styleSheets encoding=@"StyleSheetList" offset=112
// ivar viewport encoding={?="x"f"y"f"width"f"height"f} offset=120
// ivar _viewBox encoding={?="x"f"y"f"width"f"height"f} offset=136
// ivar _requestedViewport encoding={?="x"f"y"f"width"f"height"f} offset=152
// property requestedViewport attributes=T{?=ffff},N,V_requestedViewport
// property x attributes=T@"SVGLength",&,N,Vx
// property y attributes=T@"SVGLength",&,N,Vy
// property width attributes=T@"SVGLength",&,N,Vwidth
// property height attributes=T@"SVGLength",&,N,Vheight
// property contentScriptType attributes=T@"NSString",&,N,VcontentScriptType
// property contentStyleType attributes=T@"NSString",&,N,VcontentStyleType
// property viewport attributes=T{?=ffff},N,Vviewport
// property pixelUnitToMillimeterX attributes=Tf,N,VpixelUnitToMillimeterX
// property pixelUnitToMillimeterY attributes=Tf,N,VpixelUnitToMillimeterY
// property screenPixelToMillimeterX attributes=Tf,N,VscreenPixelToMillimeterX
// property screenPixelToMillimeterY attributes=Tf,N,VscreenPixelToMillimeterY
// property useCurrentView attributes=TB,N,VuseCurrentView
// property currentView attributes=T@"SVGViewSpec",&,N,VcurrentView
// property currentScale attributes=Tf,N,VcurrentScale
// property currentTranslate attributes=T@"SVGPoint",&,N,VcurrentTranslate
// property source attributes=T@"SVGKSource",&,N,Vsource
// property aspectRatioFromWidthPerHeight attributes=Td,R
// property aspectRatioFromViewBox attributes=Td,R
// property styleSheets attributes=T@"StyleSheetList",&,N,VstyleSheets
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// property viewBox attributes=T{?=ffff},N,V_viewBox
// property preserveAspectRatio attributes=T@"SVGAnimatedPreserveAspectRatio",&,N,VpreserveAspectRatio
// IMP 0x10058784c | v16@0:8
- (void)dealloc;
// IMP 0x100587898 | v16@0:8
- (void)loadDefaults;
// IMP 0x1005878d8 | @32@0:8@16@24
- (id)getOverrideStyle:(id)arg0 pseudoElt:(id)arg1;
// IMP 0x1005878e0 | q24@0:8q16
- (long long)suspendRedraw:(long long)arg0;
// IMP 0x1005878e8 | v24@0:8q16
- (void)unsuspendRedraw:(long long)arg0;
// IMP 0x1005878ec | v16@0:8
- (void)unsuspendRedrawAll;
// IMP 0x1005878f0 | v16@0:8
- (void)forceRedraw;
// IMP 0x1005878f4 | v16@0:8
- (void)pauseAnimations;
// IMP 0x1005878f8 | v16@0:8
- (void)unpauseAnimations;
// IMP 0x1005878fc | B16@0:8
- (BOOL)animationsPaused;
// IMP 0x100587904 | f16@0:8
- (float)getCurrentTime;
// IMP 0x10058790c | v20@0:8f16
- (void)setCurrentTime:(float)arg0;
// IMP 0x100587910 | @40@0:8{?=ffff}16@32
- (id)getIntersectionList:(void * /* aggregate ? */)arg0 referenceElement:(id)arg1;
// IMP 0x100587918 | @40@0:8{?=ffff}16@32
- (id)getEnclosureList:(void * /* aggregate ? */)arg0 referenceElement:(id)arg1;
// IMP 0x100587920 | B40@0:8@16{?=ffff}24
- (BOOL)checkIntersection:(id)arg0 rect:(void * /* aggregate ? */)arg1;
// IMP 0x100587928 | B40@0:8@16{?=ffff}24
- (BOOL)checkEnclosure:(id)arg0 rect:(void * /* aggregate ? */)arg1;
// IMP 0x100587930 | v16@0:8
- (void)deselectAll;
// IMP 0x100587934 | {?=f}16@0:8
- (void * /* aggregate ? */)createSVGNumber;
// IMP 0x10058793c | @16@0:8
- (id)createSVGLength;
// IMP 0x100587948 | @16@0:8
- (id)createSVGAngle;
// IMP 0x100587950 | @16@0:8
- (id)createSVGPoint;
// IMP 0x100587958 | @16@0:8
- (id)createSVGMatrix;
// IMP 0x100587960 | {?=ffff}16@0:8
- (void * /* aggregate ? */)createSVGRect;
// IMP 0x100587974 | @16@0:8
- (id)createSVGTransform;
// IMP 0x10058797c | @24@0:8@16
- (id)createSVGTransformFromMatrix:(id)arg0;
// IMP 0x100587984 | @24@0:8@16
- (id)getElementById:(id)arg0;
// IMP 0x100587994 | v24@0:8@16
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
// IMP 0x100587fe4 | @24@0:8#16
- (id)findFirstElementOfClass:(Class)arg0;
// IMP 0x100588104 | @16@0:8
- (id)newLayer;
// IMP 0x100588164 | v24@0:8@16
- (void)layoutLayer:(id)arg0;
// IMP 0x100588168 | d16@0:8
- (double)aspectRatioFromWidthPerHeight;
// IMP 0x10058820c | d16@0:8
- (double)aspectRatioFromViewBox;
// IMP 0x10058825c | @16@0:8
- (id)x;
// IMP 0x10058826c | v24@0:8@16
- (void)setX:(id)arg0;
// IMP 0x100588280 | @16@0:8
- (id)y;
// IMP 0x100588290 | v24@0:8@16
- (void)setY:(id)arg0;
// IMP 0x1005882a4 | @16@0:8
- (id)width;
// IMP 0x1005882b4 | v24@0:8@16
- (void)setWidth:(id)arg0;
// IMP 0x1005882c8 | @16@0:8
- (id)height;
// IMP 0x1005882d8 | v24@0:8@16
- (void)setHeight:(id)arg0;
// IMP 0x1005882ec | @16@0:8
- (id)contentScriptType;
// IMP 0x1005882fc | v24@0:8@16
- (void)setContentScriptType:(id)arg0;
// IMP 0x100588310 | @16@0:8
- (id)contentStyleType;
// IMP 0x100588320 | v24@0:8@16
- (void)setContentStyleType:(id)arg0;
// IMP 0x100588334 | {?=ffff}16@0:8
- (void * /* aggregate ? */)viewport;
// IMP 0x10058834c | v32@0:8{?=ffff}16
- (void)setViewport:(void * /* aggregate ? */)arg0;
// IMP 0x100588364 | f16@0:8
- (float)pixelUnitToMillimeterX;
// IMP 0x100588374 | v20@0:8f16
- (void)setPixelUnitToMillimeterX:(float)arg0;
// IMP 0x100588384 | f16@0:8
- (float)pixelUnitToMillimeterY;
// IMP 0x100588394 | v20@0:8f16
- (void)setPixelUnitToMillimeterY:(float)arg0;
// IMP 0x1005883a4 | f16@0:8
- (float)screenPixelToMillimeterX;
// IMP 0x1005883b4 | v20@0:8f16
- (void)setScreenPixelToMillimeterX:(float)arg0;
// IMP 0x1005883c4 | f16@0:8
- (float)screenPixelToMillimeterY;
// IMP 0x1005883d4 | v20@0:8f16
- (void)setScreenPixelToMillimeterY:(float)arg0;
// IMP 0x1005883e4 | B16@0:8
- (BOOL)useCurrentView;
// IMP 0x1005883f4 | v20@0:8B16
- (void)setUseCurrentView:(BOOL)arg0;
// IMP 0x100588404 | @16@0:8
- (id)currentView;
// IMP 0x100588414 | v24@0:8@16
- (void)setCurrentView:(id)arg0;
// IMP 0x100588428 | f16@0:8
- (float)currentScale;
// IMP 0x100588438 | v20@0:8f16
- (void)setCurrentScale:(float)arg0;
// IMP 0x100588448 | @16@0:8
- (id)currentTranslate;
// IMP 0x100588458 | v24@0:8@16
- (void)setCurrentTranslate:(id)arg0;
// IMP 0x10058846c | @16@0:8
- (id)source;
// IMP 0x10058847c | v24@0:8@16
- (void)setSource:(id)arg0;
// IMP 0x100588490 | {?=ffff}16@0:8
- (void * /* aggregate ? */)viewBox;
// IMP 0x1005884a8 | v32@0:8{?=ffff}16
- (void)setViewBox:(void * /* aggregate ? */)arg0;
// IMP 0x1005884c0 | @16@0:8
- (id)preserveAspectRatio;
// IMP 0x1005884d0 | v24@0:8@16
- (void)setPreserveAspectRatio:(id)arg0;
// IMP 0x1005884e4 | @16@0:8
- (id)styleSheets;
// IMP 0x1005884f4 | v24@0:8@16
- (void)setStyleSheets:(id)arg0;
// IMP 0x100588508 | {?=ffff}16@0:8
- (void * /* aggregate ? */)requestedViewport;
// IMP 0x100588520 | v32@0:8{?=ffff}16
- (void)setRequestedViewport:(void * /* aggregate ? */)arg0;
// IMP 0x100588538 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
