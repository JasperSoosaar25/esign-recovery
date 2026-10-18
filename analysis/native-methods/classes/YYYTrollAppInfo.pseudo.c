/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo hash]
 * Entry: 0x100101928; original ABI: Q16@0:8
 * Original instructions in modeled body: 47; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100101944 */
/* WARNING: Switch with 1 destination removed at 0x0001001019a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001019b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001019cc */
/* WARNING: Switch with 1 destination removed at 0x0001001019dc */
/* WARNING: Switch with 1 destination removed at 0x000100101a08 */

ulong Recovered_YYYTrollAppInfo_m00788(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
                    /* WARNING: Switch is manually overridden */
  func_0x000100106124(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x000100106128();
  func_0x00010093aa20(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar4 = func_0x000100946380(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return uVar4 ^ uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo isEqual:]
 * Entry: 0x100101a20; original ABI: B24@0:8@16
 * Original instructions in modeled body: 75; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100101a48 */
/* WARNING: Switch with 1 destination removed at 0x000100101a54 */
/* WARNING: Switch with 1 destination removed at 0x000100101a60 */
/* WARNING: Switch with 1 destination removed at 0x000100101a84 */
/* WARNING: Switch with 1 destination removed at 0x000100101a98 */
/* WARNING: Switch with 1 destination removed at 0x000100101ab4 */
/* WARNING: Switch with 1 destination removed at 0x000100101ac4 */
/* WARNING: Switch with 1 destination removed at 0x000100101ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100101c84 */
/* WARNING: Switch with 1 destination removed at 0x000100101ca0 */
/* WARNING: Switch with 1 destination removed at 0x000100101cdc */
/* WARNING: Switch with 1 destination removed at 0x000100101d00 */

undefined8 Recovered_YYYTrollAppInfo_m00789(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  lVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_1 == lVar2) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    auVar4 = func_0x00010093c700(uRam0000000100c71730);
    uVar3 = func_0x00010094ba40(lVar2,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100101ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100cf9590))();
    return uVar1;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
    return 1;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo tryGetImageFromInfoDictionary]
 * Entry: 0x100101d4c; original ABI: @16@0:8
 * Original instructions in modeled body: 473; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100101d90 */
/* WARNING: Switch with 1 destination removed at 0x000100101da4 */
/* WARNING: Switch with 1 destination removed at 0x000100101db0 */
/* WARNING: Switch with 1 destination removed at 0x000100101df4 */
/* WARNING: Switch with 1 destination removed at 0x000100101e20 */
/* WARNING: Switch with 1 destination removed at 0x000100101f4c */
/* WARNING: Switch with 1 destination removed at 0x000100101f80 */
/* WARNING: Switch with 1 destination removed at 0x000100101f8c */
/* WARNING: Switch with 1 destination removed at 0x000100101f98 */
/* WARNING: Switch with 1 destination removed at 0x000100101fcc */
/* WARNING: Switch with 1 destination removed at 0x000100101fdc */
/* WARNING: Switch with 1 destination removed at 0x000100101ff8 */
/* WARNING: Switch with 1 destination removed at 0x000100102064 */
/* WARNING: Switch with 1 destination removed at 0x000100102098 */
/* WARNING: Switch with 1 destination removed at 0x0001001020c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001020d0 */
/* WARNING: Switch with 1 destination removed at 0x0001001031d4 */
/* WARNING: Switch with 1 destination removed at 0x0001001033cc */
/* WARNING: Switch with 1 destination removed at 0x000100103420 */
/* WARNING: Switch with 1 destination removed at 0x0001001035e0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTrollAppInfo_m00790(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *extraout_x8;
  undefined4 *puVar4;
  byte *extraout_x9;
  byte *pbVar5;
  byte *extraout_x10;
  byte *pbVar6;
  byte *extraout_x11;
  byte *pbVar7;
  byte *extraout_x12;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  puVar9 = auStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar4 = (undefined4 *)0x100e91414;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puVar1 = auStack_b0;
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91414 == 0) {
  case true:
    pbVar5 = (byte *)0x100cf90c0;
    pbVar7 = (byte *)0x100cf90e0;
    pbVar6 = (byte *)0x100cf90a0;
    pbVar8 = (byte *)0x100cf90ae;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_100101df4_case_0;
  }
  while( true ) {
    *puVar4 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    puVar9 = puVar1 + -0x1e0;
    func_0x000100106140(param_1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 0) {
    case false:
      uStack_80 = param_1;
      func_0x000100947f40(param_1);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951cc0(auVar11._0_8_,auVar11._8_8_,0x100cf9180);
      uStack_88 = _objc_retainAutoreleasedReturnValue();
      puStack_a0 = puVar1 + -0xe0;
      _objc_release(auVar11._0_8_);
      uVar10 = uStack_88;
                    /* WARNING: Switch is manually overridden */
      auVar11 = func_0x00010093c700(uRam0000000100c71458);
      uVar3 = func_0x00010094ba40(uVar10,auVar11._8_8_,auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001020a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100cf9830))();
      return;
    }
    _objc_autoreleaseReturnValue(0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    uVar10 = *(undefined8 *)extraout_x9;
    *(ulong *)extraout_x11 =
         CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)_UNK_10097c628 >> 0x38),
                  CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)_UNK_10097c628 >> 0x30),
                           CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c628 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c628 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c628 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10097c628 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar10 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10097c628 >> 8),
                                                  (byte)uVar10 ^ (byte)_UNK_10097c628)))))));
    extraout_x11[8] = extraout_x9[8] ^ 0xa1;
    extraout_x11[9] = extraout_x9[9] ^ 0x25;
    extraout_x11[10] = extraout_x9[10] ^ 0x4f;
    extraout_x11[0xb] = extraout_x9[0xb] ^ 0x9b;
    extraout_x11[0xc] = extraout_x9[0xc] ^ 0xf4;
    extraout_x11[0xd] = extraout_x9[0xd] ^ 0x1f;
    extraout_x11[0xe] = extraout_x9[0xe] ^ 2;
    extraout_x11[0xf] = (extraout_x9[0xf] + (extraout_x9[0xf] & 0x54) * -2) - 0x2c;
    extraout_x11[0x10] = extraout_x9[0x10] ^ 0x57;
    extraout_x11[0x11] = extraout_x9[0x11] ^ 0x1c;
    extraout_x11[0x12] = extraout_x9[0x12] ^ 0x74;
    extraout_x11[0x13] = extraout_x9[0x13] ^ 0xe8;
    *extraout_x12 = *extraout_x10 ^ 0xca;
    extraout_x12[1] = extraout_x10[1] ^ 0x92;
    extraout_x12[2] = extraout_x10[2] ^ 0x73;
    extraout_x12[3] = extraout_x10[3] ^ 0x5f;
    extraout_x12[4] = extraout_x10[4] ^ 0xcd;
    extraout_x12[5] = extraout_x10[5] ^ 0xb3;
    extraout_x12[6] = extraout_x10[6] ^ 0x7d;
    extraout_x12[7] = extraout_x10[7] + (extraout_x10[7] & 0x74) * -2 + 0x74;
    extraout_x12[8] = extraout_x10[8] ^ 0xb1;
    extraout_x12[9] = extraout_x10[9] + (extraout_x10[9] & 0x7c) * -2 + 0x7c;
    extraout_x12[10] = extraout_x10[10] ^ 0xe1;
    extraout_x12[0xb] = extraout_x10[0xb] + (extraout_x10[0xb] & 0x16) * -2 + 0x96;
    puVar4 = extraout_x8;
    pbVar5 = extraout_x9;
    pbVar6 = extraout_x10;
    pbVar7 = extraout_x11;
    pbVar8 = extraout_x12;
