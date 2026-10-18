/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYCatalogView | class address: 0x100c7eb50
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYCatalogView initWithFrame:] | 0x1002264e0 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1002264e0 | YYYCatalogView::YYYCatalogView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYCatalogView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100226520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b7b0)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYCatalogView touchesBegan:withEvent:] | 0x1002266f4 | ABI v32@0:8@16@24 */

/* Address: 0x1002266f4 | YYYCatalogView::YYYCatalogView__instance__touchesBegan_withEvent_ | bytes: 68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYCatalogView touchesBegan:withEvent:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__touchesBegan_withEvent_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100226734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d5b850)(param_4);
  return;
}



/* -[YYYCatalogView setDataSource:] | 0x100226910 | ABI v24@0:8@16 */

/* Address: 0x100226910 | YYYCatalogView::YYYCatalogView__instance__setDataSource_ | bytes: 152 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYCatalogView setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setDataSource_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  *(ID *)(param_1 + (long)_dataSource) = param_3;
  IVar1 = objc_stub::tableView(param_1);
  objc_stub::reloadData(IVar1);
  IVar1 = objc_stub::tableView(param_1);
  objc_stub::contentSize(IVar1);
  IVar1 = objc_stub::tableView(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002269a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b948)(IVar1);
  return;
}



/* -[YYYCatalogView setChapter:] | 0x100226b1c | ABI v24@0:8@16 */

/* Address: 0x100226b1c | YYYCatalogView::YYYCatalogView__instance__setChapter_ | bytes: 76 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYCatalogView setChapter:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setChapter_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_chapter) = param_3;
                    /* WARNING: Could not recover jumptable at 0x000100226b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d5ba20)();
  return;
}



/* -[YYYCatalogView numberOfSectionsInTableView:] | 0x100226d50 | ABI q24@0:8@16 */

/* Address: 0x100226d50 | YYYCatalogView::YYYCatalogView__instance__numberOfSectionsInTableView_ | bytes: 12 */

/* Recovered runtime selector: -[YYYCatalogView numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCatalogView::YYYCatalogView__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100226d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d5baa8)();
  return lVar1;
}



/* -[YYYCatalogView tableView:numberOfRowsInSection:] | 0x100226d64 | ABI q32@0:8@16q24 */

/* Address: 0x100226d64 | YYYCatalogView::YYYCatalogView__instance__tableView_numberOfRowsInSection_ | bytes: 60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYCatalogView tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCatalogView::YYYCatalogView__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::dataSource(param_1);
  IVar1 = objc_stub::count(IVar1);
  return IVar1;
}



/* -[YYYCatalogView tableView:cellForRowAtIndexPath:] | 0x100226da0 | ABI @32@0:8@16@24 */

/* Address: 0x100226da0 | YYYCatalogView::YYYCatalogView__instance__tableView_cellForRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYCatalogView tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100226dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d5bab0)(0x100e91af0,param_3);
  return IVar1;
}



/* -[YYYCatalogView tableView:willDisplayCell:forRowAtIndexPath:] | 0x100227138 | ABI v40@0:8@16@24@32 */

/* Address: 0x100227138 | YYYCatalogView::YYYCatalogView__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 52 */

/* Recovered runtime selector: -[YYYCatalogView tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100227168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5bb48)();
  return;
}



/* -[YYYCatalogView tableView:didSelectRowAtIndexPath:] | 0x1002274e4 | ABI v32@0:8@16@24 */

/* Address: 0x1002274e4 | YYYCatalogView::YYYCatalogView__instance__tableView_didSelectRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYCatalogView tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100227510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5bc58)();
  return;
}



/* -[YYYCatalogView scrollViewDidScroll:] | 0x10022774c | ABI v24@0:8@16 */

/* Address: 0x10022774c | YYYCatalogView::YYYCatalogView__instance__scrollViewDidScroll_ | bytes: 52 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYCatalogView scrollViewDidScroll:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__scrollViewDidScroll_
               (ID param_1,SEL param_2,ID param_3)

{
  objc_stub::contentOffset(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010022777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5bd20)();
  return;
}



/* -[YYYCatalogView show] | 0x100227948 | ABI v16@0:8 */

/* Address: 0x100227948 | YYYCatalogView::YYYCatalogView__instance__show | bytes: 28 */

/* Recovered runtime selector: -[YYYCatalogView show]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__show(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100227960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5be98)();
  return;
}



/* -[YYYCatalogView dismiss] | 0x100227b6c | ABI v16@0:8 */

/* Address: 0x100227b6c | YYYCatalogView::YYYCatalogView__instance__dismiss | bytes: 44 */

/* Recovered runtime selector: -[YYYCatalogView dismiss]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__dismiss(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100227b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5bf60)();
  return;
}



/* -[YYYCatalogView buttonHandle] | 0x100227f1c | ABI v16@0:8 */

