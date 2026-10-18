// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9c560
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR30Filter : NSObject
// ivar invocation encoding=@"XADRARProgramInvocation" offset=8
// ivar blockstartpos encoding=q offset=16
// ivar blocklength encoding=i offset=24
// ivar filteredblockaddress encoding=I offset=28
// ivar filteredblocklength encoding=I offset=32
// IMP 0x10089161c | @36@0:8@16q24i32
- (id)initWithProgramInvocation:(id)arg0 startPosition:(long long)arg1 length:(int)arg2;
// IMP 0x10089168c | v16@0:8
- (void)dealloc;
// IMP 0x1008916d4 | q16@0:8
- (long long)startPosition;
// IMP 0x1008916dc | i16@0:8
- (int)length;
// IMP 0x1008916e4 | I16@0:8
- (unsigned int)filteredBlockAddress;
// IMP 0x1008916ec | I16@0:8
- (unsigned int)filteredBlockLength;
// IMP 0x1008916f4 | v32@0:8@16q24
- (void)executeOnVirtualMachine:(id)arg0 atPosition:(long long)arg1;
// IMP 0x10089150c | @36@0:8@16q24i32
+ (id)filterForProgramInvocation:(id)arg0 startPosition:(long long)arg1 length:(int)arg2;
@end
