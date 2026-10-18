// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c99b38
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYP12 : NSObject
// ivar _x509Cert encoding=^v offset=8
// ivar _evpPkey encoding=^v offset=16
// ivar _ca encoding=^v offset=24
// ivar _isP12Data encoding=B offset=32
// ivar _password encoding=@"NSString" offset=40
// ivar _data encoding=@"NSData" offset=48
// ivar _notBefore encoding=@"NSDate" offset=56
// ivar _notAfter encoding=@"NSDate" offset=64
// ivar _serialNumber encoding=@"NSString" offset=72
// ivar _signatureAlgorithm encoding=@"NSString" offset=80
// ivar _subjectCN encoding=@"NSString" offset=88
// ivar _authorityInfoAccessURI encoding=@"NSString" offset=96
// ivar _organizationalUnitName encoding=@"NSString" offset=104
// ivar _issuer encoding=@"NSDictionary" offset=112
// ivar _subject encoding=@"NSDictionary" offset=120
// property password attributes=T@"NSString",C,N,V_password
// property data attributes=T@"NSData",&,N,V_data
// property isP12Data attributes=TB,N,V_isP12Data
// property notBefore attributes=T@"NSDate",&,N,V_notBefore
// property notAfter attributes=T@"NSDate",&,N,V_notAfter
// property serialNumber attributes=T@"NSString",C,N,V_serialNumber
// property signatureAlgorithm attributes=T@"NSString",C,N,V_signatureAlgorithm
// property subjectCN attributes=T@"NSString",C,N,V_subjectCN
// property authorityInfoAccessURI attributes=T@"NSString",C,N,V_authorityInfoAccessURI
// property organizationalUnitName attributes=T@"NSString",C,N,V_organizationalUnitName
// property issuer attributes=T@"NSDictionary",&,N,V_issuer
// property subject attributes=T@"NSDictionary",&,N,V_subject
// IMP 0x10071c64c | @32@0:8@16@24
- (id)initWithP12Data:(id)arg0 password:(id)arg1;
// IMP 0x10071c8c4 | @24@0:8@16
- (id)initWithCertificateData:(id)arg0;
// IMP 0x10071caa8 | B16@0:8
- (BOOL)setup;
// IMP 0x10071d0a8 | v16@0:8
- (void)setupProperty;
// IMP 0x10071da54 | @24@0:8^{asn1_string_st=ii*q}16
- (id)yyy_ASN1_TIMEtoNSString:(struct asn1_string_st *)arg0;
// IMP 0x10071dcfc | @16@0:8
- (id)getAuthorityInfoAccessURI;
// IMP 0x10071f030 | @16@0:8
- (id)parseIssuer;
// IMP 0x10071f540 | @16@0:8
- (id)parseSubject;
// IMP 0x10071fb28 | @20@0:8i16
- (id)getSubjectNameWithNID:(int)arg0;
// IMP 0x10071fd3c | ^{bio_st=^{bio_method_st}^?*iiiii^v^{bio_st}^{bio_st}iQQ{crypto_ex_data_st=^{stack_st_void}i}}16@0:8
- (struct bio_st *)getDevCACertBio;
// IMP 0x100732804 | ^v16@0:8
- (void *)stack_certs;
// IMP 0x100739464 | v16@0:8
- (void)dealloc;
// IMP 0x100739618 | @16@0:8
- (id)password;
// IMP 0x100739638 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x1007396b0 | @16@0:8
- (id)data;
// IMP 0x1007396dc | v24@0:8@16
- (void)setData:(id)arg0;
// IMP 0x100739760 | B16@0:8
- (BOOL)isP12Data;
// IMP 0x100739774 | v20@0:8B16
- (void)setIsP12Data:(BOOL)arg0;
// IMP 0x10073977c | @16@0:8
- (id)notBefore;
// IMP 0x100739790 | v24@0:8@16
- (void)setNotBefore:(id)arg0;
// IMP 0x100739814 | @16@0:8
- (id)notAfter;
// IMP 0x100739834 | v24@0:8@16
- (void)setNotAfter:(id)arg0;
// IMP 0x100739894 | @16@0:8
- (id)serialNumber;
// IMP 0x1007398b4 | v24@0:8@16
- (void)setSerialNumber:(id)arg0;
// IMP 0x10073992c | @16@0:8
- (id)signatureAlgorithm;
// IMP 0x100739958 | v24@0:8@16
- (void)setSignatureAlgorithm:(id)arg0;
// IMP 0x1007399d0 | @16@0:8
- (id)subjectCN;
// IMP 0x100739a00 | v24@0:8@16
- (void)setSubjectCN:(id)arg0;
// IMP 0x100739a84 | @16@0:8
- (id)authorityInfoAccessURI;
// IMP 0x100739aa4 | v24@0:8@16
- (void)setAuthorityInfoAccessURI:(id)arg0;
// IMP 0x100739ac4 | @16@0:8
- (id)organizationalUnitName;
// IMP 0x100739af0 | v24@0:8@16
- (void)setOrganizationalUnitName:(id)arg0;
// IMP 0x100739b74 | @16@0:8
- (id)issuer;
// IMP 0x100739b94 | v24@0:8@16
- (void)setIssuer:(id)arg0;
// IMP 0x100739bf0 | @16@0:8
- (id)subject;
// IMP 0x100739c10 | v24@0:8@16
- (void)setSubject:(id)arg0;
// IMP 0x100739c74 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
