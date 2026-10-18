/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYHTTPSConnection isSecureServer]
 * Entry: 0x1000bf498; original ABI: B16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYHTTPSConnection_m00659(void)

{
  return 1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYHTTPSConnection sslIdentityAndCertificates]
 * Entry: 0x1000bf4a0; original ABI: @16@0:8
 * Original instructions in modeled body: 296; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000bf4e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf4f0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf50c */
/* WARNING: Switch with 1 destination removed at 0x0001000bf53c */
/* WARNING: Switch with 1 destination removed at 0x0001000bf57c */
/* WARNING: Switch with 1 destination removed at 0x0001000bf608 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf614 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf628 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf634 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf668 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf678 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf698 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf6b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf6e0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf700 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf7a8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf7b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf7e0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf7f0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf7fc */
/* WARNING: Switch with 1 destination removed at 0x0001000bf840 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf864 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf884 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf890 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf89c */
/* WARNING: Switch with 1 destination removed at 0x0001000bf8b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf928 */
/* WARNING: Switch with 1 destination removed at 0x0001000bf95c */
/* WARNING: Switch with 1 destination removed at 0x0001000bfa48 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfa78 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYHTTPSConnection_m00660(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *extraout_x8;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  puVar3 = auStack_70;
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar10 = (undefined4 *)0x100e91240;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91240 == 0) {
  case true:
    bRam0000000100ce28f5 = bRam0000000100ce28ea ^ 0xe;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100ce28f6 =
         CONCAT17((byte)((ulong)uRam0000000100ce28eb >> 0x38) ^
                  (byte)((ulong)_UNK_10097c008 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100ce28eb >> 0x30) ^
                           (byte)((ulong)_UNK_10097c008 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100ce28eb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c008 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100ce28eb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c008 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100ce28eb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c008 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100ce28eb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c008 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100ce28eb >> 8) ^
                                                  (byte)((ulong)_UNK_10097c008 >> 8),
                                                  (byte)uRam0000000100ce28eb ^ (byte)_UNK_10097c008)
                                                  ))))));
    bRam0000000100ce28fe = bRam0000000100ce28f3 ^ 0xef;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ce28ff = bRam0000000100ce28f4 ^ 0x7d;
    bRam0000000100ce28e5 = bRam0000000100ce28e0 ^ 0xe7;
    bRam0000000100ce28e6 = bRam0000000100ce28e1 ^ 0x9c;
    cRam0000000100ce28e7 = bRam0000000100ce28e2 + (bRam0000000100ce28e2 & 0x23) * -2 + -0x5d;
    bRam0000000100ce28e8 = bRam0000000100ce28e3 ^ 0x88;
    cRam0000000100ce28e9 = bRam0000000100ce28e4 + (bRam0000000100ce28e4 & 0x17) * -2 + -0x69;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  do {
    *puVar10 = 1;
    puVar11 = (undefined8 *)(puVar3 + -0x10);
    puVar12 = (undefined8 *)(puVar3 + -0x40);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lRam0000000100e91238 == 0) {
    case false:
override_jmp_1000bf654_case_1:
                    /* WARNING: Switch is manually overridden */
      uVar6 = _objc_retain(lRam0000000100e91238);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_1000bf854_case_1;
    case true:
                    /* WARNING: Switch is manually overridden */
      *puVar11 = 0;
      auVar14 = _objc_alloc(uRam0000000100c71850);
      uVar6 = func_0x0001000bfeac(auVar14._0_8_,auVar14._8_8_,0x100ce2900);
      puVar1 = PTR__kSecImportExportPassphrase_100afcaf0;
                    /* WARNING: Switch is manually overridden */
      func_0x00010093f1c0(uVar6);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_retain(0x100ce2920);
      *(undefined8 *)(puVar3 + -0x20) = *(undefined8 *)puVar1;
      *(undefined8 *)(puVar3 + -0x30) = 0x100ce2920;
      uVar8 = func_0x0001000bfeb0(0,puVar3 + -0x20,puVar3 + -0x30,1,0,0);
      uVar9 = _CFArrayCreate(0,0,0,0);
      *puVar12 = uVar9;
      iVar4 = _SecPKCS12Import(uVar7,uVar8,puVar12);
      puVar2 = PTR__kSecImportItemTrust_100afcb00;
      puVar1 = PTR__kSecImportItemIdentity_100afcaf8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(iVar4 == 0) {
      case false:
        lVar13 = 0;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar8 = _CFArrayGetValueAtIndex(*puVar12,0);
        uVar9 = _CFDictionaryGetValue(uVar8,*(undefined8 *)puVar1);
        _CFDictionaryGetValue(uVar8,*(undefined8 *)puVar2);
        func_0x0001000bfeb4(uVar9,puVar11);
        auVar14 = _objc_alloc(uRam0000000100c713e8);
        *(undefined8 *)(puVar3 + -0x50) = *puVar11;
        *(undefined8 *)(puVar3 + -0x48) = 0;
        uVar8 = func_0x000100949940(auVar14._0_8_,auVar14._8_8_,uVar9);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        lVar5 = _objc_retain(uVar8);
        lVar13 = lRam0000000100e91238;
        lRam0000000100e91238 = lVar5;
        _objc_release(lVar13);
        _objc_release(lVar5);
        lVar13 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    }
                    /* WARNING: Switch is manually overridden */
    _objc_release(0x100ce2920);
    _objc_release(uVar7);
    _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar13 * 8 + 0x100ce2b40)) {
    case 0x1000bf858:
      goto override_jmp_1000bf654_case_1;
    case 0x1000bf894:
override_jmp_1000bf854_case_1:
      puVar3 = puVar3 + -0x40;
                    /* WARNING: Switch is manually overridden */
      _objc_autoreleaseReturnValue(uVar6);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      *extraout_x8 = 1;
      puVar10 = extraout_x8;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYHTTPSConnection httpResponseForMethod:URI:]
 * Entry: 0x1000bfa7c; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 104; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000bfaa0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfab4 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfac8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfad4 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfb10 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfbb4 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfbc8 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfbf0 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfd68 */

