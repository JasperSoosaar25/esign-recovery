/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1003e9054; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 89; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003e9080 */
/* WARNING: Switch with 1 destination removed at 0x0001003e90a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003e90bc */
/* WARNING: Switch with 1 destination removed at 0x0001003e90c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003e90ec */
/* WARNING: Switch with 1 destination removed at 0x0001003e9100 */
/* WARNING: Switch with 1 destination removed at 0x0001003e912c */
/* WARNING: Switch with 1 destination removed at 0x0001003e9138 */
/* WARNING: Switch with 1 destination removed at 0x0001003e9168 */
/* WARNING: Switch with 1 destination removed at 0x0001003e917c */
/* WARNING: Switch with 1 destination removed at 0x0001003e91e4 */
/* WARNING: Switch with 1 destination removed at 0x0001003e9200 */

undefined8
Recovered_YYYTableViewCell_m02938
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
  uStack_58 = uRam0000000100c73c70;
  uStack_60 = param_1;
  lVar3 = func_0x0001003eaf84(&uStack_60,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                              uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x00010094dda0(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010096c5c0(*(undefined8 *)PTR__UIEdgeInsetsZero_100afc418,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x18),lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCell loadSubviews]
 * Entry: 0x1003e9204; original ABI: v16@0:8
 * Original instructions in modeled body: 94; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003e9228 */
/* WARNING: Switch with 1 destination removed at 0x0001003e9244 */
/* WARNING: Switch with 1 destination removed at 0x0001003e9300 */
/* WARNING: Switch with 1 destination removed at 0x0001003e93cc */

void Recovered_YYYTableViewCell_m02939(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar2 = func_0x000100951360(uRam0000000100c71420);
                    /* WARNING: Switch is manually overridden */
  func_0x0001003eaf8c(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x0001003eaf90(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968560(auVar2._0_8_,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001003eaf94(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001003eaf98(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCell yyy_setupViewsConstraints]
 * Entry: 0x1003e93e4; original ABI: v16@0:8
 * Original instructions in modeled body: 56; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003e9424 */
/* WARNING: Switch with 1 destination removed at 0x0001003e945c */
/* WARNING: Switch with 1 destination removed at 0x0001003e9480 */
/* WARNING: Switch with 1 destination removed at 0x0001003e94e4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTableViewCell_m02940(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = uRam0000000100c73c70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_yyy_setupViewsConstraints_100c711a0);
                    /* WARNING: Switch is manually overridden */
  func_0x000100976a00(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_70 = _UNK_10097b060;
  puStack_68 = &DAT_1003e9500;
  puStack_60 = &UNK_100afeb38;
  uStack_58 = param_1;
  func_0x0001003eafa0(auVar1._0_8_,auVar1._8_8_,&puStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCell titleLabel]
 * Entry: 0x1003eae8c; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003eae94 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaea8 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaeb4 */

undefined8 Recovered_YYYTableViewCell_m02941(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c760b4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCell setTitleLabel:]
 * Entry: 0x1003eaec0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003eaee0 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaef4 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaf00 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaf38 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaf54 */

void Recovered_YYYTableViewCell_m02942(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c760b4;
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
 * Method: -[YYYTableViewCell .cxx_destruct]
 * Entry: 0x1003eaf58; original ABI: v16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003eaf60 */
/* WARNING: Switch with 1 destination removed at 0x0001003eaf6c */

void Recovered_YYYTableViewCell_m02943(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c760b4,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYTableViewCell heightWithTilte:]
 * Entry: 0x1003eacd4; original ABI: d24@0:8@16
 * Original instructions in modeled body: 89; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003eacf0 */
/* WARNING: Switch with 1 destination removed at 0x0001003ead10 */
/* WARNING: Switch with 1 destination removed at 0x0001003ead1c */
/* WARNING: Switch with 1 destination removed at 0x0001003ead48 */
/* WARNING: Switch with 1 destination removed at 0x0001003ead54 */
/* WARNING: Switch with 1 destination removed at 0x0001003ead70 */
/* WARNING: Switch with 1 destination removed at 0x0001003ead7c */
/* WARNING: Switch with 1 destination removed at 0x0001003eadd8 */
/* WARNING: Switch with 1 destination removed at 0x0001003eadf8 */
/* WARNING: Switch with 1 destination removed at 0x0001003eae14 */
/* WARNING: Switch with 1 destination removed at 0x0001003eae5c */

undefined1  [16]
Recovered_YYYTableViewCell_m02944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  dVar6 = 40.0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar2 = func_0x00010094d6e0(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    dVar6 = 40.0;
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 0) {
    case false:
      func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      dVar4 = (double)func_0x000100938d60(uRam0000000100c714d0);
      dVar6 = -24.0;
      func_0x0001003eafe8(dVar4 + -24.0,lVar1,extraout_x1,uVar3);
      dVar6 = dVar6 + 10.0;
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
      if (dVar6 <= 40.0) {
        dVar6 = 40.0;
      }
    }
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar6;
                    /* WARNING: Switch is manually overridden */
  return auVar5;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x1003eae60; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003eae68 */
/* WARNING: Switch with 1 destination removed at 0x0001003eae74 */
/* WARNING: Switch with 1 destination removed at 0x0001003eae80 */

undefined8 Recovered_YYYTableViewCell_m02945(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



