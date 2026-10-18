/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYVideoToolView | class address: 0x100c7e880
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYVideoToolView initWithFrame:] | 0x1001ea1e8 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1001ea1e8 | YYYVideoToolView::YYYVideoToolView__instance__initWithFrame_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001ea210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d47c38)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYVideoToolView gestureRecognizer:shouldReceiveTouch:] | 0x1001ea610 | ABI B32@0:8@16@24 */

/* Address: 0x1001ea610 | YYYVideoToolView::YYYVideoToolView__instance__gestureRecognizer_shouldReceiveTouch_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView gestureRecognizer:shouldReceiveTouch:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoToolView::YYYVideoToolView__instance__gestureRecognizer_shouldReceiveTouch_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001ea630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d47cd8)((int)param_1);
  return bVar1;
}



/* -[YYYVideoToolView gestureHandle:] | 0x1001ea70c | ABI v24@0:8@16 */

/* Address: 0x1001ea70c | YYYVideoToolView::YYYVideoToolView__instance__gestureHandle_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView gestureHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__gestureHandle_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ea734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47d38)();
  return;
}



/* -[YYYVideoToolView doubleGestureHandle] | 0x1001eabf8 | ABI v16@0:8 */

/* Address: 0x1001eabf8 | YYYVideoToolView::YYYVideoToolView__instance__doubleGestureHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView doubleGestureHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID __objc_msgSend_stub
YYYVideoToolView::YYYVideoToolView__instance__doubleGestureHandle(ID self,...)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001eac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d47fc8)();
  return IVar1;
}



/* -[YYYVideoToolView tapHandle] | 0x1001eac08 | ABI v16@0:8 */

/* Address: 0x1001eac08 | YYYVideoToolView::YYYVideoToolView__instance__tapHandle | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView tapHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__tapHandle(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47fd8)();
  return;
}



/* -[YYYVideoToolView hiddenTool] | 0x1001eac74 | ABI v16@0:8 */

/* Address: 0x1001eac74 | YYYVideoToolView::YYYVideoToolView__instance__hiddenTool | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView hiddenTool]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__hiddenTool(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eac7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48000)();
  return;
}



/* -[YYYVideoToolView cancelAutoHidden] | 0x1001eac8c | ABI v16@0:8 */

/* Address: 0x1001eac8c | YYYVideoToolView::YYYVideoToolView__instance__cancelAutoHidden | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView cancelAutoHidden]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__cancelAutoHidden(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eacb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48010)();
  return;
}



/* -[YYYVideoToolView autoHidden] | 0x1001eacfc | ABI v16@0:8 */

/* Address: 0x1001eacfc | YYYVideoToolView::YYYVideoToolView__instance__autoHidden | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView autoHidden]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__autoHidden(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ead14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48038)();
  return;
}



/* -[YYYVideoToolView setShow:animation:] | 0x1001eadac | ABI v24@0:8B16B20 */

/* Address: 0x1001eadac | YYYVideoToolView::YYYVideoToolView__instance__setShow_animation_ | bytes: 56 */

/* Recovered runtime selector: -[YYYVideoToolView setShow:animation:]
   Original ABI encoding: v24@0:8B16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setShow_animation_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eade0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48090)(param_1,param_2,param_3,param_4);
  return;
}



/* -[YYYVideoToolView changeTopAndBottomViewConstraint] | 0x1001eb16c | ABI v16@0:8 */

/* Address: 0x1001eb16c | YYYVideoToolView::YYYVideoToolView__instance__changeTopAndBottomViewConstraint | bytes: 40 */

/* Recovered runtime selector: -[YYYVideoToolView changeTopAndBottomViewConstraint]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__changeTopAndBottomViewConstraint
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eb190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48218)();
  return;
}



/* -[YYYVideoToolView setLock:] | 0x1001eb3e8 | ABI v20@0:8B16 */

/* Address: 0x1001eb3e8 | YYYVideoToolView::YYYVideoToolView__instance__setLock_ | bytes: 52 */

