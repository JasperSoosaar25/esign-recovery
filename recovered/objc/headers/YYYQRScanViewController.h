// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81580
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYQRScanViewController : QMUICommonViewController
// ivar _isGoToWebVC encoding=B offset=16
// ivar _output encoding=@"AVCaptureMetadataOutput" offset=24
// ivar _session encoding=@"AVCaptureSession" offset=32
// ivar _previewLayer encoding=@"AVCaptureVideoPreviewLayer" offset=40
// ivar _contentView encoding=@"UIView" offset=48
// property output attributes=T@"AVCaptureMetadataOutput",&,N,V_output
// property session attributes=T@"AVCaptureSession",&,N,V_session
// property previewLayer attributes=T@"AVCaptureVideoPreviewLayer",&,N,V_previewLayer
// property isGoToWebVC attributes=TB,N,V_isGoToWebVC
// property contentView attributes=T@"UIView",&,N,V_contentView
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100386e04 | v24@0:8@?16
- (void)judgeIsHaveVideoAuthority:(id /* block */)arg0;
// IMP 0x100387220 | v16@0:8
- (void)viewDidLoad;
// IMP 0x100387b34 | v16@0:8
- (void)viewDidLayoutSubviews;
// IMP 0x100388070 | v16@0:8
- (void)gotoSetting;
// IMP 0x10038818c | v20@0:8B16
- (void)viewDidAppear:(BOOL)arg0;
// IMP 0x100388364 | v20@0:8B16
- (void)viewDidDisappear:(BOOL)arg0;
// IMP 0x100388618 | v16@0:8
- (void)gotoPhotoViewController;
// IMP 0x100388c14 | v40@0:8@16@24@32
- (void)captureOutput:(id)arg0 didOutputMetadataObjects:(id)arg1 fromConnection:(id)arg2;
// IMP 0x100389918 | v24@0:8@16
- (void)imagePickerControllerDidCancel:(id)arg0;
// IMP 0x1003899a8 | v32@0:8@16@24
- (void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1;
// IMP 0x10038a410 | @16@0:8
- (id)session;
// IMP 0x10038a7e8 | @16@0:8
- (id)previewLayer;
// IMP 0x10038a964 | @16@0:8
- (id)output;
// IMP 0x10038a98c | v24@0:8@16
- (void)setOutput:(id)arg0;
// IMP 0x10038a9b8 | v24@0:8@16
- (void)setSession:(id)arg0;
// IMP 0x10038aa20 | v24@0:8@16
- (void)setPreviewLayer:(id)arg0;
// IMP 0x10038aa84 | B16@0:8
- (BOOL)isGoToWebVC;
// IMP 0x10038aab4 | v20@0:8B16
- (void)setIsGoToWebVC:(BOOL)arg0;
// IMP 0x10038aaec | @16@0:8
- (id)contentView;
// IMP 0x10038ab20 | v24@0:8@16
- (void)setContentView:(id)arg0;
// IMP 0x10038abac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
