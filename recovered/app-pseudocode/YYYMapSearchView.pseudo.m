/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMapSearchView | class address: 0x100c7d458
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMapSearchView initWithFrame:] | 0x100107ad4 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x100107ad4 | YYYMapSearchView::YYYMapSearchView__instance__initWithFrame_ | bytes: 40 */

/* Recovered runtime selector: -[YYYMapSearchView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100107af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfbab8)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYMapSearchView numberOfSectionsInTableView:] | 0x100107e94 | ABI q24@0:8@16 */

/* Address: 0x100107e94 | YYYMapSearchView::YYYMapSearchView__instance__numberOfSectionsInTableView_ | bytes: 12 */

/* Recovered runtime selector: -[YYYMapSearchView numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMapSearchView::YYYMapSearchView__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100107e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100cfbc00)();
  return lVar1;
}



/* -[YYYMapSearchView tableView:numberOfRowsInSection:] | 0x100107ea8 | ABI q32@0:8@16q24 */

/* Address: 0x100107ea8 | YYYMapSearchView::YYYMapSearchView__instance__tableView_numberOfRowsInSection_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapSearchView tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMapSearchView::YYYMapSearchView__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100107ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100cfbc18)(param_3);
  return lVar1;
}



/* -[YYYMapSearchView tableView:accessoryButtonTappedForRowWithIndexPath:] | 0x100108084 | ABI v32@0:8@16@24 */

/* Address: 0x100108084 | YYYMapSearchView::YYYMapSearchView__instance__tableView_accessoryButtonTappedForRowWithIndexPath_ | bytes: 64 */

/* Recovered runtime selector: -[YYYMapSearchView
   tableView:accessoryButtonTappedForRowWithIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::
     YYYMapSearchView__instance__tableView_accessoryButtonTappedForRowWithIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001080c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cfbd40)(0x100e91428);
  return;
}



/* -[YYYMapSearchView tableView:cellForRowAtIndexPath:] | 0x1001087e4 | ABI @32@0:8@16@24 */

/* Address: 0x1001087e4 | YYYMapSearchView::YYYMapSearchView__instance__tableView_cellForRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYMapSearchView tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100108818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfbfe0)();
  return IVar1;
}



/* -[YYYMapSearchView tableView:didSelectRowAtIndexPath:] | 0x100108e38 | ABI v32@0:8@16@24 */

/* Address: 0x100108e38 | YYYMapSearchView::YYYMapSearchView__instance__tableView_didSelectRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYMapSearchView tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100108e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfc210)();
  return;
}



/* -[YYYMapSearchView tableView:canEditRowAtIndexPath:] | 0x10010918c | ABI B32@0:8@16@24 */

/* Address: 0x10010918c | YYYMapSearchView::YYYMapSearchView__instance__tableView_canEditRowAtIndexPath_ | bytes: 44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapSearchView tableView:canEditRowAtIndexPath:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapSearchView::YYYMapSearchView__instance__tableView_canEditRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001091b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfc3e8)(param_3);
  return bVar1;
}



/* -[YYYMapSearchView tableView:editingStyleForRowAtIndexPath:] | 0x100109208 | ABI q32@0:8@16@24 */

/* Address: 0x100109208 | YYYMapSearchView::YYYMapSearchView__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 12 */

/* Recovered runtime selector: -[YYYMapSearchView tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMapSearchView::YYYMapSearchView__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100109210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100cfc418)();
  return lVar1;
}



/* -[YYYMapSearchView tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x10010921c | ABI @32@0:8@16@24 */

/* Address: 0x10010921c | YYYMapSearchView::YYYMapSearchView__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYMapSearchView
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::
   YYYMapSearchView__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100109240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfc428)();
  return IVar1;
}



/* -[YYYMapSearchView tableView:commitEditingStyle:forRowAtIndexPath:] | 0x1001093e8 | ABI v40@0:8@16q24@32 */

/* Address: 0x1001093e8 | YYYMapSearchView::YYYMapSearchView__instance__tableView_commitEditingStyle_forRowAtIndexPath_ | bytes: 160 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapSearchView tableView:commitEditingStyle:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16q24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__tableView_commitEditingStyle_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  switch(param_4 == 1) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010010950c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100cfc500)();
    return;
  case true:
    objc_stub::history(param_1);
    objc_stub::row(param_5);
                    /* WARNING: Could not recover jumptable at 0x000100109478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100cfc4e0)();
    return;
  }
}



/* -[YYYMapSearchView addHistoryLocation:] | 0x100109588 | ABI v24@0:8@16 */

