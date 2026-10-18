// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c97148
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface UMComPackage : NSObject
// IMP 0x1006a8448 | @88@0:8@16@24@32@40@48@56@64@72@80
+ (id)packageWithErrors:(id)arg0 withEvents:(id)arg1 withSessions:(id)arg2 withThreePartiesData:(id)arg3 withProfileData:(id)arg4 withGameData:(id)arg5 withABExperimentData:(id)arg6 withExtHeadersData:(id)arg7 withSessionStarts:(id)arg8;
// IMP 0x1006a8a5c | @24@0:8@16
+ (id)packageMetadataWithExtHeadersData:(id)arg0;
// IMP 0x1006a8c54 | @24@0:8@16
+ (id)buildErrors:(id)arg0;
// IMP 0x1006a8f04 | @24@0:8@16
+ (id)buildEvents:(id)arg0;
// IMP 0x1006a983c | @24@0:8@16
+ (id)buildSessions:(id)arg0;
// IMP 0x1006aa2d0 | @16@0:8
+ (id)buildHeaders;
// IMP 0x1006aa704 | @24@0:8@16
+ (id)buildSessionStarts:(id)arg0;
// IMP 0x1006aab60 | @16@0:8
+ (id)generateNewPreVersionDate;
// IMP 0x1006aac0c | @16@0:8
+ (id)preVersionStringInLocal;
// IMP 0x1006aac28 | v24@0:8@16
+ (void)setPreVersionStringInLocal:(id)arg0;
// IMP 0x1006aac8c | @16@0:8
+ (id)preVersionDateStringInLocal;
// IMP 0x1006aaca8 | v24@0:8@16
+ (void)setPreVersionDateStringInLocal:(id)arg0;
// IMP 0x1006aad0c | @16@0:8
+ (id)preVersionStringInImprint;
// IMP 0x1006aad28 | @16@0:8
+ (id)preVersionDateStringInImprint;
// IMP 0x1006aad44 | @16@0:8
+ (id)preVersionString;
// IMP 0x1006aae24 | @16@0:8
+ (id)preVersionDateString;
@end
