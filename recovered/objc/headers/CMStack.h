// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b260
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMStack : NSObject
// ivar _objects encoding=@"NSMutableArray" offset=8
// property objects attributes=T@"NSArray",R,N,V_objects
// IMP 0x10085e0dc | @16@0:8
- (id)init;
// IMP 0x10085e1a4 | v24@0:8@16
- (void)push:(id)arg0;
// IMP 0x10085e208 | @16@0:8
- (id)pop;
// IMP 0x10085e284 | @16@0:8
- (id)peek;
// IMP 0x10085e2b8 | @16@0:8
- (id)objects;
// IMP 0x10085e2d4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
