// ESign 5.0.2 metadata-derived API; original-derived implementations.
#import <Foundation/Foundation.h>
#include <mach-o/loader.h>

@interface YYYOffsetNode : NSObject {
    BOOL _shouldSwap;
    long long _offset;
}
@property(nonatomic) long long offset;
@property(nonatomic) BOOL shouldSwap;
@end

@interface YYYMachHeader : YYYOffsetNode {
    struct mach_header *_machHeader;
    struct mach_header_64 *_machHeader64;
}
@property(nonatomic, readonly) unsigned int magic;
@property(nonatomic) unsigned int ncmds;
@property(nonatomic) unsigned int sizeofcmds;
@property(nonatomic, readonly) unsigned int filetype;
@property(nonatomic, readonly) unsigned int header_size;
@property(nonatomic, readonly) long long load_commands_offset;
@property(nonatomic) struct mach_header *machHeader;
@property(nonatomic) struct mach_header_64 *machHeader64;
@end
