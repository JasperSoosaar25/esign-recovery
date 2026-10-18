/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSourceMessageTableViewCell | class address: 0x100c7cfa8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSourceMessageTableViewCell initWithStyle:reuseIdentifier:] | 0x1000c9c2c | ABI @32@0:8q16@24 */

/* Address: 0x1000c9c2c | YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 68 */

/* Recovered runtime selector: -[YYYSourceMessageTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSourceMessageTableViewCell::
   YYYSourceMessageTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000c9c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce5f80)();
  return IVar1;
}



/* -[YYYSourceMessageTableViewCell label] | 0x1000cbc6c | ABI @16@0:8 */

/* Address: 0x1000cbc6c | YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance__label | bytes: 20 */

/* Recovered runtime selector: -[YYYSourceMessageTableViewCell label]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance__label
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000cbc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce6940)((long)_label);
  return IVar1;
}



/* -[YYYSourceMessageTableViewCell setLabel:] | 0x1000cbc94 | ABI v24@0:8@16 */

/* Address: 0x1000cbc94 | YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance__setLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSourceMessageTableViewCell setLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance__setLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000cbcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce6960)();
  return;
}



/* -[YYYSourceMessageTableViewCell .cxx_destruct] | 0x1000cbd30 | ABI v16@0:8 */

/* Address: 0x1000cbd30 | YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance___cxx_destruct | bytes: 24 */

/* Recovered runtime selector: -[YYYSourceMessageTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000cbd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce69b0)();
  return;
}



/* +[YYYSourceMessageTableViewCell heightWithInfo:] | 0x1000cbadc | ABI d24@0:8@16 */

/* Address: 0x1000cbadc | YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__class__heightWithInfo_ | bytes: 76 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: +[YYYSourceMessageTableViewCell heightWithInfo:]
   Original ABI encoding: d24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYSourceMessageTableViewCell::YYYSourceMessageTableViewCell__class__heightWithInfo_
                 (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  double dVar3;
  
  uVar1 = FUN_1000cbdf8(&_OBJC_CLASS___NSString);
  IVar2 = objc_stub::isKindOfClass_(param_3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000cbb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar3 = (double)(**(code **)(&DAT_100ce68c8 + (IVar2 & 0xffffffff) * 8))();
  return dVar3;
}


