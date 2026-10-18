// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94b60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MultipartMessageHeaderField : NSObject
// ivar name encoding=@"NSString" offset=8
// ivar value encoding=@"NSString" offset=16
// ivar params encoding=@"NSMutableDictionary" offset=24
// property value attributes=T@"NSString",R,Vvalue
// property params attributes=T@"NSDictionary",R,Vparams
// property name attributes=T@"NSString",R,Vname
// IMP 0x1005af3cc | @32@0:8@16Q24
- (id)initWithData:(id)arg0 contentEncoding:(unsigned long long)arg1;
// IMP 0x1005af5cc | B40@0:8*16Q24Q32
- (BOOL)parseHeaderValueBytes:(char *)arg0 length:(unsigned long long)arg1 encoding:(unsigned long long)arg2;
// IMP 0x1005af88c | @16@0:8
- (id)description;
// IMP 0x1005af8cc | @16@0:8
- (id)name;
// IMP 0x1005af8d8 | @16@0:8
- (id)value;
// IMP 0x1005af8e4 | @16@0:8
- (id)params;
// IMP 0x1005af8f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
