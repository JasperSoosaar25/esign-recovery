// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca1278
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADResourceFork : NSObject
// ivar resources encoding=@"NSDictionary" offset=8
// IMP 0x10092c1b0 | @16@0:8
- (id)init;
// IMP 0x10092c1ec | v16@0:8
- (void)dealloc;
// IMP 0x10092c234 | v24@0:8@16
- (void)parseFromHandle:(id)arg0;
// IMP 0x10092c364 | @24@0:8I16i20
- (id)resourceDataForType:(unsigned int)arg0 identifier:(int)arg1;
// IMP 0x10092c3ec | @24@0:8@16
- (id)_parseResourceDataFromHandle:(id)arg0;
// IMP 0x10092c4ec | @32@0:8@16@24
- (id)_parseMapFromHandle:(id)arg0 withDataObjects:(id)arg1;
// IMP 0x10092c82c | @28@0:8@16i24
- (id)_parseReferencesFromHandle:(id)arg0 count:(int)arg1;
// IMP 0x10092c0e8 | @24@0:8@16
+ (id)resourceForkWithHandle:(id)arg0;
// IMP 0x10092c138 | @32@0:8@16^i24
+ (id)resourceForkWithHandle:(id)arg0 error:(int *)arg1;
@end
