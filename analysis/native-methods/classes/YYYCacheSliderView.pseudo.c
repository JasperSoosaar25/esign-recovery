/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView initWithFrame:]
 * Entry: 0x10030db64; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 74; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030dba4 */
/* WARNING: Switch with 1 destination removed at 0x00010030dbb8 */
/* WARNING: Switch with 1 destination removed at 0x00010030dbc4 */
/* WARNING: Switch with 1 destination removed at 0x00010030dbe8 */
/* WARNING: Switch with 1 destination removed at 0x00010030dbf4 */
/* WARNING: Switch with 1 destination removed at 0x00010030dc0c */
/* WARNING: Switch with 1 destination removed at 0x00010030dc84 */
/* WARNING: Switch with 1 destination removed at 0x00010030dca0 */
/* WARNING: Switch with 1 destination removed at 0x00010030dcbc */

undefined8
Recovered_YYYCacheSliderView_m02234
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = uRam0000000100c73b88;
  uStack_60 = param_5;
  lVar2 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_60,
                              PTR_s_initWithFrame__100c61370);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    func_0x00010094dda0(lVar2);
                    /* WARNING: Switch is manually overridden */
  }
  uVar1 = _objc_retain(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return uVar1;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView loadSubviews]
 * Entry: 0x10030dcc0; original ABI: v16@0:8
 * Original instructions in modeled body: 164; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030dcf4 */
/* WARNING: Switch with 1 destination removed at 0x00010030dd08 */
/* WARNING: Switch with 1 destination removed at 0x00010030dd54 */
/* WARNING: Switch with 1 destination removed at 0x00010030e0d0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYCacheSliderView_m02235(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_alloc(uRam0000000100c71a50);
  uVar1 = func_0x00010030e438();
  lVar3 = (long)iRam0000000100c75dd0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  func_0x00010030e43c(_UNK_10097c858,_UNK_10097c858,_UNK_10097c858,0x3ff0000000000000,
                      uRam0000000100c71438);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100969620(*(undefined8 *)(param_1 + lVar3),auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x00010093cf80(_UNK_10097bf48,_UNK_10097bf48,_UNK_10097bf48,0x3ff0000000000000,
                      uRam0000000100c71438);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f720(*(undefined8 *)(param_1 + lVar3),auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x00010094d2e0(*(undefined8 *)(param_1 + lVar3));
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010030e440(0x3ff8000000000000);
  _objc_release(uVar1);
  func_0x00010094d2e0(*(undefined8 *)(param_1 + lVar3));
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009670e0(auVar4._0_8_,auVar4._8_8_,1);
  _objc_release(auVar4._0_8_);
  _CGAffineTransformMakeScale(&uStack_90,0x3ff0000000000000,0x3ff8000000000000);
  uStack_b8 = uStack_88;
  uStack_c0 = uStack_90;
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  func_0x00010096f780(*(undefined8 *)(param_1 + lVar3),extraout_x1_01,&uStack_c0);
  func_0x000100937540(param_1,extraout_x1_02,*(undefined8 *)(param_1 + lVar3));
  func_0x00010030e444(param_1,extraout_x1_03,*(undefined8 *)(param_1 + lVar3));
  func_0x00010093c980(uRam0000000100c71438);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100967300(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093cf80(0x3ff0000000000000,_UNK_10097eb38,_UNK_10097bed8,0x3ff0000000000000,
                      uRam0000000100c71438);
  auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x0001009676e0(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  uVar1 = uRam0000000100c713c0;
  func_0x000100979940(uRam0000000100c71438);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010030e448(0x402a000000000000,0x402a000000000000);
  func_0x000100956d00(uVar1,extraout_x1,uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010096eea0(param_1,extraout_x1_00,uVar1,0);
  func_0x000100967700(0,param_1);
  _objc_release(uVar1);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView layoutSubviews]
 * Entry: 0x10030e0fc; original ABI: v16@0:8
 * Original instructions in modeled body: 51; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e128 */
/* WARNING: Switch with 1 destination removed at 0x00010030e17c */
/* WARNING: Switch with 1 destination removed at 0x00010030e198 */
/* WARNING: Switch with 1 destination removed at 0x00010030e200 */

void Recovered_YYYCacheSliderView_m02236
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  long lStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
  uStack_58 = uRam0000000100c73b88;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_100c62d78);
  uVar1 = func_0x00010093a760(param_5);
  func_0x00010030e468(uVar1,param_2,param_3,param_4,param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100964900(*(undefined8 *)(param_5 + iRam0000000100c75dd0));
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView finishValue]
 * Entry: 0x10030e204; original ABI: f16@0:8
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e220 */
/* WARNING: Switch with 1 destination removed at 0x00010030e22c */
/* WARNING: Switch with 1 destination removed at 0x00010030e23c */
/* WARNING: Switch with 1 destination removed at 0x00010030e288 */
/* WARNING: Switch with 1 destination removed at 0x00010030e2a4 */

undefined4 Recovered_YYYCacheSliderView_m02237(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  func_0x0001009790c0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x000100954a20();
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView setFinishValue:]
 * Entry: 0x10030e2a8; original ABI: v20@0:8f16
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e2c8 */
/* WARNING: Switch with 1 destination removed at 0x00010030e2d4 */
/* WARNING: Switch with 1 destination removed at 0x00010030e300 */
/* WARNING: Switch with 1 destination removed at 0x00010030e310 */
/* WARNING: Switch with 1 destination removed at 0x00010030e35c */

void Recovered_YYYCacheSliderView_m02238(undefined4 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010030e478(param_2);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100969580(param_1,auVar1._0_8_,auVar1._8_8_,1);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView videoProgressView]
 * Entry: 0x10030e360; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e370 */
/* WARNING: Switch with 1 destination removed at 0x00010030e37c */
/* WARNING: Switch with 1 destination removed at 0x00010030e388 */

undefined8 Recovered_YYYCacheSliderView_m02239(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75dd0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView setVideoProgressView:]
 * Entry: 0x10030e394; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e3b8 */
/* WARNING: Switch with 1 destination removed at 0x00010030e3c4 */
/* WARNING: Switch with 1 destination removed at 0x00010030e3e8 */

void Recovered_YYYCacheSliderView_m02240(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75dd0,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSliderView .cxx_destruct]
 * Entry: 0x10030e3f8; original ABI: v16@0:8
 * Original instructions in modeled body: 15; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010030e408 */
/* WARNING: Switch with 1 destination removed at 0x00010030e428 */

void Recovered_YYYCacheSliderView_m02241(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75dd0,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



