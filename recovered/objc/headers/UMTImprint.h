// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c973a0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMTImprint : NSObject
// ivar __property encoding=@"NSMutableDictionary" offset=8
// ivar __version encoding=i offset=16
// ivar __checksum encoding=@"NSString" offset=24
// ivar __property_isset encoding=B offset=32
// ivar __version_isset encoding=B offset=33
// ivar __checksum_isset encoding=B offset=34
// property property attributes=T@"NSMutableDictionary",&,N,Gproperty,SsetProperty:
// property version attributes=Ti,N,Gversion,SsetVersion:
// property checksum attributes=T@"NSString",&,N,Gchecksum,SsetChecksum:
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006b45f0 | @16@0:8
- (id)init;
// IMP 0x1006b4624 | @36@0:8@16i24@28
- (id)initWithProperty:(id)arg0 version:(int)arg1 checksum:(id)arg2;
// IMP 0x1006b4710 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1006b4898 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1006b4934 | v16@0:8
- (void)dealloc;
// IMP 0x1006b49d4 | @16@0:8
- (id)property;
// IMP 0x1006b4a2c | v24@0:8@16
- (void)setProperty:(id)arg0;
// IMP 0x1006b4aa4 | B16@0:8
- (BOOL)propertyIsSet;
// IMP 0x1006b4aac | v16@0:8
- (void)unsetProperty;
// IMP 0x1006b4af4 | i16@0:8
- (int)version;
// IMP 0x1006b4afc | v20@0:8i16
- (void)setVersion:(int)arg0;
// IMP 0x1006b4b0c | B16@0:8
- (BOOL)versionIsSet;
// IMP 0x1006b4b14 | v16@0:8
- (void)unsetVersion;
// IMP 0x1006b4b1c | @16@0:8
- (id)checksum;
// IMP 0x1006b4b74 | v24@0:8@16
- (void)setChecksum:(id)arg0;
// IMP 0x1006b4bec | B16@0:8
- (BOOL)checksumIsSet;
// IMP 0x1006b4bf4 | v16@0:8
- (void)unsetChecksum;
// IMP 0x1006b4c3c | v24@0:8@16
- (void)read:(id)arg0;
// IMP 0x1006b4fac | v24@0:8@16
- (void)write:(id)arg0;
// IMP 0x1006b5200 | v16@0:8
- (void)validate;
// IMP 0x1006b52b4 | @16@0:8
- (id)description;
// IMP 0x1006b53f0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
