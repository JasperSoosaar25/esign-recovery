// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93708
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKPointsAndPathsParser : NSObject
// IMP 0x10058104c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}16@0:8
+ (struct SVGCurve)startingCurve;
// IMP 0x10058106c | v24@0:8@16
+ (void)readWhitespace:(id)arg0;
// IMP 0x1005810dc | v24@0:8@16
+ (void)readCommaAndWhitespace:(id)arg0;
// IMP 0x100581140 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readMovetoDrawtoCommandGroups:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581230 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readMovetoDrawto:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x1005812b8 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readMoveto:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x10058139c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readMovetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581474 | {CGPoint=dd}24@0:8@16
+ (struct CGPoint)readCoordinatePair:(id)arg0;
// IMP 0x1005814ec | B24@0:8@16
+ (BOOL)readFlag:(id)arg0;
// IMP 0x100581550 | v32@0:8@16^d24
+ (void)readCoordinate:(id)arg0 intoFloat:(double *)arg1;
// IMP 0x10058155c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readLinetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581640 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readLinetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x10058173c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readQuadraticCurvetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581820 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readQuadraticCurvetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x1005818f8 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48@0:8@16^{CGPath=}24{CGPoint=dd}32
+ (struct SVGCurve)readQuadraticCurvetoArgument:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2;
// IMP 0x1005819cc | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}104@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48
+ (struct SVGCurve)readSmoothQuadraticCurvetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3;
// IMP 0x100581ad0 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}104@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48
+ (struct SVGCurve)readSmoothQuadraticCurvetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3;
// IMP 0x100581bc4 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}104@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48
+ (struct SVGCurve)readSmoothQuadraticCurvetoArgument:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3;
// IMP 0x100581cac | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readCurvetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581d90 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readCurvetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100581e68 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48@0:8@16^{CGPath=}24{CGPoint=dd}32
+ (struct SVGCurve)readCurvetoArgument:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2;
// IMP 0x100581f68 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}108@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48B104
+ (struct SVGCurve)readSmoothCurvetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3 isRelative:(BOOL)arg4;
// IMP 0x10058207c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}108@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48B104
+ (struct SVGCurve)readSmoothCurvetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3 isRelative:(BOOL)arg4;
// IMP 0x100582184 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}104@0:8@16^{CGPath=}24{CGPoint=dd}32{SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48
+ (struct SVGCurve)readSmoothCurvetoArgument:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 withPrevCurve:(struct SVGCurve)arg3;
// IMP 0x1005822a0 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readVerticalLinetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x1005823b8 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readVerticalLinetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x10058249c | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readHorizontalLinetoArgumentSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x1005825c0 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readHorizontalLinetoCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x1005826a4 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}48@0:8@16^{CGPath=}24{CGPoint=dd}32
+ (struct SVGCurve)readCloseCommand:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2;
// IMP 0x100582770 | {SVGCurve=Q{CGPoint=dd}{CGPoint=dd}{CGPoint=dd}}52@0:8@16^{CGPath=}24{CGPoint=dd}32B48
+ (struct SVGCurve)readEllipticalArcArguments:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2 isRelative:(BOOL)arg3;
// IMP 0x100582884 | {CGPoint=dd}48@0:8@16^{CGPath=}24{CGPoint=dd}32
+ (struct CGPoint)readEllipticalArcArgumentsSequence:(id)arg0 path:(struct CGPath *)arg1 relativeTo:(struct CGPoint)arg2;
@end
