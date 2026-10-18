/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSettingTableViewController | class address: 0x100c805f0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSettingTableViewController viewDidLoad] | 0x100327d64 | ABI v16@0:8 */

/* Address: 0x100327d64 | YYYSettingTableViewController::YYYSettingTableViewController__instance__viewDidLoad | bytes: 48 */

/* Recovered runtime selector: -[YYYSettingTableViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100327d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db2510)(0x100e92148);
  return;
}



/* -[YYYSettingTableViewController setupDataSource] | 0x100328144 | ABI v16@0:8 */

/* Address: 0x100328144 | YYYSettingTableViewController::YYYSettingTableViewController__instance__setupDataSource | bytes: 116 */

/* Recovered runtime selector: -[YYYSettingTableViewController setupDataSource]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__setupDataSource
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003281b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db25e0)();
  return;
}



/* -[YYYSettingTableViewController downLoadIPA:] | 0x10032ec8c | ABI v24@0:8@16 */

/* Address: 0x10032ec8c | YYYSettingTableViewController::YYYSettingTableViewController__instance__downLoadIPA_ | bytes: 104 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSettingTableViewController downLoadIPA:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__downLoadIPA_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  IVar1 = objc_stub::object(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010032ecf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db4cd0)(IVar1);
  return;
}



/* -[YYYSettingTableViewController initTableView] | 0x10032edac | ABI v16@0:8 */

/* Address: 0x10032edac | YYYSettingTableViewController::YYYSettingTableViewController__instance__initTableView | bytes: 52 */

/* Recovered runtime selector: -[YYYSettingTableViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__initTableView
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010032eddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db4cf0)(0x100e92198);
  return;
}



/* -[YYYSettingTableViewController safariViewControllerDidFinish:] | 0x1003300f8 | ABI v24@0:8@16 */

/* Address: 0x1003300f8 | YYYSettingTableViewController::YYYSettingTableViewController__instance__safariViewControllerDidFinish_ | bytes: 296 */

/* Recovered runtime selector: -[YYYSettingTableViewController safariViewControllerDidFinish:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__safariViewControllerDidFinish_
               (ID param_1,SEL param_2,ID param_3)

{
  switch(DAT_100e9219c == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001003302a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100db5040)();
    return;
  case true:
    DAT_100db0ec0 = DAT_100db0eb0 + (DAT_100db0eb0 & 0x69) * -2 + -0x17;
    DAT_100db0ec1 = DAT_100db0eb1 ^ 0xf5;
    DAT_100db0ec2 = DAT_100db0eb2 ^ 0x7e;
    DAT_100db0ec3 = DAT_100db0eb3 ^ 0xab;
    DAT_100db0ec4 = DAT_100db0eb4 ^ 0x85;
    DAT_100db0ec5 = ~((DAT_100db0eb5 | 9) & (DAT_100db0eb5 ^ 0xff | 0xf6));
    DAT_100db0ec6 = DAT_100db0eb6 ^ 0xa9;
    DAT_100db0ec7 = DAT_100db0eb7 + (DAT_100db0eb7 & 0x39) * -2 + -0x47;
    DAT_100db0ec8 = DAT_100db0eb8 + (DAT_100db0eb8 & 0x42) * -2 + 'B';
                    /* WARNING: Could not recover jumptable at 0x000100330210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100db5028)(DAT_100db0eb9);
    return;
  }
}



/* -[YYYSettingTableViewController safariViewController:didCompleteInitialLoad:] | 0x1003304cc | ABI v28@0:8@16B24 */

/* Address: 0x1003304cc | YYYSettingTableViewController::YYYSettingTableViewController__instance__safariViewController_didCompleteInitialLoad_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewController
   safariViewController:didCompleteInitialLoad:]
   Original ABI encoding: v28@0:8@16B24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__safariViewController_didCompleteInitialLoad_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003304ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5138)();
  return;
}



/* -[YYYSettingTableViewController getUDID] | 0x10033056c | ABI v16@0:8 */

/* Address: 0x10033056c | YYYSettingTableViewController::YYYSettingTableViewController__instance__getUDID | bytes: 52 */

/* Recovered runtime selector: -[YYYSettingTableViewController getUDID]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__getUDID
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010033059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5188)(DAT_100e921a0);
  return;
}



/* -[YYYSettingTableViewController getUDIDNoti:] | 0x100330c40 | ABI v24@0:8@16 */

