// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97c60
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMFilterImprint : NSObject
// ivar _filterImprintDic encoding=@"NSMutableDictionary" offset=8
// IMP 0x1006c4514 | @16@0:8
- (id)init;
// IMP 0x1006c4610 | v32@0:8@16@?24
- (void)setFilterImprintKey:(id)arg0 withHandler:(id /* block */)arg1;
// IMP 0x1006c46e8 | B32@0:8@16@24
- (BOOL)processFilterImprintKey:(id)arg0 withImprintValue:(id)arg1;
// IMP 0x1006c47d0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1006c4590 | @16@0:8
+ (id)sharedInstance;
@end
