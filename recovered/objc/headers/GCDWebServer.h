// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83558
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServer : NSObject
// ivar _syncQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar _sourceGroup encoding=@"NSObject<OS_dispatch_group>" offset=16
// ivar _handlers encoding=@"NSMutableArray" offset=24
// ivar _activeConnections encoding=q offset=32
// ivar _connected encoding=B offset=40
// ivar _disconnectTimer encoding=^{__CFRunLoopTimer=} offset=48
// ivar _options encoding=@"NSDictionary" offset=56
// ivar _authenticationBasicAccounts encoding=@"NSMutableDictionary" offset=64
// ivar _authenticationDigestAccounts encoding=@"NSMutableDictionary" offset=72
// ivar _connectionClass encoding=# offset=80
// ivar _disconnectDelay encoding=d offset=88
// ivar _source4 encoding=@"NSObject<OS_dispatch_source>" offset=96
// ivar _source6 encoding=@"NSObject<OS_dispatch_source>" offset=104
// ivar _registrationService encoding=^{__CFNetService=} offset=112
// ivar _resolutionService encoding=^{__CFNetService=} offset=120
// ivar _dnsService encoding=^{_DNSServiceRef_t=} offset=128
// ivar _dnsSocket encoding=^{__CFSocket=} offset=136
// ivar _dnsSource encoding=^{__CFRunLoopSource=} offset=144
// ivar _dnsAddress encoding=@"NSString" offset=152
// ivar _dnsPort encoding=Q offset=160
// ivar _bindToLocalhost encoding=B offset=168
// ivar _suspendInBackground encoding=B offset=169
// ivar _backgroundTask encoding=Q offset=176
// ivar _shouldAutomaticallyMapHEADToGET encoding=B offset=184
// ivar _delegate encoding=@"<GCDWebServerDelegate>" offset=192
// ivar _port encoding=Q offset=200
// ivar _serverName encoding=@"NSString" offset=208
// ivar _authenticationRealm encoding=@"NSString" offset=216
// ivar _dispatchQueuePriority encoding=q offset=224
// property serverURL attributes=T@"NSURL",R,N
// property bonjourServerURL attributes=T@"NSURL",R,N
// property publicServerURL attributes=T@"NSURL",R,N
// property handlers attributes=T@"NSMutableArray",R,N,V_handlers
// property serverName attributes=T@"NSString",R,N,V_serverName
// property authenticationRealm attributes=T@"NSString",R,N,V_authenticationRealm
// property authenticationBasicAccounts attributes=T@"NSMutableDictionary",R,N,V_authenticationBasicAccounts
// property authenticationDigestAccounts attributes=T@"NSMutableDictionary",R,N,V_authenticationDigestAccounts
// property shouldAutomaticallyMapHEADToGET attributes=TB,R,N,V_shouldAutomaticallyMapHEADToGET
// property dispatchQueuePriority attributes=Tq,R,N,V_dispatchQueuePriority
// property delegate attributes=T@"<GCDWebServerDelegate>",W,N,V_delegate
// property running attributes=TB,R,N,GisRunning
// property port attributes=TQ,R,N,V_port
// property bonjourName attributes=T@"NSString",R,N
// property bonjourType attributes=T@"NSString",R,N
// IMP 0x10041ae40 | v24@0:8@16
- (void)logVerbose:(id)arg0;
// IMP 0x10041aec8 | v24@0:8@16
- (void)logInfo:(id)arg0;
// IMP 0x10041af50 | v24@0:8@16
- (void)logWarning:(id)arg0;
// IMP 0x10041afd8 | v24@0:8@16
- (void)logError:(id)arg0;
// IMP 0x10041a2b4 | v48@0:8@16@24@32Q40
- (void)addGETHandlerForPath:(id)arg0 staticData:(id)arg1 contentType:(id)arg2 cacheAge:(unsigned long long)arg3;
// IMP 0x10041a400 | v48@0:8@16@24B32Q36B44
- (void)addGETHandlerForPath:(id)arg0 filePath:(id)arg1 isAttachment:(BOOL)arg2 cacheAge:(unsigned long long)arg3 allowRangeRequests:(BOOL)arg4;
// IMP 0x10041a598 | @24@0:8@16
- (id)_responseWithContentsOfDirectory:(id)arg0;
// IMP 0x10041a8d0 | v52@0:8@16@24@32Q40B48
- (void)addGETHandlerForBasePath:(id)arg0 directoryPath:(id)arg1 indexFilename:(id)arg2 cacheAge:(unsigned long long)arg3 allowRangeRequests:(BOOL)arg4;
// IMP 0x10041981c | v40@0:8@16#24@?32
- (void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 processBlock:(id /* block */)arg2;
// IMP 0x10041992c | v40@0:8@16#24@?32
- (void)addDefaultHandlerForMethod:(id)arg0 requestClass:(Class)arg1 asyncProcessBlock:(id /* block */)arg2;
// IMP 0x100419aa0 | v48@0:8@16@24#32@?40
- (void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 processBlock:(id /* block */)arg3;
// IMP 0x100419bc0 | v48@0:8@16@24#32@?40
- (void)addHandlerForMethod:(id)arg0 path:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id /* block */)arg3;
// IMP 0x100419dc0 | v48@0:8@16@24#32@?40
- (void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 processBlock:(id /* block */)arg3;
// IMP 0x100419ee0 | v48@0:8@16@24#32@?40
- (void)addHandlerForMethod:(id)arg0 pathRegex:(id)arg1 requestClass:(Class)arg2 asyncProcessBlock:(id /* block */)arg3;
// IMP 0x1004194a0 | @16@0:8
- (id)serverURL;
// IMP 0x100419584 | @16@0:8
- (id)bonjourServerURL;
// IMP 0x100419688 | @16@0:8
- (id)publicServerURL;
// IMP 0x100419748 | B16@0:8
- (BOOL)start;
// IMP 0x100419758 | B32@0:8Q16@24
- (BOOL)startWithPort:(unsigned long long)arg0 bonjourName:(id)arg1;
// IMP 0x100416ae8 | @16@0:8
- (id)init;
// IMP 0x100416bb4 | v16@0:8
- (void)dealloc;
// IMP 0x100416be8 | v16@0:8
- (void)_startBackgroundTask;
// IMP 0x100416cd4 | v16@0:8
- (void)_didConnect;
// IMP 0x100416d8c | v24@0:8@16
- (void)willStartConnection:(id)arg0;
// IMP 0x100416ed8 | v16@0:8
- (void)_endBackgroundTask;
// IMP 0x100416f94 | v16@0:8
- (void)_didDisconnect;
// IMP 0x100417014 | v24@0:8@16
- (void)didEndConnection:(id)arg0;
// IMP 0x100417218 | @16@0:8
- (id)bonjourName;
// IMP 0x100417260 | @16@0:8
- (id)bonjourType;
// IMP 0x1004172a8 | v32@0:8@?16@?24
- (void)addHandlerWithMatchBlock:(id /* block */)arg0 processBlock:(id /* block */)arg1;
// IMP 0x1004173b0 | v32@0:8@?16@?24
- (void)addHandlerWithMatchBlock:(id /* block */)arg0 asyncProcessBlock:(id /* block */)arg1;
// IMP 0x100417434 | v16@0:8
- (void)removeAllHandlers;
// IMP 0x10041743c | i48@0:8B16r^v20I28Q32^@40
- (int)_createListeningSocket:(BOOL)arg0 localAddress:(void *)arg1 length:(unsigned int)arg2 maxPendingConnections:(unsigned long long)arg3 error:(id *)arg4;
// IMP 0x100417834 | @24@0:8i16B20
- (id)_createDispatchSourceWithListeningSocket:(int)arg0 isIPv6:(BOOL)arg1;
// IMP 0x100417ba0 | B24@0:8^@16
- (BOOL)_start:(id *)arg0;
// IMP 0x100418d6c | v16@0:8
- (void)_stop;
// IMP 0x100419058 | v24@0:8@16
- (void)_didEnterBackground:(id)arg0;
// IMP 0x1004190ac | v24@0:8@16
- (void)_willEnterForeground:(id)arg0;
// IMP 0x1004190c0 | B32@0:8@16^@24
- (BOOL)startWithOptions:(id)arg0 error:(id *)arg1;
// IMP 0x1004192c0 | B16@0:8
- (BOOL)isRunning;
// IMP 0x1004192d0 | v16@0:8
- (void)stop;
// IMP 0x100419398 | @16@0:8
- (id)delegate;
// IMP 0x1004193b0 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1004193bc | Q16@0:8
- (unsigned long long)port;
// IMP 0x1004193c4 | @16@0:8
- (id)handlers;
// IMP 0x1004193cc | @16@0:8
- (id)serverName;
// IMP 0x1004193d4 | @16@0:8
- (id)authenticationRealm;
// IMP 0x1004193dc | @16@0:8
- (id)authenticationBasicAccounts;
// IMP 0x1004193e4 | @16@0:8
- (id)authenticationDigestAccounts;
// IMP 0x1004193ec | B16@0:8
- (BOOL)shouldAutomaticallyMapHEADToGET;
// IMP 0x1004193f4 | q16@0:8
- (long long)dispatchQueuePriority;
// IMP 0x1004193fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10041ae0c | v20@0:8i16
+ (void)setLogLevel:(int)arg0;
// IMP 0x10041ae18 | v24@0:8@?16
+ (void)setBuiltInLogger:(id /* block */)arg0;
// IMP 0x100416ae4 | v16@0:8
+ (void)initialize;
@end
