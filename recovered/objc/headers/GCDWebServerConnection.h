// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83918
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerConnection : NSObject
// ivar _socket encoding=i offset=8
// ivar _virtualHEAD encoding=B offset=12
// ivar _requestMessage encoding=^{__CFHTTPMessage=} offset=16
// ivar _request encoding=@"GCDWebServerRequest" offset=24
// ivar _handler encoding=@"GCDWebServerHandler" offset=32
// ivar _responseMessage encoding=^{__CFHTTPMessage=} offset=40
// ivar _response encoding=@"GCDWebServerResponse" offset=48
// ivar _statusCode encoding=q offset=56
// ivar _opened encoding=B offset=64
// ivar _server encoding=@"GCDWebServer" offset=72
// ivar _localAddressData encoding=@"NSData" offset=80
// ivar _remoteAddressData encoding=@"NSData" offset=88
// ivar _totalBytesRead encoding=Q offset=96
// ivar _totalBytesWritten encoding=Q offset=104
// property server attributes=T@"GCDWebServer",R,N,V_server
// property usingIPv6 attributes=TB,R,N,GisUsingIPv6
// property localAddressData attributes=T@"NSData",R,N,V_localAddressData
// property localAddressString attributes=T@"NSString",R,N
// property remoteAddressData attributes=T@"NSData",R,N,V_remoteAddressData
// property remoteAddressString attributes=T@"NSString",R,N
// property totalBytesRead attributes=TQ,R,N,V_totalBytesRead
// property totalBytesWritten attributes=TQ,R,N,V_totalBytesWritten
// IMP 0x10041d7e0 | B16@0:8
- (BOOL)open;
// IMP 0x10041d7e8 | v32@0:8r^v16Q24
- (void)didReadBytes:(void *)arg0 length:(unsigned long long)arg1;
// IMP 0x10041d7f8 | v32@0:8r^v16Q24
- (void)didWriteBytes:(void *)arg0 length:(unsigned long long)arg1;
// IMP 0x10041d808 | @40@0:8@16@24@32
- (id)rewriteRequestURL:(id)arg0 withMethod:(id)arg1 headers:(id)arg2;
// IMP 0x10041d820 | @24@0:8@16
- (id)preflightRequest:(id)arg0;
// IMP 0x10041dd90 | v32@0:8@16@?24
- (void)processRequest:(id)arg0 completion:(id /* block */)arg1;
// IMP 0x10041de20 | @32@0:8@16@24
- (id)overrideResponse:(id)arg0 forRequest:(id)arg1;
// IMP 0x10041e0dc | v32@0:8@16q24
- (void)abortRequest:(id)arg0 withStatusCode:(long long)arg1;
// IMP 0x10041e110 | v16@0:8
- (void)close;
// IMP 0x10041d184 | v32@0:8@16@?24
- (void)writeData:(id)arg0 withCompletionBlock:(id /* block */)arg1;
// IMP 0x10041d41c | v24@0:8@?16
- (void)writeHeadersWithCompletionBlock:(id /* block */)arg0;
// IMP 0x10041d478 | v24@0:8@?16
- (void)writeBodyWithCompletionBlock:(id /* block */)arg0;
// IMP 0x10041c600 | v40@0:8@16Q24@?32
- (void)readData:(id)arg0 withLength:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
// IMP 0x10041c8bc | v32@0:8@16@?24
- (void)readHeaders:(id)arg0 withCompletionBlock:(id /* block */)arg1;
// IMP 0x10041caf4 | v32@0:8Q16@?24
- (void)readBodyWithRemainingLength:(unsigned long long)arg0 completionBlock:(id /* block */)arg1;
// IMP 0x10041cd08 | v32@0:8@16@?24
- (void)readNextBodyChunk:(id)arg0 completionBlock:(id /* block */)arg1;
// IMP 0x10041b1fc | B16@0:8
- (BOOL)isUsingIPv6;
// IMP 0x10041b220 | v24@0:8q16
- (void)_initializeResponseHeadersWithStatusCode:(long long)arg0;
// IMP 0x10041b2f0 | v16@0:8
- (void)_startProcessingRequest;
// IMP 0x10041b390 | v24@0:8@16
- (void)_finishProcessingRequest:(id)arg0;
// IMP 0x10041b7c0 | v32@0:8Q16@24
- (void)_readBodyWithLength:(unsigned long long)arg0 initialData:(id)arg1;
// IMP 0x10041ba8c | v24@0:8@16
- (void)_readChunkedBodyWithInitialData:(id)arg0;
// IMP 0x10041bc54 | v16@0:8
- (void)_readRequestHeaders;
// IMP 0x10041c34c | @44@0:8@16@24@32i40
- (id)initWithServer:(id)arg0 localAddress:(id)arg1 remoteAddress:(id)arg2 socket:(int)arg3;
// IMP 0x10041c470 | @16@0:8
- (id)localAddressString;
// IMP 0x10041c48c | @16@0:8
- (id)remoteAddressString;
// IMP 0x10041c4a8 | v16@0:8
- (void)dealloc;
// IMP 0x10041c578 | @16@0:8
- (id)server;
// IMP 0x10041c580 | @16@0:8
- (id)localAddressData;
// IMP 0x10041c588 | @16@0:8
- (id)remoteAddressData;
// IMP 0x10041c590 | Q16@0:8
- (unsigned long long)totalBytesRead;
// IMP 0x10041c598 | Q16@0:8
- (unsigned long long)totalBytesWritten;
// IMP 0x10041c5a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10041b060 | v16@0:8
+ (void)initialize;
@end
