/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSelectDylibTableViewController | class address: 0x100c7d818
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSelectDylibTableViewController viewDidLoad] | 0x10015cf78 | ABI v16@0:8 */

/* Address: 0x10015cf78 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__viewDidLoad | bytes: 76 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010015cfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d18a00)(0x100e91644);
  return;
}



/* -[YYYSelectDylibTableViewController confirmHandle] | 0x10015d720 | ABI v16@0:8 */

/* Address: 0x10015d720 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__confirmHandle | bytes: 212 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYSelectDylibTableViewController confirmHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__confirmHandle
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_100afc6e8;
  objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar1 = objc_stub::tableView(param_1);
  IVar1 = objc_stub::indexPathsForSelectedRows(IVar1);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(IVar1,&uStack_130,auStack_e8,0x10);
  switch(IVar1 == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010015d7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d18c90)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00010015d9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d18d80)(0);
    return;
  }
}



/* -[YYYSelectDylibTableViewController numberOfSectionsInTableView:] | 0x10015dac8 | ABI q24@0:8@16 */

/* Address: 0x10015dac8 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__numberOfSectionsInTableView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYSelectDylibTableViewController::
          YYYSelectDylibTableViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015dae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d18dc0)();
  return lVar1;
}



/* -[YYYSelectDylibTableViewController tableView:numberOfRowsInSection:] | 0x10015db3c | ABI q32@0:8@16q24 */

/* Address: 0x10015db3c | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__tableView_numberOfRowsInSection_ | bytes: 32 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYSelectDylibTableViewController::
          YYYSelectDylibTableViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015db58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d18e00)();
  return lVar1;
}



/* -[YYYSelectDylibTableViewController tableView:cellForRowAtIndexPath:] | 0x10015dbcc | ABI @32@0:8@16@24 */

/* Address: 0x10015dbcc | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSelectDylibTableViewController::
   YYYSelectDylibTableViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015dbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d18e38)();
  return IVar1;
}



/* -[YYYSelectDylibTableViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x10015df28 | ABI v40@0:8@16@24@32 */

/* Address: 0x10015df28 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::
     YYYSelectDylibTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010015df5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d18f70)();
  return;
}



/* -[YYYSelectDylibTableViewController tableView:editingStyleForRowAtIndexPath:] | 0x10015e16c | ABI q32@0:8@16@24 */

/* Address: 0x10015e16c | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 28 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController
   tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYSelectDylibTableViewController::
          YYYSelectDylibTableViewController__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015e184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d18fd8)();
  return lVar1;
}



/* -[YYYSelectDylibTableViewController selectDylibs] | 0x10015e1ec | ABI @16@0:8 */

/* Address: 0x10015e1ec | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__selectDylibs | bytes: 12 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController selectDylibs]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__selectDylibs
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d19028)();
  return IVar1;
}



/* -[YYYSelectDylibTableViewController setSelectDylibs:] | 0x10015e208 | ABI v24@0:8@16 */

/* Address: 0x10015e208 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__setSelectDylibs_ | bytes: 44 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController setSelectDylibs:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::
     YYYSelectDylibTableViewController__instance__setSelectDylibs_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010015e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d19038)();
  return;
}



/* -[YYYSelectDylibTableViewController dataSource] | 0x10015e294 | ABI @16@0:8 */

/* Address: 0x10015e294 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__dataSource | bytes: 12 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015e29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d19070)();
  return IVar1;
}



/* -[YYYSelectDylibTableViewController setDataSource:] | 0x10015e2bc | ABI v24@0:8@16 */

/* Address: 0x10015e2bc | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__setDataSource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010015e2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d19090)();
  return;
}



/* -[YYYSelectDylibTableViewController confirmBlock] | 0x10015e32c | ABI @?16@0:8 */

/* Address: 0x10015e32c | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__confirmBlock | bytes: 20 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController confirmBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__confirmBlock
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010015e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d190c8)((long)_confirmBlock);
  return IVar1;
}



/* -[YYYSelectDylibTableViewController setConfirmBlock:] | 0x10015e360 | ABI v24@0:8@?16 */

/* Address: 0x10015e360 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance__setConfirmBlock_ | bytes: 48 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController setConfirmBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::
     YYYSelectDylibTableViewController__instance__setConfirmBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010015e38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d190f0)();
  return;
}



/* -[YYYSelectDylibTableViewController .cxx_destruct] | 0x10015e3e0 | ABI v16@0:8 */

/* Address: 0x10015e3e0 | YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance___cxx_destruct | bytes: 44 */

/* Recovered runtime selector: -[YYYSelectDylibTableViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSelectDylibTableViewController::YYYSelectDylibTableViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010015e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d19128)();
  return;
}


