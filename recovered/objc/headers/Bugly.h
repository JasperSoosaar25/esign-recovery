// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c952f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface Bugly : NSObject
// IMP 0x10063cf78 | v24@0:8@16
+ (void)startWithAppId:(id)arg0;
// IMP 0x10063cf88 | Q24@0:8Q16
+ (unsigned long long)convert:(unsigned long long)arg0;
// IMP 0x10063cfa8 | v36@0:8@16B24@28
+ (void)startWithAppId:(id)arg0 developmentDevice:(BOOL)arg1 config:(id)arg2;
// IMP 0x10063d744 | v32@0:8@16@24
+ (void)startWithAppId:(id)arg0 config:(id)arg1;
// IMP 0x10063d798 | v24@0:8@16
+ (void)startWithConfig:(id)arg0;
// IMP 0x10063d7b0 | v24@0:8@16
+ (void)setUserIdentifier:(id)arg0;
// IMP 0x10063d820 | @16@0:8
+ (id)buglyUserIdentifier;
// IMP 0x10063d87c | v24@0:8@16
+ (void)updateAppVersion:(id)arg0;
// IMP 0x10063d8fc | v24@0:8Q16
+ (void)setTag:(unsigned long long)arg0;
// IMP 0x10063d94c | v32@0:8@16@24
+ (void)setUserValue:(id)arg0 forKey:(id)arg1;
// IMP 0x10063d9d8 | @16@0:8
+ (id)allUserValues;
// IMP 0x10063da34 | Q16@0:8
+ (unsigned long long)currentTag;
// IMP 0x10063da88 | v60@0:8Q16@24@32@40@48B56
+ (void)reportExceptionWithCategory:(unsigned long long)arg0 name:(id)arg1 reason:(id)arg2 callStack:(id)arg3 extraInfo:(id)arg4 terminateApp:(BOOL)arg5;
// IMP 0x10063dc94 | @16@0:8
+ (id)sdkVersion;
// IMP 0x10063dca8 | @16@0:8
+ (id)appVersion;
// IMP 0x10063dd04 | @16@0:8
+ (id)buglyDeviceId;
// IMP 0x10063dd60 | v24@0:8@16
+ (void)reportException:(id)arg0;
// IMP 0x10063de04 | v24@0:8@16
+ (void)reportError:(id)arg0;
// IMP 0x10063dea8 | B16@0:8
+ (BOOL)isAppCrashedOnStartUpExceedTheLimit;
// IMP 0x10063defc | v32@0:8@16@24
+ (void)setComponentIdentifier:(id)arg0 version:(id)arg1;
// IMP 0x10063e0c4 | v16@0:8
+ (void)closeCrashReport;
@end