/* Address: 0x100330c40 | YYYSettingTableViewController::YYYSettingTableViewController__instance__getUDIDNoti_ | bytes: 44 */

/* Recovered runtime selector: -[YYYSettingTableViewController getUDIDNoti:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__getUDIDNoti_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100330c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5300)();
  return;
}



/* -[YYYSettingTableViewController copyUDID] | 0x10033132c | ABI v16@0:8 */

/* Address: 0x10033132c | YYYSettingTableViewController::YYYSettingTableViewController__instance__copyUDID | bytes: 44 */

/* Recovered runtime selector: -[YYYSettingTableViewController copyUDID]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__copyUDID
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100331354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db55e0)(0x100e921a8);
  return;
}



/* -[YYYSettingTableViewController gotoThemeViewController] | 0x100331a24 | ABI v16@0:8 */

/* Address: 0x100331a24 | YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoThemeViewController | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewController gotoThemeViewController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoThemeViewController
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100331a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5738)();
  return;
}



/* -[YYYSettingTableViewController gotoCertManagerController] | 0x100331ae8 | ABI v16@0:8 */

/* Address: 0x100331ae8 | YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoCertManagerController | bytes: 28 */

/* Recovered runtime selector: -[YYYSettingTableViewController gotoCertManagerController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__gotoCertManagerController(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100331b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5760)();
  return;
}



/* -[YYYSettingTableViewController gotoYYYSignConfigDefaultSetupViewController] | 0x100331b5c | ABI v16@0:8 */

/* Address: 0x100331b5c | YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoYYYSignConfigDefaultSetupViewController | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewController
   gotoYYYSignConfigDefaultSetupViewController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__gotoYYYSignConfigDefaultSetupViewController
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100331b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5780)();
  return;
}



/* -[YYYSettingTableViewController joinQQGroup] | 0x100331c48 | ABI v16@0:8 */

/* Address: 0x100331c48 | YYYSettingTableViewController::YYYSettingTableViewController__instance__joinQQGroup | bytes: 80 */

/* Recovered runtime selector: -[YYYSettingTableViewController joinQQGroup]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__joinQQGroup
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100331c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db57c0)();
  return;
}



/* -[YYYSettingTableViewController openQQ:] | 0x100332ffc | ABI v24@0:8@16 */

/* Address: 0x100332ffc | YYYSettingTableViewController::YYYSettingTableViewController__instance__openQQ_ | bytes: 48 */

/* Recovered runtime selector: -[YYYSettingTableViewController openQQ:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__openQQ_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100333028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5d00)();
  return;
}



/* -[YYYSettingTableViewController openTelegram] | 0x1003345ac | ABI v16@0:8 */

/* Address: 0x1003345ac | YYYSettingTableViewController::YYYSettingTableViewController__instance__openTelegram | bytes: 48 */

/* Recovered runtime selector: -[YYYSettingTableViewController openTelegram]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__openTelegram
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003345d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5eb0)();
  return;
}



/* -[YYYSettingTableViewController openContract] | 0x100334c1c | ABI v16@0:8 */

/* Address: 0x100334c1c | YYYSettingTableViewController::YYYSettingTableViewController__instance__openContract | bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYSettingTableViewController openContract]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__openContract
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID self;
  
  IVar1 = objc_stub::new((ID)&objc::class_t::YYYContractViewController);
  self = objc_stub::navigationController(param_1);
  objc_stub::pushViewController_animated_(self,IVar1,1);
  return;
}



/* -[YYYSettingTableViewController openHomePage] | 0x100334c74 | ABI v16@0:8 */

/* Address: 0x100334c74 | YYYSettingTableViewController::YYYSettingTableViewController__instance__openHomePage | bytes: 28 */

/* Recovered runtime selector: -[YYYSettingTableViewController openHomePage]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__openHomePage
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100334c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db5fe8)();
  return;
}



/* -[YYYSettingTableViewController gotoYYYLanZouTableViewController] | 0x100335148 | ABI v16@0:8 */

/* Address: 0x100335148 | YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoYYYLanZouTableViewController | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewController gotoYYYLanZouTableViewController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__gotoYYYLanZouTableViewController
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100335168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db60e0)();
  return;
}



/* -[YYYSettingTableViewController gotoYYYWiFiViewController] | 0x100335358 | ABI v16@0:8 */

/* Address: 0x100335358 | YYYSettingTableViewController::YYYSettingTableViewController__instance__gotoYYYWiFiViewController | bytes: 32 */

