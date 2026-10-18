// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9a070
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYSignAsset : NSObject
// ivar _mergeEntitlements encoding=B offset=8
// ivar _removeEmbedded encoding=B offset=9
// ivar _useBugSign encoding=B offset=10
// ivar _entitlements encoding=@"NSDictionary" offset=16
// ivar _emptyEntitlements encoding=@"NSDictionary" offset=24
// ivar _p12 encoding=@"YYYP12" offset=32
// ivar _mobileprovision encoding=@"YYYMobileprovision" offset=40
// property teamIdentifier attributes=T@"NSString",R,N
// property entitlements attributes=T@"NSDictionary",&,N,V_entitlements
// property subjectCN attributes=T@"NSString",R,N
// property mergeEntitlements attributes=TB,N,V_mergeEntitlements
// property removeEmbedded attributes=TB,N,V_removeEmbedded
// property useBugSign attributes=TB,N,V_useBugSign
// property emptyEntitlements attributes=T@"NSDictionary",&,N,V_emptyEntitlements
// property p12 attributes=T@"YYYP12",&,N,V_p12
// property mobileprovision attributes=T@"YYYMobileprovision",&,N,V_mobileprovision
// IMP 0x10075a570 | @40@0:8@16@24@32
- (id)initWithMobileprovisionData:(id)arg0 certData:(id)arg1 certPassword:(id)arg2;
// IMP 0x10075abb8 | @40@0:8@16@24@32
- (id)initWithMobileprovisionFilePath:(id)arg0 certFilePath:(id)arg1 certPassword:(id)arg2;
// IMP 0x10075b148 | @32@0:8@16@24
- (id)initWithCertFilePath:(id)arg0 certPassword:(id)arg1;
// IMP 0x10075b210 | ^{asn1_type_st=i(?=*i^{asn1_string_st}^{asn1_object_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{ASN1_VALUE_st})}24@0:8@16
- (struct asn1_type_st *)generateASN1Type:(id)arg0;
// IMP 0x10075c40c | @32@0:8@16@24
- (id)generateCMSWithCodeDirectoryHash:(id)arg0 altnateCodeDirectorySlot:(id)arg1;
// IMP 0x10075dbac | @16@0:8
- (id)teamIdentifier;
// IMP 0x10075df1c | @16@0:8
- (id)subjectCN;
// IMP 0x10075e024 | @16@0:8
- (id)entitlements;
// IMP 0x10075e044 | v24@0:8@16
- (void)setEntitlements:(id)arg0;
// IMP 0x10075e0a4 | B16@0:8
- (BOOL)mergeEntitlements;
// IMP 0x10075e0c4 | v20@0:8B16
- (void)setMergeEntitlements:(BOOL)arg0;
// IMP 0x10075e0f0 | B16@0:8
- (BOOL)removeEmbedded;
// IMP 0x10075e124 | v20@0:8B16
- (void)setRemoveEmbedded:(BOOL)arg0;
// IMP 0x10075e138 | B16@0:8
- (BOOL)useBugSign;
// IMP 0x10075e164 | v20@0:8B16
- (void)setUseBugSign:(BOOL)arg0;
// IMP 0x10075e178 | @16@0:8
- (id)emptyEntitlements;
// IMP 0x10075e198 | v24@0:8@16
- (void)setEmptyEntitlements:(id)arg0;
// IMP 0x10075e1ec | @16@0:8
- (id)p12;
// IMP 0x10075e218 | v24@0:8@16
- (void)setP12:(id)arg0;
// IMP 0x10075e278 | @16@0:8
- (id)mobileprovision;
// IMP 0x10075e298 | v24@0:8@16
- (void)setMobileprovision:(id)arg0;
// IMP 0x10075e300 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
