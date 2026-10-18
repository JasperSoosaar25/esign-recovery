/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYReaderStyleHelper | class address: 0x100c7d4a8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYReaderStyleHelper init] | 0x10011ab58 | ABI @16@0:8 */

/* Address: 0x10011ab58 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__init | bytes: 52 */

/* Recovered runtime selector: -[YYYReaderStyleHelper init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d021c0)(0x100e914b0);
  return IVar1;
}



/* -[YYYReaderStyleHelper setStyle:] | 0x10011ba58 | ABI v24@0:8Q16 */

/* Address: 0x10011ba58 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setStyle_ | bytes: 52 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setStyle:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setStyle_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02440)();
  return;
}



/* -[YYYReaderStyleHelper setFontSize:] | 0x10011d484 | ABI v24@0:8d16 */

/* Address: 0x10011d484 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setFontSize_ | bytes: 48 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setFontSize:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setFontSize_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d026b8)();
  return;
}



/* -[YYYReaderStyleHelper setBrightness:] | 0x10011dd18 | ABI v24@0:8d16 */

/* Address: 0x10011dd18 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBrightness_ | bytes: 40 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setBrightness:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBrightness_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011dd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d027a0)(0x100e914bc);
  return;
}



/* -[YYYReaderStyleHelper style] | 0x10011dfc8 | ABI Q16@0:8 */

/* Address: 0x10011dfc8 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__style | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper style]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYReaderStyleHelper::YYYReaderStyleHelper__instance__style(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011dfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d02810)();
  return uVar1;
}



/* -[YYYReaderStyleHelper brightness] | 0x10011dfe8 | ABI d16@0:8 */

/* Address: 0x10011dfe8 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__brightness | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper brightness]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYReaderStyleHelper::YYYReaderStyleHelper__instance__brightness(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011dff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d02830)();
  return dVar1;
}



/* -[YYYReaderStyleHelper fontSize] | 0x10011e008 | ABI d16@0:8 */

/* Address: 0x10011e008 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__fontSize | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderStyleHelper fontSize]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYReaderStyleHelper::YYYReaderStyleHelper__instance__fontSize(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d02858)(*(undefined8 *)(param_1 + 0x18));
  return dVar1;
}



/* -[YYYReaderStyleHelper font] | 0x10011e028 | ABI @16@0:8 */

/* Address: 0x10011e028 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__font | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderStyleHelper font]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__font(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02870)(*(undefined8 *)(param_1 + 0x20));
  return IVar1;
}



/* -[YYYReaderStyleHelper setFont:] | 0x10011e03c | ABI v24@0:8@16 */

/* Address: 0x10011e03c | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setFont_ | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setFont:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setFont_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02880)(param_1,param_3);
  return;
}



/* -[YYYReaderStyleHelper contentAttributes] | 0x10011e054 | ABI @16@0:8 */

/* Address: 0x10011e054 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__contentAttributes | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper contentAttributes]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__contentAttributes(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02890)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setContentAttributes:] | 0x10011e080 | ABI v24@0:8@16 */

/* Address: 0x10011e080 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setContentAttributes_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setContentAttributes:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setContentAttributes_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e09c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d028c0)();
  return;
}



/* -[YYYReaderStyleHelper chapterTitleAttributes] | 0x10011e0e8 | ABI @16@0:8 */

/* Address: 0x10011e0e8 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__chapterTitleAttributes | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper chapterTitleAttributes]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__chapterTitleAttributes
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02900)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setChapterTitleAttributes:] | 0x10011e108 | ABI v24@0:8@16 */

/* Address: 0x10011e108 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setChapterTitleAttributes_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setChapterTitleAttributes:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setChapterTitleAttributes_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02920)();
  return;
}



/* -[YYYReaderStyleHelper preferredStatusBarStyle] | 0x10011e198 | ABI q16@0:8 */

/* Address: 0x10011e198 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__preferredStatusBarStyle | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper preferredStatusBarStyle]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYReaderStyleHelper::YYYReaderStyleHelper__instance__preferredStatusBarStyle
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d02970)();
  return lVar1;
}



/* -[YYYReaderStyleHelper setPreferredStatusBarStyle:] | 0x10011e1c4 | ABI v24@0:8q16 */

/* Address: 0x10011e1c4 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setPreferredStatusBarStyle_ | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setPreferredStatusBarStyle:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setPreferredStatusBarStyle_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d029a0)();
  return;
}



/* -[YYYReaderStyleHelper backgroundColor] | 0x10011e1d8 | ABI @16@0:8 */

/* Address: 0x10011e1d8 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__backgroundColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper backgroundColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__backgroundColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e1e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d029b0)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setBackgroundColor:] | 0x10011e1ec | ABI v24@0:8@16 */

/* Address: 0x10011e1ec | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBackgroundColor_ | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setBackgroundColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d029c8)(param_1,param_3);
  return;
}



/* -[YYYReaderStyleHelper textColor] | 0x10011e204 | ABI @16@0:8 */

