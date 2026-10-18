// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9b708
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADString : NSObject
// ivar data encoding=@"NSData" offset=8
// ivar string encoding=@"NSString" offset=16
// ivar source encoding=@"XADStringSource" offset=24
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x10088045c | @32@0:8@16@24
- (id)initWithData:(id)arg0 source:(id)arg1;
// IMP 0x1008804cc | @24@0:8@16
- (id)initWithString:(id)arg0;
// IMP 0x100880528 | v16@0:8
- (void)dealloc;
// IMP 0x100880580 | B24@0:8@16
- (BOOL)canDecodeWithEncodingName:(id)arg0;
// IMP 0x1008805b0 | @16@0:8
- (id)string;
// IMP 0x1008805ec | @24@0:8@16
- (id)stringWithEncodingName:(id)arg0;
// IMP 0x100880624 | @16@0:8
- (id)data;
// IMP 0x100880650 | B16@0:8
- (BOOL)encodingIsKnown;
// IMP 0x10088066c | @16@0:8
- (id)encodingName;
// IMP 0x10088068c | f16@0:8
- (float)confidence;
// IMP 0x1008806a8 | @16@0:8
- (id)source;
// IMP 0x1008806b0 | B24@0:8@16
- (BOOL)hasASCIIPrefix:(id)arg0;
// IMP 0x1008807bc | @20@0:8i16
- (id)XADStringByStrippingASCIIPrefixOfLength:(int)arg0;
// IMP 0x10088087c | B24@0:8@16
- (BOOL)isEqual:(id)arg0;
// IMP 0x100880964 | Q16@0:8
- (unsigned long long)hash;
// IMP 0x100880980 | @16@0:8
- (id)description;
// IMP 0x1008809ac | @24@0:8^{_NSZone=}16
- (id)copyWithZone:(struct _NSZone *)arg0;
// IMP 0x100880a0c | B24@0:8Q16
- (BOOL)canDecodeWithEncoding:(unsigned long long)arg0;
// IMP 0x100880a4c | @24@0:8Q16
- (id)stringWithEncoding:(unsigned long long)arg0;
// IMP 0x100880a8c | Q16@0:8
- (unsigned long long)encoding;
// IMP 0x1008fac88 | @24@0:8Q16
+ (id)encodingNameForEncoding:(unsigned long long)arg0;
// IMP 0x1008fac9c | Q24@0:8@16
+ (unsigned long long)encodingForEncodingName:(id)arg0;
// IMP 0x1008fad04 | I24@0:8@16
+ (unsigned int)CFStringEncodingForEncodingName:(id)arg0;
// IMP 0x1008fad20 | B32@0:8@16@24
+ (BOOL)canDecodeData:(id)arg0 encodingName:(id)arg1;
// IMP 0x1008fad88 | B40@0:8r^v16Q24@32
+ (BOOL)canDecodeBytes:(void *)arg0 length:(unsigned long long)arg1 encodingName:(id)arg2;
// IMP 0x1008fae08 | @32@0:8@16@24
+ (id)stringForData:(id)arg0 encodingName:(id)arg1;
// IMP 0x1008fae70 | @40@0:8r^v16Q24@32
+ (id)stringForBytes:(void *)arg0 length:(unsigned long long)arg1 encodingName:(id)arg2;
// IMP 0x1008faee0 | @32@0:8@16@24
+ (id)dataForString:(id)arg0 encodingName:(id)arg1;
// IMP 0x1008fafe8 | @16@0:8
+ (id)availableEncodingNames;
// IMP 0x100880038 | @24@0:8@16
+ (id)XADStringWithString:(id)arg0;
// IMP 0x100880068 | @32@0:8@16@24
+ (id)analyzedXADStringWithData:(id)arg0 source:(id)arg1;
// IMP 0x100880140 | @32@0:8@16@24
+ (id)decodedXADStringWithData:(id)arg0 encodingName:(id)arg1;
// IMP 0x10088018c | @32@0:8@16@24
+ (id)escapedStringForData:(id)arg0 encodingName:(id)arg1;
// IMP 0x100880214 | @40@0:8r^v16Q24@32
+ (id)escapedStringForBytes:(void *)arg0 length:(unsigned long long)arg1 encodingName:(id)arg2;
// IMP 0x10088027c | @32@0:8r^v16Q24
+ (id)escapedASCIIStringForBytes:(void *)arg0 length:(unsigned long long)arg1;
// IMP 0x100880328 | @24@0:8@16
+ (id)escapedASCIIDataForString:(id)arg0;
@end
