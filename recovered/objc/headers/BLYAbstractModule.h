// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96180
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYAbstractModule : NSObject
// ivar _enable encoding=B offset=8
// ivar _jobFinished encoding=B offset=9
// property enable attributes=TB,GisEnabled,V_enable
// property jobFinished attributes=TB,N,GisJobFinished,V_jobFinished
// IMP 0x100661374 | @16@0:8
- (id)init;
// IMP 0x1006613b4 | B16@0:8
- (BOOL)isEnabled;
// IMP 0x100661400 | v20@0:8B16
- (void)setEnable:(BOOL)arg0;
// IMP 0x100661448 | v20@0:8B16
- (void)setJobFinished:(BOOL)arg0;
// IMP 0x100661578 | B16@0:8
- (BOOL)enableModule;
// IMP 0x100661580 | B16@0:8
- (BOOL)disableModule;
// IMP 0x100661588 | B16@0:8
- (BOOL)shouldEnable;
// IMP 0x10066159c | @16@0:8
- (id)strategyGetterSelector;
// IMP 0x1006615a4 | @16@0:8
- (id)strategyValueMapKey;
// IMP 0x1006615ac | B16@0:8
- (BOOL)isJobFinished;
// IMP 0x100661590 | @16@0:8
+ (id)constructSelector;
@end
