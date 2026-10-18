// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c90fa8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDWebImageDownloaderConfig : NSObject
// ivar _maxConcurrentDownloads encoding=q offset=8
// ivar _downloadTimeout encoding=d offset=16
// ivar _minimumProgressInterval encoding=d offset=24
// ivar _sessionConfiguration encoding=@"NSURLSessionConfiguration" offset=32
// ivar _operationClass encoding=# offset=40
// ivar _executionOrder encoding=q offset=48
// ivar _urlCredential encoding=@"NSURLCredential" offset=56
// ivar _username encoding=@"NSString" offset=64
// ivar _password encoding=@"NSString" offset=72
// ivar _acceptableStatusCodes encoding=@"NSIndexSet" offset=80
// ivar _acceptableContentTypes encoding=@"NSSet" offset=88
// property maxConcurrentDownloads attributes=Tq,N,V_maxConcurrentDownloads
// property downloadTimeout attributes=Td,N,V_downloadTimeout
// property minimumProgressInterval attributes=Td,N,V_minimumProgressInterval
// property sessionConfiguration attributes=T@"NSURLSessionConfiguration",&,N,V_sessionConfiguration
// property operationClass attributes=T#,N,V_operationClass
// property executionOrder attributes=Tq,N,V_executionOrder
// property urlCredential attributes=T@"NSURLCredential",C,N,V_urlCredential
// property username attributes=T@"NSString",C,N,V_username
// property password attributes=T@"NSString",C,N,V_password
// property acceptableStatusCodes attributes=T@"NSIndexSet",C,N,V_acceptableStatusCodes
// property acceptableContentTypes attributes=T@"NSSet",C,N,V_acceptableContentTypes
// IMP 0x10054d75c | @16@0:8
- (id)init;
// IMP 0x10054d7e0 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x10054d980 | q16@0:8
- (long long)maxConcurrentDownloads;
// IMP 0x10054d988 | v24@0:8q16
- (void)setMaxConcurrentDownloads:(long long)arg0;
// IMP 0x10054d990 | d16@0:8
- (double)downloadTimeout;
// IMP 0x10054d998 | v24@0:8d16
- (void)setDownloadTimeout:(double)arg0;
// IMP 0x10054d9a0 | d16@0:8
- (double)minimumProgressInterval;
// IMP 0x10054d9a8 | v24@0:8d16
- (void)setMinimumProgressInterval:(double)arg0;
// IMP 0x10054d9b0 | @16@0:8
- (id)sessionConfiguration;
// IMP 0x10054d9b8 | v24@0:8@16
- (void)setSessionConfiguration:(id)arg0;
// IMP 0x10054d9c4 | #16@0:8
- (Class)operationClass;
// IMP 0x10054d9cc | v24@0:8#16
- (void)setOperationClass:(Class)arg0;
// IMP 0x10054d9d4 | q16@0:8
- (long long)executionOrder;
// IMP 0x10054d9dc | v24@0:8q16
- (void)setExecutionOrder:(long long)arg0;
// IMP 0x10054d9e4 | @16@0:8
- (id)urlCredential;
// IMP 0x10054d9ec | v24@0:8@16
- (void)setUrlCredential:(id)arg0;
// IMP 0x10054d9f4 | @16@0:8
- (id)username;
// IMP 0x10054d9fc | v24@0:8@16
- (void)setUsername:(id)arg0;
// IMP 0x10054da04 | @16@0:8
- (id)password;
// IMP 0x10054da0c | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x10054da14 | @16@0:8
- (id)acceptableStatusCodes;
// IMP 0x10054da1c | v24@0:8@16
- (void)setAcceptableStatusCodes:(id)arg0;
// IMP 0x10054da24 | @16@0:8
- (id)acceptableContentTypes;
// IMP 0x10054da2c | v24@0:8@16
- (void)setAcceptableContentTypes:(id)arg0;
// IMP 0x10054da34 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10054d6f0 | @16@0:8
+ (id)defaultDownloaderConfig;
@end
