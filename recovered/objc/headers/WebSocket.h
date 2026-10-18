// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94b88
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface WebSocket : NSObject
// ivar websocketQueue encoding=@"NSObject<OS_dispatch_queue>" offset=8
// ivar request encoding=@"HTTPMessage" offset=16
// ivar asyncSocket encoding=@"GCDAsyncSocket" offset=24
// ivar term encoding=@"NSData" offset=32
// ivar isStarted encoding=B offset=40
// ivar isOpen encoding=B offset=41
// ivar isVersion76 encoding=B offset=42
// ivar delegate encoding=@ offset=48
// ivar isRFC6455 encoding=B offset=56
// ivar nextFrameMasked encoding=B offset=57
// ivar nextOpCode encoding=Q offset=64
// ivar maskingKey encoding=@"NSData" offset=72
// property delegate attributes=T@
// property websocketQueue attributes=T@"NSObject<OS_dispatch_queue>",R,N,VwebsocketQueue
// IMP 0x1005afac0 | @32@0:8@16@24
- (id)initWithRequest:(id)arg0 socket:(id)arg1;
// IMP 0x1005afc10 | v16@0:8
- (void)dealloc;
// IMP 0x1005afc68 | @16@0:8
- (id)delegate;
// IMP 0x1005afd48 | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1005afdd8 | v16@0:8
- (void)start;
// IMP 0x1005afe8c | v16@0:8
- (void)stop;
// IMP 0x1005aff18 | v16@0:8
- (void)readRequestBody;
// IMP 0x1005aff2c | @16@0:8
- (id)originResponseHeaderValue;
// IMP 0x1005affdc | @16@0:8
- (id)locationResponseHeaderValue;
// IMP 0x1005b0128 | @16@0:8
- (id)secWebSocketKeyResponseHeaderValue;
// IMP 0x1005b01dc | v16@0:8
- (void)sendResponseHeaders;
// IMP 0x1005b0360 | @24@0:8@16
- (id)processKey:(id)arg0;
// IMP 0x1005b0488 | v24@0:8@16
- (void)sendResponseBody:(id)arg0;
// IMP 0x1005b05cc | v16@0:8
- (void)didOpen;
// IMP 0x1005b0634 | v24@0:8@16
- (void)sendMessage:(id)arg0;
// IMP 0x1005b0678 | v24@0:8@16
- (void)sendData:(id)arg0;
// IMP 0x1005b0868 | v24@0:8@16
- (void)didReceiveMessage:(id)arg0;
// IMP 0x1005b08b8 | v16@0:8
- (void)didClose;
// IMP 0x1005b0920 | B20@0:8C16
- (BOOL)isValidWebSocketFrame:(unsigned char)arg0;
// IMP 0x1005b094c | v40@0:8@16@24q32
- (void)socket:(id)arg0 didReadData:(id)arg1 withTag:(long long)arg2;
// IMP 0x1005b0c88 | v32@0:8@16@24
- (void)socketDidDisconnect:(id)arg0 withError:(id)arg1;
// IMP 0x1005b0c8c | @16@0:8
- (id)websocketQueue;
// IMP 0x1005b0c94 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005af92c | B24@0:8@16
+ (BOOL)isWebSocketRequest:(id)arg0;
// IMP 0x1005af9f0 | B24@0:8@16
+ (BOOL)isVersion76Request:(id)arg0;
// IMP 0x1005afa80 | B24@0:8@16
+ (BOOL)isRFC6455Request:(id)arg0;
@end
