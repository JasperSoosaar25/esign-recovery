// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0f58
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFString : NSObject
// ivar data encoding=@"NSData" offset=8
// ivar ref encoding=@"PDFObjectReference" offset=16
// ivar parser encoding=@"PDFParser" offset=24
// IMP 0x100923c9c | @40@0:8@16@24@32
- (id)initWithData:(id)arg0 parent:(id)arg1 parser:(id)arg2;
// IMP 0x100923d10 | v16@0:8
- (void)dealloc;
// IMP 0x100923d60 | @16@0:8
- (id)rawData;
// IMP 0x100923d68 | @16@0:8
- (id)reference;
// IMP 0x100923d70 | @16@0:8
- (id)data;
// IMP 0x100923dbc | @16@0:8
- (id)string;
// IMP 0x100923eec | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100923f54 | I16@0:8
- (unsigned int)hash;
// IMP 0x100923f74 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100923fbc | @16@0:8
- (id)description;
@end
