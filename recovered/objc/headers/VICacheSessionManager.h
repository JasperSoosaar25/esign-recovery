// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7de08
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VICacheSessionManager : NSObject
// ivar _downloadQueue encoding=@"NSOperationQueue" offset=8
// property downloadQueue attributes=T@"NSOperationQueue",&,N,V_downloadQueue
// IMP 0x1001a1c14 | @16@0:8
- (id)init;
// IMP 0x1001a1ff8 | @16@0:8
- (id)downloadQueue;
// IMP 0x1001a2024 | v24@0:8@16
- (void)setDownloadQueue:(id)arg0;
// IMP 0x1001a20b4 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1001a1b08 | @16@0:8
+ (id)shared;
// IMP 0x1001a1f90 | v16@0:8
+ (void)releaseSingleton;
@end
