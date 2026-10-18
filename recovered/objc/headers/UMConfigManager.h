// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c96fe0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMConfigManager : NSObject
// ivar _localConfig encoding=@"NSMutableDictionary" offset=8
// ivar _serverConfig encoding=@"NSMutableDictionary" offset=16
// property localConfig attributes=T@"NSMutableDictionary",&,N,V_localConfig
// property serverConfig attributes=T@"NSMutableDictionary",&,N,V_serverConfig
// IMP 0x10069f728 | @16@0:8
- (id)init;
// IMP 0x10069f924 | v16@0:8
- (void)updateServerConfig;
// IMP 0x10069fbe4 | @16@0:8
- (id)configDirectory;
// IMP 0x10069fcd4 | @16@0:8
- (id)localFilePath;
// IMP 0x10069fd30 | @16@0:8
- (id)serverPath;
// IMP 0x10069fd8c | B24@0:8@16
- (BOOL)doIsValidField:(id)arg0;
// IMP 0x1006a0080 | @16@0:8
- (id)readLocalConfig;
// IMP 0x1006a00e4 | v24@0:8@16
- (void)saveLocalConfig:(id)arg0;
// IMP 0x1006a0188 | @16@0:8
- (id)readServerConfig;
// IMP 0x1006a01ec | v24@0:8@16
- (void)saveServerConfig:(id)arg0;
// IMP 0x1006a0290 | v32@0:8@16q24
- (void)doSaveConfig:(id)arg0 withConfigType:(long long)arg1;
// IMP 0x1006a0430 | @16@0:8
- (id)UMlocalConfigDic;
// IMP 0x1006a0758 | @24@0:8@16
- (id)UMtoBinarySystemWithDecimalSystem:(id)arg0;
// IMP 0x1006a08f0 | @32@0:8@16@24
- (id)UMReverse:(id)arg0 localArr:(id)arg1;
// IMP 0x1006a0c44 | @24@0:8@16
- (id)serverConfigDic:(id)arg0;
// IMP 0x1006a1004 | @16@0:8
- (id)UMlocalConfigHeaderArr;
// IMP 0x1006a1090 | @16@0:8
- (id)UMlocalConfigInnerArr;
// IMP 0x1006a1114 | @16@0:8
- (id)localConfig;
// IMP 0x1006a111c | v24@0:8@16
- (void)setLocalConfig:(id)arg0;
// IMP 0x1006a1128 | @16@0:8
- (id)serverConfig;
// IMP 0x1006a1130 | v24@0:8@16
- (void)setServerConfig:(id)arg0;
// IMP 0x1006a113c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10069fb48 | @16@0:8
+ (id)shareInstance;
// IMP 0x1006a033c | B24@0:8@16
+ (BOOL)isValidField:(id)arg0;
// IMP 0x1006a03b8 | v32@0:8@16q24
+ (void)saveConfig:(id)arg0 withConfigType:(long long)arg1;
@end
