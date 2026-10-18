// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7dc50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYAppStoreApp : NSObject
// ivar _isLanZouCloud encoding=B offset=8
// ivar _lock encoding=B offset=9
// ivar _name encoding=@"NSString" offset=16
// ivar _bundleIdentifier encoding=@"NSString" offset=24
// ivar _developerName encoding=@"NSString" offset=32
// ivar _version encoding=@"NSString" offset=40
// ivar _versionDate encoding=@"NSDate" offset=48
// ivar _versionDescription encoding=@"NSString" offset=56
// ivar _downloadURL encoding=@"NSString" offset=64
// ivar _localizedDescription encoding=@"NSString" offset=72
// ivar _iconURL encoding=@"NSString" offset=80
// ivar _tintColor encoding=@"NSString" offset=88
// ivar _size encoding=Q offset=96
// ivar _screenshotURLs encoding=@"NSArray" offset=104
// ivar _source encoding=@"NSString" offset=112
// ivar _payURL encoding=@"NSString" offset=120
// ivar _unlockURL encoding=@"NSString" offset=128
// ivar _idf encoding=@"NSString" offset=136
// ivar _currentDownloadUrl encoding=@"NSString" offset=144
// ivar _type encoding=Q offset=152
// property name attributes=T@"NSString",C,N,V_name
// property bundleIdentifier attributes=T@"NSString",C,N,V_bundleIdentifier
// property developerName attributes=T@"NSString",C,N,V_developerName
// property version attributes=T@"NSString",C,N,V_version
// property versionDate attributes=T@"NSDate",&,N,V_versionDate
// property versionDescription attributes=T@"NSString",C,N,V_versionDescription
// property downloadURL attributes=T@"NSString",C,N,V_downloadURL
// property localizedDescription attributes=T@"NSString",C,N,V_localizedDescription
// property iconURL attributes=T@"NSString",C,N,V_iconURL
// property tintColor attributes=T@"NSString",C,N,V_tintColor
// property size attributes=TQ,N,V_size
// property screenshotURLs attributes=T@"NSArray",&,N,V_screenshotURLs
// property source attributes=T@"NSString",C,N,V_source
// property isLanZouCloud attributes=TB,N,V_isLanZouCloud
// property detailInfo attributes=T@"NSString",R,N
// property lock attributes=TB,N,V_lock
// property payURL attributes=T@"NSString",C,N,V_payURL
// property unlockURL attributes=T@"NSString",C,N,V_unlockURL
// property idf attributes=T@"NSString",C,N,V_idf
// property currentDownloadUrl attributes=T@"NSString",C,N,V_currentDownloadUrl
// property type attributes=TQ,N,V_type
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x100178ec8 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x10017bac4 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x10017d6c0 | B24@0:8@16
- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
// IMP 0x10017e244 | @16@0:8
- (id)detailInfo;
// IMP 0x10017e604 | @16@0:8
- (id)idf;
// IMP 0x10017eb04 | @16@0:8
- (id)typeString;
// IMP 0x10017ef68 | B16@0:8
- (BOOL)canDownload;
// IMP 0x10017f1a8 | @16@0:8
- (id)name;
// IMP 0x10017f1d4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x10017f1e8 | @16@0:8
- (id)bundleIdentifier;
// IMP 0x10017f214 | v24@0:8@16
- (void)setBundleIdentifier:(id)arg0;
// IMP 0x10017f298 | @16@0:8
- (id)developerName;
// IMP 0x10017f2b8 | v24@0:8@16
- (void)setDeveloperName:(id)arg0;
// IMP 0x10017f2c0 | @16@0:8
- (id)version;
// IMP 0x10017f2e0 | v24@0:8@16
- (void)setVersion:(id)arg0;
// IMP 0x10017f310 | @16@0:8
- (id)versionDate;
// IMP 0x10017f33c | v24@0:8@16
- (void)setVersionDate:(id)arg0;
// IMP 0x10017f3cc | @16@0:8
- (id)versionDescription;
// IMP 0x10017f3f8 | v24@0:8@16
- (void)setVersionDescription:(id)arg0;
// IMP 0x10017f47c | @16@0:8
- (id)downloadURL;
// IMP 0x10017f4a8 | v24@0:8@16
- (void)setDownloadURL:(id)arg0;
// IMP 0x10017f4d8 | @16@0:8
- (id)localizedDescription;
// IMP 0x10017f4f8 | v24@0:8@16
- (void)setLocalizedDescription:(id)arg0;
// IMP 0x10017f500 | @16@0:8
- (id)iconURL;
// IMP 0x10017f514 | v24@0:8@16
- (void)setIconURL:(id)arg0;
// IMP 0x10017f598 | @16@0:8
- (id)tintColor;
// IMP 0x10017f5b8 | v24@0:8@16
- (void)setTintColor:(id)arg0;
// IMP 0x10017f63c | Q16@0:8
- (unsigned long long)size;
// IMP 0x10017f668 | v24@0:8Q16
- (void)setSize:(unsigned long long)arg0;
// IMP 0x10017f67c | @16@0:8
- (id)screenshotURLs;
// IMP 0x10017f69c | v24@0:8@16
- (void)setScreenshotURLs:(id)arg0;
// IMP 0x10017f704 | @16@0:8
- (id)source;
// IMP 0x10017f724 | v24@0:8@16
- (void)setSource:(id)arg0;
// IMP 0x10017f754 | B16@0:8
- (BOOL)isLanZouCloud;
// IMP 0x10017f774 | v20@0:8B16
- (void)setIsLanZouCloud:(BOOL)arg0;
// IMP 0x10017f77c | B16@0:8
- (BOOL)lock;
// IMP 0x10017f790 | v20@0:8B16
- (void)setLock:(BOOL)arg0;
// IMP 0x10017f7bc | @16@0:8
- (id)payURL;
// IMP 0x10017f7d0 | v24@0:8@16
- (void)setPayURL:(id)arg0;
// IMP 0x10017f854 | @16@0:8
- (id)unlockURL;
// IMP 0x10017f880 | v24@0:8@16
- (void)setUnlockURL:(id)arg0;
// IMP 0x10017f8f8 | v24@0:8@16
- (void)setIdf:(id)arg0;
// IMP 0x10017f970 | @16@0:8
- (id)currentDownloadUrl;
// IMP 0x10017f99c | v24@0:8@16
- (void)setCurrentDownloadUrl:(id)arg0;
// IMP 0x10017f9bc | Q16@0:8
- (unsigned long long)type;
// IMP 0x10017f9dc | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x10017f9fc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