/* Recovered runtime selector: -[YYYVideoToolView setLock:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setLock_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eb418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48398)(0x100e91964,param_1,param_2,param_3);
  return;
}



/* -[YYYVideoToolView setPlaying:] | 0x1001eb8b0 | ABI v20@0:8B16 */

/* Address: 0x1001eb8b0 | YYYVideoToolView::YYYVideoToolView__instance__setPlaying_ | bytes: 48 */

/* Recovered runtime selector: -[YYYVideoToolView setPlaying:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setPlaying_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001eb8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d484b8)(param_1,param_2,param_3);
  return;
}



/* -[YYYVideoToolView playImage] | 0x1001ebb70 | ABI @16@0:8 */

/* Address: 0x1001ebb70 | YYYVideoToolView::YYYVideoToolView__instance__playImage | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoToolView playImage]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__playImage(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001ebb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d486a0)();
  return IVar1;
}



/* -[YYYVideoToolView pauseImage] | 0x1001ebda0 | ABI @16@0:8 */

/* Address: 0x1001ebda0 | YYYVideoToolView::YYYVideoToolView__instance__pauseImage | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView pauseImage]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__pauseImage(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001ebdc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d487b8)();
  return IVar1;
}



/* -[YYYVideoToolView changeLockState] | 0x1001ebff4 | ABI v16@0:8 */

/* Address: 0x1001ebff4 | YYYVideoToolView::YYYVideoToolView__instance__changeLockState | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView changeLockState]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__changeLockState(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ec00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48890)();
  return;
}



/* -[YYYVideoToolView loadSubviews] | 0x1001ec068 | ABI v16@0:8 */

/* Address: 0x1001ec068 | YYYVideoToolView::YYYVideoToolView__instance__loadSubviews | bytes: 52 */

/* Recovered runtime selector: -[YYYVideoToolView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ec098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d488d0)();
  return;
}



/* -[YYYVideoToolView safeAreaInsetsDidChange] | 0x1001ed87c | ABI v16@0:8 */

/* Address: 0x1001ed87c | YYYVideoToolView::YYYVideoToolView__instance__safeAreaInsetsDidChange | bytes: 76 */

/* Recovered runtime selector: -[YYYVideoToolView safeAreaInsetsDidChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__safeAreaInsetsDidChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ed8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d48a18)();
  return;
}



/* -[YYYVideoToolView yyy_setupViewsConstraints] | 0x1001ef47c | ABI v16@0:8 */

