// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0f08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface PDFParser : NSObject
// ivar mainhandle encoding=@"XADHandle" offset=8
// ivar fh encoding=@"XADHandle" offset=16
// ivar objdict encoding=@"NSMutableDictionary" offset=24
// ivar unresolved encoding=@"NSMutableArray" offset=32
// ivar trailerdict encoding=@"NSDictionary" offset=40
// ivar encryption encoding=@"PDFEncryptionHandler" offset=48
// ivar passwordaction encoding=: offset=56
// ivar passwordtarget encoding=@ offset=64
// ivar currchar encoding=i offset=72
// IMP 0x100920d68 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x100920ed4 | v16@0:8
- (void)dealloc;
// IMP 0x100920f44 | B16@0:8
- (BOOL)isEncrypted;
// IMP 0x100920f54 | B16@0:8
- (BOOL)needsPassword;
// IMP 0x100920f6c | B24@0:8@16
- (BOOL)setPassword:(id)arg0;
// IMP 0x100920f7c | v32@0:8:16@24
- (void)setPasswordRequestAction:(SEL)arg0 target:(id)arg1;
// IMP 0x100920f84 | @16@0:8
- (id)objectDictionary;
// IMP 0x100920f8c | @16@0:8
- (id)trailerDictionary;
// IMP 0x100920f94 | @16@0:8
- (id)rootDictionary;
// IMP 0x100920fac | @16@0:8
- (id)infoDictionary;
// IMP 0x100920fc4 | @16@0:8
- (id)permanentID;
// IMP 0x100921010 | @16@0:8
- (id)currentID;
// IMP 0x10092105c | @16@0:8
- (id)pagesRoot;
// IMP 0x100921088 | @16@0:8
- (id)encryptionHandler;
// IMP 0x100921090 | v32@0:8@16q24
- (void)startParsingFromHandle:(id)arg0 atOffset:(long long)arg1;
// IMP 0x1009210f0 | q16@0:8
- (long long)parserFileOffset;
// IMP 0x100921114 | v16@0:8
- (void)proceed;
// IMP 0x100921194 | v16@0:8
- (void)proceedWithoutCommentHandling;
// IMP 0x1009211fc | v16@0:8
- (void)skipWhitespace;
// IMP 0x10092125c | v28@0:8C16@20
- (void)proceedAssumingCharacter:(unsigned char)arg0 errorMessage:(id)arg1;
// IMP 0x1009212a4 | v28@0:8C16@20
- (void)proceedWithoutCommentHandlingAssumingCharacter:(unsigned char)arg0 errorMessage:(id)arg1;
// IMP 0x1009212ec | v16@0:8
- (void)parse;
// IMP 0x1009214b4 | @16@0:8
- (id)parsePDFXref;
// IMP 0x1009214d8 | @16@0:8
- (id)parsePDFXrefTable;
// IMP 0x1009218e4 | @16@0:8
- (id)parsePDFXrefStream;
// IMP 0x100921f84 | v24@0:8@16
- (void)setupEncryptionIfNeededForTrailerDictionary:(id)arg0;
// IMP 0x1009220ac | @24@0:8^@16
- (id)parsePDFObjectWithReferencePointer:(id *)arg0;
// IMP 0x1009223ec | Q16@0:8
- (unsigned long long)parseSimpleInteger;
// IMP 0x100922484 | Q36@0:8i16@20Q28
- (unsigned long long)parseIntegerOfSize:(int)arg0 fromHandle:(id)arg1 default:(unsigned long long)arg2;
// IMP 0x1009224f0 | v24@0:8@16
- (void)parsePDFCompressedObjectStream:(id)arg0;
// IMP 0x10092280c | @24@0:8@16
- (id)parsePDFTypeWithParent:(id)arg0;
// IMP 0x100922978 | @16@0:8
- (id)parsePDFNull;
// IMP 0x100922a08 | @16@0:8
- (id)parsePDFBool;
// IMP 0x100922b08 | @16@0:8
- (id)parsePDFNumber;
// IMP 0x100922cfc | @16@0:8
- (id)parsePDFWord;
// IMP 0x100922f0c | @24@0:8@16
- (id)parsePDFStringWithParent:(id)arg0;
// IMP 0x100923138 | @24@0:8@16
- (id)parsePDFHexStringWithParent:(id)arg0;
// IMP 0x100923350 | @24@0:8@16
- (id)parsePDFArrayWithParent:(id)arg0;
// IMP 0x100923588 | @24@0:8@16
- (id)parsePDFDictionaryWithParent:(id)arg0;
// IMP 0x10092384c | v16@0:8
- (void)resolveIndirectObjects;
// IMP 0x100923a9c | v24@0:8@16
- (void)_raiseParserException:(id)arg0;
// IMP 0x100920ce4 | @24@0:8@16
+ (id)parserWithHandle:(id)arg0;
// IMP 0x100920d1c | @24@0:8@16
+ (id)parserForPath:(id)arg0;
@end
