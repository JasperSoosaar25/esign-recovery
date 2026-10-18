/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLanZouQRCodeView | class address: 0x100c7b538
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYLanZouQRCodeView initWithFrame:] | 0x10002f898 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10002f898 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__initWithFrame_ | bytes: 64 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  objc_super oStack_40;
  
  oStack_40.super_class = &objc::class_t::YYYLanZouQRCodeView;
  oStack_40.receiver = param_1;
  _objc_msgSendSuper2(&oStack_40,"initWithFrame:",param_3.field0_0x0.field0_0x0,
                      param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                      param_3.field1_0x10.field1_0x8);
                    /* WARNING: Could not recover jumptable at 0x00010002f8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100caf240)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView showWithFile:] | 0x10002f9f4 | ABI v24@0:8@16 */

/* Address: 0x10002f9f4 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__showWithFile_ | bytes: 48 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView showWithFile:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__showWithFile_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010002fa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100caf2d0)(0x100e90f0c);
  return;
}



/* -[YYYLanZouQRCodeView dismiss] | 0x10002ffd4 | ABI v16@0:8 */

/* Address: 0x10002ffd4 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__dismiss | bytes: 60 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView dismiss]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__dismiss(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003000c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100caf460)(&_OBJC_CLASS___UIView);
  return;
}



/* -[YYYLanZouQRCodeView createQRCodeImageFromString:] | 0x100030140 | ABI @24@0:8@16 */

/* Address: 0x100030140 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__createQRCodeImageFromString_ | bytes: 36 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView createQRCodeImageFromString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__createQRCodeImageFromString_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100030160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100caf4e8)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView createQRForString:] | 0x10003031c | ABI @24@0:8@16 */

/* Address: 0x10003031c | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__createQRForString_ | bytes: 36 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView createQRForString:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__createQRForString_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100caf610)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView createNonInterpolatedUIImageFormCIImage:withSize:] | 0x1000308ec | ABI @32@0:8@16d24 */

/* Address: 0x1000308ec | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__createNonInterpolatedUIImageFormCIImage_withSize_ | bytes: 52 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView
   createNonInterpolatedUIImageFormCIImage:withSize:]
   Original ABI encoding: @32@0:8@16d24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::
   YYYLanZouQRCodeView__instance__createNonInterpolatedUIImageFormCIImage_withSize_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003091c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100caf6a0)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView loadSubviews] | 0x100030bf8 | ABI v16@0:8 */

/* Address: 0x100030bf8 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100030c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100caf738)();
  return;
}



/* -[YYYLanZouQRCodeView setupFrame] | 0x100031350 | ABI v16@0:8 */

/* Address: 0x100031350 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setupFrame | bytes: 60 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView setupFrame]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setupFrame(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100031388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100caf7d0)();
  return;
}



/* -[YYYLanZouQRCodeView contentView] | 0x100034278 | ABI @16@0:8 */

/* Address: 0x100034278 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__contentView | bytes: 12 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100034280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb0338)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView setContentView:] | 0x1000342a0 | ABI v24@0:8@16 */

/* Address: 0x1000342a0 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setContentView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000342c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb0358)();
  return;
}



/* -[YYYLanZouQRCodeView imageView] | 0x100034338 | ABI @16@0:8 */

/* Address: 0x100034338 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__imageView | bytes: 12 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView imageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__imageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100034340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb03a8)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView setImageView:] | 0x100034354 | ABI v24@0:8@16 */

/* Address: 0x100034354 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setImageView_ | bytes: 52 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYLanZouQRCodeView setImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100034384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb03b8)(*(undefined8 *)(param_1 + (long)_imageView),param_3);
  return;
}



/* -[YYYLanZouQRCodeView urlLabel] | 0x1000343b4 | ABI @16@0:8 */

/* Address: 0x1000343b4 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__urlLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView urlLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__urlLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000343c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb03e0)((long)_urlLabel);
  return IVar1;
}



/* -[YYYLanZouQRCodeView setUrlLabel:] | 0x1000343dc | ABI v24@0:8@16 */

/* Address: 0x1000343dc | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setUrlLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView setUrlLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setUrlLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000343fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb03f8)();
  return;
}



/* -[YYYLanZouQRCodeView tipLabel] | 0x10003444c | ABI @16@0:8 */

/* Address: 0x10003444c | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__tipLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView tipLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__tipLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100034454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb0430)();
  return IVar1;
}



/* -[YYYLanZouQRCodeView setTipLabel:] | 0x100034480 | ABI v24@0:8@16 */

/* Address: 0x100034480 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setTipLabel_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYLanZouQRCodeView setTipLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setTipLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_tipLabel) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001000344b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb0458)();
  return;
}



/* -[YYYLanZouQRCodeView closeButton] | 0x1000344e4 | ABI @16@0:8 */

/* Address: 0x1000344e4 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__closeButton | bytes: 20 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView closeButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__closeButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000344f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb0478)((long)_closeButton);
  return IVar1;
}



/* -[YYYLanZouQRCodeView setCloseButton:] | 0x100034518 | ABI v24@0:8@16 */

/* Address: 0x100034518 | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setCloseButton_ | bytes: 44 */

/* Recovered runtime selector: -[YYYLanZouQRCodeView setCloseButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance__setCloseButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100034540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb04b0)();
  return;
}



/* -[YYYLanZouQRCodeView .cxx_destruct] | 0x10003457c | ABI v16@0:8 */

/* Address: 0x10003457c | YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance___cxx_destruct | bytes: 68 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYLanZouQRCodeView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouQRCodeView::YYYLanZouQRCodeView__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_closeButton) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000345bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb04c8)();
  return;
}



/* +[YYYLanZouQRCodeView requiresConstraintBasedLayout] | 0x10003424c | ABI B16@0:8 */

/* Address: 0x10003424c | YYYLanZouQRCodeView::YYYLanZouQRCodeView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYLanZouQRCodeView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYLanZouQRCodeView::YYYLanZouQRCodeView__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100034254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cb0308)((int)param_1);
  return bVar1;
}


