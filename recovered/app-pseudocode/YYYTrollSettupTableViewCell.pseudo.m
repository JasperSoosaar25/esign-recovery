/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTrollSettupTableViewCell | class address: 0x100c7dd18
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTrollSettupTableViewCell initWithStyle:reuseIdentifier:] | 0x10019f02c | ABI @32@0:8q16@24 */

/* Address: 0x10019f02c | YYYTrollSettupTableViewCell::YYYTrollSettupTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 96 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYTrollSettupTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollSettupTableViewCell::
   YYYTrollSettupTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  objc_super oStack_50;
  
  oStack_50.super_class = &objc::class_t::YYYTrollSettupTableViewCell;
  oStack_50.receiver = param_1;
  _objc_msgSendSuper2(&oStack_50,"initWithStyle:reuseIdentifier:",param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010019f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2c738)();
  return IVar1;
}


