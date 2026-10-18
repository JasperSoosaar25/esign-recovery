// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b3f0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMCascadingAttributeStack : NSObject
// ivar _stack encoding=@"CMStack" offset=8
// ivar _cascadedAttributes encoding=@"NSDictionary" offset=16
// property cascadedAttributes attributes=T@"NSDictionary",R,N
// IMP 0x10087cb70 | @16@0:8
- (id)init;
// IMP 0x10087cc38 | v24@0:8@16
- (void)push:(id)arg0;
// IMP 0x10087ccac | @16@0:8
- (id)pop;
// IMP 0x10087ccf0 | @16@0:8
- (id)peek;
// IMP 0x10087cd24 | @16@0:8
- (id)cascadedAttributes;
// IMP 0x10087d238 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
