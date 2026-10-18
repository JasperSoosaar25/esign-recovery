// Reviewed reconstruction of all 20 methods in five original command classes.
// Inherited YYYOffsetNode implementation is linked from the Mach-O header slice.
#import "ESignLoadCommands.h"

@implementation YYYLoadCommand
@synthesize loadCmd = _loadCmd;
- (unsigned int)cmd { return self.loadCmd->cmd; }
- (unsigned int)cmdSize { return self.loadCmd->cmdsize; }
@end

@implementation YYYDylibCommand
@synthesize linkName = _linkName, dylibCmd = _dylibCmd;
@end

@implementation YYYRPathCommand
@synthesize path = _path, rpathCmd = _rpathCmd;
@end

@implementation YYYlinkeditDataCommand
@synthesize linkeditDataCommand = _linkeditDataCommand;
@end

@implementation YYYSegmentCommand
@synthesize segmentCommand = _segmentCommand, segmentCommand64 = _segmentCommand64;
@end
