/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x100028b08; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 83; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100028b34 */
/* WARNING: Switch with 1 destination removed at 0x000100028b4c */
/* WARNING: Switch with 1 destination removed at 0x000100028b94 */
/* WARNING: Switch with 1 destination removed at 0x000100028ba0 */
/* WARNING: Switch with 1 destination removed at 0x000100028bc4 */
/* WARNING: Switch with 1 destination removed at 0x000100028bd0 */
/* WARNING: Switch with 1 destination removed at 0x000100028bdc */
/* WARNING: Switch with 1 destination removed at 0x000100028be8 */
/* WARNING: Switch with 1 destination removed at 0x000100028c04 */
/* WARNING: Switch with 1 destination removed at 0x000100028c24 */
/* WARNING: Switch with 1 destination removed at 0x000100028c68 */
/* WARNING: Switch with 1 destination removed at 0x000100028c84 */

undefined8
Recovered_YYYAppSourceInfoTableViewCell_m00141
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar3 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_58 = uRam0000000100c73860;
  uStack_60 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_60,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                              uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x00010094dda0(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell prepareForReuse]
 * Entry: 0x100028c88; original ABI: v16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100028ca8 */
/* WARNING: Switch with 1 destination removed at 0x000100028cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100028cd4 */

void Recovered_YYYAppSourceInfoTableViewCell_m00142(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_28 = uRam0000000100c73860;
  uStack_30 = param_1;
                    /* WARNING: Switch is manually overridden */
  _objc_msgSendSuper2(&uStack_30,PTR_s_prepareForReuse_100c65378);
  func_0x00010002be80(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar1._0_8_,auVar1._8_8_,0x100b391a8);
  _objc_release(auVar1._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell loadSubviews]
 * Entry: 0x100028d1c; original ABI: v16@0:8
 * Original instructions in modeled body: 203; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100028d98 */
/* WARNING: Switch with 1 destination removed at 0x000100028e5c */
/* WARNING: Switch with 1 destination removed at 0x000100028e68 */
/* WARNING: Switch with 1 destination removed at 0x0001000292b4 */

void Recovered_YYYAppSourceInfoTableViewCell_m00143(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = func_0x00010002be84(uRam0000000100c71420);
  func_0x00010096f180(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x00010002be88(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100955120(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010002be8c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x00010002be90(uRam0000000100c71420);
  func_0x00010002be94(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x00010002be98(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001009550e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002be9c(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x00010002bea0(uRam0000000100c71420);
  func_0x00010096e800(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002bea4(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010002bea8(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100975aa0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002beac(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002beb0(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell yyy_setupViewsConstraints]
 * Entry: 0x1000292b8; original ABI: v16@0:8
 * Original instructions in modeled body: 112; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100029344 */
/* WARNING: Switch with 1 destination removed at 0x000100029454 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYAppSourceInfoTableViewCell_m00144(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = uRam0000000100c73860;
  uStack_70 = param_1;
  func_0x00010002bed4(&uStack_70,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x00010002bed8(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
  puStack_98 = PTR___NSConcreteStackBlock_100afc560;
  uStack_90 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
  uStack_8c = 0;
  puStack_88 = &DAT_1000294f0;
  puStack_80 = &UNK_100afeb38;
  uStack_78 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_98);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100978840(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _UNK_10097b060;
  puStack_c0 = puVar2;
  uStack_b8 = _UNK_10097b060;
  puStack_b0 = &DAT_10002af74;
  puStack_a8 = &UNK_100afeb38;
  uStack_a0 = param_1;
  func_0x00010002bedc(auVar3._0_8_,auVar3._8_8_,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100975aa0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_e8 = puVar2;
  uStack_e0 = uVar1;
  puStack_d8 = &DAT_10002b504;
  puStack_d0 = &UNK_100afeb38;
                    /* WARNING: Switch is manually overridden */
  uStack_c8 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_e8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100975aa0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961fa0(0x447a0000,auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  func_0x000100975aa0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961ee0(0x447a0000,auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell sizeThatFits:]
 * Entry: 0x10002bbc8; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bbd8 */
/* WARNING: Switch with 1 destination removed at 0x00010002bbe8 */

void Recovered_YYYAppSourceInfoTableViewCell_m00145(void)

{
                    /* WARNING: Switch is manually overridden */
  func_0x000100974ea0();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell titleLabel]
 * Entry: 0x10002bbf4; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bc04 */
/* WARNING: Switch with 1 destination removed at 0x00010002bc10 */

undefined8 Recovered_YYYAppSourceInfoTableViewCell_m00146(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7524c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell setTitleLabel:]
 * Entry: 0x10002bc1c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bc34 */

void Recovered_YYYAppSourceInfoTableViewCell_m00147
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7524c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell urlLabel]
 * Entry: 0x10002bc60; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bc70 */
/* WARNING: Switch with 1 destination removed at 0x00010002bc7c */

undefined8 Recovered_YYYAppSourceInfoTableViewCell_m00148(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75250);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell setUrlLabel:]
 * Entry: 0x10002bc88; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bca8 */
/* WARNING: Switch with 1 destination removed at 0x00010002bcb4 */
/* WARNING: Switch with 1 destination removed at 0x00010002bcc8 */
/* WARNING: Switch with 1 destination removed at 0x00010002bcec */

void Recovered_YYYAppSourceInfoTableViewCell_m00149
               (long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75250,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell tagLabel]
 * Entry: 0x10002bd00; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bd14 */

undefined8 Recovered_YYYAppSourceInfoTableViewCell_m00150(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75254);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppSourceInfoTableViewCell setTagLabel:]
 * Entry: 0x10002bd1c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bd40 */
/* WARNING: Switch with 1 destination removed at 0x00010002bd50 */
/* WARNING: Switch with 1 destination removed at 0x00010002bd80 */
/* WARNING: Switch with 1 destination removed at 0x00010002bd8c */
/* WARNING: Switch with 1 destination removed at 0x00010002bda8 */

void Recovered_YYYAppSourceInfoTableViewCell_m00151
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75254;
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
 * Method: -[YYYAppSourceInfoTableViewCell .cxx_destruct]
 * Entry: 0x10002bdc0; original ABI: v16@0:8
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bde4 */
/* WARNING: Switch with 1 destination removed at 0x00010002be30 */
/* WARNING: Switch with 1 destination removed at 0x00010002be44 */
/* WARNING: Switch with 1 destination removed at 0x00010002be78 */

void Recovered_YYYAppSourceInfoTableViewCell_m00152(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75254,0);
  _objc_storeStrong(param_1 + iRam0000000100c75250,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7524c,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYAppSourceInfoTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x10002bba8; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002bbb0 */
/* WARNING: Switch with 1 destination removed at 0x00010002bbbc */

undefined8 Recovered_YYYAppSourceInfoTableViewCell_m00153(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



