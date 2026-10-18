// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c946d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDAsyncSocket : NSObject
// ivar flags encoding=I offset=8
// ivar config encoding=S offset=12
// ivar delegate encoding=@ offset=16
// ivar delegateQueue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// ivar socket4FD encoding=i offset=32
// ivar socket6FD encoding=i offset=36
// ivar connectIndex encoding=i offset=40
// ivar connectInterface4 encoding=@"NSData" offset=48
// ivar connectInterface6 encoding=@"NSData" offset=56
// ivar socketQueue encoding=@"NSObject<OS_dispatch_queue>" offset=64
// ivar accept4Source encoding=@"NSObject<OS_dispatch_source>" offset=72
// ivar accept6Source encoding=@"NSObject<OS_dispatch_source>" offset=80
// ivar connectTimer encoding=@"NSObject<OS_dispatch_source>" offset=88
// ivar readSource encoding=@"NSObject<OS_dispatch_source>" offset=96
// ivar writeSource encoding=@"NSObject<OS_dispatch_source>" offset=104
// ivar readTimer encoding=@"NSObject<OS_dispatch_source>" offset=112
// ivar writeTimer encoding=@"NSObject<OS_dispatch_source>" offset=120
// ivar readQueue encoding=@"NSMutableArray" offset=128
// ivar writeQueue encoding=@"NSMutableArray" offset=136
// ivar currentRead encoding=@"GCDAsyncReadPacket" offset=144
// ivar currentWrite encoding=@"GCDAsyncWritePacket" offset=152
// ivar socketFDBytesAvailable encoding=Q offset=160
// ivar preBuffer encoding=@"GCDAsyncSocketPreBuffer" offset=168
// ivar streamContext encoding={?="version"q"info"^v"retain"^?"release"^?"copyDescription"^?} offset=176
// ivar readStream encoding=^{__CFReadStream=} offset=216
// ivar writeStream encoding=^{__CFWriteStream=} offset=224
// ivar sslContext encoding=^{SSLContext=} offset=232
// ivar sslPreBuffer encoding=@"GCDAsyncSocketPreBuffer" offset=240
// ivar sslWriteCachedLength encoding=Q offset=248
// ivar sslErrCode encoding=i offset=256
// ivar IsOnSocketQueueOrTargetQueueKey encoding=^v offset=264
// ivar userData encoding=@ offset=272
// IMP 0x10059bc80 | @16@0:8
- (id)init;
// IMP 0x10059bc90 | @24@0:8@16
- (id)initWithSocketQueue:(id)arg0;
// IMP 0x10059bca0 | @32@0:8@16@24
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1;
// IMP 0x10059bca8 | @40@0:8@16@24@32
- (id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 socketQueue:(id)arg2;
// IMP 0x10059be38 | v16@0:8
- (void)dealloc;
// IMP 0x10059bf00 | @16@0:8
- (id)delegate;
// IMP 0x10059c024 | v28@0:8@16B24
- (void)setDelegate:(id)arg0 synchronously:(BOOL)arg1;
// IMP 0x10059c0fc | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x10059c104 | v24@0:8@16
- (void)synchronouslySetDelegate:(id)arg0;
// IMP 0x10059c10c | @16@0:8
- (id)delegateQueue;
// IMP 0x10059c1f0 | v28@0:8@16B24
- (void)setDelegateQueue:(id)arg0 synchronously:(BOOL)arg1;
// IMP 0x10059c2c8 | v24@0:8@16
- (void)setDelegateQueue:(id)arg0;
// IMP 0x10059c2d0 | v24@0:8@16
- (void)synchronouslySetDelegateQueue:(id)arg0;
// IMP 0x10059c2d8 | v32@0:8^@16^@24
- (void)getDelegate:(id *)arg0 delegateQueue:(id *)arg1;
// IMP 0x10059c464 | v36@0:8@16@24B32
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1 synchronously:(BOOL)arg2;
// IMP 0x10059c5a4 | v32@0:8@16@24
- (void)setDelegate:(id)arg0 delegateQueue:(id)arg1;
// IMP 0x10059c5ac | v32@0:8@16@24
- (void)synchronouslySetDelegate:(id)arg0 delegateQueue:(id)arg1;
// IMP 0x10059c5b4 | B16@0:8
- (BOOL)isIPv4Enabled;
// IMP 0x10059c680 | v20@0:8B16
- (void)setIPv4Enabled:(BOOL)arg0;
// IMP 0x10059c734 | B16@0:8
- (BOOL)isIPv6Enabled;
// IMP 0x10059c800 | v20@0:8B16
- (void)setIPv6Enabled:(BOOL)arg0;
// IMP 0x10059c8b8 | B16@0:8
- (BOOL)isIPv4PreferredOverIPv6;
// IMP 0x10059c984 | v20@0:8B16
- (void)setPreferIPv4OverIPv6:(BOOL)arg0;
// IMP 0x10059ca3c | @16@0:8
- (id)userData;
// IMP 0x10059cb4c | v24@0:8@16
- (void)setUserData:(id)arg0;
// IMP 0x10059cc48 | B28@0:8S16^@20
- (BOOL)acceptOnPort:(unsigned short)arg0 error:(id *)arg1;
// IMP 0x10059cc58 | B36@0:8@16S24^@28
- (BOOL)acceptOnInterface:(id)arg0 port:(unsigned short)arg1 error:(id *)arg2;
// IMP 0x10059d5d0 | B20@0:8i16
- (BOOL)doAccept:(int)arg0;
// IMP 0x10059d8f8 | B32@0:8@16^@24
- (BOOL)preConnectWithInterface:(id)arg0 error:(id *)arg1;
// IMP 0x10059dacc | B36@0:8@16S24^@28
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 error:(id *)arg2;
// IMP 0x10059dad4 | B44@0:8@16S24d28^@36
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 withTimeout:(double)arg2 error:(id *)arg3;
// IMP 0x10059dae0 | B52@0:8@16S24@28d36^@44
- (BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 viaInterface:(id)arg2 withTimeout:(double)arg3 error:(id *)arg4;
// IMP 0x10059deec | B32@0:8@16^@24
- (BOOL)connectToAddress:(id)arg0 error:(id *)arg1;
// IMP 0x10059defc | B40@0:8@16d24^@32
- (BOOL)connectToAddress:(id)arg0 withTimeout:(double)arg1 error:(id *)arg2;
// IMP 0x10059df08 | B48@0:8@16@24d32^@40
- (BOOL)connectToAddress:(id)arg0 viaInterface:(id)arg1 withTimeout:(double)arg2 error:(id *)arg3;
// IMP 0x10059e2d4 | v32@0:8i16@20S28
- (void)lookup:(int)arg0 host:(id)arg1 port:(unsigned short)arg2;
// IMP 0x10059e6a0 | v36@0:8i16@20@28
- (void)lookup:(int)arg0 didSucceedWithAddress4:(id)arg1 address6:(id)arg2;
// IMP 0x10059e790 | v28@0:8i16@20
- (void)lookup:(int)arg0 didFail:(id)arg1;
// IMP 0x10059e7e8 | B40@0:8@16@24^@32
- (BOOL)connectWithAddress4:(id)arg0 address6:(id)arg1 error:(id *)arg2;
// IMP 0x10059ebbc | v20@0:8i16
- (void)didConnect:(int)arg0;
// IMP 0x10059f010 | v28@0:8i16@20
- (void)didNotConnect:(int)arg0 error:(id)arg1;
// IMP 0x10059f028 | v24@0:8d16
- (void)startConnectTimeout:(double)arg0;
// IMP 0x10059f128 | v16@0:8
- (void)endConnectTimeout;
// IMP 0x10059f190 | v16@0:8
- (void)doConnectTimeout;
// IMP 0x10059f1d4 | v24@0:8@16
- (void)closeWithError:(id)arg0;
// IMP 0x10059f4b4 | v16@0:8
- (void)disconnect;
// IMP 0x10059f580 | v16@0:8
- (void)disconnectAfterReading;
// IMP 0x10059f620 | v16@0:8
- (void)disconnectAfterWriting;
// IMP 0x10059f6c0 | v16@0:8
- (void)disconnectAfterReadingAndWriting;
// IMP 0x10059f760 | v16@0:8
- (void)maybeClose;
// IMP 0x10059f7d0 | @24@0:8@16
- (id)badConfigError:(id)arg0;
// IMP 0x10059f840 | @24@0:8@16
- (id)badParamError:(id)arg0;
// IMP 0x10059f8b0 | @20@0:8i16
- (id)gaiError:(int)arg0;
// IMP 0x10059f964 | @24@0:8@16
- (id)errnoErrorWithReason:(id)arg0;
// IMP 0x10059fa54 | @16@0:8
- (id)errnoError;
// IMP 0x10059fb14 | @20@0:8i16
- (id)sslError:(int)arg0;
// IMP 0x10059fb90 | @16@0:8
- (id)connectTimeoutError;
// IMP 0x10059fc5c | @16@0:8
- (id)readMaxedOutError;
// IMP 0x10059fd28 | @16@0:8
- (id)readTimeoutError;
// IMP 0x10059fdf4 | @16@0:8
- (id)writeTimeoutError;
// IMP 0x10059fec0 | @16@0:8
- (id)connectionClosedError;
// IMP 0x10059ff8c | @24@0:8@16
- (id)otherError:(id)arg0;
// IMP 0x10059fffc | B16@0:8
- (BOOL)isDisconnected;
// IMP 0x1005a00f0 | B16@0:8
- (BOOL)isConnected;
// IMP 0x1005a01e0 | @16@0:8
- (id)connectedHost;
// IMP 0x1005a0364 | S16@0:8
- (unsigned short)connectedPort;
// IMP 0x1005a0498 | @16@0:8
- (id)localHost;
// IMP 0x1005a061c | S16@0:8
- (unsigned short)localPort;
// IMP 0x1005a0750 | @16@0:8
- (id)connectedHost4;
// IMP 0x1005a0780 | @16@0:8
- (id)connectedHost6;
// IMP 0x1005a07b0 | S16@0:8
- (unsigned short)connectedPort4;
// IMP 0x1005a07c8 | S16@0:8
- (unsigned short)connectedPort6;
// IMP 0x1005a07e0 | @16@0:8
- (id)localHost4;
// IMP 0x1005a0810 | @16@0:8
- (id)localHost6;
// IMP 0x1005a0840 | S16@0:8
- (unsigned short)localPort4;
// IMP 0x1005a0858 | S16@0:8
- (unsigned short)localPort6;
// IMP 0x1005a0870 | @20@0:8i16
- (id)connectedHostFromSocket4:(int)arg0;
// IMP 0x1005a0900 | @20@0:8i16
- (id)connectedHostFromSocket6:(int)arg0;
// IMP 0x1005a0964 | S20@0:8i16
- (unsigned short)connectedPortFromSocket4:(int)arg0;
// IMP 0x1005a09ec | S20@0:8i16
- (unsigned short)connectedPortFromSocket6:(int)arg0;
// IMP 0x1005a0a48 | @20@0:8i16
- (id)localHostFromSocket4:(int)arg0;
// IMP 0x1005a0ad8 | @20@0:8i16
- (id)localHostFromSocket6:(int)arg0;
// IMP 0x1005a0b3c | S20@0:8i16
- (unsigned short)localPortFromSocket4:(int)arg0;
// IMP 0x1005a0bc4 | S20@0:8i16
- (unsigned short)localPortFromSocket6:(int)arg0;
// IMP 0x1005a0c20 | @16@0:8
- (id)connectedAddress;
// IMP 0x1005a0e1c | @16@0:8
- (id)localAddress;
// IMP 0x1005a1018 | B16@0:8
- (BOOL)isIPv4;
// IMP 0x1005a10e8 | B16@0:8
- (BOOL)isIPv6;
// IMP 0x1005a11b8 | B16@0:8
- (BOOL)isSecure;
// IMP 0x1005a127c | v44@0:8^@16^@24@32S40
- (void)getInterfaceAddress4:(id *)arg0 address6:(id *)arg1 fromDescription:(id)arg2 port:(unsigned short)arg3;
// IMP 0x1005a167c | v20@0:8i16
- (void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg0;
// IMP 0x1005a18f8 | B16@0:8
- (BOOL)usingCFStreamForTLS;
// IMP 0x1005a1910 | B16@0:8
- (BOOL)usingSecureTransportForTLS;
// IMP 0x1005a1928 | v16@0:8
- (void)suspendReadSource;
// IMP 0x1005a1960 | v16@0:8
- (void)resumeReadSource;
// IMP 0x1005a1998 | v16@0:8
- (void)suspendWriteSource;
// IMP 0x1005a19d0 | v16@0:8
- (void)resumeWriteSource;
// IMP 0x1005a1a08 | v32@0:8d16q24
- (void)readDataWithTimeout:(double)arg0 tag:(long long)arg1;
// IMP 0x1005a1a1c | v48@0:8d16@24Q32q40
- (void)readDataWithTimeout:(double)arg0 buffer:(id)arg1 bufferOffset:(unsigned long long)arg2 tag:(long long)arg3;
// IMP 0x1005a1a28 | v56@0:8d16@24Q32Q40q48
- (void)readDataWithTimeout:(double)arg0 buffer:(id)arg1 bufferOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 tag:(long long)arg4;
// IMP 0x1005a1b6c | v40@0:8Q16d24q32
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
// IMP 0x1005a1b7c | v56@0:8Q16d24@32Q40q48
- (void)readDataToLength:(unsigned long long)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
// IMP 0x1005a1cc8 | v40@0:8@16d24q32
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
// IMP 0x1005a1cdc | v56@0:8@16d24@32Q40q48
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 tag:(long long)arg4;
// IMP 0x1005a1ce8 | v48@0:8@16d24Q32q40
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 maxLength:(unsigned long long)arg2 tag:(long long)arg3;
// IMP 0x1005a1cfc | v64@0:8@16d24@32Q40Q48q56
- (void)readDataToData:(id)arg0 withTimeout:(double)arg1 buffer:(id)arg2 bufferOffset:(unsigned long long)arg3 maxLength:(unsigned long long)arg4 tag:(long long)arg5;
// IMP 0x1005a1e7c | f40@0:8^q16^Q24^Q32
- (float)progressOfReadReturningTag:(long long *)arg0 bytesDone:(unsigned long long *)arg1 total:(unsigned long long *)arg2;
// IMP 0x1005a2034 | v16@0:8
- (void)maybeDequeueRead;
// IMP 0x1005a2164 | v16@0:8
- (void)flushSSLBuffers;
// IMP 0x1005a2368 | v16@0:8
- (void)doReadData;
// IMP 0x1005a2c38 | v16@0:8
- (void)doReadEOF;
// IMP 0x1005a2e70 | v16@0:8
- (void)completeCurrentRead;
// IMP 0x1005a304c | v16@0:8
- (void)endCurrentRead;
// IMP 0x1005a3088 | v24@0:8d16
- (void)setupReadTimerWithTimeout:(double)arg0;
// IMP 0x1005a3188 | v16@0:8
- (void)doReadTimeout;
// IMP 0x1005a3360 | v24@0:8d16
- (void)doReadTimeoutWithExtension:(double)arg0;
// IMP 0x1005a3410 | v40@0:8@16d24q32
- (void)writeData:(id)arg0 withTimeout:(double)arg1 tag:(long long)arg2;
// IMP 0x1005a3530 | f40@0:8^q16^Q24^Q32
- (float)progressOfWriteReturningTag:(long long *)arg0 bytesDone:(unsigned long long *)arg1 total:(unsigned long long *)arg2;
// IMP 0x1005a36e4 | v16@0:8
- (void)maybeDequeueWrite;
// IMP 0x1005a37e0 | v16@0:8
- (void)doWriteData;
// IMP 0x1005a3cb8 | v16@0:8
- (void)completeCurrentWrite;
// IMP 0x1005a3dc0 | v16@0:8
- (void)endCurrentWrite;
// IMP 0x1005a3dfc | v24@0:8d16
- (void)setupWriteTimerWithTimeout:(double)arg0;
// IMP 0x1005a3efc | v16@0:8
- (void)doWriteTimeout;
// IMP 0x1005a40d0 | v24@0:8d16
- (void)doWriteTimeoutWithExtension:(double)arg0;
// IMP 0x1005a4180 | v24@0:8@16
- (void)startTLS:(id)arg0;
// IMP 0x1005a42cc | v16@0:8
- (void)maybeStartTLS;
// IMP 0x1005a445c | i32@0:8^v16^Q24
- (int)sslReadWithBuffer:(void *)arg0 length:(unsigned long long *)arg1;
// IMP 0x1005a460c | i32@0:8r^v16^Q24
- (int)sslWriteWithBuffer:(void *)arg0 length:(unsigned long long *)arg1;
// IMP 0x1005a46c4 | v16@0:8
- (void)ssl_startTLS;
// IMP 0x1005a4d70 | v16@0:8
- (void)ssl_continueSSLHandshake;
// IMP 0x1005a4ee4 | v16@0:8
- (void)cf_finishSSLHandshake;
// IMP 0x1005a5010 | v24@0:8@16
- (void)cf_abortSSLHandshake:(id)arg0;
// IMP 0x1005a5030 | v16@0:8
- (void)cf_startTLS;
// IMP 0x1005a5418 | B16@0:8
- (BOOL)createReadAndWriteStream;
// IMP 0x1005a5508 | B20@0:8B16
- (BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg0;
// IMP 0x1005a5804 | B16@0:8
- (BOOL)addStreamsToRunLoop;
// IMP 0x1005a5864 | v16@0:8
- (void)removeStreamsFromRunLoop;
// IMP 0x1005a58b4 | B16@0:8
- (BOOL)openStreams;
// IMP 0x1005a591c | B16@0:8
- (BOOL)autoDisconnectOnClosedReadStream;
// IMP 0x1005a59e8 | v20@0:8B16
- (void)setAutoDisconnectOnClosedReadStream:(BOOL)arg0;
// IMP 0x1005a5aa0 | v24@0:8@16
- (void)markSocketQueueTargetQueue:(id)arg0;
// IMP 0x1005a5ab8 | v24@0:8@16
- (void)unmarkSocketQueueTargetQueue:(id)arg0;
// IMP 0x1005a5acc | v24@0:8@?16
- (void)performBlock:(id /* block */)arg0;
// IMP 0x1005a5b14 | i16@0:8
- (int)socketFD;
// IMP 0x1005a5b54 | i16@0:8
- (int)socket4FD;
// IMP 0x1005a5b88 | i16@0:8
- (int)socket6FD;
// IMP 0x1005a5bbc | ^{__CFReadStream=}16@0:8
- (struct __CFReadStream *)readStream;
// IMP 0x1005a5bf8 | ^{__CFWriteStream=}16@0:8
- (struct __CFWriteStream *)writeStream;
// IMP 0x1005a5c34 | B20@0:8B16
- (BOOL)enableBackgroundingOnSocketWithCaveat:(BOOL)arg0;
// IMP 0x1005a5cd0 | B16@0:8
- (BOOL)enableBackgroundingOnSocket;
// IMP 0x1005a5d0c | B16@0:8
- (BOOL)enableBackgroundingOnSocketWithCaveat;
// IMP 0x1005a5d48 | ^{SSLContext=}16@0:8
- (struct SSLContext *)sslContext;
// IMP 0x1005a60f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005a51a0 | v16@0:8
+ (void)startCFStreamThreadIfNeeded;
// IMP 0x1005a5260 | v16@0:8
+ (void)cfstreamThread;
// IMP 0x1005a5348 | v24@0:8@16
+ (void)scheduleCFStreams:(id)arg0;
// IMP 0x1005a53b0 | v24@0:8@16
+ (void)unscheduleCFStreams:(id)arg0;
// IMP 0x1005a5d74 | @24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
+ (id)hostFromSockaddr4:(struct sockaddr_in *)arg0;
// IMP 0x1005a5df0 | @24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
+ (id)hostFromSockaddr6:(struct sockaddr_in6 *)arg0;
// IMP 0x1005a5e6c | S24@0:8r^{sockaddr_in=CCS{in_addr=I}[8c]}16
+ (unsigned short)portFromSockaddr4:(struct sockaddr_in *)arg0;
// IMP 0x1005a5e7c | S24@0:8r^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
+ (unsigned short)portFromSockaddr6:(struct sockaddr_in6 *)arg0;
// IMP 0x1005a5e8c | @24@0:8@16
+ (id)hostFromAddress:(id)arg0;
// IMP 0x1005a5ef8 | S24@0:8@16
+ (unsigned short)portFromAddress:(id)arg0;
// IMP 0x1005a5f30 | B40@0:8^@16^S24@32
+ (BOOL)getHost:(id *)arg0 port:(unsigned short *)arg1 fromAddress:(id)arg2;
// IMP 0x1005a6090 | @16@0:8
+ (id)CRLFData;
// IMP 0x1005a60a8 | @16@0:8
+ (id)CRData;
// IMP 0x1005a60c0 | @16@0:8
+ (id)LFData;
// IMP 0x1005a60d8 | @16@0:8
+ (id)ZeroData;
@end