override_jmp_100101df4_case_0:
    *pbVar7 = *pbVar5 ^ 0x34;
    pbVar7[1] = pbVar5[1] ^ 0xdd;
    pbVar7[2] = pbVar5[2] ^ 1;
    pbVar7[3] = pbVar5[3] + (pbVar5[3] & 0x5a) * -2 + 0x5a;
    pbVar7[4] = pbVar5[4] ^ 0xb5;
    pbVar7[5] = pbVar5[5] + (pbVar5[5] & 0x32) * -2 + 0x32;
    pbVar7[6] = (pbVar5[6] + (pbVar5[6] & 0x60) * -2) - 0x20;
    pbVar7[7] = pbVar5[7] + (pbVar5[7] & 0x29) * -2 + 0xa9;
    uVar10 = *(undefined8 *)(pbVar5 + 8);
    *(ulong *)(pbVar7 + 8) =
         CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)_UNK_10097c630 >> 0x38),
                  CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)_UNK_10097c630 >> 0x30),
                           CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c630 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c630 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c630 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10097c630 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar10 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10097c630 >> 8),
                                                  (byte)uVar10 ^ (byte)_UNK_10097c630)))))));
    pbVar7[0x10] = pbVar5[0x10] ^ 0x57;
    pbVar7[0x11] = pbVar5[0x11] ^ 0x1c;
    pbVar7[0x12] = pbVar5[0x12] ^ 0x74;
    pbVar7[0x13] = pbVar5[0x13] ^ 0xe8;
    *pbVar8 = (*pbVar6 + (*pbVar6 & 0x4a) * -2) - 0x36;
    pbVar8[1] = pbVar6[1] ^ 0x92;
    pbVar8[2] = pbVar6[2] ^ 0x73;
    pbVar8[3] = pbVar6[3] + (pbVar6[3] & 0xdf) * -2 + 0x5f;
    uVar10 = *(undefined8 *)(pbVar6 + 4);
    *(ulong *)(pbVar8 + 4) =
         CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)_UNK_10097c638 >> 0x38),
                  CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)_UNK_10097c638 >> 0x30),
                           CONCAT15((byte)((ulong)uVar10 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c638 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c638 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c638 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10097c638 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar10 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10097c638 >> 8),
                                                  (byte)uVar10 ^ (byte)_UNK_10097c638)))))));
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cf90ba = pbVar6[0xc] ^ 0xd2;
    cRam0000000100cf90bb = bRam0000000100cf90ad + (bRam0000000100cf90ad & 0x57) * -2 + -0x29;
    bRam0000000100cf9120 = bRam0000000100cf9100 ^ 0xfc;
    bRam0000000100cf9121 = bRam0000000100cf9101 ^ 0x9b;
    bRam0000000100cf9122 = bRam0000000100cf9102 ^ 0x84;
    bRam0000000100cf9123 = bRam0000000100cf9103 ^ 0x74;
    bRam0000000100cf9124 = bRam0000000100cf9104 ^ 0x7b;
    bRam0000000100cf9125 = bRam0000000100cf9105 ^ 0x4a;
    bRam0000000100cf9126 = bRam0000000100cf9106 ^ 0x50;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cf9127 = bRam0000000100cf9107 ^ 0x4c;
    uRam0000000100cf9128 =
         CONCAT17((byte)((ulong)uRam0000000100cf9108 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c640 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cf9108 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c640 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cf9108 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c640 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cf9108 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c640 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cf9108 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c640 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cf9108 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c640 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cf9108 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c640 >> 8),
                                                  (byte)uRam0000000100cf9108 ^ (byte)_UNK_10097c640)
                                                  ))))));
    cRam0000000100cf9130 = bRam0000000100cf9110 + (bRam0000000100cf9110 & 0x3e) * -2 + -0x42;
    bRam0000000100cf9160 = bRam0000000100cf9140 ^ 0x8b;
    cRam0000000100cf9161 = bRam0000000100cf9141 + (bRam0000000100cf9141 & 0x55) * -2 + 'U';
    bRam0000000100cf9162 = bRam0000000100cf9142 ^ 0xf2;
    bRam0000000100cf9163 = bRam0000000100cf9143 ^ 0xf2;
    bRam0000000100cf9164 = ~((bRam0000000100cf9144 | 0x5a) & (bRam0000000100cf9144 ^ 0xff | 0xa5));
    cRam0000000100cf9165 = bRam0000000100cf9145 + (bRam0000000100cf9145 & 0xdf) * -2 + -0x21;
    bRam0000000100cf9166 = bRam0000000100cf9146 ^ 2;
    bRam0000000100cf9167 = bRam0000000100cf9147 ^ 0xba;
    bRam0000000100cf9168 = bRam0000000100cf9148 ^ 0xd;
    cRam0000000100cf9169 = cRam0000000100cf9149 - (cRam0000000100cf9149 << 1 | 2U);
    uRam0000000100cf916a =
         CONCAT17((byte)((ulong)uRam0000000100cf914a >> 0x38) ^
                  (byte)((ulong)_UNK_10097c648 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cf914a >> 0x30) ^
                           (byte)((ulong)_UNK_10097c648 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cf914a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c648 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cf914a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c648 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cf914a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c648 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cf914a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c648 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cf914a >> 8) ^
                                                  (byte)((ulong)_UNK_10097c648 >> 8),
                                                  (byte)uRam0000000100cf914a ^ (byte)_UNK_10097c648)
                                                  ))))));
    puVar1 = puVar9;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo refreshApplistionType]
 * Entry: 0x100103ec8; original ABI: v16@0:8
 * Original instructions in modeled body: 68; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100103ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100103f24 */
