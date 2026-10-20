#import "ESignMobileprovision.h"
#import "ESignMobileprovisionDependencies.h"

@implementation YYYMobileprovision
@synthesize name = _name;
@synthesize appIDName = _appIDName;
@synthesize appID = _appID;
@synthesize teamName = _teamName;
@synthesize teamIdentifier = _teamIdentifier;
@synthesize platform = _platform;
@synthesize UUID = _UUID;
@synthesize provisionsAllDevices = _provisionsAllDevices;
@synthesize createDate = _createDate;
@synthesize expirationDate = _expirationDate;
@synthesize applicationIdentifierPrefix = _applicationIdentifierPrefix;
@synthesize provisionedDevices = _provisionedDevices;
@synthesize developerCertificates = _developerCertificates;
@synthesize developerCertificatesFormatter = _developerCertificatesFormatter;
@synthesize entitlements = _entitlements;
@synthesize info = _info;
@synthesize data = _data;

// Original 0x100719144. The original dispatches init on self.
- (id)initWithData:(id)data {
    if (!data || ![data length]) return nil;
    self = [self init];
    if (self) {
        self.data = data;
        if (![self setup]) return nil;
    }
    return self;
}
// Original 0x1007192e4. Decoder/certificate callees remain original dependencies.
- (BOOL)setup {
    void *bio = ESignOriginal_1005fedf0(ESignOriginal_1005ffa5c());
    int written = ESignOriginal_1005ff090(bio, [_data bytes], (int)[_data length]);
    if ((uint64_t)(int64_t)written != (uint64_t)[_data length]) return NO;
    void *cms = ESignOriginal_10062fb30(bio, NULL);
    if (!cms) return NO;
    ESignProfileASN1String **content = ESignOriginal_10062edd8(cms);
    if (!content || !*content) return NO;
    NSData *data = [NSData dataWithBytes:(*content)->data length:(NSInteger)(*content)->length];
    if (!data || !data.length) return NO;
    NSMutableDictionary *info = [[NSPropertyListSerialization propertyListWithData:data options:0 format:NULL error:NULL] mutableCopy];
    if (!info) return NO;
    NSArray *certificates = info[@"DeveloperCertificates"];
    NSMutableArray *formatted = [NSMutableArray array];
    for (NSData *certificateData in certificates) {
        YYYP12 *certificate = [[YYYP12 alloc] initWithCertificateData:certificateData];
        if (!certificate) return NO;
        [formatted addObject:certificate];
    }
    info[@"DeveloperCertificates_f"] = formatted;
    self.info = info;
    self.entitlements = self.info[@"Entitlements"];
    self.name = self.info[@"Name"];
    self.appIDName = self.info[@"AppIDName"];
    self.appID = self.entitlements[@"application-identifier"];
    self.teamName = self.info[@"TeamName"];
    self.teamIdentifier = self.info[@"TeamIdentifier"];
    self.platform = self.info[@"Platform"];
    self.UUID = self.info[@"UUID"];
    self.provisionsAllDevices = [self.info[@"ProvisionsAllDevices"] boolValue];
    self.createDate = self.info[@"CreationDate"];
    self.expirationDate = self.info[@"ExpirationDate"];
    self.applicationIdentifierPrefix = self.info[@"ApplicationIdentifierPrefix"];
    self.provisionedDevices = self.info[@"ProvisionedDevices"];
    self.developerCertificates = self.info[@"DeveloperCertificates"];
    self.developerCertificatesFormatter = self.info[@"DeveloperCertificates_f"];
    return YES;
}
// Original 0x10071b800. Matching is by serial string only.
- (BOOL)containsCertificate:(id)certificate {
    if (!certificate) return NO;
    for (YYYP12 *entry in self.developerCertificatesFormatter) {
        if ([[entry serialNumber] isEqualToString:[certificate serialNumber]]) return YES;
    }
    return NO;
}
@end
