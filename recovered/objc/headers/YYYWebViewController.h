// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dea8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWebViewController : QMUICommonViewController
// ivar _showTitleFromWeb encoding=B offset=16
// ivar _isFromAppSource encoding=B offset=17
// ivar _urlString encoding=@"NSString" offset=24
// ivar _HTMLString encoding=@"NSString" offset=32
// ivar _getIPAUrlBlock encoding=@? offset=40
// ivar _webView encoding=@"WKWebView" offset=48
// ivar _gobackButton encoding=@"UIBarButtonItem" offset=56
// ivar _closeButton encoding=@"UIBarButtonItem" offset=64
// ivar _progressView encoding=@"UIProgressView" offset=72
// property webView attributes=T@"WKWebView",&,N,V_webView
// property gobackButton attributes=T@"UIBarButtonItem",&,N,V_gobackButton
// property closeButton attributes=T@"UIBarButtonItem",&,N,V_closeButton
// property progressView attributes=T@"UIProgressView",&,N,V_progressView
// property urlString attributes=T@"NSString",&,N,V_urlString
// property HTMLString attributes=T@"NSString",&,N,V_HTMLString
// property showTitleFromWeb attributes=TB,N,V_showTitleFromWeb
// property isFromAppSource attributes=TB,N,V_isFromAppSource
// property getIPAUrlBlock attributes=T@?,C,N,V_getIPAUrlBlock
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1001a5630 | @16@0:8
- (id)init;
// IMP 0x1001a5734 | B16@0:8
- (BOOL)forceEnableInteractivePopGestureRecognizer;
// IMP 0x1001a5754 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001a5bb4 | v16@0:8
- (void)setupNavigationItems;
// IMP 0x1001a5d24 | v16@0:8
- (void)bookmarkHandle;
// IMP 0x1001a694c | v16@0:8
- (void)didReceiveMemoryWarning;
// IMP 0x1001a69bc | v16@0:8
- (void)dealloc;
// IMP 0x1001a6d88 | B16@0:8
- (BOOL)prefersHomeIndicatorAutoHidden;
// IMP 0x1001a6d9c | v40@0:8@16@24@32
- (void)webView:(id)arg0 didFailProvisionalNavigation:(id)arg1 withError:(id)arg2;
// IMP 0x1001a71cc | v32@0:8@16@24
- (void)webView:(id)arg0 didFinishNavigation:(id)arg1;
// IMP 0x1001a722c | v24@0:8@16
- (void)postGetUrl:(id)arg0;
// IMP 0x1001a76b0 | v40@0:8@16@24@?32
- (void)webView:(id)arg0 decidePolicyForNavigationAction:(id)arg1 decisionHandler:(id /* block */)arg2;
// IMP 0x1001a970c | v40@0:8@16@24@?32
- (void)webView:(id)arg0 decidePolicyForNavigationResponse:(id)arg1 decisionHandler:(id /* block */)arg2;
// IMP 0x1001aa044 | @48@0:8@16@24@32@40
- (id)webView:(id)arg0 createWebViewWithConfiguration:(id)arg1 forNavigationAction:(id)arg2 windowFeatures:(id)arg3;
// IMP 0x1001aa224 | v48@0:8@16@24@32@?40
- (void)webView:(id)arg0 runJavaScriptAlertPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1001aa6b8 | v48@0:8@16@24@32@?40
- (void)webView:(id)arg0 runJavaScriptConfirmPanelWithMessage:(id)arg1 initiatedByFrame:(id)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1001aac0c | v56@0:8@16@24@32@40@?48
- (void)webView:(id)arg0 runJavaScriptTextInputPanelWithPrompt:(id)arg1 defaultText:(id)arg2 initiatedByFrame:(id)arg3 completionHandler:(id /* block */)arg4;
// IMP 0x1001ab2d8 | v16@0:8
- (void)webViewLoadData;
// IMP 0x1001abc58 | v16@0:8
- (void)updateTitle;
// IMP 0x1001abd40 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1001ac5f0 | v16@0:8
- (void)leftBarPressedHandle;
// IMP 0x1001ac914 | v16@0:8
- (void)closeButtonHandle;
// IMP 0x1001aca78 | v32@0:8@16@?24
- (void)downLoadWithUrlStr:(id)arg0 callBack:(id /* block */)arg1;
// IMP 0x1001ad4bc | @16@0:8
- (id)gobackButton;
// IMP 0x1001ad5a0 | @16@0:8
- (id)closeButton;
// IMP 0x1001ad6c4 | @16@0:8
- (id)progressView;
// IMP 0x1001ad990 | @16@0:8
- (id)webView;
// IMP 0x1001aef90 | @16@0:8
- (id)urlString;
// IMP 0x1001aefb8 | v24@0:8@16
- (void)setUrlString:(id)arg0;
// IMP 0x1001aefd8 | @16@0:8
- (id)HTMLString;
// IMP 0x1001af00c | v24@0:8@16
- (void)setHTMLString:(id)arg0;
// IMP 0x1001af044 | B16@0:8
- (BOOL)showTitleFromWeb;
// IMP 0x1001af074 | v20@0:8B16
- (void)setShowTitleFromWeb:(BOOL)arg0;
// IMP 0x1001af0ac | B16@0:8
- (BOOL)isFromAppSource;
// IMP 0x1001af0dc | v20@0:8B16
- (void)setIsFromAppSource:(BOOL)arg0;
// IMP 0x1001af0f8 | @?16@0:8
- (id /* block */)getIPAUrlBlock;
// IMP 0x1001af12c | v24@0:8@?16
- (void)setGetIPAUrlBlock:(id /* block */)arg0;
// IMP 0x1001af1ac | v24@0:8@16
- (void)setWebView:(id)arg0;
// IMP 0x1001af23c | v24@0:8@16
- (void)setGobackButton:(id)arg0;
// IMP 0x1001af2e0 | v24@0:8@16
- (void)setCloseButton:(id)arg0;
// IMP 0x1001af300 | v24@0:8@16
- (void)setProgressView:(id)arg0;
// IMP 0x1001af358 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001a4b30 | @16@0:8
+ (id)viewController;
// IMP 0x1001a4bc4 | @24@0:8@16
+ (id)viewControllerWithParams:(id)arg0;
@end
