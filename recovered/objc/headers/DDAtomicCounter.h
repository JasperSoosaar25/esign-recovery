// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82710
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DDAtomicCounter : NSObject
// ivar _value encoding=Ai offset=8
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10040afd4 | @20@0:8i16
- (id)initWithDefaultValue:(int)arg0;
// IMP 0x10040b01c | i16@0:8
- (int)value;
// IMP 0x10040b024 | i16@0:8
- (int)increment;
// IMP 0x10040b03c | i16@0:8
- (int)decrement;
@end
