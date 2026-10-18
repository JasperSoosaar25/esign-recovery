// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c991d8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDVisitorPropertyState : NSObject
// ivar _propertiesByAccessor encoding=@"NSMutableDictionary" offset=8
// ivar _propertiesByName encoding=@"NSMutableDictionary" offset=16
// property remainingProperties attributes=T@"NSArray",R,N
// IMP 0x1006fff98 | @24@0:8@16
- (id)initWithProperties:(id)arg0;
// IMP 0x1007001a8 | v16@0:8
- (void)log;
// IMP 0x1007001ac | @24@0:8@16
- (id)propertyForAccessor:(id)arg0;
// IMP 0x1007001b4 | B24@0:8@16
- (BOOL)hasUsedProperty:(id)arg0;
// IMP 0x100700210 | v24@0:8@16
- (void)useProperty:(id)arg0;
// IMP 0x100700250 | @16@0:8
- (id)remainingProperties;
// IMP 0x1007002a0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
