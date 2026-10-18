// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94f10
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYTrace : NSObject
// ivar _result encoding=B offset=8
// ivar _stoped encoding=B offset=9
// ivar _errorCode encoding=i offset=12
// ivar _name encoding=@"NSString" offset=16
// ivar _beginDate encoding=@"NSDate" offset=24
// ivar _beginTimeInterval encoding=d offset=32
// ivar _costTime encoding=Q offset=40
// ivar _extInfos encoding=@"NSMutableDictionary" offset=48
// property name attributes=T@"NSString",&,V_name
// property beginDate attributes=T@"NSDate",&,V_beginDate
// property beginTimeInterval attributes=Td,V_beginTimeInterval
// property costTime attributes=TQ,V_costTime
// property result attributes=TB,V_result
// property errorCode attributes=Ti,V_errorCode
// property extInfos attributes=T@"NSMutableDictionary",&,V_extInfos
// property stoped attributes=TB,V_stoped
// IMP 0x100633b58 | @24@0:8@16
- (id)initWithName:(id)arg0;
// IMP 0x100633c24 | v16@0:8
- (void)start;
// IMP 0x100633c8c | v16@0:8
- (void)stop;
// IMP 0x100633ca0 | v24@0:8B16i20
- (void)stopWithResult:(BOOL)arg0 errorCode:(int)arg1;
// IMP 0x100633cb0 | v28@0:8B16i20B24
- (void)stopWithResult:(BOOL)arg0 errorCode:(int)arg1 immediately:(BOOL)arg2;
// IMP 0x100633da4 | v32@0:8@16@24
- (void)setValue:(id)arg0 forTraceKey:(id)arg1;
// IMP 0x100633eac | @24@0:8@16
- (id)valueForTraceKey:(id)arg0;
// IMP 0x100633f40 | @16@0:8
- (id)allTraceInfo;
// IMP 0x100634298 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006341fc | @16@0:8
- (id)name;
// IMP 0x100634208 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100634210 | @16@0:8
- (id)beginDate;
// IMP 0x10063421c | v24@0:8@16
- (void)setBeginDate:(id)arg0;
// IMP 0x100634224 | d16@0:8
- (double)beginTimeInterval;
// IMP 0x100634230 | v24@0:8d16
- (void)setBeginTimeInterval:(double)arg0;
// IMP 0x10063423c | Q16@0:8
- (unsigned long long)costTime;
// IMP 0x100634244 | v24@0:8Q16
- (void)setCostTime:(unsigned long long)arg0;
// IMP 0x10063424c | B16@0:8
- (BOOL)result;
// IMP 0x100634258 | v20@0:8B16
- (void)setResult:(BOOL)arg0;
// IMP 0x100634260 | i16@0:8
- (int)errorCode;
// IMP 0x100634268 | v20@0:8i16
- (void)setErrorCode:(int)arg0;
// IMP 0x100634270 | @16@0:8
- (id)extInfos;
// IMP 0x10063427c | v24@0:8@16
- (void)setExtInfos:(id)arg0;
// IMP 0x100634284 | B16@0:8
- (BOOL)stoped;
// IMP 0x100634290 | v20@0:8B16
- (void)setStoped:(BOOL)arg0;
// IMP 0x1006342d4 | v28@0:8@16B24
+ (void)logTrace:(id)arg0 immediately:(BOOL)arg1;
// IMP 0x1006343a0 | @16@0:8
+ (id)baseInfos;
// IMP 0x100633adc | @24@0:8@16
+ (id)startTraceWithName:(id)arg0;
@end
