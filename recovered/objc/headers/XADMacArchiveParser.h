// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9bf70
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADMacArchiveParser : XADArchiveParser
// ivar previousname encoding=@"XADPath" offset=136
// ivar dittodirectorystack encoding=@"NSMutableArray" offset=144
// ivar queueddittoentry encoding=@"NSMutableDictionary" offset=152
// ivar queueddittodata encoding=@"NSData" offset=160
// ivar cachedentry encoding=@"NSMutableDictionary" offset=168
// ivar cacheddata encoding=@"NSData" offset=176
// ivar cachedhandle encoding=@"XADHandle" offset=184
// IMP 0x100886094 | @16@0:8
- (id)init;
// IMP 0x100886144 | v16@0:8
- (void)dealloc;
// IMP 0x1008861c4 | v16@0:8
- (void)parse;
// IMP 0x100886218 | v16@0:8
- (void)parseWithSeparateMacForks;
// IMP 0x10088621c | v28@0:8@16B24
- (void)addEntryWithDictionary:(id)arg0 retainPosition:(BOOL)arg1;
// IMP 0x1008864d0 | B36@0:8@16@24B32
- (BOOL)parseAppleDoubleWithDictionary:(id)arg0 name:(id)arg1 retainPosition:(BOOL)arg2;
// IMP 0x1008869fc | v24@0:8@16
- (void)setPreviousFilename:(id)arg0;
// IMP 0x100886a40 | @16@0:8
- (id)topOfDittoDirectoryStack;
// IMP 0x100886a90 | v24@0:8@16
- (void)pushDittoDirectory:(id)arg0;
// IMP 0x100886aa8 | v24@0:8@16
- (void)popDittoDirectoryStackUntilCanonicalPrefixFor:(id)arg0;
// IMP 0x100886b54 | v32@0:8@16@24
- (void)queueDittoDictionary:(id)arg0 data:(id)arg1;
// IMP 0x100886bc0 | v20@0:8B16
- (void)addQueuedDittoDictionaryAndRetainPosition:(BOOL)arg0;
// IMP 0x100886bd8 | v32@0:8@16B24B28
- (void)addQueuedDittoDictionaryWithName:(id)arg0 isDirectory:(BOOL)arg1 retainPosition:(BOOL)arg2;
// IMP 0x100886cc4 | B36@0:8@16@24B32
- (BOOL)parseMacBinaryWithDictionary:(id)arg0 name:(id)arg1 retainPosition:(BOOL)arg2;
// IMP 0x1008872f8 | v36@0:8@16B24@28
- (void)addEntryWithDictionary:(id)arg0 retainPosition:(BOOL)arg1 data:(id)arg2;
// IMP 0x10088736c | v36@0:8@16B24@28
- (void)addEntryWithDictionary:(id)arg0 retainPosition:(BOOL)arg1 handle:(id)arg2;
// IMP 0x1008873e0 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x10088755c | @32@0:8@16@24
- (id)descriptionOfValueInDictionary:(id)arg0 key:(id)arg1;
// IMP 0x1008876d4 | @24@0:8@16
- (id)descriptionOfKey:(id)arg0;
// IMP 0x1008878e0 | @28@0:8@16B24
- (id)rawHandleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008878e8 | v24@0:8@16
- (void)inspectEntryDictionary:(id)arg0;
// IMP 0x100885f48 | i24@0:8@16
+ (int)macBinaryVersionForHeader:(id)arg0;
@end
