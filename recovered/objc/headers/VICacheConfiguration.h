// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d188
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VICacheConfiguration : NSObject
// ivar _filePath encoding=@"NSString" offset=8
// ivar _contentInfo encoding=@"VIContentInfo" offset=16
// ivar _url encoding=@"NSURL" offset=24
// ivar _fileName encoding=@"NSString" offset=32
// ivar _internalCacheFragments encoding=@"NSArray" offset=40
// ivar _downloadInfo encoding=@"NSArray" offset=48
// property filePath attributes=T@"NSString",C,N,V_filePath
// property fileName attributes=T@"NSString",C,N,V_fileName
// property internalCacheFragments attributes=T@"NSArray",C,N,V_internalCacheFragments
// property downloadInfo attributes=T@"NSArray",C,N,V_downloadInfo
// property contentInfo attributes=T@"VIContentInfo",&,N,V_contentInfo
// property url attributes=T@"NSURL",&,N,V_url
// property progress attributes=Tf,R,N
// property downloadedBytes attributes=Tq,R,N
// property downloadSpeed attributes=Tf,R,N
// IMP 0x1000e3698 | @16@0:8
- (id)internalCacheFragments;
// IMP 0x1000e37c4 | @16@0:8
- (id)downloadInfo;
// IMP 0x1000e38c0 | @16@0:8
- (id)cacheFragments;
// IMP 0x1000e3918 | f16@0:8
- (float)progress;
// IMP 0x1000e3980 | q16@0:8
- (long long)downloadedBytes;
// IMP 0x1000e3c60 | f16@0:8
- (float)downloadSpeed;
// IMP 0x1000e3ff0 | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1000e4754 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1000e54f8 | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x1000e56a8 | v16@0:8
- (void)save;
// IMP 0x1000e5758 | v16@0:8
- (void)archive;
// IMP 0x1000e58a8 | v32@0:8{_NSRange=QQ}16
- (void)addCacheFragment:(struct _NSRange)arg0;
// IMP 0x1000e67c4 | v32@0:8q16d24
- (void)addDownloadedBytes:(long long)arg0 spent:(double)arg1;
// IMP 0x1000e6a68 | @16@0:8
- (id)filePath;
// IMP 0x1000e6a94 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1000e6aa8 | @16@0:8
- (id)contentInfo;
// IMP 0x1000e6ad4 | v24@0:8@16
- (void)setContentInfo:(id)arg0;
// IMP 0x1000e6b58 | @16@0:8
- (id)url;
// IMP 0x1000e6b88 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1000e6c18 | @16@0:8
- (id)fileName;
// IMP 0x1000e6c44 | v24@0:8@16
- (void)setFileName:(id)arg0;
// IMP 0x1000e6cbc | v24@0:8@16
- (void)setInternalCacheFragments:(id)arg0;
// IMP 0x1000e6cec | v24@0:8@16
- (void)setDownloadInfo:(id)arg0;
// IMP 0x1000e6d70 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1000e6e34 | B32@0:8@16^@24
+ (BOOL)createAndSaveDownloadedConfigurationForURL:(id)arg0 error:(id *)arg1;
// IMP 0x1000e3308 | @24@0:8@16
+ (id)configurationWithFilePath:(id)arg0;
// IMP 0x1000e34e0 | @24@0:8@16
+ (id)configurationFilePathForFilePath:(id)arg0;
@end
