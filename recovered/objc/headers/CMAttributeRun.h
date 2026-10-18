// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9adf8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CMAttributeRun : NSObject
// ivar _listTight encoding=B offset=8
// ivar _fontTraits encoding=I offset=12
// ivar _attributes encoding=@"NSDictionary" offset=16
// ivar _orderedListItemNumber encoding=q offset=24
// property attributes attributes=T@"NSDictionary",R,N,V_attributes
// property fontTraits attributes=TI,R,N,V_fontTraits
// property orderedListItemNumber attributes=Tq,N,V_orderedListItemNumber
// property listTight attributes=TB,R,N,V_listTight
// IMP 0x10084aab0 | @36@0:8@16I24q28
- (id)initWithAttributes:(id)arg0 fontTraits:(unsigned int)arg1 orderedListNumber:(long long)arg2;
// IMP 0x10084abac | @16@0:8
- (id)attributes;
// IMP 0x10084abc8 | I16@0:8
- (unsigned int)fontTraits;
// IMP 0x10084abe4 | q16@0:8
- (long long)orderedListItemNumber;
// IMP 0x10084ac00 | v24@0:8q16
- (void)setOrderedListItemNumber:(long long)arg0;
// IMP 0x10084ac24 | B16@0:8
- (BOOL)listTight;
// IMP 0x10084ac44 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