/* Address: 0x100109588 | YYYMapSearchView::YYYMapSearchView__instance__addHistoryLocation_ | bytes: 72 */

/* Recovered runtime selector: -[YYYMapSearchView addHistoryLocation:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__addHistoryLocation_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001095cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cfc540)();
  return;
}



/* -[YYYMapSearchView layoutSubviews] | 0x100109b18 | ABI v16@0:8 */

/* Address: 0x100109b18 | YYYMapSearchView::YYYMapSearchView__instance__layoutSubviews | bytes: 64 */

/* Recovered runtime selector: -[YYYMapSearchView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100109b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfc728)();
  return;
}



/* -[YYYMapSearchView loadSubviews] | 0x10010a11c | ABI v16@0:8 */

/* Address: 0x10010a11c | YYYMapSearchView::YYYMapSearchView__instance__loadSubviews | bytes: 56 */

/* Recovered runtime selector: -[YYYMapSearchView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010010a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfc7b0)(DAT_100e91438);
  return;
}



/* -[YYYMapSearchView setIsShowAll:] | 0x10010aa50 | ABI v20@0:8B16 */

/* Address: 0x10010aa50 | YYYMapSearchView::YYYMapSearchView__instance__setIsShowAll_ | bytes: 44 */

/* Recovered runtime selector: -[YYYMapSearchView setIsShowAll:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setIsShowAll_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010aa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfc9b0)(param_1,param_2,param_3);
  return;
}



/* -[YYYMapSearchView isShowHistory] | 0x10010ae40 | ABI B16@0:8 */

/* Address: 0x10010ae40 | YYYMapSearchView::YYYMapSearchView__instance__isShowHistory | bytes: 32 */

/* Recovered runtime selector: -[YYYMapSearchView isShowHistory]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapSearchView::YYYMapSearchView__instance__isShowHistory(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010ae5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfcaf0)((int)param_1);
  return bVar1;
}



/* -[YYYMapSearchView effectView] | 0x10010aed0 | ABI @16@0:8 */

/* Address: 0x10010aed0 | YYYMapSearchView::YYYMapSearchView__instance__effectView | bytes: 12 */

/* Recovered runtime selector: -[YYYMapSearchView effectView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__effectView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010aed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfcb10)();
  return IVar1;
}



/* -[YYYMapSearchView setEffectView:] | 0x10010aef8 | ABI v24@0:8@16 */

/* Address: 0x10010aef8 | YYYMapSearchView::YYYMapSearchView__instance__setEffectView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMapSearchView setEffectView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setEffectView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010af18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcb30)();
  return;
}



/* -[YYYMapSearchView isShowAll] | 0x10010af74 | ABI B16@0:8 */

/* Address: 0x10010af74 | YYYMapSearchView::YYYMapSearchView__instance__isShowAll | bytes: 12 */

/* Recovered runtime selector: -[YYYMapSearchView isShowAll]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMapSearchView::YYYMapSearchView__instance__isShowAll(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010af7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfcb78)((int)param_1);
  return bVar1;
}



/* -[YYYMapSearchView searchBar] | 0x10010af9c | ABI @16@0:8 */

/* Address: 0x10010af9c | YYYMapSearchView::YYYMapSearchView__instance__searchBar | bytes: 16 */

/* Recovered runtime selector: -[YYYMapSearchView searchBar]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__searchBar(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_searchBar);
}



/* -[YYYMapSearchView setSearchBar:] | 0x10010afac | ABI v24@0:8@16 */

/* Address: 0x10010afac | YYYMapSearchView::YYYMapSearchView__instance__setSearchBar_ | bytes: 16 */

/* Recovered runtime selector: -[YYYMapSearchView setSearchBar:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setSearchBar_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010afb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcb90)(param_1,param_3);
  return;
}



/* -[YYYMapSearchView tableView] | 0x10010afcc | ABI @16@0:8 */

/* Address: 0x10010afcc | YYYMapSearchView::YYYMapSearchView__instance__tableView | bytes: 12 */

