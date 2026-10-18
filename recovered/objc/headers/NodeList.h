// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c925c8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface NodeList : NSObject
// ivar internalArray encoding=@"NSMutableArray" offset=8
// property internalArray attributes=T@"NSMutableArray",&,N,VinternalArray
// property length attributes=TQ,R
// IMP 0x10056efa0 | @16@0:8
- (id)init;
// IMP 0x10056f014 | @24@0:8Q16
- (id)item:(unsigned long long)arg0;
// IMP 0x10056f060 | Q16@0:8
- (unsigned long long)length;
// IMP 0x10056f09c | Q40@0:8^{?=Q^@^Q[5Q]}16^@24Q32
- (unsigned long long)countByEnumeratingWithState:(void * /* aggregate ? */ *)arg0 objects:(id *)arg1 count:(unsigned long long)arg2;
// IMP 0x10056f0f8 | @16@0:8
- (id)description;
// IMP 0x10056f15c | @16@0:8
- (id)internalArray;
// IMP 0x10056f164 | v24@0:8@16
- (void)setInternalArray:(id)arg0;
// IMP 0x10056f170 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
