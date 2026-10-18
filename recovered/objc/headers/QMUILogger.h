// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8a558
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUILogger : NSObject
// ivar _delegate encoding=@"<QMUILoggerDelegate>" offset=8
// ivar _logNameManager encoding=@"QMUILogNameManager" offset=16
// property delegate attributes=T@"<QMUILoggerDelegate>",W,N,V_delegate
// property logNameManager attributes=T@"QMUILogNameManager",&,N,V_logNameManager
// IMP 0x10049aac0 | @16@0:8
- (id)init;
// IMP 0x10049ab30 | v44@0:8r*16i24r*28@36
- (void)printLogWithFile:(char *)arg0 line:(int)arg1 func:(char *)arg2 logItem:(id)arg3;
// IMP 0x10049acb0 | @16@0:8
- (id)delegate;
// IMP 0x10049acc8 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10049acd4 | @16@0:8
- (id)logNameManager;
// IMP 0x10049acdc | v24@0:8@16
- (void)setLogNameManager:(id)arg0;
// IMP 0x10049ace8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10049a9dc | @16@0:8
+ (id)sharedInstance;
// IMP 0x10049aaa4 | @24@0:8^{_NSZone=}16
+ (id)allocWithZone:(struct _NSZone *)arg0;
@end
