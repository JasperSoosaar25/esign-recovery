/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYCertTableViewCell | class address: 0x100c81350
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYCertTableViewCell initWithStyle:reuseIdentifier:] | 0x100366510 | ABI @32@0:8q16@24 */

/* Address: 0x100366510 | YYYCertTableViewCell::YYYCertTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 44 */

/* Recovered runtime selector: -[YYYCertTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewCell::YYYCertTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100366538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc51f0)();
  return IVar1;
}



/* -[YYYCertTableViewCell layoutSubviews] | 0x100366684 | ABI v16@0:8 */

/* Address: 0x100366684 | YYYCertTableViewCell::YYYCertTableViewCell__instance__layoutSubviews | bytes: 56 */

/* Recovered runtime selector: -[YYYCertTableViewCell layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003666b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dc52b0)();
  return;
}



/* -[YYYCertTableViewCell setupInfo:] | 0x1003668bc | ABI v24@0:8@16 */

/* Address: 0x1003668bc | YYYCertTableViewCell::YYYCertTableViewCell__instance__setupInfo_ | bytes: 80 */

/* Recovered runtime selector: -[YYYCertTableViewCell setupInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__setupInfo_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100366908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc53e8)();
  return;
}



/* -[YYYCertTableViewCell loadSubviews] | 0x100367aac | ABI v16@0:8 */

/* Address: 0x100367aac | YYYCertTableViewCell::YYYCertTableViewCell__instance__loadSubviews | bytes: 52 */

/* Recovered runtime selector: -[YYYCertTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100367adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc58a8)();
  return;
}



/* -[YYYCertTableViewCell yyy_setupViewsConstraints] | 0x1003680e8 | ABI v16@0:8 */

/* Address: 0x1003680e8 | YYYCertTableViewCell::YYYCertTableViewCell__instance__yyy_setupViewsConstraints | bytes: 76 */

/* Recovered runtime selector: -[YYYCertTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100368130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc5908)();
  return;
}



/* -[YYYCertTableViewCell sizeThatFits:] | 0x10036a6bc | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x10036a6bc | YYYCertTableViewCell::YYYCertTableViewCell__instance__sizeThatFits_ | bytes: 44 */

/* Recovered runtime selector: -[YYYCertTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYCertTableViewCell::YYYCertTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x00010036a6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100dc62f0)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYCertTableViewCell nameLabel] | 0x10036a780 | ABI @16@0:8 */

/* Address: 0x10036a780 | YYYCertTableViewCell::YYYCertTableViewCell__instance__nameLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYCertTableViewCell nameLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewCell::YYYCertTableViewCell__instance__nameLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010036a788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc6340)();
  return IVar1;
}



/* -[YYYCertTableViewCell setNameLabel:] | 0x10036a7a8 | ABI v24@0:8@16 */

/* Address: 0x10036a7a8 | YYYCertTableViewCell::YYYCertTableViewCell__instance__setNameLabel_ | bytes: 20 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYCertTableViewCell setNameLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__setNameLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_nameLabel) = param_3;
  return;
}



/* -[YYYCertTableViewCell expireLabel] | 0x10036a7bc | ABI @16@0:8 */

/* Address: 0x10036a7bc | YYYCertTableViewCell::YYYCertTableViewCell__instance__expireLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYCertTableViewCell expireLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewCell::YYYCertTableViewCell__instance__expireLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010036a7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc6368)();
  return IVar1;
}



/* -[YYYCertTableViewCell setExpireLabel:] | 0x10036a7f0 | ABI v24@0:8@16 */

/* Address: 0x10036a7f0 | YYYCertTableViewCell::YYYCertTableViewCell__instance__setExpireLabel_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewCell setExpireLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__setExpireLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010036a808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc6398)();
  return;
}



/* -[YYYCertTableViewCell stateLabel] | 0x10036a854 | ABI @16@0:8 */

/* Address: 0x10036a854 | YYYCertTableViewCell::YYYCertTableViewCell__instance__stateLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYCertTableViewCell stateLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertTableViewCell::YYYCertTableViewCell__instance__stateLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010036a864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dc63c0)((long)_stateLabel);
  return IVar1;
}



/* -[YYYCertTableViewCell setStateLabel:] | 0x10036a870 | ABI v24@0:8@16 */

/* Address: 0x10036a870 | YYYCertTableViewCell::YYYCertTableViewCell__instance__setStateLabel_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertTableViewCell setStateLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance__setStateLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010036a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc63d8)();
  return;
}



/* -[YYYCertTableViewCell .cxx_destruct] | 0x10036a8e0 | ABI v16@0:8 */

/* Address: 0x10036a8e0 | YYYCertTableViewCell::YYYCertTableViewCell__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYCertTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertTableViewCell::YYYCertTableViewCell__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010036a8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dc6418)();
  return;
}



/* +[YYYCertTableViewCell requiresConstraintBasedLayout] | 0x10036a6a8 | ABI B16@0:8 */

/* Address: 0x10036a6a8 | YYYCertTableViewCell::YYYCertTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYCertTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYCertTableViewCell::YYYCertTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010036a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dc62e0)((int)param_1);
  return bVar1;
}


