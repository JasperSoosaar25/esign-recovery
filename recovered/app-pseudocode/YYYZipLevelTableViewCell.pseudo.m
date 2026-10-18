/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYZipLevelTableViewCell | class address: 0x100c7c658
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYZipLevelTableViewCell initWithStyle:reuseIdentifier:] | 0x1000aa070 | ABI @32@0:8q16@24 */

/* Address: 0x1000aa070 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 76 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000aa0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdab08)(DAT_100e911c0);
  return IVar1;
}



/* -[YYYZipLevelTableViewCell segmentedControlHandle:] | 0x1000aa7f0 | ABI v24@0:8@16 */

/* Address: 0x1000aa7f0 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__segmentedControlHandle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell segmentedControlHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__segmentedControlHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aa810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdac08)();
  return;
}



/* -[YYYZipLevelTableViewCell awakeFromNib] | 0x1000aa968 | ABI v16@0:8 */

/* Address: 0x1000aa968 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__awakeFromNib | bytes: 32 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell awakeFromNib]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__awakeFromNib
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aa984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdacd0)(param_1);
  return;
}



/* -[YYYZipLevelTableViewCell setSelected:animated:] | 0x1000aa9cc | ABI v24@0:8B16B20 */

/* Address: 0x1000aa9cc | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSelected_animated_ | bytes: 28 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell setSelected:animated:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSelected_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aa9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdad00)(param_1,param_2,param_3,param_4);
  return;
}



/* -[YYYZipLevelTableViewCell segmentedControl] | 0x1000aaa1c | ABI @16@0:8 */

/* Address: 0x1000aaa1c | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__segmentedControl | bytes: 12 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell segmentedControl]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__segmentedControl
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000aaa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdad20)();
  return IVar1;
}



/* -[YYYZipLevelTableViewCell setSegmentedControl:] | 0x1000aaa50 | ABI v24@0:8@16 */

/* Address: 0x1000aaa50 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSegmentedControl_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYZipLevelTableViewCell setSegmentedControl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSegmentedControl_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_segmentedControl) = param_3;
  return;
}



/* -[YYYZipLevelTableViewCell selectIndexChangeHandle] | 0x1000aaa88 | ABI @?16@0:8 */

/* Address: 0x1000aaa88 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__selectIndexChangeHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell selectIndexChangeHandle]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__selectIndexChangeHandle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000aaa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdad50)();
  return IVar1;
}



/* -[YYYZipLevelTableViewCell setSelectIndexChangeHandle:] | 0x1000aaaa4 | ABI v24@0:8@?16 */

/* Address: 0x1000aaaa4 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSelectIndexChangeHandle_ | bytes: 40 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell setSelectIndexChangeHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance__setSelectIndexChangeHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aaac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdad60)();
  return;
}



/* -[YYYZipLevelTableViewCell .cxx_destruct] | 0x1000aab24 | ABI v16@0:8 */

/* Address: 0x1000aab24 | YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYZipLevelTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYZipLevelTableViewCell::YYYZipLevelTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000aab3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdad88)();
  return;
}


