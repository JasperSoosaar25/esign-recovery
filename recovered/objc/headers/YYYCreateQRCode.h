// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d430
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYCreateQRCode : NSObject
// IMP 0x1001062c4 | @32@0:8@16d24
+ (id)createQRCodeWithData:(id)arg0 size:(double)arg1;
// IMP 0x10010642c | @48@0:8@16d24@32@40
+ (id)createQRCodeWithData:(id)arg0 size:(double)arg1 color:(id)arg2 backgroundColor:(id)arg3;
// IMP 0x100107454 | @48@0:8@16d24@32d40
+ (id)createQRCodeWithData:(id)arg0 size:(double)arg1 logoImage:(id)arg2 ratio:(double)arg3;
// IMP 0x1001075b8 | @72@0:8@16d24@32d40d48d56@64
+ (id)createQRCodeWithData:(id)arg0 size:(double)arg1 logoImage:(id)arg2 ratio:(double)arg3 logoImageCornerRadius:(double)arg4 logoImageBorderWidth:(double)arg5 logoImageBorderColor:(id)arg6;
@end
