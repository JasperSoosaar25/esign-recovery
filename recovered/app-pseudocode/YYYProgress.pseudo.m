/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYProgress | class address: 0x100c7a428
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYProgress setProgress:animated:] | 0x100015394 | ABI v24@0:8f16B20 */

/* Address: 0x100015394 | YYYProgress::YYYProgress__instance__setProgress_animated_ | bytes: 44 */

/* Recovered runtime selector: -[YYYProgress setProgress:animated:]
   Original ABI encoding: v24@0:8f16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__instance__setProgress_animated_
               (ID param_1,SEL param_2,float param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000153bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6ec8)(param_1,param_2,param_4);
  return;
}



/* -[YYYProgress hideAnimated:] | 0x10001543c | ABI v20@0:8B16 */

/* Address: 0x10001543c | YYYProgress::YYYProgress__instance__hideAnimated_ | bytes: 36 */

/* Recovered runtime selector: -[YYYProgress hideAnimated:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__instance__hideAnimated_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010001545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6ef8)(param_1,param_2,param_3);
  return;
}



/* -[YYYProgress tips] | 0x10001550c | ABI @16@0:8 */

/* Address: 0x10001550c | YYYProgress::YYYProgress__instance__tips | bytes: 12 */

/* Recovered runtime selector: -[YYYProgress tips]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgress::YYYProgress__instance__tips(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100015514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6f38)();
  return IVar1;
}



/* -[YYYProgress setTips:] | 0x10001552c | ABI v24@0:8@16 */

/* Address: 0x10001552c | YYYProgress::YYYProgress__instance__setTips_ | bytes: 28 */

/* Recovered runtime selector: -[YYYProgress setTips:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__instance__setTips_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100015544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6f50)();
  return;
}



/* -[YYYProgress progressView] | 0x100015594 | ABI @16@0:8 */

/* Address: 0x100015594 | YYYProgress::YYYProgress__instance__progressView | bytes: 12 */

/* Recovered runtime selector: -[YYYProgress progressView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgress::YYYProgress__instance__progressView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010001559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6f90)();
  return IVar1;
}



/* -[YYYProgress setProgressView:] | 0x1000155b4 | ABI v24@0:8@16 */

/* Address: 0x1000155b4 | YYYProgress::YYYProgress__instance__setProgressView_ | bytes: 44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYProgress setProgressView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__instance__setProgressView_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001000155dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6fb8)();
  return;
}



/* -[YYYProgress .cxx_destruct] | 0x100015608 | ABI v16@0:8 */

/* Address: 0x100015608 | YYYProgress::YYYProgress__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYProgress .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100015624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6fd0)();
  return;
}



/* +[YYYProgress showProgressViewToView:] | 0x100014210 | ABI @24@0:8@16 */

/* Address: 0x100014210 | YYYProgress::YYYProgress__class__showProgressViewToView_ | bytes: 40 */

/* Recovered runtime selector: +[YYYProgress showProgressViewToView:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgress::YYYProgress__class__showProgressViewToView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100014234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6a48)();
  return IVar1;
}



/* +[YYYProgress showProgressViewWithText:toView:] | 0x10001451c | ABI @32@0:8@16@24 */

/* Address: 0x10001451c | YYYProgress::YYYProgress__class__showProgressViewWithText_toView_ | bytes: 56 */

/* Recovered runtime selector: +[YYYProgress showProgressViewWithText:toView:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgress::YYYProgress__class__showProgressViewWithText_toView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100014550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6a80)();
  return IVar1;
}



/* +[YYYProgress show] | 0x1000149cc | ABI @16@0:8 */

/* Address: 0x1000149cc | YYYProgress::YYYProgress__class__show | bytes: 24 */

/* Recovered runtime selector: +[YYYProgress show]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgress::YYYProgress__class__show(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000149e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca6ae8)();
  return IVar1;
}



/* +[YYYProgress setProgress:animated:] | 0x100014f28 | ABI v24@0:8f16B20 */

/* Address: 0x100014f28 | YYYProgress::YYYProgress__class__setProgress_animated_ | bytes: 36 */

/* Recovered runtime selector: +[YYYProgress setProgress:animated:]
   Original ABI encoding: v24@0:8f16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__class__setProgress_animated_
               (ID param_1,SEL param_2,float param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100014f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6cb0)(param_1,param_2,param_4);
  return;
}



/* +[YYYProgress hideAnimated:] | 0x1000150c8 | ABI v20@0:8B16 */

/* Address: 0x1000150c8 | YYYProgress::YYYProgress__class__hideAnimated_ | bytes: 36 */

/* Recovered runtime selector: +[YYYProgress hideAnimated:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgress::YYYProgress__class__hideAnimated_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000150e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca6d80)(param_1,param_2,param_3);
  return;
}


