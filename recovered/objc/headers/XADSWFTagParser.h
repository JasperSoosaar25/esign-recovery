// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100ca0688
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADSWFTagParser : NSObject
// ivar fh encoding=@"XADHandle" offset=8
// ivar nexttag encoding=q offset=16
// ivar nextsubtag encoding=q offset=24
// ivar totallen encoding=i offset=32
// ivar version encoding=i offset=36
// ivar compressed encoding=B offset=40
// ivar rect encoding={?="x"i"y"i"width"i"height"i} offset=44
// ivar frames encoding=i offset=60
// ivar fps encoding=i offset=64
// ivar currtag encoding=i offset=68
// ivar currlen encoding=i offset=72
// ivar currframe encoding=i offset=76
// ivar spriteid encoding=i offset=80
// ivar subframes encoding=i offset=84
// ivar subtag encoding=i offset=88
// ivar sublen encoding=i offset=92
// ivar subframe encoding=i offset=96
// IMP 0x1009075c4 | @24@0:8@16
- (id)initWithHandle:(id)arg0;
// IMP 0x10090761c | v16@0:8
- (void)dealloc;
// IMP 0x100907664 | v16@0:8
- (void)parseHeader;
// IMP 0x1009077ac | i16@0:8
- (int)version;
// IMP 0x1009077b4 | B16@0:8
- (BOOL)isCompressed;
// IMP 0x1009077bc | {?=iiii}16@0:8
- (void * /* aggregate ? */)rect;
// IMP 0x1009077cc | i16@0:8
- (int)frames;
// IMP 0x1009077d4 | i16@0:8
- (int)framesPerSecond;
// IMP 0x1009077dc | i16@0:8
- (int)nextTag;
// IMP 0x1009078bc | i16@0:8
- (int)tag;
// IMP 0x1009078c4 | i16@0:8
- (int)tagLength;
// IMP 0x1009078cc | i16@0:8
- (int)tagBytesLeft;
// IMP 0x1009078fc | i16@0:8
- (int)frame;
// IMP 0x100907904 | d16@0:8
- (double)time;
// IMP 0x100907928 | @16@0:8
- (id)handle;
// IMP 0x100907930 | @16@0:8
- (id)tagHandle;
// IMP 0x100907968 | @16@0:8
- (id)tagContents;
// IMP 0x1009079a0 | v16@0:8
- (void)parseDefineSpriteTag;
// IMP 0x100907a00 | i16@0:8
- (int)spriteID;
// IMP 0x100907a08 | i16@0:8
- (int)subFrames;
// IMP 0x100907a10 | i16@0:8
- (int)nextSubTag;
// IMP 0x100907af4 | i16@0:8
- (int)subTag;
// IMP 0x100907afc | i16@0:8
- (int)subTagLength;
// IMP 0x100907b04 | i16@0:8
- (int)subTagBytesLeft;
// IMP 0x100907b34 | i16@0:8
- (int)subFrame;
// IMP 0x100907b3c | d16@0:8
- (double)subTime;
// IMP 0x100907540 | @24@0:8@16
+ (id)parserWithHandle:(id)arg0;
// IMP 0x100907578 | @24@0:8@16
+ (id)parserForPath:(id)arg0;
@end
