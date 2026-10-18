// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82d00
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLog : NSObject
// ivar __loggers encoding=@"NSMutableArray" offset=8
// property _loggers attributes=T@"NSMutableArray",&,N,V__loggers
// property allLoggers attributes=T@"NSArray",R,C,N
// property allLoggersWithLevel attributes=T@"NSArray",R,C,N
// IMP 0x100410638 | @16@0:8
- (id)init;
// IMP 0x100410708 | v24@0:8@16
- (void)applicationWillTerminate:(id)arg0;
// IMP 0x10041075c | v24@0:8@16
- (void)addLogger:(id)arg0;
// IMP 0x1004107c4 | v32@0:8@16Q24
- (void)addLogger:(id)arg0 withLevel:(unsigned long long)arg1;
// IMP 0x1004108e8 | v24@0:8@16
- (void)removeLogger:(id)arg0;
// IMP 0x1004109e4 | v16@0:8
- (void)removeAllLoggers;
// IMP 0x100410ab4 | @16@0:8
- (id)allLoggers;
// IMP 0x100410c18 | @16@0:8
- (id)allLoggersWithLevel;
// IMP 0x100410d20 | v28@0:8@16B24
- (void)queueLogMessage:(id)arg0 asynchronously:(BOOL)arg1;
// IMP 0x100410e68 | v84@0:8B16Q20Q28q36r*44r*52Q60@68@76
- (void)log:(BOOL)arg0 level:(unsigned long long)arg1 flag:(unsigned long long)arg2 context:(long long)arg3 file:(char *)arg4 function:(char *)arg5 line:(unsigned long long)arg6 tag:(id)arg7 format:(id)arg8;
// IMP 0x100410f64 | v92@0:8B16Q20Q28q36r*44r*52Q60@68@76*84
- (void)log:(BOOL)arg0 level:(unsigned long long)arg1 flag:(unsigned long long)arg2 context:(long long)arg3 file:(char *)arg4 function:(char *)arg5 line:(unsigned long long)arg6 tag:(id)arg7 format:(id)arg8 args:(char *)arg9;
// IMP 0x100411118 | v28@0:8B16@20
- (void)log:(BOOL)arg0 message:(id)arg1;
// IMP 0x100411158 | v16@0:8
- (void)flushLog;
// IMP 0x1004115d0 | v32@0:8@16Q24
- (void)lt_addLogger:(id)arg0 level:(unsigned long long)arg1;
// IMP 0x100411920 | v24@0:8@16
- (void)lt_removeLogger:(id)arg0;
// IMP 0x100411b0c | v16@0:8
- (void)lt_removeAllLoggers;
// IMP 0x100411cbc | @16@0:8
- (id)lt_allLoggers;
// IMP 0x100411de4 | @16@0:8
- (id)lt_allLoggersWithLevel;
// IMP 0x100411f38 | v24@0:8@16
- (void)lt_log:(id)arg0;
// IMP 0x100412248 | v16@0:8
- (void)lt_flush;
// IMP 0x1004123e8 | @16@0:8
- (id)_loggers;
// IMP 0x1004123f0 | v24@0:8@16
- (void)set_loggers:(id)arg0;
// IMP 0x1004123fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1004104cc | @16@0:8
+ (id)sharedInstance;
// IMP 0x10041056c | v16@0:8
+ (void)initialize;
// IMP 0x1004106fc | @16@0:8
+ (id)loggingQueue;
// IMP 0x10041070c | v24@0:8@16
+ (void)addLogger:(id)arg0;
// IMP 0x100410764 | v32@0:8@16Q24
+ (void)addLogger:(id)arg0 withLevel:(unsigned long long)arg1;
// IMP 0x100410898 | v24@0:8@16
+ (void)removeLogger:(id)arg0;
// IMP 0x1004109b4 | v16@0:8
+ (void)removeAllLoggers;
// IMP 0x100410a70 | @16@0:8
+ (id)allLoggers;
// IMP 0x100410bd4 | @16@0:8
+ (id)allLoggersWithLevel;
// IMP 0x100410e30 | v84@0:8B16Q20Q28q36r*44r*52Q60@68@76
+ (void)log:(BOOL)arg0 level:(unsigned long long)arg1 flag:(unsigned long long)arg2 context:(long long)arg3 file:(char *)arg4 function:(char *)arg5 line:(unsigned long long)arg6 tag:(id)arg7 format:(id)arg8;
// IMP 0x100410ea0 | v92@0:8B16Q20Q28q36r*44r*52Q60@68@76*84
+ (void)log:(BOOL)arg0 level:(unsigned long long)arg1 flag:(unsigned long long)arg2 context:(long long)arg3 file:(char *)arg4 function:(char *)arg5 line:(unsigned long long)arg6 tag:(id)arg7 format:(id)arg8 args:(char *)arg9;
// IMP 0x1004110b8 | v28@0:8B16@20
+ (void)log:(BOOL)arg0 message:(id)arg1;
// IMP 0x100411128 | v16@0:8
+ (void)flushLog;
// IMP 0x1004111e4 | B24@0:8#16
+ (BOOL)isRegisteredClass:(Class)arg0;
// IMP 0x1004112b0 | @16@0:8
+ (id)registeredClasses;
// IMP 0x1004113a4 | @16@0:8
+ (id)registeredClassNames;
// IMP 0x1004114f8 | Q24@0:8#16
+ (unsigned long long)levelForClass:(Class)arg0;
// IMP 0x100411530 | Q24@0:8@16
+ (unsigned long long)levelForClassWithName:(id)arg0;
// IMP 0x10041155c | v32@0:8Q16#24
+ (void)setLevel:(unsigned long long)arg0 forClass:(Class)arg1;
// IMP 0x10041159c | v32@0:8Q16@24
+ (void)setLevel:(unsigned long long)arg0 forClassWithName:(id)arg1;
@end
