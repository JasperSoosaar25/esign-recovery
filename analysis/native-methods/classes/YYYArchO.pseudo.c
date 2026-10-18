/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:infoPlistData:requirementsSlot:codeResources:entitlementsSlot:entitlementsSlotDER:execSegFlags:]
 * Entry: 0x10077473c; original ABI: @84@0:8B16@20@28@36@44@52@60@68Q76
 * Original instructions in modeled body: 287; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007747b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007747d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007747f0 */
/* WARNING: Switch with 1 destination removed at 0x000100774834 */
/* WARNING: Switch with 1 destination removed at 0x000100774850 */
/* WARNING: Switch with 1 destination removed at 0x000100774864 */
/* WARNING: Switch with 1 destination removed at 0x00010077487c */
/* WARNING: Switch with 1 destination removed at 0x000100775878 */
/* WARNING: Switch with 1 destination removed at 0x0001007758d4 */
/* WARNING: Switch with 1 destination removed at 0x000100775954 */
/* WARNING: Switch with 1 destination removed at 0x000100775a08 */
/* WARNING: Switch with 1 destination removed at 0x000100775a3c */
/* WARNING: Switch with 1 destination removed at 0x000100775cf8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYArchO_m03291
               (undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
               undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,ulong param_11)

{
  undefined8 *puVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint extraout_var;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_260 [128];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [48];
  undefined8 auStack_170 [16];
  undefined8 *puStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  uint uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  uStack_c8 = param_11;
  lStack_80 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puStack_f0 = auStack_170;
  puStack_a8 = auStack_1a0;
  puStack_a0 = auStack_1e0;
  puStack_e8 = auStack_260;
  uStack_c0 = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    uStack_d8 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
    lStack_88 = _objc_retain(param_5);
    uStack_90 = _objc_retain(param_6);
    param_7 = _objc_retain(param_7);
    uVar7 = _objc_retain(param_8);
    param_8 = _objc_retain(param_9);
    param_10 = _objc_retain(param_10);
    param_6 = lStack_88;
    param_9 = uStack_90;
    param_4 = uStack_d8;
    puVar1 = puStack_f0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uStack_e0 = param_7;
    uStack_b8 = param_8;
    uStack_b0 = param_10;
    uStack_98 = uVar7;
                    /* WARNING: Switch is manually overridden */
    switch(lStack_88 == 0) {
    case false:
      puVar18 = (uint *)(puStack_f0 + 4);
      puStack_f0[5] = 0;
      puVar18[0] = 0;
      puVar18[1] = 0;
      puVar1[10] = 0;
      puVar1[7] = 0;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      *puVar1 = _UNK_10099c630;
      *(undefined4 *)(puVar1 + 1) = 0x40200;
      *(undefined8 *)((long)puVar1 + 0x14) = 0;
      *(undefined8 *)((long)puVar1 + 0xc) = 0;
      *(undefined4 *)((long)puVar1 + 0x1c) = 0;
      uVar4 = func_0x00010093cd60(param_1);
      func_0x00010093cd60(param_1);
      uVar5 = func_0x00010093cd60(param_1);
      uVar2 = uStack_c8;
                    /* WARNING: Switch is manually overridden */
      iVar6 = func_0x00010093cd60(param_1);
      *puVar18 = extraout_var & 0xff00 | uVar4 >> 0x18 | (uVar5 + (~uVar5 | 0xff00)) * 0x100 + 0x100
                 | iVar6 << 0x18;
      uVar4 = uStack_c0;
                    /* WARNING: Switch is manually overridden */
      bVar3 = uStack_c0 == 0;
      uVar15 = 0x20;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (bVar3) {
        uVar15 = 0x14;
      }
      *(undefined1 *)((long)puVar1 + 0x24) = uVar15;
      uVar15 = 1;
      if (!bVar3) {
        uVar15 = 2;
      }
      *(undefined1 *)((long)puVar1 + 0x25) = uVar15;
      *(undefined2 *)((long)puVar1 + 0x26) = 0xc00;
      puVar1[5] = 0;
      *(undefined4 *)(puVar1 + 6) = 0;
      puVar1[8] = 0;
      uVar7 = 0x20;
      if (bVar3) {
        uVar7 = 0x14;
      }
      uVar8 = func_0x000100942e80(param_1);
      uVar9 = func_0x000100942e80(param_1);
      uVar10 = func_0x000100942e80(param_1);
      uVar11 = func_0x000100942e80(param_1);
      uVar12 = func_0x000100942e80(param_1);
      uVar13 = func_0x000100942e80(param_1);
      uVar5 = func_0x000100942e80(param_1);
      lVar14 = func_0x000100942e80(param_1);
      uVar16 = uVar2 >> 0x28 & 0xff00 | uVar2 >> 0x38 | uVar2 >> 0x18 & 0xff0000;
      uVar17 = (uVar2 | 0xff00000000) & (uVar2 ^ 0xffffff00ffffff00);
      uVar16 = (uVar2 & 0xff0000) << 0x18 | ((uVar2 | 0xff000000) & (uVar2 ^ 0xffffff00ffffff)) << 8
               | ((uVar16 ^ uVar17 >> 8) + uVar16) - (uVar16 & (uVar17 >> 8 ^ 0xffffffffffffffff));
      uVar17 = (uVar2 & 0xff00) << 0x28;
      puVar1[9] = uVar9 >> 0x28 & 0xff00 | uVar8 + (~uVar8 | 0xff00000000000000) + 1 >> 0x38 |
                  uVar10 >> 0x18 & 0xff0000 | uVar11 >> 8 & 0xff000000 |
                  (uVar12 >> 0x18 & 0xff) << 0x20 | (uVar13 >> 0x10 & 0xff) << 0x28 | lVar14 << 0x38
                  | (ulong)((uVar5 | 0xff00) & (uVar5 ^ 0xff00ff)) << 0x28;
      puVar1[10] = ((uVar16 ^ uVar17) + uVar16) - (uVar16 & (uVar17 ^ 0xffffffffffffffff)) |
                   uVar2 << 0x38;
      func_0x00010093f1c0(uRam0000000100c71778);
      auVar19 = _objc_retainAutoreleasedReturnValue();
      func_0x00010093f540(uRam0000000100c71778,auVar19._8_8_,uVar7);
      auVar20 = _objc_retainAutoreleasedReturnValue();
      func_0x000100938b20(auVar19._0_8_,auVar20._8_8_,auVar20._0_8_);
      _objc_release(auVar20._0_8_);
      uStack_d0 = (ulong)uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001007748a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((ulong)uVar4 * 8 + 0x100e35128))();
      return;
                    /* WARNING: Switch is manually overridden */
    }
    param_5 = 0;
    _objc_release(param_10);
    _objc_release(param_8);
    _objc_release(uVar7);
    _objc_release(param_7);
    _objc_release(param_9);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_autoreleaseReturnValue(0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_80) break;
    ___stack_chk_fail();
    _objc_retain(param_4);
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateSlotBuildEntitlements:]
 * Entry: 0x1007765d8; original ABI: @24@0:8@16
 * Original instructions in modeled body: 74; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007765f4 */
/* WARNING: Switch with 1 destination removed at 0x000100776600 */
/* WARNING: Switch with 1 destination removed at 0x000100776620 */
/* WARNING: Switch with 1 destination removed at 0x00010077662c */
/* WARNING: Switch with 1 destination removed at 0x0001007766a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007766cc */
/* WARNING: Switch with 1 destination removed at 0x0001007766dc */
/* WARNING: Switch with 1 destination removed at 0x000100776724 */

void Recovered_YYYArchO_m03292(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar4 = _objc_retain(param_3);
  lVar1 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
    func_0x00010093f560(uRam0000000100c71a60,auVar4._8_8_,lVar1,100,0,0);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093a380(uRam0000000100c730c8,auVar4._8_8_,0xfade7171,auVar4._0_8_);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010093a300(uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateSlotBuildDerEntitlements:]
 * Entry: 0x100776728; original ABI: @24@0:8@16
 * Original instructions in modeled body: 59; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010077674c */
/* WARNING: Switch with 1 destination removed at 0x000100776758 */
/* WARNING: Switch with 1 destination removed at 0x000100776794 */
/* WARNING: Switch with 1 destination removed at 0x0001007767a0 */
/* WARNING: Switch with 1 destination removed at 0x00010077682c */

void Recovered_YYYArchO_m03293(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
    func_0x000100776830(lVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093a380(uRam0000000100c730c8,auVar4._8_8_,0xfade7172,auVar4._0_8_);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093a300();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar3 = 0;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateSlotBuildRequirementsWithBundleId:subjectCN:]
 * Entry: 0x100777638; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 401; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100777664 */
/* WARNING: Switch with 1 destination removed at 0x00010077767c */
/* WARNING: Switch with 1 destination removed at 0x000100777688 */
/* WARNING: Switch with 1 destination removed at 0x00010077771c */
/* WARNING: Switch with 1 destination removed at 0x000100777754 */
/* WARNING: Switch with 1 destination removed at 0x000100777968 */
/* WARNING: Switch with 1 destination removed at 0x000100777984 */
/* WARNING: Switch with 1 destination removed at 0x000100777994 */
/* WARNING: Switch with 1 destination removed at 0x0001007779cc */
/* WARNING: Switch with 1 destination removed at 0x000100777be8 */
/* WARNING: Switch with 1 destination removed at 0x000100777c04 */
/* WARNING: Switch with 1 destination removed at 0x000100777c44 */
/* WARNING: Switch with 1 destination removed at 0x000100777c58 */
/* WARNING: Switch with 1 destination removed at 0x000100777ca4 */
/* WARNING: Switch with 1 destination removed at 0x000100777da4 */
/* WARNING: Switch with 1 destination removed at 0x000100777e74 */

void Recovered_YYYArchO_m03294
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e80 == 0) {
  case true:
    bRam0000000100e34b21 = bRam0000000100e34b14 ^ 0x25;
    bRam0000000100e34b22 = bRam0000000100e34b15 ^ 0x40;
    bRam0000000100e34b23 = bRam0000000100e34b16 ^ 0x7c;
    bRam0000000100e34b24 = bRam0000000100e34b17 ^ 0xf2;
    cRam0000000100e34b25 = bRam0000000100e34b18 + (bRam0000000100e34b18 & 9) * -2 + '\t';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e34b26 = bRam0000000100e34b19 ^ 0x93;
    bRam0000000100e34b27 = bRam0000000100e34b1a ^ 0x3f;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e34b28 = bRam0000000100e34b1b ^ 200;
    bRam0000000100e34b29 = bRam0000000100e34b1c ^ 0x56;
    cRam0000000100e34b2a = bRam0000000100e34b1d + (bRam0000000100e34b1d & 0x78) * -2 + -8;
    bRam0000000100e34b2b = bRam0000000100e34b1e ^ 0xee;
    bRam0000000100e34b2c = bRam0000000100e34b1f ^ 0x91;
    bRam0000000100e34b2d = bRam0000000100e34b20 ^ 0xf1;
    bRam0000000100e34b39 = bRam0000000100e34b2e ^ 0x6e;
    bRam0000000100e34b3a = bRam0000000100e34b2f ^ 0xcd;
    bRam0000000100e34b3b = bRam0000000100e34b30 ^ 100;
    cRam0000000100e34b3c = bRam0000000100e34b31 + (bRam0000000100e34b31 & 0xc3) * -2 + -0x3d;
    bRam0000000100e34b3d = bRam0000000100e34b32 ^ 0x34;
    bRam0000000100e34b3e = bRam0000000100e34b33 ^ 0xd8;
    bRam0000000100e34b3f = bRam0000000100e34b34 ^ 0xae;
    bRam0000000100e34b40 = bRam0000000100e34b35 ^ 0x68;
    cRam0000000100e34b41 = bRam0000000100e34b36 + (bRam0000000100e34b36 & 0xcf) * -2 + -0x31;
    cRam0000000100e34b42 = bRam0000000100e34b37 + (bRam0000000100e34b37 & 0x16) * -2 + -0x6a;
    bRam0000000100e34b43 = bRam0000000100e34b38 ^ 0x2c;
    bRam0000000100e34b4e = bRam0000000100e34b44 ^ 0x3c;
    cRam0000000100e34b4f = bRam0000000100e34b45 + (bRam0000000100e34b45 & 0x14) * -2 + -0x6c;
    bRam0000000100e34b50 = bRam0000000100e34b46 ^ 0x2d;
    bRam0000000100e34b51 = bRam0000000100e34b47 ^ 0xd2;
    cRam0000000100e34b52 = bRam0000000100e34b48 + (bRam0000000100e34b48 & 0x99) * -2 + -0x67;
    bRam0000000100e34b53 = bRam0000000100e34b49 ^ 0x34;
    cRam0000000100e34b54 = bRam0000000100e34b4a + (bRam0000000100e34b4a & 0xdd) * -2 + -0x23;
    bRam0000000100e34b55 = bRam0000000100e34b4b ^ 0x20;
    bRam0000000100e34b56 = bRam0000000100e34b4c ^ 0xa5;
    bRam0000000100e34b57 = bRam0000000100e34b4d ^ 0x54;
  }
  iRam0000000100e95e80 = 1;
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_3);
  lVar4 = _objc_retain(param_4);
  uVar3 = uRam0000000100c71460;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0 || lVar4 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010093f1c0(uRam0000000100c71778);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100777e78(&UNK_100b27048,uVar2,1);
    func_0x000100777e78(&UNK_100b27048,uVar2,6);
    func_0x000100777e78(&UNK_100b27048,uVar2,2);
    func_0x000100777f54(&UNK_100b27088,uVar2,lVar1);
    func_0x000100777e78(&UNK_100b27048,uVar2,6);
    func_0x000100777e78(&UNK_100b27048,uVar2,0xf);
    func_0x000100777e78(&UNK_100b27048,uVar2,6);
    func_0x000100777e78(&UNK_100b27048,uVar2,0xb);
    func_0x000100777e78(&UNK_100b27048,uVar2,0);
    func_0x000100777f54(&UNK_100b27088,uVar2,0x100e34b60);
    func_0x000100777e78(&UNK_100b27048,uVar2,1);
    func_0x000100777f54(&UNK_100b27088,uVar2,lVar4);
    func_0x000100777e78(&UNK_100b27048,uVar2,0xe);
    func_0x000100777e78(&UNK_100b27048,uVar2,1);
    func_0x0001007781cc(&UNK_100b270c8,uVar2,0x100e34b4e,10);
    func_0x000100777e78(&UNK_100b27048,uVar2,0);
    func_0x00010093a380(uRam0000000100c730c8,extraout_x1,0xfade0c00,uVar2);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009748c0(uRam0000000100c730d8,auVar7._8_8_,0xfade0c01);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar3 = uRam0000000100c730d0;
    func_0x00010093a300(auVar7._0_8_);
    auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010093a340(uVar3,auVar8._8_8_,3,auVar8._0_8_);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar8._0_8_);
    func_0x0001009366c0(uVar5,extraout_x1_00,uVar6);
    func_0x0001009748a0(uVar5);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(auVar7._0_8_);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    auVar7 = _strlen(0x100e34b21);
    func_0x00010093f3e0(uVar3,auVar7._8_8_,0x100e34b21,auVar7._0_8_);
    uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateSlotBuildCMSSignatureWithSignAsset:sha1CodeDirectorySlot:sha256CodeDirectorySlot:]
 * Entry: 0x1007783cc; original ABI: @40@0:8@16@24@32
 * Original instructions in modeled body: 268; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100778418 */
