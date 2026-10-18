/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView initWithAnnotation:reuseIdentifier:]
 * Entry: 0x1000ac220; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 276; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ac258 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac264 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac2a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac344 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac36c */
/* WARNING: Switch with 1 destination removed at 0x0001000ac380 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac3d8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac528 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac540 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac57c */
/* WARNING: Switch with 1 destination removed at 0x0001000ac588 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac798 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYAnnotationView_m00569
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e911c4 == 0) {
  case true:
    uRam0000000100cdb4fa = uRam0000000100cdb4f4 ^ 0xe412;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cdb4fc = uRam0000000100cdb4f6 ^ 0x8fcb;
    uRam0000000100cdb4fe = uRam0000000100cdb4f8 ^ 0x40d9;
    uRam0000000100cdb4ea = uRam0000000100cdb4e0 ^ 0xd63d;
    uRam0000000100cdb4ec = uRam0000000100cdb4e2 ^ 0x8c2d;
    uRam0000000100cdb4ee = uRam0000000100cdb4e4 ^ 0x63e3;
    uRam0000000100cdb4f0 = uRam0000000100cdb4e6 ^ 0xda8;
    uRam0000000100cdb4f2 = uRam0000000100cdb4e8 ^ 0x7b83;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e911c4 = 1;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
  uStack_68 = uRam0000000100c73940;
  uStack_70 = param_1;
  auVar6 = _objc_msgSendSuper2(&uStack_70,PTR_s_initWithAnnotation_reuseIdentifi_100c60f98,uVar1,
                               uVar2);
  lVar3 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x0001000acc80(lVar3,auVar6._8_8_,1);
    func_0x0001000ac79c(0,0xc024000000000000);
    func_0x000100961400(0,0xc024000000000000,lVar3);
    func_0x000100947300(uRam0000000100c713c0,extraout_x1,0x100cdb500);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000acc84(lVar3,auVar6._8_8_,auVar6._0_8_);
    _objc_release(auVar6._0_8_);
    uVar4 = _objc_alloc(uRam0000000100c71428);
    func_0x0001000acc88(0,0,_UNK_10097bf70,_UNK_10097bf78);
    auVar6 = func_0x0001009492e0(uVar4);
    func_0x00010096fc60(lVar3,auVar6._8_8_,auVar6._0_8_);
    _objc_release(auVar6._0_8_);
    func_0x0001009788c0(lVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000acc8c(auVar6._0_8_,auVar6._8_8_,0x100cdb520,0);
    _objc_release(auVar6._0_8_);
    func_0x0001009788c0(lVar3);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000acc90(uRam0000000100c71438);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f120(uVar4,auVar6._8_8_,auVar6._0_8_,0);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar4);
    func_0x0001000acc94(0x402e000000000000,uRam0000000100c713a8);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009788c0(lVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976a00();
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000acc98(auVar6._0_8_,auVar6._8_8_,uVar4);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x0001000acc9c(uRam0000000100c71438);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009788c0(lVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x000100960820(auVar6._0_8_,auVar6._8_8_,uVar4);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar4);
    func_0x0001009788c0(lVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096b5e0(lVar3,auVar6._8_8_,auVar6._0_8_);
    _objc_release(auVar6._0_8_);
    func_0x0001009788c0(lVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009375a0(auVar6._0_8_,auVar6._8_8_,lVar3,PTR_s_useButtonHandle_100c70518,0x40);
    _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar4 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar4;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView useButtonHandle]
 * Entry: 0x1000ac7e0; original ABI: v16@0:8
 * Original instructions in modeled body: 92; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ac80c */
/* WARNING: Switch with 1 destination removed at 0x0001000ac818 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac840 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac880 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac940 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac96c */

void Recovered_YYYAnnotationView_m00570
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x0001000accb0();
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar2 = func_0x0001000accb4(uRam0000000100c71800);
    func_0x000100938780(param_3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x0001000accb8();
    func_0x000100966540(uVar2);
    _objc_release(uVar3);
    func_0x0001000accbc(param_3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093e1c0();
    func_0x000100966e00(param_2,uVar2);
    _objc_release(uVar3);
    func_0x0001000accc0(param_3);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976940();
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100967cc0(uVar2,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar3);
    func_0x0001000accc4(param_3);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView useButton]
 * Entry: 0x1000ac970; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ac978 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac98c */

undefined8 Recovered_YYYAnnotationView_m00571(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7550c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView setUseButton:]
 * Entry: 0x1000ac998; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ac9b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ac9c8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aca0c */

void Recovered_YYYAnnotationView_m00572(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7550c;
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
 * Method: -[YYYAnnotationView coorLabel]
 * Entry: 0x1000aca10; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aca20 */
/* WARNING: Switch with 1 destination removed at 0x0001000aca2c */
/* WARNING: Switch with 1 destination removed at 0x0001000aca38 */

undefined8 Recovered_YYYAnnotationView_m00573(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75510);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView setCoorLabel:]
 * Entry: 0x1000aca44; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aca60 */
/* WARNING: Switch with 1 destination removed at 0x0001000aca6c */
/* WARNING: Switch with 1 destination removed at 0x0001000aca88 */

void Recovered_YYYAnnotationView_m00574(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + iRam0000000100c75510);
  *(undefined8 *)(param_1 + iRam0000000100c75510) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView detailview]
 * Entry: 0x1000acaac; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acab4 */

undefined8 Recovered_YYYAnnotationView_m00575(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75514);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView setDetailview:]
 * Entry: 0x1000acac8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acae8 */
/* WARNING: Switch with 1 destination removed at 0x0001000acaf8 */
/* WARNING: Switch with 1 destination removed at 0x0001000acb34 */

void Recovered_YYYAnnotationView_m00576(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + iRam0000000100c75514,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView useButtonHandleBlock]
 * Entry: 0x1000acb38; original ABI: @?16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acb40 */
/* WARNING: Switch with 1 destination removed at 0x0001000acb4c */

undefined8 Recovered_YYYAnnotationView_m00577(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75518);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView setUseButtonHandleBlock:]
 * Entry: 0x1000acb60; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acb84 */
/* WARNING: Switch with 1 destination removed at 0x0001000acb90 */
/* WARNING: Switch with 1 destination removed at 0x0001000acba4 */
/* WARNING: Switch with 1 destination removed at 0x0001000acbd8 */

void Recovered_YYYAnnotationView_m00578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)iRam0000000100c75518);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAnnotationView .cxx_destruct]
 * Entry: 0x1000acbec; original ABI: v16@0:8
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acc44 */
/* WARNING: Switch with 1 destination removed at 0x0001000acc70 */

void Recovered_YYYAnnotationView_m00579(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75518,0);
  _objc_storeStrong(param_1 + iRam0000000100c75514,0);
  _objc_storeStrong(param_1 + iRam0000000100c75510,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7550c,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