/* Recovered runtime selector: -[YYYMapSearchView tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__tableView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010afd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfcba0)();
  return IVar1;
}



/* -[YYYMapSearchView setTableView:] | 0x10010aff4 | ABI v24@0:8@16 */

/* Address: 0x10010aff4 | YYYMapSearchView::YYYMapSearchView__instance__setTableView_ | bytes: 24 */

/* Recovered runtime selector: -[YYYMapSearchView setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setTableView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcbc8)((long)_tableView,param_1,param_3);
  return;
}



/* -[YYYMapSearchView datasource] | 0x10010b014 | ABI @16@0:8 */

/* Address: 0x10010b014 | YYYMapSearchView::YYYMapSearchView__instance__datasource | bytes: 20 */

/* Recovered runtime selector: -[YYYMapSearchView datasource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__datasource(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010b024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfcbd8)((long)_datasource);
  return IVar1;
}



/* -[YYYMapSearchView setDatasource:] | 0x10010b030 | ABI v24@0:8@16 */

/* Address: 0x10010b030 | YYYMapSearchView::YYYMapSearchView__instance__setDatasource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMapSearchView setDatasource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setDatasource_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcbe8)();
  return;
}



/* -[YYYMapSearchView cancelButton] | 0x10010b0ac | ABI @16@0:8 */

/* Address: 0x10010b0ac | YYYMapSearchView::YYYMapSearchView__instance__cancelButton | bytes: 20 */

/* Recovered runtime selector: -[YYYMapSearchView cancelButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__cancelButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010b0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfcc20)((long)_cancelButton);
  return IVar1;
}



/* -[YYYMapSearchView setCancelButton:] | 0x10010b0d4 | ABI v24@0:8@16 */

/* Address: 0x10010b0d4 | YYYMapSearchView::YYYMapSearchView__instance__setCancelButton_ | bytes: 32 */

/* Recovered runtime selector: -[YYYMapSearchView setCancelButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setCancelButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcc40)();
  return;
}



/* -[YYYMapSearchView history] | 0x10010b148 | ABI @16@0:8 */

/* Address: 0x10010b148 | YYYMapSearchView::YYYMapSearchView__instance__history | bytes: 24 */

/* Recovered runtime selector: -[YYYMapSearchView history]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

int YYYMapSearchView::YYYMapSearchView__instance__history
              (History *param_1,HistEvent *param_2,int param_3,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010b15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR_LAB_100cfcc78)(*(undefined8 *)(param_1 + _history),param_2,param_3);
  return iVar1;
}



/* -[YYYMapSearchView setHistory:] | 0x10010b164 | ABI v24@0:8@16 */

/* Address: 0x10010b164 | YYYMapSearchView::YYYMapSearchView__instance__setHistory_ | bytes: 32 */

/* Recovered runtime selector: -[YYYMapSearchView setHistory:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setHistory_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfcc80)();
  return;
}



/* -[YYYMapSearchView selectedMapItemHandle] | 0x10010b1cc | ABI @?16@0:8 */

/* Address: 0x10010b1cc | YYYMapSearchView::YYYMapSearchView__instance__selectedMapItemHandle | bytes: 20 */

/* Recovered runtime selector: -[YYYMapSearchView selectedMapItemHandle]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapSearchView::YYYMapSearchView__instance__selectedMapItemHandle(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010010b1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfccb0)((long)_selectedMapItemHandle);
  return IVar1;
}



/* -[YYYMapSearchView setSelectedMapItemHandle:] | 0x10010b1e8 | ABI v24@0:8@?16 */

/* Address: 0x10010b1e8 | YYYMapSearchView::YYYMapSearchView__instance__setSelectedMapItemHandle_ | bytes: 40 */

/* Recovered runtime selector: -[YYYMapSearchView setSelectedMapItemHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance__setSelectedMapItemHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b20c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfccc8)();
  return;
}



/* -[YYYMapSearchView .cxx_destruct] | 0x10010b268 | ABI v16@0:8 */

/* Address: 0x10010b268 | YYYMapSearchView::YYYMapSearchView__instance___cxx_destruct | bytes: 44 */

/* Recovered runtime selector: -[YYYMapSearchView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapSearchView::YYYMapSearchView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfccf8)();
  return;
}


