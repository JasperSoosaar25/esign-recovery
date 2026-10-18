// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ffa8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADZlibHandle : XADStreamHandle
// ivar startoffs encoding=q offset=64
// ivar zs encoding={z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} offset=72
// ivar inited encoding=B offset=184
// ivar seekback encoding=B offset=185
// ivar endstreamateof encoding=B offset=186
// ivar inbuffer encoding=[16384C] offset=187
// IMP 0x1008e3680 | d16@0:8
- (double)estimatedProgress;
// IMP 0x1008e89dc | @36@0:8@16q24B32
- (id)initWithHandle:(id)arg0 length:(long long)arg1 header:(BOOL)arg2;
// IMP 0x1008e8ab8 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e8ba0 | v16@0:8
- (void)dealloc;
// IMP 0x1008e8c00 | v20@0:8B16
- (void)setSeekBackAtEOF:(BOOL)arg0;
// IMP 0x1008e8c10 | v20@0:8B16
- (void)setEndStreamAtInputEOF:(BOOL)arg0;
// IMP 0x1008e8c20 | v16@0:8
- (void)resetStream;
// IMP 0x1008e8c74 | i28@0:8i16^v20
- (int)streamAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e8dbc | v16@0:8
- (void)_raiseZlib;
// IMP 0x1008e88d4 | @24@0:8@16
+ (id)zlibHandleWithHandle:(id)arg0;
// IMP 0x1008e8914 | @32@0:8@16q24
+ (id)zlibHandleWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008e8958 | @24@0:8@16
+ (id)deflateHandleWithHandle:(id)arg0;
// IMP 0x1008e8998 | @32@0:8@16q24
+ (id)deflateHandleWithHandle:(id)arg0 length:(long long)arg1;
@end