/* WARNING: Switch with 1 destination removed at 0x00010077842c */
/* WARNING: Switch with 1 destination removed at 0x000100778438 */
/* WARNING: Switch with 1 destination removed at 0x0001007784e4 */
/* WARNING: Switch with 1 destination removed at 0x000100778508 */
/* WARNING: Switch with 1 destination removed at 0x0001007785ac */
/* WARNING: Switch with 1 destination removed at 0x0001007785d0 */
/* WARNING: Switch with 1 destination removed at 0x000100778848 */
/* WARNING: Switch with 1 destination removed at 0x000100778854 */
/* WARNING: Switch with 1 destination removed at 0x0001007788c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007788d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007788e4 */
/* WARNING: Switch with 1 destination removed at 0x000100778ee4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYArchO_m03295
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e84 == 0) {
  case true:
    cRam0000000100e34bb0 = bRam0000000100e34b80 + (bRam0000000100e34b80 & 0x4e) * -2 + 'N';
    bRam0000000100e34bb1 = bRam0000000100e34b81 ^ 0xe1;
    cRam0000000100e34bb2 = bRam0000000100e34b82 + (bRam0000000100e34b82 & 0x4d) * -2 + 'M';
    uRam0000000100e34bb3 =
         CONCAT17((byte)((ulong)uRam0000000100e34b83 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c638 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34b83 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c638 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34b83 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c638 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34b83 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c638 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34b83 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c638 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34b83 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c638 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34b83 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c638 >> 8),
                                                  (byte)uRam0000000100e34b83 ^ (byte)_UNK_10099c638)
                                                  ))))));
    bRam0000000100e34bbb = bRam0000000100e34b8b ^ 0xbe;
    cRam0000000100e34bbc = bRam0000000100e34b8c + (bRam0000000100e34b8c & 0x56) * -2 + -0x2a;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e34bbd = bRam0000000100e34b8d ^ 0xbd;
    bRam0000000100e34bbe = bRam0000000100e34b8e ^ 0x20;
    cRam0000000100e34bbf = bRam0000000100e34b8f + (bRam0000000100e34b8f & 0x37) * -2 + '7';
    bRam0000000100e34bc0 = bRam0000000100e34b90 ^ 0x4c;
    cRam0000000100e34bc1 = bRam0000000100e34b91 + (bRam0000000100e34b91 & 0x30) * -2 + '0';
    bRam0000000100e34bc2 = bRam0000000100e34b92 ^ 0x31;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e34bc3 = bRam0000000100e34b93 + (bRam0000000100e34b93 & 0x27) * -2 + '\'';
    uRam0000000100e34bc4 = uRam0000000100e34b94;
    bRam0000000100e34bc5 = ~((bRam0000000100e34b95 | 0xf7) & (~bRam0000000100e34b95 | 8));
    bRam0000000100e34bc6 = bRam0000000100e34b96 ^ 0xce;
    bRam0000000100e34bc7 = bRam0000000100e34b97 ^ 0x8a;
    cRam0000000100e34bc8 = bRam0000000100e34b98 + (bRam0000000100e34b98 & 0x31) * -2 + '1';
    bRam0000000100e34bc9 = bRam0000000100e34b99 ^ 0xb4;
    bRam0000000100e34bca = bRam0000000100e34b9a ^ 0x41;
    bRam0000000100e34bcb = bRam0000000100e34b9b ^ 0x68;
    bRam0000000100e34bcc = bRam0000000100e34b9c ^ 0x5e;
    bRam0000000100e34bcd = bRam0000000100e34b9d ^ 0x88;
    cRam0000000100e34bce = bRam0000000100e34b9e + (bRam0000000100e34b9e & 0x20) * -2 + -0x60;
    bRam0000000100e34bcf = bRam0000000100e34b9f ^ 0x4d;
    bRam0000000100e34bd0 = bRam0000000100e34ba0 ^ 0xa1;
    cRam0000000100e34bd1 = bRam0000000100e34ba1 + (bRam0000000100e34ba1 & 199) * -2 + 'G';
    bRam0000000100e34bd2 = bRam0000000100e34ba2 ^ 0x45;
    cRam0000000100e34bd3 = bRam0000000100e34ba3 + (bRam0000000100e34ba3 & 0x4b) * -2 + 'K';
    bRam0000000100e34bd4 = bRam0000000100e34ba4 ^ 0x1b;
    bRam0000000100e34bd5 = ~bRam0000000100e34ba5;
    bRam0000000100e34bd6 = bRam0000000100e34ba6 ^ 0x99;
    cRam0000000100e34bd7 = bRam0000000100e34ba7 + (bRam0000000100e34ba7 & 5) * -2 + '\x05';
    bRam0000000100e34bd8 = bRam0000000100e34ba8 ^ 0x9e;
    bRam0000000100e34bd9 = bRam0000000100e34ba9 ^ 0x3c;
    bRam0000000100e34bda = bRam0000000100e34baa ^ 0xc4;
    bRam0000000100e34bdb = bRam0000000100e34bab ^ 0x47;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95e84 = 1;
  uVar1 = _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = func_0x0001009788a0(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001007788f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100e367b8))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO generateCodeSignatureWithSignAsset:bundleId:infoPlistData:codeResourcesData:]
 * Entry: 0x10077a4ec; original ABI: @48@0:8@16@24@32@40
 * Original instructions in modeled body: 821; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010077a530 */
/* WARNING: Switch with 1 destination removed at 0x00010077a578 */
/* WARNING: Switch with 1 destination removed at 0x00010077aa24 */
/* WARNING: Switch with 1 destination removed at 0x00010077aa88 */
/* WARNING: Switch with 1 destination removed at 0x00010077b58c */
/* WARNING: Switch with 1 destination removed at 0x00010077b860 */
/* WARNING: Switch with 1 destination removed at 0x00010077b878 */
/* WARNING: Switch with 1 destination removed at 0x00010077b890 */
/* WARNING: Switch with 1 destination removed at 0x00010077b8bc */
/* WARNING: Switch with 1 destination removed at 0x00010077c6ec */
/* WARNING: Switch with 1 destination removed at 0x00010077c708 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYArchO_m03296
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e8c == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e34f50 = bRam0000000100e34f20 + (bRam0000000100e34f20 & 0x13) * -2 + '\x13';
    bRam0000000100e34f51 = bRam0000000100e34f21 ^ 0xd;
    bRam0000000100e34f52 = bRam0000000100e34f22 ^ 0x80;
    cRam0000000100e34f53 = bRam0000000100e34f23 + (bRam0000000100e34f23 & 0x70) * -2 + -0x10;
    cRam0000000100e34f54 = bRam0000000100e34f24 + (bRam0000000100e34f24 & 0x32) * -2 + -0x4e;
    bRam0000000100e34f55 = bRam0000000100e34f25 ^ 0x32;
    bRam0000000100e34f56 = bRam0000000100e34f26 ^ 0x10;
    bRam0000000100e34f57 = bRam0000000100e34f27 ^ 0xad;
    cRam0000000100e34f58 = bRam0000000100e34f28 + (bRam0000000100e34f28 & 0x49) * -2 + 'I';
    bRam0000000100e34f59 = bRam0000000100e34f29 ^ 0xf5;
    bRam0000000100e34f5a = bRam0000000100e34f2a ^ 0x44;
    cRam0000000100e34f5b = bRam0000000100e34f2b + (bRam0000000100e34f2b & 0x42) * -2 + 'B';
    bRam0000000100e34f5c = bRam0000000100e34f2c ^ 0x5e;
    bRam0000000100e34f5d = bRam0000000100e34f2d ^ 0xb8;
    bRam0000000100e34f5e = bRam0000000100e34f2e ^ 0x51;
    bRam0000000100e34f5f = bRam0000000100e34f2f ^ 0xb3;
    cRam0000000100e34f60 = bRam0000000100e34f30 + (bRam0000000100e34f30 & 0x42) * -2 + 'B';
    bRam0000000100e34f61 = bRam0000000100e34f31 ^ 0xf2;
    cRam0000000100e34f62 = bRam0000000100e34f32 + (bRam0000000100e34f32 & 0xdd) * -2 + -0x23;
    uRam0000000100e34f63 =
         CONCAT17((byte)((ulong)uRam0000000100e34f33 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c698 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34f33 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c698 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34f33 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c698 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34f33 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c698 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34f33 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c698 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34f33 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c698 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34f33 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c698 >> 8),
                                                  (byte)uRam0000000100e34f33 ^ (byte)_UNK_10099c698)
                                                  ))))));
    bRam0000000100e34f6b = bRam0000000100e34f3b ^ 0x1c;
    bRam0000000100e34f6c = bRam0000000100e34f3c ^ 0xee;
    bRam0000000100e34f6d = bRam0000000100e34f3d ^ 7;
    bRam0000000100e34f6e = bRam0000000100e34f3e ^ 0x4b;
    bRam0000000100e34f6f = bRam0000000100e34f3f ^ 0x2b;
    bRam0000000100e34f70 = bRam0000000100e34f40 ^ 0xe6;
    bRam0000000100e34f71 = bRam0000000100e34f41 ^ 0x12;
    bRam0000000100e34f72 = ~((bRam0000000100e34f42 | 0x65) & (bRam0000000100e34f42 ^ 0xff | 0x9a));
    bRam0000000100e34f73 = bRam0000000100e34f43 ^ 0x43;
    bRam0000000100e34f74 = bRam0000000100e34f44 ^ 6;
    bRam0000000100e34f75 = bRam0000000100e34f45 ^ 0x93;
    bRam0000000100e34f76 = bRam0000000100e34f46 ^ 0x9f;
    bRam0000000100e34f77 = bRam0000000100e34f47 ^ 0x47;
    bRam0000000100e34f78 = bRam0000000100e34f48 ^ 0x90;
    cRam0000000100e34f79 = bRam0000000100e34f49 + (bRam0000000100e34f49 & 0x1b) * -2 + -0x65;
    cRam0000000100e34d88 = bRam0000000100e34d78 + (bRam0000000100e34d78 & 0x6d) * -2 + 'm';
    uRam0000000100e34d89 =
         CONCAT17((byte)((ulong)uRam0000000100e34d79 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c6a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34d79 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c6a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34d79 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c6a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34d79 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c6a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34d79 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c6a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34d79 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c6a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34d79 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c6a0 >> 8),
                                                  (byte)uRam0000000100e34d79 ^ (byte)_UNK_10099c6a0)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e34d91 = bRam0000000100e34d81 + (bRam0000000100e34d81 & 0xef) * -2 + -0x11;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e34d92 = bRam0000000100e34d82 + (bRam0000000100e34d82 & 0x5e) * -2 + '^';
    bRam0000000100e34d93 = bRam0000000100e34d83 ^ 0x5c;
    bRam0000000100e34d94 = bRam0000000100e34d84 ^ 0x47;
    bRam0000000100e34d95 = bRam0000000100e34d85 ^ 0xd;
    bRam0000000100e34d96 = bRam0000000100e34d86 ^ 0x2c;
    bRam0000000100e34e00 = ~((bRam0000000100e34de0 | 0x71) & (bRam0000000100e34de0 ^ 0xff | 0x8e));
    bRam0000000100e34e01 = bRam0000000100e34de1 ^ 0x9e;
    bRam0000000100e34e02 = bRam0000000100e34de2 ^ 0x78;
    bRam0000000100e34e03 = bRam0000000100e34de3 ^ 0x30;
    bRam0000000100e34e04 = bRam0000000100e34de4 ^ 0x22;
    bRam0000000100e34e05 = bRam0000000100e34de5 ^ 0x55;
    cRam0000000100e34e06 = bRam0000000100e34de6 + (bRam0000000100e34de6 & 0xcf) * -2 + -0x31;
    bRam0000000100e34e07 = bRam0000000100e34de7 ^ 0xc9;
    bRam0000000100e34e08 = bRam0000000100e34de8 ^ 0xb5;
    bRam0000000100e34e09 = bRam0000000100e34de9 ^ 0xe3;
    bRam0000000100e34e0a = ~((bRam0000000100e34dea | 0x80) & (~bRam0000000100e34dea | 0x7f));
    bRam0000000100e34e0b = bRam0000000100e34deb ^ 0xf6;
    bRam0000000100e34e0c = bRam0000000100e34dec ^ 0x93;
    bRam0000000100e34e0d = bRam0000000100e34ded ^ 0xa5;
    bRam0000000100e34e0e = ~((bRam0000000100e34dee | 0x18) & (~bRam0000000100e34dee | 0xe7));
    cRam0000000100e34e0f = bRam0000000100e34def + (bRam0000000100e34def & 0x56) * -2 + 'V';
    bRam0000000100e34e10 = bRam0000000100e34df0 ^ 199;
    bRam0000000100e34e11 = bRam0000000100e34df1 ^ 0xcd;
    cRam0000000100e34e12 = bRam0000000100e34df2 + (bRam0000000100e34df2 & 0x2f) * -2 + -0x51;
    bRam0000000100e34e13 = bRam0000000100e34df3 ^ 0x37;
    cRam0000000100e34e14 = bRam0000000100e34df4 + (bRam0000000100e34df4 & 0x3c) * -2 + -0x44;
    uRam0000000100e34e15 =
         CONCAT17((byte)((ulong)uRam0000000100e34df5 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c6b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34df5 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c6b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34df5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c6b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34df5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c6b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34df5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c6b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34df5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c6b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34df5 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c6b8 >> 8),
                                                  (byte)uRam0000000100e34df5 ^ (byte)_UNK_10099c6b8)
                                                  ))))));
    bRam0000000100e34e1d = bRam0000000100e34dfd ^ 0xd8;
    bRam0000000100e34e40 = bRam0000000100e34e20 ^ 0x1e;
    bRam0000000100e34e41 = bRam0000000100e34e21 ^ 0x68;
    bRam0000000100e34e42 = bRam0000000100e34e22 ^ 0xe0;
    bRam0000000100e34e43 = bRam0000000100e34e23 ^ 0x2c;
    cRam0000000100e34e44 = bRam0000000100e34e24 + (bRam0000000100e34e24 & 0x1b) * -2 + -0x65;
    bRam0000000100e34e45 = bRam0000000100e34e25 ^ 0xdd;
    bRam0000000100e34e46 = bRam0000000100e34e26 ^ 0x4e;
    bRam0000000100e34e47 = bRam0000000100e34e27 ^ 0x65;
    bRam0000000100e34e48 = bRam0000000100e34e28 ^ 0x4a;
    bRam0000000100e34e49 = bRam0000000100e34e29 ^ 0xf7;
    bRam0000000100e34e4a = bRam0000000100e34e2a ^ 0x29;
    bRam0000000100e34e4b = bRam0000000100e34e2b ^ 0xe2;
    cRam0000000100e34e4c = bRam0000000100e34e2c + (bRam0000000100e34e2c & 0x7c) * -2 + -4;
    bRam0000000100e34e4d = bRam0000000100e34e2d ^ 0x12;
    bRam0000000100e34e4e = bRam0000000100e34e2e ^ 0x3b;
    bRam0000000100e34e4f = bRam0000000100e34e2f ^ 0x34;
    bRam0000000100e34e50 = bRam0000000100e34e30 ^ 0xce;
    bRam0000000100e34e51 = bRam0000000100e34e31 ^ 0xb3;
    cRam0000000100e34e52 = bRam0000000100e34e32 + (bRam0000000100e34e32 & 0x24) * -2 + '$';
    bRam0000000100e34e53 = bRam0000000100e34e33 ^ 4;
    uRam0000000100e34e90 =
         CONCAT17((byte)((ulong)uRam0000000100e34e60 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c6c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34e60 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c6c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34e60 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c6c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34e60 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c6c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34e60 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c6c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34e60 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c6c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34e60 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c6c0 >> 8),
                                                  (byte)uRam0000000100e34e60 ^ (byte)_UNK_10099c6c0)
                                                  ))))));
    bRam0000000100e34e98 = bRam0000000100e34e68 ^ 0xd2;
    bRam0000000100e34e99 = bRam0000000100e34e69 ^ 0x90;
    bRam0000000100e34e9a = ~bRam0000000100e34e6a;
    bRam0000000100e34e9b = bRam0000000100e34e6b ^ 0x14;
    bRam0000000100e34e9c = bRam0000000100e34e6c ^ 0x77;
    cRam0000000100e34e9d = bRam0000000100e34e6d + (bRam0000000100e34e6d & 0x7e) * -2 + '~';
    bRam0000000100e34e9e = bRam0000000100e34e6e ^ 0xb0;
    bRam0000000100e34e9f = bRam0000000100e34e6f ^ 0xcc;
    bRam0000000100e34ea0 = bRam0000000100e34e70 ^ 0xb4;
    bRam0000000100e34ea1 = bRam0000000100e34e71 ^ 0xd4;
    bRam0000000100e34ea2 = bRam0000000100e34e72 ^ 0xd7;
    bRam0000000100e34ea3 = bRam0000000100e34e73 ^ 0xbf;
    cRam0000000100e34ea4 = bRam0000000100e34e74 + (bRam0000000100e34e74 & 0xfd) * -2 + -3;
    bRam0000000100e34ea5 = bRam0000000100e34e75 ^ 0xf0;
    cRam0000000100e34ea6 = bRam0000000100e34e76 + (bRam0000000100e34e76 & 0x30) * -2 + -0x50;
    bRam0000000100e34ea7 = bRam0000000100e34e77 ^ 0x6c;
    bRam0000000100e34ea8 = bRam0000000100e34e78 ^ 0x66;
    bRam0000000100e34ea9 = bRam0000000100e34e79 ^ 0x8d;
    bRam0000000100e34eaa = bRam0000000100e34e7a ^ 0x65;
    bRam0000000100e34eab = bRam0000000100e34e7b ^ 0xf0;
    bRam0000000100e34eac = ~((bRam0000000100e34e7c | 0x8e) & (bRam0000000100e34e7c ^ 0xff | 0x71));
    bRam0000000100e34ead = bRam0000000100e34e7d ^ 0x2e;
    bRam0000000100e34eae = bRam0000000100e34e7e ^ 0x5a;
    bRam0000000100e34eaf = bRam0000000100e34e7f ^ 0x1c;
    bRam0000000100e34eb0 = bRam0000000100e34e80 ^ 0xec;
    bRam0000000100e34eb1 = ~((bRam0000000100e34e81 | 0xf3) & (~bRam0000000100e34e81 | 0xc));
    bRam0000000100e34eb2 = bRam0000000100e34e82 ^ 0x5b;
    bRam0000000100e34eb3 = bRam0000000100e34e83 ^ 0x62;
    bRam0000000100e34eb4 = ~((bRam0000000100e34e84 | 0x92) & (bRam0000000100e34e84 ^ 0xff | 0x6d));
    bRam0000000100e34eb5 = bRam0000000100e34e85 ^ 0x6c;
    bRam0000000100e34eb6 = bRam0000000100e34e86 ^ 0x8e;
    bRam0000000100e34eb7 = bRam0000000100e34e87 ^ 0x90;
    bRam0000000100e34eb8 = bRam0000000100e34e88 ^ 0xb;
    bRam0000000100e34eb9 = bRam0000000100e34e89 ^ 0x71;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e34ef0 = bRam0000000100e34ec0 ^ 0xf;
    bRam0000000100e34ef1 = bRam0000000100e34ec1 ^ 0xaa;
    bRam0000000100e34ef2 = bRam0000000100e34ec2 ^ 0xdf;
    cRam0000000100e34ef3 = bRam0000000100e34ec3 + (bRam0000000100e34ec3 & 1) * -2 + '\x01';
    cRam0000000100e34ef4 = bRam0000000100e34ec4 + (bRam0000000100e34ec4 & 0xaa) * -2 + -0x56;
    bRam0000000100e34ef5 = ~((bRam0000000100e34ec5 | 0xea) & (bRam0000000100e34ec5 ^ 0xff | 0x15));
    bRam0000000100e34ef6 = bRam0000000100e34ec6 ^ 0xa7;
    bRam0000000100e34ef7 = bRam0000000100e34ec7 ^ 0xac;
    cRam0000000100e34ef8 = bRam0000000100e34ec8 + (bRam0000000100e34ec8 & 0x29) * -2 + ')';
    bRam0000000100e34ef9 = bRam0000000100e34ec9 ^ 0x3b;
    bRam0000000100e34efa = bRam0000000100e34eca ^ 6;
    bRam0000000100e34efb = bRam0000000100e34ecb ^ 0x39;
    bRam0000000100e34efc = bRam0000000100e34ecc ^ 0x1a;
    bRam0000000100e34efd = bRam0000000100e34ecd ^ 0xdd;
    bRam0000000100e34efe = bRam0000000100e34ece ^ 0xc9;
    bRam0000000100e34eff = bRam0000000100e34ecf ^ 0x8e;
    cRam0000000100e34f00 = bRam0000000100e34ed0 + (bRam0000000100e34ed0 & 0x3d) * -2 + -0x43;
    uRam0000000100e34f01 =
         CONCAT17((byte)((ulong)uRam0000000100e34ed1 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c6c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34ed1 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c6c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34ed1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c6c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34ed1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c6c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34ed1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c6c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34ed1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c6c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34ed1 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c6c8 >> 8),
                                                  (byte)uRam0000000100e34ed1 ^ (byte)_UNK_10099c6c8)
                                                  ))))));
    bRam0000000100e34f09 = bRam0000000100e34ed9 ^ 0xaa;
    bRam0000000100e34f0a = bRam0000000100e34eda ^ 0x8f;
    bRam0000000100e34f0b = ~((bRam0000000100e34edb | 0x96) & (bRam0000000100e34edb ^ 0xff | 0x69));
    bRam0000000100e34f0c = bRam0000000100e34edc ^ 0x93;
    bRam0000000100e34f0d = bRam0000000100e34edd ^ 0xf8;
    bRam0000000100e34f0e = bRam0000000100e34ede ^ 0xe;
    bRam0000000100e34f0f = bRam0000000100e34edf ^ 0x34;
    bRam0000000100e34f10 = bRam0000000100e34ee0 ^ 0xf4;
    cRam0000000100e34f11 = bRam0000000100e34ee1 + (bRam0000000100e34ee1 & 0x49) * -2 + 'I';
    bRam0000000100e34f12 = bRam0000000100e34ee2 ^ 0x1a;
    bRam0000000100e34f13 = bRam0000000100e34ee3 ^ 0x5c;
    bRam0000000100e34f14 = bRam0000000100e34ee4 ^ 0x21;
    bRam0000000100e34f15 = bRam0000000100e34ee5 ^ 0x6b;
    bRam0000000100e34f16 = bRam0000000100e34ee6 ^ 1;
    bRam0000000100e34dc0 = bRam0000000100e34da0 ^ 1;
    bRam0000000100e34dc1 = bRam0000000100e34da1 ^ 0x32;
    bRam0000000100e34dc2 = bRam0000000100e34da2 ^ 0xee;
    bRam0000000100e34dc3 = bRam0000000100e34da3 ^ 0x18;
    bRam0000000100e34dc4 = bRam0000000100e34da4 ^ 0xfc;
    bRam0000000100e34dc5 = bRam0000000100e34da5 ^ 0x37;
    cRam0000000100e34dc6 = bRam0000000100e34da6 + (bRam0000000100e34da6 & 0x21) * -2 + '!';
    uRam0000000100e34dc7 =
         CONCAT17((byte)((ulong)uRam0000000100e34da7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c6d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e34da7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c6d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e34da7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c6d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e34da7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c6d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e34da7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c6d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e34da7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c6d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e34da7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c6d0 >> 8),
                                                  (byte)uRam0000000100e34da7 ^ (byte)_UNK_10099c6d0)
                                                  ))))));
    bRam0000000100e34dcf = bRam0000000100e34daf ^ 0x29;
    bRam0000000100e34dd0 = bRam0000000100e34db0 ^ 0x95;
    bRam0000000100e34dd1 = bRam0000000100e34db1 ^ 0x92;
  }
  iRam0000000100e95e8c = 1;
  uVar2 = _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x0001009429a0(uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100950b20(auVar3._0_8_,auVar3._8_8_,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar3._0_8_);
  uVar1 = func_0x00010094b5a0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100e36d38))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO reallocCodeSignSpace]
 * Entry: 0x10077cca4; original ABI: I16@0:8
 * Original instructions in modeled body: 320; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010077ccd4 */
