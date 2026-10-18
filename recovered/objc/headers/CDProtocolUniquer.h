// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99688
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDProtocolUniquer : NSObject
// ivar _protocolsByAddress encoding=@"NSMutableDictionary" offset=8
// ivar _uniqueProtocolsByName encoding=@"NSMutableDictionary" offset=16
// ivar _uniqueProtocolsByAddress encoding=@"NSMutableDictionary" offset=24
// IMP 0x100706aa8 | @16@0:8
- (id)init;
// IMP 0x100706b48 | @24@0:8Q16
- (id)protocolWithAddress:(unsigned long long)arg0;
// IMP 0x100706ba0 | v32@0:8@16Q24
- (void)setProtocol:(id)arg0 withAddress:(unsigned long long)arg1;
// IMP 0x100706c10 | v16@0:8
- (void)createUniquedProtocols;
// IMP 0x100707038 | @24@0:8@16
- (id)uniqueProtocolsAtAddresses:(id)arg0;
// IMP 0x10070719c | @16@0:8
- (id)uniqueProtocolsSortedByName;
// IMP 0x1007071ec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
