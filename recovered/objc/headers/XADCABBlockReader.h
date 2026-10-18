// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9dfa0
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADCABBlockReader : NSObject
// ivar parent encoding=@"XADHandle" offset=8
// ivar extbytes encoding=i offset=16
// ivar numfolders encoding=i offset=20
// ivar offsets encoding=[100q] offset=24
// ivar numblocks encoding=[100i] offset=824
// ivar currentfolder encoding=i offset=1224
// ivar currentblock encoding=i offset=1228
// ivar complen encoding=q offset=1232
// ivar uncomplen encoding=q offset=1240
// IMP 0x1008bf014 | @28@0:8@16i24
- (id)initWithHandle:(id)arg0 reservedBytes:(int)arg1;
// IMP 0x1008bf07c | v16@0:8
- (void)dealloc;
// IMP 0x1008bf0c4 | v28@0:8q16i24
- (void)addFolderAtOffset:(long long)arg0 numberOfBlocks:(int)arg1;
// IMP 0x1008bf130 | v16@0:8
- (void)scanLengths;
// IMP 0x1008bf254 | @16@0:8
- (id)handle;
// IMP 0x1008bf25c | q16@0:8
- (long long)compressedLength;
// IMP 0x1008bf264 | q16@0:8
- (long long)uncompressedLength;
// IMP 0x1008bf26c | v16@0:8
- (void)restart;
// IMP 0x1008bf2a4 | B40@0:8*16^i24^i32
- (BOOL)readNextBlockToBuffer:(char *)arg0 compressedLength:(int *)arg1 uncompressedLength:(int *)arg2;
@end
