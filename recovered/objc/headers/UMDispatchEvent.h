// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c975a8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMDispatchEvent : NSObject
// ivar _eEventType encoding=i offset=8
// ivar _object encoding=@ offset=16
// property eEventType attributes=Ti,N,V_eEventType
// property object attributes=T@,&,N,V_object
// IMP 0x1006b7854 | i16@0:8
- (int)eEventType;
// IMP 0x1006b785c | v20@0:8i16
- (void)setEEventType:(int)arg0;
// IMP 0x1006b7864 | @16@0:8
- (id)object;
// IMP 0x1006b786c | v24@0:8@16
- (void)setObject:(id)arg0;
// IMP 0x1006b7878 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
