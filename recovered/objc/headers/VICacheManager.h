// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c7c7e8
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface VICacheManager : NSObject
// IMP 0x1000ad584 | v24@0:8@16
+ (void)setCacheDirectory:(id)arg0;
// IMP 0x1000ad608 | @16@0:8
+ (id)cacheDirectory;
// IMP 0x1000ad900 | v24@0:8@?16
+ (void)setFileNameRules:(id /* block */)arg0;
// IMP 0x1000ad9b0 | @24@0:8@16
+ (id)cachedFilePathForURL:(id)arg0;
// IMP 0x1000adc10 | @24@0:8@16
+ (id)cacheConfigurationForURL:(id)arg0;
// IMP 0x1000add20 | Q24@0:8^@16
+ (unsigned long long)calculateCachedSizeWithError:(id *)arg0;
// IMP 0x1000ae23c | v24@0:8^@16
+ (void)cleanAllCacheWithError:(id *)arg0;
// IMP 0x1000ae950 | v32@0:8@16^@24
+ (void)cleanCacheForURL:(id)arg0 error:(id *)arg1;
// IMP 0x1000af49c | B40@0:8@16@24^@32
+ (BOOL)addCacheFile:(id)arg0 forURL:(id)arg1 error:(id *)arg2;
@end
