// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98b98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDTopoSortNode : NSObject
// ivar _sortableObject encoding=@"<CDTopologicalSort>" offset=8
// ivar _dependancies encoding=@"NSMutableSet" offset=16
// ivar _color encoding=Q offset=24
// property identifier attributes=T@"NSString",R,N
// property sortableObject attributes=T@"<CDTopologicalSort>",R,V_sortableObject
// property dependancyDescription attributes=T@"NSString",R,N
// property color attributes=TQ,V_color
// IMP 0x1006f73bc | @24@0:8@16
- (id)initWithObject:(id)arg0;
// IMP 0x1006f7480 | @16@0:8
- (id)description;
// IMP 0x1006f751c | @16@0:8
- (id)identifier;
// IMP 0x1006f7560 | @16@0:8
- (id)dependancies;
// IMP 0x1006f7568 | v24@0:8@16
- (void)addDependancy:(id)arg0;
// IMP 0x1006f7570 | v24@0:8@16
- (void)removeDependancy:(id)arg0;
// IMP 0x1006f7578 | v24@0:8@16
- (void)addDependanciesFromArray:(id)arg0;
// IMP 0x1006f7580 | @16@0:8
- (id)dependancyDescription;
// IMP 0x1006f75d0 | q24@0:8@16
- (long long)ascendingCompareByIdentifier:(id)arg0;
// IMP 0x1006f7654 | v32@0:8@16@24
- (void)topologicallySortNodes:(id)arg0 intoArray:(id)arg1;
// IMP 0x1006f7804 | @16@0:8
- (id)sortableObject;
// IMP 0x1006f7810 | Q16@0:8
- (unsigned long long)color;
// IMP 0x1006f7818 | v24@0:8Q16
- (void)setColor:(unsigned long long)arg0;
// IMP 0x1006f7820 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
