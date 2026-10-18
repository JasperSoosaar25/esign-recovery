// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c8d738
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface QMUIStringPrivate : NSObject
// IMP 0x1004c3e1c | v16@0:8
+ (void)load;
// IMP 0x1004c3eb0 | v16@0:8
+ (void)qmuisafety_NSString;
// IMP 0x1004c511c | v16@0:8
+ (void)qmuisafety_NSAttributedString;
// IMP 0x1004c320c | Q32@0:8Q16@24
+ (unsigned long long)transformIndexToDefaultMode:(unsigned long long)arg0 inString:(id)arg1;
// IMP 0x1004c32b0 | {_NSRange=QQ}44@0:8{_NSRange=QQ}16B32@36
+ (struct _NSRange)transformRangeToDefaultMode:(struct _NSRange)arg0 lessValue:(BOOL)arg1 inString:(id)arg2;
// IMP 0x1004c33f4 | {_NSRange=QQ}40@0:8{_NSRange=QQ}16@32
+ (struct _NSRange)downRoundRangeOfComposedCharacterSequences:(struct _NSRange)arg0 inString:(id)arg1;
// IMP 0x1004c34d0 | @40@0:8@16Q24B32B36
+ (id)substring:(id)arg0 avoidBreakingUpCharacterSequencesFromIndex:(unsigned long long)arg1 lessValue:(BOOL)arg2 countingNonASCIICharacterAsTwo:(BOOL)arg3;
// IMP 0x1004c3794 | @40@0:8@16Q24B32B36
+ (id)substring:(id)arg0 avoidBreakingUpCharacterSequencesToIndex:(unsigned long long)arg1 lessValue:(BOOL)arg2 countingNonASCIICharacterAsTwo:(BOOL)arg3;
// IMP 0x1004c3a44 | @48@0:8@16{_NSRange=QQ}24B40B44
+ (id)substring:(id)arg0 avoidBreakingUpCharacterSequencesWithRange:(struct _NSRange)arg1 lessValue:(BOOL)arg2 countingNonASCIICharacterAsTwo:(BOOL)arg3;
// IMP 0x1004c3cfc | @32@0:8@16Q24
+ (id)string:(id)arg0 avoidBreakingUpCharacterSequencesByRemoveCharacterAtIndex:(unsigned long long)arg1;
@end
