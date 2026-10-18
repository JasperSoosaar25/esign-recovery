// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82f30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDTTYLogger : DDAbstractLogger
// ivar _appName encoding=@"NSString" offset=24
// ivar _app encoding=* offset=32
// ivar _appLen encoding=Q offset=40
// ivar _processID encoding=@"NSString" offset=48
// ivar _pid encoding=* offset=56
// ivar _pidLen encoding=Q offset=64
// ivar _colorsEnabled encoding=B offset=72
// ivar _colorProfilesArray encoding=@"NSMutableArray" offset=80
// ivar _colorProfilesDict encoding=@"NSMutableDictionary" offset=88
// ivar _automaticallyAppendNewlineForCustomFormatters encoding=B offset=96
// property colorsEnabled attributes=TB
// property automaticallyAppendNewlineForCustomFormatters attributes=TB,N,V_automaticallyAppendNewlineForCustomFormatters
// property logFormatter attributes=T@"<DDLogFormatter>",&,N
// property loggerQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N
// property loggerName attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100414a28 | @16@0:8
- (id)init;
// IMP 0x100414c98 | @16@0:8
- (id)loggerName;
// IMP 0x100414ca8 | v16@0:8
- (void)loadDefaultColorProfiles;
// IMP 0x100414d64 | B16@0:8
- (BOOL)colorsEnabled;
// IMP 0x100414ec4 | v20@0:8B16
- (void)setColorsEnabled:(BOOL)arg0;
// IMP 0x100415038 | v40@0:8@16@24Q32
- (void)setForegroundColor:(id)arg0 backgroundColor:(id)arg1 forFlag:(unsigned long long)arg2;
// IMP 0x100415040 | v48@0:8@16@24Q32q40
- (void)setForegroundColor:(id)arg0 backgroundColor:(id)arg1 forFlag:(unsigned long long)arg2 context:(long long)arg3;
// IMP 0x100415390 | v40@0:8@16@24@32
- (void)setForegroundColor:(id)arg0 backgroundColor:(id)arg1 forTag:(id)arg2;
// IMP 0x1004155c8 | v24@0:8Q16
- (void)clearColorsForFlag:(unsigned long long)arg0;
// IMP 0x1004155d0 | v32@0:8Q16q24
- (void)clearColorsForFlag:(unsigned long long)arg0 context:(long long)arg1;
// IMP 0x10041587c | v24@0:8@16
- (void)clearColorsForTag:(id)arg0;
// IMP 0x100415a14 | v16@0:8
- (void)clearColorsForAllFlags;
// IMP 0x100415b80 | v16@0:8
- (void)clearColorsForAllTags;
// IMP 0x100415cec | v16@0:8
- (void)clearAllColors;
// IMP 0x100415e6c | v24@0:8@16
- (void)logMessage:(id)arg0;
// IMP 0x1004163fc | B16@0:8
- (BOOL)automaticallyAppendNewlineForCustomFormatters;
// IMP 0x10041640c | v20@0:8B16
- (void)setAutomaticallyAppendNewlineForCustomFormatters:(BOOL)arg0;
// IMP 0x10041641c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004140fc | v16@0:8
+ (void)initializeColors16;
// IMP 0x1004143d8 | v16@0:8
+ (void)initializeColors256;
// IMP 0x100414614 | v48@0:8^d16^d24^d32@40
+ (void)getRed:(double *)arg0 green:(double *)arg1 blue:(double *)arg2 fromColor:(id)arg3;
// IMP 0x100414748 | Q24@0:8@16
+ (unsigned long long)codeIndexForColor:(id)arg0;
// IMP 0x1004148e0 | @16@0:8
+ (id)sharedInstance;
@end
