// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7a310
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYPlistInfoModel : NSObject
// ivar _showSub encoding=B offset=8
// ivar _index encoding=q offset=16
// ivar _parentValueType encoding=Q offset=24
// ivar _valueType encoding=Q offset=32
// ivar _key encoding=@"NSString" offset=40
// ivar _keyPath encoding=@"NSString" offset=48
// ivar _value encoding=@ offset=56
// ivar _subValues encoding=@"NSMutableArray" offset=64
// property index attributes=Tq,N,V_index
// property parentValueType attributes=TQ,N,V_parentValueType
// property valueType attributes=TQ,N,V_valueType
// property key attributes=T@"NSString",C,N,V_key
// property keyPath attributes=T@"NSString",C,N,V_keyPath
// property value attributes=T@,&,N,V_value
// property showSub attributes=TB,N,V_showSub
// property subValues attributes=T@"NSMutableArray",&,N,V_subValues
// IMP 0x10000cdec | @40@0:8@16@24q32
- (id)initWithKey:(id)arg0 value:(id)arg1 index:(long long)arg2;
// IMP 0x10000d044 | @16@0:8
- (id)getPlistValue;
// IMP 0x10000d6bc | v16@0:8
- (void)checkValueType;
// IMP 0x10000db0c | v16@0:8
- (void)setupSubValues;
// IMP 0x10000e3f8 | @16@0:8
- (id)getAllNode;
// IMP 0x10000f18c | @16@0:8
- (id)getValueTypeString;
// IMP 0x10000f238 | @16@0:8
- (id)getValueString;
// IMP 0x10000fab4 | v24@0:8@16
- (void)removeSubModel:(id)arg0;
// IMP 0x10000fd34 | @24@0:8@16
- (id)addArrayValue:(id)arg0;
// IMP 0x1000100f8 | @32@0:8@16@24
- (id)addDictionaryValue:(id)arg0 key:(id)arg1;
// IMP 0x100010304 | q16@0:8
- (long long)index;
// IMP 0x100010324 | v24@0:8q16
- (void)setIndex:(long long)arg0;
// IMP 0x100010350 | Q16@0:8
- (unsigned long long)parentValueType;
// IMP 0x100010370 | v24@0:8Q16
- (void)setParentValueType:(unsigned long long)arg0;
// IMP 0x10001039c | Q16@0:8
- (unsigned long long)valueType;
// IMP 0x1000103bc | v24@0:8Q16
- (void)setValueType:(unsigned long long)arg0;
// IMP 0x1000103dc | @16@0:8
- (id)key;
// IMP 0x1000103fc | v24@0:8@16
- (void)setKey:(id)arg0;
// IMP 0x10001042c | @16@0:8
- (id)keyPath;
// IMP 0x10001044c | v24@0:8@16
- (void)setKeyPath:(id)arg0;
// IMP 0x10001047c | @16@0:8
- (id)value;
// IMP 0x10001049c | v24@0:8@16
- (void)setValue:(id)arg0;
// IMP 0x1000104fc | B16@0:8
- (BOOL)showSub;
// IMP 0x10001051c | v20@0:8B16
- (void)setShowSub:(BOOL)arg0;
// IMP 0x100010548 | @16@0:8
- (id)subValues;
// IMP 0x100010568 | v24@0:8@16
- (void)setSubValues:(id)arg0;
// IMP 0x1000105ec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x10000e780 | @24@0:8Q16
+ (id)valueTypeString:(unsigned long long)arg0;
@end