/* WARNING: Switch with 1 destination removed at 0x00010077cce0 */
/* WARNING: Switch with 1 destination removed at 0x00010077ccec */
/* WARNING: Switch with 1 destination removed at 0x00010077cd18 */
/* WARNING: Switch with 1 destination removed at 0x00010077cd48 */
/* WARNING: Switch with 1 destination removed at 0x00010077cd74 */
/* WARNING: Switch with 1 destination removed at 0x00010077cd8c */
/* WARNING: Switch with 1 destination removed at 0x00010077cd98 */
/* WARNING: Switch with 1 destination removed at 0x00010077cdb4 */
/* WARNING: Switch with 1 destination removed at 0x00010077cdc4 */
/* WARNING: Switch with 1 destination removed at 0x00010077cdd8 */
/* WARNING: Switch with 1 destination removed at 0x00010077cdf4 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce04 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce18 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce3c */
/* WARNING: Switch with 1 destination removed at 0x00010077ce68 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce78 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce84 */
/* WARNING: Switch with 1 destination removed at 0x00010077ce9c */
/* WARNING: Switch with 1 destination removed at 0x00010077ceac */
/* WARNING: Switch with 1 destination removed at 0x00010077ced4 */
/* WARNING: Switch with 1 destination removed at 0x00010077cf24 */
/* WARNING: Switch with 1 destination removed at 0x00010077cf30 */
/* WARNING: Switch with 1 destination removed at 0x00010077cf54 */
/* WARNING: Switch with 1 destination removed at 0x00010077cf7c */
/* WARNING: Switch with 1 destination removed at 0x00010077cfb4 */
/* WARNING: Switch with 1 destination removed at 0x00010077cfc8 */
/* WARNING: Switch with 1 destination removed at 0x00010077cfd4 */
/* WARNING: Switch with 1 destination removed at 0x00010077d008 */
/* WARNING: Switch with 1 destination removed at 0x00010077d014 */
/* WARNING: Switch with 1 destination removed at 0x00010077d030 */
/* WARNING: Switch with 1 destination removed at 0x00010077d03c */
/* WARNING: Switch with 1 destination removed at 0x00010077d048 */
/* WARNING: Switch with 1 destination removed at 0x00010077d058 */
/* WARNING: Switch with 1 destination removed at 0x00010077d268 */
/* WARNING: Switch with 1 destination removed at 0x00010077d274 */
/* WARNING: Switch with 1 destination removed at 0x00010077d290 */
/* WARNING: Switch with 1 destination removed at 0x00010077d29c */
/* WARNING: Switch with 1 destination removed at 0x00010077d2c8 */
/* WARNING: Switch with 1 destination removed at 0x00010077d2d8 */
/* WARNING: Switch with 1 destination removed at 0x00010077d2f4 */
/* WARNING: Switch with 1 destination removed at 0x00010077d304 */
/* WARNING: Switch with 1 destination removed at 0x00010077da00 */
/* WARNING: Switch with 1 destination removed at 0x00010077da0c */
/* WARNING: Switch with 1 destination removed at 0x00010077dac8 */
/* WARNING: Switch with 1 destination removed at 0x00010077dae4 */
/* WARNING: Switch with 1 destination removed at 0x00010077db00 */
/* WARNING: Switch with 1 destination removed at 0x00010077db38 */
/* WARNING: Switch with 1 destination removed at 0x00010077db54 */
/* WARNING: Switch with 1 destination removed at 0x00010077db78 */
/* WARNING: Switch with 1 destination removed at 0x00010077db94 */

undefined8 Recovered_YYYArchO_m03297(undefined8 param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010094d940(param_1);
  lVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  lVar9 = 0;
  bVar2 = true;
                    /* WARNING: Switch is manually overridden */
  switch(lVar7 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010094ed20(param_1);
    lVar9 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    bVar2 = lVar9 == 0;
    lVar9 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar9 * 8 + 0x100e37748)) {
  case 0x10077cdac:
                    /* WARNING: Switch is manually overridden */
    _objc_release();
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(bVar2) {
  case false:
    iVar5 = func_0x00010093cd60(param_1);
    uVar8 = func_0x00010093cd60(param_1);
    iVar6 = func_0x00010077df20(((uint)(uVar8 >> 0xc) & 0xfffff) * 0x34 + 0x34,0x1000);
    uVar1 = ((iVar6 + iVar5) * 2 & 0x20000U) + (iVar6 + iVar5 ^ 0x10000U);
    uVar3 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 <= uVar3) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x00010094d940(param_1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      lVar7 = func_0x00010095e680(uVar10);
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar7 != 0) {
      case false:
                    /* WARNING: Switch is manually overridden */
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x00010095e6a0();
        _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar8 = (ulong)uVar1 - *(long *)(lVar7 + 0x28);
        *(ulong *)(lVar7 + 0x30) = uVar8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(ulong *)(lVar7 + 0x20) < uVar8) {
        case true:
          uVar10 = func_0x00010077df4c(uVar8,0x1000);
                    /* WARNING: Switch is manually overridden */
          *(undefined8 *)(lVar7 + 0x20) = uVar10;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case true:
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x00010095e680();
        _objc_release(uVar10);
        uVar1 = uVar1 - *(int *)(lVar7 + 0x20);
                    /* WARNING: Switch is manually overridden */
        *(uint *)(lVar7 + 0x24) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(uint *)(lVar7 + 0x1c) < uVar1) {
        case true:
          uVar4 = func_0x00010077df20(uVar1,0x1000);
                    /* WARNING: Switch is manually overridden */
          *(undefined4 *)(lVar7 + 0x1c) = uVar4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        uVar8 = func_0x000100971b80();
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077d068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)((uVar8 & 0xffffffff) * 8 + 0x100e37938))();
        return uVar10;
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      func_0x00010094d940(param_1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar8 = func_0x000100971b80(uVar10);
      _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077d314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)((uVar8 & 0xffffffff) * 8 + 0x100e37ac8))();
      return uVar10;
                    /* WARNING: Switch is manually overridden */
    case true:
                    /* WARNING: Switch is manually overridden */
      uVar10 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return uVar10;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO AddCodeSignSpaceLength:]
 * Entry: 0x10077df70; original ABI: I20@0:8I16
 * Original instructions in modeled body: 311; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010077dfa4 */
/* WARNING: Switch with 1 destination removed at 0x00010077dfb0 */
/* WARNING: Switch with 1 destination removed at 0x00010077dfbc */
/* WARNING: Switch with 1 destination removed at 0x00010077e00c */
/* WARNING: Switch with 1 destination removed at 0x00010077e018 */
/* WARNING: Switch with 1 destination removed at 0x00010077e034 */
/* WARNING: Switch with 1 destination removed at 0x00010077e040 */
/* WARNING: Switch with 1 destination removed at 0x00010077e05c */
/* WARNING: Switch with 1 destination removed at 0x00010077e068 */
/* WARNING: Switch with 1 destination removed at 0x00010077e074 */
/* WARNING: Switch with 1 destination removed at 0x00010077e088 */
/* WARNING: Switch with 1 destination removed at 0x00010077e0a4 */
/* WARNING: Switch with 1 destination removed at 0x00010077e0d4 */
/* WARNING: Switch with 1 destination removed at 0x00010077e0e8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e0f8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e138 */
/* WARNING: Switch with 1 destination removed at 0x00010077e168 */
/* WARNING: Switch with 1 destination removed at 0x00010077e174 */
/* WARNING: Switch with 1 destination removed at 0x00010077e180 */
/* WARNING: Switch with 1 destination removed at 0x00010077e18c */
/* WARNING: Switch with 1 destination removed at 0x00010077e198 */
/* WARNING: Switch with 1 destination removed at 0x00010077e1a4 */
/* WARNING: Switch with 1 destination removed at 0x00010077e1cc */
/* WARNING: Switch with 1 destination removed at 0x00010077e1d8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e204 */
/* WARNING: Switch with 1 destination removed at 0x00010077e214 */
/* WARNING: Switch with 1 destination removed at 0x00010077e220 */
/* WARNING: Switch with 1 destination removed at 0x00010077e28c */
/* WARNING: Switch with 1 destination removed at 0x00010077e29c */
/* WARNING: Switch with 1 destination removed at 0x00010077e2a8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e2d8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e2e4 */
/* WARNING: Switch with 1 destination removed at 0x00010077e300 */
/* WARNING: Switch with 1 destination removed at 0x00010077e320 */
/* WARNING: Switch with 1 destination removed at 0x00010077e520 */
/* WARNING: Switch with 1 destination removed at 0x00010077e530 */
/* WARNING: Switch with 1 destination removed at 0x00010077e53c */
/* WARNING: Switch with 1 destination removed at 0x00010077e558 */
/* WARNING: Switch with 1 destination removed at 0x00010077e8f0 */
/* WARNING: Switch with 1 destination removed at 0x00010077e8fc */
/* WARNING: Switch with 1 destination removed at 0x00010077e94c */
/* WARNING: Switch with 1 destination removed at 0x00010077e978 */
/* WARNING: Switch with 1 destination removed at 0x00010077e998 */
/* WARNING: Switch with 1 destination removed at 0x00010077e9c8 */
/* WARNING: Switch with 1 destination removed at 0x00010077e9f4 */
/* WARNING: Switch with 1 destination removed at 0x00010077ea70 */
/* WARNING: Switch with 1 destination removed at 0x00010077ea94 */

undefined8 Recovered_YYYArchO_m03298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x23;
  
  func_0x00010094d940(param_1);
  lVar9 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar10 = 0;
  bVar2 = true;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar9 == 0) {
  case false:
    func_0x00010094ed20(param_1);
    unaff_x23 = _objc_retainAutoreleasedReturnValue();
    bVar2 = unaff_x23 == 0;
    uVar10 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar10) {
  case 1:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(unaff_x23);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar9);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(bVar2) {
  case false:
                    /* WARNING: Switch is manually overridden */
    iVar3 = func_0x00010093cd60(param_1);
    uVar8 = func_0x00010093cd60(param_1);
                    /* WARNING: Switch is manually overridden */
    iVar7 = func_0x00010077df20((((uint)(uVar8 >> 0xc) & 0xfffff) + 1) * 0x34,0x1000);
    iVar4 = func_0x00010077df20(param_3,0x10);
    uVar1 = iVar7 + iVar3 + iVar4;
    uVar5 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 <= uVar5) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x00010094d940(param_1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      lVar9 = func_0x00010095e680(uVar10);
      _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar9 != 0) {
      case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar9 = func_0x00010095e6a0(uVar10);
        _objc_release(uVar10);
        uVar8 = (ulong)uVar1 - *(long *)(lVar9 + 0x28);
        *(ulong *)(lVar9 + 0x30) = uVar8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(ulong *)(lVar9 + 0x20) < uVar8) {
        case true:
          uVar10 = func_0x00010077df4c(uVar8,0x1000);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          *(undefined8 *)(lVar9 + 0x20) = uVar10;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar9 = func_0x00010095e680();
        _objc_release(uVar10);
        uVar1 = uVar1 - *(int *)(lVar9 + 0x20);
        *(uint *)(lVar9 + 0x24) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(uint *)(lVar9 + 0x1c) < uVar1) {
        case true:
          uVar6 = func_0x00010077df20(uVar1,0x1000);
                    /* WARNING: Switch is manually overridden */
          *(undefined4 *)(lVar9 + 0x1c) = uVar6;
                    /* WARNING: Switch is manually overridden */
        }
        func_0x00010094d940(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        uVar8 = func_0x000100971b80();
        _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)((uVar8 & 0xffffffff) * 8 + 0x100e38118))();
        return uVar10;
                    /* WARNING: Switch is manually overridden */
      }
      func_0x00010094d940(param_1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      uVar8 = func_0x000100971b80();
      _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010077e58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar10 = (**(code **)((uVar8 & 0xffffffff) * 8 + 0x100e38268))();
      return uVar10;
    case true:
      uVar10 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return uVar10;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO _writeMachHeader:]
 * Entry: 0x10077f15c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 87; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010077f180 */
