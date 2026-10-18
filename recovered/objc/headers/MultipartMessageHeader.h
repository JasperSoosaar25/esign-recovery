// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94ae8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MultipartMessageHeader : NSObject
// ivar fields encoding=@"NSMutableDictionary" offset=8
// ivar encoding encoding=i offset=16
// ivar contentDispositionName encoding=@"NSString" offset=24
// property fields attributes=T@"NSDictionary",R,Vfields
// property encoding attributes=Ti,R,Vencoding
// IMP 0x1005af14c | @32@0:8@16Q24
- (id)initWithData:(id)arg0 formEncoding:(unsigned long long)arg1;
// IMP 0x1005af350 | @16@0:8
- (id)description;
// IMP 0x1005af388 | @16@0:8
- (id)fields;
// IMP 0x1005af394 | i16@0:8
- (int)encoding;
// IMP 0x1005af39c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