void Recovered_YYYHTTPSConnection_m00661
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91244 == 0) {
  case true:
    bRam0000000100ce294a = bRam0000000100ce2940 ^ 0xc9;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ce294b = bRam0000000100ce2941 ^ 0x3f;
    bRam0000000100ce294c = bRam0000000100ce2942 ^ 0xd4;
    bRam0000000100ce294d = bRam0000000100ce2943 ^ 0xf;
    cRam0000000100ce294e = bRam0000000100ce2944 + (bRam0000000100ce2944 & 0x6b) * -2 + 'k';
    bRam0000000100ce294f = bRam0000000100ce2945 ^ 0x21;
    bRam0000000100ce2950 = bRam0000000100ce2946 ^ 0x59;
    bRam0000000100ce2951 = bRam0000000100ce2947 ^ 7;
    bRam0000000100ce2952 = bRam0000000100ce2948 ^ 0x90;
    bRam0000000100ce2953 = bRam0000000100ce2949 ^ 0xd1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e91244 = 1;
  _objc_retain(param_3);
  auVar2 = _objc_retain(param_4);
  uVar1 = func_0x0001009461a0(auVar2._0_8_,auVar2._8_8_,0x100ce2960);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001000bfc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100ce2c40))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYHTTPSConnection prepareForBodyWithSize:]
 * Entry: 0x1000bfe04; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000bfe0c */
/* WARNING: Switch with 1 destination removed at 0x0001000bfe18 */

void Recovered_YYYHTTPSConnection_m00662(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYHTTPSConnection processBodyData:]
 * Entry: 0x1000bfe20; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000bfe40 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfe54 */
/* WARNING: Switch with 1 destination removed at 0x0001000bfea8 */

void Recovered_YYYHTTPSConnection_m00663(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1 = _objc_retain(param_3);
  func_0x000100938b20(*(undefined8 *)(param_1 + iRam0000000100c781f4),auVar1._8_8_,auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(auVar1._0_8_);
  return;
}



