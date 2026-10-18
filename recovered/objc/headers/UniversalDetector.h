// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a948
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UniversalDetector : NSObject
// ivar detector encoding=^v offset=8
// ivar charset encoding=@"NSString" offset=16
// ivar confidence encoding=f offset=24
// ivar lastcstring encoding=r* offset=32
// IMP 0x10081bdac | @16@0:8
- (id)init;
// IMP 0x10081be1c | v16@0:8
- (void)dealloc;
// IMP 0x10081be7c | v24@0:8@16
- (void)analyzeData:(id)arg0;
// IMP 0x10081bef4 | v28@0:8r*16i24
- (void)analyzeBytes:(char *)arg0 length:(int)arg1;
// IMP 0x10081bf30 | v16@0:8
- (void)reset;
// IMP 0x10081bf5c | B16@0:8
- (BOOL)done;
// IMP 0x10081bf94 | @16@0:8
- (id)MIMECharset;
// IMP 0x10081c05c | f16@0:8
- (float)confidence;
// IMP 0x10081c0a0 | Q16@0:8
- (unsigned long long)encoding;
// IMP 0x10081bb70 | @16@0:8
+ (id)detector;
// IMP 0x10081bba4 | @16@0:8
+ (id)possibleMIMECharsets;
@end
