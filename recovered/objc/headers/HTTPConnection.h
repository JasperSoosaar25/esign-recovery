// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c947c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPConnection : NSObject
// ivar connectionQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar asyncSocket encoding=@"GCDAsyncSocket" offset=16
// ivar config encoding=@"HTTPConfig" offset=24
// ivar started encoding=B offset=32
// ivar request encoding=@"HTTPMessage" offset=40
// ivar numHeaderLines encoding=I offset=48
// ivar sentResponseHeaders encoding=B offset=52
// ivar nonce encoding=@"NSString" offset=56
// ivar lastNC encoding=q offset=64
// ivar httpResponse encoding=@"NSObject<HTTPResponse>" offset=72
// ivar ranges encoding=@"NSMutableArray" offset=80
// ivar ranges_headers encoding=@"NSMutableArray" offset=88
// ivar ranges_boundry encoding=@"NSString" offset=96
// ivar rangeIndex encoding=i offset=104
// ivar requestContentLength encoding=Q offset=112
// ivar requestContentLengthReceived encoding=Q offset=120
// ivar requestChunkSize encoding=Q offset=128
// ivar requestChunkSizeReceived encoding=Q offset=136
// ivar responseDataSizes encoding=@"NSMutableArray" offset=144
// IMP 0x1005a73bc | @32@0:8@16@24
- (id)initWithAsyncSocket:(id)arg0 configuration:(id)arg1;
// IMP 0x1005a7508 | v16@0:8
- (void)dealloc;
// IMP 0x1005a757c | B32@0:8@16@24
- (BOOL)supportsMethod:(id)arg0 atPath:(id)arg1;
// IMP 0x1005a75d8 | B32@0:8@16@24
- (BOOL)expectsRequestBodyFromMethod:(id)arg0 atPath:(id)arg1;
// IMP 0x1005a7634 | B16@0:8
- (BOOL)isSecureServer;
// IMP 0x1005a763c | @16@0:8
- (id)sslIdentityAndCertificates;
// IMP 0x1005a7644 | B24@0:8@16
- (BOOL)isPasswordProtected:(id)arg0;
// IMP 0x1005a764c | B16@0:8
- (BOOL)useDigestAccessAuthentication;
// IMP 0x1005a7654 | @16@0:8
- (id)realm;
// IMP 0x1005a7660 | @24@0:8@16
- (id)passwordForUser:(id)arg0;
// IMP 0x1005a7668 | B16@0:8
- (BOOL)isAuthenticated;
// IMP 0x1005a7c4c | v24@0:8@16
- (void)addDigestAuthChallenge:(id)arg0;
// IMP 0x1005a7d08 | v24@0:8@16
- (void)addBasicAuthChallenge:(id)arg0;
// IMP 0x1005a7da4 | v16@0:8
- (void)start;
// IMP 0x1005a7e40 | v16@0:8
- (void)stop;
// IMP 0x1005a7ecc | v16@0:8
- (void)startConnection;
// IMP 0x1005a7fc4 | v16@0:8
- (void)startReadingRequest;
// IMP 0x1005a8014 | @24@0:8@16
- (id)parseParams:(id)arg0;
// IMP 0x1005a81ec | @16@0:8
- (id)parseGetParams;
// IMP 0x1005a8290 | B32@0:8@16Q24
- (BOOL)parseRangeRequest:(id)arg0 withContentLength:(unsigned long long)arg1;
// IMP 0x1005a8704 | @16@0:8
- (id)requestURI;
// IMP 0x1005a8758 | v16@0:8
- (void)replyToHTTPRequest;
// IMP 0x1005a8924 | @24@0:8Q16
- (id)newUniRangeResponse:(unsigned long long)arg0;
// IMP 0x1005a8a60 | @24@0:8Q16
- (id)newMultiRangeResponse:(unsigned long long)arg0;
// IMP 0x1005a8d94 | @24@0:8Q16
- (id)chunkedTransferSizeLineForLength:(unsigned long long)arg0;
// IMP 0x1005a8df8 | @16@0:8
- (id)chunkedTransferFooter;
// IMP 0x1005a8e08 | v16@0:8
- (void)sendResponseHeadersAndBody;
// IMP 0x1005a938c | Q16@0:8
- (unsigned long long)writeQueueSize;
// IMP 0x1005a940c | v16@0:8
- (void)continueSendingStandardResponseBody;
// IMP 0x1005a95b8 | v16@0:8
- (void)continueSendingSingleRangeResponseBody;
// IMP 0x1005a96e0 | v16@0:8
- (void)continueSendingMultiRangeResponseBody;
// IMP 0x1005a995c | @16@0:8
- (id)directoryIndexFileNames;
// IMP 0x1005a9994 | @24@0:8@16
- (id)filePathForURI:(id)arg0;
// IMP 0x1005a999c | @28@0:8@16B24
- (id)filePathForURI:(id)arg0 allowDirectory:(BOOL)arg1;
// IMP 0x1005a9cf8 | @32@0:8@16@24
- (id)httpResponseForMethod:(id)arg0 URI:(id)arg1;
// IMP 0x1005a9db4 | @24@0:8@16
- (id)webSocketForURI:(id)arg0;
// IMP 0x1005a9dbc | v24@0:8Q16
- (void)prepareForBodyWithSize:(unsigned long long)arg0;
// IMP 0x1005a9dc0 | v24@0:8@16
- (void)processBodyData:(id)arg0;
// IMP 0x1005a9dc4 | v16@0:8
- (void)finishBody;
// IMP 0x1005a9dc8 | v24@0:8@16
- (void)handleVersionNotSupported:(id)arg0;
// IMP 0x1005a9e60 | v16@0:8
- (void)handleAuthenticationFailed;
// IMP 0x1005a9f20 | v24@0:8@16
- (void)handleInvalidRequest:(id)arg0;
// IMP 0x1005a9fd0 | v24@0:8@16
- (void)handleUnknownMethod:(id)arg0;
// IMP 0x1005aa080 | v16@0:8
- (void)handleResourceNotFound;
// IMP 0x1005aa118 | @24@0:8@16
- (id)dateAsString:(id)arg0;
// IMP 0x1005aa254 | @24@0:8@16
- (id)preprocessResponse:(id)arg0;
// IMP 0x1005aa3c8 | @24@0:8@16
- (id)preprocessErrorResponse:(id)arg0;
// IMP 0x1005aa53c | v40@0:8@16@24q32
- (void)socket:(id)arg0 didReadData:(id)arg1 withTag:(long long)arg2;
// IMP 0x1005aaa90 | v32@0:8@16q24
- (void)socket:(id)arg0 didWriteDataWithTag:(long long)arg1;
// IMP 0x1005aac24 | v32@0:8@16@24
- (void)socketDidDisconnect:(id)arg0 withError:(id)arg1;
// IMP 0x1005aac50 | v24@0:8@16
- (void)responseHasAvailableData:(id)arg0;
// IMP 0x1005aad54 | v24@0:8@16
- (void)responseDidAbort:(id)arg0;
// IMP 0x1005aae18 | v16@0:8
- (void)finishResponse;
// IMP 0x1005aae6c | B16@0:8
- (BOOL)shouldDie;
// IMP 0x1005aaf70 | v16@0:8
- (void)die;
// IMP 0x1005aafe0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005a70ac | v16@0:8
+ (void)initialize;
// IMP 0x1005a712c | @16@0:8
+ (id)generateNonce;
// IMP 0x1005a72c4 | B24@0:8@16
+ (BOOL)hasRecentNonce:(id)arg0;
@end