/* WARNING: Switch with 1 destination removed at 0x000100103f40 */
/* WARNING: Switch with 1 destination removed at 0x000100103f64 */
/* WARNING: Switch with 1 destination removed at 0x000100103f94 */
/* WARNING: Switch with 1 destination removed at 0x000100103fa0 */
/* WARNING: Switch with 1 destination removed at 0x000100103fb0 */
/* WARNING: Switch with 1 destination removed at 0x000100103fd4 */
/* WARNING: Switch with 1 destination removed at 0x000100103fe8 */

void Recovered_YYYTrollAppInfo_m00791(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar2 = uRam0000000100c71938;
                    /* WARNING: Switch is manually overridden */
  func_0x00010093aa20(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100938960(uVar2,auVar4._8_8_,auVar4._0_8_);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100938da0(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar3 = *(undefined8 *)(param_1 + 0x58);
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo refreshInfo]
 * Entry: 0x100103ffc; original ABI: v16@0:8
 * Original instructions in modeled body: 493; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100104028 */
/* WARNING: Switch with 1 destination removed at 0x00010010403c */
/* WARNING: Switch with 1 destination removed at 0x000100104048 */
/* WARNING: Switch with 1 destination removed at 0x00010010407c */
/* WARNING: Switch with 1 destination removed at 0x0001001040b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001042fc */
/* WARNING: Switch with 1 destination removed at 0x0001001043b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001043c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001043cc */
/* WARNING: Switch with 1 destination removed at 0x000100104980 */
/* WARNING: Switch with 1 destination removed at 0x000100104e94 */
/* WARNING: Switch with 1 destination removed at 0x000100104f38 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTrollAppInfo_m00792(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = uRam0000000100c715a8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91418 == 0) {
  case true:
    cRam0000000100cf924b = bRam0000000100cf923b + (bRam0000000100cf923b & 6) * -2 + -0x7a;
    bRam0000000100cf924c = bRam0000000100cf923c ^ 0x4a;
    bRam0000000100cf924d = ~((bRam0000000100cf923d | 0x85) & (bRam0000000100cf923d ^ 0xff | 0x7a));
    uRam0000000100cf924e =
         CONCAT17((byte)((ulong)uRam0000000100cf923e >> 0x38) ^
                  (byte)((ulong)_UNK_10097c658 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cf923e >> 0x30) ^
                           (byte)((ulong)_UNK_10097c658 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cf923e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c658 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cf923e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c658 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cf923e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c658 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cf923e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c658 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cf923e >> 8) ^
                                                  (byte)((ulong)_UNK_10097c658 >> 8),
                                                  (byte)uRam0000000100cf923e ^ (byte)_UNK_10097c658)
                                                  ))))));
    bRam0000000100cf9256 = bRam0000000100cf9246 ^ 0x37;
    bRam0000000100cf9257 = bRam0000000100cf9247 ^ 0x31;
    cRam0000000100cf9258 = bRam0000000100cf9248 + (bRam0000000100cf9248 & 0x7c) * -2 + '|';
    bRam0000000100cf9259 = bRam0000000100cf9249 ^ 0x5f;
    bRam0000000100cf925a = bRam0000000100cf924a ^ 0xce;
    uRam0000000100cf9270 =
         CONCAT17((byte)((ulong)uRam0000000100cf9260 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c660 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cf9260 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c660 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cf9260 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c660 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cf9260 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c660 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cf9260 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c660 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cf9260 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c660 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cf9260 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c660 >> 8),
                                                  (byte)uRam0000000100cf9260 ^ (byte)_UNK_10097c660)
                                                  ))))));
    bRam0000000100cf9278 = bRam0000000100cf9268 ^ 3;
    bRam0000000100cf9279 = bRam0000000100cf9269 ^ 0xee;
    cRam0000000100cf927a = bRam0000000100cf926a + (bRam0000000100cf926a & 0x48) * -2 + 'H';
    bRam0000000100cf927b = bRam0000000100cf926b ^ 0x9d;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cf927c = bRam0000000100cf926c ^ 0x72;
    bRam0000000100cf9220 = bRam0000000100cf9200 ^ 0x36;
    cRam0000000100cf9221 = '\x7f' - cRam0000000100cf9201;
    uRam0000000100cf9222 =
         CONCAT17((byte)((ulong)uRam0000000100cf9202 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c668 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cf9202 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c668 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cf9202 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c668 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cf9202 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c668 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cf9202 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c668 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cf9202 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c668 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cf9202 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c668 >> 8),
                                                  (byte)uRam0000000100cf9202 ^ (byte)_UNK_10097c668)
                                                  ))))));
    cRam0000000100cf922a = bRam0000000100cf920a + (bRam0000000100cf920a & 0x44) * -2 + -0x3c;
    bRam0000000100cf922b = bRam0000000100cf920b ^ 0xbf;
    cRam0000000100cf922c = bRam0000000100cf920c + (bRam0000000100cf920c & 0x34) * -2 + '4';
    cRam0000000100cf922d = bRam0000000100cf920d + (bRam0000000100cf920d & 0x49) * -2 + 'I';
    bRam0000000100cf922e = bRam0000000100cf920e ^ 0x8e;
    bRam0000000100cf922f = bRam0000000100cf920f ^ 0xe9;
    bRam0000000100cf9230 = bRam0000000100cf9210 ^ 0xc9;
    bRam0000000100cf9231 = bRam0000000100cf9211 ^ 0x22;
    bRam0000000100cf9232 = bRam0000000100cf9212 ^ 0x21;
    bRam0000000100cf9233 = ~((bRam0000000100cf9213 | 0x29) & (bRam0000000100cf9213 ^ 0xff | 0xd6));
    bRam0000000100cf9234 = bRam0000000100cf9214 ^ 0xcb;
    bRam0000000100cf9235 = bRam0000000100cf9215 ^ 6;
    bRam0000000100cf9236 = bRam0000000100cf9216 ^ 0x8d;
    bRam0000000100cf9237 = bRam0000000100cf9217 ^ 0xe7;
    bRam0000000100cf9238 = bRam0000000100cf9218 ^ 0xe9;
    bRam0000000100cf9239 = bRam0000000100cf9219 ^ 0xc0;
    bRam0000000100cf923a = bRam0000000100cf921a ^ 0x2d;
    cRam0000000100cf92a0 = bRam0000000100cf9280 + (bRam0000000100cf9280 & 0xf9) * -2 + -7;
    bRam0000000100cf92a1 = bRam0000000100cf9281 ^ 0x97;
    bRam0000000100cf92a2 = bRam0000000100cf9282 ^ 0xf4;
    cRam0000000100cf92a3 = bRam0000000100cf9283 + (bRam0000000100cf9283 & 0xef) * -2 + 'o';
    cRam0000000100cf92a4 = bRam0000000100cf9284 + (bRam0000000100cf9284 & 0x40) * '\x02' + -0x40;
    bRam0000000100cf92a5 = bRam0000000100cf9285 ^ 0x58;
    bRam0000000100cf92a6 = bRam0000000100cf9286 ^ 0x4b;
    cRam0000000100cf92a7 = bRam0000000100cf9287 + (bRam0000000100cf9287 & 0x1f) * -2 + -0x61;
    bRam0000000100cf92a8 = bRam0000000100cf9288 ^ 0x85;
    bRam0000000100cf92a9 = ~((bRam0000000100cf9289 | 0xaf) & (bRam0000000100cf9289 ^ 0xff | 0x50));
    cRam0000000100cf92aa = bRam0000000100cf928a + (bRam0000000100cf928a & 0x37) * -2 + '7';
    bRam0000000100cf92ab = bRam0000000100cf928b ^ 0x48;
    bRam0000000100cf92ac = bRam0000000100cf928c ^ 0x91;
    bRam0000000100cf92ad = bRam0000000100cf928d ^ 0xc0;
    bRam0000000100cf92ae = bRam0000000100cf928e ^ 0x7c;
    cRam0000000100cf92af = bRam0000000100cf928f + (bRam0000000100cf928f & 0x25) * -2 + '%';
    bRam0000000100cf92b0 = bRam0000000100cf9290 ^ 8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cf92b1 = bRam0000000100cf9291 ^ 0x95;
    bRam0000000100cf92b2 = bRam0000000100cf9292 ^ 5;
    bRam0000000100cf92be = bRam0000000100cf92b3 ^ 0xb1;
    bRam0000000100cf92bf = bRam0000000100cf92b4 ^ 0xee;
    bRam0000000100cf92c0 = bRam0000000100cf92b5 ^ 0x43;
    bRam0000000100cf92c1 = bRam0000000100cf92b6 ^ 0x52;
    cRam0000000100cf92c2 = bRam0000000100cf92b7 + (bRam0000000100cf92b7 & 0xcc) * -2 + 'L';
    bRam0000000100cf92c3 = bRam0000000100cf92b8 ^ 0x53;
    bRam0000000100cf92c4 = bRam0000000100cf92b9 ^ 0x9f;
    bRam0000000100cf92c5 = bRam0000000100cf92ba ^ 0xe5;
    cRam0000000100cf92c6 = bRam0000000100cf92bb + (bRam0000000100cf92bb & 3) * -2 + '\x03';
    bRam0000000100cf92c7 = bRam0000000100cf92bc ^ 0xb3;
    bRam0000000100cf92c8 = bRam0000000100cf92bd ^ 0x4a;
    bRam0000000100cf92f0 = bRam0000000100cf92d0 ^ 0xcf;
    bRam0000000100cf92f1 = bRam0000000100cf92d1 ^ 0xb6;
    cRam0000000100cf92f2 = bRam0000000100cf92d2 + (bRam0000000100cf92d2 & 0x1a) * -2 + -0x66;
    bRam0000000100cf92f3 = bRam0000000100cf92d3 ^ 0x3f;
    bRam0000000100cf92f4 = bRam0000000100cf92d4 ^ 0xfd;
    cRam0000000100cf92f5 = bRam0000000100cf92d5 + (bRam0000000100cf92d5 & 0x2d) * -2 + -0x53;
    bRam0000000100cf92f6 = bRam0000000100cf92d6 ^ 0xf0;
    bRam0000000100cf92f7 = bRam0000000100cf92d7 ^ 0x55;
    bRam0000000100cf92f8 = bRam0000000100cf92d8 ^ 199;
    cRam0000000100cf92f9 = bRam0000000100cf92d9 + (bRam0000000100cf92d9 & 0xf3) * -2 + -0xd;
    bRam0000000100cf92fa = bRam0000000100cf92da ^ 0xfe;
    bRam0000000100cf92fb = bRam0000000100cf92db ^ 0xcd;
    bRam0000000100cf92fc = bRam0000000100cf92dc ^ 0x96;
    bRam0000000100cf92fd = bRam0000000100cf92dd ^ 0x75;
    bRam0000000100cf92fe = bRam0000000100cf92de ^ 0x23;
    bRam0000000100cf92ff = bRam0000000100cf92df ^ 0x80;
    cRam0000000100cf9300 = bRam0000000100cf92e0 + (bRam0000000100cf92e0 & 0x35) * -2 + '5';
    bRam0000000100cf9301 = bRam0000000100cf92e1 ^ 0x7a;
    bRam0000000100cf9302 = bRam0000000100cf92e2 ^ 0xcc;
    bRam0000000100cf9303 = bRam0000000100cf92e3 ^ 0x1a;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91418 = 1;
  func_0x0001001061dc(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943ae0(uVar1,auVar3._8_8_,auVar3._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100101854();
  _objc_release(uVar1);
  _objc_release(auVar3._0_8_);
  func_0x0001001061e0(param_1);
                    /* WARNING: Switch is manually overridden */
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x0001009388e0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001001061e4(auVar3._0_8_,auVar3._8_8_,0x100cf9390);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  uVar2 = func_0x00010097a800(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001043dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100cfa8c0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo logo]
 * Entry: 0x100105150; original ABI: @16@0:8
 * Original instructions in modeled body: 25; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105174 */
/* WARNING: Switch with 1 destination removed at 0x000100105180 */
/* WARNING: Switch with 1 destination removed at 0x00010010518c */
/* WARNING: Switch with 1 destination removed at 0x0001001051a8 */

void Recovered_YYYTrollAppInfo_m00793(undefined8 param_1)

{
  ulong uVar1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x0001009462e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001051b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100cfabf0))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo applicationType]
 * Entry: 0x1001054e0; original ABI: @16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105514 */
