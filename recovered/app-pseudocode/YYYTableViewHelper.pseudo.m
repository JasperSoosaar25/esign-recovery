/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTableViewHelper | class address: 0x100c814e0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTableViewHelper initWithTableView:] | 0x10037c950 | ABI @24@0:8@16 */

/* Address: 0x10037c950 | YYYTableViewHelper::YYYTableViewHelper__instance__initWithTableView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewHelper initWithTableView:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__initWithTableView_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037c974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100dcc4e0)();
  return IVar1;
}



/* -[YYYTableViewHelper addSectionHandle:] | 0x10037cbbc | ABI @24@0:8@?16 */

/* Address: 0x10037cbbc | YYYTableViewHelper::YYYTableViewHelper__instance__addSectionHandle_ | bytes: 116 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTableViewHelper addSectionHandle:]
   Original ABI encoding: @24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__addSectionHandle_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_alloc(&objc::class_t::YYYTableViewSectionHelper,param_2,param_3,param_4);
  IVar1 = objc_stub::init(IVar1);
  IVar2 = objc_stub::autoDeselectRow(param_1);
  objc_stub::setAutoDeselectRow_(IVar1,IVar2);
  IVar2 = objc_stub::tableView(param_1);
  objc_stub::FUN_10096dfe0(IVar1,IVar2);
                    /* WARNING: Could not recover jumptable at 0x00010037cc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100dcc5e0)();
  return IVar1;
}



/* -[YYYTableViewHelper reloadData] | 0x10037cde8 | ABI v16@0:8 */

/* Address: 0x10037cde8 | YYYTableViewHelper::YYYTableViewHelper__instance__reloadData | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewHelper reloadData]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__reloadData(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010037ce00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcc6d0)();
  return;
}



/* -[YYYTableViewHelper reloadSectionWithIdentifier:] | 0x10037ce78 | ABI v24@0:8@16 */

/* Address: 0x10037ce78 | YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifier_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewHelper reloadSectionWithIdentifier:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010037ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcc718)();
  return;
}



/* -[YYYTableViewHelper reloadSectionWithIdentifier:rowAnimation:] | 0x10037ceec | ABI v32@0:8@16q24 */

/* Address: 0x10037ceec | YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifier_rowAnimation_ | bytes: 84 */

/* Recovered runtime selector: -[YYYTableViewHelper reloadSectionWithIdentifier:rowAnimation:]
   Original ABI encoding: v32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifier_rowAnimation_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010037cf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcc748)();
  return;
}



/* -[YYYTableViewHelper reloadSectionWithIdentifiers:] | 0x10037d420 | ABI v24@0:8@16 */

/* Address: 0x10037d420 | YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifiers_ | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewHelper reloadSectionWithIdentifiers:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifiers_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010037d438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcca58)();
  return;
}



/* -[YYYTableViewHelper reloadSectionWithIdentifiers:rowAnimation:] | 0x10037d49c | ABI v32@0:8@16q24 */

/* Address: 0x10037d49c | YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifiers_rowAnimation_ | bytes: 140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTableViewHelper reloadSectionWithIdentifiers:rowAnimation:]
   Original ABI encoding: v32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__reloadSectionWithIdentifiers_rowAnimation_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  objc_stub::FUN_100947e60((ID)&_OBJC_CLASS___NSMutableIndexSet);
  IVar1 = objc_stub::sections(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010037d524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcca88)(IVar1);
  return;
}



/* -[YYYTableViewHelper sectionWithIdentifier:] | 0x10037d97c | ABI @24@0:8@16 */

/* Address: 0x10037d97c | YYYTableViewHelper::YYYTableViewHelper__instance__sectionWithIdentifier_ | bytes: 68 */

/* Recovered runtime selector: -[YYYTableViewHelper sectionWithIdentifier:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__sectionWithIdentifier_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dccd88)();
  return IVar1;
}



/* -[YYYTableViewHelper clearData] | 0x10037de1c | ABI v16@0:8 */

/* Address: 0x10037de1c | YYYTableViewHelper::YYYTableViewHelper__instance__clearData | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewHelper clearData]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__clearData(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010037de34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dcd080)();
  return;
}



/* -[YYYTableViewHelper sectionHelperWithSection:] | 0x10037dec4 | ABI @24@0:8q16 */