/* Address: 0x1001ef47c | YYYVideoToolView::YYYVideoToolView__instance__yyy_setupViewsConstraints | bytes: 880 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoToolView yyy_setupViewsConstraints]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__yyy_setupViewsConstraints(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  ID IStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1c0;
  ID IStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  ID IStack_190;
  ID IStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  ID IStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  ID IStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  ID IStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ID IStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ID IStack_c0;
  ID IStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ID IStack_90;
  objc_super oStack_88;
  
  oStack_88.super_class = &objc::class_t::YYYVideoToolView;
  oStack_88.receiver = param_1;
  _objc_msgSendSuper2(&oStack_88,"yyy_setupViewsConstraints");
  IVar2 = objc_stub::contentView(param_1);
  IVar3 = objc_stub::contentView(param_1);
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_b0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1001efb40;
  puStack_98 = &DAT_100afeb38;
  IStack_90 = param_1;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_b0);
  IVar3 = objc_stub::topView(param_1);
  puStack_e0 = puVar1;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1001f013c;
  puStack_c8 = &DAT_100b01a08;
  IStack_c0 = param_1;
  IStack_b8 = IVar2;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_e0);
  IVar3 = objc_stub::FUN_100976ec0(param_1);
  puStack_108 = puVar1;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1001f07e0;
  puStack_f0 = &DAT_100afeb38;
  IStack_e8 = param_1;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_108);
  IVar3 = objc_stub::backButton(param_1);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  pcStack_120 = FUN_1001f0ac8;
  puStack_118 = &DAT_100afeb38;
  IStack_110 = param_1;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_130);
  IVar3 = objc_stub::titleLabel(param_1);
  puStack_158 = puVar1;
  uStack_150 = 0xc2000000;
  pcStack_148 = FUN_1001f0e24;
  puStack_140 = &DAT_100afeb38;
  IStack_138 = param_1;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_158);
  IVar3 = objc_stub::lockButton(param_1);
  puStack_180 = puVar1;
  uStack_178 = 0xc2000000;
  pcStack_170 = FUN_1001f148c;
  puStack_168 = &DAT_100afeb38;
  IStack_160 = IVar2;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_180);
  IVar3 = objc_stub::bottomView(param_1);
  puStack_1b0 = puVar1;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_1001f1730;
  puStack_198 = &DAT_100b01a08;
  IStack_190 = IVar2;
  IStack_188 = param_1;
  objc_stub::mas_makeConstraints_(IVar3,&puStack_1b0);
  IVar2 = objc_stub::bottomMaskView(param_1);
  puStack_1d8 = puVar1;
  uStack_1d0 = 0xc2000000;
  pcStack_1c8 = FUN_1001f1e28;
  puStack_1c0 = &DAT_100afeb38;
  IStack_1b8 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_1d8);
  IVar2 = objc_stub::FUN_10093ef20(param_1);
  puStack_200 = puVar1;
  uStack_1f8 = 0xc2000000;
  pcStack_1f0 = FUN_1001f2220;
  puStack_1e8 = &DAT_100afeb38;
  IStack_1e0 = param_1;
  objc_stub::mas_makeConstraints_(IVar2,&puStack_200);
  IVar2 = objc_stub::sliderView(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001001ef7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d492c0)(IVar2);
  return;
}



/* -[YYYVideoToolView buttonWithImageName:] | 0x1001f4524 | ABI @24@0:8@16 */

/* Address: 0x1001f4524 | YYYVideoToolView::YYYVideoToolView__instance__buttonWithImageName_ | bytes: 140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoToolView buttonWithImageName:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__buttonWithImageName_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::buttonWithType_((ID)&_OBJC_CLASS___UIButton,0);
  IVar2 = objc_stub::imageNamed_((ID)&_OBJC_CLASS___UIImage,param_3);
  objc_stub::setImage_forState_(IVar1,IVar2,0);
                    /* WARNING: Could not recover jumptable at 0x0001001f45ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d49f18)(IVar1);
  return IVar1;
}



/* -[YYYVideoToolView volumeSlider] | 0x1001f45c8 | ABI @16@0:8 */

/* Address: 0x1001f45c8 | YYYVideoToolView::YYYVideoToolView__instance__volumeSlider | bytes: 76 */

/* Recovered runtime selector: -[YYYVideoToolView volumeSlider]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__volumeSlider(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d49f28)(0x100e919bc);
  return IVar1;
}



/* -[YYYVideoToolView tapGesture] | 0x1001f4c0c | ABI @16@0:8 */

/* Address: 0x1001f4c0c | YYYVideoToolView::YYYVideoToolView__instance__tapGesture | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView tapGesture]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__tapGesture(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a210)();
  return IVar1;
}



/* -[YYYVideoToolView setTapGesture:] | 0x1001f4c28 | ABI v24@0:8@16 */

/* Address: 0x1001f4c28 | YYYVideoToolView::YYYVideoToolView__instance__setTapGesture_ | bytes: 40 */

/* Recovered runtime selector: -[YYYVideoToolView setTapGesture:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTapGesture_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a228)();
  return;
}



/* -[YYYVideoToolView doubleGesture] | 0x1001f4ccc | ABI @16@0:8 */

/* Address: 0x1001f4ccc | YYYVideoToolView::YYYVideoToolView__instance__doubleGesture | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView doubleGesture]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__doubleGesture(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a278)((long)_doubleGesture);
  return IVar1;
}



/* -[YYYVideoToolView setDoubleGesture:] | 0x1001f4ce8 | ABI v24@0:8@16 */

