// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c987a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDSection : NSObject
// ivar _section encoding={section_64="sectname"[16c]"segname"[16c]"addr"Q"size"Q"offset"I"align"I"reloff"I"nreloc"I"flags"I"reserved1"I"reserved2"I"reserved3"I} offset=8
// ivar _data encoding=@"NSData" offset=88
// ivar _segment encoding=@"CDLCSegment" offset=96
// ivar _segmentName encoding=@"NSString" offset=104
// ivar _sectionName encoding=@"NSString" offset=112
// property segment attributes=T@"CDLCSegment",R,W,V_segment
// property data attributes=T@"NSData",R,N,V_data
// property segmentName attributes=T@"NSString",R,N,V_segmentName
// property sectionName attributes=T@"NSString",R,N,V_sectionName
// property addr attributes=TQ,R,N
// property size attributes=TQ,R,N
// IMP 0x1006f1144 | @32@0:8@16@24
- (id)initWithDataCursor:(id)arg0 segment:(id)arg1;
// IMP 0x1006f13a0 | @16@0:8
- (id)data;
// IMP 0x1006f1460 | Q16@0:8
- (unsigned long long)addr;
// IMP 0x1006f1468 | Q16@0:8
- (unsigned long long)size;
// IMP 0x1006f1470 | B24@0:8Q16
- (BOOL)containsAddress:(unsigned long long)arg0;
// IMP 0x1006f1498 | Q24@0:8Q16
- (unsigned long long)fileOffsetForAddress:(unsigned long long)arg0;
// IMP 0x1006f14ac | @16@0:8
- (id)description;
// IMP 0x1006f15b4 | @16@0:8
- (id)segment;
// IMP 0x1006f15cc | @16@0:8
- (id)segmentName;
// IMP 0x1006f15d4 | @16@0:8
- (id)sectionName;
// IMP 0x1006f15dc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
