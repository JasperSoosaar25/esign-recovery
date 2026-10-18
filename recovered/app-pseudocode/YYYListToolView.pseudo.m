/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYListToolView | class address: 0x100c805a0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYListToolView initWithFrame:] | 0x100325494 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x100325494 | YYYListToolView::YYYListToolView__instance__initWithFrame_ | bytes: 64 */

/* Recovered runtime selector: -[YYYListToolView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003254d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dafe50)
                    (&objc::class_t::YYYListToolView,param_3.field0_0x0.field0_0x0,
                     param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                     param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYListToolView loadSubviews] | 0x10032564c | ABI v16@0:8 */

/* Address: 0x10032564c | YYYListToolView::YYYListToolView__instance__loadSubviews | bytes: 60 */

/* Recovered runtime selector: -[YYYListToolView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100325684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100daff20)(DAT_100e92138);
  return;
}



/* -[YYYListToolView sizeThatFits:] | 0x100326554 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x100326554 | YYYListToolView::YYYListToolView__instance__sizeThatFits_ | bytes: 36 */

/* Recovered runtime selector: -[YYYListToolView sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYListToolView::YYYListToolView__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x000100326574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100daffe8)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYListToolView layoutSubviews] | 0x100326814 | ABI v16@0:8 */

/* Address: 0x100326814 | YYYListToolView::YYYListToolView__instance__layoutSubviews | bytes: 52 */

/* Recovered runtime selector: -[YYYListToolView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100326844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db0048)();
  return;
}



/* -[YYYListToolView setShowMore:] | 0x100327368 | ABI v20@0:8B16 */

/* Address: 0x100327368 | YYYListToolView::YYYListToolView__instance__setShowMore_ | bytes: 92 */

/* Recovered runtime selector: -[YYYListToolView setShowMore:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setShowMore_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003273c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db0350)(param_1,param_2,param_3);
  return;
}



/* -[YYYListToolView pointInside:withEvent:] | 0x10032761c | ABI B40@0:8{CGPoint=dd}16@32 */

/* Address: 0x10032761c | YYYListToolView::YYYListToolView__instance__pointInside_withEvent_ | bytes: 56 */

/* Recovered runtime selector: -[YYYListToolView pointInside:withEvent:]
   Original ABI encoding: B40@0:8{CGPoint=dd}16@32
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYListToolView::YYYListToolView__instance__pointInside_withEvent_
               (ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100327650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100db0460)(param_3.field0_0x0,param_3.field1_0x8,(int)param_1);
  return bVar1;
}



/* -[YYYListToolView contentView] | 0x10032777c | ABI @16@0:8 */

/* Address: 0x10032777c | YYYListToolView::YYYListToolView__instance__contentView | bytes: 20 */

/* Recovered runtime selector: -[YYYListToolView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010032778c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db04e0)((long)_contentView);
  return IVar1;
}



/* -[YYYListToolView setContentView:] | 0x1003277a4 | ABI v24@0:8@16 */

/* Address: 0x1003277a4 | YYYListToolView::YYYListToolView__instance__setContentView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYListToolView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setContentView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003277bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db0500)();
  return;
}



/* -[YYYListToolView editButton] | 0x100327814 | ABI @16@0:8 */

/* Address: 0x100327814 | YYYListToolView::YYYListToolView__instance__editButton | bytes: 12 */

/* Recovered runtime selector: -[YYYListToolView editButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__editButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010032781c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db0548)();
  return IVar1;
}



/* -[YYYListToolView setEditButton:] | 0x10032783c | ABI v24@0:8@16 */

/* Address: 0x10032783c | YYYListToolView::YYYListToolView__instance__setEditButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYListToolView setEditButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setEditButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010032785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db0568)();
  return;
}



/* -[YYYListToolView signButton] | 0x1003278bc | ABI @16@0:8 */

/* Address: 0x1003278bc | YYYListToolView::YYYListToolView__instance__signButton | bytes: 12 */

/* Recovered runtime selector: -[YYYListToolView signButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__signButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003278c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db05a0)();
  return IVar1;
}



/* -[YYYListToolView setSignButton:] | 0x1003278f0 | ABI v24@0:8@16 */

/* Address: 0x1003278f0 | YYYListToolView::YYYListToolView__instance__setSignButton_ | bytes: 24 */

/* Recovered runtime selector: -[YYYListToolView setSignButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setSignButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100327904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db05d0)((long)_signButton,param_1,param_3);
  return;
}



/* -[YYYListToolView deleteButton] | 0x100327910 | ABI @16@0:8 */

/* Address: 0x100327910 | YYYListToolView::YYYListToolView__instance__deleteButton | bytes: 20 */

/* Recovered runtime selector: -[YYYListToolView deleteButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__deleteButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100327920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db05e8)((long)_deleteButton);
  return IVar1;
}



/* -[YYYListToolView setDeleteButton:] | 0x100327938 | ABI v24@0:8@16 */

/* Address: 0x100327938 | YYYListToolView::YYYListToolView__instance__setDeleteButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYListToolView setDeleteButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setDeleteButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100327958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db0608)();
  return;
}



/* -[YYYListToolView selectAllButton] | 0x1003279ac | ABI @16@0:8 */

/* Address: 0x1003279ac | YYYListToolView::YYYListToolView__instance__selectAllButton | bytes: 20 */

/* Recovered runtime selector: -[YYYListToolView selectAllButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYListToolView::YYYListToolView__instance__selectAllButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003279bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db0630)((long)_selectAllButton);
  return IVar1;
}



/* -[YYYListToolView setSelectAllButton:] | 0x1003279d4 | ABI v24@0:8@16 */

/* Address: 0x1003279d4 | YYYListToolView::YYYListToolView__instance__setSelectAllButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYListToolView setSelectAllButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance__setSelectAllButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003279f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db0650)();
  return;
}



/* -[YYYListToolView showMore] | 0x100327a70 | ABI B16@0:8 */

/* Address: 0x100327a70 | YYYListToolView::YYYListToolView__instance__showMore | bytes: 20 */

/* Recovered runtime selector: -[YYYListToolView showMore]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYListToolView::YYYListToolView__instance__showMore(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100327a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100db06a8)((long)_showMore,(int)param_1);
  return bVar1;
}



/* -[YYYListToolView .cxx_destruct] | 0x100327aac | ABI v16@0:8 */

/* Address: 0x100327aac | YYYListToolView::YYYListToolView__instance___cxx_destruct | bytes: 52 */

/* Recovered runtime selector: -[YYYListToolView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYListToolView::YYYListToolView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100327adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db06d0)();
  return;
}


