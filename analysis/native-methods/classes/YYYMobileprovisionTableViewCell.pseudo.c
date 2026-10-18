/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1001765c8; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 84; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001765f4 */
/* WARNING: Switch with 1 destination removed at 0x00010017661c */
/* WARNING: Switch with 1 destination removed at 0x000100176658 */
/* WARNING: Switch with 1 destination removed at 0x000100176680 */
/* WARNING: Switch with 1 destination removed at 0x000100176698 */
/* WARNING: Switch with 1 destination removed at 0x0001001766a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001766c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001766d0 */
/* WARNING: Switch with 1 destination removed at 0x0001001766dc */
/* WARNING: Switch with 1 destination removed at 0x0001001766f8 */
/* WARNING: Switch with 1 destination removed at 0x000100176730 */
/* WARNING: Switch with 1 destination removed at 0x00010017674c */

undefined8
Recovered_YYYMobileprovisionTableViewCell_m01150
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73a08;
  uStack_50 = param_1;
  auVar4 = _objc_msgSendSuper2(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                               uVar1);
  lVar2 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010096c480(lVar2,auVar4._8_8_,0);
    func_0x00010094dda0(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar3 = _objc_retain(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell prepareForReuse]
 * Entry: 0x100176750; original ABI: v16@0:8
 * Original instructions in modeled body: 40; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001767b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001767f8 */

void Recovered_YYYMobileprovisionTableViewCell_m01151(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = uRam0000000100c73a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_100c65378);
  func_0x000100178d80(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978ba0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell loadSubviews]
 * Entry: 0x10017680c; original ABI: v16@0:8
 * Original instructions in modeled body: 172; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100176834 */
/* WARNING: Switch with 1 destination removed at 0x000100176840 */
/* WARNING: Switch with 1 destination removed at 0x000100176858 */
/* WARNING: Switch with 1 destination removed at 0x0001001768a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001768e4 */
/* WARNING: Switch with 1 destination removed at 0x000100176cd8 */

void Recovered_YYYMobileprovisionTableViewCell_m01152(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096f180(param_1,auVar2._8_8_,auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar2._0_8_);
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100968560(auVar2._0_8_,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea20(auVar2._0_8_,auVar2._8_8_,2);
  _objc_release(auVar2._0_8_);
  func_0x000100178d84(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178d88(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x000100178d8c(uRam0000000100c71420);
  func_0x000100178d90(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100178d94(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968560(auVar2._0_8_,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178d98(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178d9c(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010097a980(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178da0(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100178da4(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978ba0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178da8(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x4028000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978ba0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  func_0x000100178dac(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010097ad20(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell yyy_setupViewsConstraints]
 * Entry: 0x100176cdc; original ABI: v16@0:8
 * Original instructions in modeled body: 83; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100176d08 */
/* WARNING: Switch with 1 destination removed at 0x000100176d6c */
/* WARNING: Switch with 1 destination removed at 0x000100176dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100176e80 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYMobileprovisionTableViewCell_m01153(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = uRam0000000100c73a08;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_90 = PTR___NSConcreteStackBlock_100afc560;
  uStack_88 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
  uStack_84 = 0;
  puStack_80 = &DAT_100176e84;
  puStack_78 = &UNK_100afeb38;
  uStack_70 = param_1;
  func_0x00010094f380(auVar2._0_8_,auVar2._8_8_,&puStack_90);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar2._0_8_);
  func_0x000100178de0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  puStack_c0 = puVar1;
  uStack_b8 = _UNK_10097b060;
  puStack_b0 = &DAT_100178684;
  puStack_a8 = &UNK_100afeb38;
  uStack_a0 = param_1;
  func_0x00010094f380(auVar2._0_8_,auVar2._8_8_,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell sizeThatFits:]
 * Entry: 0x100178a50; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 50; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178aa4 */
/* WARNING: Switch with 1 destination removed at 0x000100178b60 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYMobileprovisionTableViewCell_m01154
               (double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x000100976a00();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009692e0(_UNK_10097cca8);
  _objc_release(uVar1);
  dVar2 = param_1 + _UNK_10097d2c8;
  func_0x000100978ba0(param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100178ec4(dVar2 + -24.0 + -10.0);
  _objc_release(uVar1);
  func_0x000100974ea0(param_1,param_2,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell titleLabel]
 * Entry: 0x100178b84; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178b94 */
/* WARNING: Switch with 1 destination removed at 0x000100178ba4 */
/* WARNING: Switch with 1 destination removed at 0x000100178bb0 */

undefined8 Recovered_YYYMobileprovisionTableViewCell_m01155(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7588c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell setTitleLabel:]
 * Entry: 0x100178bbc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178bdc */
/* WARNING: Switch with 1 destination removed at 0x000100178bf0 */
/* WARNING: Switch with 1 destination removed at 0x000100178bfc */
/* WARNING: Switch with 1 destination removed at 0x000100178c34 */
/* WARNING: Switch with 1 destination removed at 0x000100178c50 */

void Recovered_YYYMobileprovisionTableViewCell_m01156
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7588c;
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
 * Method: -[YYYMobileprovisionTableViewCell valueLabel]
 * Entry: 0x100178c54; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178c64 */
/* WARNING: Switch with 1 destination removed at 0x000100178c70 */

undefined8 Recovered_YYYMobileprovisionTableViewCell_m01157(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75890);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell setValueLabel:]
 * Entry: 0x100178c7c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178c9c */
/* WARNING: Switch with 1 destination removed at 0x000100178ca8 */
/* WARNING: Switch with 1 destination removed at 0x000100178cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100178cdc */

void Recovered_YYYMobileprovisionTableViewCell_m01158
               (long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75890,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovisionTableViewCell .cxx_destruct]
 * Entry: 0x100178cec; original ABI: v16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178d0c */
/* WARNING: Switch with 1 destination removed at 0x000100178d1c */
/* WARNING: Switch with 1 destination removed at 0x000100178d50 */
/* WARNING: Switch with 1 destination removed at 0x000100178d74 */

void Recovered_YYYMobileprovisionTableViewCell_m01159(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75890,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7588c,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYMobileprovisionTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x100178b64; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100178b6c */
/* WARNING: Switch with 1 destination removed at 0x000100178b78 */

undefined8 Recovered_YYYMobileprovisionTableViewCell_m01160(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



