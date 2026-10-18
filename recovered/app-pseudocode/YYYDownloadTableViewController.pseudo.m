/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYDownloadTableViewController | class address: 0x100c7ea10
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYDownloadTableViewController viewDidLoad] | 0x10021966c | ABI v16@0:8 */

/* Address: 0x10021966c | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__viewDidLoad | bytes: 44 */

/* Recovered runtime selector: -[YYYDownloadTableViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100219694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d57c68)(0x100e91ab0);
  return;
}



/* -[YYYDownloadTableViewController viewDidAppear:] | 0x100219c48 | ABI v20@0:8B16 */

/* Address: 0x100219c48 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__viewDidAppear_ | bytes: 44 */

/* Recovered runtime selector: -[YYYDownloadTableViewController viewDidAppear:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100219c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d57d60)(param_1,param_2,param_3);
  return;
}



/* -[YYYDownloadTableViewController setupNavigationItems] | 0x100219ee4 | ABI v16@0:8 */

/* Address: 0x100219ee4 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setupNavigationItems | bytes: 40 */

/* Recovered runtime selector: -[YYYDownloadTableViewController setupNavigationItems]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setupNavigationItems
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100219f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d57e48)(0x100e91ab8);
  return;
}



/* -[YYYDownloadTableViewController initTableView] | 0x10021a070 | ABI v16@0:8 */

/* Address: 0x10021a070 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__initTableView | bytes: 60 */

/* Recovered runtime selector: -[YYYDownloadTableViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__initTableView
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010021a0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d57eb0)(0x100e91abc);
  return;
}



/* -[YYYDownloadTableViewController rightBarButtonHandle:] | 0x10021a47c | ABI v24@0:8@16 */

/* Address: 0x10021a47c | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__rightBarButtonHandle_ | bytes: 40 */

/* Recovered runtime selector: -[YYYDownloadTableViewController rightBarButtonHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__rightBarButtonHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010021a4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d57f60)();
  return;
}



/* -[YYYDownloadTableViewController scanQRCode] | 0x10021a704 | ABI v16@0:8 */

/* Address: 0x10021a704 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__scanQRCode | bytes: 76 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYDownloadTableViewController scanQRCode]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__scanQRCode
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::new((ID)&objc::class_t::YYYQRScanViewController);
  self = objc_stub::navigationController(param_1);
  objc_stub::pushViewController_animated_(self,IVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010021a74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d58070)();
  return;
}



/* -[YYYDownloadTableViewController showInputAddress] | 0x10021a794 | ABI v16@0:8 */

/* Address: 0x10021a794 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__showInputAddress | bytes: 48 */

/* Recovered runtime selector: -[YYYDownloadTableViewController showInputAddress]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__showInputAddress
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010021a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d58098)(0x100e91ac0);
  return;
}



/* -[YYYDownloadTableViewController gotoUrl:] | 0x10021b1e0 | ABI v24@0:8@16 */

/* Address: 0x10021b1e0 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__gotoUrl_ | bytes: 76 */

/* Recovered runtime selector: -[YYYDownloadTableViewController gotoUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__gotoUrl_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010021b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d58348)(0x100e91ac8);
  return;
}



/* -[YYYDownloadTableViewController gotoBookmarkList] | 0x10021b9bc | ABI v16@0:8 */

/* Address: 0x10021b9bc | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__gotoBookmarkList | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadTableViewController gotoBookmarkList]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__gotoBookmarkList
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010021b9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d58588)();
  return;
}



/* -[YYYDownloadTableViewController numberOfSectionsInTableView:] | 0x10021ba58 | ABI q24@0:8@16 */

/* Address: 0x10021ba58 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__numberOfSectionsInTableView_ | bytes: 8 */

/* Recovered runtime selector: -[YYYDownloadTableViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYDownloadTableViewController::
          YYYDownloadTableViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  return 1;
}



/* -[YYYDownloadTableViewController tableView:numberOfRowsInSection:] | 0x10021ba60 | ABI q32@0:8@16q24 */

/* Address: 0x10021ba60 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_numberOfRowsInSection_ | bytes: 36 */

/* Recovered runtime selector: -[YYYDownloadTableViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYDownloadTableViewController::
          YYYDownloadTableViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021ba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d585c0)();
  return lVar1;
}



/* -[YYYDownloadTableViewController tableView:heightForRowAtIndexPath:] | 0x10021bb0c | ABI d32@0:8@16@24 */

/* Address: 0x10021bb0c | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_heightForRowAtIndexPath_ | bytes: 28 */

/* Recovered runtime selector: -[YYYDownloadTableViewController tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYDownloadTableViewController::
       YYYDownloadTableViewController__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021bb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d58600)();
  return dVar1;
}



/* -[YYYDownloadTableViewController tableView:cellForRowAtIndexPath:] | 0x10021bb84 | ABI @32@0:8@16@24 */

