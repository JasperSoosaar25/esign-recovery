// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94a98
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MultipartFormDataParser : NSObject
// ivar pendingData encoding=@"NSMutableData" offset=8
// ivar boundaryData encoding=@"NSData" offset=16
// ivar currentHeader encoding=@"MultipartMessageHeader" offset=24
// ivar waitingForCRLF encoding=B offset=32
// ivar reachedEpilogue encoding=B offset=33
// ivar processedPreamble encoding=B offset=34
// ivar checkForContentEnd encoding=B offset=35
// ivar delegate encoding=@"<MultipartFormDataParserDelegate>" offset=40
// ivar currentEncoding encoding=i offset=48
// ivar formEncoding encoding=Q offset=56
// property delegate attributes=T@,W,Vdelegate
// property formEncoding attributes=TQ,VformEncoding
// IMP 0x1005ae05c | @32@0:8@16Q24
- (id)initWithBoundary:(id)arg0 formEncoding:(unsigned long long)arg1;
// IMP 0x1005ae16c | B24@0:8@16
- (BOOL)appendData:(id)arg0;
// IMP 0x1005ae998 | i28@0:8i16@20
- (int)offsetTillNewlineSinceOffset:(int)arg0 inData:(id)arg1;
// IMP 0x1005aea1c | i24@0:8@16
- (int)processPreamble:(id)arg0;
// IMP 0x1005aecb0 | i28@0:8@16i24
- (int)findHeaderEnd:(id)arg0 fromOffset:(int)arg1;
// IMP 0x1005aed40 | i28@0:8@16i24
- (int)findContentEnd:(id)arg0 fromOffset:(int)arg1;
// IMP 0x1005aee20 | i32@0:8@16i24i28
- (int)numberOfBytesToLeavePendingWithData:(id)arg0 length:(int)arg1 encoding:(int)arg2;
// IMP 0x1005af0d4 | @16@0:8
- (id)delegate;
// IMP 0x1005af0ec | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1005af0f8 | Q16@0:8
- (unsigned long long)formEncoding;
// IMP 0x1005af100 | v24@0:8Q16
- (void)setFormEncoding:(unsigned long long)arg0;
// IMP 0x1005af108 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1005aeeec | @28@0:8@16i24
+ (id)decodedDataFromData:(id)arg0 encoding:(int)arg1;
// IMP 0x1005aef70 | @24@0:8@16
+ (id)decodedDataFromQuotedPrintableData:(id)arg0;
@end
