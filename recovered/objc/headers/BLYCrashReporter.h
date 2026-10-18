// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95d20
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashReporter : NSObject
// ivar _crashIncident encoding=B offset=8
// ivar _delegate encoding=@"<BLYCrashReporterDelegate>" offset=16
// ivar _callStackSymbolExcludeFilter encoding=@"NSArray" offset=24
// property crashIncident attributes=TB,N,GhasCrashIncident,V_crashIncident
// property delegate attributes=T@"<BLYCrashReporterDelegate>",&,N,V_delegate
// property callStackSymbolExcludeFilter attributes=T@"NSArray",C,N,V_callStackSymbolExcludeFilter
// IMP 0x1006528ac | @16@0:8
- (id)init;
// IMP 0x1006528e0 | v20@0:8B16
- (void)setCrashIncident:(BOOL)arg0;
// IMP 0x100652958 | B24@0:8^@16
- (BOOL)enableCrashReporter:(id *)arg0;
// IMP 0x100652984 | B24@0:8^@16
- (BOOL)disableCrashReporter:(id *)arg0;
// IMP 0x1006529b0 | v16@0:8
- (void)sendLiveCrashReport;
// IMP 0x100652a20 | v16@0:8
- (void)sendPendingCrashReport;
// IMP 0x100652a24 | B16@0:8
- (BOOL)hasPendingCrashReport;
// IMP 0x100652a2c | B16@0:8
- (BOOL)detectiveCrashReporterRunning;
// IMP 0x100652a54 | @24@0:8@16
- (id)accidentShouldIgnoredAccordingCallStackSymbols:(id)arg0;
// IMP 0x100652d08 | v32@0:8@16@24
- (void)collectImageArray:(id)arg0 :(id)arg1;
// IMP 0x100653010 | v36@0:8@16I24@28
- (void)collectStackFrames:(id)arg0 :(unsigned int)arg1 :(id)arg2;
// IMP 0x100653664 | @16@0:8
- (id)mainThreadCallStackReturnAddresses;
// IMP 0x10065388c | @32@0:8r*16@24
- (id)cstringToNSString:(char *)arg0 defaultValue:(id)arg1;
// IMP 0x10065390c | @16@0:8
- (id)mainThreadCallStackSymbols;
// IMP 0x100653bdc | @16@0:8
- (id)allThreadCallStackSymbols;
// IMP 0x1006540d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006540a0 | B16@0:8
- (BOOL)hasCrashIncident;
// IMP 0x1006540a8 | @16@0:8
- (id)delegate;
// IMP 0x1006540b0 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1006540bc | @16@0:8
- (id)callStackSymbolExcludeFilter;
// IMP 0x1006540c8 | v24@0:8@16
- (void)setCallStackSymbolExcludeFilter:(id)arg0;
// IMP 0x10065282c | @16@0:8
+ (id)sharedReporter;
@end
