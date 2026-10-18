// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8bf08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIOrderedDictionary : NSObject
// ivar _mutableAllKeys encoding=@"NSMutableArray" offset=8
// ivar _mutableAllValues encoding=@"NSMutableArray" offset=16
// ivar _mutableDictionary encoding=@"NSMutableDictionary" offset=24
// property mutableAllKeys attributes=T@"NSMutableArray",&,N,V_mutableAllKeys
// property mutableAllValues attributes=T@"NSMutableArray",&,N,V_mutableAllValues
// property mutableDictionary attributes=T@"NSMutableDictionary",&,N,V_mutableDictionary
// property count attributes=TQ,R
// property allKeys attributes=T@"NSArray",R,C,N
// property allValues attributes=T@"NSArray",R,C,N
// IMP 0x1004b491c | @24@0:8@16
- (id)initWithKeysAndObjects:(id)arg0;
// IMP 0x1004b4b2c | @16@0:8
- (id)init;
// IMP 0x1004b4bf0 | Q16@0:8
- (unsigned long long)count;
// IMP 0x1004b4c2c | @16@0:8
- (id)allKeys;
// IMP 0x1004b4c68 | @16@0:8
- (id)allValues;
// IMP 0x1004b4ca4 | v32@0:8@16@24
- (void)setObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1004b4db0 | v32@0:8@16@24
- (void)addObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1004b4ea0 | v32@0:8@16@24
- (void)addObjects:(id)arg0 forKeys:(id)arg1;
// IMP 0x1004b4fc8 | v40@0:8@16@24q32
- (void)insertObject:(id)arg0 forKey:(id)arg1 atIndex:(long long)arg2;
// IMP 0x1004b50c4 | v40@0:8@16@24q32
- (void)insertObjects:(id)arg0 forKeys:(id)arg1 atIndex:(long long)arg2;
// IMP 0x1004b5268 | v32@0:8@16@24
- (void)removeObject:(id)arg0 forKey:(id)arg1;
// IMP 0x1004b5320 | v32@0:8@16q24
- (void)removeObject:(id)arg0 atIndex:(long long)arg1;
// IMP 0x1004b5430 | @24@0:8@16
- (id)objectForKey:(id)arg0;
// IMP 0x1004b549c | @24@0:8@16
- (id)objectForKeyedSubscript:(id)arg0;
// IMP 0x1004b54a0 | @24@0:8q16
- (id)objectAtIndex:(long long)arg0;
// IMP 0x1004b5534 | @24@0:8Q16
- (id)objectAtIndexedSubscript:(unsigned long long)arg0;
// IMP 0x1004b5538 | @16@0:8
- (id)description;
// IMP 0x1004b55dc | @16@0:8
- (id)mutableAllKeys;
// IMP 0x1004b55e4 | v24@0:8@16
- (void)setMutableAllKeys:(id)arg0;
// IMP 0x1004b55f0 | @16@0:8
- (id)mutableAllValues;
// IMP 0x1004b55f8 | v24@0:8@16
- (void)setMutableAllValues:(id)arg0;
// IMP 0x1004b5604 | @16@0:8
- (id)mutableDictionary;
// IMP 0x1004b560c | v24@0:8@16
- (void)setMutableDictionary:(id)arg0;
// IMP 0x1004b5618 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
