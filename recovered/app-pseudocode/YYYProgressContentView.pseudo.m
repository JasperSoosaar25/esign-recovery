/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYProgressContentView | class address: 0x100c7a400
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYProgressContentView initWithFrame:] | 0x100010e38 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x100010e38 | YYYProgressContentView::YYYProgressContentView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYProgressContentView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgressContentView::YYYProgressContentView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100010e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca5c28)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYProgressContentView loadSubviews] | 0x100010f8c | ABI v16@0:8 */

/* Address: 0x100010f8c | YYYProgressContentView::YYYProgressContentView__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYProgressContentView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100010fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca5cc8)();
  return;
}



/* -[YYYProgressContentView yyy_setupViewsConstraints] | 0x100011734 | ABI v16@0:8 */

/* Address: 0x100011734 | YYYProgressContentView::YYYProgressContentView__instance__yyy_setupViewsConstraints | bytes: 96 */

/* Recovered runtime selector: -[YYYProgressContentView yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100011790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca5dc8)();
  return;
}



/* -[YYYProgressContentView hideHandle] | 0x100013e04 | ABI v16@0:8 */

/* Address: 0x100013e04 | YYYProgressContentView::YYYProgressContentView__instance__hideHandle | bytes: 28 */

/* Recovered runtime selector: -[YYYProgressContentView hideHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__hideHandle(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100013e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6850)();
  return;
}



/* -[YYYProgressContentView sizeThatFits:] | 0x100013e88 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x100013e88 | YYYProgressContentView::YYYProgressContentView__instance__sizeThatFits_ | bytes: 36 */

/* Recovered runtime selector: -[YYYProgressContentView sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYProgressContentView::YYYProgressContentView__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x000100013ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100ca68b8)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYProgressContentView hideButton] | 0x100013f80 | ABI @16@0:8 */

/* Address: 0x100013f80 | YYYProgressContentView::YYYProgressContentView__instance__hideButton | bytes: 12 */

/* Recovered runtime selector: -[YYYProgressContentView hideButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgressContentView::YYYProgressContentView__instance__hideButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100013f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca68f8)();
  return IVar1;
}



/* -[YYYProgressContentView setHideButton:] | 0x100013fb8 | ABI v24@0:8@16 */

/* Address: 0x100013fb8 | YYYProgressContentView::YYYProgressContentView__instance__setHideButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYProgressContentView setHideButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__setHideButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100013fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6920)();
  return;
}



/* -[YYYProgressContentView textLabel] | 0x100014030 | ABI @16@0:8 */

/* Address: 0x100014030 | YYYProgressContentView::YYYProgressContentView__instance__textLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYProgressContentView textLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgressContentView::YYYProgressContentView__instance__textLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100014038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6968)();
  return IVar1;
}



/* -[YYYProgressContentView setTextLabel:] | 0x100014064 | ABI v24@0:8@16 */

/* Address: 0x100014064 | YYYProgressContentView::YYYProgressContentView__instance__setTextLabel_ | bytes: 48 */

/* Recovered runtime selector: -[YYYProgressContentView setTextLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__setTextLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100014090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6998)();
  return;
}



/* -[YYYProgressContentView progressView] | 0x1000140fc | ABI @16@0:8 */

/* Address: 0x1000140fc | YYYProgressContentView::YYYProgressContentView__instance__progressView | bytes: 12 */

/* Recovered runtime selector: -[YYYProgressContentView progressView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgressContentView::YYYProgressContentView__instance__progressView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100014104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca69d0)();
  return IVar1;
}



/* -[YYYProgressContentView setProgressView:] | 0x100014124 | ABI v24@0:8@16 */

/* Address: 0x100014124 | YYYProgressContentView::YYYProgressContentView__instance__setProgressView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYProgressContentView setProgressView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance__setProgressView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100014148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca69f0)();
  return;
}



/* -[YYYProgressContentView .cxx_destruct] | 0x100014188 | ABI v16@0:8 */

/* Address: 0x100014188 | YYYProgressContentView::YYYProgressContentView__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYProgressContentView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressContentView::YYYProgressContentView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000141a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6a10)();
  return;
}



/* +[YYYProgressContentView requiresConstraintBasedLayout] | 0x100013e5c | ABI B16@0:8 */

/* Address: 0x100013e5c | YYYProgressContentView::YYYProgressContentView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYProgressContentView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYProgressContentView::YYYProgressContentView__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100013e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100ca6888)((int)param_1);
  return bVar1;
}


