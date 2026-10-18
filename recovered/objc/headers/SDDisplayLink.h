// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8f970
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDDisplayLink : NSObject
// ivar _target encoding=@ offset=8
// ivar _selector encoding=: offset=16
// ivar _displayLink encoding=@"CADisplayLink" offset=24
// property displayLink attributes=T@"CADisplayLink",&,N,V_displayLink
// property target attributes=T@,R,W,N,V_target
// property selector attributes=T:,R,N,V_selector
// property duration attributes=Td,R,N
// property isRunning attributes=TB,R,N
// IMP 0x100539b30 | v16@0:8
- (void)dealloc;
// IMP 0x100539b84 | @32@0:8@16:24
- (id)initWithTarget:(id)arg0 selector:(SEL)arg1;
// IMP 0x100539cb0 | d16@0:8
- (double)duration;
// IMP 0x100539d08 | B16@0:8
- (BOOL)isRunning;
// IMP 0x100539d44 | v32@0:8@16@24
- (void)addToRunLoop:(id)arg0 forMode:(id)arg1;
// IMP 0x100539dc4 | v32@0:8@16@24
- (void)removeFromRunLoop:(id)arg0 forMode:(id)arg1;
// IMP 0x100539e44 | v16@0:8
- (void)start;
// IMP 0x100539e78 | v16@0:8
- (void)stop;
// IMP 0x100539eac | v24@0:8@16
- (void)displayLinkDidRefresh:(id)arg0;
// IMP 0x100539ee4 | @16@0:8
- (id)target;
// IMP 0x100539efc | :16@0:8
- (SEL)selector;
// IMP 0x100539f04 | @16@0:8
- (id)displayLink;
// IMP 0x100539f0c | v24@0:8@16
- (void)setDisplayLink:(id)arg0;
// IMP 0x100539f18 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100539c54 | @32@0:8@16:24
+ (id)displayLinkWithTarget:(id)arg0 selector:(SEL)arg1;
@end
