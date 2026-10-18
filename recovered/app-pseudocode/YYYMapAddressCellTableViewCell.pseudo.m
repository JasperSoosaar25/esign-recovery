/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMapAddressCellTableViewCell | class address: 0x100c7d728
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMapAddressCellTableViewCell initWithStyle:reuseIdentifier:] | 0x10014a448 | ABI @32@0:8q16@24 */

/* Address: 0x10014a448 | YYYMapAddressCellTableViewCell::YYYMapAddressCellTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMapAddressCellTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMapAddressCellTableViewCell::
   YYYMapAddressCellTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  objc_super oStack_40;
  
  oStack_40.super_class = &objc::class_t::YYYMapAddressCellTableViewCell;
  oStack_40.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&oStack_40,"initWithStyle:reuseIdentifier:",3,param_4);
  IVar2 = objc_stub::clearColor((ID)&_OBJC_CLASS___UIColor);
  objc_stub::setBackgroundColor_(IVar1,IVar2);
                    /* WARNING: Could not recover jumptable at 0x00010014a4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d12b28)();
  return IVar1;
}



/* -[YYYMapAddressCellTableViewCell awakeFromNib] | 0x10014a508 | ABI v16@0:8 */

/* Address: 0x10014a508 | YYYMapAddressCellTableViewCell::YYYMapAddressCellTableViewCell__instance__awakeFromNib | bytes: 36 */

/* Recovered runtime selector: -[YYYMapAddressCellTableViewCell awakeFromNib]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapAddressCellTableViewCell::YYYMapAddressCellTableViewCell__instance__awakeFromNib
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010014a528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d12b48)();
  return;
}



/* -[YYYMapAddressCellTableViewCell setSelected:animated:] | 0x10014a588 | ABI v24@0:8B16B20 */

/* Address: 0x10014a588 | YYYMapAddressCellTableViewCell::YYYMapAddressCellTableViewCell__instance__setSelected_animated_ | bytes: 60 */

/* Recovered runtime selector: -[YYYMapAddressCellTableViewCell setSelected:animated:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMapAddressCellTableViewCell::YYYMapAddressCellTableViewCell__instance__setSelected_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  objc_super oStack_20;
  
  oStack_20.super_class = &objc::class_t::YYYMapAddressCellTableViewCell;
  oStack_20.receiver = param_1;
  _objc_msgSendSuper2(&oStack_20,"setSelected:animated:",(ulong)param_3,(ulong)param_4);
                    /* WARNING: Could not recover jumptable at 0x00010014a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d12b70)();
  return;
}


