// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e038
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYBookModel : NSObject
// ivar _fileMD5 encoding=@"NSString" offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _chapters encoding=@"NSArray" offset=24
// property fileMD5 attributes=T@"NSString",C,N,V_fileMD5
// property name attributes=T@"NSString",C,N,V_name
// property chapters attributes=T@"NSArray",&,N,V_chapters
// IMP 0x1001b2ca8 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001b2d7c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001b311c | @24@0:8@16
- (id)initWithFilePath:(id)arg0;
// IMP 0x1001b3744 | v16@0:8
- (void)save;
// IMP 0x1001b3820 | v24@0:8@16
- (void)parseBook:(id)arg0;
// IMP 0x1001b49fc | @16@0:8
- (id)fileMD5;
// IMP 0x1001b4a10 | v24@0:8@16
- (void)setFileMD5:(id)arg0;
// IMP 0x1001b4a18 | @16@0:8
- (id)name;
// IMP 0x1001b4a38 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1001b4a58 | @16@0:8
- (id)chapters;
// IMP 0x1001b4a78 | v24@0:8@16
- (void)setChapters:(id)arg0;
// IMP 0x1001b4b18 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001b2d98 | @24@0:8@16
+ (id)bookWithFilePath:(id)arg0;
@end
