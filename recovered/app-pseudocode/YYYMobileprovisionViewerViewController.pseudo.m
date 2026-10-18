/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMobileprovisionViewerViewController | class address: 0x100c813f0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMobileprovisionViewerViewController viewDidLoad] | 0x10036ec6c | ABI v16@0:8 */

/* Address: 0x10036ec6c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__viewDidLoad | bytes: 68 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__viewDidLoad(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010036ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dc9238)();
  return;
}



/* -[YYYMobileprovisionViewerViewController popViewController] | 0x10037303c | ABI v16@0:8 */

/* Address: 0x10037303c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__popViewController | bytes: 40 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController popViewController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__popViewController(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::navigationController(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100373060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc9960)(IVar1);
  return;
}



/* -[YYYMobileprovisionViewerViewController initTableView] | 0x1003730c0 | ABI v16@0:8 */

/* Address: 0x1003730c0 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__initTableView | bytes: 52 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__initTableView(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003730f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc9988)();
  return;
}



/* -[YYYMobileprovisionViewerViewController tableView:heightForHeaderInSection:] | 0x1003734a8 | ABI d32@0:8@16q24 */

/* Address: 0x1003734a8 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_heightForHeaderInSection_ | bytes: 52 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:heightForHeaderInSection:]
   Original ABI encoding: d32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYMobileprovisionViewerViewController::
       YYYMobileprovisionViewerViewController__instance__tableView_heightForHeaderInSection_
                 (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003734d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*DAT_100dc9a20)(0x100e92390);
  return dVar1;
}



/* -[YYYMobileprovisionViewerViewController tableView:titleForHeaderInSection:] | 0x1003736c4 | ABI @32@0:8@16q24 */

/* Address: 0x1003736c4 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_titleForHeaderInSection_ | bytes: 44 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:titleForHeaderInSection:]
   Original ABI encoding: @32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::
   YYYMobileprovisionViewerViewController__instance__tableView_titleForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003736ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc9ae8)();
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController numberOfSectionsInTableView:] | 0x1003738bc | ABI q24@0:8@16 */

/* Address: 0x1003738bc | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__numberOfSectionsInTableView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMobileprovisionViewerViewController::
          YYYMobileprovisionViewerViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003738dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dc9bb0)();
  return lVar1;
}



/* -[YYYMobileprovisionViewerViewController tableView:numberOfRowsInSection:] | 0x10037399c | ABI q32@0:8@16q24 */

/* Address: 0x10037399c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_numberOfRowsInSection_ | bytes: 48 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMobileprovisionViewerViewController::
          YYYMobileprovisionViewerViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003739c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100dc9c08)();
  return lVar1;
}



/* -[YYYMobileprovisionViewerViewController tableView:cellForRowAtIndexPath:] | 0x100373b7c | ABI @32@0:8@16@24 */

/* Address: 0x100373b7c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::
   YYYMobileprovisionViewerViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100373b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc9c98)();
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController tableView:heightForRowAtIndexPath:] | 0x100373ef4 | ABI d32@0:8@16@24 */

/* Address: 0x100373ef4 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_heightForRowAtIndexPath_ | bytes: 64 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYMobileprovisionViewerViewController::
       YYYMobileprovisionViewerViewController__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100373f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*DAT_100dc9d18)(0x100e923a0);
  return dVar1;
}



/* -[YYYMobileprovisionViewerViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x1003754a8 | ABI v40@0:8@16@24@32 */

/* Address: 0x1003754a8 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001003754e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dca4c8)();
  return;
}



/* -[YYYMobileprovisionViewerViewController filePath] | 0x100375c5c | ABI @16@0:8 */

/* Address: 0x100375c5c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__filePath | bytes: 20 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController filePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::
   YYYMobileprovisionViewerViewController__instance__filePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100375c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dca7a0)((long)_filePath);
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController setFilePath:] | 0x100375c90 | ABI v24@0:8@16 */

/* Address: 0x100375c90 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__setFilePath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController setFilePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__setFilePath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100375cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dca7c8)();
  return;
}



/* -[YYYMobileprovisionViewerViewController provisionData] | 0x100375d1c | ABI @16@0:8 */

/* Address: 0x100375d1c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__provisionData | bytes: 12 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController provisionData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::
   YYYMobileprovisionViewerViewController__instance__provisionData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100375d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dca808)();
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController setProvisionData:] | 0x100375d50 | ABI v24@0:8@16 */

/* Address: 0x100375d50 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__setProvisionData_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController setProvisionData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__setProvisionData_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100375d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dca838)();
  return;
}



/* -[YYYMobileprovisionViewerViewController keys] | 0x100375de8 | ABI @16@0:8 */

/* Address: 0x100375de8 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__keys | bytes: 12 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController keys]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__keys
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100375df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dca888)();
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController setKeys:] | 0x100375e10 | ABI v24@0:8@16 */

/* Address: 0x100375e10 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__setKeys_ | bytes: 52 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController setKeys:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__setKeys_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100375e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dca8a8)(param_3);
  return;
}



/* -[YYYMobileprovisionViewerViewController info] | 0x100375e84 | ABI @16@0:8 */

/* Address: 0x100375e84 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__info | bytes: 20 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController info]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__info
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100375e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dca8d8)((long)_info);
  return IVar1;
}



/* -[YYYMobileprovisionViewerViewController setInfo:] | 0x100375eb8 | ABI v24@0:8@16 */

/* Address: 0x100375eb8 | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance__setInfo_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController setInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance__setInfo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100375ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dca908)((long)_info);
  return;
}



/* -[YYYMobileprovisionViewerViewController .cxx_destruct] | 0x100375f1c | ABI v16@0:8 */

/* Address: 0x100375f1c | YYYMobileprovisionViewerViewController::YYYMobileprovisionViewerViewController__instance___cxx_destruct | bytes: 44 */

/* Recovered runtime selector: -[YYYMobileprovisionViewerViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionViewerViewController::
     YYYMobileprovisionViewerViewController__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100375f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dca938)();
  return;
}


