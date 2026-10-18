// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9ea50
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADRAR5Parser : XADArchiveParser
// ivar headerkey encoding=@"NSData" offset=136
// ivar cryptocache encoding=@"NSMutableDictionary" offset=144
// ivar solidstreams encoding=@"NSMutableArray" offset=152
// ivar currsolidstream encoding=@"NSMutableArray" offset=160
// ivar totalsolidsize encoding=q offset=168
// IMP 0x1008db70c | @16@0:8
- (id)init;
// IMP 0x1008db7a0 | v16@0:8
- (void)dealloc;
// IMP 0x1008db810 | v16@0:8
- (void)readUntilSignature;
// IMP 0x1008db8f0 | v16@0:8
- (void)parse;
// IMP 0x1008dbf20 | v36@0:8@16@24B32
- (void)addEntryWithDictionary:(id)arg0 inputParts:(id)arg1 isCorrupted:(BOOL)arg2;
// IMP 0x1008dc258 | @88@0:8{RAR5Block=IQQQQQqq@}16
- (id)readFileBlockHeader:(struct RAR5Block)arg0;
// IMP 0x1008dd35c | {RAR5Block=IQQQQQqq@}16@0:8
- (struct RAR5Block)readBlockHeader;
// IMP 0x1008dd5cc | v88@0:8{RAR5Block=IQQQQQqq@}16
- (void)skipBlock:(struct RAR5Block)arg0;
// IMP 0x1008dd654 | q88@0:8{RAR5Block=IQQQQQqq@}16
- (long long)endOfBlockHeader:(struct RAR5Block)arg0;
// IMP 0x1008dd67c | @44@0:8@16@24i32@36
- (id)encryptionKeyForPassword:(id)arg0 salt:(id)arg1 strength:(int)arg2 passwordCheck:(id)arg3;
// IMP 0x1008dd6a8 | @44@0:8@16@24i32@36
- (id)hashKeyForPassword:(id)arg0 salt:(id)arg1 strength:(int)arg2 passwordCheck:(id)arg3;
// IMP 0x1008dd6d4 | @44@0:8@16@24i32@36
- (id)keysForPassword:(id)arg0 salt:(id)arg1 strength:(int)arg2 passwordCheck:(id)arg3;
// IMP 0x1008dd974 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ddd38 | @28@0:8@16B24
- (id)handleForSolidStreamWithObject:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008ddda8 | ^{CSInputBuffer=@qB*IIIII}24@0:8@16
- (struct CSInputBuffer *)inputBufferWithDictionary:(id)arg0;
// IMP 0x1008dddc8 | @24@0:8@16
- (id)inputHandleWithDictionary:(id)arg0;
// IMP 0x1008ddf90 | @16@0:8
- (id)formatName;
// IMP 0x1008de000 | B24@0:8@16
+ (BOOL)isPartOfMultiVolume:(id)arg0;
// IMP 0x1008ddfa8 | Q24@0:8@16
+ (unsigned long long)readRAR5VIntFrom:(id)arg0;
// IMP 0x1008db478 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008db480 | B40@0:8@16@24@32
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x1008db4a8 | q24@0:8@16
+ (long long)signatureLocationInData:(id)arg0;
// IMP 0x1008db590 | @40@0:8@16@24@32
+ (id)volumesForHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2;
// IMP 0x1008dd06c | {RAR5HeaderBlock={RAR5Block=IQQQQQqq@}i}24@0:8@16
+ (struct RAR5HeaderBlock)readMasterHeaderFromHandle:(id)arg0;
@end
