/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTableViewCell | class address: 0x100c81eb0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTableViewCell initWithStyle:reuseIdentifier:] | 0x1003e9054 | ABI @32@0:8q16@24 */

/* Address: 0x1003e9054 | YYYTableViewCell::YYYTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 48 */

/* Recovered runtime selector: -[YYYTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewCell::YYYTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003e9080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df3dd0)();
  return IVar1;
}



/* -[YYYTableViewCell loadSubviews] | 0x1003e9204 | ABI v16@0:8 */

/* Address: 0x1003e9204 | YYYTableViewCell::YYYTableViewCell__instance__loadSubviews | bytes: 40 */

/* Recovered runtime selector: -[YYYTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewCell::YYYTableViewCell__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e9228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df3ea0)();
  return;
}



/* -[YYYTableViewCell yyy_setupViewsConstraints] | 0x1003e93e4 | ABI v16@0:8 */

/* Address: 0x1003e93e4 | YYYTableViewCell::YYYTableViewCell__instance__yyy_setupViewsConstraints | bytes: 68 */

/* Recovered runtime selector: -[YYYTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewCell::YYYTableViewCell__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
  objc_super oStack_50;
  
  oStack_50.super_class = &objc::class_t::YYYTableViewCell;
  oStack_50.receiver = param_1;
  _objc_msgSendSuper2(&oStack_50,"yyy_setupViewsConstraints");
                    /* WARNING: Could not recover jumptable at 0x0001003e9424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df3ee0)();
  return;
}



/* -[YYYTableViewCell titleLabel] | 0x1003eae8c | ABI @16@0:8 */

/* Address: 0x1003eae8c | YYYTableViewCell::YYYTableViewCell__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTableViewCell::YYYTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003eae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df4868)();
  return IVar1;
}



/* -[YYYTableViewCell setTitleLabel:] | 0x1003eaec0 | ABI v24@0:8@16 */

/* Address: 0x1003eaec0 | YYYTableViewCell::YYYTableViewCell__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewCell::YYYTableViewCell__instance__setTitleLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003eaee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df4898)();
  return;
}



/* -[YYYTableViewCell .cxx_destruct] | 0x1003eaf58 | ABI v16@0:8 */

/* Address: 0x1003eaf58 | YYYTableViewCell::YYYTableViewCell__instance___cxx_destruct | bytes: 12 */

/* Recovered runtime selector: -[YYYTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTableViewCell::YYYTableViewCell__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003eaf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df48e8)();
  return;
}



/* +[YYYTableViewCell heightWithTilte:] | 0x1003eacd4 | ABI d24@0:8@16 */

/* Address: 0x1003eacd4 | YYYTableViewCell::YYYTableViewCell__class__heightWithTilte_ | bytes: 32 */

/* Recovered runtime selector: +[YYYTableViewCell heightWithTilte:]
   Original ABI encoding: d24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYTableViewCell::YYYTableViewCell__class__heightWithTilte_
                 (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003eacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100df4760)();
  return dVar1;
}



/* +[YYYTableViewCell requiresConstraintBasedLayout] | 0x1003eae60 | ABI B16@0:8 */

/* Address: 0x1003eae60 | YYYTableViewCell::YYYTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTableViewCell::YYYTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003eae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100df4838)((int)param_1);
  return bVar1;
}


