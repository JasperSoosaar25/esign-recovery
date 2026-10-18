// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92d48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKFastImageView : SVGKImageView
// ivar internalContextPointerBecauseApplesDemandsIt encoding=@"NSString" offset=8
// ivar _disableAutoRedrawAtHighestResolution encoding=B offset=16
// ivar _didRegisterObservers encoding=B offset=17
// ivar _didRegisterInternalRedrawObservers encoding=B offset=18
// ivar _image encoding=@"SVGKImage" offset=24
// ivar _timeIntervalForLastReRenderOfSVGFromMemory encoding=d offset=32
// ivar _startRenderTime encoding=@"NSDate" offset=40
// ivar _endRenderTime encoding=@"NSDate" offset=48
// ivar _tileRatio encoding={CGSize="width"d"height"d} offset=56
// property timeIntervalForLastReRenderOfSVGFromMemory attributes=Td,N,V_timeIntervalForLastReRenderOfSVGFromMemory
// property startRenderTime attributes=T@"NSDate",&,N,V_startRenderTime
// property endRenderTime attributes=T@"NSDate",&,N,V_endRenderTime
// property didRegisterObservers attributes=TB,N,V_didRegisterObservers
// property didRegisterInternalRedrawObservers attributes=TB,N,V_didRegisterInternalRedrawObservers
// property tileRatio attributes=T{CGSize=dd},N,V_tileRatio
// property disableAutoRedrawAtHighestResolution attributes=TB,N,V_disableAutoRedrawAtHighestResolution
// IMP 0x10057836c | @16@0:8
- (id)init;
// IMP 0x100578384 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1005783d8 | @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(struct CGRect)arg0;
// IMP 0x10057842c | @24@0:8@16
- (id)initWithSVGKImage:(id)arg0;
// IMP 0x100578498 | v24@0:8@16
- (void)populateFromImage:(id)arg0;
// IMP 0x1005785a4 | v24@0:8@16
- (void)setImage:(id)arg0;
// IMP 0x1005786d4 | v16@0:8
- (void)addInternalRedrawOnResizeObservers;
// IMP 0x100578770 | v16@0:8
- (void)removeInternalRedrawOnResizeObservers;
// IMP 0x100578804 | v20@0:8B16
- (void)setDisableAutoRedrawAtHighestResolution:(BOOL)arg0;
// IMP 0x100578860 | v16@0:8
- (void)dealloc;
// IMP 0x100578940 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1005789f4 | v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)drawRect:(struct CGRect)arg0;
// IMP 0x100578df0 | @16@0:8
- (id)image;
// IMP 0x100578e00 | {CGSize=dd}16@0:8
- (struct CGSize)tileRatio;
// IMP 0x100578e14 | v32@0:8{CGSize=dd}16
- (void)setTileRatio:(struct CGSize)arg0;
// IMP 0x100578e28 | B16@0:8
- (BOOL)disableAutoRedrawAtHighestResolution;
// IMP 0x100578e38 | d16@0:8
- (double)timeIntervalForLastReRenderOfSVGFromMemory;
// IMP 0x100578e48 | v24@0:8d16
- (void)setTimeIntervalForLastReRenderOfSVGFromMemory:(double)arg0;
// IMP 0x100578e58 | @16@0:8
- (id)startRenderTime;
// IMP 0x100578e68 | v24@0:8@16
- (void)setStartRenderTime:(id)arg0;
// IMP 0x100578e7c | @16@0:8
- (id)endRenderTime;
// IMP 0x100578e8c | v24@0:8@16
- (void)setEndRenderTime:(id)arg0;
// IMP 0x100578ea0 | B16@0:8
- (BOOL)didRegisterObservers;
// IMP 0x100578eb0 | v20@0:8B16
- (void)setDidRegisterObservers:(BOOL)arg0;
// IMP 0x100578ec0 | B16@0:8
- (BOOL)didRegisterInternalRedrawObservers;
// IMP 0x100578ed0 | v20@0:8B16
- (void)setDidRegisterInternalRedrawObservers:(BOOL)arg0;
// IMP 0x100578ee0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
