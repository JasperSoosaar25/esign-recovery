// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c9d730
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface XADStuffItXEnglishHandle : XADByteStreamHandle
// ivar esccode encoding=C offset=268
// ivar wordcode encoding=C offset=269
// ivar firstcode encoding=C offset=270
// ivar uppercode encoding=C offset=271
// ivar caseflag encoding=B offset=272
// ivar wordbuf encoding=[33C] offset=273
// ivar wordoffs encoding=i offset=308
// ivar wordlen encoding=i offset=312
// IMP 0x1008afe6c | @32@0:8@16q24
- (id)initWithHandle:(id)arg0 length:(long long)arg1;
// IMP 0x1008affc0 | v16@0:8
- (void)resetByteStream;
// IMP 0x1008b0268 | C24@0:8q16
- (unsigned char)produceByteAtOffset:(long long)arg0;
// IMP 0x1008afea0 | r^*16@0:8
+ (char * *)dictionaryPointers;
@end
