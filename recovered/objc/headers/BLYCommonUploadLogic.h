// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95c80
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCommonUploadLogic : BLYAbstractLogic
// ivar _isExcuting encoding=B offset=8
// ivar _jceModel encoding=@"BLYJceObjectV2" offset=16
// ivar _requestData encoding=@"NSData" offset=24
// ivar _httpRequest encoding=@"BLYHttpRequest" offset=32
// ivar _responsePakage encoding=@"BLYResponsePkg" offset=40
// property responsePakage attributes=T@"BLYResponsePkg",&,N,V_responsePakage
// property isExcuting attributes=TB,N,V_isExcuting
// property jceModel attributes=T@"BLYJceObjectV2",&,N,V_jceModel
// property requestData attributes=T@"NSData",&,N,V_requestData
// property httpRequest attributes=T@"BLYHttpRequest",&,N,V_httpRequest
// IMP 0x10064f198 | @16@0:8
- (id)httpRequest;
// IMP 0x10064f368 | @?16@0:8
- (id /* block */)compeletionHandler;
// IMP 0x10064f8d8 | v16@0:8
- (void)grayUpgradeStrategyResponse;
// IMP 0x10064f8dc | v24@0:8@16
- (void)grayUpgradeStrategyRequest:(id)arg0;
// IMP 0x10064f8e0 | v24@0:8@16
- (void)baseStrategyRequest:(id)arg0;
// IMP 0x10064ff24 | v24@0:8@16
- (void)handleResponseData:(id)arg0;
// IMP 0x100650508 | @16@0:8
- (id)persistFileKey;
// IMP 0x100650534 | q16@0:8
- (long long)persistType;
// IMP 0x10065053c | @16@0:8
- (id)httpHeaderField;
// IMP 0x100650b64 | B16@0:8
- (BOOL)shouldPersist;
// IMP 0x100650b6c | B16@0:8
- (BOOL)shouldUpload;
// IMP 0x100650b74 | @16@0:8
- (id)jceCMDString;
// IMP 0x100650ba0 | B24@0:8@16
- (BOOL)jceModelAvailable:(id)arg0;
// IMP 0x100650ba8 | v16@0:8
- (void)cancel;
// IMP 0x100650d40 | B24@0:8@16
- (BOOL)grayUpgradeHandler:(id)arg0;
// IMP 0x100650e1c | v24@0:8@16
- (void)exceptionHandler:(id)arg0;
// IMP 0x100651374 | v16@0:8
- (void)main;
// IMP 0x100651710 | v20@0:8B16
- (void)persistentSuccessed:(BOOL)arg0;
// IMP 0x100651714 | v20@0:8B16
- (void)reportSuccessed:(BOOL)arg0;
// IMP 0x100651718 | @16@0:8
- (id)requestReservedInfo;
// IMP 0x100651720 | @16@0:8
- (id)requestUrlString;
// IMP 0x1006517d4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100651734 | @16@0:8
- (id)jceModel;
// IMP 0x100651744 | v24@0:8@16
- (void)setJceModel:(id)arg0;
// IMP 0x100651758 | @16@0:8
- (id)requestData;
// IMP 0x100651768 | v24@0:8@16
- (void)setRequestData:(id)arg0;
// IMP 0x10065177c | v24@0:8@16
- (void)setHttpRequest:(id)arg0;
// IMP 0x100651790 | @16@0:8
- (id)responsePakage;
// IMP 0x1006517a0 | v24@0:8@16
- (void)setResponsePakage:(id)arg0;
// IMP 0x1006517b4 | B16@0:8
- (BOOL)isExcuting;
// IMP 0x1006517c4 | v20@0:8B16
- (void)setIsExcuting:(BOOL)arg0;
@end
