/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFontToolView | class address: 0x100c7a270
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFontToolView initWithFrame:] | 0x10000825c | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10000825c | YYYFontToolView::YYYFontToolView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYFontToolView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca2b88)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYFontToolView styleChange] | 0x100008424 | ABI v16@0:8 */

/* Address: 0x100008424 | YYYFontToolView::YYYFontToolView__instance__styleChange | bytes: 420 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFontToolView styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__styleChange(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYReaderStyleHelper);
  IVar1 = objc_stub::toolViewBackgroundColor(IVar1);
  objc_stub::setBackgroundColor_(param_1,IVar1);
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYReaderStyleHelper);
  IVar1 = objc_stub::thunk_FUN_100976e00(IVar1);
  IVar2 = objc_stub::titleLabel(param_1);
  objc_stub::setTextColor_(IVar2,IVar1);
  IVar2 = objc_stub::sizeLabel(param_1);
  objc_stub::setTextColor_(IVar2,IVar1);
  IVar1 = objc_stub::subButton(param_1);
  IVar2 = objc_stub::shared((ID)&objc::class_t::YYYReaderStyleHelper);
  IVar2 = objc_stub::thunk_FUN_100976e00(IVar2);
  objc_stub::setTitleColor_forState_(IVar1,IVar2,0);
  IVar1 = objc_stub::addButton(param_1);
  IVar2 = objc_stub::shared((ID)&objc::class_t::YYYReaderStyleHelper);
  IVar2 = objc_stub::FUN_100976e00(IVar2);
  objc_stub::setTitleColor_forState_(IVar1,IVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001000085c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca2c10)(0);
  return;
}



/* -[YYYFontToolView fontChange] | 0x1000086c8 | ABI v16@0:8 */

/* Address: 0x1000086c8 | YYYFontToolView::YYYFontToolView__instance__fontChange | bytes: 40 */

/* Recovered runtime selector: -[YYYFontToolView fontChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__fontChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000086ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca2c28)();
  return;
}



/* -[YYYFontToolView buttonHandle:] | 0x100008ae8 | ABI v24@0:8@16 */

/* Address: 0x100008ae8 | YYYFontToolView::YYYFontToolView__instance__buttonHandle_ | bytes: 44 */

/* Recovered runtime selector: -[YYYFontToolView buttonHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__buttonHandle_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100008b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca2d98)();
  return;
}



/* -[YYYFontToolView loadSubviews] | 0x100008c50 | ABI v16@0:8 */

/* Address: 0x100008c50 | YYYFontToolView::YYYFontToolView__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYFontToolView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100008c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca2de8)();
  return;
}



/* -[YYYFontToolView yyy_setupViewsConstraints] | 0x100009824 | ABI v16@0:8 */

/* Address: 0x100009824 | YYYFontToolView::YYYFontToolView__instance__yyy_setupViewsConstraints | bytes: 60 */

/* Recovered runtime selector: -[YYYFontToolView yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010000985c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca2ed8)();
  return;
}



/* -[YYYFontToolView titleLabel] | 0x10000c544 | ABI @16@0:8 */

/* Address: 0x10000c544 | YYYFontToolView::YYYFontToolView__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYFontToolView titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3aa0)();
  return IVar1;
}



/* -[YYYFontToolView setTitleLabel:] | 0x10000c56c | ABI v24@0:8@16 */

/* Address: 0x10000c56c | YYYFontToolView::YYYFontToolView__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFontToolView setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setTitleLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3ac0)();
  return;
}



/* -[YYYFontToolView subButton] | 0x10000c608 | ABI @16@0:8 */

/* Address: 0x10000c608 | YYYFontToolView::YYYFontToolView__instance__subButton | bytes: 20 */

/* Recovered runtime selector: -[YYYFontToolView subButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__subButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3b10)((long)_subButton);
  return IVar1;
}



/* -[YYYFontToolView setSubButton:] | 0x10000c63c | ABI v24@0:8@16 */

/* Address: 0x10000c63c | YYYFontToolView::YYYFontToolView__instance__setSubButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFontToolView setSubButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setSubButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3b40)();
  return;
}



/* -[YYYFontToolView addButton] | 0x10000c6b8 | ABI @16@0:8 */

/* Address: 0x10000c6b8 | YYYFontToolView::YYYFontToolView__instance__addButton | bytes: 20 */

/* Recovered runtime selector: -[YYYFontToolView addButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__addButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3b80)((long)_addButton);
  return IVar1;
}



/* -[YYYFontToolView setAddButton:] | 0x10000c6d4 | ABI v24@0:8@16 */

/* Address: 0x10000c6d4 | YYYFontToolView::YYYFontToolView__instance__setAddButton_ | bytes: 40 */

/* Recovered runtime selector: -[YYYFontToolView setAddButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setAddButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3b90)();
  return;
}



/* -[YYYFontToolView sizeLabel] | 0x10000c778 | ABI @16@0:8 */

/* Address: 0x10000c778 | YYYFontToolView::YYYFontToolView__instance__sizeLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYFontToolView sizeLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__sizeLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3bd8)();
  return IVar1;
}



/* -[YYYFontToolView setSizeLabel:] | 0x10000c7b0 | ABI v24@0:8@16 */

/* Address: 0x10000c7b0 | YYYFontToolView::YYYFontToolView__instance__setSizeLabel_ | bytes: 40 */

/* Recovered runtime selector: -[YYYFontToolView setSizeLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setSizeLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3c10)();
  return;
}



/* -[YYYFontToolView stackView] | 0x10000c820 | ABI @16@0:8 */

/* Address: 0x10000c820 | YYYFontToolView::YYYFontToolView__instance__stackView | bytes: 12 */

/* Recovered runtime selector: -[YYYFontToolView stackView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__stackView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3c38)();
  return IVar1;
}



/* -[YYYFontToolView setStackView:] | 0x10000c848 | ABI v24@0:8@16 */

/* Address: 0x10000c848 | YYYFontToolView::YYYFontToolView__instance__setStackView_ | bytes: 24 */

/* Recovered runtime selector: -[YYYFontToolView setStackView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setStackView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3c58)((long)_stackView,param_1,param_3);
  return;
}



/* -[YYYFontToolView contentView] | 0x10000c868 | ABI @16@0:8 */

/* Address: 0x10000c868 | YYYFontToolView::YYYFontToolView__instance__contentView | bytes: 20 */

/* Recovered runtime selector: -[YYYFontToolView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFontToolView::YYYFontToolView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca3c70)((long)_contentView);
  return IVar1;
}



/* -[YYYFontToolView setContentView:] | 0x10000c89c | ABI v24@0:8@16 */

/* Address: 0x10000c89c | YYYFontToolView::YYYFontToolView__instance__setContentView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFontToolView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance__setContentView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c8bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3ca0)();
  return;
}



/* -[YYYFontToolView .cxx_destruct] | 0x10000c938 | ABI v16@0:8 */

/* Address: 0x10000c938 | YYYFontToolView::YYYFontToolView__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYFontToolView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFontToolView::YYYFontToolView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010000c95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca3ce8)();
  return;
}



/* +[YYYFontToolView requiresConstraintBasedLayout] | 0x10000c518 | ABI B16@0:8 */

/* Address: 0x10000c518 | YYYFontToolView::YYYFontToolView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYFontToolView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFontToolView::YYYFontToolView__class__requiresConstraintBasedLayout(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010000c520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100ca3a70)((int)param_1);
  return bVar1;
}


