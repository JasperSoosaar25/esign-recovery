// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95640
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYHelper : NSObject
// IMP 0x100641974 | @16@0:8
+ (id)generateUUID;
// IMP 0x100641a28 | B16@0:8
+ (BOOL)isPreiOS7Environment;
// IMP 0x100641a9c | B16@0:8
+ (BOOL)isPreiOS8Environment;
// IMP 0x100641b10 | B16@0:8
+ (BOOL)isRunningInAppExtension;
// IMP 0x100641bd4 | B16@0:8
+ (BOOL)isTheAppStoreEnvironment;
// IMP 0x100641c48 | B16@0:8
+ (BOOL)isDebugBuild;
// IMP 0x100641c50 | B16@0:8
+ (BOOL)isSimulatorBuild;
// IMP 0x100641c58 | @16@0:8
+ (id)getReceiptUrlPath;
// IMP 0x100641d50 | B16@0:8
+ (BOOL)isTestBuild;
// IMP 0x100641dcc | B16@0:8
+ (BOOL)hasAppStoreReceipt;
// IMP 0x100641e98 | @16@0:8
+ (id)getBuildType;
// IMP 0x100641f44 | @16@0:8
+ (id)componentInfos;
// IMP 0x1006421b4 | @16@0:8
+ (id)applicationHotFixSwitch;
// IMP 0x1006422a0 | @16@0:8
+ (id)applicationHotFixPatchVersion;
// IMP 0x100642388 | @16@0:8
+ (id)applicationHotFixAppVersion;
// IMP 0x100642470 | B16@0:8
+ (BOOL)isDebuggerAttached;
// IMP 0x10064256c | q24@0:8q16
+ (long long)fixedTimestamp:(long long)arg0;
// IMP 0x100642634 | q16@0:8
+ (long long)currentTimeStamp;
// IMP 0x100642694 | B24@0:8@16
+ (BOOL)isEmptyString:(id)arg0;
// IMP 0x100642714 | @24@0:8@16
+ (id)SHA1:(id)arg0;
// IMP 0x1006428b0 | @24@0:8@16
+ (id)fileSHA1:(id)arg0;
// IMP 0x100642a30 | @32@0:8@16@24
+ (id)aes256EncryptWithKey:(id)arg0 data:(id)arg1;
// IMP 0x100642be4 | @32@0:8@16@24
+ (id)aes256DecryptWithkey:(id)arg0 data:(id)arg1;
// IMP 0x100642d98 | C24@0:8@16
+ (unsigned char)checkTestflightUrlValid:(id)arg0;
// IMP 0x100642e0c | @16@0:8
+ (id)getParentProcessName;
// IMP 0x100642f08 | q16@0:8
+ (long long)getProcessId;
// IMP 0x100642f20 | q16@0:8
+ (long long)getParentProcessId;
// IMP 0x100642f38 | @16@0:8
+ (id)getFullTimeMsStr;
// IMP 0x100643008 | @24@0:8d16
+ (id)getFullTimeStrBy:(double)arg0;
// IMP 0x100643070 | @24@0:8@16
+ (id)sortBinaryImage:(id)arg0;
// IMP 0x10064314c | @32@0:8@16i24i28
+ (id)sortBinaryImage:(id)arg0 low:(int)arg1 hight:(int)arg2;
@end