/* WARNING: Switch with 1 destination removed at 0x000100105520 */
/* WARNING: Switch with 1 destination removed at 0x00010010552c */
/* WARNING: Switch with 1 destination removed at 0x00010010553c */
/* WARNING: Switch with 1 destination removed at 0x000100105548 */
/* WARNING: Switch with 1 destination removed at 0x000100105570 */

void Recovered_YYYTrollAppInfo_m00794(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 0x58) != 0) {
  case false:
    func_0x00010095a5c0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Could not recover jumptable at 0x00010093148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_100afe338)(*(undefined8 *)(param_1 + 0x58));
  return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo isDegbugEnabled]
 * Entry: 0x100105574; original ABI: B16@0:8
 * Original instructions in modeled body: 240; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105590 */
/* WARNING: Switch with 1 destination removed at 0x0001001055a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001055b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001056e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001056f4 */
/* WARNING: Switch with 1 destination removed at 0x000100105720 */
/* WARNING: Switch with 1 destination removed at 0x000100105730 */
/* WARNING: Switch with 1 destination removed at 0x00010010574c */
/* WARNING: Switch with 1 destination removed at 0x000100105770 */
/* WARNING: Switch with 1 destination removed at 0x000100105780 */
/* WARNING: Switch with 1 destination removed at 0x000100105790 */
/* WARNING: Switch with 1 destination removed at 0x0001001057c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001057d4 */
/* WARNING: Switch with 1 destination removed at 0x000100105800 */
/* WARNING: Switch with 1 destination removed at 0x000100105810 */
/* WARNING: Switch with 1 destination removed at 0x000100105820 */
/* WARNING: Switch with 1 destination removed at 0x00010010583c */
/* WARNING: Switch with 1 destination removed at 0x000100105864 */
/* WARNING: Switch with 1 destination removed at 0x000100105870 */
/* WARNING: Switch with 1 destination removed at 0x000100105890 */
/* WARNING: Switch with 1 destination removed at 0x00010010589c */
/* WARNING: Switch with 1 destination removed at 0x0001001058a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001058c4 */
/* WARNING: Switch with 1 destination removed at 0x000100105904 */
/* WARNING: Switch with 1 destination removed at 0x000100105930 */
/* WARNING: Switch with 1 destination removed at 0x0001001059a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001059dc */

