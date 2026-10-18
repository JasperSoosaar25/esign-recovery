// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97300
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTIdTracking : NSObject
// ivar __snapshots encoding=@"NSMutableDictionary" offset=8
// ivar __journals encoding=@"NSMutableArray" offset=16
// ivar __checksum encoding=@"NSString" offset=24
// ivar __snapshots_isset encoding=B offset=32
// ivar __journals_isset encoding=B offset=33
// ivar __checksum_isset encoding=B offset=34
// property snapshots attributes=T@"NSMutableDictionary",&,N,Gsnapshots,SsetSnapshots:
// property journals attributes=T@"NSMutableArray",&,N,Gjournals,SsetJournals:
// property checksum attributes=T@"NSString",&,N,Gchecksum,SsetChecksum:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b29e8 | @16@0:8
- (id)init;
// IMP 0x1006b2a1c | @40@0:8@16@24@32
- (id)initWithSnapshots:(id)arg0 journals:(id)arg1 checksum:(id)arg2;
// IMP 0x1006b2b3c | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b2cf0 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b2d88 | v16@0:8
- (void)dealloc;
// IMP 0x1006b2e40 | @16@0:8
- (id)snapshots;
// IMP 0x1006b2e98 | v24@0:8@16
- (void)setSnapshots:(id)arg0;
// IMP 0x1006b2f10 | B16@0:8
- (BOOL)snapshotsIsSet;
// IMP 0x1006b2f18 | v16@0:8
- (void)unsetSnapshots;
// IMP 0x1006b2f60 | @16@0:8
- (id)journals;
// IMP 0x1006b2fb8 | v24@0:8@16
- (void)setJournals:(id)arg0;
// IMP 0x1006b3030 | B16@0:8
- (BOOL)journalsIsSet;
// IMP 0x1006b3038 | v16@0:8
- (void)unsetJournals;
// IMP 0x1006b3080 | @16@0:8
- (id)checksum;
// IMP 0x1006b30d8 | v24@0:8@16
- (void)setChecksum:(id)arg0;
// IMP 0x1006b3150 | B16@0:8
- (BOOL)checksumIsSet;
// IMP 0x1006b3158 | v16@0:8
- (void)unsetChecksum;
// IMP 0x1006b31a0 | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b3624 | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b3920 | v16@0:8
- (void)validate;
// IMP 0x1006b396c | @16@0:8
- (id)description;
// IMP 0x1006b3aa8 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
