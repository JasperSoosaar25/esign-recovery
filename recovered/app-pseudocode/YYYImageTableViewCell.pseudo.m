/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYImageTableViewCell | class address: 0x100c81f50
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYImageTableViewCell initWithStyle:reuseIdentifier:] | 0x1003f51c8 | ABI @32@0:8q16@24 */

/* Address: 0x1003f51c8 | YYYImageTableViewCell::YYYImageTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 64 */

/* Recovered runtime selector: -[YYYImageTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYImageTableViewCell::YYYImageTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f5204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df5780)();
  return IVar1;
}



/* -[YYYImageTableViewCell loadSubviews] | 0x1003f53a8 | ABI v16@0:8 */

/* Address: 0x1003f53a8 | YYYImageTableViewCell::YYYImageTableViewCell__instance__loadSubviews | bytes: 48 */

/* Recovered runtime selector: -[YYYImageTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYImageTableViewCell::YYYImageTableViewCell__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f53d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df5830)();
  return;
}



/* -[YYYImageTableViewCell yyy_setupViewsConstraints] | 0x1003f56c0 | ABI v16@0:8 */

/* Address: 0x1003f56c0 | YYYImageTableViewCell::YYYImageTableViewCell__instance__yyy_setupViewsConstraints | bytes: 72 */

/* Recovered runtime selector: -[YYYImageTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYImageTableViewCell::YYYImageTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f5704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df5890)();
  return;
}



/* -[YYYImageTableViewCell sizeThatFits:] | 0x1003f7900 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x1003f7900 | YYYImageTableViewCell::YYYImageTableViewCell__instance__sizeThatFits_ | bytes: 28 */

/* Recovered runtime selector: -[YYYImageTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYImageTableViewCell::YYYImageTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x0001003f7918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100df6208)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYImageTableViewCell titleLabel] | 0x1003f79a8 | ABI @16@0:8 */

/* Address: 0x1003f79a8 | YYYImageTableViewCell::YYYImageTableViewCell__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYImageTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYImageTableViewCell::YYYImageTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f79b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df6280)();
  return IVar1;
}



/* -[YYYImageTableViewCell setTitleLabel:] | 0x1003f79c4 | ABI v24@0:8@16 */

/* Address: 0x1003f79c4 | YYYImageTableViewCell::YYYImageTableViewCell__instance__setTitleLabel_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYImageTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYImageTableViewCell::YYYImageTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_titleLabel) = param_3;
  return;
}



/* -[YYYImageTableViewCell iconImageView] | 0x1003f79fc | ABI @16@0:8 */

/* Address: 0x1003f79fc | YYYImageTableViewCell::YYYImageTableViewCell__instance__iconImageView | bytes: 12 */

/* Recovered runtime selector: -[YYYImageTableViewCell iconImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYImageTableViewCell::YYYImageTableViewCell__instance__iconImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f7a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df6298)();
  return IVar1;
}



/* -[YYYImageTableViewCell setIconImageView:] | 0x1003f7a18 | ABI v24@0:8@16 */

/* Address: 0x1003f7a18 | YYYImageTableViewCell::YYYImageTableViewCell__instance__setIconImageView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYImageTableViewCell setIconImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYImageTableViewCell::YYYImageTableViewCell__instance__setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f7a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df62a0)();
  return;
}



/* -[YYYImageTableViewCell .cxx_destruct] | 0x1003f7abc | ABI v16@0:8 */

/* Address: 0x1003f7abc | YYYImageTableViewCell::YYYImageTableViewCell__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYImageTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYImageTableViewCell::YYYImageTableViewCell__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f7ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df62f0)();
  return;
}



/* +[YYYImageTableViewCell requiresConstraintBasedLayout] | 0x1003f7988 | ABI B16@0:8 */

/* Address: 0x1003f7988 | YYYImageTableViewCell::YYYImageTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYImageTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYImageTableViewCell::YYYImageTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f7990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100df6268)((int)param_1);
  return bVar1;
}


