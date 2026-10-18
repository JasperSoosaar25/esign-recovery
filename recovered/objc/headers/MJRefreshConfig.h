// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c85170
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MJRefreshConfig : NSObject
// ivar _languageCode encoding=@"NSString" offset=8
// ivar _i18nFilename encoding=@"NSString" offset=16
// ivar _i18nBundle encoding=@"NSBundle" offset=24
// property languageCode attributes=T@"NSString",C,N,V_languageCode
// property i18nFilename attributes=T@"NSString",C,N,V_i18nFilename
// property i18nBundle attributes=T@"NSBundle",&,N,V_i18nBundle
// IMP 0x10042a740 | v24@0:8@16
- (void)setLanguageCode:(id)arg0;
// IMP 0x10042a7d4 | @16@0:8
- (id)languageCode;
// IMP 0x10042a7dc | @16@0:8
- (id)i18nFilename;
// IMP 0x10042a7e4 | v24@0:8@16
- (void)setI18nFilename:(id)arg0;
// IMP 0x10042a7ec | @16@0:8
- (id)i18nBundle;
// IMP 0x10042a7f4 | v24@0:8@16
- (void)setI18nBundle:(id)arg0;
// IMP 0x10042a800 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10042fb64 | v16@0:8
+ (void)resetLanguageResourceCache;
// IMP 0x10042a6a0 | @16@0:8
+ (id)defaultConfig;
@end
