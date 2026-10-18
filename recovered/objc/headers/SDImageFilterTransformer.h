// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c908e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SDImageFilterTransformer : NSObject
// ivar _filter encoding=@"CIFilter" offset=8
// property filter attributes=T@"CIFilter",&,N,V_filter
// property transformerKey attributes=T@"NSString",R,C,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100549a90 | @16@0:8
- (id)transformerKey;
// IMP 0x100549b14 | @32@0:8@16@24
- (id)transformedImageWithImage:(id)arg0 forKey:(id)arg1;
// IMP 0x100549b90 | @16@0:8
- (id)filter;
// IMP 0x100549b98 | v24@0:8@16
- (void)setFilter:(id)arg0;
// IMP 0x100549ba4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100549a44 | @24@0:8@16
+ (id)transformerWithFilter:(id)arg0;
@end