/* Address: 0x100227f1c | YYYCatalogView::YYYCatalogView__instance__buttonHandle | bytes: 40 */

/* Recovered runtime selector: -[YYYCatalogView buttonHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__buttonHandle(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100227f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5c0d8)();
  return;
}



/* -[YYYCatalogView setStyle:] | 0x1002284fc | ABI v24@0:8Q16 */

/* Address: 0x1002284fc | YYYCatalogView::YYYCatalogView__instance__setStyle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCatalogView setStyle:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setStyle_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022851c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5c330)();
  return;
}



/* -[YYYCatalogView styleChange] | 0x1002289b4 | ABI v16@0:8 */

/* Address: 0x1002289b4 | YYYCatalogView::YYYCatalogView__instance__styleChange | bytes: 36 */

/* Recovered runtime selector: -[YYYCatalogView styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__styleChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002289d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5c580)();
  return;
}



/* -[YYYCatalogView loadSubviews] | 0x100228d78 | ABI v16@0:8 */

/* Address: 0x100228d78 | YYYCatalogView::YYYCatalogView__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYCatalogView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100228da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5c5d0)();
  return;
}



/* -[YYYCatalogView yyy_setupViewsConstraints] | 0x100229560 | ABI v16@0:8 */

/* Address: 0x100229560 | YYYCatalogView::YYYCatalogView__instance__yyy_setupViewsConstraints | bytes: 272 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYCatalogView yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  code *pcStack_90;
  undefined *puStack_88;
  ID IStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ID IStack_58;
  objc_super oStack_50;
  
  oStack_50.super_class = &objc::class_t::YYYCatalogView;
  oStack_50.receiver = param_1;
  _objc_msgSendSuper2(&oStack_50,"yyy_setupViewsConstraints");
  IVar2 = objc_stub::titleLabel(param_1);
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_78 = PTR___NSConcreteStackBlock_100afc560;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1002296dc;
  puStack_60 = &DAT_100afeb38;
  IStack_58 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_78);
  IVar2 = objc_stub::tableView(param_1);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  uStack_94 = 0;
  pcStack_90 = FUN_10022b104;
  puStack_88 = &DAT_100afeb38;
  IStack_80 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_a0);
  IVar2 = objc_stub::button(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010022966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5c6a8)(IVar2);
  return;
}



/* -[YYYCatalogView contentView] | 0x10022bc44 | ABI @16@0:8 */

/* Address: 0x10022bc44 | YYYCatalogView::YYYCatalogView__instance__contentView | bytes: 16 */

/* Recovered runtime selector: -[YYYCatalogView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__contentView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_contentView);
}



/* -[YYYCatalogView setContentView:] | 0x10022bc54 | ABI v24@0:8@16 */

/* Address: 0x10022bc54 | YYYCatalogView::YYYCatalogView__instance__setContentView_ | bytes: 44 */

/* Recovered runtime selector: -[YYYCatalogView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setContentView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d0d8)();
  return;
}



/* -[YYYCatalogView tableView] | 0x10022bcec | ABI @16@0:8 */

/* Address: 0x10022bcec | YYYCatalogView::YYYCatalogView__instance__tableView | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__tableView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d110)((long)_tableView);
  return IVar1;
}



/* -[YYYCatalogView setTableView:] | 0x10022bd20 | ABI v24@0:8@16 */

/* Address: 0x10022bd20 | YYYCatalogView::YYYCatalogView__instance__setTableView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCatalogView setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setTableView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d140)();
  return;
}



/* -[YYYCatalogView titleLabel] | 0x10022bdb8 | ABI @16@0:8 */

/* Address: 0x10022bdb8 | YYYCatalogView::YYYCatalogView__instance__titleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d190)((long)_titleLabel);
  return IVar1;
}



/* -[YYYCatalogView setTitleLabel:] | 0x10022bde0 | ABI v24@0:8@16 */

/* Address: 0x10022bde0 | YYYCatalogView::YYYCatalogView__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCatalogView setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setTitleLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022be00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d1b0)();
  return;
}



/* -[YYYCatalogView button] | 0x10022be5c | ABI @16@0:8 */

/* Address: 0x10022be5c | YYYCatalogView::YYYCatalogView__instance__button | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView button]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__button(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022be6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d1f8)((long)_button);
  return IVar1;
}



/* -[YYYCatalogView setButton:] | 0x10022be84 | ABI v24@0:8@16 */

/* Address: 0x10022be84 | YYYCatalogView::YYYCatalogView__instance__setButton_ | bytes: 16 */

/* Recovered runtime selector: -[YYYCatalogView setButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022be90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d218)(param_1,param_3);
  return;
}



/* -[YYYCatalogView dataSource] | 0x10022beb0 | ABI @16@0:8 */

