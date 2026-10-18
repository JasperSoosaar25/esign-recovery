/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider initWithFrame:]
 * Entry: 0x1001a211c; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 135; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a215c */
/* WARNING: Switch with 1 destination removed at 0x0001001a2168 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2190 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2278 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2294 */
/* WARNING: Switch with 1 destination removed at 0x0001001a22a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a22b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2328 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2364 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2380 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYBrightnessSlider_m01244
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = uRam0000000100c73a38;
  uStack_60 = param_5;
  lVar1 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                              PTR_s_initWithFrame__100c61370);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x00010094dda0(lVar1);
    func_0x000100970d60(uRam0000000100c71408);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    dVar3 = (double)func_0x00010093a7c0();
    *(float *)(lVar1 + iRam0000000100c75928) = (float)dVar3;
    _objc_release(uVar2);
    func_0x0001001a49e4(0,lVar1);
    func_0x000100967320(0x3f800000,lVar1);
    func_0x00010094d2e0(lVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009670e0(auVar4._0_8_,auVar4._8_8_,1);
    _objc_release(auVar4._0_8_);
    auVar4 = _objc_alloc(uRam0000000100c71a00);
    auVar4 = func_0x000100949f80(auVar4._0_8_,auVar4._8_8_,lVar1,PTR_s_panHandle__100c647a0);
    uVar2 = auVar4._0_8_;
    func_0x0001001a49e8(lVar1,auVar4._8_8_,uVar2);
    func_0x000100968b80(lVar1,extraout_x1,uVar2);
    func_0x00010093fce0(uRam0000000100c71400);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937080(auVar4._0_8_,auVar4._8_8_,lVar1,PTR_s_styleChange_100c6eef0,_UNK_100b00d28,0
                       );
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider styleChange]
 * Entry: 0x1001a2384; original ABI: v16@0:8
 * Original instructions in modeled body: 103; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a23a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a23b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a24b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a24bc */
/* WARNING: Switch with 1 destination removed at 0x0001001a2548 */
/* WARNING: Switch with 1 destination removed at 0x0001001a263c */

