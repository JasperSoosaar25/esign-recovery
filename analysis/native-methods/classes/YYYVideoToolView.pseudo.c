/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView initWithFrame:]
 * Entry: 0x1001ea1e8; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 184; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea210 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea21c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea2cc */
/* WARNING: Switch with 1 destination removed at 0x0001001ea54c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea598 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea5a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea5c4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea5d0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea60c */

undefined8 Recovered_YYYVideoToolView_m01534(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_58 = uRam0000000100c73a90;
  uStack_60 = param_1;
  auVar3 = _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__100c61370);
  lVar1 = auVar3._0_8_;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    *(undefined1 *)(lVar1 + iRam0000000100c75a94) = 0;
    func_0x00010096ce80(lVar1,auVar3._8_8_,1);
    func_0x0001001f5eb4(lVar1);
    func_0x000100961ba0(lVar1,extraout_x1,1);
    auVar3 = _objc_alloc(uRam0000000100c71c50);
    auVar3 = func_0x0001001f5eb8(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_tapHandle_100c6f600);
    func_0x00010096e860(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x000100975b20(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100936c60(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    auVar3 = _objc_alloc(uRam0000000100c71c50);
    auVar3 = func_0x000100949f80(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_doubleGestureHandle_100c5e6f0
                                );
    func_0x000100963560(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    func_0x000100941a60(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001f5ebc(auVar3._0_8_,auVar3._8_8_,2);
    _objc_release(auVar3._0_8_);
    func_0x0001001f5ec0(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001f5ec4(auVar3._0_8_,auVar3._8_8_,lVar1);
    _objc_release(auVar3._0_8_);
    func_0x000100941a60(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100936c60(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    func_0x000100975b20(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001f5ec8(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001f5ecc(uVar2,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    _objc_release(uVar2);
    auVar3 = _objc_alloc(uRam0000000100c71a00);
    auVar3 = func_0x0001001f5ed0(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_gestureHandle__100c5fba0);
    uVar2 = auVar3._0_8_;
    func_0x000100936c60(lVar1,auVar3._8_8_,uVar2);
    func_0x000100975b20(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010095c0c0(auVar3._0_8_,auVar3._8_8_,uVar2);
    _objc_release(auVar3._0_8_);
    func_0x000100941a60(lVar1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010095c0c0(auVar3._0_8_,auVar3._8_8_,uVar2);
    _objc_release(auVar3._0_8_);
    _objc_release(uVar2);
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView gestureRecognizer:shouldReceiveTouch:]
 * Entry: 0x1001ea610; original ABI: B32@0:8@16@24
 * Original instructions in modeled body: 36; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea630 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea6dc */

void Recovered_YYYVideoToolView_m01535
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  func_0x000100979160();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar3 = func_0x0001001f5ef0(uRam0000000100c71428);
  uVar2 = func_0x00010094ba40(uVar1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001ea67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100d47cf0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView gestureHandle:]
 * Entry: 0x1001ea70c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 254; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea734 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea740 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea75c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea76c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea7a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea7c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea7d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea7fc */
/* WARNING: Switch with 1 destination removed at 0x0001001ea81c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea86c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea89c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea8a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea8e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea8f0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea924 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea940 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea950 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea980 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea9bc */
/* WARNING: Switch with 1 destination removed at 0x0001001ea9c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea9d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea9e8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa24 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa38 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa4c */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa58 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa64 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaa98 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaac4 */
/* WARNING: Switch with 1 destination removed at 0x0001001eaae0 */
/* WARNING: Switch with 1 destination removed at 0x0001001eab18 */
/* WARNING: Switch with 1 destination removed at 0x0001001eab44 */
/* WARNING: Switch with 1 destination removed at 0x0001001eab68 */
/* WARNING: Switch with 1 destination removed at 0x0001001eabb4 */
/* WARNING: Switch with 1 destination removed at 0x0001001eabd8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eabf4 */

void Recovered_YYYVideoToolView_m01536
               (undefined1 param_1 [16],double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x1;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_5);
  auVar8 = func_0x000100973860(uVar1);
  lVar2 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 < 2) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 2) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x00010094e300(uVar1,auVar8._8_8_,param_3);
      dVar5 = param_2;
      func_0x00010093a040(param_3);
                    /* WARNING: Switch is manually overridden */
      dVar6 = (double)func_0x00010093a040(param_3);
      dVar7 = (double)func_0x0001001f5f00(param_3);
                    /* WARNING: Switch is manually overridden */
      fVar3 = (float)((double)((long)(param_2 - dVar5) / 0xf) / 10.0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(dVar6 < dVar7 * 0.5) {
      case false:
        dVar5 = (double)func_0x0001001f5f04(param_3);
        func_0x00010094ef40(uRam0000000100c71598);
        uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x0001001f5f08(dVar5 - (double)fVar3,uVar4);
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        func_0x0001009794e0(param_3);
        uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        dVar5 = (double)func_0x00010093a120(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010096fd80((float)(dVar5 - (double)fVar3),uVar4,extraout_x1,1);
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 1) {
    case true:
                    /* WARNING: Switch is manually overridden */
      uVar4 = func_0x0001001f5ef4(uVar1,auVar8._8_8_,param_3);
                    /* WARNING: Switch is manually overridden */
      func_0x000100960c00(uVar4,param_2,param_3);
      dVar5 = (double)func_0x0001001f5ef8(param_3);
      dVar6 = (double)func_0x0001009433a0(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(dVar5 < dVar6 * 0.5) {
      case false:
        func_0x00010094ef40(uRam0000000100c71598);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        func_0x00010093a7c0();
        func_0x000100960c80(param_3);
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x0001009794e0(param_3);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        fVar3 = (float)func_0x000100978b20();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x0001001f5efc((double)fVar3,param_3);
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
      }
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView doubleGestureHandle]
 * Entry: 0x1001eabf8; original ABI: v16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eac00 */

void Recovered_YYYVideoToolView_m01537(undefined8 param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100939710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100afcb80)(param_1,PTR_s_autoHidden_100c5ba18);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView tapHandle]
 * Entry: 0x1001eac08; original ABI: v16@0:8
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eac20 */
/* WARNING: Switch with 1 destination removed at 0x0001001eac38 */
/* WARNING: Switch with 1 destination removed at 0x0001001eac64 */

void Recovered_YYYVideoToolView_m01538(undefined8 param_1)

{
  uint uVar1;
  undefined8 extraout_x1;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100971be0(param_1);
                    /* WARNING: Switch is manually overridden */
  func_0x00010096cea0(param_1,extraout_x1,uVar1 ^ 1,1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView hiddenTool]
 * Entry: 0x1001eac74; original ABI: v16@0:8
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eac7c */

void Recovered_YYYVideoToolView_m01539(undefined8 param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010096ceb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100afcb80)(param_1,PTR_s_setShow_animation__100c6cc50,0,1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView cancelAutoHidden]
 * Entry: 0x1001eac8c; original ABI: v16@0:8
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eacb4 */
/* WARNING: Switch with 1 destination removed at 0x0001001eace8 */

void Recovered_YYYVideoToolView_m01540(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Switch is manually overridden */
  func_0x00010093bae0(uRam0000000100c71840,param_2,param_1,PTR_s_hiddenTool_100c60640,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView autoHidden]
 * Entry: 0x1001eacfc; original ABI: v16@0:8
 * Original instructions in modeled body: 18; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ead14 */
/* WARNING: Switch with 1 destination removed at 0x0001001ead74 */

void Recovered_YYYVideoToolView_m01541(undefined8 param_1)

{
  ulong uVar1;
  
  func_0x00010093b900(param_1);
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100971be0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001001ead2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d48050))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setShow:animation:]
 * Entry: 0x1001eadac; original ABI: v24@0:8B16B20
 * Original instructions in modeled body: 32; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eade0 */
/* WARNING: Switch with 1 destination removed at 0x0001001eadf4 */
/* WARNING: Switch with 1 destination removed at 0x0001001eae0c */
/* WARNING: Switch with 1 destination removed at 0x0001001eae18 */

void Recovered_YYYVideoToolView_m01542(long param_1,undefined8 param_2,ulong param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(char *)(param_1 + iRam0000000100c75a98) = (char)param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001eae38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((param_3 & 0xffffffff) * 8 + 0x100d480d0))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView changeTopAndBottomViewConstraint]
 * Entry: 0x1001eb16c; original ABI: v16@0:8
 * Original instructions in modeled body: 27; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eb190 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb19c */
/* WARNING: Switch with 1 destination removed at 0x0001001eb1a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb390 */

void Recovered_YYYVideoToolView_m01543(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = func_0x00010094e380(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001eb1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d48250))(0);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setLock:]
 * Entry: 0x1001eb3e8; original ABI: v20@0:8B16
 * Original instructions in modeled body: 255; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eb418 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb42c */
/* WARNING: Switch with 1 destination removed at 0x0001001eb438 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb444 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb4d0 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb570 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb58c */
/* WARNING: Switch with 1 destination removed at 0x0001001eb6a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb6c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb6d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb740 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb7cc */
/* WARNING: Switch with 1 destination removed at 0x0001001eb840 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYVideoToolView_m01544(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar2;
  undefined1 auVar3 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91964 == 0) {
  case true:
    bRam0000000100d478bb = bRam0000000100d478b0 ^ 0x86;
    bRam0000000100d478bc = bRam0000000100d478b1 ^ 0x42;
    bRam0000000100d478bd = bRam0000000100d478b2 ^ 0xde;
    bRam0000000100d478be = bRam0000000100d478b3 ^ 0x2d;
    bRam0000000100d478bf = bRam0000000100d478b4 ^ 0xf6;
    bRam0000000100d478c0 = bRam0000000100d478b5 ^ 0x8f;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d478c1 = bRam0000000100d478b6 ^ 0xc5;
    bRam0000000100d478c2 = bRam0000000100d478b7 ^ 0xd;
    bRam0000000100d478c3 = bRam0000000100d478b8 ^ 0xfd;
    bRam0000000100d478c4 = bRam0000000100d478b9 ^ 0xf2;
    bRam0000000100d478c5 = bRam0000000100d478ba ^ 0xb3;
    cRam0000000100d478d3 = bRam0000000100d478c6 + (bRam0000000100d478c6 & 0xbb) * -2 + -0x45;
    bRam0000000100d478d4 = bRam0000000100d478c7 ^ 0x3f;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d478d5 = ~((bRam0000000100d478c8 | 0x86) & (bRam0000000100d478c8 ^ 0xff | 0x79));
    bRam0000000100d478d6 = bRam0000000100d478c9 ^ 0x97;
    cRam0000000100d478d7 = bRam0000000100d478ca + (bRam0000000100d478ca & 0x13) * -2 + -0x6d;
    bRam0000000100d478d8 = bRam0000000100d478cb ^ 0x2c;
    bRam0000000100d478d9 = bRam0000000100d478cc ^ 0x78;
    cRam0000000100d478da = bRam0000000100d478cd + (bRam0000000100d478cd & 1) * -2 + '\x01';
    cRam0000000100d478db = bRam0000000100d478ce + (bRam0000000100d478ce & 0x69) * -2 + 'i';
    cRam0000000100d478dc = bRam0000000100d478cf + (bRam0000000100d478cf & 0x26) * -2 + '&';
    bRam0000000100d478dd = bRam0000000100d478d0 ^ 0x56;
    bRam0000000100d478de = bRam0000000100d478d1 ^ 0x70;
    bRam0000000100d478df = bRam0000000100d478d2 ^ 0xe5;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e91964 = 1;
                    /* WARNING: Switch is manually overridden */
  lVar2 = (long)iRam0000000100c75a94;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)(param_1 + lVar2) == param_3) {
  case false:
    func_0x00010093b900(param_1);
    func_0x0001009531c0(0x4008000000000000,param_1,extraout_x1,PTR_s_hiddenTool_100c60640,0);
    *(byte *)(param_1 + lVar2) = (byte)param_3;
    uVar1 = 0x100d478e0;
    if (param_3 == 0) {
      uVar1 = 0x100d47900;
    }
                    /* WARNING: Switch is manually overridden */
    func_0x000100947300(uRam0000000100c713c0,extraout_x1_00,uVar1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094e3a0(param_1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009653a0(auVar3._0_8_,auVar3._8_8_,uVar1,0);
    _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
    *(byte *)(param_1 + iRam0000000100c75a98) = (byte)param_3 ^ 1;
    func_0x00010093c1c0(param_1);
    puStack_80 = PTR___NSConcreteStackBlock_100afc560;
    uStack_78 = _UNK_10097b060;
    puStack_70 = &DAT_1001eb860;
    puStack_68 = &UNK_100afea38;
    lStack_60 = param_1;
    func_0x000100938340(_UNK_10097e1c0,uRam0000000100c71418,extraout_x1_01,&puStack_80);
    _objc_release(uVar1);
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setPlaying:]
 * Entry: 0x1001eb8b0; original ABI: v20@0:8B16
 * Original instructions in modeled body: 43; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001eb8dc */
/* WARNING: Switch with 1 destination removed at 0x0001001eb8e8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb910 */
/* WARNING: Switch with 1 destination removed at 0x0001001eb91c */
/* WARNING: Switch with 1 destination removed at 0x0001001eb938 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebab8 */

void Recovered_YYYVideoToolView_m01545(long param_1,undefined8 param_2,uint param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)(param_1 + iRam0000000100c75a9c) != param_3) {
  case false:
                    /* WARNING: Switch is manually overridden */
    return;
  case true:
                    /* WARNING: Switch is manually overridden */
    *(char *)(param_1 + iRam0000000100c75a9c) = (char)param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001eb948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulong)param_3 * 8 + 0x100d48510))();
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView playImage]
 * Entry: 0x1001ebb70; original ABI: @16@0:8
 * Original instructions in modeled body: 113; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ebb8c */
/* WARNING: Switch with 1 destination removed at 0x0001001ebbd0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebc04 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebc28 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebc40 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebc78 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebc8c */
/* WARNING: Switch with 1 destination removed at 0x0001001ebcb0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebce0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebcec */
/* WARNING: Switch with 1 destination removed at 0x0001001ebcf8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebd54 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebd60 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebd70 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebd9c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYVideoToolView_m01546(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91968 == 0) {
  case true:
    bRam0000000100d4792b = bRam0000000100d47920 ^ 0x77;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d4792c = bRam0000000100d47921 ^ 0x78;
    uRam0000000100d4792d =
         CONCAT17((byte)((ulong)uRam0000000100d47922 >> 0x38) ^
                  (byte)((ulong)_UNK_10097e1c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d47922 >> 0x30) ^
                           (byte)((ulong)_UNK_10097e1c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d47922 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097e1c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d47922 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097e1c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d47922 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097e1c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d47922 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097e1c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d47922 >> 8) ^
                                                  (byte)((ulong)_UNK_10097e1c8 >> 8),
                                                  (byte)uRam0000000100d47922 ^ (byte)_UNK_10097e1c8)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d47935 = bRam0000000100d4792a ^ 0x16;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91968 = 1;
  lVar3 = (long)iRam0000000100c75aa0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar3) != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100947300(uRam0000000100c713c0,param_2,0x100d47940);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView pauseImage]
 * Entry: 0x1001ebda0; original ABI: @16@0:8
 * Original instructions in modeled body: 142; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ebdc8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebe1c */
/* WARNING: Switch with 1 destination removed at 0x0001001ebe58 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebef4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebf10 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebf28 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebf4c */
/* WARNING: Switch with 1 destination removed at 0x0001001ebf7c */
/* WARNING: Switch with 1 destination removed at 0x0001001ebfa0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebfac */
/* WARNING: Switch with 1 destination removed at 0x0001001ebfc4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ebfe0 */

void Recovered_YYYVideoToolView_m01547(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9196c == 0) {
  case true:
    bRam0000000100d4796c = bRam0000000100d47960 ^ 0xae;
    bRam0000000100d4796d = bRam0000000100d47961 ^ 0xa6;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d4796e = bRam0000000100d47962 ^ 0x10;
    cRam0000000100d4796f = bRam0000000100d47963 + (bRam0000000100d47963 & 7) * -2 + -0x79;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d47970 = bRam0000000100d47964 ^ 0x4f;
    bRam0000000100d47971 = bRam0000000100d47965 ^ 0xb0;
    bRam0000000100d47972 = bRam0000000100d47966 ^ 0xc;
    bRam0000000100d47973 = bRam0000000100d47967 ^ 0x2f;
    bRam0000000100d47974 = bRam0000000100d47968 ^ 0xd2;
    bRam0000000100d47975 = bRam0000000100d47969 ^ 0x30;
    cRam0000000100d47976 = bRam0000000100d4796a + (bRam0000000100d4796a & 0xcc) * -2 + 'L';
    bRam0000000100d47977 = bRam0000000100d4796b ^ 0x15;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e9196c = 1;
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75aa4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar3) != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x000100947300(uRam0000000100c713c0,param_2,0x100d47980);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView changeLockState]
 * Entry: 0x1001ebff4; original ABI: v16@0:8
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ec00c */
/* WARNING: Switch with 1 destination removed at 0x0001001ec018 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec04c */
/* WARNING: Switch with 1 destination removed at 0x0001001ec058 */

void Recovered_YYYVideoToolView_m01548(undefined8 param_1)

{
  uint uVar1;
  undefined8 extraout_x1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x0001001f5f6c(param_1);
  func_0x0001001f5f70(param_1,extraout_x1,uVar1 ^ 1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView loadSubviews]
 * Entry: 0x1001ec068; original ABI: v16@0:8
 * Original instructions in modeled body: 1027; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ec098 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec0a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec0b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec0cc */
/* WARNING: Switch with 1 destination removed at 0x0001001ec130 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec608 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec648 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec75c */
/* WARNING: Switch with 1 destination removed at 0x0001001ec7f4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ec804 */
/* WARNING: Switch with 1 destination removed at 0x0001001ecd18 */
/* WARNING: Switch with 1 destination removed at 0x0001001ed69c */
/* WARNING: Switch with 1 destination removed at 0x0001001ed824 */

void Recovered_YYYVideoToolView_m01549(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91970 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    cRam0000000100d479f5 = bRam0000000100d479ea + (bRam0000000100d479ea & 0x3c) * -2 + -0x44;
    bRam0000000100d479f6 = bRam0000000100d479eb ^ 0xfe;
    cRam0000000100d479f7 = bRam0000000100d479ec + (bRam0000000100d479ec & 5) * -2 + -0x7b;
    bRam0000000100d479f8 = bRam0000000100d479ed ^ 0xef;
    bRam0000000100d479f9 = ~((bRam0000000100d479ee | 0x5c) & (bRam0000000100d479ee ^ 0xff | 0xa3));
    bRam0000000100d479fa = bRam0000000100d479ef ^ 0xb4;
    bRam0000000100d479fb = bRam0000000100d479f0 ^ 0xf0;
    bRam0000000100d479fc = bRam0000000100d479f1 ^ 0xa6;
    bRam0000000100d479fd = ~((bRam0000000100d479f2 | 0x9d) & (bRam0000000100d479f2 ^ 0xff | 0x62));
    cRam0000000100d479fe = bRam0000000100d479f3 + (bRam0000000100d479f3 & 0xbb) * -2 + ';';
    bRam0000000100d479ff = bRam0000000100d479f4 ^ 1;
    bRam0000000100d47a0d = bRam0000000100d47a00 ^ 0x59;
    cRam0000000100d47a0e = bRam0000000100d47a01 + (bRam0000000100d47a01 & 0x22) * -2 + -0x5e;
    bRam0000000100d47a0f = bRam0000000100d47a02 ^ 0x98;
    bRam0000000100d47a10 = bRam0000000100d47a03 ^ 0x7d;
    bRam0000000100d47a11 = bRam0000000100d47a04 ^ 0x26;
    cRam0000000100d47a12 = bRam0000000100d47a05 + (bRam0000000100d47a05 & 0x58) * -2 + -0x28;
    bRam0000000100d47a13 = bRam0000000100d47a06 ^ 0xbe;
    bRam0000000100d47a14 = bRam0000000100d47a07 ^ 0x2e;
    bRam0000000100d47a15 = bRam0000000100d47a08 ^ 0x1e;
    bRam0000000100d47a16 = bRam0000000100d47a09 ^ 0x11;
    bRam0000000100d47a17 = bRam0000000100d47a0a ^ 0xcc;
    bRam0000000100d47a18 = bRam0000000100d47a0b ^ 0x28;
    bRam0000000100d47a19 = ~((bRam0000000100d47a0c | 9) & (bRam0000000100d47a0c ^ 0xff | 0xf6));
    uRam0000000100d479e4 = uRam0000000100d479de ^ 0x891c;
    uRam0000000100d479e6 = uRam0000000100d479e0 ^ 0xd561;
    sRam0000000100d479e8 = uRam0000000100d479e2 + (uRam0000000100d479e2 & 0x484a) * -2 + -0x37b6;
    cRam0000000100d479d1 = bRam0000000100d479c4 + (bRam0000000100d479c4 & 0xd) * -2 + -0x73;
    bRam0000000100d479d2 = bRam0000000100d479c5 ^ 0x27;
    bRam0000000100d479d3 = bRam0000000100d479c6 ^ 0xf7;
    bRam0000000100d479d4 = bRam0000000100d479c7 ^ 0xe4;
    bRam0000000100d479d5 = bRam0000000100d479c8 ^ 0xa4;
    bRam0000000100d479d6 = bRam0000000100d479c9 ^ 0x77;
    bRam0000000100d479d7 = bRam0000000100d479ca ^ 0xc0;
    cRam0000000100d479d8 = bRam0000000100d479cb + (bRam0000000100d479cb & 4) * -2 + -0x7c;
    cRam0000000100d479d9 = bRam0000000100d479cc + (bRam0000000100d479cc & 0x2e) * -2 + '.';
    cRam0000000100d479da = bRam0000000100d479cd + (bRam0000000100d479cd & 0x76) * -2 + 'v';
    bRam0000000100d479db = bRam0000000100d479ce ^ 0x39;
    bRam0000000100d479dc = bRam0000000100d479cf ^ 0xf2;
    bRam0000000100d479dd = bRam0000000100d479d0 ^ 0xe7;
    cRam0000000100d479a6 = bRam0000000100d479a0 + (bRam0000000100d479a0 & 0xee) * -2 + 'n';
    bRam0000000100d479a7 = bRam0000000100d479a1 ^ 0xfc;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100d479a8 = bRam0000000100d479a2 + (bRam0000000100d479a2 & 0xd) * -2 + '\r';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d479a9 = bRam0000000100d479a3 ^ 0x58;
    bRam0000000100d479aa = bRam0000000100d479a4 ^ 0x34;
    bRam0000000100d479ab = bRam0000000100d479a5 ^ 0x7a;
    bRam0000000100d479b8 = bRam0000000100d479ac ^ 0xfb;
    bRam0000000100d479b9 = bRam0000000100d479ad ^ 0x25;
    bRam0000000100d479ba = bRam0000000100d479ae ^ 0xb3;
    cRam0000000100d479bb = bRam0000000100d479af + (bRam0000000100d479af & 3) * -2 + -0x7d;
    bRam0000000100d479bc = bRam0000000100d479b0 ^ 0xd4;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d479bd = bRam0000000100d479b1 ^ 7;
    bRam0000000100d479be = bRam0000000100d479b2 ^ 0xac;
    bRam0000000100d479bf = bRam0000000100d479b3 ^ 0x8c;
    bRam0000000100d479c0 = bRam0000000100d479b4 ^ 0x77;
    bRam0000000100d479c1 = ~((bRam0000000100d479b5 | 0x73) & (bRam0000000100d479b5 ^ 0xff | 0x8c));
    bRam0000000100d479c2 = bRam0000000100d479b6 ^ 200;
    cRam0000000100d479c3 = bRam0000000100d479b7 + (bRam0000000100d479b7 & 2) * -2 + '\x02';
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e91970 = 1;
  auVar8 = func_0x000100951360(uRam0000000100c71418);
  func_0x000100962180(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093dd00(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093dd00(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar8 = func_0x0001001f5f78(uRam0000000100c71418);
  func_0x0001001f5f7c(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100976f00(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar4,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
  auVar8 = func_0x000100951360(uRam0000000100c71c58);
  func_0x00010096f580(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  uVar6 = 0;
  uVar5 = func_0x0001001f5f80(0,0);
  func_0x000100976ec0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100945ae0();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096d6a0(uVar5,uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar6 = 0x3ff0000000000000;
  uVar5 = func_0x0001001ed828(0,0x3ff0000000000000);
  func_0x000100976ec0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100945ae0();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963b80(uVar5,uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000100976ec0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5f84(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094a5a0(param_1,auVar8._8_8_,uVar2,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar2);
  func_0x0001001f5f88(uRam0000000100c71428,extraout_x1,0);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960740(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  uVar5 = 0xc034000000000000;
  uVar6 = 0xc034000000000000;
  uVar7 = 0xc034000000000000;
  uVar3 = func_0x0001001f5f8c(0xc034000000000000,0xc034000000000000,0xc034000000000000,
                              0xc034000000000000);
  func_0x0001009399c0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096a480(uVar3,uVar5,uVar6,uVar7);
  _objc_release(uVar2);
  uVar2 = uRam0000000100c713c0;
  uVar5 = 0x4037000000000000;
  uVar3 = func_0x0001001f5f90(0x402a000000000000,0x4037000000000000);
  func_0x0001001f5f94(uRam0000000100c71438);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100956d60(uVar3,uVar5,0x4008000000000000,uVar2,auVar8._8_8_,5,auVar8._0_8_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  func_0x0001009399c0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009653a0(auVar8._0_8_,auVar8._8_8_,uVar2,0);
  _objc_release(auVar8._0_8_);
  func_0x0001001f5f98(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009399c0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  auVar8 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001001f5f9c(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100979940(uRam0000000100c71438);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fa0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fa4(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x000100976f00(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fa8(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x00010093aca0(param_1,extraout_x1_00,0x100d47ac0);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100966c40(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010094e3a0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fac(auVar8._0_8_,auVar8._8_8_,param_1,PTR_s_changeLockState_100c5c840,0x40);
  _objc_release(auVar8._0_8_);
  func_0x00010094e3a0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar4,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  auVar8 = func_0x000100951360(uRam0000000100c71418);
  func_0x0001001f5fb0(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093a680(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar4,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  auVar8 = func_0x000100951360(uRam0000000100c71c58);
  func_0x000100960e80(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x0001001f5fb4(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093dd00(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094a5a0(param_1,auVar8._8_8_,uVar3,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  uVar3 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001001f5fb8(uRam0000000100c71438);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100974e00(0x4028000000000000,uRam0000000100c713a8);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010096ea20(uVar3,extraout_x1_01,2);
                    /* WARNING: Switch is manually overridden */
  func_0x00010096ea00(uVar3,extraout_x1_02,0x100d47a20);
  func_0x0001001f5fbc(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fc0(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  func_0x0001001f5fc4(param_1,extraout_x1_03,uVar3);
  _objc_release(uVar3);
  uVar3 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001001f5fc8(uRam0000000100c71438);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100974e00(0x4028000000000000,uRam0000000100c713a8);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x0001001f5fcc(uVar3,extraout_x1_04,0);
  func_0x00010096ea00(uVar3,extraout_x1_05,0x100d47a20);
  func_0x0001001f5fd0(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  func_0x00010096f6e0(param_1,extraout_x1_06,uVar3);
  _objc_release(uVar3);
  auVar8 = func_0x000100951360(uRam0000000100c71c60);
  func_0x00010096d340(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093a680(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972a80(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fd4(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x00010093aca0(param_1,extraout_x1_07,0x100d47aa0);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968f80(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093a680(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100953780(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x00010093aca0(param_1,extraout_x1_08,0x100d47a40);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fd8(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093a680(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fdc(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x0001001f5fe0(param_1,extraout_x1_09,0x100d47a60);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096b580(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010093a680(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fe4(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x0001001f5fe8(uRam0000000100c71428,extraout_x1_10,0);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096af60(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100959960(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a8a0(0x100d47a80);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f100(uVar3,auVar8._8_8_,auVar8._0_8_,0);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x00010093a680(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5fec(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar3,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  auVar8 = _objc_alloc(uRam0000000100c71c68);
  auVar8 = func_0x0001001f5ff0(auVar8._0_8_,auVar8._8_8_,1);
  func_0x000100966ac0(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x00010094df40(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar3);
  func_0x0001001f5ff4(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar4,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  auVar8 = func_0x000100951360(uRam0000000100c71c70);
  func_0x0001001f5ff8(param_1,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  func_0x000100953780(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_autoHidden_100c5ba18;
  func_0x0001009375a0(auVar8._0_8_,auVar8._8_8_,param_1,PTR_s_autoHidden_100c5ba18,0x40);
  _objc_release(auVar8._0_8_);
  func_0x000100973180(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f5ffc(auVar8._0_8_,auVar8._8_8_,param_1,puVar1,0x40);
  _objc_release(auVar8._0_8_);
  func_0x0001001f6000(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009375a0(auVar8._0_8_,auVar8._8_8_,param_1,puVar1,0x40);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView safeAreaInsetsDidChange]
 * Entry: 0x1001ed87c; original ABI: v16@0:8
 * Original instructions in modeled body: 89; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ed8c4 */
/* WARNING: Switch with 1 destination removed at 0x0001001ed9e8 */
/* WARNING: Switch with 1 destination removed at 0x0001001eda00 */
/* WARNING: Switch with 1 destination removed at 0x0001001eda0c */
/* WARNING: Switch with 1 destination removed at 0x0001001eda28 */
/* WARNING: Switch with 1 destination removed at 0x0001001eda70 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYVideoToolView_m01550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
  uStack_78 = uRam0000000100c73a90;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_safeAreaInsetsDidChange_100c67ef8);
  func_0x00010093dd00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _UNK_10097b060;
  puStack_b0 = puVar2;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_1001eda74;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x00010094f4a0(auVar3._0_8_,auVar3._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x00010093c1c0(param_1);
  puStack_e0 = puVar2;
  uStack_d8 = uVar1;
  puStack_d0 = &DAT_1001ef420;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_c8 = &UNK_100afea38;
  uStack_c0 = param_1;
  func_0x000100953200(uRam0000000100c71418,extraout_x1,&puStack_e0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView yyy_setupViewsConstraints]
 * Entry: 0x1001ef47c; original ABI: v16@0:8
 * Original instructions in modeled body: 346; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ef7e8 */
/* WARNING: Switch with 1 destination removed at 0x0001001efaac */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYVideoToolView_m01551(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = uRam0000000100c73a90;
  uStack_88 = param_1;
  func_0x0001001f6118(&uStack_88,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x00010093dd00(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093dd00(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
  uVar1 = _UNK_10097b060;
  puStack_b0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_1001efb40;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x00010094f380(auVar5._0_8_,auVar5._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar5._0_8_);
  func_0x000100976f00(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = uVar1;
  puStack_d0 = &DAT_1001f013c;
  puStack_c8 = &UNK_100b01a08;
  uStack_c0 = param_1;
  auVar5 = _objc_retain(uVar3);
  uStack_b8 = auVar5._0_8_;
  func_0x00010094f380(uVar4,auVar5._8_8_,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x000100976ec0(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_108 = puVar2;
  uStack_100 = uVar1;
  puStack_f8 = &DAT_1001f07e0;
  puStack_f0 = &UNK_100afeb38;
  uStack_e8 = param_1;
  func_0x0001001f611c(auVar6._0_8_,auVar6._8_8_,&puStack_108);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x0001001f6120(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar2;
  uStack_128 = uVar1;
  puStack_120 = &DAT_1001f0ac8;
  puStack_118 = &UNK_100afeb38;
  uStack_110 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_130);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x000100976a00(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_158 = puVar2;
  uStack_150 = uVar1;
  puStack_148 = &DAT_1001f0e24;
  puStack_140 = &UNK_100afeb38;
  uStack_138 = param_1;
  func_0x0001001f6124(auVar6._0_8_,auVar6._8_8_,&puStack_158);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x0001001f6128(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_180 = puVar2;
  uStack_178 = uVar1;
  puStack_170 = &DAT_1001f148c;
  puStack_168 = &UNK_100afeb38;
  auVar5 = _objc_retain(auVar5._0_8_);
  uStack_160 = auVar5._0_8_;
  func_0x00010094f380(uVar3,auVar5._8_8_,&puStack_180);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x0001001f612c(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = puVar2;
  uStack_1a8 = uVar1;
  puStack_1a0 = &DAT_1001f1730;
  puStack_198 = &UNK_100b01a08;
  auVar5 = _objc_retain(auVar5._0_8_);
  uStack_190 = auVar5._0_8_;
  uStack_188 = param_1;
  func_0x00010094f380(uVar3,auVar5._8_8_,&puStack_1b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010093a640(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_1d8 = puVar2;
  uStack_1d0 = uVar1;
  puStack_1c8 = &DAT_1001f1e28;
  puStack_1c0 = &UNK_100afeb38;
  uStack_1b8 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_1d8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x00010093ef20(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar2;
  uStack_1f8 = uVar1;
  puStack_1f0 = &DAT_1001f2220;
  puStack_1e8 = &UNK_100afeb38;
  uStack_1e0 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_200);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x000100972a80(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_228 = puVar2;
  uStack_220 = uVar1;
  puStack_218 = &DAT_1001f26c4;
                    /* WARNING: Switch is manually overridden */
  puStack_210 = &UNK_100afeb38;
  uStack_208 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_228);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x000100977140(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_250 = puVar2;
  uStack_248 = uVar1;
  puStack_240 = &DAT_1001f2b74;
  puStack_238 = &UNK_100afeb38;
  uStack_230 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_250);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x00010095c9a0(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar2;
  uStack_270 = uVar1;
  puStack_268 = &DAT_1001f2ee8;
  puStack_260 = &UNK_100afeb38;
  uStack_258 = param_1;
  func_0x0001001f6130(auVar6._0_8_,auVar6._8_8_,&puStack_278);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x000100953780(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_2a0 = puVar2;
  uStack_298 = uVar1;
  puStack_290 = &DAT_1001f3578;
  puStack_288 = &UNK_100afeb38;
  uStack_280 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_2a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x000100973180(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_2c8 = puVar2;
  uStack_2c0 = uVar1;
  puStack_2b8 = &DAT_1001f39b8;
  puStack_2b0 = &UNK_100afeb38;
  uStack_2a8 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_2c8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x0001001f6134(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puStack_2f0 = puVar2;
  uStack_2e8 = uVar1;
  puStack_2e0 = &DAT_1001f3ee0;
  puStack_2d8 = &UNK_100afeb38;
  uStack_2d0 = param_1;
  func_0x00010094f380(auVar6._0_8_,auVar6._8_8_,&puStack_2f0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x00010094df40(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  puStack_318 = puVar2;
  uStack_310 = uVar1;
  puStack_308 = &DAT_1001f4318;
  puStack_300 = &UNK_100afeb38;
  uStack_2f8 = auVar5._0_8_;
  auVar5 = _objc_retain();
  func_0x00010094f380(uVar3,auVar5._8_8_,&puStack_318);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uStack_2f8);
  _objc_release(uStack_190);
  _objc_release(uStack_160);
  _objc_release(uStack_b8);
  _objc_release(auVar5._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView buttonWithImageName:]
 * Entry: 0x1001f4524; original ABI: @24@0:8@16
 * Original instructions in modeled body: 39; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f45ac */

void Recovered_YYYVideoToolView_m01552(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = uRam0000000100c71428;
  auVar2 = _objc_retain(param_3);
  func_0x0001001f664c(uVar1,auVar2._8_8_,0);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001f6650(uRam0000000100c713c0,auVar3._8_8_,auVar2._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar2._0_8_);
  func_0x0001001f6654(auVar3._0_8_,extraout_x1,uVar1,0);
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView volumeSlider]
 * Entry: 0x1001f45c8; original ABI: @16@0:8
 * Original instructions in modeled body: 287; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4610 */
/* WARNING: Switch with 1 destination removed at 0x0001001f461c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4638 */
/* WARNING: Switch with 1 destination removed at 0x0001001f466c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4690 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4778 */
/* WARNING: Switch with 1 destination removed at 0x0001001f47fc */
/* WARNING: Switch with 1 destination removed at 0x0001001f4808 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4818 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4824 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4848 */
/* WARNING: Switch with 1 destination removed at 0x0001001f488c */
/* WARNING: Switch with 1 destination removed at 0x0001001f489c */
/* WARNING: Switch with 1 destination removed at 0x0001001f48c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f48dc */
/* WARNING: Switch with 1 destination removed at 0x0001001f48ec */
/* WARNING: Switch with 1 destination removed at 0x0001001f48f8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4928 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4944 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4950 */
/* WARNING: Switch with 1 destination removed at 0x0001001f495c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4acc */
/* WARNING: Switch with 1 destination removed at 0x0001001f4ae8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4af4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4b04 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4b10 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4b80 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4bec */
/* WARNING: Switch with 1 destination removed at 0x0001001f4c08 */

void Recovered_YYYVideoToolView_m01553(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined4 *extraout_x8;
  undefined4 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar6 = (undefined4 *)0x100e919bc;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e919bc == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    cRam0000000100d47bff = bRam0000000100d47bf0 + (bRam0000000100d47bf0 & 0x3e) * -2 + -0x42;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d47c00 = bRam0000000100d47bf1 ^ 0xbd;
    bRam0000000100d47c01 = bRam0000000100d47bf2 ^ 0xb4;
    cRam0000000100d47c02 = bRam0000000100d47bf3 + (bRam0000000100d47bf3 & 0x68) * -2 + -0x18;
    bRam0000000100d47c03 = bRam0000000100d47bf4 ^ 0xbf;
    bRam0000000100d47c04 = bRam0000000100d47bf5 ^ 0xc;
    bRam0000000100d47c05 = bRam0000000100d47bf6 ^ 0xa2;
    bRam0000000100d47c06 = bRam0000000100d47bf7 ^ 0x41;
    bRam0000000100d47c07 = bRam0000000100d47bf8 ^ 0x37;
    cRam0000000100d47c08 = bRam0000000100d47bf9 + (bRam0000000100d47bf9 & 0x4a) * -2 + -0x36;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d47c09 = bRam0000000100d47bfa ^ 8;
    bRam0000000100d47c0a = bRam0000000100d47bfb ^ 0x1f;
    bRam0000000100d47c0b = ~((bRam0000000100d47bfc | 0x56) & (bRam0000000100d47bfc ^ 0xff | 0xa9));
    bRam0000000100d47c0c = bRam0000000100d47bfd ^ 0x33;
    bRam0000000100d47c0d = ~((bRam0000000100d47bfe | 0xfc) & (~bRam0000000100d47bfe | 3));
                    /* WARNING: Switch is manually overridden */
  }
  plVar1 = &lStack_70;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    *puVar6 = 1;
    lVar7 = (long)iRam0000000100c75aa8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(long *)(param_1 + lVar7) != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      *(undefined8 *)((long)plVar1 + -0x18) = 0;
      *(undefined8 *)((long)plVar1 + -0x20) = 0;
      *(undefined8 *)((long)plVar1 + -8) = 0;
      *(undefined8 *)((long)plVar1 + -0x10) = 0;
      *(undefined8 *)((long)plVar1 + -0x38) = 0;
      *(undefined8 *)((long)plVar1 + -0x40) = 0;
      *(undefined8 *)((long)plVar1 + -0x28) = 0;
      *(undefined8 *)((long)plVar1 + -0x30) = 0;
      func_0x0001001f6658(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x000100974800(uVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar5 = func_0x0001001f665c(uVar4,extraout_x1,(undefined8 *)((long)plVar1 + -0x40),
                                  (undefined1 *)((long)plVar1 + -0xc0),0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar5 == 0) {
      case false:
                    /* WARNING: Switch is manually overridden */
        lStack_70 = **(long **)((long)plVar1 + -0x30);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(**(long **)((long)plVar1 + -0x30) == lStack_70) {
        case false:
                    /* WARNING: Switch is manually overridden */
          _objc_enumerationMutation(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        func_0x00010093c700(**(undefined8 **)((long)plVar1 + -0x38));
        func_0x0001001f6660();
        auVar8 = _objc_retainAutoreleasedReturnValue();
        uVar3 = func_0x00010094b580(auVar8._0_8_,auVar8._8_8_,0x100d47c10);
        _objc_release(auVar8._0_8_);
                    /* WARNING: Could not recover jumptable at 0x0001001f49a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100d4a0d0))();
        return;
      case true:
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    }
    param_1 = *(long *)(param_1 + lVar7);
    _objc_retainAutoreleaseReturnValue(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    *extraout_x8 = 1;
    plVar1 = (long *)((long)plVar1 + -0xc0);
    puVar6 = extraout_x8;
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView tapGesture]
 * Entry: 0x1001f4c0c; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4c14 */

undefined8 Recovered_YYYVideoToolView_m01554(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75aac);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTapGesture:]
 * Entry: 0x1001f4c28; original ABI: v24@0:8@16
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4c4c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4c58 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4c68 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4c8c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4cc8 */

void Recovered_YYYVideoToolView_m01555(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75aac;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView doubleGesture]
 * Entry: 0x1001f4ccc; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4cdc */

undefined8 Recovered_YYYVideoToolView_m01556(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ab0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setDoubleGesture:]
 * Entry: 0x1001f4ce8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4d10 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4d1c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4d54 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4d70 */

void Recovered_YYYVideoToolView_m01557(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75ab0;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView contentView]
 * Entry: 0x1001f4d74; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4d84 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4d94 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4da0 */

undefined8 Recovered_YYYVideoToolView_m01558(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ab4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setContentView:]
 * Entry: 0x1001f4dac; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4dcc */
/* WARNING: Switch with 1 destination removed at 0x0001001f4de0 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4e14 */

void Recovered_YYYVideoToolView_m01559(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ab4,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView topView]
 * Entry: 0x1001f4e18; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4e2c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4e38 */

undefined8 Recovered_YYYVideoToolView_m01560(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ab8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTopView:]
 * Entry: 0x1001f4e40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4e58 */

void Recovered_YYYVideoToolView_m01561(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75ab8;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView backButton]
 * Entry: 0x1001f4e84; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4e8c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4e98 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4eac */

undefined8 Recovered_YYYVideoToolView_m01562(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75abc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBackButton:]
 * Entry: 0x1001f4eb8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4ec4 */

void Recovered_YYYVideoToolView_m01563(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75abc,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView titleLabel]
 * Entry: 0x1001f4ed8; original ABI: @16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYVideoToolView_m01564(long param_1)

{
  return *(undefined8 *)(param_1 + iRam0000000100c75ac0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTitleLabel:]
 * Entry: 0x1001f4ee8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4f10 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4f1c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4f28 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4f5c */

void Recovered_YYYVideoToolView_m01565(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + iRam0000000100c75ac0,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView lockButton]
 * Entry: 0x1001f4f60; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4f68 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4f7c */
/* WARNING: Switch with 1 destination removed at 0x0001001f4f88 */

undefined8 Recovered_YYYVideoToolView_m01566(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ac4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setLockButton:]
 * Entry: 0x1001f4f94; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f4fb4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4fc8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f4fec */

void Recovered_YYYVideoToolView_m01567(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ac4,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView bottomView]
 * Entry: 0x1001f5000; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5008 */
/* WARNING: Switch with 1 destination removed at 0x0001001f501c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5028 */

undefined8 Recovered_YYYVideoToolView_m01568(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ac8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBottomView:]
 * Entry: 0x1001f5034; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5048 */

void Recovered_YYYVideoToolView_m01569(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75ac8,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView playButton]
 * Entry: 0x1001f5054; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5064 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5070 */
/* WARNING: Switch with 1 destination removed at 0x0001001f507c */

undefined8 Recovered_YYYVideoToolView_m01570(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75acc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setPlayButton:]
 * Entry: 0x1001f5088; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f50ac */
/* WARNING: Switch with 1 destination removed at 0x0001001f50b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f50e8 */

void Recovered_YYYVideoToolView_m01571(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + iRam0000000100c75acc,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView speedButton]
 * Entry: 0x1001f50ec; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f50fc */

undefined8 Recovered_YYYVideoToolView_m01572(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ad0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setSpeedButton:]
 * Entry: 0x1001f5108; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5128 */
/* WARNING: Switch with 1 destination removed at 0x0001001f513c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5160 */

void Recovered_YYYVideoToolView_m01573(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ad0,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView rewindButton]
 * Entry: 0x1001f5174; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f517c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5194 */

undefined8 Recovered_YYYVideoToolView_m01574(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ad4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setRewindButton:]
 * Entry: 0x1001f519c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f51b4 */

void Recovered_YYYVideoToolView_m01575(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75ad4;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView rateButton]
 * Entry: 0x1001f51e0; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f51f0 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5200 */

undefined8 Recovered_YYYVideoToolView_m01576(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ad8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setRateButton:]
 * Entry: 0x1001f5208; original ABI: v24@0:8@16
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5228 */
/* WARNING: Switch with 1 destination removed at 0x0001001f523c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5258 */
/* WARNING: Switch with 1 destination removed at 0x0001001f526c */
/* WARNING: Switch with 1 destination removed at 0x0001001f52a0 */

void Recovered_YYYVideoToolView_m01577(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75ad8;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView currentTimeLabel]
 * Entry: 0x1001f52a4; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f52ac */
/* WARNING: Switch with 1 destination removed at 0x0001001f52c0 */

undefined8 Recovered_YYYVideoToolView_m01578(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75adc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setCurrentTimeLabel:]
 * Entry: 0x1001f52cc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f52ec */
/* WARNING: Switch with 1 destination removed at 0x0001001f52f8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5308 */
/* WARNING: Switch with 1 destination removed at 0x0001001f532c */

void Recovered_YYYVideoToolView_m01579(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75adc,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView totalTimeLabel]
 * Entry: 0x1001f533c; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f534c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5358 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5364 */

undefined8 Recovered_YYYVideoToolView_m01580(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ae0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTotalTimeLabel:]
 * Entry: 0x1001f5370; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f53a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f53c0 */

void Recovered_YYYVideoToolView_m01581(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75ae0;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView sliderView]
 * Entry: 0x1001f53d4; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f53e4 */

undefined8 Recovered_YYYVideoToolView_m01582(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ae4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setSliderView:]
 * Entry: 0x1001f53f0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5410 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5424 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5430 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5464 */

void Recovered_YYYVideoToolView_m01583(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ae4,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView loadingView]
 * Entry: 0x1001f5468; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5470 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5484 */

undefined8 Recovered_YYYVideoToolView_m01584(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ae8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setLoadingView:]
 * Entry: 0x1001f5490; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f54c4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f54e0 */

void Recovered_YYYVideoToolView_m01585(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75ae8;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView playing]
 * Entry: 0x1001f54f4; original ABI: B16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f54fc */
/* WARNING: Switch with 1 destination removed at 0x0001001f5508 */

undefined1 Recovered_YYYVideoToolView_m01586(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + iRam0000000100c75a9c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView show]
 * Entry: 0x1001f551c; original ABI: B16@0:8
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5530 */

bool Recovered_YYYVideoToolView_m01587(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + iRam0000000100c75a98) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setShow:]
 * Entry: 0x1001f5540; original ABI: v20@0:8B16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5548 */
/* WARNING: Switch with 1 destination removed at 0x0001001f555c */
/* WARNING: Switch with 1 destination removed at 0x0001001f556c */

void Recovered_YYYVideoToolView_m01588(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c75a98) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView lock]
 * Entry: 0x1001f5588; original ABI: B16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5598 */
/* WARNING: Switch with 1 destination removed at 0x0001001f55a4 */

undefined1 Recovered_YYYVideoToolView_m01589(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + iRam0000000100c75a94);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView topViewTopConstraint]
 * Entry: 0x1001f55b0; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f55c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001f55cc */

undefined8 Recovered_YYYVideoToolView_m01590(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75aec);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTopViewTopConstraint:]
 * Entry: 0x1001f55d8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f55f8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f560c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5630 */

void Recovered_YYYVideoToolView_m01591(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75aec,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView bottomViewBottomConstraint]
 * Entry: 0x1001f5644; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5654 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5660 */

undefined8 Recovered_YYYVideoToolView_m01592(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75af0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBottomViewBottomConstraint:]
 * Entry: 0x1001f566c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5688 */
/* WARNING: Switch with 1 destination removed at 0x0001001f56ac */
/* WARNING: Switch with 1 destination removed at 0x0001001f56d0 */

void Recovered_YYYVideoToolView_m01593(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75af0;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView timeLabelWidthViewTopConstraint]
 * Entry: 0x1001f56e4; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f56f4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5700 */

undefined8 Recovered_YYYVideoToolView_m01594(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75af4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTimeLabelWidthViewTopConstraint:]
 * Entry: 0x1001f570c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5720 */
/* WARNING: Switch with 1 destination removed at 0x0001001f572c */

void Recovered_YYYVideoToolView_m01595(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75af4,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView topMaskView]
 * Entry: 0x1001f5738; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5748 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5754 */

undefined8 Recovered_YYYVideoToolView_m01596(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75af8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setTopMaskView:]
 * Entry: 0x1001f5760; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f576c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5780 */

void Recovered_YYYVideoToolView_m01597(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75af8,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView bottomMaskView]
 * Entry: 0x1001f578c; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5794 */

undefined8 Recovered_YYYVideoToolView_m01598(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75afc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBottomMaskView:]
 * Entry: 0x1001f57a8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f57c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f57d4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f57e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5808 */

void Recovered_YYYVideoToolView_m01599(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75afc,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setPlayImage:]
 * Entry: 0x1001f5818; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5830 */

void Recovered_YYYVideoToolView_m01600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75aa0;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setPauseImage:]
 * Entry: 0x1001f585c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5884 */
/* WARNING: Switch with 1 destination removed at 0x0001001f58ac */
/* WARNING: Switch with 1 destination removed at 0x0001001f58b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f58d4 */

void Recovered_YYYVideoToolView_m01601(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75aa4;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView beginPoint]
 * Entry: 0x1001f58e8; original ABI: {CGPoint=dd}16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f58f8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5904 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5914 */

undefined1  [16] Recovered_YYYVideoToolView_m01602(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75b00);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBeginPoint:]
 * Entry: 0x1001f5920; original ABI: v32@0:8{CGPoint=dd}16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5928 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5940 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5950 */

void Recovered_YYYVideoToolView_m01603(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Switch is manually overridden */
  lVar1 = (long)iRam0000000100c75b00;
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView volumeView]
 * Entry: 0x1001f596c; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5974 */

undefined8 Recovered_YYYVideoToolView_m01604(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b04);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setVolumeView:]
 * Entry: 0x1001f5988; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f59a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001f59bc */
/* WARNING: Switch with 1 destination removed at 0x0001001f59f8 */

void Recovered_YYYVideoToolView_m01605(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75b04;
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
 * Method: -[YYYVideoToolView setVolumeSlider:]
 * Entry: 0x1001f59fc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5a08 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5a14 */

void Recovered_YYYVideoToolView_m01606(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75aa8,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView beginValue]
 * Entry: 0x1001f5a28; original ABI: d16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5a38 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5a44 */

undefined1  [16] Recovered_YYYVideoToolView_m01607(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75b08);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setBeginValue:]
 * Entry: 0x1001f5a50; original ABI: v24@0:8d16
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYVideoToolView_m01608(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + iRam0000000100c75b08) = param_1;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView defaultBrightness]
 * Entry: 0x1001f5a60; original ABI: d16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5a70 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5a7c */

undefined1  [16] Recovered_YYYVideoToolView_m01609(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75b0c);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView setDefaultBrightness:]
 * Entry: 0x1001f5a88; original ABI: v24@0:8d16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5a90 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5aa4 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5ab8 */

void Recovered_YYYVideoToolView_m01610(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + iRam0000000100c75b0c) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYVideoToolView .cxx_destruct]
 * Entry: 0x1001f5ac0; original ABI: v16@0:8
 * Original instructions in modeled body: 153; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001f5b34 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5b50 */
/* WARNING: Switch with 1 destination removed at 0x0001001f5e0c */
/* WARNING: Switch with 1 destination removed at 0x0001001f5eb0 */

void Recovered_YYYVideoToolView_m01611(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75aa8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b04,0);
  _objc_storeStrong(param_1 + iRam0000000100c75aa4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75aa0,0);
  _objc_storeStrong(param_1 + iRam0000000100c75afc,0);
  _objc_storeStrong(param_1 + iRam0000000100c75af8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75af4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75af0,0);
  _objc_storeStrong(param_1 + iRam0000000100c75aec,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ae8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ae4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ae0,0);
  _objc_storeStrong(param_1 + iRam0000000100c75adc,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ad8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ad4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ad0,0);
  _objc_storeStrong(param_1 + iRam0000000100c75acc,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ac8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ac4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ac0,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75abc,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ab8,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ab4,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ab0,0);
  _objc_storeStrong(param_1 + iRam0000000100c75aac,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYVideoToolView requiresConstraintBasedLayout]
 * Entry: 0x1001f45c0; original ABI: B16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYVideoToolView_m01612(void)

{
  return 1;
}