/* Recovered runtime selector: -[YYYSettingTableViewController gotoYYYWiFiViewController]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__gotoYYYWiFiViewController(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100335374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6190)();
  return;
}



/* -[YYYSettingTableViewController supportDeveloper] | 0x100335430 | ABI v16@0:8 */

/* Address: 0x100335430 | YYYSettingTableViewController::YYYSettingTableViewController__instance__supportDeveloper | bytes: 40 */

/* Recovered runtime selector: -[YYYSettingTableViewController supportDeveloper]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__supportDeveloper
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100335454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100db61c8)(0x100e921d0);
  return;
}



/* -[YYYSettingTableViewController importFile] | 0x100336fa4 | ABI v16@0:8 */

/* Address: 0x100336fa4 | YYYSettingTableViewController::YYYSettingTableViewController__instance__importFile | bytes: 72 */

/* Recovered runtime selector: -[YYYSettingTableViewController importFile]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__importFile
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100336fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db64f0)();
  return;
}



/* -[YYYSettingTableViewController documentPicker:didPickDocumentsAtURLs:] | 0x10033752c | ABI v32@0:8@16@24 */

/* Address: 0x10033752c | YYYSettingTableViewController::YYYSettingTableViewController__instance__documentPicker_didPickDocumentsAtURLs_ | bytes: 60 */

/* Recovered runtime selector: -[YYYSettingTableViewController
   documentPicker:didPickDocumentsAtURLs:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::
     YYYSettingTableViewController__instance__documentPicker_didPickDocumentsAtURLs_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100337564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6650)();
  return;
}



/* -[YYYSettingTableViewController dataSource] | 0x1003386c0 | ABI @16@0:8 */

/* Address: 0x1003386c0 | YYYSettingTableViewController::YYYSettingTableViewController__instance__dataSource | bytes: 12 */

/* Recovered runtime selector: -[YYYSettingTableViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSettingTableViewController::YYYSettingTableViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003386c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db6bc8)();
  return IVar1;
}



/* -[YYYSettingTableViewController setDataSource:] | 0x1003386e8 | ABI v24@0:8@16 */

/* Address: 0x1003386e8 | YYYSettingTableViewController::YYYSettingTableViewController__instance__setDataSource_ | bytes: 28 */

/* Recovered runtime selector: -[YYYSettingTableViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100338700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6be0)();
  return;
}



/* -[YYYSettingTableViewController needShow] | 0x10033874c | ABI B16@0:8 */

/* Address: 0x10033874c | YYYSettingTableViewController::YYYSettingTableViewController__instance__needShow | bytes: 12 */

/* Recovered runtime selector: -[YYYSettingTableViewController needShow]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYSettingTableViewController::YYYSettingTableViewController__instance__needShow
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100338754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100db6c10)((int)param_1);
  return bVar1;
}



/* -[YYYSettingTableViewController setNeedShow:] | 0x100338774 | ABI v20@0:8B16 */

/* Address: 0x100338774 | YYYSettingTableViewController::YYYSettingTableViewController__instance__setNeedShow_ | bytes: 20 */

/* Recovered runtime selector: -[YYYSettingTableViewController setNeedShow:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__setNeedShow_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100338784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6c38)((long)_needShow,param_1,param_2,param_3);
  return;
}



/* -[YYYSettingTableViewController tableHelper] | 0x1003387b8 | ABI @16@0:8 */

/* Address: 0x1003387b8 | YYYSettingTableViewController::YYYSettingTableViewController__instance__tableHelper | bytes: 20 */

/* Recovered runtime selector: -[YYYSettingTableViewController tableHelper]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSettingTableViewController::YYYSettingTableViewController__instance__tableHelper
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003387c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100db6c60)((long)_tableHelper);
  return IVar1;
}



/* -[YYYSettingTableViewController setTableHelper:] | 0x1003387e0 | ABI v24@0:8@16 */

/* Address: 0x1003387e0 | YYYSettingTableViewController::YYYSettingTableViewController__instance__setTableHelper_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewController setTableHelper:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance__setTableHelper_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100338800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6c80)();
  return;
}



/* -[YYYSettingTableViewController .cxx_destruct] | 0x10033886c | ABI v16@0:8 */

/* Address: 0x10033886c | YYYSettingTableViewController::YYYSettingTableViewController__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYSettingTableViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewController::YYYSettingTableViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100338884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100db6cc8)();
  return;
}


