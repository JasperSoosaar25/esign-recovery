/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYReaderBottomView | class address: 0x100c818a0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYReaderBottomView initWithFrame:] | 0x1003cfb7c | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1003cfb7c | YYYReaderBottomView::YYYReaderBottomView__instance__initWithFrame_ | bytes: 76 */

/* Recovered runtime selector: -[YYYReaderBottomView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cfbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100deb638)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYReaderBottomView pointInside:withEvent:] | 0x1003cfdcc | ABI B40@0:8{CGPoint=dd}16@32 */

/* Address: 0x1003cfdcc | YYYReaderBottomView::YYYReaderBottomView__instance__pointInside_withEvent_ | bytes: 80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYReaderBottomView pointInside:withEvent:]
   Original ABI encoding: B40@0:8{CGPoint=dd}16@32
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYReaderBottomView::YYYReaderBottomView__instance__pointInside_withEvent_
               (ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  bool bVar1;
  ID self;
  
  self = objc_stub::backgroundView(param_1,param_3.field0_0x0,param_3.field1_0x8);
  objc_stub::frame(self);
                    /* WARNING: Could not recover jumptable at 0x0001003cfe18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100deb718)();
  return bVar1;
}



/* -[YYYReaderBottomView dealloc] | 0x1003cfe78 | ABI v16@0:8 */

/* Address: 0x1003cfe78 | YYYReaderBottomView::YYYReaderBottomView__instance__dealloc | bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYReaderBottomView dealloc]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__dealloc(ID param_1,SEL param_2)

{
  ID self;
  
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(self,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001003cfed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deb748)(0);
  return;
}



/* -[YYYReaderBottomView styleChange] | 0x1003cff08 | ABI v16@0:8 */

/* Address: 0x1003cff08 | YYYReaderBottomView::YYYReaderBottomView__instance__styleChange | bytes: 40 */

/* Recovered runtime selector: -[YYYReaderBottomView styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__styleChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deb768)();
  return;
}



/* -[YYYReaderBottomView createButtonWithImageName:] | 0x1003d018c | ABI @24@0:8@16 */

/* Address: 0x1003d018c | YYYReaderBottomView::YYYReaderBottomView__instance__createButtonWithImageName_ | bytes: 56 */

/* Recovered runtime selector: -[YYYReaderBottomView createButtonWithImageName:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__createButtonWithImageName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d01c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100deb790)();
  return IVar1;
}



/* -[YYYReaderBottomView setShowType:] | 0x1003d0460 | ABI v24@0:8Q16 */

/* Address: 0x1003d0460 | YYYReaderBottomView::YYYReaderBottomView__instance__setShowType_ | bytes: 88 */

/* Recovered runtime selector: -[YYYReaderBottomView setShowType:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setShowType_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d04b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deb7f8)();
  return;
}



/* -[YYYReaderBottomView hiddenAll] | 0x1003d199c | ABI v16@0:8 */

/* Address: 0x1003d199c | YYYReaderBottomView::YYYReaderBottomView__instance__hiddenAll | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderBottomView hiddenAll]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__hiddenAll(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d19a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100debf80)();
  return;
}



/* -[YYYReaderBottomView toolButtonHandle:] | 0x1003d19b0 | ABI v24@0:8@16 */

/* Address: 0x1003d19b0 | YYYReaderBottomView::YYYReaderBottomView__instance__toolButtonHandle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderBottomView toolButtonHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__toolButtonHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100debf90)();
  return;
}



/* -[YYYReaderBottomView loadSubviews] | 0x1003d1af4 | ABI v16@0:8 */

/* Address: 0x1003d1af4 | YYYReaderBottomView::YYYReaderBottomView__instance__loadSubviews | bytes: 52 */

/* Recovered runtime selector: -[YYYReaderBottomView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d1b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec068)();
  return;
}



/* -[YYYReaderBottomView brightnessToolView] | 0x1003d2958 | ABI @16@0:8 */

/* Address: 0x1003d2958 | YYYReaderBottomView::YYYReaderBottomView__instance__brightnessToolView | bytes: 44 */

