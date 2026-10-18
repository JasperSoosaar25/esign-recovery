// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82d28
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDLogMessage : NSObject
// ivar _message encoding=@"NSString" offset=8
// ivar _messageFormat encoding=@"NSString" offset=16
// ivar _level encoding=Q offset=24
// ivar _flag encoding=Q offset=32
// ivar _context encoding=q offset=40
// ivar _file encoding=@"NSString" offset=48
// ivar _fileName encoding=@"NSString" offset=56
// ivar _function encoding=@"NSString" offset=64
// ivar _line encoding=Q offset=72
// ivar _tag encoding=@ offset=80
// ivar _representedObject encoding=@ offset=88
// ivar _options encoding=q offset=96
// ivar _timestamp encoding=@"NSDate" offset=104
// ivar _threadID encoding=@"NSString" offset=112
// ivar _threadName encoding=@"NSString" offset=120
// ivar _queueLabel encoding=@"NSString" offset=128
// ivar _qos encoding=Q offset=136
// property message attributes=T@"NSString",R,N,V_message
// property messageFormat attributes=T@"NSString",R,N,V_messageFormat
// property level attributes=TQ,R,N,V_level
// property flag attributes=TQ,R,N,V_flag
// property context attributes=Tq,R,N,V_context
// property file attributes=T@"NSString",R,N,V_file
// property fileName attributes=T@"NSString",R,N,V_fileName
// property function attributes=T@"NSString",R,N,V_function
// property line attributes=TQ,R,N,V_line
// property tag attributes=T@,R,N
// property representedObject attributes=T@,R,N,V_representedObject
// property options attributes=Tq,R,N,V_options
// property timestamp attributes=T@"NSDate",R,N,V_timestamp
// property threadID attributes=T@"NSString",R,N,V_threadID
// property threadName attributes=T@"NSString",R,N,V_threadName
// property queueLabel attributes=T@"NSString",R,N,V_queueLabel
// property qos attributes=TQ,R,N,V_qos
// IMP 0x1004125a8 | @16@0:8
- (id)init;
// IMP 0x1004125dc | @104@0:8@16@24Q32Q40q48@56@64Q72@80q88@96
- (id)initWithFormat:(id)arg0 formatted:(id)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(id)arg5 function:(id)arg6 line:(unsigned long long)arg7 tag:(id)arg8 options:(long long)arg9 timestamp:(id)arg10;
// IMP 0x100412910 | @104@0:8@16*24Q32Q40q48@56@64Q72@80q88@96
- (id)initWithFormat:(id)arg0 args:(char *)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(id)arg5 function:(id)arg6 line:(unsigned long long)arg7 tag:(id)arg8 options:(long long)arg9 timestamp:(id)arg10;
// IMP 0x100412a4c | @96@0:8@16Q24Q32q40@48@56Q64@72q80@88
- (id)initWithMessage:(id)arg0 level:(unsigned long long)arg1 flag:(unsigned long long)arg2 context:(long long)arg3 file:(id)arg4 function:(id)arg5 line:(unsigned long long)arg6 tag:(id)arg7 options:(long long)arg8 timestamp:(id)arg9;
// IMP 0x100412a94 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100412c68 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100412d48 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100412e2c | @16@0:8
- (id)tag;
// IMP 0x100412e34 | @16@0:8
- (id)message;
// IMP 0x100412e3c | @16@0:8
- (id)messageFormat;
// IMP 0x100412e44 | Q16@0:8
- (unsigned long long)level;
// IMP 0x100412e4c | Q16@0:8
- (unsigned long long)flag;
// IMP 0x100412e54 | q16@0:8
- (long long)context;
// IMP 0x100412e5c | @16@0:8
- (id)file;
// IMP 0x100412e64 | @16@0:8
- (id)fileName;
// IMP 0x100412e6c | @16@0:8
- (id)function;
// IMP 0x100412e74 | Q16@0:8
- (unsigned long long)line;
// IMP 0x100412e7c | @16@0:8
- (id)representedObject;
// IMP 0x100412e84 | q16@0:8
- (long long)options;
// IMP 0x100412e8c | @16@0:8
- (id)timestamp;
// IMP 0x100412e94 | @16@0:8
- (id)threadID;
// IMP 0x100412e9c | @16@0:8
- (id)threadName;
// IMP 0x100412ea4 | @16@0:8
- (id)queueLabel;
// IMP 0x100412eac | Q16@0:8
- (unsigned long long)qos;
// IMP 0x100412eb4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