/* Address: 0x1001f4ce8 | YYYVideoToolView::YYYVideoToolView__instance__setDoubleGesture_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView setDoubleGesture:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setDoubleGesture_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a280)();
  return;
}



/* -[YYYVideoToolView contentView] | 0x1001f4d74 | ABI @16@0:8 */

/* Address: 0x1001f4d74 | YYYVideoToolView::YYYVideoToolView__instance__contentView | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__contentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a2c0)();
  return IVar1;
}



/* -[YYYVideoToolView setContentView:] | 0x1001f4dac | ABI v24@0:8@16 */

/* Address: 0x1001f4dac | YYYVideoToolView::YYYVideoToolView__instance__setContentView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a2f0)();
  return;
}



/* -[YYYVideoToolView topView] | 0x1001f4e18 | ABI @16@0:8 */

/* Address: 0x1001f4e18 | YYYVideoToolView::YYYVideoToolView__instance__topView | bytes: 24 */

/* Recovered runtime selector: -[YYYVideoToolView topView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__topView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a328)(*(undefined8 *)(param_1 + (long)_topView));
  return IVar1;
}



/* -[YYYVideoToolView setTopView:] | 0x1001f4e40 | ABI v24@0:8@16 */

/* Address: 0x1001f4e40 | YYYVideoToolView::YYYVideoToolView__instance__setTopView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView setTopView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTopView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a340)();
  return;
}



/* -[YYYVideoToolView backButton] | 0x1001f4e84 | ABI @16@0:8 */

/* Address: 0x1001f4e84 | YYYVideoToolView::YYYVideoToolView__instance__backButton | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView backButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__backButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a350)();
  return IVar1;
}



/* -[YYYVideoToolView setBackButton:] | 0x1001f4eb8 | ABI v24@0:8@16 */

/* Address: 0x1001f4eb8 | YYYVideoToolView::YYYVideoToolView__instance__setBackButton_ | bytes: 16 */

/* Recovered runtime selector: -[YYYVideoToolView setBackButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBackButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a388)(param_1,param_3);
  return;
}



/* -[YYYVideoToolView titleLabel] | 0x1001f4ed8 | ABI @16@0:8 */

/* Address: 0x1001f4ed8 | YYYVideoToolView::YYYVideoToolView__instance__titleLabel | bytes: 16 */

/* Recovered runtime selector: -[YYYVideoToolView titleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__titleLabel(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_titleLabel);
}



/* -[YYYVideoToolView setTitleLabel:] | 0x1001f4ee8 | ABI v24@0:8@16 */

/* Address: 0x1001f4ee8 | YYYVideoToolView::YYYVideoToolView__instance__setTitleLabel_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView setTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTitleLabel_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a390)();
  return;
}



/* -[YYYVideoToolView lockButton] | 0x1001f4f60 | ABI @16@0:8 */

/* Address: 0x1001f4f60 | YYYVideoToolView::YYYVideoToolView__instance__lockButton | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView lockButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__lockButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f4f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a3d0)();
  return IVar1;
}



/* -[YYYVideoToolView setLockButton:] | 0x1001f4f94 | ABI v24@0:8@16 */

/* Address: 0x1001f4f94 | YYYVideoToolView::YYYVideoToolView__instance__setLockButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setLockButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setLockButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f4fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a400)();
  return;
}



/* -[YYYVideoToolView bottomView] | 0x1001f5000 | ABI @16@0:8 */

/* Address: 0x1001f5000 | YYYVideoToolView::YYYVideoToolView__instance__bottomView | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView bottomView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__bottomView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a438)();
  return IVar1;
}



/* -[YYYVideoToolView setBottomView:] | 0x1001f5034 | ABI v24@0:8@16 */

/* Address: 0x1001f5034 | YYYVideoToolView::YYYVideoToolView__instance__setBottomView_ | bytes: 24 */

/* Recovered runtime selector: -[YYYVideoToolView setBottomView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBottomView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a460)((long)_bottomView,param_1,param_3);
  return;
}



/* -[YYYVideoToolView playButton] | 0x1001f5054 | ABI @16@0:8 */

