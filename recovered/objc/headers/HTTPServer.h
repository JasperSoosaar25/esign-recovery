// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94a48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPServer : NSObject
// ivar asyncSocket encoding=@"GCDAsyncSocket" offset=8
// ivar serverQueue encoding=@"NSObject<OS_dispatch_queue>" offset=16
// ivar connectionQueue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// ivar IsOnServerQueueKey encoding=^v offset=32
// ivar IsOnConnectionQueueKey encoding=^v offset=40
// ivar documentRoot encoding=@"NSString" offset=48
// ivar connectionClass encoding=# offset=56
// ivar interface encoding=@"NSString" offset=64
// ivar port encoding=S offset=72
// ivar netService encoding=@"NSNetService" offset=80
// ivar domain encoding=@"NSString" offset=88
// ivar type encoding=@"NSString" offset=96
// ivar name encoding=@"NSString" offset=104
// ivar publishedName encoding=@"NSString" offset=112
// ivar txtRecordDictionary encoding=@"NSDictionary" offset=120
// ivar connections encoding=@"NSMutableArray" offset=128
// ivar webSockets encoding=@"NSMutableArray" offset=136
// ivar connectionsLock encoding=@"NSLock" offset=144
// ivar webSocketsLock encoding=@"NSLock" offset=152
// ivar isRunning encoding=B offset=160
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1005ac2a0 | @16@0:8
- (id)init;
// IMP 0x1005ac4c8 | v16@0:8
- (void)dealloc;
// IMP 0x1005ac548 | @16@0:8
- (id)documentRoot;
// IMP 0x1005ac628 | v24@0:8@16
- (void)setDocumentRoot:(id)arg0;
// IMP 0x1005ac6f4 | #16@0:8
- (Class)connectionClass;
// IMP 0x1005ac7a0 | v24@0:8#16
- (void)setConnectionClass:(Class)arg0;
// IMP 0x1005ac804 | @16@0:8
- (id)interface;
// IMP 0x1005ac8cc | v24@0:8@16
- (void)setInterface:(id)arg0;
// IMP 0x1005ac95c | S16@0:8
- (unsigned short)port;
// IMP 0x1005ac9fc | S16@0:8
- (unsigned short)listeningPort;
// IMP 0x1005acacc | v20@0:8S16
- (void)setPort:(unsigned short)arg0;
// IMP 0x1005acb38 | @16@0:8
- (id)domain;
// IMP 0x1005acc00 | v24@0:8@16
- (void)setDomain:(id)arg0;
// IMP 0x1005acc90 | @16@0:8
- (id)name;
// IMP 0x1005acd58 | @16@0:8
- (id)publishedName;
// IMP 0x1005acf08 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1005acf98 | @16@0:8
- (id)type;
// IMP 0x1005ad060 | v24@0:8@16
- (void)setType:(id)arg0;
// IMP 0x1005ad0f0 | @16@0:8
- (id)TXTRecordDictionary;
// IMP 0x1005ad1b8 | v24@0:8@16
- (void)setTXTRecordDictionary:(id)arg0;
// IMP 0x1005ad340 | B24@0:8^@16
- (BOOL)start:(id *)arg0;
// IMP 0x1005ad4d4 | v16@0:8
- (void)stop;
// IMP 0x1005ad4dc | v20@0:8B16
- (void)stop:(BOOL)arg0;
// IMP 0x1005ad744 | B16@0:8
- (BOOL)isRunning;
// IMP 0x1005ad7e4 | v24@0:8@16
- (void)addWebSocket:(id)arg0;
// IMP 0x1005ad838 | Q16@0:8
- (unsigned long long)numberOfHTTPConnections;
// IMP 0x1005ad874 | Q16@0:8
- (unsigned long long)numberOfWebSocketConnections;
// IMP 0x1005ad8b0 | @16@0:8
- (id)config;
// IMP 0x1005ad8e8 | v32@0:8@16@24
- (void)socket:(id)arg0 didAcceptNewSocket:(id)arg1;
// IMP 0x1005ad988 | v16@0:8
- (void)publishBonjour;
// IMP 0x1005adb9c | v16@0:8
- (void)unpublishBonjour;
// IMP 0x1005adc54 | v16@0:8
- (void)republishBonjour;
// IMP 0x1005adcd4 | v24@0:8@16
- (void)netServiceDidPublish:(id)arg0;
// IMP 0x1005adcd8 | v32@0:8@16@24
- (void)netService:(id)arg0 didNotPublish:(id)arg1;
// IMP 0x1005adcdc | v24@0:8@16
- (void)connectionDidDie:(id)arg0;
// IMP 0x1005add50 | v24@0:8@16
- (void)webSocketDidDie:(id)arg0;
// IMP 0x1005adf90 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005addc4 | v16@0:8
+ (void)startBonjourThreadIfNeeded;
// IMP 0x1005ade84 | v16@0:8
+ (void)bonjourThread;
// IMP 0x1005adf28 | v24@0:8@?16
+ (void)executeBonjourBlock:(id /* block */)arg0;
// IMP 0x1005adf34 | v24@0:8@?16
+ (void)performBonjourBlock:(id /* block */)arg0;
@end
