/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive initWithFilePath:toDestination:]
 * Entry: 0x1001e7484; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 160; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e74ac */
/* WARNING: Switch with 1 destination removed at 0x0001001e74dc */
/* WARNING: Switch with 1 destination removed at 0x0001001e74ec */
/* WARNING: Switch with 1 destination removed at 0x0001001e750c */
/* WARNING: Switch with 1 destination removed at 0x0001001e7518 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7540 */
/* WARNING: Switch with 1 destination removed at 0x0001001e754c */
/* WARNING: Switch with 1 destination removed at 0x0001001e7558 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7628 */
/* WARNING: Switch with 1 destination removed at 0x0001001e765c */
/* WARNING: Switch with 1 destination removed at 0x0001001e769c */
/* WARNING: Switch with 1 destination removed at 0x0001001e7720 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7768 */

undefined8
Recovered_YYYDEBArchive_m01519
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar6 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar6 = func_0x000100948020(param_1);
  lVar3 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x0001009727c0(uRam0000000100c71c48,auVar6._8_8_,uVar1);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009705a0(lVar3,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar6._0_8_);
    func_0x000100935320(lVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar5 == 0) {
    case false:
      func_0x00010093ff20(uRam0000000100c71648);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x0001001e9ce0(auVar6._0_8_,auVar6._8_8_,uVar2,0);
      _objc_release(auVar6._0_8_);
      func_0x0001001e9ce4(uRam0000000100c71648);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x0001001e9ce8(auVar6._0_8_,auVar6._8_8_,uVar2,1,0,0);
      _objc_release(auVar6._0_8_);
      func_0x000100964360(lVar3,extraout_x1,uVar1);
      func_0x000100962e60(lVar3,extraout_x1_00,uVar2);
      func_0x000100935320(lVar3);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x000100962c60(auVar6._0_8_,auVar6._8_8_,lVar3);
      _objc_release(auVar6._0_8_);
      func_0x000100935320(lVar3);
      auVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x0001009696a0(auVar6._0_8_,auVar6._8_8_,1);
      _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
      func_0x000100935320(lVar3);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x00010095fd00(auVar6._0_8_,auVar6._8_8_,1);
      _objc_release(auVar6._0_8_);
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      uVar4 = 0;
      goto LAB_1001e76a4;
    }
  }
  uVar4 = _objc_retain(lVar3);
LAB_1001e76a4:
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(lVar3);
  return uVar4;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive decompress]
 * Entry: 0x1001e776c; original ABI: B16@0:8
 * Original instructions in modeled body: 335; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e77b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e77c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e77dc */
