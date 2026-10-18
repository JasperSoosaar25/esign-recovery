// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7d660
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface LZFolderModel : NSObject
// ivar _fol_id encoding=@"NSString" offset=8
// ivar _folder_des encoding=@"NSString" offset=16
// ivar _folderlock encoding=@"NSString" offset=24
// ivar _is_lock encoding=@"NSString" offset=32
// ivar _name encoding=@"NSString" offset=40
// ivar _onof encoding=@"NSString" offset=48
// property fol_id attributes=T@"NSString",C,N,V_fol_id
// property folder_des attributes=T@"NSString",C,N,V_folder_des
// property folderlock attributes=T@"NSString",C,N,V_folderlock
// property is_lock attributes=T@"NSString",C,N,V_is_lock
// property name attributes=T@"NSString",C,N,V_name
// property onof attributes=T@"NSString",C,N,V_onof
// IMP 0x100143594 | B16@0:8
- (BOOL)isLockFile;
// IMP 0x1001436c8 | @16@0:8
- (id)fol_id;
// IMP 0x1001436e8 | v24@0:8@16
- (void)setFol_id:(id)arg0;
// IMP 0x10014376c | @16@0:8
- (id)folder_des;
// IMP 0x10014378c | v24@0:8@16
- (void)setFolder_des:(id)arg0;
// IMP 0x1001437ac | @16@0:8
- (id)folderlock;
// IMP 0x1001437dc | v24@0:8@16
- (void)setFolderlock:(id)arg0;
// IMP 0x100143860 | @16@0:8
- (id)is_lock;
// IMP 0x100143868 | v24@0:8@16
- (void)setIs_lock:(id)arg0;
// IMP 0x1001438e0 | @16@0:8
- (id)name;
// IMP 0x1001438f4 | v24@0:8@16
- (void)setName:(id)arg0;
// IMP 0x100143978 | @16@0:8
- (id)onof;
// IMP 0x100143998 | v24@0:8@16
- (void)setOnof:(id)arg0;
// IMP 0x1001439ac | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
