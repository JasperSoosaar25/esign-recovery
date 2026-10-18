// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca04f8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADISO9660Parser : XADArchiveParser
// ivar blocksize encoding=i offset=132
// ivar isjoliet encoding=B offset=136
// ivar ishighsierra encoding=B offset=137
// ivar fh encoding=@"XADHandle" offset=144
// IMP 0x100901784 | @16@0:8
- (id)init;
// IMP 0x1009017e0 | v16@0:8
- (void)dealloc;
// IMP 0x100901830 | v16@0:8
- (void)parse;
// IMP 0x100901b38 | v20@0:8I16
- (void)parseVolumeDescriptorAtBlock:(unsigned int)arg0;
// IMP 0x1009021ec | v32@0:8@16I24I28
- (void)parseDirectoryWithPath:(id)arg0 atBlock:(unsigned int)arg1 length:(unsigned int)arg2;
// IMP 0x100903454 | @20@0:8i16
- (id)readStringOfLength:(int)arg0;
// IMP 0x10090362c | @16@0:8
- (id)readLongDateAndTime;
// IMP 0x1009036b0 | @16@0:8
- (id)readShortDateAndTime;
// IMP 0x10090371c | @28@0:8r*16B24
- (id)parseDateAndTimeWithBytes:(char *)arg0 long:(BOOL)arg1;
// IMP 0x10090373c | @24@0:8r*16
- (id)parseLongDateAndTimeWithBytes:(char *)arg0;
// IMP 0x1009038a0 | @24@0:8r*16
- (id)parseShortDateAndTimeWithBytes:(char *)arg0;
// IMP 0x100903954 | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1009039f4 | @16@0:8
- (id)formatName;
// IMP 0x100901478 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x100901480 | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