/* WARNING: Switch with 1 destination removed at 0x0001001e7848 */
/* WARNING: Switch with 1 destination removed at 0x0001001e786c */
/* WARNING: Switch with 1 destination removed at 0x0001001e79d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a00 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a10 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a38 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a68 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a8c */
/* WARNING: Switch with 1 destination removed at 0x0001001e7a9c */
/* WARNING: Switch with 1 destination removed at 0x0001001e7aa8 */
/* WARNING: Switch with 1 destination removed at 0x0001001e7ab4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e819c */
/* WARNING: Switch with 1 destination removed at 0x0001001e8348 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8378 */
/* WARNING: Switch with 1 destination removed at 0x0001001e83b8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Recovered_YYYDEBArchive_m01520(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined **unaff_x22;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91958 == 0) {
  case true:
    bRam0000000100d44357 = bRam0000000100d4434e ^ 0x6b;
    cRam0000000100d44358 = bRam0000000100d4434f + (bRam0000000100d4434f & 0x51) * -2 + 'Q';
    bRam0000000100d44359 = bRam0000000100d44350 ^ 0x2b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d4435a = bRam0000000100d44351 ^ 0x2d;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d4435b = bRam0000000100d44352 ^ 0x48;
    bRam0000000100d4435c = bRam0000000100d44353 ^ 0x85;
    bRam0000000100d4435d = bRam0000000100d44354 ^ 0x4c;
    bRam0000000100d4435e = ~((bRam0000000100d44355 | 0x51) & (bRam0000000100d44355 ^ 0xff | 0xae));
    bRam0000000100d4435f = bRam0000000100d44356 ^ 0x9e;
    bRam0000000100d4433b = bRam0000000100d44330 ^ 0xfc;
    cRam0000000100d4433c = bRam0000000100d44331 + (bRam0000000100d44331 & 100) * -2 + 'd';
    cRam0000000100d4433d = bRam0000000100d44332 + (bRam0000000100d44332 & 0x14) * -2 + -0x6c;
    uRam0000000100d4433e =
         CONCAT17((byte)((ulong)uRam0000000100d44333 >> 0x38) ^
                  (byte)((ulong)_UNK_10097e1a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d44333 >> 0x30) ^
                           (byte)((ulong)_UNK_10097e1a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d44333 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097e1a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d44333 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097e1a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d44333 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097e1a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d44333 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097e1a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d44333 >> 8) ^
                                                  (byte)((ulong)_UNK_10097e1a0 >> 8),
                                                  (byte)uRam0000000100d44333 ^ (byte)_UNK_10097e1a0)
                                                  ))))));
    bRam0000000100d4434a = bRam0000000100d44346 ^ 1;
    bRam0000000100d4434b = bRam0000000100d44347 ^ 0x43;
    bRam0000000100d4434c = bRam0000000100d44348 ^ 0xe9;
    cRam0000000100d4434d = bRam0000000100d44349 + (bRam0000000100d44349 & 0x27) * -2 + -0x59;
  }
  iRam0000000100e91958 = 1;
  func_0x000100935320(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = func_0x0001001e9cf4();
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iVar1 == 0xd) {
  case false:
    unaff_x22 = &PTR_s_y_fileName_100c71000;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_1001e7a10_case_0;
  }
  while( true ) {
    func_0x000100935320(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100940600(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001e9cf8(uVar2,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar2);
    func_0x0001001e9cfc(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001e9d00(auVar5._0_8_,auVar5._8_8_,1);
    _objc_release(auVar5._0_8_);
    func_0x000100935320(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001e9d04(unaff_x22[0x82],auVar5._8_8_,0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x000100958020(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_,0x100d44360);
    _objc_release(auVar6._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x000100935320(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    iVar1 = func_0x000100977960(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(iVar1 != 0) {
    case false:
      func_0x000100943980(param_1);
      auVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar3 = func_0x0001001e9d08(auVar5._0_8_,auVar5._8_8_,0x100d44380);
      _objc_release(auVar5._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001e7ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100d46940))();
      return uVar2;
                    /* WARNING: Switch is manually overridden */
    case true:
                    /* WARNING: Switch is manually overridden */
    }
