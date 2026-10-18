// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c950c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYLogger : NSObject
// IMP 0x100636b54 | v16@0:8
+ (void)initialize;
// IMP 0x100636dfc | v24@0:8Q16
+ (void)setLogLevel:(unsigned long long)arg0;
// IMP 0x100636e08 | Q16@0:8
+ (unsigned long long)logLevel;
// IMP 0x100636e14 | B24@0:8Q16
+ (BOOL)isLoggable:(unsigned long long)arg0;
// IMP 0x100636e58 | v20@0:8B16
+ (void)setLogUrgentMode:(BOOL)arg0;
// IMP 0x100636e64 | v20@0:8B16
+ (void)setUserLogActivied:(BOOL)arg0;
// IMP 0x100636e70 | B16@0:8
+ (BOOL)isLogUserActivied;
// IMP 0x100636e7c | @16@0:8
+ (id)logs;
// IMP 0x100636ef0 | v28@0:8Q16B24
+ (void)initLogger:(unsigned long long)arg0 printStdout:(BOOL)arg1;
// IMP 0x100637004 | v64@0:8Q16r*24r*32Q40@48@56
+ (void)level:(unsigned long long)arg0 file:(char *)arg1 function:(char *)arg2 line:(unsigned long long)arg3 tag:(id)arg4 log:(id)arg5;
// IMP 0x100637100 | v64@0:8@16Q24r*32r*40Q48@56
+ (void)log:(id)arg0 level:(unsigned long long)arg1 file:(char *)arg2 function:(char *)arg3 line:(unsigned long long)arg4 tag:(id)arg5;
// IMP 0x1006372a4 | v24@0:8@16
+ (void)queueLogMessage:(id)arg0;
// IMP 0x1006373c0 | v24@0:8@16
+ (void)printLog:(id)arg0;
// IMP 0x1006375ac | v24@0:8@16
+ (void)addLogger:(id)arg0;
// IMP 0x100637680 | v24@0:8@16
+ (void)removeLogger:(id)arg0;
// IMP 0x100637754 | v16@0:8
+ (void)removeAllLoggers;
// IMP 0x1006377e8 | v24@0:8@16
+ (void)addLoggerToQueue:(id)arg0;
// IMP 0x100637998 | v24@0:8@16
+ (void)removeLoggerFromQueue:(id)arg0;
// IMP 0x100637b68 | v16@0:8
+ (void)cleanAllLoggers;
@end
