// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e950
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADPrefixCode : NSObject
// ivar tree encoding=^{XADCodeTreeNode=[2i]} offset=8
// ivar numentries encoding=i offset=16
// ivar minlength encoding=i offset=20
// ivar maxlength encoding=i offset=24
// ivar isstatic encoding=B offset=28
// ivar currnode encoding=i offset=32
// ivar stack encoding=@"NSMutableArray" offset=40
// ivar tablesize encoding=i offset=48
// ivar table1 encoding=^{XADCodeTableEntry=Ii} offset=56
// ivar table2 encoding=^{XADCodeTableEntry=Ii} offset=64
// IMP 0x1008da718 | @16@0:8
- (id)init;
// IMP 0x1008da798 | @24@0:8^[2i]16
- (id)initWithStaticTable:(void * /* aggregate 2i */ *)arg0;
// IMP 0x1008da7f0 | @36@0:8r^i16i24i28B32
- (id)initWithLengths:(int *)arg0 numberOfSymbols:(int)arg1 maximumLength:(int)arg2 shortestCodeIsZeros:(BOOL)arg3;
// IMP 0x1008da934 | v16@0:8
- (void)dealloc;
// IMP 0x1008da99c | v28@0:8i16I20i24
- (void)addValue:(int)arg0 forCodeWithHighBitFirst:(unsigned int)arg1 length:(int)arg2;
// IMP 0x1008da9ac | v32@0:8i16I20i24i28
- (void)addValue:(int)arg0 forCodeWithHighBitFirst:(unsigned int)arg1 length:(int)arg2 repeatAt:(int)arg3;
// IMP 0x1008dad1c | v28@0:8i16I20i24
- (void)addValue:(int)arg0 forCodeWithLowBitFirst:(unsigned int)arg1 length:(int)arg2;
// IMP 0x1008dadbc | v32@0:8i16I20i24i28
- (void)addValue:(int)arg0 forCodeWithLowBitFirst:(unsigned int)arg1 length:(int)arg2 repeatAt:(int)arg3;
// IMP 0x1008dae14 | v16@0:8
- (void)startBuildingTree;
// IMP 0x1008dae68 | v16@0:8
- (void)startZeroBranch;
// IMP 0x1008daf18 | v16@0:8
- (void)startOneBranch;
// IMP 0x1008dafc8 | v16@0:8
- (void)finishBranches;
// IMP 0x1008dafd4 | v20@0:8i16
- (void)makeLeafWithValue:(int)arg0;
// IMP 0x1008daff0 | v16@0:8
- (void)_pushNode;
// IMP 0x1008db038 | v16@0:8
- (void)_popNode;
// IMP 0x1008db0a0 | v16@0:8
- (void)_makeTable;
// IMP 0x1008db268 | v16@0:8
- (void)_makeTableLE;
// IMP 0x1008da6ac | @16@0:8
+ (id)prefixCode;
// IMP 0x1008da6c8 | @36@0:8r^i16i24i28B32
+ (id)prefixCodeWithLengths:(int *)arg0 numberOfSymbols:(int)arg1 maximumLength:(int)arg2 shortestCodeIsZeros:(BOOL)arg3;
@end