/* WARNING: Switch with 1 destination removed at 0x00010077f190 */
/* WARNING: Switch with 1 destination removed at 0x00010077f1fc */
/* WARNING: Switch with 1 destination removed at 0x00010077f208 */
/* WARNING: Switch with 1 destination removed at 0x00010077f224 */
/* WARNING: Switch with 1 destination removed at 0x00010077f248 */
/* WARNING: Switch with 1 destination removed at 0x00010077f254 */
/* WARNING: Switch with 1 destination removed at 0x00010077f26c */
/* WARNING: Switch with 1 destination removed at 0x00010077f288 */
/* WARNING: Switch with 1 destination removed at 0x00010077f3cc */
/* WARNING: Switch with 1 destination removed at 0x00010077f3e8 */
/* WARNING: Switch with 1 destination removed at 0x00010077f4f8 */
/* WARNING: Switch with 1 destination removed at 0x00010077f514 */

void Recovered_YYYArchO_m03299(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010094ee20(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar5 = func_0x000100951d60(uVar4);
  func_0x00010095e5c0(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar2 = func_0x00010094ed20(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case false:
    func_0x00010094ed40(uVar4);
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x000100971b80(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077f3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e38798))();
    return;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010094ed20(uVar4);
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x000100971b80(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010077f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e386c8))();
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO addLoadCommandsSpace:]
 * Entry: 0x10076e94c; original ABI: B20@0:8I16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010076e954 */
/* WARNING: Switch with 1 destination removed at 0x00010076e960 */

undefined8 Recovered_YYYArchO_m03300(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO addDylibLink:weakInject:error:]
 * Entry: 0x10076e96c; original ABI: B36@0:8@16B24^@28
 * Original instructions in modeled body: 414; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010076e9c0 */
/* WARNING: Switch with 1 destination removed at 0x00010076e9cc */
/* WARNING: Switch with 1 destination removed at 0x00010076e9e8 */
/* WARNING: Switch with 1 destination removed at 0x00010076eabc */
/* WARNING: Switch with 1 destination removed at 0x00010076eae8 */
/* WARNING: Switch with 1 destination removed at 0x00010076eb04 */
/* WARNING: Switch with 1 destination removed at 0x00010076eba4 */
/* WARNING: Switch with 1 destination removed at 0x00010076ebd4 */
/* WARNING: Switch with 1 destination removed at 0x00010076ebe4 */
/* WARNING: Switch with 1 destination removed at 0x00010076ec54 */
/* WARNING: Switch with 1 destination removed at 0x00010076ec80 */
/* WARNING: Switch with 1 destination removed at 0x00010076ec94 */
/* WARNING: Switch with 1 destination removed at 0x00010076eca4 */
/* WARNING: Switch with 1 destination removed at 0x00010076ed80 */
/* WARNING: Switch with 1 destination removed at 0x00010076ef3c */
/* WARNING: Switch with 1 destination removed at 0x00010076ef68 */
/* WARNING: Switch with 1 destination removed at 0x00010076ef74 */
/* WARNING: Switch with 1 destination removed at 0x00010076ef80 */
/* WARNING: Switch with 1 destination removed at 0x00010076ef90 */
/* WARNING: Switch with 1 destination removed at 0x00010076efc8 */
/* WARNING: Switch with 1 destination removed at 0x00010076f190 */
/* WARNING: Switch with 1 destination removed at 0x00010076f19c */
/* WARNING: Switch with 1 destination removed at 0x00010076f1b8 */
/* WARNING: Switch with 1 destination removed at 0x00010076f1d4 */
/* WARNING: Switch with 1 destination removed at 0x00010076f1e0 */
/* WARNING: Switch with 1 destination removed at 0x00010076f238 */
/* WARNING: Switch with 1 destination removed at 0x00010076f260 */
/* WARNING: Switch with 1 destination removed at 0x00010076f27c */
/* WARNING: Switch with 1 destination removed at 0x00010076f2a8 */
/* WARNING: Switch with 1 destination removed at 0x00010076f2cc */
/* WARNING: Switch with 1 destination removed at 0x00010076f2e4 */
/* WARNING: Switch with 1 destination removed at 0x00010076f38c */
/* WARNING: Switch with 1 destination removed at 0x00010076f39c */
/* WARNING: Switch with 1 destination removed at 0x00010076f578 */
/* WARNING: Switch with 1 destination removed at 0x00010076f584 */
/* WARNING: Switch with 1 destination removed at 0x00010076f5b0 */
/* WARNING: Switch with 1 destination removed at 0x00010076f60c */
/* WARNING: Switch with 1 destination removed at 0x00010076f6e0 */
/* WARNING: Switch with 1 destination removed at 0x00010076f754 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYArchO_m03301
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined4 *puVar9;
  undefined1 auVar10 [16];
  undefined4 auStack_180 [8];
  undefined4 auStack_160 [32];
  undefined8 auStack_e0 [9];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  uint uStack_6c;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e70 == 0) {
  case true:
    uRam0000000100e28270 = uRam0000000100e28250 ^ 0x3f28;
    uRam0000000100e28272 = uRam0000000100e28252 ^ 0x2022;
    sRam0000000100e28274 = uRam0000000100e28254 + (uRam0000000100e28254 & 0x7811) * -2 + 0x7811;
    sRam0000000100e28276 = uRam0000000100e28256 + (uRam0000000100e28256 & 0x2a07) * -2 + 0x2a07;
    sRam0000000100e28278 = uRam0000000100e28258 + (uRam0000000100e28258 & 0x79d0) * -2 + -0x630;
    uRam0000000100e2827a = uRam0000000100e2825a ^ 0x39fc;
    uRam0000000100e2827c = uRam0000000100e2825c ^ 0xd47e;
    uRam0000000100e2827e = uRam0000000100e2825e ^ 0x5a70;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e28280 = uRam0000000100e28260 ^ 0xb558;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e28282 = uRam0000000100e28262 ^ 0xd208;
                    /* WARNING: Switch is manually overridden */
    sRam0000000100e28284 = uRam0000000100e28264 + (uRam0000000100e28264 & 0x6cc5) * -2 + -0x133b;
    uRam0000000100e28286 = uRam0000000100e28266 ^ 0x9ff2;
    uRam0000000100e28288 = uRam0000000100e28268 ^ 0x6ab9;
    sRam0000000100e2828a = uRam0000000100e2826a + (uRam0000000100e2826a & 0x35d5) * -2 + -0x4a2b;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95e70 = 1;
  puVar8 = auStack_e0;
  puVar9 = auStack_160;
  puStack_90 = auStack_180;
  uStack_98 = param_5;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    uStack_80 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
    func_0x000100945280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    auVar10 = _objc_retain();
    param_3 = auVar10._0_8_;
    lVar5 = func_0x00010093e380(param_3,auVar10._8_8_,puVar8,puVar9,0x10);
                    /* WARNING: Switch is manually overridden */
    uStack_6c = param_4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar5 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar5 = *(long *)puVar8[2];
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(*(long *)puVar8[2] == lVar5) * 8 + 0x100e28508)) {
      case 0x10076ef60:
        _objc_enumerationMutation(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      lStack_78 = lVar5;
                    /* WARNING: Switch is manually overridden */
      func_0x00010094d960(*(undefined8 *)puVar8[1]);
      auVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar6 = func_0x00010094b580(auVar10._0_8_,auVar10._8_8_,uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010076efe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (**(code **)((uVar6 & 0xffffffff) * 8 + 0x100e28578))();
      return uVar7;
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(param_3);
      puVar9 = puStack_90;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010093f3a0(uStack_80,extraout_x1,4);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      puVar8 = (undefined8 *)func_0x00010094d6e0();
      _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
      uVar1 = (uint)puVar8 + 0x18;
      uVar2 = ((uVar1 ^ 8) - ((uint)puVar8 & 7)) + (uVar1 * 2 & 0x10);
                    /* WARNING: Switch is manually overridden */
      lVar5 = func_0x00010094db80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar5 < (long)(ulong)uVar2) {
      case false:
        lStack_78 = CONCAT44(lStack_78._4_4_,uVar1);
        uVar3 = 0x80000018;
                    /* WARNING: Switch is manually overridden */
        if (param_4 == 0) {
          uVar3 = 0xc;
        }
        *puVar9 = uVar3;
        puVar9[1] = uVar2;
        *(undefined8 *)(puVar9 + 4) = _UNK_10099c608;
        *(undefined8 *)(puVar9 + 2) = _UNK_10099c600;
        func_0x00010094ed20(param_1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        func_0x000100951d60();
        _objc_release(uVar7);
        func_0x00010094ed20(param_1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        uVar6 = func_0x000100946540();
        _objc_release(uVar7);
        uStack_88 = uVar6 & 0xffffffff;
        uStack_6c = uVar2;
                    /* WARNING: Switch is manually overridden */
        func_0x00010094ed20(param_1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        func_0x000100972940();
        _objc_release(uVar7);
        func_0x00010094ed20(param_1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        iVar4 = func_0x000100951140();
        func_0x000100968180(uVar7,extraout_x1_00,iVar4 + 1);
        _objc_release(uVar7);
        uVar1 = uStack_6c;
                    /* WARNING: Switch is manually overridden */
        func_0x00010094ed20(param_1);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        iVar4 = func_0x000100972940();
        func_0x00010096d280(uVar7,extraout_x1_01,uVar1 + iVar4);
        _objc_release(uVar7);
        uVar6 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010076f3ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)((uVar6 & 0xffffffff) * 8 + 0x100e288d8))();
        return uVar7;
                    /* WARNING: Switch is manually overridden */
      }
    }
    func_0x00010076f8f0(uStack_98,1000,0x100e28290);
    uVar7 = uStack_80;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_3);
    _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    _objc_retain(param_3);
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO changeDylibLink:toLink:error:]
 * Entry: 0x10076fd80; original ABI: B40@0:8@16@24^@32
 * Original instructions in modeled body: 477; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010076fdd0 */
/* WARNING: Switch with 1 destination removed at 0x00010076fde4 */
/* WARNING: Switch with 1 destination removed at 0x00010076fdf0 */
/* WARNING: Switch with 1 destination removed at 0x00010076fe48 */
/* WARNING: Switch with 1 destination removed at 0x00010076fe78 */
/* WARNING: Switch with 1 destination removed at 0x00010076fef0 */
/* WARNING: Switch with 1 destination removed at 0x00010076ff40 */
/* WARNING: Switch with 1 destination removed at 0x00010076ff4c */
/* WARNING: Switch with 1 destination removed at 0x00010076ff5c */
/* WARNING: Switch with 1 destination removed at 0x00010076ff8c */
/* WARNING: Switch with 1 destination removed at 0x00010076ff9c */
/* WARNING: Switch with 1 destination removed at 0x00010076ffac */
/* WARNING: Switch with 1 destination removed at 0x000100770090 */
/* WARNING: Switch with 1 destination removed at 0x0001007700c8 */
/* WARNING: Switch with 1 destination removed at 0x000100770150 */
/* WARNING: Switch with 1 destination removed at 0x000100770168 */
/* WARNING: Switch with 1 destination removed at 0x000100770174 */
/* WARNING: Switch with 1 destination removed at 0x000100770180 */
/* WARNING: Switch with 1 destination removed at 0x00010077018c */
/* WARNING: Switch with 1 destination removed at 0x0001007701cc */
/* WARNING: Switch with 1 destination removed at 0x0001007701d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007701ec */
/* WARNING: Switch with 1 destination removed at 0x00010077023c */
/* WARNING: Switch with 1 destination removed at 0x000100770248 */
/* WARNING: Switch with 1 destination removed at 0x00010077027c */
/* WARNING: Switch with 1 destination removed at 0x000100770288 */
/* WARNING: Switch with 1 destination removed at 0x000100770298 */
/* WARNING: Switch with 1 destination removed at 0x0001007702cc */
/* WARNING: Switch with 1 destination removed at 0x0001007702dc */
/* WARNING: Switch with 1 destination removed at 0x0001007702e8 */
/* WARNING: Switch with 1 destination removed at 0x000100770338 */
/* WARNING: Switch with 1 destination removed at 0x000100770368 */
/* WARNING: Switch with 1 destination removed at 0x000100770374 */
/* WARNING: Switch with 1 destination removed at 0x000100770384 */
/* WARNING: Switch with 1 destination removed at 0x000100770390 */
/* WARNING: Switch with 1 destination removed at 0x00010077039c */
/* WARNING: Switch with 1 destination removed at 0x0001007703b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007703c4 */
/* WARNING: Switch with 1 destination removed at 0x000100770810 */
/* WARNING: Switch with 1 destination removed at 0x00010077081c */
/* WARNING: Switch with 1 destination removed at 0x000100770868 */
/* WARNING: Switch with 1 destination removed at 0x000100770918 */
/* WARNING: Switch with 1 destination removed at 0x000100770988 */
/* WARNING: Switch with 1 destination removed at 0x000100770a08 */
/* WARNING: Switch with 1 destination removed at 0x000100770a9c */
/* WARNING: Switch with 1 destination removed at 0x000100770ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100770b98 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYArchO_m03302
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_160 [128];
  undefined8 auStack_e0 [8];
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e78 == 0) {
  case true:
    uRam0000000100e28310 =
         CONCAT17((byte)((ulong)uRam0000000100e282f0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c620 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e282f0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c620 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e282f0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c620 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e282f0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c620 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e282f0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c620 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e282f0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c620 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e282f0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c620 >> 8),
                                                  (byte)uRam0000000100e282f0 ^ (byte)_UNK_10099c620)
                                                  ))))));
    uRam0000000100e28318 = uRam0000000100e282f8 ^ 0x77b0;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e2831a =
         CONCAT17((byte)((ulong)uRam0000000100e282fa >> 0x38) ^
                  (byte)((ulong)_UNK_10099c610 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e282fa >> 0x30) ^
                           (byte)((ulong)_UNK_10099c610 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e282fa >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c610 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e282fa >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c610 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e282fa >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c610 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e282fa >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c610 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e282fa >> 8) ^
                                                  (byte)((ulong)_UNK_10099c610 >> 8),
                                                  (byte)uRam0000000100e282fa ^ (byte)_UNK_10099c610)
                                                  ))))));
    uRam0000000100e28322 =
         CONCAT17((byte)((ulong)uRam0000000100e28302 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c618 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e28302 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c618 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e28302 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c618 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e28302 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c618 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e28302 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c618 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e28302 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c618 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e28302 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c618 >> 8),
                                                  (byte)uRam0000000100e28302 ^ (byte)_UNK_10099c618)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e2832a = uRam0000000100e2830a ^ 0x5dd4;
    uRam0000000100e28340 =
         CONCAT17((byte)((ulong)uRam0000000100e28330 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c628 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e28330 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c628 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e28330 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c628 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e28330 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c628 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e28330 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c628 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e28330 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c628 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e28330 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c628 >> 8),
                                                  (byte)uRam0000000100e28330 ^ (byte)_UNK_10099c628)
                                                  ))))));
    uRam0000000100e28348 = uRam0000000100e28338 ^ 0xccc9;
    uRam0000000100e2834a = uRam0000000100e2833a ^ 0x17dd;
    uRam0000000100e2834c = uRam0000000100e2833c ^ 0x8f70;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95e78 = 1;
  puVar10 = auStack_e0;
  puVar5 = auStack_160;
  lStack_88 = param_5;
  uVar3 = _objc_retain(param_3);
  uStack_80 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    func_0x000100945280(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[7] = 0;
    puVar10[6] = 0;
    auVar13 = _objc_retain();
    uVar7 = auVar13._0_8_;
    lVar8 = func_0x00010093e380(uVar7,auVar13._8_8_,puVar10,puVar5,0x10);
    uStack_78 = uVar7;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar8 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(*(long *)puVar10[2] == *(long *)puVar10[2]) * 8 + 0x100e28c08))
      {
      case 0x1007700b4:
        _objc_enumerationMutation(uVar7);
      }
      func_0x00010094d960(*(undefined8 *)puVar10[1]);
      auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar4 = func_0x00010094b580(auVar13._0_8_,auVar13._8_8_,uVar3);
      _objc_release(auVar13._0_8_);
                    /* WARNING: Could not recover jumptable at 0x0001007700f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e28c38))();
      return uVar3;
                    /* WARNING: Switch is manually overridden */
    }
    puVar10 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar7);
    uVar1 = uStack_80;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uRam0000000100e28d40) {
    case 0x1007701ac:
      func_0x00010093f3a0(uStack_80,extraout_x1,4);
      puVar5 = (undefined1 *)_objc_retainAutoreleasedReturnValue();
      uVar4 = func_0x00010094d6e0(puVar5);
      _objc_release(puVar5);
      lVar11 = (uVar4 + 0x20 & (uVar4 & 7 ^ 0xffffffffffffffff)) -
               ((ulong)(7 - (int)uVar4) & uVar4 & 7);
      lVar8 = func_0x0001009420c0(0);
      lVar12 = lVar11 - (ulong)*(uint *)(lVar8 + 4);
      lStack_70 = lVar11;
      lVar11 = func_0x00010094db80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar11 < lVar12) {
      case false:
        *(int *)(lVar8 + 4) = (int)lStack_70;
        uStack_98 = uVar3;
        lStack_90 = uVar4 + 0x18;
        lStack_88 = lVar8;
        func_0x00010094ed20(param_1);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        lVar8 = func_0x000100951d60();
        _objc_release(uVar3);
        func_0x00010094ed20(param_1);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar9 = func_0x000100946540();
        _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
        func_0x00010094ed20(param_1);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar4 = func_0x000100972940();
        _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
        lStack_a0 = lVar8 + (uVar9 & 0xffffffff) + (uVar4 & 0xffffffff);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar12 != 0) {
        case true:
          func_0x00010094ed20(param_1);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          uVar2 = func_0x000100972940();
                    /* WARNING: Switch is manually overridden */
          func_0x00010094ed20(param_1);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          func_0x00010096d280(auVar13._0_8_,auVar13._8_8_,
                              ((uint)lVar12 ^ uVar2) + ((uint)lVar12 & uVar2) * 2);
          _objc_release(auVar13._0_8_);
          _objc_release(uVar3);
          func_0x00010094ed20(param_1);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          func_0x000100936000(param_1,auVar13._8_8_,auVar13._0_8_);
          _objc_release(auVar13._0_8_);
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar4 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001007703d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e28ed8))();
        return uVar3;
      case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010076f8f0(lStack_88,1000,0x100e28350);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case 0x1007701d0:
      func_0x00010094eec0(uRam0000000100c71500);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      puVar5 = auVar13._0_8_;
      func_0x00010094e280(puVar5,auVar13._8_8_,0x100e28370,0x100b391a8,0);
      auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100973ee0(auVar13._0_8_,auVar13._8_8_,uVar3);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar13._0_8_);
      _objc_release(puVar5);
      func_0x00010076f8f0(lStack_88,0x3e9,uVar6);
      _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    param_1 = 0;
    _objc_release(0);
    _objc_release(uVar7);
    _objc_release(uVar1);
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    func_0x000100945280(0);
    _objc_retainAutoreleasedReturnValue();
    uRam0000000000000008 = 0;
    uRam0000000000000000 = 0;
    uRam0000000000000018 = 0;
    uRam0000000000000010 = 0;
    uRam0000000000000028 = 0;
    uRam0000000000000020 = 0;
    uRam0000000000000038 = 0;
    uRam0000000000000030 = 0;
    auVar13 = _objc_retain();
    func_0x00010093e380(auVar13._0_8_,auVar13._8_8_,0,puVar5,0x10);
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO removeLinkedDylib:]
 * Entry: 0x100770e38; original ABI: v24@0:8@16
 * Original instructions in modeled body: 429; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100770e78 */
