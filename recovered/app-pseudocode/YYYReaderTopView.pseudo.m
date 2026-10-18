/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYReaderTopView | class address: 0x100c7eab0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYReaderTopView initWithFrame:] | 0x100223eac | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x100223eac | YYYReaderTopView::YYYReaderTopView__instance__initWithFrame_ | bytes: 80 */

/* Recovered runtime selector: -[YYYReaderTopView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderTopView::YYYReaderTopView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100223ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5ac98)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYReaderTopView styleChange] | 0x100224298 | ABI v16@0:8 */

/* Address: 0x100224298 | YYYReaderTopView::YYYReaderTopView__instance__styleChange | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderTopView styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderTopView::YYYReaderTopView__instance__styleChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002242b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d5ad48)();
  return;
}



/* -[YYYReaderTopView layoutSubviews] | 0x1002244c0 | ABI v16@0:8 */

/* Address: 0x1002244c0 | YYYReaderTopView::YYYReaderTopView__instance__layoutSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYReaderTopView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderTopView::YYYReaderTopView__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002244e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5ada8)();
  return;
}



/* -[YYYReaderTopView backButton] | 0x10022463c | ABI @16@0:8 */

/* Address: 0x10022463c | YYYReaderTopView::YYYReaderTopView__instance__backButton | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderTopView backButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderTopView::YYYReaderTopView__instance__backButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022464c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5ade8)((long)_backButton);
  return IVar1;
}



/* -[YYYReaderTopView setBackButton:] | 0x100224670 | ABI v24@0:8@16 */

/* Address: 0x100224670 | YYYReaderTopView::YYYReaderTopView__instance__setBackButton_ | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderTopView setBackButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderTopView::YYYReaderTopView__instance__setBackButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5ae18)(param_1,param_3);
  return;
}



/* -[YYYReaderTopView separatorView] | 0x10022469c | ABI @16@0:8 */

/* Address: 0x10022469c | YYYReaderTopView::YYYReaderTopView__instance__separatorView | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderTopView separatorView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderTopView::YYYReaderTopView__instance__separatorView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002246a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5ae40)();
  return IVar1;
}



/* -[YYYReaderTopView setSeparatorView:] | 0x1002246d0 | ABI v24@0:8@16 */

/* Address: 0x1002246d0 | YYYReaderTopView::YYYReaderTopView__instance__setSeparatorView_ | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderTopView setSeparatorView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderTopView::YYYReaderTopView__instance__setSeparatorView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002246dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5ae70)(param_1,param_3);
  return;
}



/* -[YYYReaderTopView .cxx_destruct] | 0x1002246fc | ABI v16@0:8 */

/* Address: 0x1002246fc | YYYReaderTopView::YYYReaderTopView__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYReaderTopView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderTopView::YYYReaderTopView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100224714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5ae90)();
  return;
}


