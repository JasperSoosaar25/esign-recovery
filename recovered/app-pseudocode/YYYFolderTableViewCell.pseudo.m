/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFolderTableViewCell | class address: 0x100c7fc90
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFolderTableViewCell initWithStyle:reuseIdentifier:] | 0x10027ad90 | ABI @32@0:8q16@24 */

/* Address: 0x10027ad90 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFolderTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFolderTableViewCell::YYYFolderTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027adc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d766a8)();
  return IVar1;
}



/* -[YYYFolderTableViewCell loadSubviews] | 0x10027af7c | ABI v16@0:8 */

/* Address: 0x10027af7c | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__loadSubviews | bytes: 48 */

/* Recovered runtime selector: -[YYYFolderTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFolderTableViewCell::YYYFolderTableViewCell__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010027afa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d767a0)();
  return;
}



/* -[YYYFolderTableViewCell yyy_setupViewsConstraints] | 0x10027b454 | ABI v16@0:8 */

/* Address: 0x10027b454 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__yyy_setupViewsConstraints | bytes: 148 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFolderTableViewCell yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFolderTableViewCell::YYYFolderTableViewCell__instance__yyy_setupViewsConstraints
               (ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super oStack_60;
  
  oStack_60.super_class = &objc::class_t::YYYFolderTableViewCell;
  oStack_60.receiver = param_1;
  _objc_msgSendSuper2(&oStack_60,"yyy_setupViewsConstraints");
  IVar1 = objc_stub::iconImageView(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010027b4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d76860)(IVar1);
  return;
}



/* -[YYYFolderTableViewCell titleLabel] | 0x10027dbe0 | ABI @16@0:8 */

/* Address: 0x10027dbe0 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__titleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYFolderTableViewCell titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFolderTableViewCell::YYYFolderTableViewCell__instance__titleLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027dbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d772a0)();
  return IVar1;
}



/* -[YYYFolderTableViewCell setTitleLabel:] | 0x10027dc08 | ABI v24@0:8@16 */

/* Address: 0x10027dc08 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__setTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFolderTableViewCell setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFolderTableViewCell::YYYFolderTableViewCell__instance__setTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010027dc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d772b8)();
  return;
}



/* -[YYYFolderTableViewCell iconImageView] | 0x10027dc78 | ABI @16@0:8 */

/* Address: 0x10027dc78 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__iconImageView | bytes: 16 */

/* Recovered runtime selector: -[YYYFolderTableViewCell iconImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFolderTableViewCell::YYYFolderTableViewCell__instance__iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_iconImageView);
}



/* -[YYYFolderTableViewCell setIconImageView:] | 0x10027dc88 | ABI v24@0:8@16 */

/* Address: 0x10027dc88 | YYYFolderTableViewCell::YYYFolderTableViewCell__instance__setIconImageView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYFolderTableViewCell setIconImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFolderTableViewCell::YYYFolderTableViewCell__instance__setIconImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010027dca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d772e8)();
  return;
}



/* -[YYYFolderTableViewCell .cxx_destruct] | 0x10027dcec | ABI v16@0:8 */

/* Address: 0x10027dcec | YYYFolderTableViewCell::YYYFolderTableViewCell__instance___cxx_destruct | bytes: 68 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYFolderTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFolderTableViewCell::YYYFolderTableViewCell__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_iconImageView) = 0;
  *(undefined8 *)(param_1 + (long)_titleLabel) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010027dd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d77318)();
  return;
}



/* +[YYYFolderTableViewCell heightWithTilte:] | 0x10027da24 | ABI d24@0:8@16 */

/* Address: 0x10027da24 | YYYFolderTableViewCell::YYYFolderTableViewCell__class__heightWithTilte_ | bytes: 32 */

/* Recovered runtime selector: +[YYYFolderTableViewCell heightWithTilte:]
   Original ABI encoding: d24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYFolderTableViewCell::YYYFolderTableViewCell__class__heightWithTilte_
                 (ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027da40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d771b0)();
  return dVar1;
}



/* +[YYYFolderTableViewCell requiresConstraintBasedLayout] | 0x10027dbc0 | ABI B16@0:8 */

/* Address: 0x10027dbc0 | YYYFolderTableViewCell::YYYFolderTableViewCell__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYFolderTableViewCell requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFolderTableViewCell::YYYFolderTableViewCell__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027dbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d77280)((int)param_1);
  return bVar1;
}


