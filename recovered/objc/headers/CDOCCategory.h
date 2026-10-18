// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98868
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCCategory : CDOCProtocol
// ivar _classRef encoding=@"CDOCClassReference" offset=8
// property classRef attributes=T@"CDOCClassReference",&,V_classRef
// property className attributes=T@"NSString",R
// property identifier attributes=T@"NSString",R,N
// property dependancies attributes=T@"NSArray",R,N
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006f1a6c | @16@0:8
- (id)sortableName;
// IMP 0x1006f1af8 | @16@0:8
- (id)className;
// IMP 0x1006f1b08 | @16@0:8
- (id)methodSearchContext;
// IMP 0x1006f1bf4 | v24@0:8@16
- (void)recursivelyVisit:(id)arg0;
// IMP 0x1006f1cf0 | @16@0:8
- (id)identifier;
// IMP 0x1006f1cf4 | @16@0:8
- (id)dependancies;
// IMP 0x1006f1db8 | @16@0:8
- (id)classRef;
// IMP 0x1006f1dc8 | v24@0:8@16
- (void)setClassRef:(id)arg0;
// IMP 0x1006f1dd4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
