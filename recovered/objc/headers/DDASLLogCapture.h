// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82338
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDASLLogCapture : NSObject
// IMP 0x100409b78 | v16@0:8
+ (void)start;
// IMP 0x100409c10 | v16@0:8
+ (void)stop;
// IMP 0x100409c1c | Q16@0:8
+ (unsigned long long)captureLevel;
// IMP 0x100409c28 | v24@0:8Q16
+ (void)setCaptureLevel:(unsigned long long)arg0;
// IMP 0x100409c34 | v24@0:8^{__asl_object_s=}16
+ (void)configureAslQuery:(struct __asl_object_s *)arg0;
// IMP 0x100409c9c | v24@0:8^{__asl_object_s=}16
+ (void)aslMessageReceived:(struct __asl_object_s *)arg0;
// IMP 0x100409eb8 | v16@0:8
+ (void)captureAslLogs;
@end
