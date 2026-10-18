// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c83f30
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebServerGZipDecoder : GCDWebServerBodyDecoder
// ivar _stream encoding={z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} offset=24
// ivar _finished encoding=B offset=136
// IMP 0x1004231e4 | B24@0:8^@16
- (BOOL)open:(id *)arg0;
// IMP 0x1004232b4 | B32@0:8@16^@24
- (BOOL)writeData:(id)arg0 error:(id *)arg1;
// IMP 0x100423490 | B24@0:8^@16
- (BOOL)close:(id *)arg0;
@end
