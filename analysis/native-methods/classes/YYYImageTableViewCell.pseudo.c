/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1003f51c8; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 94; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f5204 */
/* WARNING: Switch with 1 destination removed at 0x0001003f5280 */
/* WARNING: Switch with 1 destination removed at 0x0001003f52b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003f52d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003f530c */
/* WARNING: Switch with 1 destination removed at 0x0001003f5318 */
/* WARNING: Switch with 1 destination removed at 0x0001003f5334 */
/* WARNING: Switch with 1 destination removed at 0x0001003f5344 */
/* WARNING: Switch with 1 destination removed at 0x0001003f5350 */
/* WARNING: Switch with 1 destination removed at 0x0001003f53a4 */

undefined8
Recovered_YYYImageTableViewCell_m02946
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
  uStack_78 = uRam0000000100c73c78;
  uStack_80 = param_1;
  func_0x0001003f7b4c(&uStack_80,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,uVar1);
  lVar2 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    func_0x00010094dda0(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001003f7b50(*(undefined8 *)PTR__UIEdgeInsetsZero_100afc418,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x18),lVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar3 = _objc_retain(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell loadSubviews]
 * Entry: 0x1003f53a8; original ABI: v16@0:8
 * Original instructions in modeled body: 117; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f53d4 */
/* WARNING: Switch with 1 destination removed at 0x0001003f53e8 */
/* WARNING: Switch with 1 destination removed at 0x0001003f53f8 */
/* WARNING: Switch with 1 destination removed at 0x0001003f556c */
/* WARNING: Switch with 1 destination removed at 0x0001003f5650 */
/* WARNING: Switch with 1 destination removed at 0x0001003f56bc */

void Recovered_YYYImageTableViewCell_m02947(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = func_0x000100951360(uRam0000000100c715a0);
  func_0x0001003f7b58(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x0001003f7b5c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100946e20(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003f7b60(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001003f7b64(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003f7b68(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001009552e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell yyy_setupViewsConstraints]
 * Entry: 0x1003f56c0; original ABI: v16@0:8
 * Original instructions in modeled body: 81; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f5704 */
/* WARNING: Switch with 1 destination removed at 0x0001003f573c */
/* WARNING: Switch with 1 destination removed at 0x0001003f5894 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYImageTableViewCell_m02948(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  uStack_78 = uRam0000000100c73c78;
  uStack_80 = param_1;
  _objc_msgSendSuper2(&uStack_80,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x0001003f7b74(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _UNK_10097b060;
  puStack_b0 = puVar2;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_1003f5898;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x0001003f7b78(auVar3._0_8_,auVar3._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100976a00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = uVar1;
  puStack_d0 = &DAT_1003f71f8;
  puStack_c8 = &UNK_100afeb38;
  uStack_c0 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell sizeThatFits:]
 * Entry: 0x1003f7900; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f7918 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7924 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7930 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7968 */

void Recovered_YYYImageTableViewCell_m02949(undefined8 param_1)

{
  func_0x0001003f7c5c(param_1,0x404e000000000000);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell titleLabel]
 * Entry: 0x1003f79a8; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f79b0 */

undefined8 Recovered_YYYImageTableViewCell_m02950(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c760b8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell setTitleLabel:]
 * Entry: 0x1003f79c4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYImageTableViewCell_m02951(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c760b8;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell iconImageView]
 * Entry: 0x1003f79fc; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f7a04 */

undefined8 Recovered_YYYImageTableViewCell_m02952(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c760bc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell setIconImageView:]
 * Entry: 0x1003f7a18; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f7a3c */
/* WARNING: Switch with 1 destination removed at 0x0001003f7a4c */
/* WARNING: Switch with 1 destination removed at 0x0001003f7a58 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7a74 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7ab8 */

void Recovered_YYYImageTableViewCell_m02953(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c760bc;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYImageTableViewCell .cxx_destruct]
 * Entry: 0x1003f7abc; original ABI: v16@0:8
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f7ae0 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7af0 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7b14 */
/* WARNING: Switch with 1 destination removed at 0x0001003f7b48 */

void Recovered_YYYImageTableViewCell_m02954(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c760bc,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c760b8,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYImageTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x1003f7988; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003f7990 */
/* WARNING: Switch with 1 destination removed at 0x0001003f799c */

undefined8 Recovered_YYYImageTableViewCell_m02955(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



