/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYModifyDylibTableViewController | class address: 0x100c81300
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYModifyDylibTableViewController viewDidLoad] | 0x100363250 | ABI v16@0:8 */

/* Address: 0x100363250 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__viewDidLoad | bytes: 52 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100363280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dc4460)();
  return;
}



/* -[YYYModifyDylibTableViewController initTableView] | 0x1003639e8 | ABI v16@0:8 */

/* Address: 0x1003639e8 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__initTableView | bytes: 44 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__initTableView
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100363a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc45f8)(0x100e9232c);
  return;
}



/* -[YYYModifyDylibTableViewController numberOfSectionsInTableView:] | 0x100363c50 | ABI q24@0:8@16 */

/* Address: 0x100363c50 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__numberOfSectionsInTableView_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYModifyDylibTableViewController::
          YYYModifyDylibTableViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100363c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dc46a8)();
  return lVar1;
}



/* -[YYYModifyDylibTableViewController tableView:numberOfRowsInSection:] | 0x100363c7c | ABI q32@0:8@16q24 */

/* Address: 0x100363c7c | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__tableView_numberOfRowsInSection_ | bytes: 32 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYModifyDylibTableViewController::
          YYYModifyDylibTableViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100363c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dc46d0)();
  return lVar1;
}



/* -[YYYModifyDylibTableViewController tableView:heightForRowAtIndexPath:] | 0x100363d1c | ABI d32@0:8@16@24 */

/* Address: 0x100363d1c | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__tableView_heightForRowAtIndexPath_ | bytes: 52 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController
   tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYModifyDylibTableViewController::
       YYYModifyDylibTableViewController__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100363d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100dc4700)();
  return dVar1;
}



/* -[YYYModifyDylibTableViewController tableView:cellForRowAtIndexPath:] | 0x100363e90 | ABI @32@0:8@16@24 */

/* Address: 0x100363e90 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyDylibTableViewController::
   YYYModifyDylibTableViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100363ebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc4740)(DAT_100e92330);
  return IVar1;
}



/* -[YYYModifyDylibTableViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x1003640f4 | ABI v40@0:8@16@24@32 */

/* Address: 0x1003640f4 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 52 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::
     YYYModifyDylibTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100364124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc47c0)();
  return;
}



/* -[YYYModifyDylibTableViewController tableView:didSelectRowAtIndexPath:] | 0x100364978 | ABI v32@0:8@16@24 */

/* Address: 0x100364978 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__tableView_didSelectRowAtIndexPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController
   tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::
     YYYModifyDylibTableViewController__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003649b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc4980)(DAT_100e92338);
  return;
}



/* -[YYYModifyDylibTableViewController modifyDylib:] | 0x100365404 | ABI v24@0:8@16 */

/* Address: 0x100365404 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__modifyDylib_ | bytes: 60 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController modifyDylib:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__modifyDylib_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010036543c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc4af8)();
  return;
}



/* -[YYYModifyDylibTableViewController dylibPath] | 0x1003661f8 | ABI @16@0:8 */

/* Address: 0x1003661f8 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__dylibPath | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController dylibPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__dylibPath
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100366200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc4e28)();
  return IVar1;
}



/* -[YYYModifyDylibTableViewController setDylibPath:] | 0x10036622c | ABI v24@0:8@16 */

/* Address: 0x10036622c | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setDylibPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController setDylibPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setDylibPath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100366250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc4e58)();
  return;
}



/* -[YYYModifyDylibTableViewController bundle] | 0x1003662b4 | ABI @16@0:8 */

/* Address: 0x1003662b4 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__bundle | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController bundle]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__bundle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003662bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc4e90)();
  return IVar1;
}



/* -[YYYModifyDylibTableViewController setBundle:] | 0x1003662d0 | ABI v24@0:8@16 */

/* Address: 0x1003662d0 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setBundle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController setBundle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setBundle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003662f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc4ea0)((long)_bundle);
  return;
}



/* -[YYYModifyDylibTableViewController dataSources] | 0x100366340 | ABI @16@0:8 */

/* Address: 0x100366340 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__dataSources | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController dataSources]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__dataSources
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100366348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc4ee8)();
  return IVar1;
}



/* -[YYYModifyDylibTableViewController setDataSources:] | 0x100366374 | ABI v24@0:8@16 */

/* Address: 0x100366374 | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setDataSources_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController setDataSources:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance__setDataSources_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100366398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dc4f10)();
  return;
}



/* -[YYYModifyDylibTableViewController .cxx_destruct] | 0x1003663cc | ABI v16@0:8 */

/* Address: 0x1003663cc | YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYModifyDylibTableViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyDylibTableViewController::YYYModifyDylibTableViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003663e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc4f38)();
  return;
}


