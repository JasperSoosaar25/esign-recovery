// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0728
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPNGWriter : NSObject
// ivar data encoding=@"NSMutableData" offset=8
// ivar bytesperrow encoding=i offset=16
// ivar zs encoding={z_stream_s="next_in"*"avail_in"I"total_in"Q"next_out"*"avail_out"I"total_out"Q"msg"*"state"^{internal_state}"zalloc"^?"zfree"^?"opaque"^v"data_type"i"adler"Q"reserved"Q} offset=24
// ivar streaminited encoding=B offset=136
// ivar idatstart encoding=i offset=140
// IMP 0x100909cc8 | @16@0:8
- (id)init;
// IMP 0x100909d4c | v16@0:8
- (void)dealloc;
// IMP 0x100909da4 | @16@0:8
- (id)data;
// IMP 0x100909dac | v32@0:8i16i20i24i28
- (void)addIHDRWithWidth:(int)arg0 height:(int)arg1 bitDepth:(int)arg2 colourType:(int)arg3;
// IMP 0x100909e8c | v16@0:8
- (void)addIEND;
// IMP 0x100909ea8 | v32@0:8I16*20i28
- (void)addChunk:(unsigned int)arg0 bytes:(char *)arg1 length:(int)arg2;
// IMP 0x100909f98 | v16@0:8
- (void)startIDAT;
// IMP 0x10090a044 | v24@0:8*16
- (void)addIDATRow:(char *)arg0;
// IMP 0x10090a170 | v16@0:8
- (void)endIDAT;
// IMP 0x100909cac | @16@0:8
+ (id)PNGWriter;
@end
