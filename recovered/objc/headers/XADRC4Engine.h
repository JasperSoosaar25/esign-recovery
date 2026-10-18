// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ed48
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRC4Engine : NSObject
// ivar s encoding=[256C] offset=8
// ivar i encoding=i offset=264
// ivar j encoding=i offset=268
// IMP 0x1008e13c4 | @24@0:8@16
- (id)initWithKey:(id)arg0;
// IMP 0x1008e14c0 | @24@0:8@16
- (id)encryptedData:(id)arg0;
// IMP 0x1008e1548 | v28@0:8*16i24
- (void)encryptBytes:(char *)arg0 length:(int)arg1;
// IMP 0x1008e15c4 | v20@0:8i16
- (void)skipBytes:(int)arg0;
// IMP 0x1008e1388 | @24@0:8@16
+ (id)engineWithKey:(id)arg0;
@end
