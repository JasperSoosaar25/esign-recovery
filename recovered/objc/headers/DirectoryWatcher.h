// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c82130
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface DirectoryWatcher : NSObject
// ivar delegate encoding=@"<DirectoryWatcherDelegate>" offset=8
// ivar dirFD encoding=i offset=16
// ivar kq encoding=i offset=20
// ivar dirKQRef encoding=^{__CFFileDescriptor=} offset=24
// ivar _path encoding=@"NSString" offset=32
// ivar _subfiles encoding=@"NSMutableSet" offset=40
// property delegate attributes=T@"<DirectoryWatcherDelegate>",W,N,Vdelegate
// property path attributes=T@"NSString",C,N,V_path
// property subfiles attributes=T@"NSMutableSet",&,N,V_subfiles
// IMP 0x1003fab78 | v16@0:8
- (void)judgeFiles;
// IMP 0x1003fb46c | v16@0:8
- (void)kqueueFired;
// IMP 0x1003fc444 | B24@0:8@16
- (BOOL)startMonitoringDirectory:(id)arg0;
// IMP 0x1003fa500 | @16@0:8
- (id)init;
// IMP 0x1003fa5c0 | v16@0:8
- (void)dealloc;
// IMP 0x1003fa818 | v16@0:8
- (void)invalidate;
// IMP 0x1003fa934 | @16@0:8
- (id)delegate;
// IMP 0x1003fa95c | v24@0:8@16
- (void)setDelegate:(id)arg0;
// IMP 0x1003fa9c4 | @16@0:8
- (id)path;
// IMP 0x1003fa9f0 | v24@0:8@16
- (void)setPath:(id)arg0;
// IMP 0x1003faa68 | @16@0:8
- (id)subfiles;
// IMP 0x1003faa7c | v24@0:8@16
- (void)setSubfiles:(id)arg0;
// IMP 0x1003faadc | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
// IMP 0x1003fa648 | @32@0:8@16@24
+ (id)watchFolderWithPath:(id)arg0 delegate:(id)arg1;
@end
