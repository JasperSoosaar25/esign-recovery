// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c95028
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface BLYBlockLogic : BLYCrashLogic
// ivar _manualUploadTag encoding=B offset=8
// property manualUploadTag attributes=TB,N,V_manualUploadTag
// IMP 0x1006367c0 | @16@0:8
- (id)persistFileKey;
// IMP 0x1006367d0 | B16@0:8
- (BOOL)shouldPersist;
// IMP 0x1006367d8 | B16@0:8
- (BOOL)shouldUpload;
// IMP 0x100636880 | q16@0:8
- (long long)persistType;
// IMP 0x100636888 | v20@0:8B16
- (void)persistentSuccessed:(BOOL)arg0;
// IMP 0x1006368cc | v20@0:8B16
- (void)reportSuccessed:(BOOL)arg0;
// IMP 0x100636910 | B16@0:8
- (BOOL)manualUploadTag;
// IMP 0x100636920 | v20@0:8B16
- (void)setManualUploadTag:(BOOL)arg0;
@end
