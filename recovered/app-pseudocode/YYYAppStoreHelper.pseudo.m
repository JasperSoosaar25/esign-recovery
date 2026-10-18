/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYAppStoreHelper | class address: 0x100c7d070
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYAppStoreHelper parseUrl:] | 0x1000cf510 | ABI @24@0:8@16 */

/* Address: 0x1000cf510 | YYYAppStoreHelper::YYYAppStoreHelper__class__parseUrl_ | bytes: 44 */

/* Recovered runtime selector: +[YYYAppStoreHelper parseUrl:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppStoreHelper::YYYAppStoreHelper__class__parseUrl_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000cf538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce8408)();
  return IVar1;
}



/* +[YYYAppStoreHelper gotoSetttingVCCompletion:] | 0x1000cfd70 | ABI v24@0:8@?16 */

/* Address: 0x1000cfd70 | YYYAppStoreHelper::YYYAppStoreHelper__class__gotoSetttingVCCompletion_ | bytes: 52 */

/* Recovered runtime selector: +[YYYAppStoreHelper gotoSetttingVCCompletion:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppStoreHelper::YYYAppStoreHelper__class__gotoSetttingVCCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000cfda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce86e8)(0x100e912b4,param_3,param_2,param_3,param_4);
  return;
}



/* +[YYYAppStoreHelper download:completion:] | 0x1000d0740 | ABI v32@0:8@16@?24 */

/* Address: 0x1000d0740 | YYYAppStoreHelper::YYYAppStoreHelper__class__download_completion_ | bytes: 72 */

/* Recovered runtime selector: +[YYYAppStoreHelper download:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppStoreHelper::YYYAppStoreHelper__class__download_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d0784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce88d8)();
  return;
}



/* +[YYYAppStoreHelper exchangeCode:completion:] | 0x1000d327c | ABI v32@0:8@16@?24 */

/* Address: 0x1000d327c | YYYAppStoreHelper::YYYAppStoreHelper__class__exchangeCode_completion_ | bytes: 136 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: +[YYYAppStoreHelper exchangeCode:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppStoreHelper::YYYAppStoreHelper__class__exchangeCode_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::sharedApplication
                    ((ID)&_OBJC_CLASS___UIApplication,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::delegate(IVar1);
  IVar1 = objc_stub::window(IVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000d3300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100ce94f0)(IVar1);
  return;
}



/* +[YYYAppStoreHelper getUrlFromLanZou:completion:] | 0x1000d3ec0 | ABI v32@0:8@16@?24 */

/* Address: 0x1000d3ec0 | YYYAppStoreHelper::YYYAppStoreHelper__class__getUrlFromLanZou_completion_ | bytes: 56 */

/* Recovered runtime selector: +[YYYAppStoreHelper getUrlFromLanZou:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppStoreHelper::YYYAppStoreHelper__class__getUrlFromLanZou_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d3ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce9910)();
  return;
}