/* Address: 0x1001f5054 | YYYVideoToolView::YYYVideoToolView__instance__playButton | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView playButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__playButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a470)((long)_playButton);
  return IVar1;
}



/* -[YYYVideoToolView setPlayButton:] | 0x1001f5088 | ABI v24@0:8@16 */

/* Address: 0x1001f5088 | YYYVideoToolView::YYYVideoToolView__instance__setPlayButton_ | bytes: 40 */

/* Recovered runtime selector: -[YYYVideoToolView setPlayButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setPlayButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f50ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a4a0)();
  return;
}



/* -[YYYVideoToolView speedButton] | 0x1001f50ec | ABI @16@0:8 */

/* Address: 0x1001f50ec | YYYVideoToolView::YYYVideoToolView__instance__speedButton | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView speedButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__speedButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f50fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a4d8)((long)_speedButton);
  return IVar1;
}



/* -[YYYVideoToolView setSpeedButton:] | 0x1001f5108 | ABI v24@0:8@16 */

/* Address: 0x1001f5108 | YYYVideoToolView::YYYVideoToolView__instance__setSpeedButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setSpeedButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setSpeedButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a4e0)();
  return;
}



/* -[YYYVideoToolView rewindButton] | 0x1001f5174 | ABI @16@0:8 */

/* Address: 0x1001f5174 | YYYVideoToolView::YYYVideoToolView__instance__rewindButton | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView rewindButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__rewindButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f517c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a518)();
  return IVar1;
}



/* -[YYYVideoToolView setRewindButton:] | 0x1001f519c | ABI v24@0:8@16 */

/* Address: 0x1001f519c | YYYVideoToolView::YYYVideoToolView__instance__setRewindButton_ | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView setRewindButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setRewindButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f51b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a538)();
  return;
}



/* -[YYYVideoToolView rateButton] | 0x1001f51e0 | ABI @16@0:8 */

/* Address: 0x1001f51e0 | YYYVideoToolView::YYYVideoToolView__instance__rateButton | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView rateButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__rateButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f51f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a548)((long)_rateButton);
  return IVar1;
}



/* -[YYYVideoToolView setRateButton:] | 0x1001f5208 | ABI v24@0:8@16 */

/* Address: 0x1001f5208 | YYYVideoToolView::YYYVideoToolView__instance__setRateButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setRateButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setRateButton_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a568)();
  return;
}



/* -[YYYVideoToolView currentTimeLabel] | 0x1001f52a4 | ABI @16@0:8 */

/* Address: 0x1001f52a4 | YYYVideoToolView::YYYVideoToolView__instance__currentTimeLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView currentTimeLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__currentTimeLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f52ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a5b0)();
  return IVar1;
}



/* -[YYYVideoToolView setCurrentTimeLabel:] | 0x1001f52cc | ABI v24@0:8@16 */

/* Address: 0x1001f52cc | YYYVideoToolView::YYYVideoToolView__instance__setCurrentTimeLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setCurrentTimeLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setCurrentTimeLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f52ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a5d0)((long)_currentTimeLabel);
  return;
}



/* -[YYYVideoToolView totalTimeLabel] | 0x1001f533c | ABI @16@0:8 */

/* Address: 0x1001f533c | YYYVideoToolView::YYYVideoToolView__instance__totalTimeLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView totalTimeLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__totalTimeLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a610)((long)_totalTimeLabel);
  return IVar1;
}



/* -[YYYVideoToolView setTotalTimeLabel:] | 0x1001f5370 | ABI v24@0:8@16 */

/* Address: 0x1001f5370 | YYYVideoToolView::YYYVideoToolView__instance__setTotalTimeLabel_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoToolView setTotalTimeLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTotalTimeLabel_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_totalTimeLabel) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001001f53a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a640)();
  return;
}



/* -[YYYVideoToolView sliderView] | 0x1001f53d4 | ABI @16@0:8 */

/* Address: 0x1001f53d4 | YYYVideoToolView::YYYVideoToolView__instance__sliderView | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView sliderView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__sliderView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f53e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a668)((long)_sliderView);
  return IVar1;
}



/* -[YYYVideoToolView setSliderView:] | 0x1001f53f0 | ABI v24@0:8@16 */

