// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e2b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYWiFiViewController : QMUICommonTableViewController
// ivar _ipAddress encoding=@"NSString" offset=16
// ivar _bridgeAddress encoding=@"NSString" offset=24
// ivar _port encoding=Q offset=32
// ivar _qrCodeView encoding=@"YYYWiFiQRCodeView" offset=40
// property ipAddress attributes=T@"NSString",C,N,V_ipAddress
// property bridgeAddress attributes=T@"NSString",C,N,V_bridgeAddress
// property port attributes=TQ,N,V_port
// property qrCodeView attributes=T@"YYYWiFiQRCodeView",&,N,V_qrCodeView
// IMP 0x1001dac44 | v16@0:8
- (void)viewDidLoad;
// IMP 0x1001db0ac | v16@0:8
- (void)initSubviews;
// IMP 0x1001dcae4 | q24@0:8@16
- (long long)numberOfSectionsInTableView:(id)arg0;
// IMP 0x1001dcb64 | q32@0:8@16q24
- (long long)tableView:(id)arg0 numberOfRowsInSection:(long long)arg1;
// IMP 0x1001dcb90 | @32@0:8@16@24
- (id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1;
// IMP 0x1001dd5c0 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForHeaderInSection:(long long)arg1;
// IMP 0x1001dd9e0 | @32@0:8@16q24
- (id)tableView:(id)arg0 titleForFooterInSection:(long long)arg1;
// IMP 0x1001de314 | v32@0:8@16@24
- (void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1;
// IMP 0x1001de914 | @16@0:8
- (id)ipAddress;
// IMP 0x1001de930 | v24@0:8@16
- (void)setIpAddress:(id)arg0;
// IMP 0x1001de9bc | @16@0:8
- (id)bridgeAddress;
// IMP 0x1001de9e4 | v24@0:8@16
- (void)setBridgeAddress:(id)arg0;
// IMP 0x1001dea58 | Q16@0:8
- (unsigned long long)port;
// IMP 0x1001dea8c | v24@0:8Q16
- (void)setPort:(unsigned long long)arg0;
// IMP 0x1001dead0 | @16@0:8
- (id)qrCodeView;
// IMP 0x1001deaf8 | v24@0:8@16
- (void)setQrCodeView:(id)arg0;
// IMP 0x1001deb70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
