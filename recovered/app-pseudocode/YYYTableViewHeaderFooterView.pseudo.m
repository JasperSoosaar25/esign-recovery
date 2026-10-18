/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTableViewHeaderFooterView | class address: 0x100c7d9f8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTableViewHeaderFooterView initWithReuseIdentifier:] | 0x10016f034 | ABI @24@0:8@16 */

/* Address: 0x10016f034 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__initWithReuseIdentifier_ | bytes: 52 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView initWithReuseIdentifier:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__initWithReuseIdentifier_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010016f064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d1eed8)();
  return IVar1;
}



/* -[YYYTableViewHeaderFooterView didInitialize] | 0x10016f18c | ABI v16@0:8 */

/* Address: 0x10016f18c | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__didInitialize | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView didInitialize]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__didInitialize
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010016f1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1ef80)();
  return;
}



/* -[YYYTableViewHeaderFooterView y_insets] | 0x10016f388 | ABI {UIEdgeInsets=dddd}16@0:8 */

/* Address: 0x10016f388 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__y_insets | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView y_insets]
   Original ABI encoding: {UIEdgeInsets=dddd}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

UIEdgeInsets
YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__y_insets
          (ID param_1,SEL param_2)

{
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  UIEdgeInsets UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010016f3b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1.field0_0x0 = (*(code *)PTR_LAB_100d1efa0)();
  UVar1.field1_0x8 = (double)in_d1;
  UVar1.field3_0x18 = (double)in_d3;
  UVar1.field2_0x10 = (double)in_d2;
  return UVar1;
}



/* -[YYYTableViewHeaderFooterView layoutSubviews] | 0x10016f980 | ABI v16@0:8 */

/* Address: 0x10016f980 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__layoutSubviews | bytes: 56 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__layoutSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010016f9b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1f388)();
  return;
}



/* -[YYYTableViewHeaderFooterView sizeThatFits:] | 0x10016fbb8 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x10016fbb8 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__sizeThatFits_ | bytes: 76 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x00010016fc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100d1f408)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYTableViewHeaderFooterView setBackgroundColor:] | 0x10016ff40 | ABI v24@0:8@16 */

/* Address: 0x10016ff40 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setBackgroundColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView setBackgroundColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setBackgroundColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010016ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d1f440)();
  return;
}



/* -[YYYTableViewHeaderFooterView backgroundColor] | 0x100170014 | ABI @16@0:8 */

/* Address: 0x100170014 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__backgroundColor | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView backgroundColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__backgroundColor
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010017002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d1f490)();
  return IVar1;
}



/* -[YYYTableViewHeaderFooterView titleLabel] | 0x1001700d8 | ABI @16@0:8 */

/* Address: 0x1001700d8 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__titleLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001700e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d1f4e8)();
  return IVar1;
}



/* -[YYYTableViewHeaderFooterView setTitleLabel:] | 0x100170100 | ABI v24@0:8@16 */

/* Address: 0x100170100 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setTitleLabel_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100170128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1f500)();
  return;
}



/* -[YYYTableViewHeaderFooterView tableView] | 0x10017018c | ABI @16@0:8 */

/* Address: 0x10017018c | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__tableView | bytes: 20 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__tableView
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010017019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d1f548)();
  return IVar1;
}



/* -[YYYTableViewHeaderFooterView setTableView:] | 0x1001701b8 | ABI v24@0:8@16 */

/* Address: 0x1001701b8 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setTableView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setTableView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001701d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1f558)();
  return;
}



/* -[YYYTableViewHeaderFooterView isFooter] | 0x100170230 | ABI B16@0:8 */

/* Address: 0x100170230 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__isFooter | bytes: 20 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView isFooter]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__isFooter
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100170240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d1f598)((long)_isFooter,(int)param_1);
  return bVar1;
}



/* -[YYYTableViewHeaderFooterView setIsFooter:] | 0x100170258 | ABI v20@0:8B16 */

/* Address: 0x100170258 | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setIsFooter_ | bytes: 20 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView setIsFooter:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance__setIsFooter_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100170268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1f5b8)((long)_isFooter,param_1,param_2,param_3);
  return;
}



/* -[YYYTableViewHeaderFooterView .cxx_destruct] | 0x10017029c | ABI v16@0:8 */

/* Address: 0x10017029c | YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewHeaderFooterView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHeaderFooterView::YYYTableViewHeaderFooterView__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001702c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d1f5f8)((long)_tableView);
  return;
}


