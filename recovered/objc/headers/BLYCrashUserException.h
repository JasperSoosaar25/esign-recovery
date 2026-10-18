// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95320
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYCrashUserException : NSObject
// ivar _backtraceLength encoding=i offset=8
// ivar _category encoding=Q offset=16
// ivar _name encoding=@"NSString" offset=24
// ivar _userError encoding=@"NSError" offset=32
// ivar _userException encoding=@"NSException" offset=40
// ivar _reason encoding=@"NSString" offset=48
// ivar _extraInfo encoding=@"NSDictionary" offset=56
// ivar _userCallStack encoding=@"NSArray" offset=64
// ivar _occurTime encoding=d offset=72
// ivar _backtrace encoding=^Q offset=80
// property category attributes=TQ,N,V_category
// property name attributes=T@"NSString",C,N,V_name
// property userError attributes=T@"NSError",&,N,V_userError
// property userException attributes=T@"NSException",&,N,V_userException
// property occurTime attributes=Td,N,V_occurTime
// property backtrace attributes=T^Q,N,V_backtrace
// property backtraceLength attributes=Ti,N,V_backtraceLength
// property reason attributes=T@"NSString",C,N,V_reason
// property extraInfo attributes=T@"NSDictionary",C,N,V_extraInfo
// property userCallStack attributes=T@"NSArray",C,N,V_userCallStack
// IMP 0x10063e740 | @16@0:8
- (id)init;
// IMP 0x10063e7a4 | @16@0:8
- (id)exceptionName;
// IMP 0x10063e7e4 | @16@0:8
- (id)exceptionReason;
// IMP 0x10063e824 | @16@0:8
- (id)callStack;
// IMP 0x10063e97c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10063e8c4 | Q16@0:8
- (unsigned long long)category;
// IMP 0x10063e8cc | v24@0:8Q16
- (void)setCategory:(unsigned long long)arg0;
// IMP 0x10063e8d4 | @16@0:8
- (id)name;
// IMP 0x10063e8e0 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10063e8e8 | @16@0:8
- (id)userError;
// IMP 0x10063e8f0 | v24@0:8@16
- (void)setUserError:(id)arg0;
// IMP 0x10063e8fc | @16@0:8
- (id)userException;
// IMP 0x10063e904 | v24@0:8@16
- (void)setUserException:(id)arg0;
// IMP 0x10063e910 | @16@0:8
- (id)reason;
// IMP 0x10063e91c | v24@0:8@16
- (void)setReason:(id)arg0;
// IMP 0x10063e924 | @16@0:8
- (id)extraInfo;
// IMP 0x10063e930 | v24@0:8@16
- (void)setExtraInfo:(id)arg0;
// IMP 0x10063e938 | @16@0:8
- (id)userCallStack;
// IMP 0x10063e944 | v24@0:8@16
- (void)setUserCallStack:(id)arg0;
// IMP 0x10063e94c | d16@0:8
- (double)occurTime;
// IMP 0x10063e954 | v24@0:8d16
- (void)setOccurTime:(double)arg0;
// IMP 0x10063e95c | ^Q16@0:8
- (unsigned long long *)backtrace;
// IMP 0x10063e964 | v24@0:8^Q16
- (void)setBacktrace:(unsigned long long *)arg0;
// IMP 0x10063e96c | i16@0:8
- (int)backtraceLength;
// IMP 0x10063e974 | v20@0:8i16
- (void)setBacktraceLength:(int)arg0;
// IMP 0x10063e10c | B24@0:8Q16
+ (BOOL)isSupportedCategory:(unsigned long long)arg0;
// IMP 0x10063e130 | @24@0:8@16
+ (id)exceptionWithError:(id)arg0;
// IMP 0x10063e43c | @24@0:8@16
+ (id)exceptionWithException:(id)arg0;
// IMP 0x10063e6b4 | @32@0:8Q16@24
+ (id)exceptionWithCategory:(unsigned long long)arg0 name:(id)arg1;
@end
