/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYCertTableViewController | class address: 0x100c80280
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYCertTableViewController viewDidLoad] | 0x1002f1300 | ABI v16@0:8 */

/* Address: 0x1002f1300 | YYYCertTableViewController::YYYCertTableViewController__instance__viewDidLoad | bytes: 44 */

/* Recovered runtime selector: -[YYYCertTableViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f1328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9dbf8)(0x100e91ff4);
  return;
}



/* -[YYYCertTableViewController initTableView] | 0x1002f1778 | ABI v16@0:8 */

/* Address: 0x1002f1778 | YYYCertTableViewController::YYYCertTableViewController__instance__initTableView | bytes: 52 */

/* Recovered runtime selector: -[YYYCertTableViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__initTableView
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f17a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d9dd48)(0x100e91ff8);
  return;
}



/* -[YYYCertTableViewController viewWillAppear:] | 0x1002f1aec | ABI v20@0:8B16 */

/* Address: 0x1002f1aec | YYYCertTableViewController::YYYCertTableViewController__instance__viewWillAppear_ | bytes: 56 */

/* Recovered runtime selector: -[YYYCertTableViewController viewWillAppear:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__viewWillAppear_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f1b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9de08)(param_1,param_2,param_3);
  return;
}



/* -[YYYCertTableViewController loadData] | 0x1002f1bd4 | ABI v16@0:8 */

/* Address: 0x1002f1bd4 | YYYCertTableViewController::YYYCertTableViewController__instance__loadData | bytes: 80 */

/* Recovered runtime selector: -[YYYCertTableViewController loadData]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__loadData
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f1c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d9de48)();
  return;
}



/* -[YYYCertTableViewController numberOfSectionsInTableView:] | 0x1002f4128 | ABI q24@0:8@16 */

/* Address: 0x1002f4128 | YYYCertTableViewController::YYYCertTableViewController__instance__numberOfSectionsInTableView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCertTableViewController::
          YYYCertTableViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f4140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d9e8e0)();
  return lVar1;
}



/* -[YYYCertTableViewController tableView:numberOfRowsInSection:] | 0x1002f41a8 | ABI q32@0:8@16q24 */

/* Address: 0x1002f41a8 | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_numberOfRowsInSection_ | bytes: 64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYCertTableViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCertTableViewController::
          YYYCertTableViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  long_long lVar2;
  
  IVar1 = objc_stub::dataSource(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002f41e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*(code *)PTR_LAB_100d9e938)(IVar1);
  return lVar2;
}



/* -[YYYCertTableViewController tableView:cellForRowAtIndexPath:] | 0x1002f423c | ABI @32@0:8@16@24 */

/* Address: 0x1002f423c | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCertTableViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewController::
   YYYCertTableViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f425c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d9e958)(0x100e9200c,param_3);
  return IVar1;
}



/* -[YYYCertTableViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x1002f45cc | ABI v40@0:8@16@24@32 */

/* Address: 0x1002f45cc | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYCertTableViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::
     YYYCertTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f4600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9ea08)();
  return;
}



/* -[YYYCertTableViewController tableView:didSelectRowAtIndexPath:] | 0x1002f4760 | ABI v32@0:8@16@24 */

/* Address: 0x1002f4760 | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_didSelectRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYCertTableViewController tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::
     YYYCertTableViewController__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f478c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9ea50)();
  return;
}



/* -[YYYCertTableViewController tableView:heightForRowAtIndexPath:] | 0x1002f4cc0 | ABI d32@0:8@16@24 */

/* Address: 0x1002f4cc0 | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_heightForRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYCertTableViewController tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYCertTableViewController::
       YYYCertTableViewController__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f4cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*DAT_100d9ebb0)(0x100e92014);
  return dVar1;
}



/* -[YYYCertTableViewController tableView:editingStyleForRowAtIndexPath:] | 0x1002f512c | ABI q32@0:8@16@24 */

/* Address: 0x1002f512c | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewController
   tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCertTableViewController::
          YYYCertTableViewController__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f5144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_100d9ec90)();
  return lVar1;
}



/* -[YYYCertTableViewController tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x1002f51ac | ABI @32@0:8@16@24 */

/* Address: 0x1002f51ac | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYCertTableViewController
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewController::
   YYYCertTableViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f51d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d9ece0)();
  return IVar1;
}



/* -[YYYCertTableViewController tableView:editActionsForRowAtIndexPath:] | 0x1002f53b4 | ABI @32@0:8@16@24 */

/* Address: 0x1002f53b4 | YYYCertTableViewController::YYYCertTableViewController__instance__tableView_editActionsForRowAtIndexPath_ | bytes: 76 */

/* Recovered runtime selector: -[YYYCertTableViewController tableView:editActionsForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewController::
   YYYCertTableViewController__instance__tableView_editActionsForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f53fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d9edb8)();
  return IVar1;
}



/* -[YYYCertTableViewController shareCert:atCell:] | 0x1002f5fa8 | ABI v32@0:8@16@24 */

/* Address: 0x1002f5fa8 | YYYCertTableViewController::YYYCertTableViewController__instance__shareCert_atCell_ | bytes: 84 */

/* Recovered runtime selector: -[YYYCertTableViewController shareCert:atCell:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__shareCert_atCell_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f5ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9f020)(0x100e92024);
  return;
}



/* -[YYYCertTableViewController dataSource] | 0x1002f67c4 | ABI @16@0:8 */

/* Address: 0x1002f67c4 | YYYCertTableViewController::YYYCertTableViewController__instance__dataSource | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewController::YYYCertTableViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f67dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d9f278)();
  return IVar1;
}



/* -[YYYCertTableViewController setDataSource:] | 0x1002f6888 | ABI v24@0:8@16 */

/* Address: 0x1002f6888 | YYYCertTableViewController::YYYCertTableViewController__instance__setDataSource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCertTableViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f68a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d9f2c0)();
  return;
}



/* -[YYYCertTableViewController finishCount] | 0x1002f6938 | ABI q16@0:8 */

/* Address: 0x1002f6938 | YYYCertTableViewController::YYYCertTableViewController__instance__finishCount | bytes: 20 */

/* Recovered runtime selector: -[YYYCertTableViewController finishCount]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYCertTableViewController::YYYCertTableViewController__instance__finishCount
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f6948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d9f320)((long)_finishCount);
  return lVar1;
}



/* -[YYYCertTableViewController setFinishCount:] | 0x1002f696c | ABI v24@0:8q16 */

/* Address: 0x1002f696c | YYYCertTableViewController::YYYCertTableViewController__instance__setFinishCount_ | bytes: 12 */

/* Recovered runtime selector: -[YYYCertTableViewController setFinishCount:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance__setFinishCount_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f6974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9f358)();
  return;
}



/* -[YYYCertTableViewController .cxx_destruct] | 0x1002f6988 | ABI v16@0:8 */

/* Address: 0x1002f6988 | YYYCertTableViewController::YYYCertTableViewController__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewController::YYYCertTableViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f69a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d9f368)();
  return;
}


