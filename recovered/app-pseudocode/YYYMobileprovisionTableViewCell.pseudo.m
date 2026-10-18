/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMobileprovisionTableViewCell | class address: 0x100c7dbd8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMobileprovisionTableViewCell initWithStyle:reuseIdentifier:] | 0x1001765c8 | ABI @32@0:8q16@24 */

/* Address: 0x1001765c8 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 48 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionTableViewCell::
   YYYMobileprovisionTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001765f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d21728)();
  return IVar1;
}



/* -[YYYMobileprovisionTableViewCell prepareForReuse] | 0x100176750 | ABI v16@0:8 */

/* Address: 0x100176750 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__prepareForReuse | bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell prepareForReuse]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__prepareForReuse
               (ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super oStack_30;
  
  oStack_30.super_class = &objc::class_t::YYYMobileprovisionTableViewCell;
  oStack_30.receiver = param_1;
  _objc_msgSendSuper2(&oStack_30,"prepareForReuse");
  objc_stub::y_labelColor((ID)&_OBJC_CLASS___UIColor);
  IVar1 = objc_stub::valueLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001001767b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d217f8)(IVar1);
  return;
}



/* -[YYYMobileprovisionTableViewCell loadSubviews] | 0x10017680c | ABI v16@0:8 */

/* Address: 0x10017680c | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__loadSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100176834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d21818)();
  return;
}



/* -[YYYMobileprovisionTableViewCell yyy_setupViewsConstraints] | 0x100176cdc | ABI v16@0:8 */

/* Address: 0x100176cdc | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__yyy_setupViewsConstraints | bytes: 48 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::
     YYYMobileprovisionTableViewCell__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100176d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d21880)();
  return;
}



/* -[YYYMobileprovisionTableViewCell sizeThatFits:] | 0x100178a50 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x100178a50 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__sizeThatFits_ | bytes: 88 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  ID self;
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
  self = objc_stub::titleLabel(param_1,param_3.field0_0x0);
  objc_stub::setPreferredMaxLayoutWidth_(self,0x4056800000000000);
                    /* WARNING: Could not recover jumptable at 0x000100178aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100d22190)(0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYMobileprovisionTableViewCell titleLabel] | 0x100178b84 | ABI @16@0:8 */

/* Address: 0x100178b84 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__titleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__titleLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100178b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d221d0)();
  return IVar1;
}



/* -[YYYMobileprovisionTableViewCell setTitleLabel:] | 0x100178bbc | ABI v24@0:8@16 */

/* Address: 0x100178bbc | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100178bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d22200)();
  return;
}



/* -[YYYMobileprovisionTableViewCell valueLabel] | 0x100178c54 | ABI @16@0:8 */

/* Address: 0x100178c54 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__valueLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell valueLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__valueLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100178c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d22248)((long)_valueLabel);
  return IVar1;
}



/* -[YYYMobileprovisionTableViewCell setValueLabel:] | 0x100178c7c | ABI v24@0:8@16 */

/* Address: 0x100178c7c | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__setValueLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell setValueLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance__setValueLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100178c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d22270)((long)_valueLabel);
  return;
}



/* -[YYYMobileprovisionTableViewCell .cxx_destruct] | 0x100178cec | ABI v16@0:8 */

/* Address: 0x100178cec | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance___cxx_destruct | bytes: 36 */

/* Recovered runtime selector: -[YYYMobileprovisionTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100178d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d222a8)();
  return;
}



/* +[YYYMobileprovisionTableViewCell requiresConstraintBasedLayout] | 0x100178b64 | ABI B16@0:8 */

/* Address: 0x100178b64 | YYYMobileprovisionTableViewCell::YYYMobileprovisionTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYMobileprovisionTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYMobileprovisionTableViewCell::
     YYYMobileprovisionTableViewCell__class__requiresConstraintBasedLayout(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100178b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d221a8)((int)param_1);
  return bVar1;
}