/* Address: 0x10011e204 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__textColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper textColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__textColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d029d8)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setTextColor:] | 0x10011e224 | ABI v24@0:8@16 */

/* Address: 0x10011e224 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setTextColor_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setTextColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setTextColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d029f8)();
  return;
}



/* -[YYYReaderStyleHelper toolViewBackgroundColor] | 0x10011e288 | ABI @16@0:8 */

/* Address: 0x10011e288 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__toolViewBackgroundColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper toolViewBackgroundColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__toolViewBackgroundColor
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02a28)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setToolViewBackgroundColor:] | 0x10011e2a8 | ABI v24@0:8@16 */

/* Address: 0x10011e2a8 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setToolViewBackgroundColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setToolViewBackgroundColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setToolViewBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d02a40)();
  return;
}



/* -[YYYReaderStyleHelper toolViewTextColor] | 0x10011e32c | ABI @16@0:8 */

/* Address: 0x10011e32c | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__toolViewTextColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper toolViewTextColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__toolViewTextColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02a88)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setToolViewTextColor:] | 0x10011e35c | ABI v24@0:8@16 */

/* Address: 0x10011e35c | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setToolViewTextColor_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setToolViewTextColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setToolViewTextColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d02ab0)();
  return;
}



/* -[YYYReaderStyleHelper backButtonColor] | 0x10011e3ac | ABI @16@0:8 */

/* Address: 0x10011e3ac | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__backButtonColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper backButtonColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__backButtonColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02ad0)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setBackButtonColor:] | 0x10011e3c0 | ABI v24@0:8@16 */

/* Address: 0x10011e3c0 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBackButtonColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setBackButtonColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setBackButtonColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02ae8)();
  return;
}



/* -[YYYReaderStyleHelper sliderBackgroundColor] | 0x10011e450 | ABI @16@0:8 */

/* Address: 0x10011e450 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderBackgroundColor | bytes: 8 */

/* Recovered runtime selector: -[YYYReaderStyleHelper sliderBackgroundColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderBackgroundColor
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



/* -[YYYReaderStyleHelper setSliderBackgroundColor:] | 0x10011e458 | ABI v24@0:8@16 */

/* Address: 0x10011e458 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderBackgroundColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setSliderBackgroundColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02b38)();
  return;
}



/* -[YYYReaderStyleHelper sliderTrackColor] | 0x10011e4ec | ABI @16@0:8 */

/* Address: 0x10011e4ec | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderTrackColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper sliderTrackColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderTrackColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02b80)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setSliderTrackColor:] | 0x10011e518 | ABI v24@0:8@16 */

/* Address: 0x10011e518 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderTrackColor_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setSliderTrackColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderTrackColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02bb0)();
  return;
}



/* -[YYYReaderStyleHelper sliderThumbColor] | 0x10011e57c | ABI @16@0:8 */

/* Address: 0x10011e57c | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderThumbColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper sliderThumbColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderThumbColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02be8)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setSliderThumbColor:] | 0x10011e590 | ABI v24@0:8@16 */

/* Address: 0x10011e590 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderThumbColor_ | bytes: 44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYReaderStyleHelper setSliderThumbColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderThumbColor_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010011e5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02bf8)();
  return;
}



/* -[YYYReaderStyleHelper sliderImageColor] | 0x10011e5f0 | ABI @16@0:8 */

/* Address: 0x10011e5f0 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderImageColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper sliderImageColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__sliderImageColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02c28)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setSliderImageColor:] | 0x10011e610 | ABI v24@0:8@16 */

/* Address: 0x10011e610 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderImageColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setSliderImageColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setSliderImageColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02c48)();
  return;
}



/* -[YYYReaderStyleHelper highlightedColor] | 0x10011e6a4 | ABI @16@0:8 */

/* Address: 0x10011e6a4 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__highlightedColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderStyleHelper highlightedColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__instance__highlightedColor(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011e6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02c98)();
  return IVar1;
}



/* -[YYYReaderStyleHelper setHighlightedColor:] | 0x10011e6d4 | ABI v24@0:8@16 */

/* Address: 0x10011e6d4 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setHighlightedColor_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderStyleHelper setHighlightedColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance__setHighlightedColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02cc0)();
  return;
}



/* -[YYYReaderStyleHelper .cxx_destruct] | 0x10011e730 | ABI v16@0:8 */

/* Address: 0x10011e730 | YYYReaderStyleHelper::YYYReaderStyleHelper__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYReaderStyleHelper .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderStyleHelper::YYYReaderStyleHelper__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010011e748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d02cf0)();
  return;
}



/* +[YYYReaderStyleHelper shared] | 0x10011a97c | ABI @16@0:8 */

/* Address: 0x10011a97c | YYYReaderStyleHelper::YYYReaderStyleHelper__class__shared | bytes: 20 */

/* Recovered runtime selector: +[YYYReaderStyleHelper shared]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderStyleHelper::YYYReaderStyleHelper__class__shared(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010011a98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d02090)();
  return IVar1;
}


