// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95b40
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYModule : NSObject
// ivar _moduleName encoding=@"NSString" offset=8
// ivar _className encoding=# offset=16
// property moduleName attributes=T@"NSString",C,N,V_moduleName
// property className attributes=T#,&,N,V_className
// IMP 0x100649a80 | @24@0:8#16
- (id)initWithClass:(Class)arg0;
// IMP 0x100649ad8 | @16@0:8
- (id)moduleName;
// IMP 0x100649b58 | @16@0:8
- (id)description;
// IMP 0x100649c00 | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100649ca4 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100649d0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100649cf0 | v24@0:8@16
- (void)setModuleName:(id)arg0;
// IMP 0x100649cf8 | #16@0:8
- (Class)className;
// IMP 0x100649d00 | v24@0:8#16
- (void)setClassName:(Class)arg0;
@end