/* Address: 0x10021bb84 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYDownloadTableViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadTableViewController::
   YYYDownloadTableViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d58638)();
  return IVar1;
}



/* -[YYYDownloadTableViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x10021bdf4 | ABI v40@0:8@16@24@32 */

/* Address: 0x10021bdf4 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYDownloadTableViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::
     YYYDownloadTableViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010021be28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d586b0)();
  return;
}



/* -[YYYDownloadTableViewController tableView:didEndDisplayingCell:forRowAtIndexPath:] | 0x10021bf98 | ABI v40@0:8@16@24@32 */

/* Address: 0x10021bf98 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_didEndDisplayingCell_forRowAtIndexPath_ | bytes: 28 */

/* Recovered runtime selector: -[YYYDownloadTableViewController
   tableView:didEndDisplayingCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::
     YYYDownloadTableViewController__instance__tableView_didEndDisplayingCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010021bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d58708)();
  return;
}



/* -[YYYDownloadTableViewController tableView:didSelectRowAtIndexPath:] | 0x10021bffc | ABI v32@0:8@16@24 */

/* Address: 0x10021bffc | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_didSelectRowAtIndexPath_ | bytes: 68 */

/* Recovered runtime selector: -[YYYDownloadTableViewController tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::
     YYYDownloadTableViewController__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010021c03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d58748)();
  return;
}



/* -[YYYDownloadTableViewController tableView:editingStyleForRowAtIndexPath:] | 0x10021d088 | ABI q32@0:8@16@24 */

/* Address: 0x10021d088 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYDownloadTableViewController
   tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYDownloadTableViewController::
          YYYDownloadTableViewController__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021d0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d58b20)();
  return lVar1;
}



/* -[YYYDownloadTableViewController tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x10021d144 | ABI @32@0:8@16@24 */

/* Address: 0x10021d144 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYDownloadTableViewController
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadTableViewController::
   YYYDownloadTableViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021d170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d58b80)();
  return IVar1;
}



/* -[YYYDownloadTableViewController tableView:commitEditingStyle:forRowAtIndexPath:] | 0x10021d308 | ABI v40@0:8@16q24@32 */

/* Address: 0x10021d308 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_ | bytes: 72 */

/* Recovered runtime selector: -[YYYDownloadTableViewController
   tableView:commitEditingStyle:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16q24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::
     YYYDownloadTableViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010021d34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d58c38)();
  return;
}



/* -[YYYDownloadTableViewController shareWithPath:inView:] | 0x10021d5ec | ABI v32@0:8@16@24 */

/* Address: 0x10021d5ec | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__shareWithPath_inView_ | bytes: 80 */

/* Recovered runtime selector: -[YYYDownloadTableViewController shareWithPath:inView:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__shareWithPath_inView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010021d638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d58d18)();
  return;
}



/* -[YYYDownloadTableViewController dataSource] | 0x10021dba4 | ABI @16@0:8 */

/* Address: 0x10021dba4 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__dataSource | bytes: 48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYDownloadTableViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadTableViewController::YYYDownloadTableViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYDownloadDataSource);
                    /* WARNING: Could not recover jumptable at 0x00010021dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d58f18)(IVar1);
  return IVar1;
}



/* -[YYYDownloadTableViewController popupAtBarButtonItem] | 0x10021dc40 | ABI @16@0:8 */

/* Address: 0x10021dc40 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__popupAtBarButtonItem | bytes: 80 */

/* Recovered runtime selector: -[YYYDownloadTableViewController popupAtBarButtonItem]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadTableViewController::YYYDownloadTableViewController__instance__popupAtBarButtonItem
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021dc8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d58f48)(0x100e91ad8);
  return IVar1;
}



/* -[YYYDownloadTableViewController setupView] | 0x10021e86c | ABI @16@0:8 */

/* Address: 0x10021e86c | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setupView | bytes: 44 */

/* Recovered runtime selector: -[YYYDownloadTableViewController setupView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setupView
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010021e894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d593a8)();
  return IVar1;
}



/* -[YYYDownloadTableViewController setPopupAtBarButtonItem:] | 0x10021ea08 | ABI v24@0:8@16 */

/* Address: 0x10021ea08 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setPopupAtBarButtonItem_ | bytes: 16 */

/* Recovered runtime selector: -[YYYDownloadTableViewController setPopupAtBarButtonItem:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::
     YYYDownloadTableViewController__instance__setPopupAtBarButtonItem_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010021ea14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d59460)(param_1,param_3);
  return;
}



/* -[YYYDownloadTableViewController setSetupView:] | 0x10021ea28 | ABI v24@0:8@16 */

/* Address: 0x10021ea28 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setSetupView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYDownloadTableViewController setSetupView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance__setSetupView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010021ea48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d59468)();
  return;
}



/* -[YYYDownloadTableViewController .cxx_destruct] | 0x10021eaa0 | ABI v16@0:8 */

/* Address: 0x10021eaa0 | YYYDownloadTableViewController::YYYDownloadTableViewController__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadTableViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadTableViewController::YYYDownloadTableViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010021eabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d594b0)();
  return;
}


