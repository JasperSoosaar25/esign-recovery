/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYAppDetailView | class address: 0x100c7f970
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYAppDetailView initWithFrame:] | 0x100248b74 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x100248b74 | YYYAppDetailView::YYYAppDetailView__instance__initWithFrame_ | bytes: 64 */

/* Recovered runtime selector: -[YYYAppDetailView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100248bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d66de0)
                    (DAT_100e91bc0,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYAppDetailView gestureRecognizer:shouldReceiveTouch:] | 0x1002491a0 | ABI B32@0:8@16@24 */

/* Address: 0x1002491a0 | YYYAppDetailView::YYYAppDetailView__instance__gestureRecognizer_shouldReceiveTouch_ | bytes: 40 */

/* Recovered runtime selector: -[YYYAppDetailView gestureRecognizer:shouldReceiveTouch:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYAppDetailView::YYYAppDetailView__instance__gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002491c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d66ed8)((int)param_1);
  return bVar1;
}



/* -[YYYAppDetailView numberOfSectionsInTableView:] | 0x1002492e0 | ABI q24@0:8@16 */

/* Address: 0x1002492e0 | YYYAppDetailView::YYYAppDetailView__instance__numberOfSectionsInTableView_ | bytes: 64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAppDetailView numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYAppDetailView::YYYAppDetailView__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long_long lVar2;
  
  IVar1 = objc_stub::keys(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010024931c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar2 = (*DAT_100d66f40)(IVar1);
  return lVar2;
}



/* -[YYYAppDetailView tableView:numberOfRowsInSection:] | 0x100249374 | ABI q32@0:8@16q24 */

/* Address: 0x100249374 | YYYAppDetailView::YYYAppDetailView__instance__tableView_numberOfRowsInSection_ | bytes: 36 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAppDetailView tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYAppDetailView::YYYAppDetailView__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100249394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d66f68)(param_3);
  return lVar1;
}



/* -[YYYAppDetailView tableView:cellForRowAtIndexPath:] | 0x1002493d0 | ABI @32@0:8@16@24 */

/* Address: 0x1002493d0 | YYYAppDetailView::YYYAppDetailView__instance__tableView_cellForRowAtIndexPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYAppDetailView tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100249408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d66f90)();
  return IVar1;
}



/* -[YYYAppDetailView tableView:viewForHeaderInSection:] | 0x1002499ac | ABI @32@0:8@16q24 */

/* Address: 0x1002499ac | YYYAppDetailView::YYYAppDetailView__instance__tableView_viewForHeaderInSection_ | bytes: 56 */

/* Recovered runtime selector: -[YYYAppDetailView tableView:viewForHeaderInSection:]
   Original ABI encoding: @32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__tableView_viewForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002499e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67050)();
  return IVar1;
}



/* -[YYYAppDetailView tableView:heightForRowAtIndexPath:] | 0x100249f78 | ABI d32@0:8@16@24 */

/* Address: 0x100249f78 | YYYAppDetailView::YYYAppDetailView__instance__tableView_heightForRowAtIndexPath_ | bytes: 72 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAppDetailView tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYAppDetailView::YYYAppDetailView__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100249fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*DAT_100d67150)(param_4);
  return dVar1;
}



/* -[YYYAppDetailView closeHandle] | 0x10024a138 | ABI v16@0:8 */

/* Address: 0x10024a138 | YYYAppDetailView::YYYAppDetailView__instance__closeHandle | bytes: 84 */

/* Recovered runtime selector: -[YYYAppDetailView closeHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__closeHandle(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67190)();
  return;
}



/* -[YYYAppDetailView layoutSubviews] | 0x10024a2f4 | ABI v16@0:8 */

/* Address: 0x10024a2f4 | YYYAppDetailView::YYYAppDetailView__instance__layoutSubviews | bytes: 60 */

/* Recovered runtime selector: -[YYYAppDetailView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024a32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67238)();
  return;
}



/* -[YYYAppDetailView loadSubviews] | 0x10024a6bc | ABI v16@0:8 */

/* Address: 0x10024a6bc | YYYAppDetailView::YYYAppDetailView__instance__loadSubviews | bytes: 60 */

/* Recovered runtime selector: -[YYYAppDetailView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024a6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67298)(0x100e91bcc);
  return;
}



/* -[YYYAppDetailView setInfo:] | 0x10024b320 | ABI v24@0:8@16 */

/* Address: 0x10024b320 | YYYAppDetailView::YYYAppDetailView__instance__setInfo_ | bytes: 80 */

/* Recovered runtime selector: -[YYYAppDetailView setInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setInfo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67368)(0x100e91bd0);
  return;
}



/* -[YYYAppDetailView contentView] | 0x10024c358 | ABI @16@0:8 */

/* Address: 0x10024c358 | YYYAppDetailView::YYYAppDetailView__instance__contentView | bytes: 20 */

/* Recovered runtime selector: -[YYYAppDetailView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67770)((long)_contentView);
  return IVar1;
}



/* -[YYYAppDetailView setContentView:] | 0x10024c380 | ABI v24@0:8@16 */

/* Address: 0x10024c380 | YYYAppDetailView::YYYAppDetailView__instance__setContentView_ | bytes: 32 */

/* Recovered runtime selector: -[YYYAppDetailView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67798)();
  return;
}



/* -[YYYAppDetailView logoImage] | 0x10024c3f0 | ABI @16@0:8 */

