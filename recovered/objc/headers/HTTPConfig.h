// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94818
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPConfig : NSObject
// ivar server encoding=@"HTTPServer" offset=8
// ivar documentRoot encoding=@"NSString" offset=16
// ivar queue encoding=@"NSObject<OS_dispatch_queue>" offset=24
// property server attributes=T@"HTTPServer",R,N,Vserver
// property documentRoot attributes=T@"NSString",R,N,VdocumentRoot
// property queue attributes=T@"NSObject<OS_dispatch_queue>",R,N,Vqueue
// IMP 0x1005ab070 | @32@0:8@16@24
- (id)initWithServer:(id)arg0 documentRoot:(id)arg1;
// IMP 0x1005ab100 | @40@0:8@16@24@32
- (id)initWithServer:(id)arg0 documentRoot:(id)arg1 queue:(id)arg2;
// IMP 0x1005ab210 | v16@0:8
- (void)dealloc;
// IMP 0x1005ab244 | @16@0:8
- (id)server;
// IMP 0x1005ab24c | @16@0:8
- (id)documentRoot;
// IMP 0x1005ab254 | @16@0:8
- (id)queue;
// IMP 0x1005ab25c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
