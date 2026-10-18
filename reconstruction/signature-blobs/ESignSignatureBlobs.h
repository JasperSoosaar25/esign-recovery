// ESign 5.0.2 metadata-derived API, with reconstructed implementations.
#import <Foundation/Foundation.h>
#include <stdint.h>

typedef struct __Blob { uint32_t magic, length; } ESignBlobHeader;
typedef struct __BlobIndex { uint32_t type, offset; } ESignBlobIndexHeader;
typedef struct __SuperBlob {
    uint32_t magic, length, count;
    struct __BlobIndex index[0];
} ESignSuperBlobHeader;

@interface YYYBlob : NSObject {
    uint32_t _magic;
    NSData *_data;
    NSDictionary *_entitlements;
}
@property(nonatomic) uint32_t magic;
@property(nonatomic, strong) NSData *data;
@property(nonatomic, strong) NSDictionary *entitlements;
@property(nonatomic, readonly) ESignBlobHeader blob;
@property(nonatomic, readonly) uint32_t length;
- (id)blobData;
+ (id)blobWithMagic:(uint32_t)magic data:(id)data;
+ (id)blobWithdata:(id)data;
@end

@interface YYYBlobIndex : NSObject {
    uint32_t _type, _offset;
    YYYBlob *_blob;
    NSData *_data;
}
@property(nonatomic) uint32_t type;
@property(nonatomic) uint32_t offset;
@property(nonatomic, strong) YYYBlob *blob;
@property(nonatomic, strong) NSData *data;
@property(nonatomic, readonly) ESignBlobIndexHeader blobIndex;
+ (id)blobIndexWithType:(uint32_t)type data:(id)data;
+ (id)blobIndexWithType:(uint32_t)type blob:(id)blob;
@end

@interface YYYSuperBlob : NSObject {
    uint32_t _magic;
    NSMutableArray *_blobs;
}
@property(nonatomic) uint32_t magic;
@property(nonatomic, strong) NSMutableArray *blobs;
@property(nonatomic, readonly) uint32_t count;
@property(nonatomic, readonly) uint32_t length;
- (void)setupBlobIndexsOffset;
- (void)addBlobIndex:(id)index;
- (ESignSuperBlobHeader)superBlob;
- (id)superBlobData;
+ (id)superBlobWithMagic:(uint32_t)magic;
+ (id)superBlobWithSuperBlobData:(id)data;
@end
