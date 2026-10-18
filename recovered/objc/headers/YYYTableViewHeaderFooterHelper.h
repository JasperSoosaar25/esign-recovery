// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7b498
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYTableViewHeaderFooterHelper : NSObject
// ivar _identifier encoding=@"NSString" offset=8
// ivar _anyClass encoding=# offset=16
// ivar _height encoding=d offset=24
// ivar _title encoding=@"NSString" offset=32
// ivar _heightHandle encoding=@? offset=40
// ivar _titleHandle encoding=@? offset=48
// ivar _configHandle encoding=@? offset=56
// property identifier attributes=T@"NSString",C,N,V_identifier
// property anyClass attributes=T#,&,N,V_anyClass
// property height attributes=Td,N,V_height
// property title attributes=T@"NSString",C,N,V_title
// property heightHandle attributes=T@?,C,N,V_heightHandle
// property titleHandle attributes=T@?,C,N,V_titleHandle
// property configHandle attributes=T@?,C,N,V_configHandle
// IMP 0x10002c05c | @16@0:8
- (id)init;
// IMP 0x10002c1d8 | d24@0:8q16
- (double)heightForSection:(long long)arg0;
// IMP 0x10002c3ac | @16@0:8
- (id)identifier;
// IMP 0x10002c3d8 | v24@0:8@16
- (void)setIdentifier:(id)arg0;
// IMP 0x10002c3ec | #16@0:8
- (Class)anyClass;
// IMP 0x10002c40c | v24@0:8#16
- (void)setAnyClass:(Class)arg0;
// IMP 0x10002c470 | d16@0:8
- (double)height;
// IMP 0x10002c490 | v24@0:8d16
- (void)setHeight:(double)arg0;
// IMP 0x10002c4bc | @16@0:8
- (id)title;
// IMP 0x10002c4e8 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x10002c518 | @?16@0:8
- (id /* block */)heightHandle;
// IMP 0x10002c52c | v24@0:8@?16
- (void)setHeightHandle:(id /* block */)arg0;
// IMP 0x10002c540 | @?16@0:8
- (id /* block */)titleHandle;
// IMP 0x10002c554 | v24@0:8@?16
- (void)setTitleHandle:(id /* block */)arg0;
// IMP 0x10002c5d8 | @?16@0:8
- (id /* block */)configHandle;
// IMP 0x10002c5ec | v24@0:8@?16
- (void)setConfigHandle:(id /* block */)arg0;
// IMP 0x10002c670 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
