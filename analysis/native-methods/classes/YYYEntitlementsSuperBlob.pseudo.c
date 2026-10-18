/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob data]
 * Entry: 0x10070d714; original ABI: @16@0:8
 * Original instructions in modeled body: 276; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070d820 */
/* WARNING: Switch with 1 destination removed at 0x00010070d87c */
/* WARNING: Switch with 1 destination removed at 0x00010070d8a0 */
/* WARNING: Switch with 1 destination removed at 0x00010070d8b0 */
/* WARNING: Switch with 1 destination removed at 0x00010070d8bc */
/* WARNING: Switch with 1 destination removed at 0x00010070d8d8 */
/* WARNING: Switch with 1 destination removed at 0x00010070d904 */
/* WARNING: Switch with 1 destination removed at 0x00010070d93c */
/* WARNING: Switch with 1 destination removed at 0x00010070d948 */
/* WARNING: Switch with 1 destination removed at 0x00010070d970 */
/* WARNING: Switch with 1 destination removed at 0x00010070d980 */
/* WARNING: Switch with 1 destination removed at 0x00010070d990 */
/* WARNING: Switch with 1 destination removed at 0x00010070d9ac */
/* WARNING: Switch with 1 destination removed at 0x00010070d9b8 */
/* WARNING: Switch with 1 destination removed at 0x00010070d9e4 */
/* WARNING: Switch with 1 destination removed at 0x00010070d9f0 */
/* WARNING: Switch with 1 destination removed at 0x00010070d9fc */
/* WARNING: Switch with 1 destination removed at 0x00010070da08 */
/* WARNING: Switch with 1 destination removed at 0x00010070da18 */
/* WARNING: Switch with 1 destination removed at 0x00010070da74 */
/* WARNING: Switch with 1 destination removed at 0x00010070da9c */
/* WARNING: Switch with 1 destination removed at 0x00010070dad4 */
/* WARNING: Switch with 1 destination removed at 0x00010070dae0 */
/* WARNING: Switch with 1 destination removed at 0x00010070daec */
/* WARNING: Switch with 1 destination removed at 0x00010070db14 */
/* WARNING: Switch with 1 destination removed at 0x00010070db8c */
/* WARNING: Switch with 1 destination removed at 0x00010070dbb8 */
/* WARNING: Switch with 1 destination removed at 0x00010070dbe4 */
/* WARNING: Switch with 1 destination removed at 0x00010070dc10 */

