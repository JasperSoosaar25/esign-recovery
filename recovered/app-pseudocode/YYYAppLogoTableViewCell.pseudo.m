/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYAppLogoTableViewCell | class address: 0x100c821d0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYAppLogoTableViewCell initWithStyle:reuseIdentifier:] | 0x100402f4c | ABI @32@0:8q16@24 */

/* Address: 0x100402f4c | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 52 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100402f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dfa160)();
  return IVar1;
}



/* -[YYYAppLogoTableViewCell initSubViews] | 0x1004030f0 | ABI v16@0:8 */

/* Address: 0x1004030f0 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__initSubViews | bytes: 52 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell initSubViews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__initSubViews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100403120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dfa220)();
  return;
}



/* -[YYYAppLogoTableViewCell yyy_setupViewsConstraints] | 0x10040366c | ABI v16@0:8 */

/* Address: 0x10040366c | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__yyy_setupViewsConstraints | bytes: 52 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010040369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dfa280)();
  return;
}



/* -[YYYAppLogoTableViewCell sizeThatFits:] | 0x1004055e8 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x1004055e8 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__sizeThatFits_ | bytes: 28 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x000100405600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100dfac38)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYAppLogoTableViewCell titleLabel] | 0x100405698 | ABI @16@0:8 */

/* Address: 0x100405698 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__titleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001004056a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dfacb0)((long)_titleLabel);
  return IVar1;
}



/* -[YYYAppLogoTableViewCell setTitleLabel:] | 0x1004056cc | ABI v24@0:8@16 */

/* Address: 0x1004056cc | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__setTitleLabel_ | bytes: 28 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001004056e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dface0)();
  return;
}



/* -[YYYAppLogoTableViewCell logoImageView] | 0x10040573c | ABI @16@0:8 */

/* Address: 0x10040573c | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__logoImageView | bytes: 12 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell logoImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__logoImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100405744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dfad28)();
  return IVar1;
}



/* -[YYYAppLogoTableViewCell setLogoImageView:] | 0x100405764 | ABI v24@0:8@16 */

/* Address: 0x100405764 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__setLogoImageView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell setLogoImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance__setLogoImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100405784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dfad48)();
  return;
}



/* -[YYYAppLogoTableViewCell .cxx_destruct] | 0x1004057e0 | ABI v16@0:8 */

/* Address: 0x1004057e0 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYAppLogoTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004057f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dfad88)();
  return;
}



/* +[YYYAppLogoTableViewCell requiresConstraintBasedLayout] | 0x100405678 | ABI B16@0:8 */

/* Address: 0x100405678 | YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYAppLogoTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYAppLogoTableViewCell::YYYAppLogoTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100405680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dfac90)((int)param_1);
  return bVar1;
}