/* Address: 0x1001f53f0 | YYYVideoToolView::YYYVideoToolView__instance__setSliderView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setSliderView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setSliderView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a670)();
  return;
}



/* -[YYYVideoToolView loadingView] | 0x1001f5468 | ABI @16@0:8 */

/* Address: 0x1001f5468 | YYYVideoToolView::YYYVideoToolView__instance__loadingView | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView loadingView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__loadingView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a6b0)();
  return IVar1;
}



/* -[YYYVideoToolView setLoadingView:] | 0x1001f5490 | ABI v24@0:8@16 */

/* Address: 0x1001f5490 | YYYVideoToolView::YYYVideoToolView__instance__setLoadingView_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYVideoToolView setLoadingView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setLoadingView_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_loadingView) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001001f54c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d4a6d0)();
  return;
}



/* -[YYYVideoToolView playing] | 0x1001f54f4 | ABI B16@0:8 */

/* Address: 0x1001f54f4 | YYYVideoToolView::YYYVideoToolView__instance__playing | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView playing]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoToolView::YYYVideoToolView__instance__playing(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f54fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d4a6f0)((int)param_1);
  return bVar1;
}



/* -[YYYVideoToolView show] | 0x1001f551c | ABI B16@0:8 */

/* Address: 0x1001f551c | YYYVideoToolView::YYYVideoToolView__instance__show | bytes: 24 */

/* Recovered runtime selector: -[YYYVideoToolView show]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoToolView::YYYVideoToolView__instance__show(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d4a710)(*(undefined1 *)(param_1 + (long)_show));
  return bVar1;
}



/* -[YYYVideoToolView setShow:] | 0x1001f5540 | ABI v20@0:8B16 */

/* Address: 0x1001f5540 | YYYVideoToolView::YYYVideoToolView__instance__setShow_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView setShow:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setShow_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a720)(param_1,param_2,param_3);
  return;
}



/* -[YYYVideoToolView lock] | 0x1001f5588 | ABI B16@0:8 */

/* Address: 0x1001f5588 | YYYVideoToolView::YYYVideoToolView__instance__lock | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView lock]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoToolView::YYYVideoToolView__instance__lock(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d4a750)((long)_lock,(int)param_1);
  return bVar1;
}



/* -[YYYVideoToolView topViewTopConstraint] | 0x1001f55b0 | ABI @16@0:8 */

/* Address: 0x1001f55b0 | YYYVideoToolView::YYYVideoToolView__instance__topViewTopConstraint | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView topViewTopConstraint]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__topViewTopConstraint(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f55c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a770)((long)_topViewTopConstraint);
  return IVar1;
}



/* -[YYYVideoToolView setTopViewTopConstraint:] | 0x1001f55d8 | ABI v24@0:8@16 */

/* Address: 0x1001f55d8 | YYYVideoToolView::YYYVideoToolView__instance__setTopViewTopConstraint_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setTopViewTopConstraint:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTopViewTopConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f55f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a790)();
  return;
}



/* -[YYYVideoToolView bottomViewBottomConstraint] | 0x1001f5644 | ABI @16@0:8 */

/* Address: 0x1001f5644 | YYYVideoToolView::YYYVideoToolView__instance__bottomViewBottomConstraint | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView bottomViewBottomConstraint]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__bottomViewBottomConstraint(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a7c8)((long)_bottomViewBottomConstraint);
  return IVar1;
}



/* -[YYYVideoToolView setBottomViewBottomConstraint:] | 0x1001f566c | ABI v24@0:8@16 */

/* Address: 0x1001f566c | YYYVideoToolView::YYYVideoToolView__instance__setBottomViewBottomConstraint_ | bytes: 32 */

/* Recovered runtime selector: -[YYYVideoToolView setBottomViewBottomConstraint:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBottomViewBottomConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a7e8)();
  return;
}



/* -[YYYVideoToolView timeLabelWidthViewTopConstraint] | 0x1001f56e4 | ABI @16@0:8 */

