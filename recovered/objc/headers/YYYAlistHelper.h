// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c81e10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAlistHelper : NSObject
// ivar _token encoding=@"NSString" offset=8
// ivar _baseUrl encoding=@"NSString" offset=16
// ivar _password encoding=@"NSString" offset=24
// ivar _progressBlock encoding=@? offset=32
// property token attributes=T@"NSString",C,N,V_token
// property baseUrl attributes=T@"NSString",C,N,V_baseUrl
// property password attributes=T@"NSString",C,N,V_password
// property progressBlock attributes=T@?,C,N,V_progressBlock
// IMP 0x1003dbc94 | @48@0:8@16@24@32@40
- (id)requestForMethod:(id)arg0 path:(id)arg1 header:(id)arg2 param:(id)arg3;
// IMP 0x1003dccf8 | v40@0:8@16@24@?32
- (void)checkUrl:(id)arg0 password:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1003de7c8 | v40@0:8@16q24@?32
- (void)getFileListWithFolder:(id)arg0 page:(long long)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1003dfb04 | v32@0:8@16@?24
- (void)getFolderListWithFolder:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1003e09c8 | v40@0:8@16@?24@?32
- (void)uploadFile:(id)arg0 progressBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1003e0ad4 | v48@0:8@16@24@?32@?40
- (void)uploadFile:(id)arg0 toFolder:(id)arg1 progressBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x1003e3a98 | v48@0:8@16@24@32^v40
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;
// IMP 0x1003e3cd8 | v40@0:8@16@24@?32
- (void)deleteFiles:(id)arg0 atFolder:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1003e4d14 | v40@0:8@16@24@?32
- (void)renamePath:(id)arg0 newName:(id)arg1 completionHandler:(id /* block */)arg2;
// IMP 0x1003e5eb4 | v32@0:8@16@?24
- (void)createFolder:(id)arg0 completionHandler:(id /* block */)arg1;
// IMP 0x1003e6e14 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x1003e713c | v24@0:8@16
- (void)setBaseUrl:(id)arg0;
// IMP 0x1003e7300 | B16@0:8
- (BOOL)isLogin;
// IMP 0x1003e7340 | v16@0:8
- (void)logout;
// IMP 0x1003e76f4 | @16@0:8
- (id)token;
// IMP 0x1003e7708 | v24@0:8@16
- (void)setToken:(id)arg0;
// IMP 0x1003e778c | @16@0:8
- (id)baseUrl;
// IMP 0x1003e77b8 | @16@0:8
- (id)password;
// IMP 0x1003e77e4 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x1003e7804 | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x1003e7888 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003dc56c | @16@0:8
+ (id)shared;
@end
