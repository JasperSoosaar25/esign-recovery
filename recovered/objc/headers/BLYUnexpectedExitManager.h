// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96270
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYUnexpectedExitManager : BLYAbstractModule
// ivar _didLogLowMemoryWarning encoding=B offset=8
// ivar _didChecked encoding=B offset=9
// ivar _didRecored encoding=B offset=10
// property didLogLowMemoryWarning attributes=TB,N,V_didLogLowMemoryWarning
// property didChecked attributes=TB,N,V_didChecked
// property didRecored attributes=TB,N,V_didRecored
// IMP 0x100665744 | B16@0:8
- (BOOL)enableModule;
// IMP 0x10066586c | B16@0:8
- (BOOL)disableModule;
// IMP 0x100665980 | v24@0:8@16
- (void)receivedEventNotification:(id)arg0;
// IMP 0x100665a44 | v20@0:8B16
- (void)reportUnexpectExit:(BOOL)arg0;
// IMP 0x1006661e0 | B16@0:8
- (BOOL)isCausedBySystemReboot;
// IMP 0x100666328 | v16@0:8
- (void)checkUnexpectedExit;
// IMP 0x100666a1c | v16@0:8
- (void)leavingAppSafely;
// IMP 0x100666b18 | v24@0:8@16
- (void)didReceiveMemoryWarning:(id)arg0;
// IMP 0x100666bf0 | B16@0:8
- (BOOL)didLogLowMemoryWarning;
// IMP 0x100666c00 | v20@0:8B16
- (void)setDidLogLowMemoryWarning:(BOOL)arg0;
// IMP 0x100666c10 | B16@0:8
- (BOOL)didChecked;
// IMP 0x100666c20 | v20@0:8B16
- (void)setDidChecked:(BOOL)arg0;
// IMP 0x100666c30 | B16@0:8
- (BOOL)didRecored;
// IMP 0x100666c40 | v20@0:8B16
- (void)setDidRecored:(BOOL)arg0;
// IMP 0x1006656c4 | @16@0:8
+ (id)sharedManager;
// IMP 0x100665974 | @16@0:8
+ (id)constructSelector;
@end
