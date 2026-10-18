// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c976c0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMConfigure : NSObject
// IMP 0x1006bc198 | v16@0:8
+ (void)load;
// IMP 0x1006bc1c4 | v24@0:8@16
+ (void)setDomain:(id)arg0;
// IMP 0x1006bc490 | v32@0:8@16@24
+ (void)initWithAppkey:(id)arg0 channel:(id)arg1;
// IMP 0x1006bdbec | v20@0:8B16
+ (void)setLogEnabled:(BOOL)arg0;
// IMP 0x1006bdf04 | v20@0:8B16
+ (void)setEncryptEnabled:(BOOL)arg0;
// IMP 0x1006bdf54 | @16@0:8
+ (id)umidString;
// IMP 0x1006bdf70 | B32@0:8@16@24
+ (BOOL)setWraperType:(id)arg0 wrapperVersion:(id)arg1;
// IMP 0x1006be158 | @16@0:8
+ (id)deviceIDForIntegration;
// IMP 0x1006be16c | v20@0:8B16
+ (void)setAnalyticsEnabled:(BOOL)arg0;
// IMP 0x1006be1bc | @16@0:8
+ (id)getUmengZID;
// IMP 0x1006be1d0 | v20@0:8B16
+ (void)isInernational:(BOOL)arg0;
// IMP 0x1006be220 | v16@0:8
+ (void)endUMBackgroundTask;
// IMP 0x1006be260 | v16@0:8
+ (void)autoTest;
// IMP 0x1006be584 | @16@0:8
+ (id)getSessionID;
// IMP 0x1006be5e0 | v16@0:8
+ (void)resetStorePath;
// IMP 0x1006be5f0 | v24@0:8@16
+ (void)resetStorePrefix:(id)arg0;
@end