undefined8 Recovered_YYYTrollAppInfo_m00795(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9141c == 0) {
  case true:
    bRam0000000100cf93df = bRam0000000100cf93d0 ^ 0xba;
    bRam0000000100cf93e0 = bRam0000000100cf93d1 ^ 0x5e;
    bRam0000000100cf93e1 = bRam0000000100cf93d2 ^ 0xf6;
    bRam0000000100cf93e2 = bRam0000000100cf93d3 ^ 0xe;
    cRam0000000100cf93e3 = bRam0000000100cf93d4 + (bRam0000000100cf93d4 & 0x16) * -2 + '\x16';
    bRam0000000100cf93e4 = bRam0000000100cf93d5 ^ 0x24;
    bRam0000000100cf93e5 = bRam0000000100cf93d6 ^ 0xae;
    bRam0000000100cf93e6 = bRam0000000100cf93d7 ^ 0xe;
    bRam0000000100cf93e7 = bRam0000000100cf93d8 ^ 0x23;
    bRam0000000100cf93e8 = bRam0000000100cf93d9 ^ 0x53;
    bRam0000000100cf93eb = bRam0000000100cf93dc ^ 0x26;
    bRam0000000100cf93ec = bRam0000000100cf93dd ^ 0x24;
    bRam0000000100cf93ed = bRam0000000100cf93de ^ 0x24;
    bRam0000000100cf93e9 = bRam0000000100cf93da ^ 0x87;
    cRam0000000100cf93ea = bRam0000000100cf93db + (bRam0000000100cf93db & 0x4b) * -2 + 'K';
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e9141c = 1;
                    /* WARNING: Switch is manually overridden */
  func_0x0001009429a0(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case true:
    func_0x000100942ea0(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010076138c(uVar2);
    auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100963c00(param_1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    _objc_release(uVar2);
    func_0x0001009429a0(param_1);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 == 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100963c00(param_1,extraout_x1,*(undefined8 *)PTR____NSDictionary0___100afc6c8);
    }
  }
                    /* WARNING: Switch is manually overridden */
  func_0x0001009429a0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100106228(auVar3._0_8_,auVar3._8_8_,0x100cf93f0);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar2 = func_0x00010010622c(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo hasTryGetLogo]
 * Entry: 0x1001059e0; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001059ec */
/* WARNING: Switch with 1 destination removed at 0x0001001059f8 */
/* WARNING: Switch with 1 destination removed at 0x000100105a04 */

bool Recovered_YYYTrollAppInfo_m00796(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + 8) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setHasTryGetLogo:]
 * Entry: 0x100105a14; original ABI: v20@0:8B16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105a1c */
/* WARNING: Switch with 1 destination removed at 0x000100105a28 */
/* WARNING: Switch with 1 destination removed at 0x000100105a38 */
/* WARNING: Switch with 1 destination removed at 0x000100105a44 */

void Recovered_YYYTrollAppInfo_m00797(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo containPath]
 * Entry: 0x100105a5c; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105a64 */
/* WARNING: Switch with 1 destination removed at 0x000100105a70 */
/* WARNING: Switch with 1 destination removed at 0x000100105a7c */

undefined8 Recovered_YYYTrollAppInfo_m00798(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setContainPath:]
 * Entry: 0x100105a88; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105aac */
/* WARNING: Switch with 1 destination removed at 0x000100105ab8 */
/* WARNING: Switch with 1 destination removed at 0x000100105ac4 */
/* WARNING: Switch with 1 destination removed at 0x000100105af8 */

void Recovered_YYYTrollAppInfo_m00799(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo appPath]
 * Entry: 0x100105b0c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105b14 */
/* WARNING: Switch with 1 destination removed at 0x000100105b20 */

undefined8 Recovered_YYYTrollAppInfo_m00800(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setAppPath:]
 * Entry: 0x100105b2c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105b50 */
/* WARNING: Switch with 1 destination removed at 0x000100105b5c */
/* WARNING: Switch with 1 destination removed at 0x000100105ba0 */

void Recovered_YYYTrollAppInfo_m00801(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100106248(param_1,param_2,param_3,0x18);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo executable]
 * Entry: 0x100105ba4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105bb0 */
/* WARNING: Switch with 1 destination removed at 0x000100105bbc */

undefined8 Recovered_YYYTrollAppInfo_m00802(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setExecutable:]
 * Entry: 0x100105bc4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105be8 */
/* WARNING: Switch with 1 destination removed at 0x000100105bf4 */
/* WARNING: Switch with 1 destination removed at 0x000100105c38 */

void Recovered_YYYTrollAppInfo_m00803(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x20);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo appName]
 * Entry: 0x100105c3c; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105c44 */