/* Recovered runtime selector: -[YYYReaderBottomView brightnessToolView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__brightnessToolView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d2980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec150)();
  return IVar1;
}



/* -[YYYReaderBottomView fontToolView] | 0x1003d2b9c | ABI @16@0:8 */

/* Address: 0x1003d2b9c | YYYReaderBottomView::YYYReaderBottomView__instance__fontToolView | bytes: 160 */

/* Recovered runtime selector: -[YYYReaderBottomView fontToolView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__fontToolView(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 extraout_d0;
  
  switch(*(long *)(param_1 + (long)_fontToolView) != 0) {
  case false:
    _objc_alloc(&objc::class_t::YYYFontToolView);
    objc_stub::f_width(param_1);
    FUN_1003d2948(0,0,extraout_d0,0x4049000000000000);
                    /* WARNING: Could not recover jumptable at 0x0001003d2c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar1 = (*(code *)PTR_LAB_100dec210)();
    return IVar1;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0001003d2c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar1 = (*(code *)PTR_LAB_100dec238)();
    return IVar1;
  }
}



/* -[YYYReaderBottomView showType] | 0x1003d2d80 | ABI Q16@0:8 */

/* Address: 0x1003d2d80 | YYYReaderBottomView::YYYReaderBottomView__instance__showType | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderBottomView showType]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYReaderBottomView::YYYReaderBottomView__instance__showType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_showType);
}



/* -[YYYReaderBottomView stackView] | 0x1003d2d90 | ABI @16@0:8 */

/* Address: 0x1003d2d90 | YYYReaderBottomView::YYYReaderBottomView__instance__stackView | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView stackView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__stackView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d2da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec250)((long)_stackView);
  return IVar1;
}



/* -[YYYReaderBottomView setStackView:] | 0x1003d2dc4 | ABI v24@0:8@16 */

/* Address: 0x1003d2dc4 | YYYReaderBottomView::YYYReaderBottomView__instance__setStackView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYReaderBottomView setStackView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setStackView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d2ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec280)();
  return;
}



/* -[YYYReaderBottomView backgroundView] | 0x1003d2e34 | ABI @16@0:8 */

/* Address: 0x1003d2e34 | YYYReaderBottomView::YYYReaderBottomView__instance__backgroundView | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderBottomView backgroundView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__backgroundView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundView);
}



/* -[YYYReaderBottomView setBackgroundView:] | 0x1003d2e44 | ABI v24@0:8@16 */

/* Address: 0x1003d2e44 | YYYReaderBottomView::YYYReaderBottomView__instance__setBackgroundView_ | bytes: 44 */

/* Recovered runtime selector: -[YYYReaderBottomView setBackgroundView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setBackgroundView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d2e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec2c8)();
  return;
}



/* -[YYYReaderBottomView toolView] | 0x1003d2ee8 | ABI @16@0:8 */

/* Address: 0x1003d2ee8 | YYYReaderBottomView::YYYReaderBottomView__instance__toolView | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView toolView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__toolView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d2ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec318)((long)_toolView);
  return IVar1;
}



/* -[YYYReaderBottomView setToolView:] | 0x1003d2f1c | ABI v24@0:8@16 */

/* Address: 0x1003d2f1c | YYYReaderBottomView::YYYReaderBottomView__instance__setToolView_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYReaderBottomView setToolView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setToolView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_toolView) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001003d2f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dec340)();
  return;
}



/* -[YYYReaderBottomView catalogButton] | 0x1003d2f80 | ABI @16@0:8 */

/* Address: 0x1003d2f80 | YYYReaderBottomView::YYYReaderBottomView__instance__catalogButton | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView catalogButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__catalogButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d2f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec360)((long)_catalogButton);
  return IVar1;
}



/* -[YYYReaderBottomView setCatalogButton:] | 0x1003d2f9c | ABI v24@0:8@16 */

/* Address: 0x1003d2f9c | YYYReaderBottomView::YYYReaderBottomView__instance__setCatalogButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderBottomView setCatalogButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setCatalogButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d2fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec370)();
  return;
}



/* -[YYYReaderBottomView brightnessButton] | 0x1003d3034 | ABI @16@0:8 */

