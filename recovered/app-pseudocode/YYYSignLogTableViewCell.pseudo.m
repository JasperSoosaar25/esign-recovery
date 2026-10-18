/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSignLogTableViewCell | class address: 0x100c7ffb0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSignLogTableViewCell initWithStyle:reuseIdentifier:] | 0x10028a1dc | ABI @32@0:8q16@24 */

/* Address: 0x10028a1dc | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 44 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010028a204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d7bce8)();
  return IVar1;
}



/* -[YYYSignLogTableViewCell initViews] | 0x10028a3b0 | ABI v16@0:8 */

/* Address: 0x10028a3b0 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__initViews | bytes: 68 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell initViews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__initViews(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___UILabel);
  objc_stub::setTitleLabel_(param_1,IVar1);
                    /* WARNING: Could not recover jumptable at 0x00010028a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d7bde8)();
  return;
}



/* -[YYYSignLogTableViewCell layoutSubviews] | 0x10028a58c | ABI v16@0:8 */

/* Address: 0x10028a58c | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__layoutSubviews | bytes: 48 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__layoutSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010028a5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d7be30)();
  return;
}



/* -[YYYSignLogTableViewCell yyy_setupViewsConstraints] | 0x10028a710 | ABI v16@0:8 */

/* Address: 0x10028a710 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__yyy_setupViewsConstraints | bytes: 48 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010028a73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d7be80)();
  return;
}



/* -[YYYSignLogTableViewCell sizeThatFits:] | 0x10028bdd8 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x10028bdd8 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__sizeThatFits_ | bytes: 44 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x00010028be00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100d7c6c8)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYSignLogTableViewCell titleLabel] | 0x10028bedc | ABI @16@0:8 */

/* Address: 0x10028bedc | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__titleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010028beec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d7c728)((long)_titleLabel);
  return IVar1;
}



/* -[YYYSignLogTableViewCell setTitleLabel:] | 0x10028bef8 | ABI v24@0:8@16 */

/* Address: 0x10028bef8 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010028bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d7c738)((long)_titleLabel);
  return;
}



/* -[YYYSignLogTableViewCell .cxx_destruct] | 0x10028bf68 | ABI v16@0:8 */

/* Address: 0x10028bf68 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance___cxx_destruct | bytes: 12 */

/* Recovered runtime selector: -[YYYSignLogTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignLogTableViewCell::YYYSignLogTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010028bf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d7c778)();
  return;
}



/* +[YYYSignLogTableViewCell requiresConstraintBasedLayout] | 0x10028beb0 | ABI B16@0:8 */

/* Address: 0x10028beb0 | YYYSignLogTableViewCell::YYYSignLogTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYSignLogTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYSignLogTableViewCell::YYYSignLogTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010028beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d7c6f8)((int)param_1);
  return bVar1;
}


