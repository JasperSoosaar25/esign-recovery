// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dbb0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder
// ivar _window encoding=@"UIWindow" offset=8
// property window attributes=T@"UIWindow",&,N,V_window
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100175240 | v16@0:8
- (void)registerNotification;
// IMP 0x100175414 | v40@0:8@16@24@?32
- (void)userNotificationCenter:(id)arg0 willPresentNotification:(id)arg1 withCompletionHandler:(id /* block */)arg2;
// IMP 0x100175510 | v40@0:8@16@24@?32
- (void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
// IMP 0x1001757f0 | v16@0:8
- (void)addNotification;
// IMP 0x10017624c | v16@0:8
- (void)removeNotifiation;
// IMP 0x100170bfc | B32@0:8@16@24
- (BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1;
// IMP 0x100171154 | B40@0:8@16@24@32
- (BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2;
// IMP 0x100173910 | v24@0:8@16
- (void)applicationDidBecomeActive:(id)arg0;
// IMP 0x100173e38 | v24@0:8@16
- (void)applicationDidEnterBackground:(id)arg0;
// IMP 0x1001745a8 | v16@0:8
- (void)checkImportFiles;
// IMP 0x100175180 | @16@0:8
- (id)window;
// IMP 0x10017519c | v24@0:8@16
- (void)setWindow:(id)arg0;
// IMP 0x1001751e0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
