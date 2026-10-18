// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c91cb8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SSZipArchive : NSObject
// ivar _path encoding=@"NSString" offset=8
// ivar _zip encoding=^v offset=16
// IMP 0x100567568 | @16@0:8
- (id)init;
// IMP 0x100567578 | @24@0:8@16
- (id)initWithPath:(id)arg0;
// IMP 0x1005675f0 | B16@0:8
- (BOOL)open;
// IMP 0x100567628 | B40@0:8@16@24@32
- (BOOL)writeFolderAtPath:(id)arg0 withFolderName:(id)arg1 withPassword:(id)arg2;
// IMP 0x1005677fc | B32@0:8@16@24
- (BOOL)writeFile:(id)arg0 withPassword:(id)arg1;
// IMP 0x100567808 | B40@0:8@16@24@32
- (BOOL)writeFileAtPath:(id)arg0 withFileName:(id)arg1 withPassword:(id)arg2;
// IMP 0x100567818 | B48@0:8@16@24i32@36B44
- (BOOL)writeFileAtPath:(id)arg0 withFileName:(id)arg1 compressionLevel:(int)arg2 password:(id)arg3 AES:(BOOL)arg4;
// IMP 0x1005679b0 | B40@0:8@16@24@32
- (BOOL)writeData:(id)arg0 filename:(id)arg1 withPassword:(id)arg2;
// IMP 0x1005679c0 | B48@0:8@16@24i32@36B44
- (BOOL)writeData:(id)arg0 filename:(id)arg1 compressionLevel:(int)arg2 password:(id)arg3 AES:(BOOL)arg4;
// IMP 0x100567b10 | B16@0:8
- (BOOL)close;
// IMP 0x100567fb0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100564c8c | @32@0:8@16^@24
+ (id)fileContentsAtPath:(id)arg0 error:(id *)arg1;
// IMP 0x100564f3c | B24@0:8@16
+ (BOOL)isFilePasswordProtectedAtPath:(id)arg0;
// IMP 0x100565038 | B40@0:8@16@24^@32
+ (BOOL)isPasswordValidForArchiveAtPath:(id)arg0 password:(id)arg1 error:(id *)arg2;
// IMP 0x1005653a4 | @32@0:8@16^@24
+ (id)payloadSizeForArchiveAtPath:(id)arg0 error:(id *)arg1;
// IMP 0x100565618 | B32@0:8@16@24
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1;
// IMP 0x100565620 | B52@0:8@16@24B32@36^@44
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(id *)arg4;
// IMP 0x100565654 | B40@0:8@16@24@32
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 delegate:(id)arg2;
// IMP 0x100565688 | B60@0:8@16@24B32@36^@44@52
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 error:(id *)arg4 delegate:(id)arg5;
// IMP 0x1005656c0 | B60@0:8@16@24B32@36@?44@?52
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 overwrite:(BOOL)arg2 password:(id)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
// IMP 0x1005656f8 | B48@0:8@16@24@?32@?40
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
// IMP 0x10056572c | B64@0:8@16@24B32B36@40^@48@56
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
// IMP 0x100565754 | B80@0:8@16@24B32B36@40^@48@56@?64@?72
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6 progressHandler:(id /* block */)arg7 completionHandler:(id /* block */)arg8;
// IMP 0x100565790 | B88@0:8@16@24B32B36q40@48^@56@64@?72@?80
+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 preserveAttributes:(BOOL)arg2 overwrite:(BOOL)arg3 nestedZipLevel:(long long)arg4 password:(id)arg5 error:(id *)arg6 delegate:(id)arg7 progressHandler:(id /* block */)arg8 completionHandler:(id /* block */)arg9;
// IMP 0x100566f98 | B32@0:8@16@24
+ (BOOL)createZipFileAtPath:(id)arg0 withFilesAtPaths:(id)arg1;
// IMP 0x100566fa8 | B32@0:8@16@24
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1;
// IMP 0x100566fb8 | B36@0:8@16@24B32
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2;
// IMP 0x100566fc8 | B40@0:8@16@24@32
+ (BOOL)createZipFileAtPath:(id)arg0 withFilesAtPaths:(id)arg1 withPassword:(id)arg2;
// IMP 0x100567160 | B40@0:8@16@24@32
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 withPassword:(id)arg2;
// IMP 0x100567174 | B44@0:8@16@24B32@36
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 withPassword:(id)arg3;
// IMP 0x100567184 | B52@0:8@16@24B32@36@?44
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 withPassword:(id)arg3 andProgressHandler:(id /* block */)arg4;
// IMP 0x1005671b4 | B60@0:8@16@24B32i36@40B48@?52
+ (BOOL)createZipFileAtPath:(id)arg0 withContentsOfDirectory:(id)arg1 keepParentDirectory:(BOOL)arg2 compressionLevel:(int)arg3 password:(id)arg4 AES:(BOOL)arg5 progressHandler:(id /* block */)arg6;
// IMP 0x100567b44 | @36@0:8r*16S24S28S32
+ (id)_filenameStringWithCString:(char *)arg0 version_made_by:(unsigned short)arg1 general_purpose_flag:(unsigned short)arg2 size:(unsigned short)arg3;
// IMP 0x100567c64 | v32@0:8^{?=I{tm=iiiiiiiiiq*}SI}16@24
+ (void)zipInfo:(void * /* aggregate ? */ *)arg0 setAttributesOfItemAtPath:(id)arg1;
// IMP 0x100567d94 | v32@0:8^{?=I{tm=iiiiiiiiiq*}SI}16@24
+ (void)zipInfo:(void * /* aggregate ? */ *)arg0 setDate:(id)arg1;
// IMP 0x100567e74 | @16@0:8
+ (id)_gregorian;
// IMP 0x100567ef0 | @20@0:8I16
+ (id)_dateWithMSDOSFormat:(unsigned int)arg0;
@end
