// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c518
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DumpDecrypted : NSObject
// ivar decryptedAppPathStr encoding=[1024c] offset=8
// ivar filename encoding=* offset=1032
// ivar appDirName encoding=* offset=1040
// ivar appDirPath encoding=* offset=1048
// ivar _appPath encoding=@"NSString" offset=1056
// ivar _docPath encoding=@"NSString" offset=1064
// ivar _appName encoding=@"NSString" offset=1072
// ivar _appVersion encoding=@"NSString" offset=1080
// property appPath attributes=T@"NSString",C,N,V_appPath
// property docPath attributes=T@"NSString",C,N,V_docPath
// property appName attributes=T@"NSString",C,N,V_appName
// property appVersion attributes=T@"NSString",C,N,V_appVersion
// IMP 0x100099210 | @40@0:8@16@24@32
- (id)initWithPathToBinary:(id)arg0 appName:(id)arg1 appVersion:(id)arg2;
// IMP 0x100099854 | v24@0:8r*16
- (void)makeDirectories:(char *)arg0;
// IMP 0x10009a0b0 | B40@0:8Q16r*24i32I36
- (BOOL)dumpDecryptedImage:(unsigned long long)arg0 fileName:(char *)arg1 image:(int)arg2 task:(unsigned int)arg3;
// IMP 0x10009abdc | v20@0:8i16
- (void)dumpDecrypted:(int)arg0;
// IMP 0x10009b038 | B44@0:8@16B24@28@36
- (BOOL)fileManager:(id)arg0 shouldProceedAfterError:(BOOL)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3;
// IMP 0x10009b0ac | @16@0:8
- (id)IPAPath;
// IMP 0x10009b444 | v20@0:8i16
- (void)createIPAFile:(int)arg0;
// IMP 0x10009c450 | @16@0:8
- (id)appPath;
// IMP 0x10009c470 | v24@0:8@16
- (void)setAppPath:(id)arg0;
// IMP 0x10009c484 | @16@0:8
- (id)docPath;
// IMP 0x10009c4b0 | v24@0:8@16
- (void)setDocPath:(id)arg0;
// IMP 0x10009c528 | @16@0:8
- (id)appName;
// IMP 0x10009c530 | v24@0:8@16
- (void)setAppName:(id)arg0;
// IMP 0x10009c5b4 | @16@0:8
- (id)appVersion;
// IMP 0x10009c5d4 | v24@0:8@16
- (void)setAppVersion:(id)arg0;
// IMP 0x10009c604 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
