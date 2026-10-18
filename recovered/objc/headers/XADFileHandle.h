// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9f0b8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADFileHandle : XADHandle
// ivar fh encoding=^{__sFILE=*iiss{__sbuf=*i}i^v^?^?^?^?{__sbuf=*i}^{__sFILEX}i[3C][1C]{__sbuf=*i}iq} offset=32
// ivar path encoding=@"NSString" offset=40
// ivar close encoding=B offset=48
// ivar multilock encoding=@"NSLock" offset=56
// ivar fhowner encoding=@"XADFileHandle" offset=64
// ivar pos encoding=q offset=72
// IMP 0x1008e44b8 | @36@0:8^{__sFILE=*iiss{__sbuf=*i}i^v^?^?^?^?{__sbuf=*i}^{__sFILEX}i[3C][1C]{__sbuf=*i}iq}16B24@28
- (id)initWithFilePointer:(struct __sFILE *)arg0 closeOnDealloc:(BOOL)arg1 path:(id)arg2;
// IMP 0x1008e4558 | @24@0:8@16
- (id)initAsCopyOf:(id)arg0;
// IMP 0x1008e4650 | v16@0:8
- (void)dealloc;
// IMP 0x1008e46e4 | v16@0:8
- (void)close;
// IMP 0x1008e4728 | ^{__sFILE=*iiss{__sbuf=*i}i^v^?^?^?^?{__sbuf=*i}^{__sFILEX}i[3C][1C]{__sbuf=*i}iq}16@0:8
- (struct __sFILE *)filePointer;
// IMP 0x1008e4738 | q16@0:8
- (long long)fileSize;
// IMP 0x1008e478c | q16@0:8
- (long long)offsetInFile;
// IMP 0x1008e47bc | B16@0:8
- (BOOL)atEndOfFile;
// IMP 0x1008e4800 | v24@0:8q16
- (void)seekToFileOffset:(long long)arg0;
// IMP 0x1008e48a8 | v16@0:8
- (void)seekToEndOfFile;
// IMP 0x1008e494c | v20@0:8i16
- (void)pushBackByte:(int)arg0;
// IMP 0x1008e49c4 | i28@0:8i16^v20
- (int)readAtMost:(int)arg0 toBuffer:(void *)arg1;
// IMP 0x1008e4ab4 | v28@0:8i16r^v20
- (void)writeBytes:(int)arg0 fromBuffer:(void *)arg1;
// IMP 0x1008e4b94 | @16@0:8
- (id)name;
// IMP 0x1008e4ba4 | v16@0:8
- (void)_raiseError;
// IMP 0x1008e4cd0 | v16@0:8
- (void)_setMultiMode;
// IMP 0x1008e42bc | @24@0:8@16
+ (id)fileHandleForReadingAtPath:(id)arg0;
// IMP 0x1008e42d0 | @24@0:8@16
+ (id)fileHandleForWritingAtPath:(id)arg0;
// IMP 0x1008e42e4 | @32@0:8@16@24
+ (id)fileHandleForPath:(id)arg0 modes:(id)arg1;
// IMP 0x1008e43b0 | @16@0:8
+ (id)fileHandleForStandardInput;
// IMP 0x1008e4408 | @16@0:8
+ (id)fileHandleForStandardOutput;
// IMP 0x1008e4460 | @16@0:8
+ (id)fileHandleForStandardError;
@end