/* WARNING: Switch with 1 destination removed at 0x000100770ec8 */
/* WARNING: Switch with 1 destination removed at 0x000100770edc */
/* WARNING: Switch with 1 destination removed at 0x000100770ef0 */
/* WARNING: Switch with 1 destination removed at 0x000100770f18 */
/* WARNING: Switch with 1 destination removed at 0x000100770f58 */
/* WARNING: Switch with 1 destination removed at 0x000100770f80 */
/* WARNING: Switch with 1 destination removed at 0x000100770f90 */
/* WARNING: Switch with 1 destination removed at 0x000100770fa4 */
/* WARNING: Switch with 1 destination removed at 0x000100770fc8 */
/* WARNING: Switch with 1 destination removed at 0x000100770fd4 */
/* WARNING: Switch with 1 destination removed at 0x000100771004 */
/* WARNING: Switch with 1 destination removed at 0x000100771020 */
/* WARNING: Switch with 1 destination removed at 0x00010077102c */
/* WARNING: Switch with 1 destination removed at 0x000100771038 */
/* WARNING: Switch with 1 destination removed at 0x000100771070 */
/* WARNING: Switch with 1 destination removed at 0x000100771080 */
/* WARNING: Switch with 1 destination removed at 0x0001007710b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007710c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007710d0 */
/* WARNING: Switch with 1 destination removed at 0x000100771118 */
/* WARNING: Switch with 1 destination removed at 0x000100771124 */
/* WARNING: Switch with 1 destination removed at 0x000100771154 */
/* WARNING: Switch with 1 destination removed at 0x000100771160 */
/* WARNING: Switch with 1 destination removed at 0x00010077117c */
/* WARNING: Switch with 1 destination removed at 0x000100771194 */
/* WARNING: Switch with 1 destination removed at 0x0001007711b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007711c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007711d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007711f4 */
/* WARNING: Switch with 1 destination removed at 0x000100771200 */
/* WARNING: Switch with 1 destination removed at 0x0001007712dc */
/* WARNING: Switch with 1 destination removed at 0x0001007712f8 */
/* WARNING: Switch with 1 destination removed at 0x00010077156c */

void Recovered_YYYArchO_m03303(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
  func_0x000100945280(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar12 = _objc_retain(uVar3);
  uVar3 = auVar12._0_8_;
  uVar4 = func_0x00010093e380(uVar3,auVar12._8_8_,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar4 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar11 = 0;
    lVar9 = *plStack_a0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_100770f74_case_1:
    lVar10 = 0;
    lVar9 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100771154_case_0:
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar10 * 8 + 0x100e29378)) {
    case 0x1007711b0:
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(lVar9 != 0) * 8 + 0x100e293b8)) {
    case 0x1007711ec:
                    /* WARNING: Switch is manually overridden */
      break;
    case 0x1007711f8:
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_100771200_case_0;
    }
    while( true ) {
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar9);
      _objc_release(uVar2);
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
      ___stack_chk_fail();
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951d60();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100946540();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951140();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100972940();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      iVar1 = func_0x000100951140();
      func_0x000100968180(uVar7,extraout_x1_00,iVar1 + -1);
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      lVar10 = func_0x0001009420c0(lVar9);
      iVar1 = func_0x000100972940(uVar7);
      func_0x00010096d280(uVar7,extraout_x1_01,iVar1 - *(int *)(lVar10 + 4));
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      auVar12 = _objc_retainAutoreleasedReturnValue();
      func_0x000100936000(param_1,auVar12._8_8_,auVar12._0_8_);
override_jmp_100771200_case_0:
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      lVar10 = func_0x000100951d60();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      uVar4 = func_0x000100946540();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951140();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x000100972940();
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      iVar1 = func_0x000100951140();
      func_0x000100968180(uVar7,extraout_x1_02,iVar1 + -1);
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      lVar8 = func_0x0001009420c0(lVar9);
      iVar1 = func_0x000100972940(uVar7);
      func_0x00010096d280(uVar7,extraout_x1_03,iVar1 - *(int *)(lVar8 + 4));
      _objc_release(uVar7);
      func_0x00010094ed20(param_1);
      auVar12 = _objc_retainAutoreleasedReturnValue();
      func_0x000100936000(param_1,auVar12._8_8_,auVar12._0_8_);
      _objc_release(auVar12._0_8_);
      uVar7 = uRam0000000100c71778;
      auVar12 = func_0x0001009420c0(lVar9);
      func_0x00010093f540(uVar7,auVar12._8_8_,*(undefined4 *)(auVar12._0_8_ + 4));
      uVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x00010094ee20(param_1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar6 = func_0x000100951d60(lVar9);
      auVar12 = func_0x0001009420c0(lVar9);
      func_0x00010097ac80(uVar5,auVar12._8_8_,uVar6,*(undefined4 *)(auVar12._0_8_ + 4));
      _objc_release(uVar5);
      func_0x00010094ee20(param_1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      func_0x00010094ed20(param_1);
      param_1 = _objc_retainAutoreleasedReturnValue();
      auVar12 = func_0x000100972940();
      func_0x00010097aca0(uVar5,auVar12._8_8_,
                          lVar10 + (uVar4 & 0xffffffff) + (auVar12._0_8_ & 0xffffffff),uVar7);
      _objc_release(param_1);
      _objc_release(uVar5);
      _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
    }
    return;
  }
override_jmp_100770fa4_case_0:
  do {
                    /* WARNING: Switch is manually overridden */
    lStack_70 = lVar9;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_a0 == lVar9) * 8 + 0x100e29238)) {
    case 0x100770ffc:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar7 = *(undefined8 *)(lStack_a8 + uVar11 * 8);
    func_0x00010094d960(uVar7);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    lVar10 = func_0x000100959860(auVar12._0_8_,auVar12._8_8_,uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar12._0_8_);
    lVar9 = lStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar10 != 0x7fffffffffffffff) {
    case true:
                    /* WARNING: Switch is manually overridden */
      lVar9 = _objc_retain(uVar7);
                    /* WARNING: Switch is manually overridden */
      lVar10 = 1;
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_100771154_case_0;
    }
    uVar11 = uVar11 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar11 < uVar4) {
    case true:
      goto override_jmp_100770fa4_case_0;
    }
    uVar4 = func_0x00010093e380(uVar3,extraout_x1,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(uVar4 == 0) {
    case true:
      goto override_jmp_100770f74_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO removeLoadCommandWithCmd:]
 * Entry: 0x100771570; original ABI: v20@0:8I16
 * Original instructions in modeled body: 542; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007715bc */
/* WARNING: Switch with 1 destination removed at 0x0001007715c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007715e4 */
/* WARNING: Switch with 1 destination removed at 0x0001007715f0 */
/* WARNING: Switch with 1 destination removed at 0x00010077167c */
/* WARNING: Switch with 1 destination removed at 0x000100771704 */
/* WARNING: Switch with 1 destination removed at 0x000100771710 */
/* WARNING: Switch with 1 destination removed at 0x00010077171c */
/* WARNING: Switch with 1 destination removed at 0x000100771738 */
/* WARNING: Switch with 1 destination removed at 0x00010077175c */
/* WARNING: Switch with 1 destination removed at 0x000100771774 */
/* WARNING: Switch with 1 destination removed at 0x0001007717a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007717c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007717dc */
/* WARNING: Switch with 1 destination removed at 0x000100771804 */
/* WARNING: Switch with 1 destination removed at 0x000100771828 */
/* WARNING: Switch with 1 destination removed at 0x000100771834 */
/* WARNING: Switch with 1 destination removed at 0x000100771860 */
/* WARNING: Switch with 1 destination removed at 0x00010077186c */
/* WARNING: Switch with 1 destination removed at 0x000100771878 */
/* WARNING: Switch with 1 destination removed at 0x0001007718a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007718ac */
/* WARNING: Switch with 1 destination removed at 0x0001007718b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007718c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007718d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007718e0 */
/* WARNING: Switch with 1 destination removed at 0x000100771908 */
/* WARNING: Switch with 1 destination removed at 0x000100771914 */
/* WARNING: Switch with 1 destination removed at 0x000100771948 */
/* WARNING: Switch with 1 destination removed at 0x000100771958 */
/* WARNING: Switch with 1 destination removed at 0x000100771984 */
/* WARNING: Switch with 1 destination removed at 0x0001007719b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007719bc */
/* WARNING: Switch with 1 destination removed at 0x0001007719c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007719ec */
/* WARNING: Switch with 1 destination removed at 0x0001007719fc */
/* WARNING: Switch with 1 destination removed at 0x000100771a3c */
/* WARNING: Switch with 1 destination removed at 0x000100771a64 */
/* WARNING: Switch with 1 destination removed at 0x000100771a80 */
/* WARNING: Switch with 1 destination removed at 0x000100771a9c */
/* WARNING: Switch with 1 destination removed at 0x000100771b58 */
/* WARNING: Switch with 1 destination removed at 0x000100771b88 */
/* WARNING: Switch with 1 destination removed at 0x000100771b94 */
/* WARNING: Switch with 1 destination removed at 0x000100771c6c */
/* WARNING: Switch with 1 destination removed at 0x000100771d4c */
/* WARNING: Switch with 1 destination removed at 0x000100771d5c */
/* WARNING: Switch with 1 destination removed at 0x000100771d8c */
/* WARNING: Switch with 1 destination removed at 0x000100771dc4 */
/* WARNING: Switch with 1 destination removed at 0x000100771dd0 */
/* WARNING: Switch with 1 destination removed at 0x000100771df8 */
/* WARNING: Switch with 1 destination removed at 0x000100771e14 */
/* WARNING: Switch with 1 destination removed at 0x000100771e28 */
/* WARNING: Switch with 1 destination removed at 0x000100771e44 */
/* WARNING: Switch with 1 destination removed at 0x000100771e50 */
/* WARNING: Switch with 1 destination removed at 0x000100771f18 */
/* WARNING: Switch with 1 destination removed at 0x000100771f68 */

void Recovered_YYYArchO_m03304(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_1a0 [8];
  undefined8 auStack_160 [16];
  undefined8 auStack_e0 [8];
  long lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  ulong uStack_88;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e7c == 0) {
  case true:
    bRam0000000100e2839d = bRam0000000100e28390 ^ 0x1d;
    bRam0000000100e2839e = bRam0000000100e28391 ^ 0x96;
    bRam0000000100e2839f = bRam0000000100e28392 ^ 0x99;
    bRam0000000100e283a0 = bRam0000000100e28393 ^ 0x44;
    bRam0000000100e283a1 = bRam0000000100e28394 ^ 0xa3;
    bRam0000000100e283a2 = bRam0000000100e28395 ^ 0x62;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e283a3 = bRam0000000100e28396 ^ 0x6c;
    bRam0000000100e283a4 = bRam0000000100e28397 ^ 0x54;
    bRam0000000100e283a5 = bRam0000000100e28398 ^ 0x1d;
    bRam0000000100e283a6 = bRam0000000100e28399 ^ 0xba;
    bRam0000000100e283a7 = bRam0000000100e2839a ^ 0xa5;
    bRam0000000100e283a8 = bRam0000000100e2839b ^ 0xa6;
    bRam0000000100e283a9 = bRam0000000100e2839c ^ 0x26;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95e7c = 1;
                    /* WARNING: Switch is manually overridden */
  puVar5 = auStack_e0;
  puVar12 = auStack_160;
  puVar1 = auStack_1a0;
  puVar10 = (undefined8 *)PTR____NSArray0___100afc6c0;
  puStack_90 = puVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    uVar7 = func_0x000100950b20(*puVar10);
    func_0x00010094db60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    auVar14 = _objc_retain();
    uVar8 = auVar14._0_8_;
    uVar9 = func_0x00010093e380(uVar8,auVar14._8_8_,puVar5,puVar12,0x10);
    puVar10 = puStack_90;
    puStack_98 = puVar1 + -0x10;
    uStack_70 = uVar7;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar9 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar4 = *(long *)puVar5[2];
      uVar13 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_1007717c0_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*(long *)puVar5[2] == lVar4) * 8 + 0x100e29528)) {
        case 0x100771858:
          _objc_enumerationMutation(uVar8);
                    /* WARNING: Switch is manually overridden */
        }
        uVar11 = *(undefined8 *)(puVar5[1] + uVar13 * 8);
        auVar14 = func_0x00010094db00(uVar11);
        uVar7 = auVar14._8_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*auVar14._0_8_ == (int)param_3) {
        case true:
          func_0x000100937000(uStack_70,uVar7,uVar11);
          uVar7 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        uVar13 = uVar13 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar13 < uVar9) {
        case true:
          goto override_jmp_1007717c0_case_0;
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar9 = func_0x00010093e380(uVar8,uVar7,puVar5,puVar12,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar13 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar9 == 0) {
        case true:
          goto override_jmp_10077179c_case_1;
        }
      } while( true );
    }
