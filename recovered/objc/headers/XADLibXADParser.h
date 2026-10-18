// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9e810
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADLibXADParser : XADArchiveParser
// ivar archive encoding=^{xadArchiveInfoP={xadArchiveInfo=^{xadClient}^v*IIIQQQQ^{xadFileInfo}^{xadDiskInfo}^{xadFileInfo}^{xadDiskInfo}i^Q^{xadSkipInfo}^{xadImageInfo}*}{xadHookParam=Iq^vQQ^v^{TagItem}}{xadHookParam=Iq^vQQ^v^{TagItem}}^{Hook}^{Hook}^{Hook}^{xadMasterBaseP}i**Q^{xadSplitFile}^{TagItem}^{TagItem}i**Q^{TagItem}I^{xadFileInfo}^{xadDiskInfo}} offset=136
// ivar inhook encoding={Hook="h_Entry"^?"h_Data"^^v} offset=144
// ivar progresshook encoding={Hook="h_Entry"^?"h_Data"^^v} offset=160
// ivar indata encoding={XADInHookData="fh"@"XADHandle""name"*} offset=176
// ivar addonbuild encoding=B offset=192
// ivar numfilesadded encoding=i offset=196
// ivar numdisksadded encoding=i offset=200
// ivar namedata encoding=@"NSMutableData" offset=208
// IMP 0x1008d8094 | @16@0:8
- (id)init;
// IMP 0x1008d80e4 | v16@0:8
- (void)dealloc;
// IMP 0x1008d8164 | v16@0:8
- (void)parse;
// IMP 0x1008d8498 | B24@0:8^{xadProgressInfo=I^{xadClient}^{xadDiskInfo}^{xadFileInfo}QIIIi**}16
- (BOOL)newEntryCallback:(struct xadProgressInfo *)arg0;
// IMP 0x1008d8578 | @24@0:8^{xadFileInfo=^{xadFileInfo}I*^vI**III**QQQ*{xadDate=IiCCCCCC}SQ^{xadFileInfo}SCC^{xadSpecial}}16
- (id)dictionaryForFileInfo:(struct xadFileInfo *)arg0;
// IMP 0x1008d8950 | @24@0:8^{xadDiskInfo=^{xadDiskInfo}I*^vIIIIIIIIII*^{xadTextInfo}Q}16
- (id)dictionaryForDiskInfo:(struct xadDiskInfo *)arg0;
// IMP 0x1008d8aac | @28@0:8@16B24
- (id)handleForEntryWithDictionary:(id)arg0 wantChecksum:(BOOL)arg1;
// IMP 0x1008d8cf0 | @16@0:8
- (id)formatName;
// IMP 0x1008d7d08 | i16@0:8
+ (int)requiredHeaderSize;
// IMP 0x1008d7d3c | B48@0:8@16@24@32@40
+ (BOOL)recognizeFileWithHandle:(id)arg0 firstBytes:(id)arg1 name:(id)arg2 propertiesToAdd:(id)arg3;
@end
