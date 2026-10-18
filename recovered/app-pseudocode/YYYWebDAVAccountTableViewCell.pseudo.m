/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWebDAVAccountTableViewCell | class address: 0x100c80370
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWebDAVAccountTableViewCell initWithStyle:reuseIdentifier:] | 0x1002fa158 | ABI @32@0:8q16@24 */

/* Address: 0x1002fa158 | YYYWebDAVAccountTableViewCell::YYYWebDAVAccountTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 96 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYWebDAVAccountTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVAccountTableViewCell::
   YYYWebDAVAccountTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  objc_super oStack_50;
  
  oStack_50.super_class = &objc::class_t::YYYWebDAVAccountTableViewCell;
  oStack_50.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&oStack_50,"initWithStyle:reuseIdentifier:",3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001002fa1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da0938)(IVar1);
  return IVar1;
}


