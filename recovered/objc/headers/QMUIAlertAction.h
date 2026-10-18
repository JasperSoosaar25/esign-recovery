// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c87808
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIAlertAction : NSObject
// ivar _enabled encoding=B offset=8
// ivar _button encoding=@"QMUIButton" offset=16
// ivar _title encoding=@"NSString" offset=24
// ivar _style encoding=q offset=32
// ivar _buttonAttributes encoding=@"NSDictionary" offset=40
// ivar _buttonDisabledAttributes encoding=@"NSDictionary" offset=48
// ivar _handler encoding=@? offset=56
// ivar _delegate encoding=@"<QMUIAlertActionDelegate>" offset=64
// property title attributes=T@"NSString",C,N,V_title
// property style attributes=Tq,N,V_style
// property handler attributes=T@?,C,N,V_handler
// property delegate attributes=T@"<QMUIAlertActionDelegate>",W,N,V_delegate
// property button attributes=T@"QMUIButton",R,N,V_button
// property enabled attributes=TB,N,GisEnabled,V_enabled
// property buttonAttributes attributes=T@"NSDictionary",&,N,V_buttonAttributes
// property buttonDisabledAttributes attributes=T@"NSDictionary",&,N,V_buttonDisabledAttributes
// IMP 0x100444904 | @16@0:8
- (id)init;
// IMP 0x100444a08 | v20@0:8B16
- (void)setEnabled:(BOOL)arg0;
// IMP 0x100444a44 | v24@0:8@16
- (void)handleAlertActionEvent:(id)arg0;
// IMP 0x100444ae4 | @16@0:8
- (id)button;
// IMP 0x100444aec | @16@0:8
- (id)title;
// IMP 0x100444af4 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x100444afc | q16@0:8
- (long long)style;
// IMP 0x100444b04 | v24@0:8q16
- (void)setStyle:(long long)arg0;
// IMP 0x100444b0c | B16@0:8
- (BOOL)isEnabled;
// IMP 0x100444b14 | @16@0:8
- (id)buttonAttributes;
// IMP 0x100444b1c | v24@0:8@16
- (void)setButtonAttributes:(id)arg0;
// IMP 0x100444b28 | @16@0:8
- (id)buttonDisabledAttributes;
// IMP 0x100444b30 | v24@0:8@16
- (void)setButtonDisabledAttributes:(id)arg0;
// IMP 0x100444b3c | @?16@0:8
- (id /* block */)handler;
// IMP 0x100444b44 | v24@0:8@?16
- (void)setHandler:(id /* block */)arg0;
// IMP 0x100444b4c | @16@0:8
- (id)delegate;
// IMP 0x100444b64 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x100444b70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10044487c | @40@0:8@16q24@?32
+ (id)actionWithTitle:(id)arg0 style:(long long)arg1 handler:(id /* block */)arg2;
@end
