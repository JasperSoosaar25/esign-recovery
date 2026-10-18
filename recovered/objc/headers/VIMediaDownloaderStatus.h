// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c400
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VIMediaDownloaderStatus : NSObject
// ivar _downloadingURLS encoding=@"NSMutableSet" offset=8
// property downloadingURLS attributes=T@"NSMutableSet",&,N,V_downloadingURLS
// IMP 0x100085424 | v24@0:8@16
- (void)addURL:(id)arg0;
// IMP 0x100085598 | v24@0:8@16
- (void)removeURL:(id)arg0;
// IMP 0x100085704 | B24@0:8@16
- (BOOL)containsURL:(id)arg0;
// IMP 0x100085898 | @16@0:8
- (id)urls;
// IMP 0x100085940 | @16@0:8
- (id)downloadingURLS;
// IMP 0x100085960 | v24@0:8@16
- (void)setDownloadingURLS:(id)arg0;
// IMP 0x1000859bc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x100085244 | @16@0:8
+ (id)shared;
// IMP 0x1000853a0 | v16@0:8
+ (void)releaseSingleton;
@end
