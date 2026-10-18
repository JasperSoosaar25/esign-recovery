// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97d28
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMDispatchObject : NSObject
// ivar _eStatus encoding=s offset=8
// ivar _object encoding=@ offset=16
// property eStatus attributes=Ts,N,V_eStatus
// property object attributes=T@,&,N,V_object
// IMP 0x1006ca5d8 | s16@0:8
- (short)eStatus;
// IMP 0x1006ca5e0 | v20@0:8s16
- (void)setEStatus:(short)arg0;
// IMP 0x1006ca5e8 | @16@0:8
- (id)object;
// IMP 0x1006ca5f0 | v24@0:8@16
- (void)setObject:(id)arg0;
// IMP 0x1006ca5fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
