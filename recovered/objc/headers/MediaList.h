// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c92500
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface MediaList : NSObject
// ivar mediaText encoding=@"NSString" offset=8
// ivar length encoding=Q offset=16
// property mediaText attributes=T@"NSString",&,N,VmediaText
// property length attributes=TQ,N,Vlength
// IMP 0x10056c954 | @24@0:8Q16
- (id)item:(unsigned long long)arg0;
// IMP 0x10056c95c | v24@0:8@16
- (void)deleteMedium:(id)arg0;
// IMP 0x10056c960 | v24@0:8@16
- (void)appendMedium:(id)arg0;
// IMP 0x10056c964 | @16@0:8
- (id)mediaText;
// IMP 0x10056c96c | v24@0:8@16
- (void)setMediaText:(id)arg0;
// IMP 0x10056c978 | Q16@0:8
- (unsigned long long)length;
// IMP 0x10056c980 | v24@0:8Q16
- (void)setLength:(unsigned long long)arg0;
// IMP 0x10056c988 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
