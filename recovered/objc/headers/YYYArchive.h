// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7e740
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface YYYArchive : NSObject
// ivar _cancel encoding=B offset=8
// ivar _needInputPassword encoding=B offset=9
// ivar _isAskPassword encoding=B offset=10
// ivar _filePath encoding=@"NSString" offset=16
// ivar _destinationPath encoding=@"NSString" offset=24
// ivar _password encoding=@"NSString" offset=32
// ivar _type encoding=Q offset=40
// ivar _progress encoding=@? offset=48
// ivar _completion encoding=@? offset=56
// ivar _setupPasswordBlock encoding=@? offset=64
// ivar _XADarchiver encoding=@"XADSimpleUnarchiver" offset=72
// property XADarchiver attributes=T@"XADSimpleUnarchiver",&,N,V_XADarchiver
// property cancel attributes=TB,N,V_cancel
// property needInputPassword attributes=TB,N,V_needInputPassword
// property isAskPassword attributes=TB,N,V_isAskPassword
// property filePath attributes=T@"NSString",C,N,V_filePath
// property destinationPath attributes=T@"NSString",C,N,V_destinationPath
// property password attributes=T@"NSString",C,N,V_password
// property type attributes=TQ,N,V_type
// property progress attributes=T@?,C,N,V_progress
// property completion attributes=T@?,C,N,V_completion
// property setupPasswordBlock attributes=T@?,C,N,V_setupPasswordBlock
// IMP 0x1001e4de0 | v16@0:8
- (void)decompressXAD;
// IMP 0x1001e50f4 | v16@0:8
- (void)extract;
// IMP 0x1001e6314 | v24@0:8@16
- (void)simpleUnarchiverNeedsPassword:(id)arg0;
// IMP 0x1001e63ec | B24@0:8@16
- (BOOL)extractionShouldStopForSimpleUnarchiver:(id)arg0;
// IMP 0x1001e64f8 | B40@0:8@16@24@32
- (BOOL)simpleUnarchiver:(id)arg0 shouldExtractEntryWithDictionary:(id)arg1 to:(id)arg2;
// IMP 0x1001e6b28 | v64@0:8@16@24q32q40q48q56
- (void)simpleUnarchiver:(id)arg0 extractionProgressForEntryWithDictionary:(id)arg1 fileProgress:(long long)arg2 of:(long long)arg3 totalProgress:(long long)arg4 of:(long long)arg5;
// IMP 0x1001e6d60 | v48@0:8@16@24d32d40
- (void)simpleUnarchiver:(id)arg0 estimatedExtractionProgressForEntryWithDictionary:(id)arg1 fileProgress:(double)arg2 totalProgress:(double)arg3;
// IMP 0x1001e6ee0 | v44@0:8@16@24@32i40
- (void)simpleUnarchiver:(id)arg0 didExtractEntryWithDictionary:(id)arg1 to:(id)arg2 error:(int)arg3;
// IMP 0x1001e7074 | v16@0:8
- (void)extractFailed;
// IMP 0x1001e7270 | v16@0:8
- (void)extractFinished;
// IMP 0x1001e3240 | @24@0:8@16
- (id)initWithFilePath:(id)arg0;
// IMP 0x1001e3504 | v24@0:8@?16
- (void)getPasswordCompletion:(id /* block */)arg0;
// IMP 0x1001e37c4 | v16@0:8
- (void)decompress;
// IMP 0x1001e3ebc | v16@0:8
- (void)decompressZip;
// IMP 0x1001e45cc | v16@0:8
- (void)releaseAll;
// IMP 0x1001e4694 | @16@0:8
- (id)destinationPath;
// IMP 0x1001e47ec | @16@0:8
- (id)filePath;
// IMP 0x1001e4818 | v24@0:8@16
- (void)setFilePath:(id)arg0;
// IMP 0x1001e489c | v24@0:8@16
- (void)setDestinationPath:(id)arg0;
// IMP 0x1001e4920 | @16@0:8
- (id)password;
// IMP 0x1001e4940 | v24@0:8@16
- (void)setPassword:(id)arg0;
// IMP 0x1001e4960 | Q16@0:8
- (unsigned long long)type;
// IMP 0x1001e4974 | v24@0:8Q16
- (void)setType:(unsigned long long)arg0;
// IMP 0x1001e4994 | @?16@0:8
- (id /* block */)progress;
// IMP 0x1001e49b4 | v24@0:8@?16
- (void)setProgress:(id /* block */)arg0;
// IMP 0x1001e4a2c | @?16@0:8
- (id /* block */)completion;
// IMP 0x1001e4a4c | v24@0:8@?16
- (void)setCompletion:(id /* block */)arg0;
// IMP 0x1001e4ac4 | @?16@0:8
- (id /* block */)setupPasswordBlock;
// IMP 0x1001e4af4 | v24@0:8@?16
- (void)setSetupPasswordBlock:(id /* block */)arg0;
// IMP 0x1001e4b60 | @16@0:8
- (id)XADarchiver;
// IMP 0x1001e4b74 | v24@0:8@16
- (void)setXADarchiver:(id)arg0;
// IMP 0x1001e4bdc | B16@0:8
- (BOOL)cancel;
// IMP 0x1001e4c10 | v20@0:8B16
- (void)setCancel:(BOOL)arg0;
// IMP 0x1001e4c30 | B16@0:8
- (BOOL)needInputPassword;
// IMP 0x1001e4c5c | v20@0:8B16
- (void)setNeedInputPassword:(BOOL)arg0;
// IMP 0x1001e4c7c | B16@0:8
- (BOOL)isAskPassword;
// IMP 0x1001e4ca4 | v20@0:8B16
- (void)setIsAskPassword:(BOOL)arg0;
// IMP 0x1001e4cd0 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001e1e8c | B24@0:8@16
+ (BOOL)isArchiveFile:(id)arg0;
// IMP 0x1001e2038 | B24@0:8@16
+ (BOOL)isFilePasswordProtectedAtPath:(id)arg0;
// IMP 0x1001e2164 | v56@0:8@16@24@32@?40@?48
+ (void)decompressFileAtPath:(id)arg0 toDestination:(id)arg1 password:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
// IMP 0x1001e2a0c | v56@0:8@16@24@?32@?40@?48
+ (void)decompressFileAtPath:(id)arg0 toDestination:(id)arg1 passwordBlock:(id /* block */)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
@end
