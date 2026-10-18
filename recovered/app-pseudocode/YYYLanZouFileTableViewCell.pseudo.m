/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLanZouFileTableViewCell | class address: 0x100c7a360
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYLanZouFileTableViewCell initWithStyle:reuseIdentifier:] | 0x100010830 | ABI @32@0:8q16@24 */

/* Address: 0x100010830 | YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 52 */

/* Recovered runtime selector: -[YYYLanZouFileTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100010860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ca5848)();
  return IVar1;
}



/* -[YYYLanZouFileTableViewCell awakeFromNib] | 0x100010998 | ABI v16@0:8 */

/* Address: 0x100010998 | YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__awakeFromNib | bytes: 32 */

/* Recovered runtime selector: -[YYYLanZouFileTableViewCell awakeFromNib]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__awakeFromNib
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000109b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca5900)();
  return;
}



/* -[YYYLanZouFileTableViewCell setSelected:animated:] | 0x100010a28 | ABI v24@0:8B16B20 */

/* Address: 0x100010a28 | YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__setSelected_animated_ | bytes: 48 */

/* Recovered runtime selector: -[YYYLanZouFileTableViewCell setSelected:animated:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLanZouFileTableViewCell::YYYLanZouFileTableViewCell__instance__setSelected_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100010a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ca5948)(&PTR_CDLCSourceVersion_100c73000,param_1,param_2,param_3,param_4);
  return;
}


