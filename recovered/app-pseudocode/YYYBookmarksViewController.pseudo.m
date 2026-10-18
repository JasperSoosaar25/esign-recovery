/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBookmarksViewController | class address: 0x100c7d778
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBookmarksViewController viewDidLoad] | 0x10014a5c8 | ABI v16@0:8 */

/* Address: 0x10014a5c8 | YYYBookmarksViewController::YYYBookmarksViewController__instance__viewDidLoad | bytes: 48 */

/* Recovered runtime selector: -[YYYBookmarksViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::YYYBookmarksViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010014a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d13020)();
  return;
}



/* -[YYYBookmarksViewController addHandle] | 0x10014a7f4 | ABI v16@0:8 */

/* Address: 0x10014a7f4 | YYYBookmarksViewController::YYYBookmarksViewController__instance__addHandle | bytes: 44 */

/* Recovered runtime selector: -[YYYBookmarksViewController addHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::YYYBookmarksViewController__instance__addHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010014a81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d130a8)(0x100e915b8);
  return;
}



/* -[YYYBookmarksViewController numberOfSectionsInTableView:] | 0x10014b444 | ABI q24@0:8@16 */

/* Address: 0x10014b444 | YYYBookmarksViewController::YYYBookmarksViewController__instance__numberOfSectionsInTableView_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBookmarksViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYBookmarksViewController::
          YYYBookmarksViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010014b44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d134b0)();
  return lVar1;
}



/* -[YYYBookmarksViewController tableView:numberOfRowsInSection:] | 0x10014b458 | ABI q32@0:8@16q24 */

/* Address: 0x10014b458 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_numberOfRowsInSection_ | bytes: 64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYBookmarksViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYBookmarksViewController::
          YYYBookmarksViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  long_long lVar2;
  
  IVar1 = objc_stub::dataSource(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010014b494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*(code *)PTR_LAB_100d134c0)(IVar1);
  return lVar2;
}



/* -[YYYBookmarksViewController tableView:cellForRowAtIndexPath:] | 0x10014b4f8 | ABI @32@0:8@16@24 */

/* Address: 0x10014b4f8 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBookmarksViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookmarksViewController::
   YYYBookmarksViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010014b51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d134f0)();
  return IVar1;
}



/* -[YYYBookmarksViewController tableView:accessoryButtonTappedForRowWithIndexPath:] | 0x10014bc68 | ABI v32@0:8@16@24 */

/* Address: 0x10014bc68 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_accessoryButtonTappedForRowWithIndexPath_ | bytes: 68 */

/* Recovered runtime selector: -[YYYBookmarksViewController
   tableView:accessoryButtonTappedForRowWithIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::
     YYYBookmarksViewController__instance__tableView_accessoryButtonTappedForRowWithIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010014bca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d136d8)();
  return;
}



/* -[YYYBookmarksViewController tableView:didSelectRowAtIndexPath:] | 0x10014cc14 | ABI v32@0:8@16@24 */

/* Address: 0x10014cc14 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_didSelectRowAtIndexPath_ | bytes: 84 */

/* Recovered runtime selector: -[YYYBookmarksViewController tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::
     YYYBookmarksViewController__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010014cc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d13a30)(DAT_100e915dc);
  return;
}



/* -[YYYBookmarksViewController tableView:editingStyleForRowAtIndexPath:] | 0x10014d370 | ABI q32@0:8@16@24 */

/* Address: 0x10014d370 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 36 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYBookmarksViewController
   tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYBookmarksViewController::
          YYYBookmarksViewController__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010014d390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d13c08)(param_3);
  return lVar1;
}



/* -[YYYBookmarksViewController tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x10014d3c0 | ABI @32@0:8@16@24 */

/* Address: 0x10014d3c0 | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 24 */

/* Recovered runtime selector: -[YYYBookmarksViewController
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookmarksViewController::
   YYYBookmarksViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010014d3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d13c30)();
  return IVar1;
}



/* -[YYYBookmarksViewController tableView:commitEditingStyle:forRowAtIndexPath:] | 0x10014d58c | ABI v40@0:8@16q24@32 */

/* Address: 0x10014d58c | YYYBookmarksViewController::YYYBookmarksViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_ | bytes: 80 */

/* Recovered runtime selector: -[YYYBookmarksViewController
   tableView:commitEditingStyle:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16q24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::
     YYYBookmarksViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010014d5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d13ce8)();
  return;
}



/* -[YYYBookmarksViewController dataSource] | 0x10014d794 | ABI @16@0:8 */

/* Address: 0x10014d794 | YYYBookmarksViewController::YYYBookmarksViewController__instance__dataSource | bytes: 28 */

/* Recovered runtime selector: -[YYYBookmarksViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookmarksViewController::YYYBookmarksViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010014d7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d13da8)();
  return IVar1;
}



/* -[YYYBookmarksViewController setDataSource:] | 0x10014d858 | ABI v24@0:8@16 */

/* Address: 0x10014d858 | YYYBookmarksViewController::YYYBookmarksViewController__instance__setDataSource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBookmarksViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::YYYBookmarksViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010014d878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d13e00)();
  return;
}



/* -[YYYBookmarksViewController .cxx_destruct] | 0x10014d8d0 | ABI v16@0:8 */

/* Address: 0x10014d8d0 | YYYBookmarksViewController::YYYBookmarksViewController__instance___cxx_destruct | bytes: 20 */

/* Recovered runtime selector: -[YYYBookmarksViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookmarksViewController::YYYBookmarksViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010014d8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d13e38)();
  return;
}