/* Address: 0x10024c3f0 | YYYAppDetailView::YYYAppDetailView__instance__logoImage | bytes: 20 */

/* Recovered runtime selector: -[YYYAppDetailView logoImage]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__logoImage(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d677c0)((long)_logoImage);
  return IVar1;
}



/* -[YYYAppDetailView setLogoImage:] | 0x10024c418 | ABI v24@0:8@16 */

/* Address: 0x10024c418 | YYYAppDetailView::YYYAppDetailView__instance__setLogoImage_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAppDetailView setLogoImage:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setLogoImage_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d677e0)();
  return;
}



/* -[YYYAppDetailView tableView] | 0x10024c488 | ABI @16@0:8 */

/* Address: 0x10024c488 | YYYAppDetailView::YYYAppDetailView__instance__tableView | bytes: 24 */

/* Recovered runtime selector: -[YYYAppDetailView tableView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__tableView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67818)(*(undefined8 *)(param_1 + (long)_tableView));
  return IVar1;
}



/* -[YYYAppDetailView setTableView:] | 0x10024c4b0 | ABI v24@0:8@16 */

/* Address: 0x10024c4b0 | YYYAppDetailView::YYYAppDetailView__instance__setTableView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAppDetailView setTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setTableView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67838)((long)_tableView);
  return;
}



/* -[YYYAppDetailView nameLabel] | 0x10024c514 | ABI @16@0:8 */

/* Address: 0x10024c514 | YYYAppDetailView::YYYAppDetailView__instance__nameLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYAppDetailView nameLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__nameLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67860)();
  return IVar1;
}



/* -[YYYAppDetailView setNameLabel:] | 0x10024c530 | ABI v24@0:8@16 */

/* Address: 0x10024c530 | YYYAppDetailView::YYYAppDetailView__instance__setNameLabel_ | bytes: 16 */

/* Recovered runtime selector: -[YYYAppDetailView setNameLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setNameLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67870)(param_1,param_3);
  return;
}



/* -[YYYAppDetailView closeButton] | 0x10024c55c | ABI @16@0:8 */

/* Address: 0x10024c55c | YYYAppDetailView::YYYAppDetailView__instance__closeButton | bytes: 12 */

/* Recovered runtime selector: -[YYYAppDetailView closeButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__closeButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67898)();
  return IVar1;
}



/* -[YYYAppDetailView setCloseButton:] | 0x10024c590 | ABI v24@0:8@16 */

/* Address: 0x10024c590 | YYYAppDetailView::YYYAppDetailView__instance__setCloseButton_ | bytes: 44 */

/* Recovered runtime selector: -[YYYAppDetailView setCloseButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setCloseButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d678c8)();
  return;
}



/* -[YYYAppDetailView keys] | 0x10024c5fc | ABI @16@0:8 */

/* Address: 0x10024c5fc | YYYAppDetailView::YYYAppDetailView__instance__keys | bytes: 20 */

/* Recovered runtime selector: -[YYYAppDetailView keys]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__keys(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d678f0)((long)_keys);
  return IVar1;
}



/* -[YYYAppDetailView setKeys:] | 0x10024c630 | ABI v24@0:8@16 */

/* Address: 0x10024c630 | YYYAppDetailView::YYYAppDetailView__instance__setKeys_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAppDetailView setKeys:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setKeys_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67920)();
  return;
}



/* -[YYYAppDetailView info] | 0x10024c6c8 | ABI @16@0:8 */

/* Address: 0x10024c6c8 | YYYAppDetailView::YYYAppDetailView__instance__info | bytes: 20 */

/* Recovered runtime selector: -[YYYAppDetailView info]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAppDetailView::YYYAppDetailView__instance__info(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d67970)((long)_info);
  return IVar1;
}



/* -[YYYAppDetailView tableViewHeight] | 0x10024c6f0 | ABI d16@0:8 */

/* Address: 0x10024c6f0 | YYYAppDetailView::YYYAppDetailView__instance__tableViewHeight | bytes: 20 */

/* Recovered runtime selector: -[YYYAppDetailView tableViewHeight]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYAppDetailView::YYYAppDetailView__instance__tableViewHeight(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024c700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d67990)((long)_tableViewHeight);
  return dVar1;
}



/* -[YYYAppDetailView setTableViewHeight:] | 0x10024c724 | ABI v24@0:8d16 */

/* Address: 0x10024c724 | YYYAppDetailView::YYYAppDetailView__instance__setTableViewHeight_ | bytes: 12 */

/* Recovered runtime selector: -[YYYAppDetailView setTableViewHeight:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance__setTableViewHeight_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d679c0)();
  return;
}



/* -[YYYAppDetailView .cxx_destruct] | 0x10024c774 | ABI v16@0:8 */

/* Address: 0x10024c774 | YYYAppDetailView::YYYAppDetailView__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYAppDetailView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAppDetailView::YYYAppDetailView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024c798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d67a08)();
  return;
}



/* +[YYYAppDetailView requiresConstraintBasedLayout] | 0x10024b30c | ABI B16@0:8 */

/* Address: 0x10024b30c | YYYAppDetailView::YYYAppDetailView__class__requiresConstraintBasedLayout | bytes: 12 */

/* Recovered runtime selector: +[YYYAppDetailView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYAppDetailView::YYYAppDetailView__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010024b314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d67358)((int)param_1);
  return bVar1;
}


