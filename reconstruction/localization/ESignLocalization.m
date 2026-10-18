// Reviewed reconstruction from original instructions; not original source text.
// Original globals: cache 0x100e95f88, once 0x100e95f90, Chinese flag 0x100e95f98.
#import "ESignLocalization.h"
#import <dispatch/dispatch.h>

extern NSDictionary *ESignOriginalBaseDictionary(void);
static NSMutableDictionary *ESignLocalizationCache;
static BOOL ESignLocalizationChinese;

@implementation YYYLocalized

// Original +version at 0x100831b90, q16@0:8.
+ (long long)version {
    return 100;
}

// Original +addLocalizableInfo: at 0x100831ba8, v24@0:8@16.
// Deliberately does not initialize the cache; a pre-init addition has no effect.
+ (void)addLocalizableInfo:(id)info {
    if ([info isKindOfClass:[NSDictionary class]]) {
        [ESignLocalizationCache addEntriesFromDictionary:info];
    }
}

// Original +localizableForKey: at 0x100831c40, @24@0:8@16.
+ (id)localizableForKey:(id)key {
    static dispatch_once_t once;
    // Original block invoke at 0x100831da4. Language and preference APIs,
    // exact-match overlay lookup, and case-sensitive string tests are retained.
    dispatch_once(&once, ^{
        NSString *language = [[NSLocale autoupdatingCurrentLocale] languageCode];
        if (!language) language = @"en";
        NSDictionary *classes = @{
            @"pt-BR": @"YYYLocalized_brazil", @"pt": @"YYYLocalized_brazil",
            @"ar": @"YYYLocalized_arabic", @"ru": @"YYYLocalized_russian",
            @"fr": @"YYYLocalized_french", @"ckb": @"YYYLocalized_kurdish",
            @"vi": @"YYYLocalized_vietnamese", @"zh-Hant": @"YYYLocalized_traditional",
            @"zh-HK": @"YYYLocalized_hk"
        };
        if ([language hasPrefix:@"zh"]) {
            ESignLocalizationChinese = YES;
            ESignLocalizationCache = [[YYYLocalized_chinese localizableDic] mutableCopy];
            NSString *preferred = [[NSLocale preferredLanguages] firstObject];
            if ([preferred containsString:@"HK"] || [preferred containsString:@"Hant"]) {
                [self addLocalizableInfo:[YYYLocalized_traditional localizableDic]];
            }
        } else {
            ESignLocalizationCache = [[self localizableDic] mutableCopy];
        }
        NSString *name = classes[language];
        if (name && NSClassFromString(name)) {
            Class cls = NSClassFromString(name);
            if ([cls respondsToSelector:@selector(localizableDic)]) {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Warc-performSelector-leaks"
                id info = [cls performSelector:@selector(localizableDic) withObject:nil];
#pragma clang diagnostic pop
                [self addLocalizableInfo:info];
            }
        }
    });
    id value = ESignLocalizationCache[key];
    if (!value && !ESignLocalizationChinese) {
        NSLog(@"yyy 翻译不存在：%@", key);
    }
    return value ?: key;
}

// Original +localizableDic at 0x1008321b0, @16@0:8.
+ (id)localizableDic {
    return ESignOriginalBaseDictionary();
}
@end