override_jmp_1001e7a10_case_0:
    param_1 = 0;
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lVar4) break;
    ___stack_chk_fail();
    func_0x0001001e9d38(0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100940600(0);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100962e40(uVar2,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar2);
    func_0x000100935320(0);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001e9d3c(auVar5._0_8_,auVar5._8_8_,1);
    _objc_release(auVar5._0_8_);
    func_0x000100935320(0);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009519c0(unaff_x22[0x82],auVar5._8_8_,0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x000100958020(auVar5._0_8_,auVar6._8_8_,auVar6._0_8_,0x100d44360);
    _objc_release(auVar6._0_8_);
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive simpleUnarchiver:shouldExtractEntryWithDictionary:to:]
 * Entry: 0x1001e8510; original ABI: B40@0:8@16@24@32
 * Original instructions in modeled body: 182; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8540 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8558 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8590 */
/* WARNING: Switch with 1 destination removed at 0x0001001e85c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001e86b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e86e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e86f4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8704 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8970 */
/* WARNING: Switch with 1 destination removed at 0x0001001e89b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8a14 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYDEBArchive_m01521
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9195c == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d443c4 = bRam0000000100d443c0 ^ 0x21;
    bRam0000000100d443c5 = bRam0000000100d443c1 ^ 0x22;
    cRam0000000100d443c6 = bRam0000000100d443c2 + (bRam0000000100d443c2 & 0xfb) * -2 + '{';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d443c7 = bRam0000000100d443c3 ^ 0xc9;
    bRam0000000100d443d7 = bRam0000000100d443c8 ^ 0x19;
    cRam0000000100d443d8 = bRam0000000100d443c9 + (bRam0000000100d443c9 & 0x50) * -2 + 'P';
    cRam0000000100d443d9 = bRam0000000100d443ca + (bRam0000000100d443ca & 0x2c) * -2 + -0x54;
    uRam0000000100d443da =
         CONCAT17((byte)((ulong)uRam0000000100d443cb >> 0x38) ^
                  (byte)((ulong)_UNK_10097e1a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d443cb >> 0x30) ^
                           (byte)((ulong)_UNK_10097e1a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d443cb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097e1a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d443cb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097e1a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d443cb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097e1a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d443cb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097e1a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d443cb >> 8) ^
                                                  (byte)((ulong)_UNK_10097e1a8 >> 8),
                                                  (byte)uRam0000000100d443cb ^ (byte)_UNK_10097e1a8)
                                                  ))))));
    bRam0000000100d443e2 = bRam0000000100d443d3 ^ 0xfb;
    bRam0000000100d443e3 = bRam0000000100d443d4 ^ 0xfd;
    bRam0000000100d443e4 = bRam0000000100d443d5 ^ 0x6d;
    bRam0000000100d443e5 = bRam0000000100d443d6 ^ 0x91;
    bRam0000000100d443f8 = bRam0000000100d443e8 ^ 0x11;
    cRam0000000100d443f9 = bRam0000000100d443e9 + (bRam0000000100d443e9 & 199) * -2 + -0x39;
    bRam0000000100d443fa = bRam0000000100d443ea ^ 0xaf;
    cRam0000000100d443fb = bRam0000000100d443eb + (bRam0000000100d443eb & 0x2e) * -2 + -0x52;
    uRam0000000100d443fc =
         CONCAT17((byte)((ulong)uRam0000000100d443ec >> 0x38) ^
                  (byte)((ulong)_UNK_10097e1b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d443ec >> 0x30) ^
                           (byte)((ulong)_UNK_10097e1b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d443ec >> 0x28) ^
                                    (byte)((ulong)_UNK_10097e1b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d443ec >> 0x20) ^
                                             (byte)((ulong)_UNK_10097e1b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d443ec >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097e1b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d443ec >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097e1b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d443ec >> 8) ^
                                                  (byte)((ulong)_UNK_10097e1b8 >> 8),
                                                  (byte)uRam0000000100d443ec ^ (byte)_UNK_10097e1b8)
                                                  ))))));
    bRam0000000100d44404 = bRam0000000100d443f4 ^ 0xf8;
    cRam0000000100d44405 = bRam0000000100d443f5 + (bRam0000000100d443f5 & 0x18) * -2 + -0x68;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e9195c = 1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
                    /* WARNING: Switch is manually overridden */
  func_0x000100943980(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010097a820(auVar2._0_8_,auVar2._8_8_,0x100d44410);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001e8714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d46e70))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive filePath]
 * Entry: 0x1001e8a70; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8a78 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8a84 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8a90 */

undefined8 Recovered_YYYDEBArchive_m01522(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive setFilePath:]
 * Entry: 0x1001e8a9c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8ac0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8acc */
/* WARNING: Switch with 1 destination removed at 0x0001001e8b10 */

void Recovered_YYYDEBArchive_m01523(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive destinationPath]
 * Entry: 0x1001e8b14; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8b1c */
/* WARNING: Switch with 1 destination removed at 0x0001001e8b28 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8b34 */

undefined8 Recovered_YYYDEBArchive_m01524(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive setDestinationPath:]
 * Entry: 0x1001e8b40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8b48 */

void Recovered_YYYDEBArchive_m01525(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive XADarchiver]
 * Entry: 0x1001e8b54; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8b5c */
/* WARNING: Switch with 1 destination removed at 0x0001001e8b68 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8b74 */

undefined8 Recovered_YYYDEBArchive_m01526(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive setXADarchiver:]
 * Entry: 0x1001e8b80; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8b98 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8ba8 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8bd8 */

void Recovered_YYYDEBArchive_m01527(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYDEBArchive .cxx_destruct]
 * Entry: 0x1001e8bdc; original ABI: v16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8bf4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8c00 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8c10 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8c70 */

void Recovered_YYYDEBArchive_m01528(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
  _objc_storeStrong(param_1 + 8,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



