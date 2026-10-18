/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTableViewSectionHelper | class address: 0x100c802f8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTableViewSectionHelper addCell:handle:] | 0x1002f8020 | ABI @32@0:8#16@?24 */

/* Address: 0x1002f8020 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addCell_handle_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper addCell:handle:]
   Original ABI encoding: @32@0:8#16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addCell_handle_
             (ID param_1,SEL param_2,CLASS param_3,ID param_4,undefined4 param_5)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9f950)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper addCellHandle:] | 0x1002f842c | ABI @24@0:8@?16 */

/* Address: 0x1002f842c | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addCellHandle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper addCellHandle:]
   Original ABI encoding: @24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addCellHandle_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f844c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9fb40)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper addHeaderTitle:] | 0x1002f84f4 | ABI v24@0:8@16 */

/* Address: 0x1002f84f4 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addHeaderTitle_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper addHeaderTitle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addHeaderTitle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f8518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9fb80)();
  return;
}



/* -[YYYTableViewSectionHelper addHeaderHandle:] | 0x1002f8644 | ABI v24@0:8@?16 */

/* Address: 0x1002f8644 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addHeaderHandle_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper addHeaderHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addHeaderHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f866c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9fbe0)();
  return;
}



/* -[YYYTableViewSectionHelper addFooterTitle:] | 0x1002f89ac | ABI v24@0:8@16 */

/* Address: 0x1002f89ac | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addFooterTitle_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper addFooterTitle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addFooterTitle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f89d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9fdc0)();
  return;
}



/* -[YYYTableViewSectionHelper addFooterHandle:] | 0x1002f8b70 | ABI v24@0:8@?16 */

/* Address: 0x1002f8b70 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addFooterHandle_ | bytes: 120 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTableViewSectionHelper addFooterHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__addFooterHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  
  IVar1 = _objc_alloc(&objc::class_t::YYYTableViewHeaderFooterHelper,param_2,param_3,param_4);
  IVar1 = objc_stub::init(IVar1);
  switch(param_3 != 0) {
  case false:
    objc_stub::anyClass(IVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002f8c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d9fea0)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0001002f8bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d9fe68)();
    return;
  }
}



/* -[YYYTableViewSectionHelper cellHelperForIndexPath:] | 0x1002f8e28 | ABI @24@0:8@16 */

/* Address: 0x1002f8e28 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cellHelperForIndexPath_ | bytes: 84 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper cellHelperForIndexPath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cellHelperForIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f8e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9ffb8)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper cells] | 0x1002f91f8 | ABI @16@0:8 */

/* Address: 0x1002f91f8 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cells | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper cells]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cells(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f9210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da01c8)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper cellCount] | 0x1002f92c0 | ABI q16@0:8 */

/* Address: 0x1002f92c0 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cellCount | bytes: 56 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper cellCount]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__cellCount
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f92f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100da0240)();
  return lVar1;
}



/* -[YYYTableViewSectionHelper isHidden] | 0x1002f9584 | ABI B16@0:8 */

/* Address: 0x1002f9584 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__isHidden | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper isHidden]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__isHidden
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f959c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100da03c8)((int)param_1);
  return bVar1;
}



/* -[YYYTableViewSectionHelper tableView] | 0x1002f96a4 | ABI @16@0:8 */

/* Address: 0x1002f96a4 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__tableView | bytes: 36 */

/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* Recovered runtime selector: -[YYYTableViewSectionHelper tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__tableView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f96c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da0470)(*(undefined8 *)(param_1 + 0x10));
  return IVar1;
}



/* -[YYYTableViewSectionHelper setTableView:] | 0x1002f96fc | ABI v24@0:8@16 */

/* Address: 0x1002f96fc | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setTableView_ | bytes: 16 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setTableView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f9708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da04a0)(param_1,param_3);
  return;
}



/* -[YYYTableViewSectionHelper identifier] | 0x1002f9720 | ABI @16@0:8 */

/* Address: 0x1002f9720 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__identifier | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper identifier]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__identifier
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f9728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da04b8)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper setIdentifier:] | 0x1002f9740 | ABI v24@0:8@16 */

/* Address: 0x1002f9740 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setIdentifier_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setIdentifier:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f9764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da04e0)();
  return;
}



/* -[YYYTableViewSectionHelper section] | 0x1002f97b8 | ABI q16@0:8 */

/* Address: 0x1002f97b8 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__section | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper section]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__section
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f97c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100da0508)();
  return lVar1;
}



/* -[YYYTableViewSectionHelper setSection:] | 0x1002f97cc | ABI v24@0:8q16 */

/* Address: 0x1002f97cc | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setSection_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setSection:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setSection_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f97d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da0520)();
  return;
}



/* -[YYYTableViewSectionHelper autoDeselectRow] | 0x1002f97ec | ABI B16@0:8 */

/* Address: 0x1002f97ec | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__autoDeselectRow | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper autoDeselectRow]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__autoDeselectRow
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f97f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100da0540)((int)param_1);
  return bVar1;
}



/* -[YYYTableViewSectionHelper setAutoDeselectRow:] | 0x1002f9814 | ABI v20@0:8B16 */

/* Address: 0x1002f9814 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setAutoDeselectRow_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setAutoDeselectRow:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setAutoDeselectRow_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f981c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da0558)(param_1,param_2,param_3);
  return;
}



/* -[YYYTableViewSectionHelper header] | 0x1002f985c | ABI @16@0:8 */

/* Address: 0x1002f985c | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__header | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper header]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__header(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f9864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da05a0)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper setHeader:] | 0x1002f987c | ABI v24@0:8@16 */

/* Address: 0x1002f987c | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setHeader_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYTableViewSectionHelper setHeader:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setHeader_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x28) = param_3;
  return;
}



/* -[YYYTableViewSectionHelper footer] | 0x1002f98ac | ABI @16@0:8 */

/* Address: 0x1002f98ac | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__footer | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper footer]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__footer(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f98b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da05c0)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper setFooter:] | 0x1002f98d8 | ABI v24@0:8@16 */

/* Address: 0x1002f98d8 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setFooter_ | bytes: 32 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setFooter:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setFooter_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f98f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da05f0)();
  return;
}



/* -[YYYTableViewSectionHelper hiddenHandle] | 0x1002f9950 | ABI @?16@0:8 */

/* Address: 0x1002f9950 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__hiddenHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper hiddenHandle]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__hiddenHandle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f9958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da0628)();
  return IVar1;
}



/* -[YYYTableViewSectionHelper setHiddenHandle:] | 0x1002f997c | ABI v24@0:8@?16 */

/* Address: 0x1002f997c | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setHiddenHandle_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setHiddenHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setHiddenHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f9984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da0660)();
  return;
}



/* -[YYYTableViewSectionHelper setCells:] | 0x1002f9990 | ABI v24@0:8@16 */

/* Address: 0x1002f9990 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setCells_ | bytes: 32 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper setCells:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance__setCells_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f99ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da0668)();
  return;
}



/* -[YYYTableViewSectionHelper .cxx_destruct] | 0x1002f99f4 | ABI v16@0:8 */

/* Address: 0x1002f99f4 | YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYTableViewSectionHelper .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewSectionHelper::YYYTableViewSectionHelper__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f9a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100da0698)();
  return;
}


