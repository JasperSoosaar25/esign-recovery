/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYAppSourceInfoTableViewCell | class address: 0x100c7b448
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYAppSourceInfoTableViewCell initWithStyle:reuseIdentifier:] | 0x100028b08 | ABI @32@0:8q16@24 */

/* Address: 0x100028b08 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 48 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppSourceInfoTableViewCell::
   YYYAppSourceInfoTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100028b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cacdc0)();
  return IVar1;
}



/* -[YYYAppSourceInfoTableViewCell prepareForReuse] | 0x100028c88 | ABI v16@0:8 */

/* Address: 0x100028c88 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__prepareForReuse | bytes: 36 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell prepareForReuse]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__prepareForReuse
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100028ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cace90)();
  return;
}



/* -[YYYAppSourceInfoTableViewCell loadSubviews] | 0x100028d1c | ABI v16@0:8 */

/* Address: 0x100028d1c | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__loadSubviews | bytes: 128 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__loadSubviews
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = FUN_10002be84(&_OBJC_CLASS___UILabel);
  objc_stub::setTitleLabel_(param_1,uVar1);
  objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___UIFont,0x402e000000000000);
  IVar2 = objc_stub::titleLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100028d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cacec8)(IVar2);
  return;
}



/* -[YYYAppSourceInfoTableViewCell yyy_setupViewsConstraints] | 0x1000292b8 | ABI v16@0:8 */

/* Address: 0x1000292b8 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__yyy_setupViewsConstraints | bytes: 144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::
     YYYAppSourceInfoTableViewCell__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super oStack_70;
  
  oStack_70.super_class = &objc::class_t::YYYAppSourceInfoTableViewCell;
  oStack_70.receiver = param_1;
  _objc_msgSendSuper2(&oStack_70,"yyy_setupViewsConstraints");
  IVar1 = objc_stub::titleLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100029344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cacf00)(IVar1);
  return;
}



/* -[YYYAppSourceInfoTableViewCell sizeThatFits:] | 0x10002bbc8 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x10002bbc8 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__sizeThatFits_ | bytes: 20 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x00010002bbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100cad928)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYAppSourceInfoTableViewCell titleLabel] | 0x10002bbf4 | ABI @16@0:8 */

/* Address: 0x10002bbf4 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__titleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__titleLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010002bc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cad948)((long)_titleLabel);
  return IVar1;
}



/* -[YYYAppSourceInfoTableViewCell setTitleLabel:] | 0x10002bc1c | ABI v24@0:8@16 */

/* Address: 0x10002bc1c | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setTitleLabel_ | bytes: 28 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010002bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cad968)();
  return;
}



/* -[YYYAppSourceInfoTableViewCell urlLabel] | 0x10002bc60 | ABI @16@0:8 */

/* Address: 0x10002bc60 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__urlLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell urlLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__urlLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010002bc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cad978)((long)_urlLabel);
  return IVar1;
}



/* -[YYYAppSourceInfoTableViewCell setUrlLabel:] | 0x10002bc88 | ABI v24@0:8@16 */

/* Address: 0x10002bc88 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setUrlLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell setUrlLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setUrlLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010002bca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cad998)();
  return;
}



/* -[YYYAppSourceInfoTableViewCell tagLabel] | 0x10002bd00 | ABI @16@0:8 */

/* Address: 0x10002bd00 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__tagLabel | bytes: 24 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell tagLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__tagLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010002bd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cad9d0)(*(undefined8 *)(param_1 + (long)_tagLabel));
  return IVar1;
}



/* -[YYYAppSourceInfoTableViewCell setTagLabel:] | 0x10002bd1c | ABI v24@0:8@16 */

/* Address: 0x10002bd1c | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setTagLabel_ | bytes: 40 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell setTagLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance__setTagLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010002bd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cad9e0)();
  return;
}



/* -[YYYAppSourceInfoTableViewCell .cxx_destruct] | 0x10002bdc0 | ABI v16@0:8 */

/* Address: 0x10002bdc0 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYAppSourceInfoTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010002bde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cada30)();
  return;
}



/* +[YYYAppSourceInfoTableViewCell requiresConstraintBasedLayout] | 0x10002bba8 | ABI B16@0:8 */

/* Address: 0x10002bba8 | YYYAppSourceInfoTableViewCell::YYYAppSourceInfoTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYAppSourceInfoTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYAppSourceInfoTableViewCell::
     YYYAppSourceInfoTableViewCell__class__requiresConstraintBasedLayout(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010002bbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cad908)((int)param_1);
  return bVar1;
}


