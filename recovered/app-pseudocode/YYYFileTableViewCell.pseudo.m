/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFileTableViewCell | class address: 0x100c7e8d0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFileTableViewCell initWithStyle:reuseIdentifier:] | 0x1001f6670 | ABI @32@0:8q16@24 */

/* Address: 0x1001f6670 | YYYFileTableViewCell::YYYFileTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileTableViewCell::YYYFileTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f66a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4acd0)();
  return IVar1;
}



/* -[YYYFileTableViewCell setupWithPath:] | 0x1001f6860 | ABI v24@0:8@16 */

/* Address: 0x1001f6860 | YYYFileTableViewCell::YYYFileTableViewCell__instance__setupWithPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileTableViewCell setupWithPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__setupWithPath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f6898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4ada8)(DAT_100e919c0);
  return;
}



/* -[YYYFileTableViewCell loadSubviews] | 0x1001f768c | ABI v16@0:8 */

/* Address: 0x1001f768c | YYYFileTableViewCell::YYYFileTableViewCell__instance__loadSubviews | bytes: 396 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__loadSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::new((ID)&_OBJC_CLASS___UIImageView);
  objc_stub::setIconImageView_(param_1,IVar1);
  IVar1 = objc_stub::contentView(param_1);
  IVar2 = objc_stub::iconImageView(param_1);
  objc_stub::addSubview_(IVar1,IVar2);
  uVar3 = FUN_1001fabb8(&_OBJC_CLASS___UILabel);
  objc_stub::setTitleLabel_(param_1,uVar3);
  IVar1 = objc_stub::qd_titleTextColor((ID)&_OBJC_CLASS___UIColor);
  IVar2 = objc_stub::titleLabel(param_1);
  objc_stub::setTextColor_(IVar2,IVar1);
  IVar1 = objc_stub::systemFontOfSize_((ID)&_OBJC_CLASS___UIFont,0x402e000000000000);
  IVar2 = objc_stub::titleLabel(param_1);
  objc_stub::setFont_(IVar2,IVar1);
  IVar1 = objc_stub::titleLabel(param_1);
  objc_stub::setNumberOfLines_(IVar1,0);
  objc_stub::contentView(param_1);
  IVar1 = objc_stub::titleLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001001f7814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4b140)(IVar1);
  return;
}



/* -[YYYFileTableViewCell yyy_setupViewsConstraints] | 0x1001f7a58 | ABI v16@0:8 */

/* Address: 0x1001f7a58 | YYYFileTableViewCell::YYYFileTableViewCell__instance__yyy_setupViewsConstraints | bytes: 264 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFileTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ID IStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  ID IStack_58;
  objc_super oStack_50;
  
  oStack_50.super_class = &objc::class_t::YYYFileTableViewCell;
  oStack_50.receiver = param_1;
  _objc_msgSendSuper2(&oStack_50,"yyy_setupViewsConstraints");
  IVar2 = objc_stub::iconImageView(param_1);
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_78 = PTR___NSConcreteStackBlock_100afc560;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1001f7bd8;
  puStack_60 = &DAT_100afeb38;
  IStack_58 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_78);
  IVar2 = objc_stub::titleLabel(param_1);
  puStack_a0 = puVar1;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1001f98f8;
  puStack_88 = &DAT_100afeb38;
  IStack_80 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_a0);
  IVar2 = objc_stub::subTitleLabel(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001001f7b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4b180)(IVar2);
  return;
}



/* -[YYYFileTableViewCell sizeThatFits:] | 0x1001fa748 | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x1001fa748 | YYYFileTableViewCell::YYYFileTableViewCell__instance__sizeThatFits_ | bytes: 48 */

/* Recovered runtime selector: -[YYYFileTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYFileTableViewCell::YYYFileTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  double dVar1;
  CGSize CVar2;
  
  dVar1 = param_3.field1_0x8;
                    /* WARNING: Could not recover jumptable at 0x0001001fa774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar2.field0_0x0 = (double)(*(code *)PTR_LAB_100d4bc98)(param_3.field0_0x0);
  CVar2.field1_0x8 = dVar1;
  return CVar2;
}



/* -[YYYFileTableViewCell titleLabel] | 0x1001fa8d4 | ABI @16@0:8 */

/* Address: 0x1001fa8d4 | YYYFileTableViewCell::YYYFileTableViewCell__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYFileTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileTableViewCell::YYYFileTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001fa8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4bd20)();
  return IVar1;
}



/* -[YYYFileTableViewCell setTitleLabel:] | 0x1001fa908 | ABI v24@0:8@16 */

/* Address: 0x1001fa908 | YYYFileTableViewCell::YYYFileTableViewCell__instance__setTitleLabel_ | bytes: 32 */

/* Recovered runtime selector: -[YYYFileTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001fa924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4bd50)();
  return;
}



/* -[YYYFileTableViewCell subTitleLabel] | 0x1001fa978 | ABI @16@0:8 */

/* Address: 0x1001fa978 | YYYFileTableViewCell::YYYFileTableViewCell__instance__subTitleLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYFileTableViewCell subTitleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileTableViewCell::YYYFileTableViewCell__instance__subTitleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001fa988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4bd78)((long)_subTitleLabel);
  return IVar1;
}



/* -[YYYFileTableViewCell setSubTitleLabel:] | 0x1001fa9a0 | ABI v24@0:8@16 */

/* Address: 0x1001fa9a0 | YYYFileTableViewCell::YYYFileTableViewCell__instance__setSubTitleLabel_ | bytes: 40 */

/* Recovered runtime selector: -[YYYFileTableViewCell setSubTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__setSubTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001fa9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4bda0)();
  return;
}



/* -[YYYFileTableViewCell iconImageView] | 0x1001faa10 | ABI @16@0:8 */

/* Address: 0x1001faa10 | YYYFileTableViewCell::YYYFileTableViewCell__instance__iconImageView | bytes: 12 */

/* Recovered runtime selector: -[YYYFileTableViewCell iconImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileTableViewCell::YYYFileTableViewCell__instance__iconImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001faa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4bdc8)();
  return IVar1;
}



/* -[YYYFileTableViewCell setIconImageView:] | 0x1001faa38 | ABI v24@0:8@16 */

/* Address: 0x1001faa38 | YYYFileTableViewCell::YYYFileTableViewCell__instance__setIconImageView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYFileTableViewCell setIconImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance__setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001faa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4bde8)();
  return;
}



/* -[YYYFileTableViewCell .cxx_destruct] | 0x1001faadc | ABI v16@0:8 */

/* Address: 0x1001faadc | YYYFileTableViewCell::YYYFileTableViewCell__instance___cxx_destruct | bytes: 56 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYFileTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileTableViewCell::YYYFileTableViewCell__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_iconImageView) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001001fab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4be40)((long)_subTitleLabel);
  return;
}



/* +[YYYFileTableViewCell requiresConstraintBasedLayout] | 0x1001fa8a8 | ABI B16@0:8 */

/* Address: 0x1001fa8a8 | YYYFileTableViewCell::YYYFileTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYFileTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFileTableViewCell::YYYFileTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001fa8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d4bcf0)((int)param_1);
  return bVar1;
}


