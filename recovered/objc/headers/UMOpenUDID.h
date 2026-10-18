// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97710
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMOpenUDID : NSObject
// IMP 0x1006be6e8 | v32@0:8@16@24
+ (void)_setDict:(id)arg0 forPasteboard:(id)arg1;
// IMP 0x1006be730 | @24@0:8@16
+ (id)_getDictFromPasteboard:(id)arg0;
// IMP 0x1006be7f0 | @16@0:8
+ (id)_generateFreshOpenUDID;
// IMP 0x1006be974 | @16@0:8
+ (id)value;
// IMP 0x1006be98c | @24@0:8^@16
+ (id)valueWithError:(id *)arg0;
// IMP 0x1006bf06c | v20@0:8B16
+ (void)setOptOut:(BOOL)arg0;
@end