undefined8 Recovered_YYYTrollAppInfo_m00804(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setAppName:]
 * Entry: 0x100105c50; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105c74 */
/* WARNING: Switch with 1 destination removed at 0x000100105c80 */
/* WARNING: Switch with 1 destination removed at 0x000100105c8c */
/* WARNING: Switch with 1 destination removed at 0x000100105cc0 */

void Recovered_YYYTrollAppInfo_m00805(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x28);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo bundleId]
 * Entry: 0x100105cd4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105cdc */
/* WARNING: Switch with 1 destination removed at 0x000100105ce8 */

undefined8 Recovered_YYYTrollAppInfo_m00806(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setBundleId:]
 * Entry: 0x100105cf4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105cfc */
/* WARNING: Switch with 1 destination removed at 0x000100105d08 */

void Recovered_YYYTrollAppInfo_m00807(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo version]
 * Entry: 0x100105d14; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105d1c */
/* WARNING: Switch with 1 destination removed at 0x000100105d28 */
/* WARNING: Switch with 1 destination removed at 0x000100105d34 */

undefined8 Recovered_YYYTrollAppInfo_m00808(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setVersion:]
 * Entry: 0x100105d40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105d64 */
/* WARNING: Switch with 1 destination removed at 0x000100105d70 */
/* WARNING: Switch with 1 destination removed at 0x000100105d7c */
/* WARNING: Switch with 1 destination removed at 0x000100105dc0 */

