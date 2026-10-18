/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSettingTableViewCell | class address: 0x100c7e830
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSettingTableViewCell initWithStyle:reuseIdentifier:] | 0x1001e9dbc | ABI @32@0:8q16@24 */

/* Address: 0x1001e9dbc | YYYSettingTableViewCell::YYYSettingTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 76 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSettingTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSettingTableViewCell::YYYSettingTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e9e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d47768)(param_4);
  return IVar1;
}



/* -[YYYSettingTableViewCell awakeFromNib] | 0x1001ea084 | ABI v16@0:8 */

/* Address: 0x1001ea084 | YYYSettingTableViewCell::YYYSettingTableViewCell__instance__awakeFromNib | bytes: 36 */

/* Recovered runtime selector: -[YYYSettingTableViewCell awakeFromNib]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewCell::YYYSettingTableViewCell__instance__awakeFromNib
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ea0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47828)(&objc::class_t::YYYSettingTableViewCell);
  return;
}



/* -[YYYSettingTableViewCell setSelected:animated:] | 0x1001ea0c8 | ABI v24@0:8B16B20 */

/* Address: 0x1001ea0c8 | YYYSettingTableViewCell::YYYSettingTableViewCell__instance__setSelected_animated_ | bytes: 56 */

/* Recovered runtime selector: -[YYYSettingTableViewCell setSelected:animated:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSettingTableViewCell::YYYSettingTableViewCell__instance__setSelected_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ea0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47838)(param_1,param_2,param_3,param_4);
  return;
}



/* -[YYYSettingTableViewCell sizeThatFits:] | 0x1001ea16c | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x1001ea16c | YYYSettingTableViewCell::YYYSettingTableViewCell__instance__sizeThatFits_ | bytes: 12 */

/* Recovered runtime selector: -[YYYSettingTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYSettingTableViewCell::YYYSettingTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x0001001ea174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100d47860)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}