/* Address: 0x10037dec4 | YYYTableViewHelper::YYYTableViewHelper__instance__sectionHelperWithSection_ | bytes: 52 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTableViewHelper sectionHelperWithSection:]
   Original ABI encoding: @24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__sectionHelperWithSection_
             (ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::sections(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010037def4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcd0e8)(IVar1);
  return IVar1;
}



/* -[YYYTableViewHelper cellHelperForIndexPath:] | 0x10037e03c | ABI @24@0:8@16 */

/* Address: 0x10037e03c | YYYTableViewHelper::YYYTableViewHelper__instance__cellHelperForIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewHelper cellHelperForIndexPath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__cellHelperForIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcd1b8)();
  return IVar1;
}



/* -[YYYTableViewHelper numberOfSectionsInTableView:] | 0x10037e19c | ABI q24@0:8@16 */

/* Address: 0x10037e19c | YYYTableViewHelper::YYYTableViewHelper__instance__numberOfSectionsInTableView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewHelper numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYTableViewHelper::YYYTableViewHelper__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037e1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dcd268)();
  return lVar1;
}



/* -[YYYTableViewHelper tableView:numberOfRowsInSection:] | 0x10037e268 | ABI q32@0:8@16q24 */

/* Address: 0x10037e268 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_numberOfRowsInSection_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYTableViewHelper::YYYTableViewHelper__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037e290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dcd2a0)();
  return lVar1;
}



/* -[YYYTableViewHelper tableView:heightForRowAtIndexPath:] | 0x10037e350 | ABI d32@0:8@16@24 */

/* Address: 0x10037e350 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037e37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100dcd2f0)();
  return dVar1;
}



/* -[YYYTableViewHelper tableView:cellForRowAtIndexPath:] | 0x10037e50c | ABI @32@0:8@16@24 */

/* Address: 0x10037e50c | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_cellForRowAtIndexPath_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037e534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcd3c8)();
  return IVar1;
}



/* -[YYYTableViewHelper tableView:didSelectRowAtIndexPath:] | 0x10037eac4 | ABI v32@0:8@16@24 */

/* Address: 0x10037eac4 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_didSelectRowAtIndexPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010037eae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcd628)();
  return;
}



/* -[YYYTableViewHelper tableView:didDeselectRowAtIndexPath:] | 0x10037eca0 | ABI v32@0:8@16@24 */

/* Address: 0x10037eca0 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_didDeselectRowAtIndexPath_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:didDeselectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__tableView_didDeselectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010037ecc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dcd700)();
  return;
}



/* -[YYYTableViewHelper tableView:heightForHeaderInSection:] | 0x10037ee9c | ABI d32@0:8@16q24 */

/* Address: 0x10037ee9c | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForHeaderInSection_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:heightForHeaderInSection:]
   Original ABI encoding: d32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForHeaderInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037eec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100dcd7f8)();
  return dVar1;
}



/* -[YYYTableViewHelper tableView:viewForHeaderInSection:] | 0x10037f2bc | ABI @32@0:8@16q24 */

/* Address: 0x10037f2bc | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_viewForHeaderInSection_ | bytes: 52 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:viewForHeaderInSection:]
   Original ABI encoding: @32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__tableView_viewForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037f2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100dcdad0)();
  return IVar1;
}



/* -[YYYTableViewHelper tableView:heightForFooterInSection:] | 0x10037fd44 | ABI d32@0:8@16q24 */

/* Address: 0x10037fd44 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForFooterInSection_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:heightForFooterInSection:]
   Original ABI encoding: d32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYTableViewHelper::YYYTableViewHelper__instance__tableView_heightForFooterInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037fd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100dce158)();
  return dVar1;
}



/* -[YYYTableViewHelper tableView:viewForFooterInSection:] | 0x1003800b8 | ABI @32@0:8@16q24 */

/* Address: 0x1003800b8 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_viewForFooterInSection_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTableViewHelper tableView:viewForFooterInSection:]
   Original ABI encoding: @32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__tableView_viewForFooterInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003800ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dce388)(param_3);
  return IVar1;
}



/* -[YYYTableViewHelper tableView:canEditRowAtIndexPath:] | 0x100380a4c | ABI B32@0:8@16@24 */

