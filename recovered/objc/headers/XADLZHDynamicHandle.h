// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e220
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLZHDynamicHandle : XADLZSSHandle
// ivar distancecode encoding=@"XADPrefixCode" offset=304
// ivar nodes encoding=[627^{XADLZHDynamicNode}] offset=312
// ivar nodestorage encoding=[627{XADLZHDynamicNode="parent"^{XADLZHDynamicNode}"leftchild"^{XADLZHDynamicNode}"rightchild"^{XADLZHDynamicNode}"index"i"freq"i"value"i}] offset=5328
// IMP 0x1008c5004 | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008c5088 | v16@0:8
- (void)dealloc;
// IMP 0x1008c50d8 | v16@0:8
- (void)resetLZSSHandle;
// IMP 0x1008c52d0 | i40@0:8^i16^i24q32
- (int)nextLiteralOrOffset:(int *)arg0 andLength:(int *)arg1 atPosition:(long long)arg2;
// IMP 0x1008c53dc | v24@0:8^{XADLZHDynamicNode=^{XADLZHDynamicNode}^{XADLZHDynamicNode}^{XADLZHDynamicNode}iii}16
- (void)updateNode:(struct XADLZHDynamicNode *)arg0;
// IMP 0x1008c5470 | v24@0:8^{XADLZHDynamicNode=^{XADLZHDynamicNode}^{XADLZHDynamicNode}^{XADLZHDynamicNode}iii}16
- (void)rearrangeNode:(struct XADLZHDynamicNode *)arg0;
// IMP 0x1008c551c | v16@0:8
- (void)reconstructTree;
@end
