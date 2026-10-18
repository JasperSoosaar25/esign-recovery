// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0610
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADAppleDouble : NSObject
// IMP 0x100906054 | B48@0:8@16^q24^q32^@40
+ (BOOL)parseAppleDoubleWithHandle:(id)arg0 resourceForkOffset:(long long *)arg1 resourceForkLength:(long long *)arg2 extendedAttributes:(id *)arg3;
// IMP 0x1009062ac | v32@0:8@16@24
+ (void)parseAppleDoubleExtendedAttributesWithHandle:(id)arg0 intoDictionary:(id)arg1;
// IMP 0x10090659c | v36@0:8@16i24@28
+ (void)writeAppleDoubleHeaderToHandle:(id)arg0 resourceForkSize:(int)arg1 extendedAttributes:(id)arg2;
@end