void Recovered_YYYBrightnessSlider_m01245(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x0001001a49ec(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009729a0();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100972a60(uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009771c0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  func_0x000100972a40(uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976620(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  func_0x0001001a49f0(uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095ca20(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f060(auVar3._0_8_,auVar3._8_8_,uVar1);
  func_0x00010094d6a0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f060(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider dealloc]
 * Entry: 0x1001a2640; original ABI: v16@0:8
 * Original instructions in modeled body: 48; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a2660 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2674 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2684 */
/* WARNING: Switch with 1 destination removed at 0x0001001a26a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2718 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2744 */

void Recovered_YYYBrightnessSlider_m01246(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001001a49fc(uRam0000000100c71400);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095b580(auVar1._0_8_,auVar1._8_8_,param_1);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c73a38;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_100c5db00);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider getRate]
 * Entry: 0x1001a2748; original ABI: f16@0:8
 * Original instructions in modeled body: 41; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a2764 */
/* WARNING: Switch with 1 destination removed at 0x0001001a277c */
/* WARNING: Switch with 1 destination removed at 0x0001001a27ac */
/* WARNING: Switch with 1 destination removed at 0x0001001a27d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a27e8 */

float Recovered_YYYBrightnessSlider_m01247(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* WARNING: Switch is manually overridden */
  fVar1 = (float)func_0x000100978b20(param_1);
                    /* WARNING: Switch is manually overridden */
  fVar2 = (float)func_0x0001001a4a08(param_1);
  fVar3 = (float)func_0x000100950100(param_1);
                    /* WARNING: Switch is manually overridden */
  fVar1 = fVar1 / (fVar2 - fVar3);
                    /* WARNING: Switch is manually overridden */
  switch(NAN(fVar1)) {
  case true:
                    /* WARNING: Switch is manually overridden */
    fVar1 = 0.0;
                    /* WARNING: Switch is manually overridden */
  }
  return fVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setValue:animated:]
 * Entry: 0x1001a27fc; original ABI: v24@0:8f16B20
 * Original instructions in modeled body: 102; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a2844 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2850 */
/* WARNING: Switch with 1 destination removed at 0x0001001a285c */
/* WARNING: Switch with 1 destination removed at 0x0001001a2868 */
/* WARNING: Switch with 1 destination removed at 0x0001001a288c */
/* WARNING: Switch with 1 destination removed at 0x0001001a2898 */
/* WARNING: Switch with 1 destination removed at 0x0001001a28b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a298c */
/* WARNING: Switch with 1 destination removed at 0x0001001a29a8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYBrightnessSlider_m01248(float param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  float fVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined4 uStack_48;
  
  fVar2 = (float)func_0x000100950100();
                    /* WARNING: Switch is manually overridden */
  switch(param_1 < fVar2) {
  case false:
    fVar2 = (float)func_0x00010094f940(param_2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(fVar2 < param_1) {
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      param_1 = (float)func_0x00010094f940(param_2);
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    param_1 = (float)func_0x000100950100(param_2);
                    /* WARNING: Switch is manually overridden */
  }
  *(float *)(param_2 + iRam0000000100c75928) = param_1;
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4a0c((double)param_1);
  _objc_release(uVar1);
  uStack_48 = func_0x0001001a4a10(param_2);
  uVar1 = _UNK_10097b118;
  if (param_4 == 0) {
    uVar1 = 0;
  }
  puStack_70 = PTR___NSConcreteStackBlock_100afc560;
  uStack_68 = _UNK_10097b060;
  puStack_60 = &DAT_1001a29ac;
  puStack_58 = &UNK_100affad8;
  lStack_50 = param_2;
  func_0x000100938340(uVar1,uRam0000000100c71418,extraout_x1,&puStack_70);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setValue:]
 * Entry: 0x1001a2cc0; original ABI: v20@0:8f16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a2cc8 */

void Recovered_YYYBrightnessSlider_m01249(undefined8 param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010096fd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100afcb80)(param_1,PTR_s_setValue_animated__100c6d968,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider panHandle:]
 * Entry: 0x1001a2cd4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 169; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a2d08 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d14 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d20 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d74 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d80 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d8c */
/* WARNING: Switch with 1 destination removed at 0x0001001a2d98 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2dbc */
/* WARNING: Switch with 1 destination removed at 0x0001001a2dc8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2dec */
/* WARNING: Switch with 1 destination removed at 0x0001001a2e60 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2eec */
/* WARNING: Switch with 1 destination removed at 0x0001001a2f30 */
/* WARNING: Switch with 1 destination removed at 0x0001001a2f6c */
/* WARNING: Switch with 1 destination removed at 0x0001001a2fdc */
/* WARNING: Switch with 1 destination removed at 0x0001001a30ac */
/* WARNING: Switch with 1 destination removed at 0x0001001a30fc */
/* WARNING: Switch with 1 destination removed at 0x0001001a315c */

void Recovered_YYYBrightnessSlider_m01250
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  auVar11 = _objc_retain(param_7);
  uVar2 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
  uVar4 = func_0x00010094e300(uVar2,auVar11._8_8_,param_5);
  uVar7 = param_2;
  auVar11 = func_0x000100973860(uVar2);
  lVar1 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 < 2) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 < 3) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(lVar1 - 3U < 2) {
      case true:
        func_0x0001001a4a4c(param_5,auVar11._8_8_,0);
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
      uVar3 = func_0x000100941ec0(param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001a2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100d2e228))();
      return;
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 == 1) {
    case true:
      func_0x000100976620(param_5);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar5 = func_0x000100944960();
      uVar8 = 0xc034000000000000;
      uVar9 = 0xc034000000000000;
      uVar10 = 0xc034000000000000;
      uVar6 = func_0x0001001a3170(0xc034000000000000,0xc034000000000000,0xc034000000000000,
                                  0xc034000000000000);
                    /* WARNING: Switch is manually overridden */
      uVar5 = func_0x0001001a3160(uVar5,uVar7,param_3,param_4,uVar6,uVar8,uVar9,uVar10);
      _objc_release(uVar2);
      uVar3 = _CGRectContainsPoint(uVar5,uVar7,param_3,param_4,uVar4,param_2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001a2dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100d2e198))();
      return;
                    /* WARNING: Switch is manually overridden */
    }
  }
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider layoutSubviews]
 * Entry: 0x1001a318c; original ABI: v16@0:8
 * Original instructions in modeled body: 423; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a31c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a31e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3608 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3634 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3644 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3660 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3670 */
/* WARNING: Switch with 1 destination removed at 0x0001001a36a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a36c4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a36e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a36f0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3744 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3750 */
/* WARNING: Switch with 1 destination removed at 0x0001001a375c */
/* WARNING: Switch with 1 destination removed at 0x0001001a376c */
/* WARNING: Switch with 1 destination removed at 0x0001001a3778 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3784 */
/* WARNING: Switch with 1 destination removed at 0x0001001a37c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a37dc */
/* WARNING: Switch with 1 destination removed at 0x0001001a37e8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3838 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3864 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3898 */
/* WARNING: Switch with 1 destination removed at 0x0001001a38c4 */

void Recovered_YYYBrightnessSlider_m01251(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_78 = uRam0000000100c73a38;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_100c62d78);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100976620(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)func_0x0001001a4a64();
  dVar4 = (double)func_0x0001009432e0(param_1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar3 != dVar4) {
  case true:
    dVar3 = (double)func_0x0001009432e0(param_1);
    dVar4 = (double)func_0x0001009433a0(param_1);
    dVar5 = (double)func_0x0001009432e0(param_1);
    dVar4 = dVar4 - dVar5;
    uVar6 = func_0x0001001a4a68(param_1);
    uVar8 = 0;
    uVar7 = func_0x0001001a38c8(dVar3 * 0.5,0,dVar4,uVar6);
    func_0x0001009729c0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964900(uVar7,uVar8,dVar4,uVar6);
    _objc_release(uVar1);
    uVar6 = func_0x0001009432e0(param_1);
    uVar7 = func_0x0001001a4a6c(param_1);
    uVar9 = 0;
    uVar8 = func_0x0001001a38c8(0,0,uVar6,uVar7);
    func_0x000100976620(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964900(uVar8,uVar9,uVar6,uVar7);
    _objc_release(uVar1);
    func_0x000100976620(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar7 = func_0x0001001a4a70();
    uVar8 = func_0x0001009432e0(param_1);
    uVar10 = 0;
    uVar9 = func_0x0001001a38c8(0,0,uVar7,uVar8);
    func_0x0001009771c0(param_1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001a4a74(uVar9,uVar10,uVar7,uVar8);
    _objc_release(uVar6);
    _objc_release(uVar1);
    dVar3 = (double)func_0x0001009432e0(param_1);
    func_0x000100976620(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094d2e0();
    uVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001a4a78(dVar3 * 0.5);
    _objc_release(uVar6);
    _objc_release(uVar1);
    func_0x0001001a4a7c(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094d2e0();
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar9 = func_0x0001001a4a80();
    func_0x0001009771c0(param_1);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094d2e0();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x000100962300(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar1);
    dVar3 = (double)func_0x0001009432e0(param_1);
    dVar3 = dVar3 + -20.0;
    dVar4 = (double)func_0x0001009432e0(param_1);
    dVar4 = dVar4 + -20.0;
    uVar8 = 0x4024000000000000;
    uVar6 = func_0x0001001a38c8(0x4024000000000000,0x4024000000000000,dVar3,dVar4);
    func_0x00010094d6a0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964900(uVar6,uVar8,dVar3,dVar4);
    _objc_release(uVar1);
    func_0x00010094d6a0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar7 = func_0x0001001a4a84();
    func_0x0001001a4a88(param_1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001a4a8c(uVar7,uVar8,dVar3,dVar4);
    _objc_release(uVar6);
    _objc_release(uVar1);
    dVar3 = (double)func_0x0001001a4a90(param_1);
    func_0x0001001a4a94(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964040(dVar3 + -10.0);
    _objc_release(uVar1);
    dVar3 = (double)func_0x0001009432e0(param_1);
    func_0x00010094d2e0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001a4a98(dVar3 * 0.5);
    _objc_release(uVar1);
    fVar2 = (float)func_0x000100945780(param_1);
    dVar3 = (double)func_0x0001009433a0(param_1);
    func_0x000100976620(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100963fc0(dVar3 * (double)fVar2);
    _objc_release(uVar1);
    func_0x000100976620(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar3 = (double)func_0x000100943320();
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    switch(dVar3 < 0.0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x000100976620(param_1);
      uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      dVar3 = (double)func_0x0001001a4a9c(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      dVar4 = (double)func_0x0001001a4aa0(param_1);
      _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(dVar4 < dVar3) {
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar6 = func_0x0001009433a0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100976620(param_1);
        uVar1 = _objc_retainAutoreleasedReturnValue();
        func_0x000100964040(uVar6);
        _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
      func_0x000100976620(param_1);
      uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x000100964020(0,uVar1);
      _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    func_0x000100976620(param_1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar7 = func_0x000100943340();
    func_0x0001009771c0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009640a0(uVar7);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider loadSubviews]
 * Entry: 0x1001a38f0; original ABI: v16@0:8
 * Original instructions in modeled body: 385; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a39a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3a50 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3a78 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3ab8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3b4c */
/* WARNING: Switch with 1 destination removed at 0x0001001a3b60 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3f0c */
/* WARNING: Switch with 1 destination removed at 0x0001001a3f20 */
/* WARNING: Switch with 1 destination removed at 0x0001001a3fa0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a432c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYBrightnessSlider_m01252(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9178c == 0) {
  case true:
    bRam0000000100d2dcb0 = bRam0000000100d2dc90 ^ 0xbe;
    bRam0000000100d2dcb1 = bRam0000000100d2dc91 ^ 0xe6;
    cRam0000000100d2dcb2 = bRam0000000100d2dc92 + (bRam0000000100d2dc92 & 0x12) * -2 + '\x12';
    bRam0000000100d2dcb3 = bRam0000000100d2dc93 ^ 0xa3;
    bRam0000000100d2dcb4 = bRam0000000100d2dc94 ^ 0x26;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d2dcb5 = bRam0000000100d2dc95 ^ 0x8f;
    cRam0000000100d2dcb6 = bRam0000000100d2dc96 + (bRam0000000100d2dc96 & 0x45) * -2 + 'E';
    bRam0000000100d2dcb7 = bRam0000000100d2dc97 ^ 0xce;
    bRam0000000100d2dcb8 = bRam0000000100d2dc98 ^ 0x2c;
    bRam0000000100d2dcb9 = bRam0000000100d2dc99 ^ 0x94;
    bRam0000000100d2dcba = bRam0000000100d2dc9a ^ 0x31;
    bRam0000000100d2dcbb = bRam0000000100d2dc9b ^ 0x3a;
    bRam0000000100d2dcbc = bRam0000000100d2dc9c ^ 0xfc;
    bRam0000000100d2dcbd = bRam0000000100d2dc9d ^ 0x6d;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d2dcbe = bRam0000000100d2dc9e ^ 0xc2;
    bRam0000000100d2dcbf = bRam0000000100d2dc9f ^ 0xcf;
    bRam0000000100d2dcc0 = bRam0000000100d2dca0 ^ 0x96;
    bRam0000000100d2dcc1 = bRam0000000100d2dca1 ^ 0x1d;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e9178c = 1;
  auVar6 = func_0x000100951360(uRam0000000100c71418);
  func_0x00010096f740(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001001a4aac(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009771c0(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar6._0_8_,auVar6._8_8_,uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x0001009771c0(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4ab0(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  auVar6 = _objc_alloc(uRam0000000100c715a0);
  func_0x000100947300(uRam0000000100c713c0,auVar6._8_8_,0x100d2dcd0);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100947a00(auVar4._0_8_,auVar4._8_8_,2);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  auVar6 = func_0x0001001a4ab4(auVar6._0_8_,auVar5._8_8_,auVar5._0_8_);
  func_0x000100966680(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x0001001a4ab8(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  auVar6 = _objc_alloc(uRam0000000100c715a0);
  func_0x000100947300(uRam0000000100c713c0,auVar6._8_8_,0x100d2dcd0);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100947a00(auVar4._0_8_,auVar4._8_8_,2);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  auVar6 = func_0x0001009493e0(auVar6._0_8_,auVar5._8_8_,auVar5._0_8_);
  func_0x00010096b600(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x0001001a4abc(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  auVar6 = func_0x0001001a4ac0(uRam0000000100c71418);
  func_0x00010096eee0(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x00010093cfa0(0,0x3ff0000000000000,uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retainAutorelease(uVar1);
  uVar2 = func_0x000100934be0();
  func_0x000100976620(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4ac4(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar1);
  func_0x0001001a4330(0x3fe0000000000000,0x3fe0000000000000);
  func_0x000100976620(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4ac8(0x3fe0000000000000,0x3fe0000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100976620(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4acc(_UNK_10097dba8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100979940(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976620(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4ad0(auVar6._0_8_,auVar6._8_8_,uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x0001001a4ad4(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x0001001a4ad8(uRam0000000100c71438);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  auVar6 = func_0x0001001a4adc(uRam0000000100c71418);
  func_0x00010096d2c0(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x0001009729c0(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001a4ae0(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x000100974380(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider value]
 * Entry: 0x1001a4358; original ABI: f16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4360 */

undefined4 Recovered_YYYBrightnessSlider_m01253(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + iRam0000000100c75928);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider minimumValue]
 * Entry: 0x1001a4374; original ABI: f16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a437c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4388 */

undefined4 Recovered_YYYBrightnessSlider_m01254(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + iRam0000000100c7592c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setMinimumValue:]
 * Entry: 0x1001a439c; original ABI: v20@0:8f16
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a43ac */
/* WARNING: Switch with 1 destination removed at 0x0001001a43bc */

void Recovered_YYYBrightnessSlider_m01255(undefined4 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_2 + iRam0000000100c7592c) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider maximumValue]
 * Entry: 0x1001a43c4; original ABI: f16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a43d4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a43e0 */

undefined4 Recovered_YYYBrightnessSlider_m01256(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + iRam0000000100c75930);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setMaximumValue:]
 * Entry: 0x1001a43ec; original ABI: v20@0:8f16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a43f4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4404 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4420 */

void Recovered_YYYBrightnessSlider_m01257(undefined4 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_2 + iRam0000000100c75930) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider thumbView]
 * Entry: 0x1001a4428; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a443c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4448 */

undefined8 Recovered_YYYBrightnessSlider_m01258(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75934);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setThumbView:]
 * Entry: 0x1001a4450; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a446c */
/* WARNING: Switch with 1 destination removed at 0x0001001a448c */
/* WARNING: Switch with 1 destination removed at 0x0001001a44b0 */

void Recovered_YYYBrightnessSlider_m01259(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75934;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider trackView]
 * Entry: 0x1001a44c4; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a44cc */

undefined8 Recovered_YYYBrightnessSlider_m01260(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75938);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setTrackView:]
 * Entry: 0x1001a44e0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4500 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4514 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4520 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4554 */

void Recovered_YYYBrightnessSlider_m01261(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75938,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider leftImageView]
 * Entry: 0x1001a4558; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4560 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4574 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4580 */

undefined8 Recovered_YYYBrightnessSlider_m01262(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7593c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setLeftImageView:]
 * Entry: 0x1001a458c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a45a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a45b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a45c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001a45ec */

void Recovered_YYYBrightnessSlider_m01263(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7593c,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider rightImageView]
 * Entry: 0x1001a45fc; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a460c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4618 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4624 */

undefined8 Recovered_YYYBrightnessSlider_m01264(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75940);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setRightImageView:]
 * Entry: 0x1001a4630; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4658 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4690 */

void Recovered_YYYBrightnessSlider_m01265(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75940;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider pangGest]
 * Entry: 0x1001a4694; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a469c */
/* WARNING: Switch with 1 destination removed at 0x0001001a46b0 */

undefined8 Recovered_YYYBrightnessSlider_m01266(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75944);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setPangGest:]
 * Entry: 0x1001a46bc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a46d0 */

void Recovered_YYYBrightnessSlider_m01267(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75944,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider startX]
 * Entry: 0x1001a46dc; original ABI: d16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a46e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a46f0 */

undefined1  [16] Recovered_YYYBrightnessSlider_m01268(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75948);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setStartX:]
 * Entry: 0x1001a4704; original ABI: v24@0:8d16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a470c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4720 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4730 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4750 */

void Recovered_YYYBrightnessSlider_m01269(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + iRam0000000100c75948) = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider defaultValue]
 * Entry: 0x1001a4758; original ABI: d16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4760 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4774 */

undefined1  [16] Recovered_YYYBrightnessSlider_m01270(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c7594c);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setDefaultValue:]
 * Entry: 0x1001a4780; original ABI: v24@0:8d16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4788 */
/* WARNING: Switch with 1 destination removed at 0x0001001a47a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001a47ac */
/* WARNING: Switch with 1 destination removed at 0x0001001a47c8 */

void Recovered_YYYBrightnessSlider_m01271(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + iRam0000000100c7594c) = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider drag]
 * Entry: 0x1001a47d0; original ABI: B16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a47e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a47f0 */

bool Recovered_YYYBrightnessSlider_m01272(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + iRam0000000100c75950) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setDrag:]
 * Entry: 0x1001a4800; original ABI: v20@0:8B16
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4808 */

void Recovered_YYYBrightnessSlider_m01273(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c75950) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider sliderContentView]
 * Entry: 0x1001a481c; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4824 */
/* WARNING: Switch with 1 destination removed at 0x0001001a483c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4848 */

undefined8 Recovered_YYYBrightnessSlider_m01274(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75954);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider setSliderContentView:]
 * Entry: 0x1001a4854; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a4874 */
/* WARNING: Switch with 1 destination removed at 0x0001001a4888 */
/* WARNING: Switch with 1 destination removed at 0x0001001a48c4 */

void Recovered_YYYBrightnessSlider_m01275(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75954;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYBrightnessSlider .cxx_destruct]
 * Entry: 0x1001a48c8; original ABI: v16@0:8
 * Original instructions in modeled body: 48; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001a48e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001a494c */
/* WARNING: Switch with 1 destination removed at 0x0001001a4990 */

void Recovered_YYYBrightnessSlider_m01276(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75954,0);
  _objc_storeStrong(param_1 + iRam0000000100c75944,0);
  _objc_storeStrong(param_1 + iRam0000000100c75940,0);
  _objc_storeStrong(param_1 + iRam0000000100c7593c,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75938,0);
  _objc_storeStrong(param_1 + iRam0000000100c75934,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