override_jmp_10077179c_case_1:
    uVar7 = uStack_70;
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar8);
    lVar4 = func_0x00010093e360(uVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 != 0) {
    case true:
      puVar1[-0x12] = param_3;
      _NSLog(0x100e283b0);
      puVar10[5] = 0;
      puVar10[4] = 0;
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
      puVar10[2] = 0;
      puVar5 = puStack_98;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      auVar14 = _objc_retain(uVar7);
      param_3 = auVar14._0_8_;
      puVar5 = (undefined8 *)func_0x00010093e380(param_3,auVar14._8_8_,puVar10,puVar5,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(puVar5 == (undefined8 *)0x0) {
      case false:
                    /* WARNING: Switch is manually overridden */
        lStack_a0 = *(long *)puVar10[2];
        puVar12 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100771a80_case_0:
        do {
                    /* WARNING: Switch is manually overridden */
          switch(*(long *)puVar10[2] == lStack_a0) {
          case false:
            _objc_enumerationMutation(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          }
          uVar11 = *(undefined8 *)(puVar10[1] + (long)puVar12 * 8);
          func_0x00010094ed20(param_1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          lStack_80 = func_0x000100951d60();
          _objc_release(uVar7);
          func_0x00010094ed20(param_1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          uStack_88 = func_0x000100946540();
          uStack_88 = uStack_88 & 0xffffffff;
          _objc_release(uVar7);
          iVar2 = func_0x00010093ccc0(uVar11);
          uVar7 = func_0x000100951d60(uVar11);
          func_0x00010094ed20(param_1);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          iVar3 = func_0x000100951140();
          func_0x000100968180(uVar11,extraout_x1_01,iVar3 + -1);
          _objc_release(uVar11);
          func_0x00010094ed20(param_1);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          iVar3 = func_0x000100972940();
          func_0x00010096d280(uVar11,extraout_x1_02,iVar3 - iVar2);
          _objc_release(uVar11);
          puStack_78 = puVar12;
                    /* WARNING: Switch is manually overridden */
          func_0x00010094ed20(param_1);
          auVar14 = _objc_retainAutoreleasedReturnValue();
          func_0x000100936000(param_1,auVar14._8_8_,auVar14._0_8_);
          _objc_release(auVar14._0_8_);
          func_0x00010093f540(uRam0000000100c71778,extraout_x1_03,iVar2);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          func_0x00010094ee20(param_1);
          auVar14 = _objc_retainAutoreleasedReturnValue();
          func_0x00010097ac80(auVar14._0_8_,auVar14._8_8_,uVar7,iVar2);
          _objc_release(auVar14._0_8_);
          lVar4 = lStack_80;
          uVar9 = uStack_88;
          func_0x00010094ee20(param_1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          func_0x00010094ed20(param_1);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          auVar14 = func_0x000100972940();
          func_0x00010097aca0(uVar7,auVar14._8_8_,lVar4 + uVar9 + (auVar14._0_8_ & 0xffffffff),uVar6
                             );
          _objc_release(uVar11);
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar7 = uStack_70;
          puVar10 = puStack_90;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          puVar12 = (undefined8 *)((long)puStack_78 + 1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(puVar12 < puVar5) {
          case true:
            goto override_jmp_100771a80_case_0;
          }
                    /* WARNING: Switch is manually overridden */
          puVar5 = (undefined8 *)
                   func_0x00010093e380(param_3,extraout_x1_00,puStack_90,puStack_98,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          puVar12 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
          switch(puVar5 == (undefined8 *)0x0) {
          case true:
            goto override_jmp_100771a58_case_1;
          }
        } while( true );
      case true:
override_jmp_100771a58_case_1:
                    /* WARNING: Switch is manually overridden */
        _objc_release(param_3);
                    /* WARNING: Switch is manually overridden */
      }
    }
    puVar1 = puVar1 + -0x10;
    _objc_release(uVar8);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    func_0x000100950b20(*puVar10);
    func_0x00010094db60(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    auVar14 = _objc_retain();
    func_0x00010093e380(auVar14._0_8_,auVar14._8_8_,puVar5,puVar12,0x10);
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setup]
 * Entry: 0x1007637e8; original ABI: v16@0:8
 * Original instructions in modeled body: 720; unresolved jumps: 6
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100763830 */
/* WARNING: Switch with 1 destination removed at 0x00010076383c */
/* WARNING: Switch with 1 destination removed at 0x000100763974 */
/* WARNING: Switch with 1 destination removed at 0x0001007639fc */
/* WARNING: Switch with 1 destination removed at 0x000100763d04 */
/* WARNING: Switch with 1 destination removed at 0x000100763d14 */
/* WARNING: Switch with 1 destination removed at 0x000100763d2c */
/* WARNING: Switch with 1 destination removed at 0x000100763d54 */
/* WARNING: Switch with 1 destination removed at 0x000100763d64 */
/* WARNING: Switch with 1 destination removed at 0x000100763dbc */
/* WARNING: Switch with 1 destination removed at 0x000100763de8 */
/* WARNING: Switch with 1 destination removed at 0x000100763e0c */
/* WARNING: Switch with 1 destination removed at 0x000100763e28 */
/* WARNING: Switch with 1 destination removed at 0x000100763f1c */
/* WARNING: Switch with 1 destination removed at 0x000100763f6c */
/* WARNING: Switch with 1 destination removed at 0x000100764038 */
/* WARNING: Switch with 1 destination removed at 0x0001007641e8 */
/* WARNING: Switch with 1 destination removed at 0x000100764204 */
/* WARNING: Switch with 1 destination removed at 0x000100764254 */
/* WARNING: Switch with 1 destination removed at 0x000100764280 */
/* WARNING: Switch with 1 destination removed at 0x000100764290 */
/* WARNING: Switch with 1 destination removed at 0x0001007642c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007642dc */
/* WARNING: Switch with 1 destination removed at 0x0001007642e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007642f4 */
/* WARNING: Switch with 1 destination removed at 0x00010076431c */
/* WARNING: Switch with 1 destination removed at 0x00010076438c */
/* WARNING: Switch with 1 destination removed at 0x0001007643b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007643e4 */
/* WARNING: Switch with 1 destination removed at 0x00010076443c */
/* WARNING: Switch with 1 destination removed at 0x000100764468 */
/* WARNING: Switch with 1 destination removed at 0x000100764478 */
/* WARNING: Switch with 1 destination removed at 0x0001007644c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007644d4 */
/* WARNING: Switch with 1 destination removed at 0x000100764530 */
/* WARNING: Switch with 1 destination removed at 0x00010076455c */
/* WARNING: Switch with 1 destination removed at 0x00010076459c */
/* WARNING: Switch with 1 destination removed at 0x0001007645bc */
/* WARNING: Switch with 1 destination removed at 0x0001007645e0 */
/* WARNING: Switch with 1 destination removed at 0x000100764604 */
/* WARNING: Switch with 1 destination removed at 0x000100764d78 */
/* WARNING: Switch with 1 destination removed at 0x000100764d84 */
/* WARNING: Switch with 1 destination removed at 0x000100764da0 */
/* WARNING: Switch with 1 destination removed at 0x000100765574 */
/* WARNING: Switch with 1 destination removed at 0x000100765580 */
/* WARNING: Switch with 1 destination removed at 0x0001007656f8 */
/* WARNING: Switch with 1 destination removed at 0x000100765758 */
/* WARNING: Switch with 1 destination removed at 0x000100765788 */
/* WARNING: Switch with 1 destination removed at 0x0001007657b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007657c4 */
/* WARNING: Switch with 1 destination removed at 0x000100765848 */
/* WARNING: Switch with 1 destination removed at 0x000100765854 */
/* WARNING: Switch with 1 destination removed at 0x000100765870 */
/* WARNING: Switch with 1 destination removed at 0x00010076587c */
/* WARNING: Switch with 1 destination removed at 0x000100765898 */
/* WARNING: Switch with 1 destination removed at 0x0001007658a4 */
/* WARNING: Switch with 1 destination removed at 0x000100765914 */
/* WARNING: Switch with 1 destination removed at 0x0001007659c0 */

void Recovered_YYYArchO_m03305(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 auStack_100 [10];
  undefined8 *puStack_b0;
  long lStack_a0;
  undefined8 uStack_98;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e50 == 0) {
  case true:
    bRam0000000100e23aa1 = ~((bRam0000000100e23a96 | 0x36) & (bRam0000000100e23a96 ^ 0xff | 0xc9));
    bRam0000000100e23aa2 = bRam0000000100e23a97 ^ 0xa6;
    bRam0000000100e23aa3 = bRam0000000100e23a98 ^ 0x1f;
    bRam0000000100e23aa4 = bRam0000000100e23a99 ^ 0xab;
    bRam0000000100e23aa5 = bRam0000000100e23a9a ^ 0xbb;
    bRam0000000100e23aa6 = bRam0000000100e23a9b ^ 0xde;
    cRam0000000100e23aa7 = bRam0000000100e23a9c + (bRam0000000100e23a9c & 0x42) * -2 + 'B';
    bRam0000000100e23aa8 = bRam0000000100e23a9d ^ 0x6f;
    bRam0000000100e23aa9 = bRam0000000100e23a9e ^ 0x52;
    bRam0000000100e23aaa = bRam0000000100e23a9f ^ 0x49;
    bRam0000000100e23aab = ~((bRam0000000100e23aa0 | 0x2f) & (bRam0000000100e23aa0 ^ 0xff | 0xd0));
    bRam0000000100e23a75 = ~((bRam0000000100e23a6e | 0x85) & (bRam0000000100e23a6e ^ 0xff | 0x7a));
    bRam0000000100e23a76 = bRam0000000100e23a6f ^ 0x4b;
    bRam0000000100e23a77 = bRam0000000100e23a70 ^ 0xf5;
    bRam0000000100e23a78 = bRam0000000100e23a71 ^ 0x3c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e23a79 = bRam0000000100e23a72 + (bRam0000000100e23a72 & 0x14) * -2 + -0x6c;
    bRam0000000100e23a7a = bRam0000000100e23a73 ^ 0xc1;
    bRam0000000100e23a7b = bRam0000000100e23a74 ^ 0x59;
    bRam0000000100e23a89 = bRam0000000100e23a7c ^ 0xa8;
    bRam0000000100e23a8a = bRam0000000100e23a7d ^ 0x1a;
    bRam0000000100e23a8b = bRam0000000100e23a7e ^ 0xd1;
    bRam0000000100e23a8c = ~bRam0000000100e23a7f;
    bRam0000000100e23a8d = bRam0000000100e23a80 ^ 0xbf;
    cRam0000000100e23a8e = bRam0000000100e23a81 + (bRam0000000100e23a81 & 0x1c) * -2 + -100;
    bRam0000000100e23a8f = bRam0000000100e23a82 ^ 0x9a;
    bRam0000000100e23a90 = bRam0000000100e23a83 ^ 0x8f;
    bRam0000000100e23a91 = bRam0000000100e23a84 ^ 0xcb;
    cRam0000000100e23a92 = bRam0000000100e23a85 + (bRam0000000100e23a85 & 0x16) * -2 + -0x6a;
    bRam0000000100e23a93 = bRam0000000100e23a86 ^ 0xec;
    cRam0000000100e23a94 = bRam0000000100e23a87 + (bRam0000000100e23a87 & 0x3e) * -2 + '>';
    bRam0000000100e23a95 = bRam0000000100e23a88 ^ 0x44;
    bRam0000000100e23a67 = bRam0000000100e23a60 ^ 0x71;
    bRam0000000100e23a68 = bRam0000000100e23a61 ^ 0x3c;
    bRam0000000100e23a69 = bRam0000000100e23a62 ^ 0x8b;
    bRam0000000100e23a6a = bRam0000000100e23a63 ^ 0xca;
    bRam0000000100e23a6b = bRam0000000100e23a64 ^ 0xe4;
    cRam0000000100e23a6c = bRam0000000100e23a65 + (bRam0000000100e23a65 & 0x30) * -2 + '0';
    bRam0000000100e23a6d = bRam0000000100e23a66 ^ 0x9a;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95e50 = 1;
  puVar2 = auStack_100;
  puVar6 = puVar2;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    puVar2 = puVar2 + -0x10;
    func_0x00010094db60(param_1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    auVar8 = _objc_retain(uVar4);
    uVar4 = auVar8._0_8_;
    uVar3 = func_0x00010093e380(uVar4,auVar8._8_8_,puVar6,puVar2,0x10);
                    /* WARNING: Switch is manually overridden */
    puStack_b0 = puVar2;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar3 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lStack_a0 = *(long *)puVar6[2];
      uStack_98 = uVar4;
      uStack_70 = param_1;
      uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100763e0c_case_0:
      do {
        uStack_78 = uVar3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*(long *)puVar6[2] == lStack_a0) * 8 + 0x100e23f38)) {
        case 0x1007642b8:
                    /* WARNING: Switch is manually overridden */
          _objc_enumerationMutation(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        uVar5 = *(undefined8 *)(puVar6[1] + uVar7 * 8);
        auVar8 = func_0x00010094db00(uVar5);
        uVar4 = uStack_98;
                    /* WARNING: Switch is manually overridden */
        iVar1 = *auVar8._0_8_;
        uStack_80 = uVar7;
                    /* WARNING: Switch is manually overridden */
        switch(iVar1 < 0x1d) {
        case false:
                    /* WARNING: Switch is manually overridden */
          switch(iVar1 < 0x21) {
          case false:
                    /* WARNING: Switch is manually overridden */
            switch(iVar1 < 0x2c) {
            case false:
                    /* WARNING: Switch is manually overridden */
              switch(iVar1 == 0x2c) {
              case true:
                    /* WARNING: Switch is manually overridden */
                func_0x00010094ee20(param_1);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                auVar8 = func_0x000100951d60(uVar5);
                func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x18);
                _objc_release(uVar4);
                uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010076561c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e24ab8))();
                return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
              }
              break;
            case true:
                    /* WARNING: Switch is manually overridden */
              switch(iVar1 == 0x21) {
              case true:
                func_0x00010094ee20(param_1);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                auVar8 = func_0x000100951d60(uVar5);
                func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x14);
                _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100765590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e249d8))();
                return;
                    /* WARNING: Switch is manually overridden */
              }
            }
            break;
          case true:
                    /* WARNING: Switch is manually overridden */
            switch(iVar1 == 0x1d) {
            case true:
              func_0x00010094ee20(param_1);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              auVar8 = func_0x000100951d60(uVar5);
              func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x10);
              _objc_release(uVar4);
              uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001007654f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e248e8))();
              return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            }
          }
          break;
        case true:
                    /* WARNING: Switch is manually overridden */
          switch(iVar1 < 1) {
          case false:
                    /* WARNING: Switch is manually overridden */
            switch(iVar1 < 0x19) {
            case false:
                    /* WARNING: Switch is manually overridden */
              switch(iVar1 == 0x19) {
              case true:
                    /* WARNING: Switch is manually overridden */
                func_0x00010094ee20(param_1);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                auVar8 = func_0x000100951d60(uVar5);
                func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x48);
                _objc_release(uVar4);
                uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100764614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e240a8))();
                return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
              }
              break;
            case true:
                    /* WARNING: Switch is manually overridden */
              switch(iVar1 == 1) {
              case true:
                func_0x00010094ee20(param_1);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                auVar8 = func_0x000100951d60(uVar5);
                func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x38);
                _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100764db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e24518))();
                return;
                    /* WARNING: Switch is manually overridden */
              }
            }
            break;
          case true:
                    /* WARNING: Switch is manually overridden */
            switch(iVar1 == -0x7fffffd8) {
            case true:
                    /* WARNING: Switch is manually overridden */
              func_0x00010094ee20(param_1);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              auVar8 = func_0x000100951d60(uVar5);
                    /* WARNING: Switch is manually overridden */
              func_0x00010097acc0(uVar4,auVar8._8_8_,auVar8._0_8_,0x18);
              _objc_release(uVar4);
              uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001007656c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e24b88))();
              return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            }
          }
        }
                    /* WARNING: Switch is manually overridden */
        uVar7 = uVar7 + 1;
        uVar3 = uStack_78;
                    /* WARNING: Switch is manually overridden */
        switch(uVar7 < uStack_78) {
        case true:
          goto override_jmp_100763e0c_case_0;
        }
        uVar3 = func_0x00010093e380(uStack_98,auVar8._8_8_,puVar6,puStack_b0,0x10);
        uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar3 == 0) {
        case true:
          goto override_jmp_100763ddc_case_1;
        }
      } while( true );
    case true:
override_jmp_100763ddc_case_1:
      _objc_release(uVar4);
      func_0x00010094ed20(param_1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      func_0x000100946540();
      func_0x00010094ed20(param_1);
      puVar6 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
      func_0x000100972940();
      _objc_release(puVar6);
      _objc_release(uVar5);
      func_0x00010094db80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uRam0000000100e24c08) {
      case 0x100765780:
                    /* WARNING: Switch is manually overridden */
        func_0x00010094ed20(param_1);
        puVar6 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar3 = func_0x000100946540(puVar6);
        func_0x00010094ed20(param_1);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        auVar8 = func_0x000100972940();
        func_0x0001009669e0(param_1,auVar8._8_8_,
                            -((uVar3 & 0xffffffff) + (auVar8._0_8_ & 0xffffffff)));
        _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        _objc_release(puVar6);
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010094db60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO getLinkNameForDylibCmd:]
 * Entry: 0x1007659c4; original ABI: @24@0:8@16
 * Original instructions in modeled body: 88; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007659ec */
