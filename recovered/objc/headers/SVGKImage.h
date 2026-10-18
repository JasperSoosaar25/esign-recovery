// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93258
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKImage : NSObject
// ivar cameFromGlobalCache encoding=B offset=8
// ivar DOMDocument encoding=@"SVGDocument" offset=16
// ivar DOMTree encoding=@"SVGSVGElement" offset=24
// ivar CALayerTree encoding=@"CALayer" offset=32
// ivar _scale encoding=d offset=40
// ivar source encoding=@"SVGKSource" offset=48
// ivar parseErrorsAndWarnings encoding=@"SVGKParseResult" offset=56
// ivar _nameUsedToInstantiate encoding=@"NSString" offset=64
// ivar _internalSizeThatWasSetExplicitlyByUser encoding={CGSize="width"d"height"d} offset=72
// property internalSizeThatWasSetExplicitlyByUser attributes=T{CGSize=dd},N,V_internalSizeThatWasSetExplicitlyByUser
// property parseErrorsAndWarnings attributes=T@"SVGKParseResult",&,N,VparseErrorsAndWarnings
// property source attributes=T@"SVGKSource",&,N,Vsource
// property DOMDocument attributes=T@"SVGDocument",&,N,VDOMDocument
// property DOMTree attributes=T@"SVGSVGElement",&,N,VDOMTree
// property CALayerTree attributes=T@"CALayer",&,N,VCALayerTree
// property nameUsedToInstantiate attributes=T@"NSString",&,N,V_nameUsedToInstantiate
// property UIImage attributes=T@"UIImage",R,W,N
// property size attributes=T{CGSize=dd},N
// property scale attributes=Td,N,V_scale
// IMP 0x10057b84c | ^{CGContext=}16@0:8
- (struct CGContext *)newCGContextAutosizedToFit;
// IMP 0x10057b8d8 | v24@0:8^{CGContext=}16
- (void)renderInContext:(struct CGContext *)arg0;
// IMP 0x10057b910 | v44@0:8^{CGContext=}16B24d28i36B40
- (void)renderToContext:(struct CGContext *)arg0 antiAliased:(BOOL)arg1 curveFlatnessFactor:(double)arg2 interpolationQuality:(int)arg3 flipYaxis:(BOOL)arg4;
// IMP 0x100579f14 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x100579f1c | @32@0:8@16@24
- (id)initWithParsedSVG:(id)arg0 fromSource:(id)arg1;
// IMP 0x10057a0e8 | @24@0:8@16
- (id)initWithSource:(id)arg0;
// IMP 0x10057a160 | @24@0:8@16
- (id)initWithContentsOfFile:(id)arg0;
// IMP 0x10057a1b0 | @24@0:8@16
- (id)initWithContentsOfURL:(id)arg0;
// IMP 0x10057a200 | @24@0:8@16
- (id)initWithData:(id)arg0;
// IMP 0x10057a2c0 | v16@0:8
- (void)dealloc;
// IMP 0x10057a438 | B16@0:8
- (BOOL)hasSize;
// IMP 0x10057a4d8 | {CGSize=dd}16@0:8
- (struct CGSize)size;
// IMP 0x10057a62c | v32@0:8{CGSize=dd}16
- (void)setSize:(struct CGSize)arg0;
// IMP 0x10057a748 | v24@0:8d16
- (void)setScale:(double)arg0;
// IMP 0x10057a754 | @16@0:8
- (id)UIImage;
// IMP 0x10057a770 | v32@0:8{CGPoint=dd}16
- (void)drawAtPoint:(struct CGPoint)arg0;
// IMP 0x10057a774 | v44@0:8{CGPoint=dd}16i32d36
- (void)drawAtPoint:(struct CGPoint)arg0 blendMode:(int)arg1 alpha:(double)arg2;
// IMP 0x10057a778 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawInRect:(struct CGRect)arg0;
// IMP 0x10057a77c | v60@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16i48d52
- (void)drawInRect:(struct CGRect)arg0 blendMode:(int)arg1 alpha:(double)arg2;
// IMP 0x10057a780 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawAsPatternInRect:(struct CGRect)arg0;
// IMP 0x10057a79c | @24@0:8@16
- (id)layerWithIdentifier:(id)arg0;
// IMP 0x10057a810 | @32@0:8@16@24
- (id)layerWithIdentifier:(id)arg0 layer:(id)arg1;
// IMP 0x10057a9b0 | @24@0:8@16
- (id)newCopyPositionedAbsoluteLayerWithIdentifier:(id)arg0;
// IMP 0x10057aa80 | @24@0:8@16
- (id)newCopyPositionedAbsoluteOfLayer:(id)arg0;
// IMP 0x10057aa88 | @28@0:8@16B24
- (id)newCopyPositionedAbsoluteOfLayer:(id)arg0 withSubLayers:(BOOL)arg1;
// IMP 0x10057ac84 | @24@0:8@16
- (id)newLayerWithElement:(id)arg0;
// IMP 0x10057b20c | @16@0:8
- (id)newCALayerTree;
// IMP 0x10057b350 | @16@0:8
- (id)CALayerTree;
// IMP 0x10057b3c0 | v40@0:8@16@24@32
- (void)addSVGLayerTree:(id)arg0 withIdentifier:(id)arg1 toDictionary:(id)arg2;
// IMP 0x10057b568 | @16@0:8
- (id)dictionaryOfLayers;
// IMP 0x10057b614 | v32@0:8{CGSize=dd}16
- (void)scaleToFitInside:(struct CGSize)arg0;
// IMP 0x10057b6bc | B24@0:8@16
- (BOOL)isElementVisible:(id)arg0;
// IMP 0x10057b764 | @16@0:8
- (id)DOMDocument;
// IMP 0x10057b76c | v24@0:8@16
- (void)setDOMDocument:(id)arg0;
// IMP 0x10057b778 | @16@0:8
- (id)DOMTree;
// IMP 0x10057b780 | v24@0:8@16
- (void)setDOMTree:(id)arg0;
// IMP 0x10057b78c | v24@0:8@16
- (void)setCALayerTree:(id)arg0;
// IMP 0x10057b798 | d16@0:8
- (double)scale;
// IMP 0x10057b7a0 | @16@0:8
- (id)source;
// IMP 0x10057b7a8 | v24@0:8@16
- (void)setSource:(id)arg0;
// IMP 0x10057b7b4 | @16@0:8
- (id)parseErrorsAndWarnings;
// IMP 0x10057b7bc | v24@0:8@16
- (void)setParseErrorsAndWarnings:(id)arg0;
// IMP 0x10057b7c8 | @16@0:8
- (id)nameUsedToInstantiate;
// IMP 0x10057b7d0 | v24@0:8@16
- (void)setNameUsedToInstantiate:(id)arg0;
// IMP 0x10057b7dc | {CGSize=dd}16@0:8
- (struct CGSize)internalSizeThatWasSetExplicitlyByUser;
// IMP 0x10057b7e4 | v32@0:8{CGSize=dd}16
- (void)setInternalSizeThatWasSetExplicitlyByUser:(struct CGSize)arg0;
// IMP 0x10057b7ec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100578f78 | v16@0:8
+ (void)initialize;
// IMP 0x100579038 | v16@0:8
+ (void)clearCache;
// IMP 0x1005790dc | v24@0:8@16
+ (void)didReceiveMemoryWarningOrBackgroundNotification:(id)arg0;
// IMP 0x1005790e0 | @24@0:8@16
+ (id)imageNamed:(id)arg0;
// IMP 0x100579164 | @32@0:8@16@24
+ (id)imageNamed:(id)arg0 withCacheKey:(id)arg1;
// IMP 0x1005791fc | @32@0:8@16@24
+ (id)imageNamed:(id)arg0 inBundle:(id)arg1;
// IMP 0x100579208 | @40@0:8@16@24@32
+ (id)imageNamed:(id)arg0 inBundle:(id)arg1 withCacheKey:(id)arg2;
// IMP 0x1005793e4 | @32@0:8@16@?24
+ (id)imageAsynchronouslyNamed:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x100579468 | @32@0:8@16@?24
+ (id)imageWithSource:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x1005797b0 | @24@0:8@16
+ (id)imageWithContentsOfURL:(id)arg0;
// IMP 0x100579840 | @24@0:8@16
+ (id)imageWithContentsOfFile:(id)arg0;
// IMP 0x1005798d0 | @32@0:8@16@?24
+ (id)imageParserWithContentsOfFileAsynchronously:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x100579954 | @32@0:8@16@?24
+ (id)imageWithContentsOfFileAsynchronously:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x100579b24 | @24@0:8@16
+ (id)imageWithSource:(id)arg0;
// IMP 0x100579bac | @24@0:8@16
+ (id)imageWithData:(id)arg0;
// IMP 0x100579c34 | @32@0:8@16@?24
+ (id)imageParserWithDataAsynchronously:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x100579d18 | @32@0:8@16@?24
+ (id)imageWithDataAsynchronously:(id)arg0 onCompletion:(id /* block */)arg1;
// IMP 0x10057a784 | @32@0:8@16d24
+ (id)animatedImageNamed:(id)arg0 duration:(double)arg1;
// IMP 0x10057a78c | @64@0:8@16{UIEdgeInsets=dddd}24d56
+ (id)animatedResizableImageNamed:(id)arg0 capInsets:(struct UIEdgeInsets)arg1 duration:(double)arg2;
// IMP 0x10057a794 | @32@0:8@16d24
+ (id)animatedImageWithImages:(id)arg0 duration:(double)arg1;
@end