/* Address: 0x1001f56e4 | YYYVideoToolView::YYYVideoToolView__instance__timeLabelWidthViewTopConstraint | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView timeLabelWidthViewTopConstraint]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__timeLabelWidthViewTopConstraint
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f56f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a810)((long)_timeLabelWidthViewTopConstraint);
  return IVar1;
}



/* -[YYYVideoToolView setTimeLabelWidthViewTopConstraint:] | 0x1001f570c | ABI v24@0:8@16 */

/* Address: 0x1001f570c | YYYVideoToolView::YYYVideoToolView__instance__setTimeLabelWidthViewTopConstraint_ | bytes: 24 */

/* Recovered runtime selector: -[YYYVideoToolView setTimeLabelWidthViewTopConstraint:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTimeLabelWidthViewTopConstraint_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a838)((long)_timeLabelWidthViewTopConstraint,param_1,param_3);
  return;
}



/* -[YYYVideoToolView topMaskView] | 0x1001f5738 | ABI @16@0:8 */

/* Address: 0x1001f5738 | YYYVideoToolView::YYYVideoToolView__instance__topMaskView | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView topMaskView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__topMaskView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a858)((long)_topMaskView);
  return IVar1;
}



/* -[YYYVideoToolView setTopMaskView:] | 0x1001f5760 | ABI v24@0:8@16 */

/* Address: 0x1001f5760 | YYYVideoToolView::YYYVideoToolView__instance__setTopMaskView_ | bytes: 16 */

/* Recovered runtime selector: -[YYYVideoToolView setTopMaskView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setTopMaskView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f576c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a870)(param_1,param_3);
  return;
}



/* -[YYYVideoToolView bottomMaskView] | 0x1001f578c | ABI @16@0:8 */

/* Address: 0x1001f578c | YYYVideoToolView::YYYVideoToolView__instance__bottomMaskView | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView bottomMaskView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__bottomMaskView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a890)();
  return IVar1;
}



/* -[YYYVideoToolView setBottomMaskView:] | 0x1001f57a8 | ABI v24@0:8@16 */

/* Address: 0x1001f57a8 | YYYVideoToolView::YYYVideoToolView__instance__setBottomMaskView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setBottomMaskView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBottomMaskView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f57c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a8a8)((long)_bottomMaskView);
  return;
}



/* -[YYYVideoToolView setPlayImage:] | 0x1001f5818 | ABI v24@0:8@16 */

/* Address: 0x1001f5818 | YYYVideoToolView::YYYVideoToolView__instance__setPlayImage_ | bytes: 28 */

/* Recovered runtime selector: -[YYYVideoToolView setPlayImage:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setPlayImage_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a8e0)();
  return;
}



/* -[YYYVideoToolView setPauseImage:] | 0x1001f585c | ABI v24@0:8@16 */

/* Address: 0x1001f585c | YYYVideoToolView::YYYVideoToolView__instance__setPauseImage_ | bytes: 44 */

/* Recovered runtime selector: -[YYYVideoToolView setPauseImage:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setPauseImage_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d4a8f0)();
  return;
}



/* -[YYYVideoToolView beginPoint] | 0x1001f58e8 | ABI {CGPoint=dd}16@0:8 */

/* Address: 0x1001f58e8 | YYYVideoToolView::YYYVideoToolView__instance__beginPoint | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView beginPoint]
   Original ABI encoding: {CGPoint=dd}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CGPoint YYYVideoToolView::YYYVideoToolView__instance__beginPoint(ID param_1,SEL param_2)

{
  double in_d1;
  CGPoint CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f58f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1.field0_0x0 = (double)(*(code *)PTR_LAB_100d4a930)((long)_beginPoint);
  CVar1.field1_0x8 = in_d1;
  return CVar1;
}



/* -[YYYVideoToolView setBeginPoint:] | 0x1001f5920 | ABI v32@0:8{CGPoint=dd}16 */