/* WARNING: Switch with 1 destination removed at 0x000100765a2c */
/* WARNING: Switch with 1 destination removed at 0x000100765a3c */
/* WARNING: Switch with 1 destination removed at 0x000100765a6c */
/* WARNING: Switch with 1 destination removed at 0x000100765a80 */
/* WARNING: Switch with 1 destination removed at 0x000100765ae8 */
/* WARNING: Switch with 1 destination removed at 0x000100765b10 */
/* WARNING: Switch with 1 destination removed at 0x000100765b1c */
/* WARNING: Switch with 1 destination removed at 0x000100765b40 */
/* WARNING: Switch with 1 destination removed at 0x000100765b6c */

void Recovered_YYYArchO_m03306(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar4 = _objc_retain(param_3);
  lVar5 = func_0x0001009420c0();
  iVar1 = *(int *)(lVar5 + 4);
  lVar5 = func_0x0001009420c0(uVar4);
                    /* WARNING: Switch is manually overridden */
  iVar2 = *(int *)(lVar5 + 8);
                    /* WARNING: Switch is manually overridden */
  lVar5 = func_0x000100951d60(uVar4);
  lVar6 = func_0x0001009420c0(uVar4);
                    /* WARNING: Switch is manually overridden */
  uVar3 = *(uint *)(lVar6 + 8);
                    /* WARNING: Switch is manually overridden */
  func_0x00010094ee20(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  lVar5 = func_0x00010097acc0(auVar8._0_8_,auVar8._8_8_,lVar5 + (ulong)uVar3,iVar1 - iVar2);
  _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar5 != 0) {
  case false:
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    auVar8 = _objc_alloc(uRam0000000100c71448);
    uVar7 = func_0x00010094a1e0(auVar8._0_8_,auVar8._8_8_,lVar5);
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(uVar4);
  _objc_autoreleaseReturnValue(uVar7);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:]
 * Entry: 0x100765b88; original ABI: B56@0:8@16@24@32@40^@48
 * Original instructions in modeled body: 592; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100765be0 */
/* WARNING: Switch with 1 destination removed at 0x000100765bec */
/* WARNING: Switch with 1 destination removed at 0x000100765c08 */
/* WARNING: Switch with 1 destination removed at 0x000100765c3c */
/* WARNING: Switch with 1 destination removed at 0x000100766140 */
/* WARNING: Switch with 1 destination removed at 0x000100766170 */
/* WARNING: Switch with 1 destination removed at 0x000100766298 */
/* WARNING: Switch with 1 destination removed at 0x000100766968 */
/* WARNING: Switch with 1 destination removed at 0x000100766d00 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYArchO_m03307
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined8 uStack_80;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95e54 == 0) {
  case true:
    cRam0000000100e23c40 = bRam0000000100e23c10 + (bRam0000000100e23c10 & 0x13) * -2 + '\x13';
    uRam0000000100e23c41 =
         CONCAT17((byte)((ulong)uRam0000000100e23c11 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c580 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e23c11 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c580 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e23c11 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c580 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e23c11 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c580 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e23c11 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c580 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e23c11 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c580 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e23c11 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c580 >> 8),
                                                  (byte)uRam0000000100e23c11 ^ (byte)_UNK_10099c580)
                                                  ))))));
    cRam0000000100e23c49 = bRam0000000100e23c19 + (bRam0000000100e23c19 & 0x4a) * -2 + 'J';
    bRam0000000100e23c4a = bRam0000000100e23c1a ^ 0xf5;
    bRam0000000100e23c4b = bRam0000000100e23c1b ^ 0x4c;
    bRam0000000100e23c4c = bRam0000000100e23c1c ^ 0x6f;
    bRam0000000100e23c4d = bRam0000000100e23c1d ^ 0x19;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e23c4e = bRam0000000100e23c1e ^ 0x8c;
    bRam0000000100e23c4f = bRam0000000100e23c1f ^ 0x48;
    cRam0000000100e23c50 = bRam0000000100e23c20 + (bRam0000000100e23c20 & 0x32) * -2 + -0x4e;
    bRam0000000100e23c51 = bRam0000000100e23c21 ^ 0x46;
    bRam0000000100e23c52 = bRam0000000100e23c22 ^ 0x90;
    bRam0000000100e23c53 = bRam0000000100e23c23 ^ 1;
    bRam0000000100e23c54 = bRam0000000100e23c24 ^ 0xf;
    bRam0000000100e23c55 = bRam0000000100e23c25 ^ 7;
    bRam0000000100e23c56 = bRam0000000100e23c26 ^ 0xa8;
    cRam0000000100e23c57 = bRam0000000100e23c27 + (bRam0000000100e23c27 & 0x57) * -2 + 'W';
    bRam0000000100e23c58 = bRam0000000100e23c28 ^ 0xbb;
    cRam0000000100e23c59 = bRam0000000100e23c29 + (bRam0000000100e23c29 & 0x76) * -2 + 'v';
    uRam0000000100e23c5a =
         CONCAT17((byte)((ulong)uRam0000000100e23c2a >> 0x38) ^
                  (byte)((ulong)_UNK_10099c588 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e23c2a >> 0x30) ^
                           (byte)((ulong)_UNK_10099c588 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e23c2a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c588 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e23c2a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c588 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e23c2a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c588 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e23c2a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c588 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e23c2a >> 8) ^
                                                  (byte)((ulong)_UNK_10099c588 >> 8),
                                                  (byte)uRam0000000100e23c2a ^ (byte)_UNK_10099c588)
                                                  ))))));
    cRam0000000100e23c62 = bRam0000000100e23c32 + (bRam0000000100e23c32 & 0x2c) * -2 + -0x54;
    bRam0000000100e23c63 = bRam0000000100e23c33 ^ 0xee;
    bRam0000000100e23c64 = bRam0000000100e23c34 ^ 0x78;
    bRam0000000100e23c65 = bRam0000000100e23c35 ^ 0x18;
    bRam0000000100e23c66 = bRam0000000100e23c36 ^ 0xec;
    bRam0000000100e23c67 = bRam0000000100e23c37 ^ 0x91;
    bRam0000000100e23c68 = bRam0000000100e23c38 ^ 0xee;
    bRam0000000100e23c69 = bRam0000000100e23c39 ^ 0x67;
    cRam0000000100e23c6a = bRam0000000100e23c3a + (bRam0000000100e23c3a & 0x16) * -2 + -0x6a;
    bRam0000000100e23c6b = bRam0000000100e23c3b ^ 0x98;
    bRam0000000100e23c6c = bRam0000000100e23c3c ^ 0xc6;
    bRam0000000100e23c6d = bRam0000000100e23c3d ^ 0xed;
    uRam0000000100e23c98 =
         CONCAT17((byte)((ulong)uRam0000000100e23c88 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c590 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e23c88 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c590 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e23c88 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c590 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e23c88 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c590 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e23c88 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c590 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e23c88 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c590 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e23c88 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c590 >> 8),
                                                  (byte)uRam0000000100e23c88 ^ (byte)_UNK_10099c590)
                                                  ))))));
    uRam0000000100e23ca0 = uRam0000000100e23c90 ^ 0xf5bf;
    bRam0000000100e23c7b = bRam0000000100e23c6e ^ 0x56;
    bRam0000000100e23c7c = bRam0000000100e23c6f ^ 0xf;
    bRam0000000100e23c7d = bRam0000000100e23c70 ^ 0x3e;
    cRam0000000100e23c7e = bRam0000000100e23c71 + (bRam0000000100e23c71 & 0x50) * -2 + -0x30;
    bRam0000000100e23c7f = ~((bRam0000000100e23c72 | 0x59) & (bRam0000000100e23c72 ^ 0xff | 0xa6));
    bRam0000000100e23c80 = bRam0000000100e23c73 ^ 0xd0;
    bRam0000000100e23c81 = bRam0000000100e23c74 ^ 0x85;
    bRam0000000100e23c82 = bRam0000000100e23c75 ^ 0x84;
    cRam0000000100e23c83 = bRam0000000100e23c76 + (bRam0000000100e23c76 & 0x42) * -2 + 'B';
    cRam0000000100e23c84 = bRam0000000100e23c77 + (bRam0000000100e23c77 & 0x65) * -2 + -0x1b;
    bRam0000000100e23c85 = ~((bRam0000000100e23c78 | 0xd5) & (bRam0000000100e23c78 ^ 0xff | 0x2a));
    bRam0000000100e23c86 = bRam0000000100e23c79 ^ 0x19;
    bRam0000000100e23c87 = bRam0000000100e23c7a ^ 0xda;
    bRam0000000100e23b50 = bRam0000000100e23b30 ^ 0x1b;
    bRam0000000100e23b51 = bRam0000000100e23b31 ^ 0x72;
    bRam0000000100e23b52 = bRam0000000100e23b32 ^ 0x8b;
    bRam0000000100e23b53 = bRam0000000100e23b33 ^ 0xa5;
    bRam0000000100e23b54 = bRam0000000100e23b34 ^ 0x14;
    bRam0000000100e23b55 = bRam0000000100e23b35 ^ 0x82;
    cRam0000000100e23b56 = bRam0000000100e23b36 + (bRam0000000100e23b36 & 0x35) * -2 + -0x4b;
    bRam0000000100e23b57 = bRam0000000100e23b37 ^ 0x77;
    bRam0000000100e23b58 = bRam0000000100e23b38 ^ 0xf9;
    bRam0000000100e23b59 = bRam0000000100e23b39 ^ 0x23;
    cRam0000000100e23b5a = bRam0000000100e23b3a + (bRam0000000100e23b3a & 0xe1) * -2 + 'a';
    cRam0000000100e23b5b = bRam0000000100e23b3b + (bRam0000000100e23b3b & 0xf1) * -2 + -0xf;
    bRam0000000100e23b5c = bRam0000000100e23b3c ^ 0xb8;
    cRam0000000100e23b5d = bRam0000000100e23b3d + (bRam0000000100e23b3d & 0xbb) * -2 + ';';
    uRam0000000100e23b5e =
         CONCAT17((byte)((ulong)uRam0000000100e23b3e >> 0x38) ^
                  (byte)((ulong)_UNK_10099c598 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e23b3e >> 0x30) ^
                           (byte)((ulong)_UNK_10099c598 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e23b3e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c598 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e23b3e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c598 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e23b3e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c598 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e23b3e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c598 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e23b3e >> 8) ^
                                                  (byte)((ulong)_UNK_10099c598 >> 8),
                                                  (byte)uRam0000000100e23b3e ^ (byte)_UNK_10099c598)
                                                  ))))));
    uRam0000000100e23ba0 = uRam0000000100e23b70 ^ 0x2fbc;
    uRam0000000100e23ba2 = uRam0000000100e23b72 ^ 0xfbfd;
    uRam0000000100e23ba4 = uRam0000000100e23b74 ^ 0x2ecb;
    uRam0000000100e23ba6 =
         ~((uRam0000000100e23b76 | 0x5127) & (uRam0000000100e23b76 ^ 0xffff | 0xaed8));
    uRam0000000100e23ba8 = uRam0000000100e23b78 ^ 0x1ef5;
    uRam0000000100e23baa = uRam0000000100e23b7a ^ 0x1345;
    uRam0000000100e23bac = uRam0000000100e23b7c ^ 0x1db0;
    sRam0000000100e23bae = uRam0000000100e23b7e + (uRam0000000100e23b7e & 0x7812) * -2 + -0x7ee;
    uRam0000000100e23bb0 = uRam0000000100e23b80 ^ 0x2b3b;
    uRam0000000100e23bb2 = uRam0000000100e23b82 ^ 0x237b;
                    /* WARNING: Switch is manually overridden */
    sRam0000000100e23bb4 = uRam0000000100e23b84 + (uRam0000000100e23b84 & 0x6d9c) * -2 + -0x1264;
    uRam0000000100e23bb6 =
         CONCAT17((byte)((ulong)uRam0000000100e23b86 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c5a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e23b86 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c5a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e23b86 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c5a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e23b86 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c5a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e23b86 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c5a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e23b86 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c5a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e23b86 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c5a0 >> 8),
                                                  (byte)uRam0000000100e23b86 ^ (byte)_UNK_10099c5a0)
                                                  ))))));
    sRam0000000100e23bbe = uRam0000000100e23b8e + (uRam0000000100e23b8e & 0x3790) * -2 + 0x3790;
    uRam0000000100e23bc0 = uRam0000000100e23b90 ^ 0xf724;
    uRam0000000100e23bc2 = uRam0000000100e23b92 ^ 0xd969;
    bRam0000000100e23bf0 = bRam0000000100e23bd0 ^ 0x88;
    cRam0000000100e23bf1 = bRam0000000100e23bd1 + (bRam0000000100e23bd1 & 0x7c) * -2 + '|';
    bRam0000000100e23bf2 = bRam0000000100e23bd2 ^ 0xc1;
    bRam0000000100e23bf3 = bRam0000000100e23bd3 ^ 0x7d;
    bRam0000000100e23bf4 = bRam0000000100e23bd4 ^ 0x2f;
    cRam0000000100e23bf5 = bRam0000000100e23bd5 + (bRam0000000100e23bd5 & 0x1a) * -2 + '\x1a';
    bRam0000000100e23bf6 = bRam0000000100e23bd6 ^ 0x78;
    bRam0000000100e23bf7 = bRam0000000100e23bd7 ^ 0x95;
    bRam0000000100e23bf8 = bRam0000000100e23bd8 ^ 99;
    bRam0000000100e23bf9 = bRam0000000100e23bd9 ^ 0xa9;
    bRam0000000100e23bfa = bRam0000000100e23bda ^ 0x43;
    bRam0000000100e23bfb = bRam0000000100e23bdb ^ 0x27;
    cRam0000000100e23bfc = bRam0000000100e23bdc + (bRam0000000100e23bdc & 0x53) * -2 + -0x2d;
    bRam0000000100e23bfd = bRam0000000100e23bdd ^ 0x37;
    bRam0000000100e23bfe = bRam0000000100e23bde ^ 0xcc;
    cRam0000000100e23bff = bRam0000000100e23bdf + (bRam0000000100e23bdf & 4) * -2 + '\x04';
    bRam0000000100e23c00 = bRam0000000100e23be0 ^ 0x14;
    bRam0000000100e23c01 = bRam0000000100e23be1 ^ 0xf9;
    bRam0000000100e23c02 = bRam0000000100e23be2 ^ 0xb9;
    bRam0000000100e23bca = bRam0000000100e23bc4 ^ 0x16;
    cRam0000000100e23bcb = bRam0000000100e23bc5 + (bRam0000000100e23bc5 & 0x25) * -2 + '%';
    bRam0000000100e23bcc = bRam0000000100e23bc6 ^ 0xe9;
    bRam0000000100e23bcd = bRam0000000100e23bc7 ^ 0x10;
    bRam0000000100e23bce = bRam0000000100e23bc8 ^ 0x1c;
    bRam0000000100e23bcf = bRam0000000100e23bc9 ^ 0x77;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95e54 = 1;
  puStack_70 = auStack_a0;
  puStack_90 = auStack_b0;
  uStack_80 = param_7;
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010093fe00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100951cc0(auVar3._0_8_,auVar3._8_8_,0x100e23d30);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  auVar3 = func_0x00010093c700(uRam0000000100c71448);
  uVar2 = func_0x00010094ba40(uVar1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001007662a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100e24de8))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO loadCommands]
 * Entry: 0x100767520; original ABI: @16@0:8
 * Original instructions in modeled body: 127; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100767548 */
/* WARNING: Switch with 1 destination removed at 0x00010076755c */
/* WARNING: Switch with 1 destination removed at 0x000100767588 */
/* WARNING: Switch with 1 destination removed at 0x0001007675b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007675c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007675e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007675f4 */
/* WARNING: Switch with 1 destination removed at 0x000100767610 */
/* WARNING: Switch with 1 destination removed at 0x00010076761c */
/* WARNING: Switch with 1 destination removed at 0x0001007676e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007676f4 */
/* WARNING: Switch with 1 destination removed at 0x000100767748 */
/* WARNING: Switch with 1 destination removed at 0x000100767754 */
/* WARNING: Switch with 1 destination removed at 0x000100767760 */
/* WARNING: Switch with 1 destination removed at 0x00010076777c */
/* WARNING: Switch with 1 destination removed at 0x000100767788 */
/* WARNING: Switch with 1 destination removed at 0x000100767848 */

