/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x100143f58; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 77; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100143f8c */
/* WARNING: Switch with 1 destination removed at 0x000100143f98 */
/* WARNING: Switch with 1 destination removed at 0x000100143fac */
/* WARNING: Switch with 1 destination removed at 0x000100144004 */
/* WARNING: Switch with 1 destination removed at 0x00010014402c */
/* WARNING: Switch with 1 destination removed at 0x000100144038 */
/* WARNING: Switch with 1 destination removed at 0x000100144054 */
/* WARNING: Switch with 1 destination removed at 0x000100144060 */
/* WARNING: Switch with 1 destination removed at 0x000100144078 */
/* WARNING: Switch with 1 destination removed at 0x0001001440c4 */

undefined8
Recovered_YYYDownloadTableViewCell_m00960
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
  uStack_58 = uRam0000000100c739b8;
  uStack_60 = param_1;
  lVar2 = _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                              uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010014a110(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar3 = _objc_retain(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell loadSubviews]
 * Entry: 0x1001440c8; original ABI: v16@0:8
 * Original instructions in modeled body: 296; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001440fc */
/* WARNING: Switch with 1 destination removed at 0x000100144464 */
/* WARNING: Switch with 1 destination removed at 0x000100144478 */
/* WARNING: Switch with 1 destination removed at 0x000100144488 */
/* WARNING: Switch with 1 destination removed at 0x000100144504 */
/* WARNING: Switch with 1 destination removed at 0x000100144964 */

void Recovered_YYYDownloadTableViewCell_m00961(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001009642e0(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a114(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001009552e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a118(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096d480(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x4026000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a11c(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010014a120(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972fc0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972fc0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096d7a0(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x4028000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009738e0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010014a124(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a128(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010014a12c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a130(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a134(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x00010014a138(uRam0000000100c71420);
  func_0x0001009643c0(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a13c(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a140(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100955120(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943a20(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943a20(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a144(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x00010014a148(uRam0000000100c71a50);
  func_0x00010014a14c(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010014a150(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100970980(param_1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setupLayout]
 * Entry: 0x100144968; original ABI: v16@0:8
 * Original instructions in modeled body: 175; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001449a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001449bc */
/* WARNING: Switch with 1 destination removed at 0x0001001449d4 */
/* WARNING: Switch with 1 destination removed at 0x000100144a28 */
/* WARNING: Switch with 1 destination removed at 0x000100144d6c */
/* WARNING: Switch with 1 destination removed at 0x000100144de0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYDownloadTableViewCell_m00962(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
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
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  
  ppuStack_78 = &puStack_110;
  ppuStack_80 = &puStack_140;
  func_0x000100943a20(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _UNK_10097b060;
  puStack_b0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_100144de4;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100943a20(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961fa0(0x447a0000,auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  func_0x000100943a20(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961ee0(0x447a0000,auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  func_0x000100943920(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_e0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_d8 = uVar2;
  puStack_d0 = &DAT_100146aac;
  puStack_c8 = &UNK_100afeb38;
  uStack_c0 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x00010014a19c(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = uVar2;
  puStack_100 = &DAT_10014724c;
  puStack_f8 = &UNK_100afeb38;
  uStack_f0 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,ppuStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x00010014a1a0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar1;
  uStack_138 = uVar2;
  puStack_130 = &DAT_100147940;
  puStack_128 = &UNK_100afeb38;
                    /* WARNING: Switch is manually overridden */
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  uStack_120 = param_1;
                    /* WARNING: Switch is manually overridden */
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,ppuStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100954ae0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_160 = &DAT_100147de4;
  puStack_158 = &UNK_100afeb38;
  puStack_170 = puVar1;
  uStack_168 = uVar2;
  uStack_150 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_170);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setItem:]
 * Entry: 0x100147ff4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 418; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100148030 */
/* WARNING: Switch with 1 destination removed at 0x000100148044 */
/* WARNING: Switch with 1 destination removed at 0x000100148050 */
/* WARNING: Switch with 1 destination removed at 0x000100148084 */
/* WARNING: Switch with 1 destination removed at 0x000100148188 */
/* WARNING: Switch with 1 destination removed at 0x000100148238 */
/* WARNING: Switch with 1 destination removed at 0x0001001483ec */
/* WARNING: Switch with 1 destination removed at 0x0001001483f8 */
/* WARNING: Switch with 1 destination removed at 0x000100148404 */
/* WARNING: Switch with 1 destination removed at 0x000100148420 */
/* WARNING: Switch with 1 destination removed at 0x000100148438 */
/* WARNING: Switch with 1 destination removed at 0x000100148464 */
/* WARNING: Switch with 1 destination removed at 0x000100148470 */
/* WARNING: Switch with 1 destination removed at 0x000100148494 */
/* WARNING: Switch with 1 destination removed at 0x0001001484a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001484b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001484bc */
/* WARNING: Switch with 1 destination removed at 0x0001001484e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001486ec */
/* WARNING: Switch with 1 destination removed at 0x000100148704 */
/* WARNING: Switch with 1 destination removed at 0x000100148788 */
/* WARNING: Switch with 1 destination removed at 0x0001001487bc */
/* WARNING: Switch with 1 destination removed at 0x0001001488c8 */
/* WARNING: Switch with 1 destination removed at 0x000100148ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100148b2c */
/* WARNING: Switch with 1 destination removed at 0x000100148b54 */
/* WARNING: Switch with 1 destination removed at 0x000100148b84 */

void Recovered_YYYDownloadTableViewCell_m00963(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_e0 [48];
  undefined1 auStack_b0 [32];
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e915a8 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d11273 = bRam0000000100d1126c ^ 0x49;
    bRam0000000100d11274 = bRam0000000100d1126d ^ 0x7f;
    cRam0000000100d11275 = bRam0000000100d1126e + (bRam0000000100d1126e & 0xdf) * -2 + -0x21;
    cRam0000000100d11276 = bRam0000000100d1126f + (bRam0000000100d1126f & 0x24) * -2 + '$';
    bRam0000000100d11277 = bRam0000000100d11270 ^ 0x7d;
    cRam0000000100d11278 = bRam0000000100d11271 + (bRam0000000100d11271 & 0x69) * -2 + 'i';
    bRam0000000100d11279 = bRam0000000100d11272 ^ 0xce;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100d112a0 = uRam0000000100d11280 ^ 0x27b2;
    uRam0000000100d112a2 =
         ~((uRam0000000100d11282 | 0x562d) & (uRam0000000100d11282 ^ 0xffff | 0xa9d2));
    uRam0000000100d112a4 = uRam0000000100d11284 ^ 0xae4;
    uRam0000000100d112a6 = uRam0000000100d11286 ^ 0xdcd4;
    uRam0000000100d112a8 = uRam0000000100d11288 ^ 0x3188;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100d112aa = uRam0000000100d1128a ^ 0x60f7;
    sRam0000000100d112ac = uRam0000000100d1128c + (uRam0000000100d1128c & 0x1529) * -2 + 0x1529;
    uRam0000000100d112ae = uRam0000000100d1128e ^ 0xefad;
    uRam0000000100d112b0 = uRam0000000100d11290 ^ 0xb143;
    sRam0000000100d112b8 = uRam0000000100d112b2 + (uRam0000000100d112b2 & 0x59c8) * -2 + -0x2638;
    uRam0000000100d112ba = uRam0000000100d112b4 ^ 0x8793;
    sRam0000000100d112bc = uRam0000000100d112b6 + (uRam0000000100d112b6 & 0x2ab9) * -2 + 0x2ab9;
    bRam0000000100d112c3 = bRam0000000100d112be ^ 0x4f;
    bRam0000000100d112c4 = bRam0000000100d112bf ^ 0x9b;
    bRam0000000100d112c5 = bRam0000000100d112c0 ^ 0x4d;
    bRam0000000100d112c6 = bRam0000000100d112c1 ^ 0xda;
    bRam0000000100d112c7 = bRam0000000100d112c2 ^ 0x6d;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e915a8 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar8 = _objc_retain(param_3);
  lVar2 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  plVar1 = (long *)(param_1 + iRam0000000100c75788);
  lVar7 = *plVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar7 != lVar2) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar7 != 0) {
    case true:
      func_0x00010014a38c(lVar7,auVar8._8_8_,0);
                    /* WARNING: Switch is manually overridden */
      func_0x00010014a390(*plVar1,extraout_x1,0);
      lVar7 = *plVar1;
      *plVar1 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
    }
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 0) {
  case true:
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
    return;
  }
  puStack_90 = auStack_e0;
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(plVar1,param_3);
  func_0x00010014a394(lVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x000100973900(lVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a398(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x00010014a39c(lVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943a20(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar8._0_8_,auVar8._8_8_,uVar3);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  func_0x000100947f20(lVar2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978b60(auVar8._0_8_,auVar8._8_8_,0x100d112d0);
  lVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  uVar3 = uRam0000000100c71448;
  puStack_88 = auStack_b0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010097a8a0(0x100d112f0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010014a3a0(lVar2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978b60(auVar8._0_8_,auVar8._8_8_,0x100d11330);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  lVar5 = auVar9._0_8_;
                    /* WARNING: Switch is manually overridden */
  lStack_78 = 0x100d11310;
  if (lVar7 != 0) {
    lStack_78 = lVar7;
  }
  lStack_80 = 0x100b391a8;
  if (lVar5 != 0) {
    lStack_80 = lVar5;
  }
                    /* WARNING: Switch is manually overridden */
  func_0x000100974200(uVar3,auVar9._8_8_,uVar4);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972fc0(param_1);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar9._0_8_,auVar9._8_8_,uVar3);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar3);
  _objc_release(lVar5);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar4);
  uVar6 = func_0x00010094b340(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001488d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar6 & 0xffffffff) * 8 + 0x100d123e0))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell fileNameLabel]
 * Entry: 0x100149c74; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149c7c */
/* WARNING: Switch with 1 destination removed at 0x000100149c88 */

undefined8 Recovered_YYYDownloadTableViewCell_m00964(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7578c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setFileNameLabel:]
 * Entry: 0x100149c9c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149cc0 */
/* WARNING: Switch with 1 destination removed at 0x000100149cd4 */
/* WARNING: Switch with 1 destination removed at 0x000100149ce4 */
/* WARNING: Switch with 1 destination removed at 0x000100149d18 */
/* WARNING: Switch with 1 destination removed at 0x000100149d3c */

void Recovered_YYYDownloadTableViewCell_m00965(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7578c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell sourceLabel]
 * Entry: 0x100149d40; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149d48 */
/* WARNING: Switch with 1 destination removed at 0x000100149d5c */

undefined8 Recovered_YYYDownloadTableViewCell_m00966(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75790);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setSourceLabel:]
 * Entry: 0x100149d68; original ABI: v24@0:8@16
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149d88 */
/* WARNING: Switch with 1 destination removed at 0x000100149d9c */
/* WARNING: Switch with 1 destination removed at 0x000100149db8 */
/* WARNING: Switch with 1 destination removed at 0x000100149dcc */
/* WARNING: Switch with 1 destination removed at 0x000100149e00 */

void Recovered_YYYDownloadTableViewCell_m00967(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75790;
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
 * Method: -[YYYDownloadTableViewCell stateLabel]
 * Entry: 0x100149e04; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149e14 */
/* WARNING: Switch with 1 destination removed at 0x000100149e24 */
/* WARNING: Switch with 1 destination removed at 0x000100149e30 */

undefined8 Recovered_YYYDownloadTableViewCell_m00968(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75794);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setStateLabel:]
 * Entry: 0x100149e3c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149e6c */
/* WARNING: Switch with 1 destination removed at 0x000100149e7c */
/* WARNING: Switch with 1 destination removed at 0x000100149e9c */
/* WARNING: Switch with 1 destination removed at 0x000100149ec8 */

void Recovered_YYYDownloadTableViewCell_m00969(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75794;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell fileSizeLabel]
 * Entry: 0x100149ecc; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149edc */

undefined8 Recovered_YYYDownloadTableViewCell_m00970(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75798);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setFileSizeLabel:]
 * Entry: 0x100149ee8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149f04 */
/* WARNING: Switch with 1 destination removed at 0x000100149f28 */
/* WARNING: Switch with 1 destination removed at 0x000100149f44 */

void Recovered_YYYDownloadTableViewCell_m00971(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75798;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell progressView]
 * Entry: 0x100149f58; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149f68 */

undefined8 Recovered_YYYDownloadTableViewCell_m00972(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7579c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell setProgressView:]
 * Entry: 0x100149f74; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100149f90 */
/* WARNING: Switch with 1 destination removed at 0x000100149fb4 */
/* WARNING: Switch with 1 destination removed at 0x000100149fd8 */

void Recovered_YYYDownloadTableViewCell_m00973(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7579c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell item]
 * Entry: 0x100149fec; original ABI: @16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYDownloadTableViewCell_m00974(long param_1)

{
  return *(undefined8 *)(param_1 + iRam0000000100c75788);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDownloadTableViewCell .cxx_destruct]
 * Entry: 0x100149ffc; original ABI: v16@0:8
 * Original instructions in modeled body: 50; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010014a030 */
/* WARNING: Switch with 1 destination removed at 0x00010014a054 */
/* WARNING: Switch with 1 destination removed at 0x00010014a0f8 */

void Recovered_YYYDownloadTableViewCell_m00975(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75788,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7579c,0);
  _objc_storeStrong(param_1 + iRam0000000100c75798,0);
  _objc_storeStrong(param_1 + iRam0000000100c75794,0);
  _objc_storeStrong(param_1 + iRam0000000100c75790,0);
  _objc_storeStrong(param_1 + iRam0000000100c7578c,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYDownloadTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x100149c6c; original ABI: B16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYDownloadTableViewCell_m00976(void)

{
  return 1;
}