/* Address: 0x1001f5920 | YYYVideoToolView::YYYVideoToolView__instance__setBeginPoint_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView setBeginPoint:]
   Original ABI encoding: v32@0:8{CGPoint=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBeginPoint_
               (ID param_1,SEL param_2,CGPoint param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a960)(param_3.field0_0x0,param_3.field1_0x8);
  return;
}



/* -[YYYVideoToolView volumeView] | 0x1001f596c | ABI @16@0:8 */

/* Address: 0x1001f596c | YYYVideoToolView::YYYVideoToolView__instance__volumeView | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView volumeView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYVideoToolView::YYYVideoToolView__instance__volumeView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d4a998)();
  return IVar1;
}



/* -[YYYVideoToolView setVolumeView:] | 0x1001f5988 | ABI v24@0:8@16 */

/* Address: 0x1001f5988 | YYYVideoToolView::YYYVideoToolView__instance__setVolumeView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYVideoToolView setVolumeView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setVolumeView_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f59a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a9a8)();
  return;
}



/* -[YYYVideoToolView setVolumeSlider:] | 0x1001f59fc | ABI v24@0:8@16 */

/* Address: 0x1001f59fc | YYYVideoToolView::YYYVideoToolView__instance__setVolumeSlider_ | bytes: 16 */

/* Recovered runtime selector: -[YYYVideoToolView setVolumeSlider:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setVolumeSlider_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4a9d0)(param_1,param_3);
  return;
}



/* -[YYYVideoToolView beginValue] | 0x1001f5a28 | ABI d16@0:8 */

/* Address: 0x1001f5a28 | YYYVideoToolView::YYYVideoToolView__instance__beginValue | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView beginValue]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYVideoToolView::YYYVideoToolView__instance__beginValue(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d4a9f8)((long)_beginValue);
  return dVar1;
}



/* -[YYYVideoToolView setBeginValue:] | 0x1001f5a50 | ABI v24@0:8d16 */

/* Address: 0x1001f5a50 | YYYVideoToolView::YYYVideoToolView__instance__setBeginValue_ | bytes: 16 */

/* Recovered runtime selector: -[YYYVideoToolView setBeginValue:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setBeginValue_
               (ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_beginValue) = param_3;
  return;
}



/* -[YYYVideoToolView defaultBrightness] | 0x1001f5a60 | ABI d16@0:8 */

/* Address: 0x1001f5a60 | YYYVideoToolView::YYYVideoToolView__instance__defaultBrightness | bytes: 20 */

/* Recovered runtime selector: -[YYYVideoToolView defaultBrightness]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYVideoToolView::YYYVideoToolView__instance__defaultBrightness(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f5a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d4aa10)((long)_defaultBrightness);
  return dVar1;
}



/* -[YYYVideoToolView setDefaultBrightness:] | 0x1001f5a88 | ABI v24@0:8d16 */

/* Address: 0x1001f5a88 | YYYVideoToolView::YYYVideoToolView__instance__setDefaultBrightness_ | bytes: 12 */

/* Recovered runtime selector: -[YYYVideoToolView setDefaultBrightness:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance__setDefaultBrightness_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001f5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4aa30)();
  return;
}



/* -[YYYVideoToolView .cxx_destruct] | 0x1001f5ac0 | ABI v16@0:8 */

/* Address: 0x1001f5ac0 | YYYVideoToolView::YYYVideoToolView__instance___cxx_destruct | bytes: 120 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYVideoToolView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYVideoToolView::YYYVideoToolView__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_volumeSlider) = 0;
  *(undefined8 *)(param_1 + (long)_volumeView) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001001f5b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d4aa60)();
  return;
}



/* +[YYYVideoToolView requiresConstraintBasedLayout] | 0x1001f45c0 | ABI B16@0:8 */

/* Address: 0x1001f45c0 | YYYVideoToolView::YYYVideoToolView__class__requiresConstraintBasedLayout | bytes: 8 */

/* Recovered runtime selector: +[YYYVideoToolView requiresConstraintBasedLayout]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYVideoToolView::YYYVideoToolView__class__requiresConstraintBasedLayout
               (ID param_1,SEL param_2)

{
  return 1;
}