/* Address: 0x100380a4c | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_canEditRowAtIndexPath_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:canEditRowAtIndexPath:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewHelper::YYYTableViewHelper__instance__tableView_canEditRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100380a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dce940)((int)param_1);
  return bVar1;
}



/* -[YYYTableViewHelper tableView:editingStyleForRowAtIndexPath:] | 0x100380e18 | ABI q32@0:8@16@24 */

/* Address: 0x100380e18 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYTableViewHelper::YYYTableViewHelper__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100380e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dceba8)();
  return lVar1;
}



/* -[YYYTableViewHelper tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x100381068 | ABI @32@0:8@16@24 */

/* Address: 0x100381068 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 32 */

/* Recovered runtime selector: -[YYYTableViewHelper
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::
   YYYTableViewHelper__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100381084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcece0)();
  return IVar1;
}



/* -[YYYTableViewHelper tableView:commitEditingStyle:forRowAtIndexPath:] | 0x100381214 | ABI v40@0:8@16q24@32 */

/* Address: 0x100381214 | YYYTableViewHelper::YYYTableViewHelper__instance__tableView_commitEditingStyle_forRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView:commitEditingStyle:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16q24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::
     YYYTableViewHelper__instance__tableView_commitEditingStyle_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100381240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dceda0)();
  return;
}



/* -[YYYTableViewHelper sections] | 0x1003814d0 | ABI @16@0:8 */

/* Address: 0x1003814d0 | YYYTableViewHelper::YYYTableViewHelper__instance__sections | bytes: 32 */

/* Recovered runtime selector: -[YYYTableViewHelper sections]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__sections(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003814ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcef40)();
  return IVar1;
}



/* -[YYYTableViewHelper tableView] | 0x1003815fc | ABI @16@0:8 */

/* Address: 0x1003815fc | YYYTableViewHelper::YYYTableViewHelper__instance__tableView | bytes: 20 */

/* Recovered runtime selector: -[YYYTableViewHelper tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__instance__tableView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010038160c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcf008)();
  return IVar1;
}



/* -[YYYTableViewHelper setTableView:] | 0x100381630 | ABI v24@0:8@16 */

/* Address: 0x100381630 | YYYTableViewHelper::YYYTableViewHelper__instance__setTableView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewHelper setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__setTableView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100381648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcf028)();
  return;
}



/* -[YYYTableViewHelper autoDeselectRow] | 0x10038168c | ABI B16@0:8 */

/* Address: 0x10038168c | YYYTableViewHelper::YYYTableViewHelper__instance__autoDeselectRow | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewHelper autoDeselectRow]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewHelper::YYYTableViewHelper__instance__autoDeselectRow(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100381694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dcf050)((int)param_1);
  return bVar1;
}



/* -[YYYTableViewHelper setAutoDeselectRow:] | 0x1003816c0 | ABI v20@0:8B16 */

/* Address: 0x1003816c0 | YYYTableViewHelper::YYYTableViewHelper__instance__setAutoDeselectRow_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewHelper setAutoDeselectRow:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__setAutoDeselectRow_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003816c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcf080)(param_1,param_2,param_3);
  return;
}



/* -[YYYTableViewHelper setSections:] | 0x100381708 | ABI v24@0:8@16 */

/* Address: 0x100381708 | YYYTableViewHelper::YYYTableViewHelper__instance__setSections_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewHelper setSections:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance__setSections_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100381728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcf0c0)();
  return;
}



/* -[YYYTableViewHelper .cxx_destruct] | 0x100381798 | ABI v16@0:8 */

/* Address: 0x100381798 | YYYTableViewHelper::YYYTableViewHelper__instance___cxx_destruct | bytes: 44 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYTableViewHelper .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewHelper::YYYTableViewHelper__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_destroyWeak(param_1 + 0x10);
  return;
}



/* +[YYYTableViewHelper helperWithTableView:] | 0x10037cb20 | ABI @24@0:8@16 */

/* Address: 0x10037cb20 | YYYTableViewHelper::YYYTableViewHelper__class__helperWithTableView_ | bytes: 36 */

/* Recovered runtime selector: +[YYYTableViewHelper helperWithTableView:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewHelper::YYYTableViewHelper__class__helperWithTableView_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010037cb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcc5a8)();
  return IVar1;
}


