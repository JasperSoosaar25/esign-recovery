// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c959b0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYThreadInfo : NSObject
// ivar _index encoding=C offset=8
// ivar _highLightThread encoding=B offset=9
// ivar _mainThread encoding=B offset=10
// ivar _threadId encoding=Q offset=16
// ivar _name encoding=@"NSString" offset=24
// ivar _stackFrames encoding=@"NSArray" offset=32
// ivar _backtrace encoding=@"NSArray" offset=40
// ivar _exceptionCallStack encoding=@"NSArray" offset=48
// property index attributes=TC,N,V_index
// property threadId attributes=TQ,N,V_threadId
// property name attributes=T@"NSString",C,N,V_name
// property highLightThread attributes=TB,N,GisHighLightedThread,V_highLightThread
// property mainThread attributes=TB,N,GisMainThread,V_mainThread
// property stackFrames attributes=T@"NSArray",C,N,V_stackFrames
// property backtrace attributes=T@"NSArray",C,N,V_backtrace
// property exceptionCallStack attributes=T@"NSArray",C,N,V_exceptionCallStack
// IMP 0x100645e18 | @16@0:8
- (id)init;
// IMP 0x100645e4c | @16@0:8
- (id)callStackSymbols;
// IMP 0x100646108 | @16@0:8
- (id)callStack;
// IMP 0x1006463c4 | @16@0:8
- (id)exceptionCallStackSymbols;
// IMP 0x100646818 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100646788 | C16@0:8
- (unsigned char)index;
// IMP 0x100646790 | v20@0:8C16
- (void)setIndex:(unsigned char)arg0;
// IMP 0x100646798 | Q16@0:8
- (unsigned long long)threadId;
// IMP 0x1006467a0 | v24@0:8Q16
- (void)setThreadId:(unsigned long long)arg0;
// IMP 0x1006467a8 | @16@0:8
- (id)name;
// IMP 0x1006467b4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1006467bc | B16@0:8
- (BOOL)isHighLightedThread;
// IMP 0x1006467c4 | v20@0:8B16
- (void)setHighLightThread:(BOOL)arg0;
// IMP 0x1006467cc | B16@0:8
- (BOOL)isMainThread;
// IMP 0x1006467d4 | v20@0:8B16
- (void)setMainThread:(BOOL)arg0;
// IMP 0x1006467dc | @16@0:8
- (id)stackFrames;
// IMP 0x1006467e8 | v24@0:8@16
- (void)setStackFrames:(id)arg0;
// IMP 0x1006467f0 | @16@0:8
- (id)backtrace;
// IMP 0x1006467fc | v24@0:8@16
- (void)setBacktrace:(id)arg0;
// IMP 0x100646804 | @16@0:8
- (id)exceptionCallStack;
// IMP 0x100646810 | v24@0:8@16
- (void)setExceptionCallStack:(id)arg0;
@end
