// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c94908
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface HTTPErrorResponse : NSObject
// ivar _status encoding=q offset=8
// IMP 0x1005ab988 | @20@0:8i16
- (id)initWithErrorCode:(int)arg0;
// IMP 0x1005ab9d4 | Q16@0:8
- (unsigned long long)contentLength;
// IMP 0x1005ab9dc | Q16@0:8
- (unsigned long long)offset;
// IMP 0x1005ab9e4 | v24@0:8Q16
- (void)setOffset:(unsigned long long)arg0;
// IMP 0x1005ab9e8 | @24@0:8Q16
- (id)readDataOfLength:(unsigned long long)arg0;
// IMP 0x1005ab9f0 | B16@0:8
- (BOOL)isDone;
// IMP 0x1005ab9f8 | q16@0:8
- (long long)status;
@end
