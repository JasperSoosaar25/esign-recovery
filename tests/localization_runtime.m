// Apple Foundation runtime validation for the reconstructed localization slice.
// Locale replacement is confined to this test executable.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "ESignLocalization.h"

static id TestLanguage;
static id TestPreferred;
static NSUInteger LocaleCalls;
@interface RecoveryTestLocale : NSObject
- (id)languageCode;
@end
@implementation RecoveryTestLocale
- (id)languageCode { return TestLanguage; }
@end
static id TestCurrentLocale(id receiver, SEL selector) {
    (void)receiver; (void)selector;
    LocaleCalls++;
    return [RecoveryTestLocale new];
}
static id TestPreferredLanguages(id receiver, SEL selector) {
    (void)receiver; (void)selector;
    return TestPreferred ? @[TestPreferred] : @[];
}
static void PrintJSON(id object) {
    NSError *error;
    NSData *data = [NSJSONSerialization dataWithJSONObject:object options:NSJSONWritingSortedKeys error:&error];
    if (!data) { NSLog(@"JSON failed: %@", error); exit(2); }
    fwrite(data.bytes, 1, data.length, stdout);
    fputc('\n', stdout);
}
int main(int argc, const char *argv[]) {
    @autoreleasepool {
        if (argc < 2) return 2;
        NSArray *names = @[@"YYYLocalized", @"YYYLocalized_arabic", @"YYYLocalized_brazil",
            @"YYYLocalized_chinese", @"YYYLocalized_french", @"YYYLocalized_hk",
            @"YYYLocalized_kurdish", @"YYYLocalized_russian", @"YYYLocalized_traditional",
            @"YYYLocalized_vietnamese"];
        NSMutableDictionary *tables = [NSMutableDictionary dictionary];
        NSMutableSet *keys = [NSMutableSet set];
        for (NSString *name in names) {
            id table = [NSClassFromString(name) localizableDic];
            if (![table isKindOfClass:[NSDictionary class]]) return 3;
            tables[name] = table;
            [keys addObjectsFromArray:[table allKeys]];
        }
        if (strcmp(argv[1], "--tables") == 0) { PrintJSON(tables); return 0; }
        if (argc != 3) return 2;
        NSData *input = [NSData dataWithContentsOfFile:@(argv[1])];
        NSArray *fixtures = [NSJSONSerialization JSONObjectWithData:input options:0 error:NULL];
        NSDictionary *fixture = fixtures[(NSUInteger)strtoul(argv[2], NULL, 10)];
        TestLanguage = fixture[@"language"] == [NSNull null] ? nil : fixture[@"language"];
        TestPreferred = fixture[@"preferred"] == [NSNull null] ? nil : fixture[@"preferred"];
        method_setImplementation(class_getClassMethod([NSLocale class], @selector(autoupdatingCurrentLocale)), (IMP)TestCurrentLocale);
        method_setImplementation(class_getClassMethod([NSLocale class], @selector(preferredLanguages)), (IMP)TestPreferredLanguages);
        [YYYLocalized addLocalizableInfo:@{@"__preinit": @"discarded"}];
        NSString *missing = @"__ESign_recovery_missing_key__";
        id first = [YYYLocalized localizableForKey:missing];
        [keys addObject:missing];
        NSMutableDictionary *lookups = [NSMutableDictionary dictionary];
        for (NSString *key in [[keys allObjects] sortedArrayUsingSelector:@selector(compare:)]) {
            lookups[key] = [YYYLocalized localizableForKey:key];
        }
        [YYYLocalized addLocalizableInfo:nil];
        [YYYLocalized addLocalizableInfo:@"not a dictionary"];
        [YYYLocalized addLocalizableInfo:@[]];
        for (NSString *key in lookups) {
            if (![lookups[key] isEqual:[YYYLocalized localizableForKey:key]]) return 4;
        }
        NSString *preinit = [YYYLocalized localizableForKey:@"__preinit"];
        [YYYLocalized addLocalizableInfo:fixture[@"overlay"]];
        NSMutableDictionary *overlay = [NSMutableDictionary dictionary];
        for (NSString *key in fixture[@"overlay"]) overlay[key] = [YYYLocalized localizableForKey:key];
        PrintJSON(@{@"version": @([YYYLocalized version]), @"first": first, @"lookups": lookups,
                    @"preinit": preinit, @"overlay": overlay, @"locale_calls": @(LocaleCalls)});
    }
    return 0;
}
