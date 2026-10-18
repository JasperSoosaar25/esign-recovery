// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c2e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface GCDWebUploader : GCDWebServer
// ivar _allowHiddenItems encoding=B offset=8
// ivar _uploadDirectory encoding=@"NSString" offset=16
// ivar _allowedFileExtensions encoding=@"NSArray" offset=24
// ivar _title encoding=@"NSString" offset=32
// ivar _header encoding=@"NSString" offset=40
// ivar _prologue encoding=@"NSString" offset=48
// ivar _epilogue encoding=@"NSString" offset=56
// ivar _footer encoding=@"NSString" offset=64
// property uploadDirectory attributes=T@"NSString",R,N,V_uploadDirectory
// property delegate attributes=T@"<GCDWebUploaderDelegate>",W,D,N
// property allowedFileExtensions attributes=T@"NSArray",C,N,V_allowedFileExtensions
// property allowHiddenItems attributes=TB,N,V_allowHiddenItems
// property title attributes=T@"NSString",C,N,V_title
// property header attributes=T@"NSString",C,N,V_header
// property prologue attributes=T@"NSString",C,N,V_prologue
// property epilogue attributes=T@"NSString",C,N,V_epilogue
// property footer attributes=T@"NSString",C,N,V_footer
// IMP 0x100081370 | B32@0:8@16@24
- (BOOL)shouldUploadFileAtPath:(id)arg0 withTemporaryFile:(id)arg1;
// IMP 0x10008139c | B32@0:8@16@24
- (BOOL)shouldMoveItemFromPath:(id)arg0 toPath:(id)arg1;
// IMP 0x1000813f8 | B24@0:8@16
- (BOOL)shouldDeleteItemAtPath:(id)arg0;
// IMP 0x100081450 | B24@0:8@16
- (BOOL)shouldCreateDirectoryAtPath:(id)arg0;
// IMP 0x100075f3c | B24@0:8@16
- (BOOL)_checkFileExtension:(id)arg0;
// IMP 0x100076150 | @24@0:8@16
- (id)_uniquePathForPath:(id)arg0;
// IMP 0x100076c78 | @24@0:8@16
- (id)listDirectory:(id)arg0;
// IMP 0x10007a1dc | @24@0:8@16
- (id)downloadFile:(id)arg0;
// IMP 0x10007af70 | @24@0:8@16
- (id)uploadFile:(id)arg0;
// IMP 0x10007cf88 | @24@0:8@16
- (id)moveItem:(id)arg0;
// IMP 0x10007ee48 | @24@0:8@16
- (id)deleteItem:(id)arg0;
// IMP 0x100080094 | @24@0:8@16
- (id)createDirectory:(id)arg0;
// IMP 0x100070f50 | @24@0:8@16
- (id)initWithUploadDirectory:(id)arg0;
// IMP 0x100075a2c | @16@0:8
- (id)uploadDirectory;
// IMP 0x100075a60 | @16@0:8
- (id)allowedFileExtensions;
// IMP 0x100075a94 | v24@0:8@16
- (void)setAllowedFileExtensions:(id)arg0;
// IMP 0x100075b10 | B16@0:8
- (BOOL)allowHiddenItems;
// IMP 0x100075b38 | v20@0:8B16
- (void)setAllowHiddenItems:(BOOL)arg0;
// IMP 0x100075b7c | @16@0:8
- (id)title;
// IMP 0x100075ba4 | v24@0:8@16
- (void)setTitle:(id)arg0;
// IMP 0x100075bbc | @16@0:8
- (id)header;
// IMP 0x100075bf4 | v24@0:8@16
- (void)setHeader:(id)arg0;
// IMP 0x100075c7c | @16@0:8
- (id)prologue;
// IMP 0x100075cb4 | v24@0:8@16
- (void)setPrologue:(id)arg0;
// IMP 0x100075d3c | @16@0:8
- (id)epilogue;
// IMP 0x100075d64 | v24@0:8@16
- (void)setEpilogue:(id)arg0;
// IMP 0x100075dd8 | @16@0:8
- (id)footer;
// IMP 0x100075df4 | v24@0:8@16
- (void)setFooter:(id)arg0;
// IMP 0x100075e0c | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
