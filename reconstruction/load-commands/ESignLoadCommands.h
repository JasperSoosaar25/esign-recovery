// ESign 5.0.2 metadata-derived API with original-derived implementations.
#import "../mach-header/ESignMachHeader.h"

@interface YYYLoadCommand : YYYOffsetNode {
    struct load_command *_loadCmd;
}
@property(nonatomic) struct load_command *loadCmd;
@property(nonatomic, readonly) unsigned int cmd;
@property(nonatomic, readonly) unsigned int cmdSize;
@end

@interface YYYDylibCommand : YYYLoadCommand {
    NSString *_linkName;
    struct dylib_command *_dylibCmd;
}
@property(nonatomic, copy) NSString *linkName;
@property(nonatomic) struct dylib_command *dylibCmd;
@end

@interface YYYRPathCommand : YYYLoadCommand {
    NSString *_path;
    struct rpath_command *_rpathCmd;
}
@property(nonatomic, copy) NSString *path;
@property(nonatomic) struct rpath_command *rpathCmd;
@end

@interface YYYlinkeditDataCommand : YYYLoadCommand {
    struct linkedit_data_command *_linkeditDataCommand;
}
@property(nonatomic) struct linkedit_data_command *linkeditDataCommand;
@end

@interface YYYSegmentCommand : YYYLoadCommand {
    struct segment_command *_segmentCommand;
    struct segment_command_64 *_segmentCommand64;
}
@property(nonatomic) struct segment_command *segmentCommand;
@property(nonatomic) struct segment_command_64 *segmentCommand64;
@end