/* Address: 0x1003d3034 | YYYReaderBottomView::YYYReaderBottomView__instance__brightnessButton | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView brightnessButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__brightnessButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d3044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec3c8)((long)_brightnessButton);
  return IVar1;
}



/* -[YYYReaderBottomView setBrightnessButton:] | 0x1003d305c | ABI v24@0:8@16 */

/* Address: 0x1003d305c | YYYReaderBottomView::YYYReaderBottomView__instance__setBrightnessButton_ | bytes: 28 */

/* Recovered runtime selector: -[YYYReaderBottomView setBrightnessButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setBrightnessButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d3074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec3e8)();
  return;
}



/* -[YYYReaderBottomView fontButton] | 0x1003d30c0 | ABI @16@0:8 */

/* Address: 0x1003d30c0 | YYYReaderBottomView::YYYReaderBottomView__instance__fontButton | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderBottomView fontButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__fontButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d30c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec410)();
  return IVar1;
}



/* -[YYYReaderBottomView setFontButton:] | 0x1003d30f4 | ABI v24@0:8@16 */

/* Address: 0x1003d30f4 | YYYReaderBottomView::YYYReaderBottomView__instance__setFontButton_ | bytes: 28 */

/* Recovered runtime selector: -[YYYReaderBottomView setFontButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setFontButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d310c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec448)();
  return;
}



/* -[YYYReaderBottomView setBrightnessToolView:] | 0x1003d3158 | ABI v24@0:8@16 */

/* Address: 0x1003d3158 | YYYReaderBottomView::YYYReaderBottomView__instance__setBrightnessToolView_ | bytes: 44 */

/* Recovered runtime selector: -[YYYReaderBottomView setBrightnessToolView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setBrightnessToolView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d3180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec478)();
  return;
}



/* -[YYYReaderBottomView setFontToolView:] | 0x1003d31bc | ABI v24@0:8@16 */

/* Address: 0x1003d31bc | YYYReaderBottomView::YYYReaderBottomView__instance__setFontToolView_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYReaderBottomView setFontToolView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setFontToolView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_fontToolView) = param_3;
  return;
}



/* -[YYYReaderBottomView showTypeChangeBlock] | 0x1003d31f4 | ABI @?16@0:8 */

/* Address: 0x1003d31f4 | YYYReaderBottomView::YYYReaderBottomView__instance__showTypeChangeBlock | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView showTypeChangeBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderBottomView::YYYReaderBottomView__instance__showTypeChangeBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d3204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dec490)((long)_showTypeChangeBlock);
  return IVar1;
}



/* -[YYYReaderBottomView setShowTypeChangeBlock:] | 0x1003d3228 | ABI v24@0:8@?16 */

/* Address: 0x1003d3228 | YYYReaderBottomView::YYYReaderBottomView__instance__setShowTypeChangeBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYReaderBottomView setShowTypeChangeBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setShowTypeChangeBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d324c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec4c0)();
  return;
}



/* -[YYYReaderBottomView showBrightness] | 0x1003d32b4 | ABI B16@0:8 */

/* Address: 0x1003d32b4 | YYYReaderBottomView::YYYReaderBottomView__instance__showBrightness | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderBottomView showBrightness]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYReaderBottomView::YYYReaderBottomView__instance__showBrightness(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003d32bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dec508)((int)param_1);
  return bVar1;
}



/* -[YYYReaderBottomView setShowBrightness:] | 0x1003d32e8 | ABI v20@0:8B16 */

/* Address: 0x1003d32e8 | YYYReaderBottomView::YYYReaderBottomView__instance__setShowBrightness_ | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderBottomView setShowBrightness:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance__setShowBrightness_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d32f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dec538)(&LMApp::_roleIdentifier,param_1,param_2,param_3);
  return;
}



/* -[YYYReaderBottomView .cxx_destruct] | 0x1003d3324 | ABI v16@0:8 */

/* Address: 0x1003d3324 | YYYReaderBottomView::YYYReaderBottomView__instance___cxx_destruct | bytes: 56 */

/* Recovered runtime selector: -[YYYReaderBottomView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderBottomView::YYYReaderBottomView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003d3358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dec558)();
  return;
}


