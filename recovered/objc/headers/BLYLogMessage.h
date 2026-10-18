// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c950f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYLogMessage : NSObject
// ivar _message encoding=@"NSString" offset=8
// ivar _level encoding=Q offset=16
// ivar _file encoding=@"NSString" offset=24
// ivar _fileName encoding=@"NSString" offset=32
// ivar _function encoding=@"NSString" offset=40
// ivar _line encoding=Q offset=48
// ivar _tag encoding=@"NSString" offset=56
// ivar _processId encoding=@"NSString" offset=64
// ivar _threadId encoding=@"NSString" offset=72
// ivar _threadName encoding=@"NSString" offset=80
// ivar _timestamp encoding={tm="tm_sec"i"tm_min"i"tm_hour"i"tm_mday"i"tm_mon"i"tm_year"i"tm_wday"i"tm_yday"i"tm_isdst"i"tm_gmtoff"q"tm_zone"*} offset=88
// property message attributes=T@"NSString",R,N,V_message
// property level attributes=TQ,R,N,V_level
// property file attributes=T@"NSString",R,N,V_file
// property fileName attributes=T@"NSString",R,N,V_fileName
// property function attributes=T@"NSString",R,N,V_function
// property line attributes=TQ,R,N,V_line
// property tag attributes=T@"NSString",R,N,V_tag
// property processId attributes=T@"NSString",R,N,V_processId
// property threadId attributes=T@"NSString",R,N,V_threadId
// property threadName attributes=T@"NSString",R,N,V_threadName
// property timestamp attributes=T{tm=iiiiiiiiiq*},R,N,V_timestamp
// IMP 0x100637b7c | @72@0:8@16Q24@32@40Q48@56@64
- (id)initWithMessage:(id)arg0 level:(unsigned long long)arg1 file:(id)arg2 function:(id)arg3 line:(unsigned long long)arg4 tag:(id)arg5 timestamp:(id)arg6;
// IMP 0x100637e78 | @16@0:8
- (id)logLevelName;
// IMP 0x100637f18 | @16@0:8
- (id)logLevelFullName;
// IMP 0x100637fb0 | @16@0:8
- (id)logTag;
// IMP 0x10063804c | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100638190 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100638120 | @16@0:8
- (id)message;
// IMP 0x100638128 | Q16@0:8
- (unsigned long long)level;
// IMP 0x100638130 | @16@0:8
- (id)file;
// IMP 0x100638138 | @16@0:8
- (id)fileName;
// IMP 0x100638140 | @16@0:8
- (id)function;
// IMP 0x100638148 | Q16@0:8
- (unsigned long long)line;
// IMP 0x100638150 | @16@0:8
- (id)tag;
// IMP 0x100638158 | @16@0:8
- (id)processId;
// IMP 0x100638160 | @16@0:8
- (id)threadId;
// IMP 0x100638168 | @16@0:8
- (id)threadName;
// IMP 0x100638170 | {tm=iiiiiiiiiq*}16@0:8
- (struct tm)timestamp;
@end
