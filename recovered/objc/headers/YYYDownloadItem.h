// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e178
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYDownloadItem : NSObject
// ivar _url encoding=@"NSString" offset=8
// ivar _name encoding=@"NSString" offset=16
// ivar _fileSize encoding=@"NSString" offset=24
// ivar _fileSavePath encoding=@"NSString" offset=32
// ivar _downloadModel encoding=@"TYDownloadModel" offset=40
// ivar _info encoding=@"NSDictionary" offset=48
// ivar _progressBlock encoding=@? offset=56
// ivar _stateBlock encoding=@? offset=64
// property url attributes=T@"NSString",&,N,V_url
// property name attributes=T@"NSString",&,N,V_name
// property fileSize attributes=T@"NSString",&,N,V_fileSize
// property fileSavePath attributes=T@"NSString",&,N,V_fileSavePath
// property downloadModel attributes=T@"TYDownloadModel",&,N,V_downloadModel
// property info attributes=T@"NSDictionary",&,N,V_info
// property idf attributes=T@"NSString",R,N
// property progressBlock attributes=T@?,C,N,V_progressBlock
// property stateBlock attributes=T@?,C,N,V_stateBlock
// IMP 0x1001bd178 | @24@0:8@16
- (id)initWithCoder:(id)arg0;
// IMP 0x1001bdb6c | v24@0:8@16
- (void)encodeWithCoder:(id)arg0;
// IMP 0x1001bf6c4 | @16@0:8
- (id)key;
// IMP 0x1001bf850 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x1001bf88c | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x1001bf930 | B16@0:8
- (BOOL)isDownloaded;
// IMP 0x1001bfe3c | @16@0:8
- (id)stateTitle;
// IMP 0x1001c05cc | @16@0:8
- (id)fileSize;
// IMP 0x1001c0bc0 | @16@0:8
- (id)idf;
// IMP 0x1001c0d3c | @16@0:8
- (id)downloadModel;
// IMP 0x1001c374c | v16@0:8
- (void)save;
// IMP 0x1001c37e8 | @16@0:8
- (id)url;
// IMP 0x1001c3808 | v24@0:8@16
- (void)setUrl:(id)arg0;
// IMP 0x1001c3878 | @16@0:8
- (id)name;
// IMP 0x1001c38a4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x1001c3928 | v24@0:8@16
- (void)setFileSize:(id)arg0;
// IMP 0x1001c398c | @16@0:8
- (id)fileSavePath;
// IMP 0x1001c39ac | v24@0:8@16
- (void)setFileSavePath:(id)arg0;
// IMP 0x1001c3a08 | v24@0:8@16
- (void)setDownloadModel:(id)arg0;
// IMP 0x1001c3a20 | @16@0:8
- (id)info;
// IMP 0x1001c3a40 | v24@0:8@16
- (void)setInfo:(id)arg0;
// IMP 0x1001c3aa4 | @?16@0:8
- (id /* block */)progressBlock;
// IMP 0x1001c3ad0 | v24@0:8@?16
- (void)setProgressBlock:(id /* block */)arg0;
// IMP 0x1001c3b54 | @?16@0:8
- (id /* block */)stateBlock;
// IMP 0x1001c3b74 | v24@0:8@?16
- (void)setStateBlock:(id /* block */)arg0;
// IMP 0x1001c3bec | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001be1c8 | @24@0:8@16
+ (id)itemWithUrl:(id)arg0;
// IMP 0x1001bf260 | @24@0:8@16
+ (id)itemWithApp:(id)arg0;
@end