void Recovered_YYYTrollAppInfo_m00809(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x38);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setLogo:]
 * Entry: 0x100105dc4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105dd0 */
/* WARNING: Switch with 1 destination removed at 0x000100105de0 */

void Recovered_YYYTrollAppInfo_m00810(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x40,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo infoDictionary]
 * Entry: 0x100105de8; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105df0 */
/* WARNING: Switch with 1 destination removed at 0x000100105dfc */
/* WARNING: Switch with 1 destination removed at 0x000100105e08 */

undefined8 Recovered_YYYTrollAppInfo_m00811(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setInfoDictionary:]
 * Entry: 0x100105e14; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105e30 */
/* WARNING: Switch with 1 destination removed at 0x000100105e3c */
/* WARNING: Switch with 1 destination removed at 0x000100105e48 */
/* WARNING: Switch with 1 destination removed at 0x000100105e6c */

void Recovered_YYYTrollAppInfo_m00812(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x48,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo modifyDate]
 * Entry: 0x100105e7c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105e84 */
/* WARNING: Switch with 1 destination removed at 0x000100105e90 */

undefined8 Recovered_YYYTrollAppInfo_m00813(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setModifyDate:]
 * Entry: 0x100105e9c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105ea8 */

void Recovered_YYYTrollAppInfo_m00814(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x50,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setApplicationType:]
 * Entry: 0x100105eb4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105ed8 */
