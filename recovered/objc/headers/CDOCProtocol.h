// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98930
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDOCProtocol : NSObject
// ivar _name encoding=@"NSString" offset=8
// ivar _protocols encoding=@"NSMutableArray" offset=16
// ivar _classMethods encoding=@"NSMutableArray" offset=24
// ivar _instanceMethods encoding=@"NSMutableArray" offset=32
// ivar _optionalClassMethods encoding=@"NSMutableArray" offset=40
// ivar _optionalInstanceMethods encoding=@"NSMutableArray" offset=48
// ivar _properties encoding=@"NSMutableArray" offset=56
// ivar _adoptedProtocolNames encoding=@"NSMutableSet" offset=64
// property sortableName attributes=T@"NSString",R,N
// property name attributes=T@"NSString",&,V_name
// property protocols attributes=T@"NSArray",R,V_protocols
// property protocolNames attributes=T@"NSArray",R,N
// property protocolsString attributes=T@"NSString",R,N
// property classMethods attributes=T@"NSArray",R,N,V_classMethods
// property instanceMethods attributes=T@"NSArray",R,N,V_instanceMethods
// property optionalClassMethods attributes=T@"NSArray",R,N,V_optionalClassMethods
// property optionalInstanceMethods attributes=T@"NSArray",R,N,V_optionalInstanceMethods
// property properties attributes=T@"NSArray",R,N,V_properties
// property hasMethods attributes=TB,R,N
// IMP 0x1006f37bc | @16@0:8
- (id)init;
// IMP 0x1006f38dc | @16@0:8
- (id)description;
// IMP 0x1006f39f4 | v24@0:8@16
- (void)addProtocol:(id)arg0;
// IMP 0x1006f3a90 | v24@0:8@16
- (void)removeProtocol:(id)arg0;
// IMP 0x1006f3af8 | @16@0:8
- (id)protocolNames;
// IMP 0x1006f3c2c | @16@0:8
- (id)protocolsString;
// IMP 0x1006f3c90 | v24@0:8@16
- (void)addClassMethod:(id)arg0;
// IMP 0x1006f3c98 | v24@0:8@16
- (void)addInstanceMethod:(id)arg0;
// IMP 0x1006f3ca0 | v24@0:8@16
- (void)addOptionalClassMethod:(id)arg0;
// IMP 0x1006f3ca8 | v24@0:8@16
- (void)addOptionalInstanceMethod:(id)arg0;
// IMP 0x1006f3cb0 | v24@0:8@16
- (void)addProperty:(id)arg0;
// IMP 0x1006f3cb8 | B16@0:8
- (BOOL)hasMethods;
// IMP 0x1006f3d90 | v32@0:8@16Q24
- (void)registerTypesWithObject:(id)arg0 phase:(unsigned long long)arg1;
// IMP 0x1006f3e88 | v40@0:8@16@24Q32
- (void)registerTypesFromMethods:(id)arg0 withObject:(id)arg1 phase:(unsigned long long)arg2;
// IMP 0x1006f405c | @16@0:8
- (id)sortableName;
// IMP 0x1006f4060 | q24@0:8@16
- (long long)ascendingCompareByName:(id)arg0;
// IMP 0x1006f40e4 | @16@0:8
- (id)methodSearchContext;
// IMP 0x1006f41b4 | v24@0:8@16
- (void)recursivelyVisit:(id)arg0;
// IMP 0x1006f42c8 | v32@0:8@16@24
- (void)visitMethods:(id)arg0 propertyState:(id)arg1;
// IMP 0x1006f47c8 | v24@0:8@16
- (void)mergeMethodsFromProtocol:(id)arg0;
// IMP 0x1006f51b4 | v24@0:8@16
- (void)mergePropertiesFromProtocol:(id)arg0;
// IMP 0x1006f541c | @16@0:8
- (id)name;
// IMP 0x1006f5428 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1006f5430 | @16@0:8
- (id)protocols;
// IMP 0x1006f543c | @16@0:8
- (id)classMethods;
// IMP 0x1006f5444 | @16@0:8
- (id)instanceMethods;
// IMP 0x1006f544c | @16@0:8
- (id)optionalClassMethods;
// IMP 0x1006f5454 | @16@0:8
- (id)optionalInstanceMethods;
// IMP 0x1006f545c | @16@0:8
- (id)properties;
// IMP 0x1006f5464 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
