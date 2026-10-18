/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSignFooterView | class address: 0x100c81620
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSignFooterView initWithFrame:] | 0x10038b434 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10038b434 | YYYSignFooterView::YYYSignFooterView__instance__initWithFrame_ | bytes: 32 */

/* Recovered runtime selector: -[YYYSignFooterView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFooterView::YYYSignFooterView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010038b450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd2510)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYSignFooterView loadSubviews] | 0x10038b528 | ABI v16@0:8 */

/* Address: 0x10038b528 | YYYSignFooterView::YYYSignFooterView__instance__loadSubviews | bytes: 36 */

/* Recovered runtime selector: -[YYYSignFooterView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010038b548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd25a8)();
  return;
}



/* -[YYYSignFooterView layoutSubviews] | 0x10038bc08 | ABI v16@0:8 */

/* Address: 0x10038bc08 | YYYSignFooterView::YYYSignFooterView__instance__layoutSubviews | bytes: 352 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYSignFooterView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance__layoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  double extraout_d0;
  undefined8 uVar2;
  undefined8 extraout_d0_00;
  undefined8 extraout_d0_01;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  objc_super oStack_60;
  
  oStack_60.super_class = &objc::class_t::YYYSignFooterView;
  oStack_60.receiver = param_1;
  _objc_msgSendSuper2(&oStack_60,"layoutSubviews");
  objc_stub::f_width(param_1);
  uVar2 = FUN_10038be08(extraout_d0 + -40.0,0x4044000000000000);
  IVar1 = objc_stub::button(param_1);
  uVar3 = 0x4044000000000000;
  objc_stub::FUN_100964060(IVar1,uVar2,0x4044000000000000);
  objc_stub::FUN_100939920(param_1);
  IVar1 = objc_stub::button(param_1);
  objc_stub::FUN_100963fc0(IVar1,extraout_d0_00);
  IVar1 = objc_stub::button(param_1);
  objc_stub::setF_top_(IVar1,0x4034000000000000);
  IVar1 = objc_stub::button(param_1);
  objc_stub::frame(IVar1);
  IVar1 = objc_stub::showMoreBtn(param_1);
  objc_stub::setFrame_(IVar1,extraout_d0_01,uVar3,in_d2,in_d3);
  IVar1 = objc_stub::button(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010038bd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd2660)(IVar1);
  return;
}



/* -[YYYSignFooterView showMore] | 0x10038be2c | ABI v16@0:8 */

/* Address: 0x10038be2c | YYYSignFooterView::YYYSignFooterView__instance__showMore | bytes: 68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSignFooterView showMore]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance__showMore(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::qmui_colorWithThemeProvider_
                    ((ID)&_OBJC_CLASS___UIColor,&PTR___NSConcreteGlobalBlock_100b03628);
                    /* WARNING: Could not recover jumptable at 0x00010038be6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dd26a0)(IVar1);
  return;
}



/* -[YYYSignFooterView button] | 0x10038c1d0 | ABI @16@0:8 */

/* Address: 0x10038c1d0 | YYYSignFooterView::YYYSignFooterView__instance__button | bytes: 12 */

/* Recovered runtime selector: -[YYYSignFooterView button]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFooterView::YYYSignFooterView__instance__button(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010038c1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd2808)();
  return IVar1;
}



/* -[YYYSignFooterView setButton:] | 0x10038c204 | ABI v24@0:8@16 */

/* Address: 0x10038c204 | YYYSignFooterView::YYYSignFooterView__instance__setButton_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYSignFooterView setButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance__setButton_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_button) = param_3;
  return;
}



/* -[YYYSignFooterView showMoreBtn] | 0x10038c23c | ABI @16@0:8 */

/* Address: 0x10038c23c | YYYSignFooterView::YYYSignFooterView__instance__showMoreBtn | bytes: 12 */

/* Recovered runtime selector: -[YYYSignFooterView showMoreBtn]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFooterView::YYYSignFooterView__instance__showMoreBtn(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010038c244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd2838)();
  return IVar1;
}



/* -[YYYSignFooterView setShowMoreBtn:] | 0x10038c270 | ABI v24@0:8@16 */

/* Address: 0x10038c270 | YYYSignFooterView::YYYSignFooterView__instance__setShowMoreBtn_ | bytes: 52 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSignFooterView setShowMoreBtn:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance__setShowMoreBtn_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010038c2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dd2860)(param_3);
  return;
}



/* -[YYYSignFooterView .cxx_destruct] | 0x10038c2d8 | ABI v16@0:8 */

/* Address: 0x10038c2d8 | YYYSignFooterView::YYYSignFooterView__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYSignFooterView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFooterView::YYYSignFooterView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010038c2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd2880)();
  return;
}