/* WARNING: Switch with 1 destination removed at 0x000100105ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100105f18 */

void Recovered_YYYTrollAppInfo_m00815(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x58);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo entitlements]
 * Entry: 0x100105f2c; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105f34 */

undefined8 Recovered_YYYTrollAppInfo_m00816(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setEntitlements:]
 * Entry: 0x100105f40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105f4c */

void Recovered_YYYTrollAppInfo_m00817(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x60,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo isDecryptApp]
 * Entry: 0x100105f58; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105f60 */
/* WARNING: Switch with 1 destination removed at 0x000100105f6c */
/* WARNING: Switch with 1 destination removed at 0x000100105f7c */

bool Recovered_YYYTrollAppInfo_m00818(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + 9) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo setIsDecryptApp:]
 * Entry: 0x100105f8c; original ABI: v20@0:8B16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105f94 */

void Recovered_YYYTrollAppInfo_m00819(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollAppInfo .cxx_destruct]
 * Entry: 0x100105fa0; original ABI: v16@0:8
 * Original instructions in modeled body: 59; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100105fb8 */
/* WARNING: Switch with 1 destination removed at 0x000100105fdc */
/* WARNING: Switch with 1 destination removed at 0x000100105fe8 */
/* WARNING: Switch with 1 destination removed at 0x00010010609c */
/* WARNING: Switch with 1 destination removed at 0x0001001060ac */
/* WARNING: Switch with 1 destination removed at 0x000100106100 */

void Recovered_YYYTrollAppInfo_m00820(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



