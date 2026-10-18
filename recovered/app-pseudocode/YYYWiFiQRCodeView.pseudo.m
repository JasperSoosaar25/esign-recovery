/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWiFiQRCodeView | class address: 0x100c80230
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWiFiQRCodeView initWithFrame:] | 0x1002ec408 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1002ec408 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002ec448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9c390)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYWiFiQRCodeView showWithUrl:] | 0x1002ec5f8 | ABI v24@0:8@16 */

/* Address: 0x1002ec5f8 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__showWithUrl_ | bytes: 52 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView showWithUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__showWithUrl_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002ec628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9c458)();
  return;
}



/* -[YYYWiFiQRCodeView dismiss] | 0x1002ec980 | ABI v16@0:8 */

/* Address: 0x1002ec980 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__dismiss | bytes: 88 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView dismiss]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__dismiss(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002ec9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9c4f8)(param_1,&_OBJC_CLASS___UIView);
  return;
}



/* -[YYYWiFiQRCodeView createQRCodeImageFromString:] | 0x1002ecae8 | ABI @24@0:8@16 */

/* Address: 0x1002ecae8 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createQRCodeImageFromString_ | bytes: 28 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView createQRCodeImageFromString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createQRCodeImageFromString_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002ecb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9c580)();
  return IVar1;
}



/* -[YYYWiFiQRCodeView createQRForString:] | 0x1002ecb78 | ABI @24@0:8@16 */

/* Address: 0x1002ecb78 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createQRForString_ | bytes: 48 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView createQRForString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createQRForString_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002ecba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d9c5b8)();
  return IVar1;
}



/* -[YYYWiFiQRCodeView createNonInterpolatedUIImageFormCIImage:withSize:] | 0x1002ed2e8 | ABI @32@0:8@16d24 */

/* Address: 0x1002ed2e8 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createNonInterpolatedUIImageFormCIImage_withSize_ | bytes: 60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYWiFiQRCodeView
   createNonInterpolatedUIImageFormCIImage:withSize:]
   Original ABI encoding: @32@0:8@16d24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__createNonInterpolatedUIImageFormCIImage_withSize_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002ed320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9c688)(param_3);
  return IVar1;
}



/* -[YYYWiFiQRCodeView loadSubviews] | 0x1002ed5f8 | ABI v16@0:8 */

/* Address: 0x1002ed5f8 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__loadSubviews | bytes: 40 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002ed61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9c700)();
  return;
}



/* -[YYYWiFiQRCodeView setupFrame] | 0x1002edcfc | ABI v16@0:8 */

/* Address: 0x1002edcfc | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setupFrame | bytes: 260 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYWiFiQRCodeView setupFrame]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setupFrame(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ID IStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ID IStack_68;
  
  IVar2 = objc_stub::contentView(param_1);
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_88 = PTR___NSConcreteStackBlock_100afc560;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1002edf7c;
  puStack_70 = &DAT_100afeb38;
  IStack_68 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_88);
  IVar2 = objc_stub::imageView(param_1);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1002ef5d4;
  puStack_98 = &DAT_100afeb38;
  IStack_90 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_b0);
  IVar2 = objc_stub::urlLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002eddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9c7c0)(IVar2);
  return;
}



/* -[YYYWiFiQRCodeView contentView] | 0x1002f0c3c | ABI @16@0:8 */

/* Address: 0x1002f0c3c | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__contentView | bytes: 12 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9d2d0)();
  return IVar1;
}



/* -[YYYWiFiQRCodeView setContentView:] | 0x1002f0c58 | ABI v24@0:8@16 */

/* Address: 0x1002f0c58 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setContentView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d2d8)();
  return;
}



/* -[YYYWiFiQRCodeView imageView] | 0x1002f0cfc | ABI @16@0:8 */

/* Address: 0x1002f0cfc | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__imageView | bytes: 20 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView imageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__imageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9d330)((long)_imageView);
  return IVar1;
}



/* -[YYYWiFiQRCodeView setImageView:] | 0x1002f0d30 | ABI v24@0:8@16 */

/* Address: 0x1002f0d30 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setImageView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView setImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d360)();
  return;
}



/* -[YYYWiFiQRCodeView urlLabel] | 0x1002f0d9c | ABI @16@0:8 */

/* Address: 0x1002f0d9c | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__urlLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView urlLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__urlLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9d390)((long)_urlLabel);
  return IVar1;
}



/* -[YYYWiFiQRCodeView setUrlLabel:] | 0x1002f0db8 | ABI v24@0:8@16 */

/* Address: 0x1002f0db8 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setUrlLabel_ | bytes: 24 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView setUrlLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setUrlLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d3a0)(param_1,param_3);
  return;
}



/* -[YYYWiFiQRCodeView tipLabel] | 0x1002f0df4 | ABI @16@0:8 */

/* Address: 0x1002f0df4 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__tipLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView tipLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__tipLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9d3c0)((long)_tipLabel);
  return IVar1;
}



/* -[YYYWiFiQRCodeView setTipLabel:] | 0x1002f0e28 | ABI v24@0:8@16 */

/* Address: 0x1002f0e28 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setTipLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView setTipLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setTipLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d3e8)((long)_tipLabel);
  return;
}



/* -[YYYWiFiQRCodeView closeButton] | 0x1002f0e98 | ABI @16@0:8 */

/* Address: 0x1002f0e98 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__closeButton | bytes: 12 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView closeButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__closeButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9d428)();
  return IVar1;
}



/* -[YYYWiFiQRCodeView setCloseButton:] | 0x1002f0ecc | ABI v24@0:8@16 */

/* Address: 0x1002f0ecc | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setCloseButton_ | bytes: 44 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView setCloseButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance__setCloseButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d460)();
  return;
}



/* -[YYYWiFiQRCodeView .cxx_destruct] | 0x1002f0f58 | ABI v16@0:8 */

/* Address: 0x1002f0f58 | YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance___cxx_destruct | bytes: 36 */

/* Recovered runtime selector: -[YYYWiFiQRCodeView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWiFiQRCodeView::YYYWiFiQRCodeView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f0f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9d498)();
  return;
}



/* +[YYYWiFiQRCodeView requiresConstraintBasedLayout] | 0x1002f0c1c | ABI B16@0:8 */

/* Address: 0x1002f0c1c | YYYWiFiQRCodeView::YYYWiFiQRCodeView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYWiFiQRCodeView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYWiFiQRCodeView::YYYWiFiQRCodeView__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f0c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d9d2b0)((int)param_1);
  return bVar1;
}


