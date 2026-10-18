// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c84348
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerGZipEncoder : GCDWebServerBodyEncoder
// ivar _stream encoding={z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} offset=24
// ivar _finished encoding=B offset=136
// IMP 0x1004240ac | @32@0:8@16@24
- (id)initWithResponse:(id)arg0 reader:(id)arg1;
// IMP 0x100424144 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x100424224 | @24@0:8^@16
- (id)readData:(id *)arg0;
// IMP 0x100424400 | v16@0:8
- (void)close;
@end
