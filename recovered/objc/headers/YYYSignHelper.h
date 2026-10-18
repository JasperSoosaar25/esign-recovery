// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81670
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignHelper : NSObject
// ivar _delegate encoding=@"<YYYSignHelperDelegate>" offset=8
// ivar _currentOption encoding=@"YYYSignInfo" offset=16
// property delegate attributes=T@"<YYYSignHelperDelegate>",W,N,V_delegate
// property currentOption attributes=T@"YYYSignInfo",W,N,V_currentOption
// IMP 0x10038c3a0 | v24@0:8@16
- (void)logInfo:(id)arg0;
// IMP 0x10038c3b4 | v32@0:8@16@24
- (void)logInfo:(id)arg0 idf:(id)arg1;
// IMP 0x10038c954 | v24@0:8@16
- (void)logError:(id)arg0;
// IMP 0x10038c968 | v32@0:8@16@24
- (void)logError:(id)arg0 idf:(id)arg1;
// IMP 0x10038d000 | v20@0:8B16
- (void)finish:(BOOL)arg0;
// IMP 0x10038d270 | v24@0:8@16
- (void)signedApp:(id)arg0;
// IMP 0x10038d4fc | v16@0:8
- (void)logSeparator;
// IMP 0x10038d7a4 | v16@0:8
- (void)logDeviceInfo;
// IMP 0x10038e4a4 | B24@0:8@16
- (BOOL)preSignWithOption:(id)arg0;
// IMP 0x10039b0d8 | B32@0:8@16@24
- (BOOL)signWithSignOption:(id)arg0 fileName:(id)arg1;
// IMP 0x10039dc28 | v32@0:8@16@24
- (void)signWithSignOptions:(id)arg0 delegate:(id)arg1;
// IMP 0x10039f3e4 | v16@0:8
- (void)dealloc;
// IMP 0x10039f608 | @16@0:8
- (id)delegate;
// IMP 0x10039f630 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10039f698 | @16@0:8
- (id)currentOption;
// IMP 0x10039f6fc | v24@0:8@16
- (void)setCurrentOption:(id)arg0;
// IMP 0x10039f764 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
