// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a740
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYArchO : YYYOffsetNode
// ivar _isEncryption encoding=B offset=8
// ivar _length encoding=I offset=12
// ivar _codeLength encoding=I offset=16
// ivar _machoFileHandle encoding=@"NSFileHandle" offset=24
// ivar _machHeader encoding=@"YYYMachHeader" offset=32
// ivar _loadCommandsFreeSpace encoding=q offset=40
// ivar _linkEditSegment encoding=@"YYYSegmentCommand" offset=48
// ivar _codeSignSegment encoding=@"YYYlinkeditDataCommand" offset=56
// ivar _infoPlistData encoding=@"NSData" offset=64
// ivar _infoPlist encoding=@"NSDictionary" offset=72
// ivar _execSegLimit encoding=Q offset=80
// ivar _execSegFlags encoding=Q offset=88
// ivar _defaultEntitlements encoding=@"NSMutableDictionary" offset=96
// property machoFileHandle attributes=T@"NSFileHandle",W,N,V_machoFileHandle
// property machHeader attributes=T@"YYYMachHeader",&,N,V_machHeader
// property loadCommands attributes=T@"NSArray",R,N
// property loadCommandsFreeSpace attributes=Tq,N,V_loadCommandsFreeSpace
// property linkEditSegment attributes=T@"YYYSegmentCommand",&,N,V_linkEditSegment
// property codeSignSegment attributes=T@"YYYlinkeditDataCommand",&,N,V_codeSignSegment
// property infoPlistData attributes=T@"NSData",&,N,V_infoPlistData
// property infoPlist attributes=T@"NSDictionary",&,N,V_infoPlist
// property isExecute attributes=TB,R
// property length attributes=TI,N,V_length
// property codeLength attributes=TI,N,V_codeLength
// property execSegLimit attributes=TQ,N,V_execSegLimit
// property execSegFlags attributes=TQ,N,V_execSegFlags
// property isEncryption attributes=TB,N,V_isEncryption
// property defaultEntitlements attributes=T@"NSMutableDictionary",&,N,V_defaultEntitlements
// IMP 0x10077473c | @84@0:8B16@20@28@36@44@52@60@68Q76
- (id)generateSlotBuildCodeDirectoryWithSHA256:(BOOL)arg0 bundleId:(id)arg1 teamId:(id)arg2 infoPlistData:(id)arg3 requirementsSlot:(id)arg4 codeResources:(id)arg5 entitlementsSlot:(id)arg6 entitlementsSlotDER:(id)arg7 execSegFlags:(unsigned long long)arg8;
// IMP 0x1007765d8 | @24@0:8@16
- (id)generateSlotBuildEntitlements:(id)arg0;
// IMP 0x100776728 | @24@0:8@16
- (id)generateSlotBuildDerEntitlements:(id)arg0;
// IMP 0x100777638 | @32@0:8@16@24
- (id)generateSlotBuildRequirementsWithBundleId:(id)arg0 subjectCN:(id)arg1;
// IMP 0x1007783cc | @40@0:8@16@24@32
- (id)generateSlotBuildCMSSignatureWithSignAsset:(id)arg0 sha1CodeDirectorySlot:(id)arg1 sha256CodeDirectorySlot:(id)arg2;
// IMP 0x10077a4ec | @48@0:8@16@24@32@40
- (id)generateCodeSignatureWithSignAsset:(id)arg0 bundleId:(id)arg1 infoPlistData:(id)arg2 codeResourcesData:(id)arg3;
// IMP 0x10077cca4 | I16@0:8
- (unsigned int)reallocCodeSignSpace;
// IMP 0x10077df70 | I20@0:8I16
- (unsigned int)AddCodeSignSpaceLength:(unsigned int)arg0;
// IMP 0x10077f15c | v24@0:8@16
- (void)_writeMachHeader:(id)arg0;
// IMP 0x10076e94c | B20@0:8I16
- (BOOL)addLoadCommandsSpace:(unsigned int)arg0;
// IMP 0x10076e96c | B36@0:8@16B24^@28
- (BOOL)addDylibLink:(id)arg0 weakInject:(BOOL)arg1 error:(id *)arg2;
// IMP 0x10076fd80 | B40@0:8@16@24^@32
- (BOOL)changeDylibLink:(id)arg0 toLink:(id)arg1 error:(id *)arg2;
// IMP 0x100770e38 | v24@0:8@16
- (void)removeLinkedDylib:(id)arg0;
// IMP 0x100771570 | v20@0:8I16
- (void)removeLoadCommandWithCmd:(unsigned int)arg0;
// IMP 0x1007637e8 | v16@0:8
- (void)setup;
// IMP 0x1007659c4 | @24@0:8@16
- (id)getLinkNameForDylibCmd:(id)arg0;
// IMP 0x100765b88 | B56@0:8@16@24@32@40^@48
- (BOOL)signWithSignAsset:(id)arg0 bundleId:(id)arg1 infoPlistData:(id)arg2 codeResourcesData:(id)arg3 error:(id *)arg4;
// IMP 0x100767520 | @16@0:8
- (id)loadCommands;
// IMP 0x10076784c | @16@0:8
- (id)getDylibCommands;
// IMP 0x100767e04 | @16@0:8
- (id)getRPathCommands;
// IMP 0x100768410 | B16@0:8
- (BOOL)shouldSwap;
// IMP 0x1007684ac | B16@0:8
- (BOOL)isExecute;
// IMP 0x100768540 | @16@0:8
- (id)machoFileHandle;
// IMP 0x1007685a0 | v24@0:8@16
- (void)setMachoFileHandle:(id)arg0;
// IMP 0x10076861c | @16@0:8
- (id)machHeader;
// IMP 0x100768644 | v24@0:8@16
- (void)setMachHeader:(id)arg0;
// IMP 0x100768670 | q16@0:8
- (long long)loadCommandsFreeSpace;
// IMP 0x100768698 | v24@0:8q16
- (void)setLoadCommandsFreeSpace:(long long)arg0;
// IMP 0x1007686e8 | @16@0:8
- (id)linkEditSegment;
// IMP 0x10076871c | v24@0:8@16
- (void)setLinkEditSegment:(id)arg0;
// IMP 0x100768788 | @16@0:8
- (id)codeSignSegment;
// IMP 0x1007687bc | v24@0:8@16
- (void)setCodeSignSegment:(id)arg0;
// IMP 0x100768800 | @16@0:8
- (id)infoPlistData;
// IMP 0x100768834 | v24@0:8@16
- (void)setInfoPlistData:(id)arg0;
// IMP 0x1007688d8 | @16@0:8
- (id)infoPlist;
// IMP 0x100768900 | v24@0:8@16
- (void)setInfoPlist:(id)arg0;
// IMP 0x100768964 | I16@0:8
- (unsigned int)length;
// IMP 0x100768998 | v20@0:8I16
- (void)setLength:(unsigned int)arg0;
// IMP 0x1007689c0 | I16@0:8
- (unsigned int)codeLength;
// IMP 0x1007689dc | v20@0:8I16
- (void)setCodeLength:(unsigned int)arg0;
// IMP 0x100768a10 | Q16@0:8
- (unsigned long long)execSegLimit;
// IMP 0x100768a38 | v24@0:8Q16
- (void)setExecSegLimit:(unsigned long long)arg0;
// IMP 0x100768a7c | Q16@0:8
- (unsigned long long)execSegFlags;
// IMP 0x100768ab0 | v24@0:8Q16
- (void)setExecSegFlags:(unsigned long long)arg0;
// IMP 0x100768af4 | B16@0:8
- (BOOL)isEncryption;
// IMP 0x100768b28 | v20@0:8B16
- (void)setIsEncryption:(BOOL)arg0;
// IMP 0x100768b6c | @16@0:8
- (id)defaultEntitlements;
// IMP 0x100768b88 | v24@0:8@16
- (void)setDefaultEntitlements:(id)arg0;
// IMP 0x100768bcc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
