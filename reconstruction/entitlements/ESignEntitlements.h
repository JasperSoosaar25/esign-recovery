// ESign 5.0.2 metadata-derived API and original-derived implementation.
#import <Foundation/Foundation.h>
#include <stdint.h>

@interface YYYEntitlementValue : NSObject {
    unsigned char _type, _length;
    id _origValue;
    NSData *_value;
}
@property(nonatomic) unsigned char type;
@property(nonatomic, strong) id origValue;
@property(nonatomic, strong) NSData *value;
@property(nonatomic) unsigned char length;
- (unsigned char)totalLength;
- (id)data;
+ (id)entitlementValueWithValue:(id)value;
@end

@interface YYYEntitlementBlob : NSObject {
    unsigned char _padding, _length;
    BOOL _isArray;
    YYYEntitlementValue *_key;
    NSArray *_values;
}
@property(nonatomic) unsigned char padding;
@property(nonatomic) unsigned char length;
@property(nonatomic, strong) YYYEntitlementValue *key;
@property(nonatomic, strong) NSArray *values;
@property(nonatomic) BOOL isArray;
- (unsigned char)totalLenght;
- (id)data;
+ (id)blobWithKey:(id)key value:(id)value;
@end

@interface YYYEntitlementsSuperBlob : NSObject {
    unsigned char _byte1, _byte2;
    unsigned short _blobsLength;
    unsigned int _magic, _length;
    NSArray *_blobs;
}
@property(nonatomic) unsigned int magic;
@property(nonatomic) unsigned int length;
@property(nonatomic) unsigned char byte1;
@property(nonatomic) unsigned char byte2;
@property(nonatomic) unsigned short blobsLength;
@property(nonatomic, strong) NSArray *blobs;
- (id)data;
+ (id)supperBlobWithPlist:(id)plist;
@end