void Recovered_YYYEntitlementsSuperBlob_m03024(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_var;
  undefined8 uVar5;
  uint extraout_var_00;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
  func_0x00010093f1c0(uRam0000000100c71778);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010094ee80(param_1);
  func_0x00010094ee80(param_1);
  func_0x00010094ee80(param_1);
  iVar2 = func_0x00010094ee80(param_1);
  uStack_dc = extraout_var & 0xff00 | uVar1 >> 0x18 | (extraout_var_00 & 0xff) << 0x10 |
              iVar2 << 0x18;
  uVar1 = func_0x00010094d6e0(param_1);
  uVar3 = func_0x00010094d6e0(param_1);
  uVar4 = func_0x00010094d6e0(param_1);
  iVar2 = func_0x00010094d6e0(param_1);
  uStack_e0 = ((uVar3 | 0xff0000) & (uVar3 ^ 0xff00ff00)) >> 8 | uVar1 >> 0x18 |
              (uVar4 + (~uVar4 | 0xff00)) * 0x100 + 0x100 | iVar2 << 0x18;
  func_0x000100938ac0(uVar5,extraout_x1,&uStack_dc,4);
  func_0x000100938ac0(uVar5,extraout_x1_00,&uStack_e0,4);
                    /* WARNING: Switch is manually overridden */
  func_0x000100938ac0(uVar5,extraout_x1_01,param_1 + 8,1);
  func_0x000100938ac0(uVar5,extraout_x1_02,param_1 + 9,1);
  uVar1 = func_0x00010093a3e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(0xff < uVar1) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x000100938ac0(uVar5,extraout_x1_03,param_1 + 10,1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_10070d8bc_case_0;
  }
  do {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010093a3c0(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    param_1 = auVar10._0_8_;
                    /* WARNING: Switch is manually overridden */
    uVar6 = func_0x00010093e380(param_1,auVar10._8_8_,&uStack_130,auStack_d8,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar8 = *plStack_120;
                    /* WARNING: Switch is manually overridden */
      uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10070d990_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_120 == lVar8) * 8 + 0x100e09238)) {
        case 0x10070d9dc:
          _objc_enumerationMutation(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010093f1c0(*(undefined8 *)(lStack_128 + uVar9 * 8));
        auVar10 = _objc_retainAutoreleasedReturnValue();
        func_0x000100938b20(uVar5,auVar10._8_8_,auVar10._0_8_);
        _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
        uVar9 = uVar9 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(uVar9 < uVar6) {
        case true:
          goto override_jmp_10070d990_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        uVar6 = func_0x00010093e380(param_1,extraout_x1_04,&uStack_130,auStack_d8,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 == 0) {
        case true:
          goto override_jmp_10070d960_case_1;
        }
      } while( true );
    case true:
override_jmp_10070d960_case_1:
      _objc_release(param_1);
      uVar7 = _objc_retain(uVar5);
                    /* WARNING: Switch is manually overridden */
      _objc_release();
      _objc_autoreleaseReturnValue(uVar7);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010093a3e0(param_1);
      func_0x00010093a3e0(param_1);
override_jmp_10070d8bc_case_0:
      uVar1 = func_0x00010093a3e0(param_1);
      auVar10 = func_0x00010093a3e0(param_1);
      uStack_e4 = (uint)((ulong)(auVar10._0_8_ << 0x20) >> 0x18) & 0xffff | (uVar1 & 0xffff) >> 8;
                    /* WARNING: Switch is manually overridden */
      func_0x000100938ac0(uVar5,auVar10._8_8_,&uStack_e4,2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob magic]
 * Entry: 0x10070dc14; original ABI: I16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dc1c */
/* WARNING: Switch with 1 destination removed at 0x00010070dc2c */
/* WARNING: Switch with 1 destination removed at 0x00010070dc38 */

undefined4 Recovered_YYYEntitlementsSuperBlob_m03025(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + 0xc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setMagic:]
 * Entry: 0x10070dc44; original ABI: v20@0:8I16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dc4c */
/* WARNING: Switch with 1 destination removed at 0x00010070dc5c */
/* WARNING: Switch with 1 destination removed at 0x00010070dc68 */

void Recovered_YYYEntitlementsSuperBlob_m03026(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_1 + 0xc) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob length]
 * Entry: 0x10070dc70; original ABI: I16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dc78 */

undefined4 Recovered_YYYEntitlementsSuperBlob_m03027(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setLength:]
 * Entry: 0x10070dc84; original ABI: v20@0:8I16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dc8c */
/* WARNING: Switch with 1 destination removed at 0x00010070dc98 */

void Recovered_YYYEntitlementsSuperBlob_m03028(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob byte1]
 * Entry: 0x10070dca4; original ABI: C16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dcac */

undefined1 Recovered_YYYEntitlementsSuperBlob_m03029(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setByte1:]
 * Entry: 0x10070dcb8; original ABI: v20@0:8C16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dcc0 */
/* WARNING: Switch with 1 destination removed at 0x00010070dcd0 */

void Recovered_YYYEntitlementsSuperBlob_m03030(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob byte2]
 * Entry: 0x10070dcd8; original ABI: C16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dce0 */

undefined1 Recovered_YYYEntitlementsSuperBlob_m03031(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 9);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setByte2:]
 * Entry: 0x10070dcec; original ABI: v20@0:8C16
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYEntitlementsSuperBlob_m03032(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob blobsLength]
 * Entry: 0x10070dcf4; original ABI: S16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dcfc */
/* WARNING: Switch with 1 destination removed at 0x00010070dd08 */

undefined2 Recovered_YYYEntitlementsSuperBlob_m03033(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined2 *)(param_1 + 10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setBlobsLength:]
 * Entry: 0x10070dd14; original ABI: v20@0:8S16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dd1c */
/* WARNING: Switch with 1 destination removed at 0x00010070dd2c */
/* WARNING: Switch with 1 destination removed at 0x00010070dd38 */

void Recovered_YYYEntitlementsSuperBlob_m03034(long param_1,undefined8 param_2,undefined2 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined2 *)(param_1 + 10) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob blobs]
 * Entry: 0x10070dd40; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dd48 */

undefined8 Recovered_YYYEntitlementsSuperBlob_m03035(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob setBlobs:]
 * Entry: 0x10070dd54; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070dd74 */
/* WARNING: Switch with 1 destination removed at 0x00010070dd80 */
/* WARNING: Switch with 1 destination removed at 0x00010070dd9c */
/* WARNING: Switch with 1 destination removed at 0x00010070ddac */
/* WARNING: Switch with 1 destination removed at 0x00010070dde0 */

void Recovered_YYYEntitlementsSuperBlob_m03036(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYEntitlementsSuperBlob .cxx_destruct]
 * Entry: 0x10070dde4; original ABI: v16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070ddfc */
/* WARNING: Switch with 1 destination removed at 0x00010070de08 */
/* WARNING: Switch with 1 destination removed at 0x00010070de2c */
/* WARNING: Switch with 1 destination removed at 0x00010070de38 */

void Recovered_YYYEntitlementsSuperBlob_m03037(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYEntitlementsSuperBlob supperBlobWithPlist:]
 * Entry: 0x10070d14c; original ABI: @24@0:8@16
 * Original instructions in modeled body: 67; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070d17c */
/* WARNING: Switch with 1 destination removed at 0x00010070d188 */
/* WARNING: Switch with 1 destination removed at 0x00010070d1b4 */
/* WARNING: Switch with 1 destination removed at 0x00010070d1d0 */
/* WARNING: Switch with 1 destination removed at 0x00010070d1e0 */
/* WARNING: Switch with 1 destination removed at 0x00010070d204 */
/* WARNING: Switch with 1 destination removed at 0x00010070d224 */
/* WARNING: Switch with 1 destination removed at 0x00010070d43c */
/* WARNING: Switch with 1 destination removed at 0x00010070d5ac */

void Recovered_YYYEntitlementsSuperBlob_m03038
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    _objc_release(lVar1);
    _objc_autoreleaseReturnValue(0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    return;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
    auVar3 = func_0x00010093c700(uRam0000000100c71458);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar2 = func_0x00010094ba40(lVar1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010070d214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100e08ee8))();
    return;
  }
}



