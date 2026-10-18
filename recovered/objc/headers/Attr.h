// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91da8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface Attr : Node
// ivar specified encoding=B offset=8
// ivar name encoding=@"NSString" offset=16
// ivar value encoding=@"NSString" offset=24
// ivar ownerElement encoding=@"Element" offset=32
// property name attributes=T@"NSString",&,N,Vname
// property specified attributes=TB,N,Vspecified
// property value attributes=T@"NSString",&,N,Vvalue
// property ownerElement attributes=T@"Element",&,N,VownerElement
// IMP 0x100568268 | @32@0:8@16@24
- (id)initWithName:(id)arg0 value:(id)arg1;
// IMP 0x10056830c | @40@0:8@16@24@32
- (id)initWithNamespace:(id)arg0 qualifiedName:(id)arg1 value:(id)arg2;
// IMP 0x1005683b8 | @16@0:8
- (id)name;
// IMP 0x1005683c8 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1005683dc | B16@0:8
- (BOOL)specified;
// IMP 0x1005683ec | v20@0:8B16
- (void)setSpecified:(BOOL)arg0;
// IMP 0x1005683fc | @16@0:8
- (id)value;
// IMP 0x10056840c | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x100568420 | @16@0:8
- (id)ownerElement;
// IMP 0x100568430 | v24@0:8@16
- (void)setOwnerElement:(id)arg0;
// IMP 0x100568444 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
