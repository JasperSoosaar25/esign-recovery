/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYInjectPathTableViewCell | class address: 0x100c800a0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYInjectPathTableViewCell initWithStyle:reuseIdentifier:] | 0x1002cb280 | ABI @32@0:8q16@24 */

/* Address: 0x1002cb280 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 80 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002cb2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d91a10)(0x100e91ee4);
  return IVar1;
}



/* -[YYYInjectPathTableViewCell segmentedControlHandle:] | 0x1002cbc98 | ABI v24@0:8@16 */

/* Address: 0x1002cbc98 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__segmentedControlHandle_ | bytes: 64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYInjectPathTableViewCell segmentedControlHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__segmentedControlHandle_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::selectIndexChangeHandle(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002cbcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d91b78)(IVar1);
  return;
}



/* -[YYYInjectPathTableViewCell awakeFromNib] | 0x1002cbd7c | ABI v16@0:8 */

/* Address: 0x1002cbd7c | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__awakeFromNib | bytes: 44 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell awakeFromNib]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__awakeFromNib
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cbda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d91bd8)();
  return;
}



/* -[YYYInjectPathTableViewCell setSelected:animated:] | 0x1002cbdf0 | ABI v24@0:8B16B20 */

/* Address: 0x1002cbdf0 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSelected_animated_ | bytes: 24 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell setSelected:animated:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSelected_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d91c08)(param_1,param_2,param_3,param_4);
  return;
}



/* -[YYYInjectPathTableViewCell segmentedControl] | 0x1002cbe30 | ABI @16@0:8 */

/* Address: 0x1002cbe30 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__segmentedControl | bytes: 12 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell segmentedControl]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__segmentedControl
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002cbe38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d91c20)();
  return IVar1;
}



/* -[YYYInjectPathTableViewCell setSegmentedControl:] | 0x1002cbe58 | ABI v24@0:8@16 */

/* Address: 0x1002cbe58 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSegmentedControl_ | bytes: 44 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell setSegmentedControl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSegmentedControl_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cbe80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d91c40)();
  return;
}



/* -[YYYInjectPathTableViewCell selectIndexChangeHandle] | 0x1002cbee8 | ABI @?16@0:8 */

/* Address: 0x1002cbee8 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__selectIndexChangeHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell selectIndexChangeHandle]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__selectIndexChangeHandle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002cbef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d91c80)();
  return IVar1;
}



/* -[YYYInjectPathTableViewCell setSelectIndexChangeHandle:] | 0x1002cbf10 | ABI v24@0:8@?16 */

/* Address: 0x1002cbf10 | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSelectIndexChangeHandle_ | bytes: 48 */

/* Recovered runtime selector: -[YYYInjectPathTableViewCell setSelectIndexChangeHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance__setSelectIndexChangeHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002cbf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d91c98)();
  return;
}



/* -[YYYInjectPathTableViewCell .cxx_destruct] | 0x1002cbf9c | ABI v16@0:8 */

/* Address: 0x1002cbf9c | YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance___cxx_destruct | bytes: 56 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYInjectPathTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYInjectPathTableViewCell::YYYInjectPathTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_selectIndexChangeHandle) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002cbfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d91cd8)();
  return;
}