void Recovered_YYYArchO_m03308(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR____NSArray0___100afc6c0;
  func_0x00010094ed20(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  iVar2 = func_0x000100951140();
  _objc_release(uVar5);
  func_0x00010094ed20(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = func_0x00010094de00();
  _objc_release(uVar5);
  uVar5 = func_0x000100950b20(*(undefined8 *)puVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  iVar7 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(0 < iVar2) {
  case false:
override_jmp_10076757c_case_1:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_autoreleaseReturnValue(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    return;
  }
  do {
                    /* WARNING: Switch is manually overridden */
    func_0x00010094ee20(param_1);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    lVar4 = func_0x00010097acc0(auVar8._0_8_,auVar8._8_8_,uVar6,8);
    _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar3 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010076762c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e25328))();
      return;
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    iVar7 = iVar7 + 1;
                    /* WARNING: Switch is manually overridden */
    switch(iVar7 < iVar2) {
    case false:
      goto override_jmp_10076757c_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO getDylibCommands]
 * Entry: 0x10076784c; original ABI: @16@0:8
 * Original instructions in modeled body: 252; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007678b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007678d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007678f4 */
/* WARNING: Switch with 1 destination removed at 0x000100767910 */
/* WARNING: Switch with 1 destination removed at 0x00010076792c */
/* WARNING: Switch with 1 destination removed at 0x000100767990 */
/* WARNING: Switch with 1 destination removed at 0x0001007679bc */
/* WARNING: Switch with 1 destination removed at 0x0001007679c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007679f8 */
/* WARNING: Switch with 1 destination removed at 0x000100767a04 */
/* WARNING: Switch with 1 destination removed at 0x000100767a14 */
/* WARNING: Switch with 1 destination removed at 0x000100767a34 */
/* WARNING: Switch with 1 destination removed at 0x000100767a5c */
/* WARNING: Switch with 1 destination removed at 0x000100767a94 */
/* WARNING: Switch with 1 destination removed at 0x000100767aa4 */
/* WARNING: Switch with 1 destination removed at 0x000100767ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100767ae0 */
/* WARNING: Switch with 1 destination removed at 0x000100767af0 */
/* WARNING: Switch with 1 destination removed at 0x000100767c54 */
/* WARNING: Switch with 1 destination removed at 0x000100767c64 */
/* WARNING: Switch with 1 destination removed at 0x000100767c70 */
/* WARNING: Switch with 1 destination removed at 0x000100767c94 */
/* WARNING: Switch with 1 destination removed at 0x000100767ca0 */
/* WARNING: Switch with 1 destination removed at 0x000100767cd8 */
/* WARNING: Switch with 1 destination removed at 0x000100767ce4 */
/* WARNING: Switch with 1 destination removed at 0x000100767d0c */
/* WARNING: Switch with 1 destination removed at 0x000100767d28 */
/* WARNING: Switch with 1 destination removed at 0x000100767d34 */
/* WARNING: Switch with 1 destination removed at 0x000100767d40 */
/* WARNING: Switch with 1 destination removed at 0x000100767d6c */
/* WARNING: Switch with 1 destination removed at 0x000100767e00 */

void Recovered_YYYArchO_m03309(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_100afc6e8;
  uVar1 = func_0x000100950b20(*(undefined8 *)PTR____NSArray0___100afc6c0);
  func_0x00010094db60(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  do {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    auVar8 = _objc_retain(uVar2);
    uVar4 = auVar8._0_8_;
    uVar5 = func_0x00010093e380(uVar4,auVar8._8_8_,&uStack_130,auStack_f0,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar6 = *plStack_120;
      uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_1007678f4_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_120 == lVar6) * 8 + 0x100e253c8)) {
        case 0x1007679f0:
          _objc_enumerationMutation(uVar4);
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar2 = *(undefined8 *)(lStack_128 + uVar7 * 8);
        piVar3 = (int *)func_0x00010094db00(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*piVar3 == 0xc) {
        case false:
          piVar3 = (int *)func_0x00010094db00(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(*piVar3 == -0x7fffffe8) {
          case false:
            auVar8 = func_0x00010094db00(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            switch(*auVar8._0_8_ == -0x7fffffdd) {
            case true:
              goto override_jmp_100767a50_case_1;
            }
            break;
          case true:
            goto override_jmp_100767a50_case_1;
          }
          break;
        case true:
override_jmp_100767a50_case_1:
          func_0x00010094ee20(param_1);
          uVar1 = _objc_retainAutoreleasedReturnValue();
          auVar8 = func_0x000100951d60(uVar2);
          func_0x00010097acc0(uVar1,auVar8._8_8_,auVar8._0_8_,0x18);
                    /* WARNING: Switch is manually overridden */
          _objc_release(uVar1);
          uVar5 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100767b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e254e8))();
          return;
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        uVar7 = uVar7 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar7 < uVar5) {
        case true:
          goto override_jmp_1007678f4_case_0;
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar5 = func_0x00010093e380(uVar4,auVar8._8_8_,&uStack_130,auStack_f0,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar5 == 0) {
        case true:
          goto override_jmp_1007678cc_case_1;
        }
      } while( true );
    case true:
override_jmp_1007678cc_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar4);
      _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_70) {
        return;
      }
      ___stack_chk_fail();
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      auVar8 = _objc_retain(uVar2);
      func_0x00010093e380(auVar8._0_8_,auVar8._8_8_,&uStack_130,auStack_f0,0x10);
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO getRPathCommands]
 * Entry: 0x100767e04; original ABI: @16@0:8
 * Original instructions in modeled body: 220; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100767e48 */
/* WARNING: Switch with 1 destination removed at 0x000100767e74 */
/* WARNING: Switch with 1 destination removed at 0x000100767e84 */
/* WARNING: Switch with 1 destination removed at 0x000100767e94 */
/* WARNING: Switch with 1 destination removed at 0x000100767eec */
/* WARNING: Switch with 1 destination removed at 0x000100767f20 */
/* WARNING: Switch with 1 destination removed at 0x000100767f30 */
/* WARNING: Switch with 1 destination removed at 0x0001007680dc */
/* WARNING: Switch with 1 destination removed at 0x000100768108 */
/* WARNING: Switch with 1 destination removed at 0x000100768124 */
/* WARNING: Switch with 1 destination removed at 0x000100768130 */
/* WARNING: Switch with 1 destination removed at 0x000100768150 */
/* WARNING: Switch with 1 destination removed at 0x0001007681a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007681ac */
/* WARNING: Switch with 1 destination removed at 0x0001007681fc */
/* WARNING: Switch with 1 destination removed at 0x00010076828c */
/* WARNING: Switch with 1 destination removed at 0x00010076829c */
/* WARNING: Switch with 1 destination removed at 0x0001007682c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007682f8 */
/* WARNING: Switch with 1 destination removed at 0x000100768304 */
/* WARNING: Switch with 1 destination removed at 0x000100768310 */
/* WARNING: Switch with 1 destination removed at 0x000100768338 */
/* WARNING: Switch with 1 destination removed at 0x000100768364 */
/* WARNING: Switch with 1 destination removed at 0x000100768374 */
/* WARNING: Switch with 1 destination removed at 0x0001007683a0 */
/* WARNING: Switch with 1 destination removed at 0x00010076840c */

void Recovered_YYYArchO_m03310(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_150 [128];
  undefined8 uStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100950b20(*(undefined8 *)PTR____NSArray0___100afc6c0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    func_0x00010094db60(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    plStack_c0 = (long *)0x0;
    auVar7 = _objc_retain(uVar3);
    uVar3 = auVar7._0_8_;
    uVar2 = func_0x00010093e380(uVar3,auVar7._8_8_,&uStack_d0,auStack_150,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar2 == 0) {
    case false:
      lVar4 = *plStack_c0;
                    /* WARNING: Switch is manually overridden */
      uVar5 = 0;
      lStack_88 = lVar4;
      uStack_80 = uVar1;
                    /* WARNING: Switch is manually overridden */
override_jmp_100767f30_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_c0 == lVar4) * 8 + 0x100e256d8)) {
        case 0x100768100:
                    /* WARNING: Switch is manually overridden */
          _objc_enumerationMutation(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        uVar6 = *(undefined8 *)(lStack_c8 + uVar5 * 8);
        auVar7 = func_0x00010094db00(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*auVar7._0_8_ == -0x7fffffe4) {
        case true:
          func_0x00010094ee20(param_1);
          uVar1 = _objc_retainAutoreleasedReturnValue();
          uStack_70 = uVar6;
          auVar7 = func_0x000100951d60(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          func_0x00010097acc0(uVar1,auVar7._8_8_,auVar7._0_8_,0x18);
          _objc_release(uVar1);
          uVar2 = func_0x000100971b80(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010076820c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100e25768))();
          return;
        }
                    /* WARNING: Switch is manually overridden */
        uVar5 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar5 < uVar2) {
        case true:
          goto override_jmp_100767f30_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        uVar2 = func_0x00010093e380(uVar3,auVar7._8_8_,&uStack_d0,auStack_150,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar2 == 0) {
        case true:
          goto override_jmp_100767f08_case_1;
        }
      } while( true );
    case true:
override_jmp_100767f08_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar3);
      param_1 = _objc_retain(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar3);
      _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(param_1);
        return;
      }
      ___stack_chk_fail();
      func_0x00010094db60(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO shouldSwap]
 * Entry: 0x100768410; original ABI: B16@0:8
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010076842c */
/* WARNING: Switch with 1 destination removed at 0x000100768438 */
/* WARNING: Switch with 1 destination removed at 0x000100768444 */
/* WARNING: Switch with 1 destination removed at 0x0001007684a8 */

undefined8 Recovered_YYYArchO_m03311(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010094ed20(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x000100971b80();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO isExecute]
 * Entry: 0x1007684ac; original ABI: B16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007684c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007684d4 */
/* WARNING: Switch with 1 destination removed at 0x00010076853c */

bool Recovered_YYYArchO_m03312(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  func_0x00010094ed20(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = func_0x000100943be0();
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return iVar1 == 2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO machoFileHandle]
 * Entry: 0x100768540; original ABI: @16@0:8
 * Original instructions in modeled body: 21; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768558 */
/* WARNING: Switch with 1 destination removed at 0x00010076856c */
/* WARNING: Switch with 1 destination removed at 0x00010076859c */

void Recovered_YYYArchO_m03313(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_loadWeakRetained(param_1 + iRam0000000100c792a8);
  _objc_autoreleaseReturnValue();
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setMachoFileHandle:]
 * Entry: 0x1007685a0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007685c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007685cc */
/* WARNING: Switch with 1 destination removed at 0x0001007685dc */
/* WARNING: Switch with 1 destination removed at 0x000100768618 */

void Recovered_YYYArchO_m03314(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + iRam0000000100c792a8,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO machHeader]
 * Entry: 0x10076861c; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768624 */
/* WARNING: Switch with 1 destination removed at 0x00010076863c */

undefined8 Recovered_YYYArchO_m03315(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792ac);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setMachHeader:]
 * Entry: 0x100768644; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768658 */
/* WARNING: Switch with 1 destination removed at 0x000100768664 */

void Recovered_YYYArchO_m03316(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c792ac,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO loadCommandsFreeSpace]
 * Entry: 0x100768670; original ABI: q16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768678 */
/* WARNING: Switch with 1 destination removed at 0x00010076868c */

undefined8 Recovered_YYYArchO_m03317(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792a4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setLoadCommandsFreeSpace:]
 * Entry: 0x100768698; original ABI: v24@0:8q16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007686a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007686b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007686c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007686d0 */

void Recovered_YYYArchO_m03318(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + iRam0000000100c792a4) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO linkEditSegment]
 * Entry: 0x1007686e8; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007686f8 */
/* WARNING: Switch with 1 destination removed at 0x000100768704 */
/* WARNING: Switch with 1 destination removed at 0x000100768714 */

undefined8 Recovered_YYYArchO_m03319(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792b0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setLinkEditSegment:]
 * Entry: 0x10076871c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768750 */
/* WARNING: Switch with 1 destination removed at 0x000100768784 */

void Recovered_YYYArchO_m03320(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c792b0;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO codeSignSegment]
 * Entry: 0x100768788; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768790 */
/* WARNING: Switch with 1 destination removed at 0x0001007687a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007687b0 */

undefined8 Recovered_YYYArchO_m03321(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792b4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setCodeSignSegment:]
 * Entry: 0x1007687bc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007687d4 */

void Recovered_YYYArchO_m03322(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c792b4;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO infoPlistData]
 * Entry: 0x100768800; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768810 */
/* WARNING: Switch with 1 destination removed at 0x00010076881c */
/* WARNING: Switch with 1 destination removed at 0x000100768828 */

undefined8 Recovered_YYYArchO_m03323(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792b8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setInfoPlistData:]
 * Entry: 0x100768834; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768858 */
/* WARNING: Switch with 1 destination removed at 0x000100768868 */
/* WARNING: Switch with 1 destination removed at 0x000100768898 */
/* WARNING: Switch with 1 destination removed at 0x0001007688a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007688d4 */

void Recovered_YYYArchO_m03324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c792b8;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO infoPlist]
 * Entry: 0x1007688d8; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007688e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007688f4 */

undefined8 Recovered_YYYArchO_m03325(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792bc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setInfoPlist:]
 * Entry: 0x100768900; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768918 */
/* WARNING: Switch with 1 destination removed at 0x000100768930 */
/* WARNING: Switch with 1 destination removed at 0x000100768954 */

void Recovered_YYYArchO_m03326(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c792bc,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO length]
 * Entry: 0x100768964; original ABI: I16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768974 */
/* WARNING: Switch with 1 destination removed at 0x000100768980 */
/* WARNING: Switch with 1 destination removed at 0x00010076898c */

undefined4 Recovered_YYYArchO_m03327(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + iRam0000000100c792c0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setLength:]
 * Entry: 0x100768998; original ABI: v20@0:8I16
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007689a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007689ac */

void Recovered_YYYArchO_m03328(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_1 + iRam0000000100c792c0) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO codeLength]
 * Entry: 0x1007689c0; original ABI: I16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007689c8 */

undefined4 Recovered_YYYArchO_m03329(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + iRam0000000100c792c4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setCodeLength:]
 * Entry: 0x1007689dc; original ABI: v20@0:8I16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007689ec */
/* WARNING: Switch with 1 destination removed at 0x0001007689f8 */
/* WARNING: Switch with 1 destination removed at 0x000100768a08 */

void Recovered_YYYArchO_m03330(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_1 + iRam0000000100c792c4) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO execSegLimit]
 * Entry: 0x100768a10; original ABI: Q16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768a18 */
/* WARNING: Switch with 1 destination removed at 0x000100768a2c */

undefined8 Recovered_YYYArchO_m03331(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792c8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setExecSegLimit:]
 * Entry: 0x100768a38; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768a40 */
/* WARNING: Switch with 1 destination removed at 0x000100768a54 */
/* WARNING: Switch with 1 destination removed at 0x000100768a68 */
/* WARNING: Switch with 1 destination removed at 0x000100768a74 */

void Recovered_YYYArchO_m03332(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + iRam0000000100c792c8) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO execSegFlags]
 * Entry: 0x100768a7c; original ABI: Q16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768a8c */
/* WARNING: Switch with 1 destination removed at 0x000100768a98 */
/* WARNING: Switch with 1 destination removed at 0x000100768aa8 */

undefined8 Recovered_YYYArchO_m03333(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792cc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setExecSegFlags:]
 * Entry: 0x100768ab0; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768ab8 */
/* WARNING: Switch with 1 destination removed at 0x000100768ad0 */
/* WARNING: Switch with 1 destination removed at 0x000100768adc */

void Recovered_YYYArchO_m03334(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + iRam0000000100c792cc) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO isEncryption]
 * Entry: 0x100768af4; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768b04 */
/* WARNING: Switch with 1 destination removed at 0x000100768b10 */
/* WARNING: Switch with 1 destination removed at 0x000100768b1c */

undefined1 Recovered_YYYArchO_m03335(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + iRam0000000100c792d0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setIsEncryption:]
 * Entry: 0x100768b28; original ABI: v20@0:8B16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768b30 */
/* WARNING: Switch with 1 destination removed at 0x000100768b3c */
/* WARNING: Switch with 1 destination removed at 0x000100768b50 */
/* WARNING: Switch with 1 destination removed at 0x000100768b64 */

void Recovered_YYYArchO_m03336(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c792d0) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO defaultEntitlements]
 * Entry: 0x100768b6c; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768b7c */

undefined8 Recovered_YYYArchO_m03337(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c792d4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO setDefaultEntitlements:]
 * Entry: 0x100768b88; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768ba0 */

void Recovered_YYYArchO_m03338(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c792d4;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYArchO .cxx_destruct]
 * Entry: 0x100768bcc; original ABI: v16@0:8
 * Original instructions in modeled body: 57; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100768c14 */
/* WARNING: Switch with 1 destination removed at 0x000100768c20 */
/* WARNING: Switch with 1 destination removed at 0x000100768d14 */

void Recovered_YYYArchO_m03339(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c792d4,0);
  _objc_storeStrong(param_1 + iRam0000000100c792bc,0);
  _objc_storeStrong(param_1 + iRam0000000100c792b8,0);
  _objc_storeStrong(param_1 + iRam0000000100c792b4,0);
  _objc_storeStrong(param_1 + iRam0000000100c792b0,0);
  _objc_storeStrong(param_1 + iRam0000000100c792ac,0);
  _objc_destroyWeak(param_1 + iRam0000000100c792a8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



