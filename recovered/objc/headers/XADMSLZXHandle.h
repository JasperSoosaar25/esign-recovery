// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e450
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMSLZXHandle : XADCABBlockHandle
// ivar lzss encoding={LZSS="window"*"mask"Q"position"q} offset=39008
// ivar maincode encoding=@"XADPrefixCode" offset=39032
// ivar lengthcode encoding=@"XADPrefixCode" offset=39040
// ivar offsetcode encoding=@"XADPrefixCode" offset=39048
// ivar numslots encoding=i offset=39056
// ivar headerhasbeenread encoding=B offset=39060
// ivar ispreprocessed encoding=B offset=39061
// ivar preprocesssize encoding=i offset=39064
// ivar inputpos encoding=q offset=39072
// ivar blocktype encoding=i offset=39080
// ivar blockend encoding=q offset=39088
// ivar r0 encoding=i offset=39096
// ivar r1 encoding=i offset=39100
// ivar r2 encoding=i offset=39104
// ivar mainlengths encoding=[656i] offset=39108
// ivar lengthlengths encoding=[249i] offset=41732
// ivar outbuffer encoding=[32768C] offset=42728
// IMP 0x1008c6c78 | @28@0:8@16i24
- (id)initWithBlockReader:(id)arg0 windowBits:(int)arg1;
// IMP 0x1008c6d50 | v16@0:8
- (void)dealloc;
// IMP 0x1008c6dd0 | v16@0:8
- (void)resetCABBlockHandle;
// IMP 0x1008c6e78 | i40@0:8*16i24q28i36
- (int)produceCABBlockWithInputBuffer:(char *)arg0 length:(int)arg1 atOffset:(long long)arg2 length:(int)arg3;
// IMP 0x1008c7530 | v24@0:8q16
- (void)readBlockHeaderAtPosition:(long long)arg0;
// IMP 0x1008c79f0 | v32@0:8^i16i24B28
- (void)readDeltaLengths:(int *)arg0 count:(int)arg1 alternateMode:(BOOL)arg2;
@end