/* Address: 0x10022beb0 | YYYCatalogView::YYYCatalogView__instance__dataSource | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__dataSource(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d230)((long)_dataSource);
  return IVar1;
}



/* -[YYYCatalogView chapter] | 0x10022bed8 | ABI @16@0:8 */

/* Address: 0x10022bed8 | YYYCatalogView::YYYCatalogView__instance__chapter | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView chapter]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__chapter(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d250)((long)_chapter);
  return IVar1;
}



/* -[YYYCatalogView didDismiss] | 0x10022bef4 | ABI @?16@0:8 */

/* Address: 0x10022bef4 | YYYCatalogView::YYYCatalogView__instance__didDismiss | bytes: 24 */

/* Recovered runtime selector: -[YYYCatalogView didDismiss]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__didDismiss(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d260)(*(undefined8 *)(param_1 + (long)_didDismiss));
  return IVar1;
}



/* -[YYYCatalogView setDidDismiss:] | 0x10022bf1c | ABI v24@0:8@?16 */

/* Address: 0x10022bf1c | YYYCatalogView::YYYCatalogView__instance__setDidDismiss_ | bytes: 40 */

/* Recovered runtime selector: -[YYYCatalogView setDidDismiss:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setDidDismiss_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010022bf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d280)();
  return;
}



/* -[YYYCatalogView selectChapter] | 0x10022bf9c | ABI @?16@0:8 */

/* Address: 0x10022bf9c | YYYCatalogView::YYYCatalogView__instance__selectChapter | bytes: 20 */

/* Recovered runtime selector: -[YYYCatalogView selectChapter]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCatalogView::YYYCatalogView__instance__selectChapter(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bfac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5d2b8)((long)_selectChapter);
  return IVar1;
}



/* -[YYYCatalogView setSelectChapter:] | 0x10022bfb8 | ABI v24@0:8@?16 */

/* Address: 0x10022bfb8 | YYYCatalogView::YYYCatalogView__instance__setSelectChapter_ | bytes: 12 */

/* Recovered runtime selector: -[YYYCatalogView setSelectChapter:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setSelectChapter_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010022bfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d2c8)();
  return;
}



/* -[YYYCatalogView index] | 0x10022bfdc | ABI q16@0:8 */

/* Address: 0x10022bfdc | YYYCatalogView::YYYCatalogView__instance__index | bytes: 12 */

/* Recovered runtime selector: -[YYYCatalogView index]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

char * YYYCatalogView::YYYCatalogView__instance__index(char *param_1,int param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR_LAB_100d5d2e8)(param_1,param_2);
  return pcVar1;
}



/* -[YYYCatalogView setIndex:] | 0x10022bff8 | ABI v24@0:8q16 */

/* Address: 0x10022bff8 | YYYCatalogView::YYYCatalogView__instance__setIndex_ | bytes: 16 */

/* Recovered runtime selector: -[YYYCatalogView setIndex:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setIndex_(ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022c004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d2f0)(&PTR_XADFileHandle_100c75000);
  return;
}



/* -[YYYCatalogView offset] | 0x10022c028 | ABI d16@0:8 */

/* Address: 0x10022c028 | YYYCatalogView::YYYCatalogView__instance__offset | bytes: 12 */

/* Recovered runtime selector: -[YYYCatalogView offset]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYCatalogView::YYYCatalogView__instance__offset(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d5d318)();
  return dVar1;
}



/* -[YYYCatalogView setOffset:] | 0x10022c050 | ABI v24@0:8d16 */

/* Address: 0x10022c050 | YYYCatalogView::YYYCatalogView__instance__setOffset_ | bytes: 24 */

/* Recovered runtime selector: -[YYYCatalogView setOffset:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance__setOffset_(ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010022c064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d5d338)((long)_offset);
  return;
}



/* -[YYYCatalogView style] | 0x10022c088 | ABI Q16@0:8 */

/* Address: 0x10022c088 | YYYCatalogView::YYYCatalogView__instance__style | bytes: 16 */

/* Recovered runtime selector: -[YYYCatalogView style]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYCatalogView::YYYCatalogView__instance__style(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_style);
}



/* -[YYYCatalogView .cxx_destruct] | 0x10022c098 | ABI v16@0:8 */

/* Address: 0x10022c098 | YYYCatalogView::YYYCatalogView__instance___cxx_destruct | bytes: 44 */

/* Recovered runtime selector: -[YYYCatalogView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCatalogView::YYYCatalogView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010022c0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5d358)();
  return;
}



/* +[YYYCatalogView requiresConstraintBasedLayout] | 0x10022bc30 | ABI B16@0:8 */

/* Address: 0x10022bc30 | YYYCatalogView::YYYCatalogView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYCatalogView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYCatalogView::YYYCatalogView__class__requiresConstraintBasedLayout(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010022bc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d5d0c8)((int)param_1);
  return bVar1;
}


