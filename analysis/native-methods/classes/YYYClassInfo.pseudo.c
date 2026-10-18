/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo initWithClass:]
 * Entry: 0x10003f1d0; original ABI: @24@0:8#16
 * Original instructions in modeled body: 70; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003f1fc */
/* WARNING: Switch with 1 destination removed at 0x00010003f224 */
/* WARNING: Switch with 1 destination removed at 0x00010003f250 */
/* WARNING: Switch with 1 destination removed at 0x00010003f25c */
/* WARNING: Switch with 1 destination removed at 0x00010003f298 */
/* WARNING: Switch with 1 destination removed at 0x00010003f378 */
/* WARNING: Switch with 1 destination removed at 0x00010003f394 */
/* WARNING: Switch with 1 destination removed at 0x00010003f3d4 */

undefined8 Recovered_YYYClassInfo_m00259(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
    return 0;
  case true:
    uStack_48 = uRam0000000100c738a8;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_init_100c60da0);
    lVar1 = _objc_retain();
    _objc_release(lVar1);
    *(long *)(lVar1 + 0x10) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar2 = _class_getSuperclass(param_3);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    uVar3 = _class_isMetaClass(param_3);
    *(char *)(lVar1 + 9) = (char)uVar3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010003f2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100cb52f8))();
    return uVar2;
                    /* WARNING: Switch is manually overridden */
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo _update]
 * Entry: 0x10003f454; original ABI: v16@0:8
 * Original instructions in modeled body: 511; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003f48c */
/* WARNING: Switch with 1 destination removed at 0x00010003f498 */
/* WARNING: Switch with 1 destination removed at 0x00010003f4b4 */
/* WARNING: Switch with 1 destination removed at 0x00010003f514 */
/* WARNING: Switch with 1 destination removed at 0x00010003f574 */
/* WARNING: Switch with 1 destination removed at 0x00010003f690 */
/* WARNING: Switch with 1 destination removed at 0x00010003f6d0 */
/* WARNING: Switch with 1 destination removed at 0x00010003f708 */
/* WARNING: Switch with 1 destination removed at 0x00010003f800 */
/* WARNING: Switch with 1 destination removed at 0x00010003f850 */
/* WARNING: Switch with 1 destination removed at 0x00010003f85c */
/* WARNING: Switch with 1 destination removed at 0x00010003f87c */
/* WARNING: Switch with 1 destination removed at 0x00010003f88c */
/* WARNING: Switch with 1 destination removed at 0x00010003f8b8 */
/* WARNING: Switch with 1 destination removed at 0x00010003f8e4 */
/* WARNING: Switch with 1 destination removed at 0x00010003f8f0 */
/* WARNING: Switch with 1 destination removed at 0x00010003f938 */
/* WARNING: Switch with 1 destination removed at 0x00010003f97c */
/* WARNING: Switch with 1 destination removed at 0x00010003f994 */
/* WARNING: Switch with 1 destination removed at 0x00010003f9bc */
/* WARNING: Switch with 1 destination removed at 0x00010003f9e8 */
/* WARNING: Switch with 1 destination removed at 0x00010003f9f0 */
/* WARNING: Switch with 1 destination removed at 0x00010003f9fc */
/* WARNING: Switch with 1 destination removed at 0x00010003fa08 */
/* WARNING: Switch with 1 destination removed at 0x00010003fa24 */
/* WARNING: Switch with 1 destination removed at 0x00010003fa2c */
/* WARNING: Switch with 1 destination removed at 0x00010003fa34 */
/* WARNING: Switch with 1 destination removed at 0x00010003fa68 */
/* WARNING: Switch with 1 destination removed at 0x00010003faa4 */
/* WARNING: Switch with 1 destination removed at 0x00010003fab0 */
/* WARNING: Switch with 1 destination removed at 0x00010003fabc */
/* WARNING: Switch with 1 destination removed at 0x00010003fad8 */
/* WARNING: Switch with 1 destination removed at 0x00010003fafc */
/* WARNING: Switch with 1 destination removed at 0x00010003fb08 */
/* WARNING: Switch with 1 destination removed at 0x00010003fb5c */
/* WARNING: Switch with 1 destination removed at 0x00010003fb84 */
/* WARNING: Switch with 1 destination removed at 0x00010003fb90 */
/* WARNING: Switch with 1 destination removed at 0x00010003fba4 */
/* WARNING: Switch with 1 destination removed at 0x00010003fbd0 */
/* WARNING: Switch with 1 destination removed at 0x00010003fbe0 */
/* WARNING: Switch with 1 destination removed at 0x00010003fc18 */
/* WARNING: Switch with 1 destination removed at 0x00010003fc3c */
/* WARNING: Switch with 1 destination removed at 0x00010003fc48 */
/* WARNING: Switch with 1 destination removed at 0x00010003fc54 */
/* WARNING: Switch with 1 destination removed at 0x00010003fc6c */
/* WARNING: Switch with 1 destination removed at 0x00010003fc9c */
/* WARNING: Switch with 1 destination removed at 0x00010003fcd8 */
/* WARNING: Switch with 1 destination removed at 0x00010003fce4 */
/* WARNING: Switch with 1 destination removed at 0x00010003fd0c */
/* WARNING: Switch with 1 destination removed at 0x00010003fd18 */
/* WARNING: Switch with 1 destination removed at 0x00010003fd24 */
/* WARNING: Switch with 1 destination removed at 0x00010003fd30 */
/* WARNING: Switch with 1 destination removed at 0x00010003fd3c */
/* WARNING: Switch with 1 destination removed at 0x00010003fd48 */
/* WARNING: Switch with 1 destination removed at 0x0001000401f8 */
/* WARNING: Switch with 1 destination removed at 0x000100040214 */
/* WARNING: Switch with 1 destination removed at 0x000100040230 */
/* WARNING: Switch with 1 destination removed at 0x00010004024c */

void Recovered_YYYClassInfo_m00260(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_f0 [16];
  uint auStack_e0 [4];
  uint auStack_d0 [4];
  uint auStack_c0 [4];
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  undefined8 *puStack_98;
  uint *puStack_90;
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  long lStack_70;
  uint *puStack_68;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f58 == 0) {
  case true:
    bRam0000000100cb1e1e = bRam0000000100cb1e10 ^ 0xe8;
    bRam0000000100cb1e1f = bRam0000000100cb1e11 ^ 0x80;
    bRam0000000100cb1e20 = bRam0000000100cb1e12 ^ 0x7c;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb1e21 = bRam0000000100cb1e13 ^ 0x33;
    bRam0000000100cb1e22 = bRam0000000100cb1e14 ^ 0x77;
    bRam0000000100cb1e23 = bRam0000000100cb1e15 ^ 0x4f;
    bRam0000000100cb1e24 = bRam0000000100cb1e16 ^ 0x57;
    bRam0000000100cb1e25 = bRam0000000100cb1e17 ^ 99;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb1e26 = bRam0000000100cb1e18 ^ 0x83;
    bRam0000000100cb1e27 = bRam0000000100cb1e19 ^ 0xfe;
    bRam0000000100cb1e28 = bRam0000000100cb1e1a ^ 0xfd;
    bRam0000000100cb1e29 = bRam0000000100cb1e1b ^ 0xf;
    cRam0000000100cb1e2a = bRam0000000100cb1e1c + (bRam0000000100cb1e1c & 0x7e) * -2 + '~';
    bRam0000000100cb1e2b = bRam0000000100cb1e1d ^ 0xb2;
  }
  iRam0000000100e90f58 = 1;
  puStack_90 = auStack_e0;
  puVar9 = (undefined8 *)(param_1 + 0x30);
  uVar1 = *puVar9;
  *puVar9 = 0;
  _objc_release(uVar1);
  puVar7 = (undefined8 *)(param_1 + 0x38);
  uVar1 = *puVar7;
  *puVar7 = 0;
  _objc_release(uVar1);
  puVar11 = (undefined8 *)(param_1 + 0x48);
  uVar1 = *puVar11;
  *puVar11 = 0;
  _objc_release(uVar1);
  puStack_88 = puVar9;
  uVar1 = func_0x00010093cc80(param_1);
  auStack_c0[0] = 0;
  lVar2 = _class_copyMethodList(uVar1,auStack_c0);
  uStack_b0 = uVar1;
  puStack_a8 = puVar7;
  lStack_a0 = param_1;
  puStack_98 = puVar11;
  puStack_80 = auStack_f0;
  puStack_68 = auStack_d0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar1 = func_0x000100951360(uRam0000000100c71440);
    _objc_storeStrong(puVar7,uVar1);
    uVar12 = 0;
    lStack_70 = lVar2;
    do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uVar12 < auStack_c0[0]) {
      case false:
        goto override_jmp_10003f85c_case_0;
      case true:
        auVar13 = func_0x000100042148(uRam0000000100c715f8);
        uVar3 = func_0x000100949700(auVar13._0_8_,auVar13._8_8_,
                                    *(undefined8 *)(lVar2 + (ulong)uVar12 * 8));
        func_0x00010004214c(uVar3);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar5 != 0) {
        case false:
                    /* WARNING: Switch is manually overridden */
          _objc_release(uVar3);
          uVar12 = (uVar12 & 1) * 2 + (uVar12 ^ 1);
          break;
        case true:
          func_0x000100950c20(uVar3);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          uVar4 = func_0x00010093da20(auVar13._0_8_,auVar13._8_8_,0x100cb1e30);
          _objc_release(auVar13._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010003f778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100cb54a8))();
          return;
        }
      }
    } while( true );
  }
override_jmp_10003f684_case_1:
  puVar10 = puStack_68;
  puVar9 = puStack_88;
  puVar8 = puStack_90;
  puVar7 = puStack_98;
  lVar2 = lStack_a0;
  uVar1 = uStack_b0;
                    /* WARNING: Switch is manually overridden */
  *puStack_68 = 0;
  lVar5 = func_0x000100042150(uVar1,puVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar5 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    lStack_70 = func_0x000100951360(uRam0000000100c71440);
    _objc_storeStrong(puVar7);
    uVar12 = 0;
    lStack_78 = lVar5;
    do {
      lVar2 = lStack_78;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uVar12 < *puVar10) {
      case false:
        goto override_jmp_10003fabc_case_0;
      case true:
        auVar13 = _objc_alloc(uRam0000000100c71600);
        uVar1 = func_0x000100949b80(auVar13._0_8_,auVar13._8_8_,
                                    *(undefined8 *)(lVar2 + (ulong)uVar12 * 8));
        func_0x000100950c20(uVar1);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar2 = lStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar5 != 0) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x000100950c20(uVar1);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          func_0x000100042158(lVar2,auVar13._8_8_,uVar1,auVar13._0_8_);
          _objc_release(auVar13._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar1);
        uVar12 = uVar12 + 1;
        puVar10 = puStack_68;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    } while( true );
  }
override_jmp_10003f8e4_case_0:
  *puVar8 = 0;
                    /* WARNING: Switch is manually overridden */
  lVar5 = _class_copyIvarList(uVar1,puVar8);
                    /* WARNING: Switch is manually overridden */
  switch(lVar5 != 0) {
  case true:
    uVar1 = func_0x000100951360(uRam0000000100c71440);
                    /* WARNING: Switch is manually overridden */
    _objc_storeStrong(puVar9,uVar1);
    uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
    do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch((uint)uVar4 < *puVar8) {
      case false:
        goto override_jmp_10003fd0c_case_0;
      case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        auVar13 = _objc_alloc(uRam0000000100c71608);
        uVar3 = func_0x0001009494c0(auVar13._0_8_,auVar13._8_8_,*(undefined8 *)(lVar5 + uVar4 * 8));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100950c20(uVar3);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar6 != 0) {
        case true:
          func_0x000100950c20(uVar3);
          auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
          func_0x000100968700(uVar1,auVar13._8_8_,uVar3,auVar13._0_8_);
          _objc_release(auVar13._0_8_);
                    /* WARNING: Switch is manually overridden */
        }
        _objc_release(uVar3);
        uVar4 = (ulong)((uint)uVar4 + 1);
                    /* WARNING: Switch is manually overridden */
      }
    } while( true );
  }
override_jmp_10003fb40_case_1:
  uVar4 = func_0x00010094bbe0(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010003fd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100cb5828))();
  return;
                    /* WARNING: Switch is manually overridden */
override_jmp_10003f85c_case_0:
  _free(lVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_10003f684_case_1;
override_jmp_10003fabc_case_0:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100042154(lStack_78);
                    /* WARNING: Switch is manually overridden */
  _objc_release(lStack_70);
  puVar8 = puStack_90;
  uVar1 = uStack_b0;
  lVar2 = lStack_a0;
  puVar9 = puStack_88;
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_10003f8e4_case_0;
override_jmp_10003fd0c_case_0:
  func_0x00010004215c(lVar5);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_10003fb40_case_1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo setNeedUpdate]
 * Entry: 0x1000402b8; original ABI: v16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000402c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000402d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000402e0 */

void Recovered_YYYClassInfo_m00261(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo needUpdate]
 * Entry: 0x1000402e8; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000402f0 */
/* WARNING: Switch with 1 destination removed at 0x0001000402fc */

undefined1 Recovered_YYYClassInfo_m00262(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo superClassInfo]
 * Entry: 0x100040308; original ABI: @16@0:8
 * Original instructions in modeled body: 17; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100040324 */
/* WARNING: Switch with 1 destination removed at 0x000100040474 */

void Recovered_YYYClassInfo_m00263(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = func_0x00010094bbe0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100040334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100cb5ba8))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo metaClassInfo]
 * Entry: 0x100040494; original ABI: @16@0:8
 * Original instructions in modeled body: 42; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000404ac */
/* WARNING: Switch with 1 destination removed at 0x0001000404b8 */
/* WARNING: Switch with 1 destination removed at 0x000100040508 */
/* WARNING: Switch with 1 destination removed at 0x000100040518 */
/* WARNING: Switch with 1 destination removed at 0x000100040534 */

void Recovered_YYYClassInfo_m00264(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 0x58) != 0) {
  case false:
    auVar3 = func_0x00010093c700(param_1);
    func_0x00010093c780(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 0x20));
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    _objc_release(uVar2);
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + 0x58));
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo compare:]
 * Entry: 0x100040704; original ABI: q24@0:8@16
 * Original instructions in modeled body: 54; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100040728 */
/* WARNING: Switch with 1 destination removed at 0x000100040744 */
/* WARNING: Switch with 1 destination removed at 0x000100040754 */
/* WARNING: Switch with 1 destination removed at 0x0001000407ec */
/* WARNING: Switch with 1 destination removed at 0x0001000407f8 */
/* WARNING: Switch with 1 destination removed at 0x00010004082c */

undefined8 Recovered_YYYClassInfo_m00265(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001000421b0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100950c20(uVar1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = func_0x00010093d0c0(uVar2,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo description]
 * Entry: 0x100040830; original ABI: @16@0:8
 * Original instructions in modeled body: 477; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100040864 */
/* WARNING: Switch with 1 destination removed at 0x000100040878 */
/* WARNING: Switch with 1 destination removed at 0x000100040884 */
/* WARNING: Switch with 1 destination removed at 0x000100040890 */
/* WARNING: Switch with 1 destination removed at 0x0001000408c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000408f4 */
/* WARNING: Switch with 1 destination removed at 0x00010004092c */
/* WARNING: Switch with 1 destination removed at 0x000100040a8c */
/* WARNING: Switch with 1 destination removed at 0x000100040a98 */
/* WARNING: Switch with 1 destination removed at 0x000100040ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100040ae4 */
/* WARNING: Switch with 1 destination removed at 0x000100040af4 */
/* WARNING: Switch with 1 destination removed at 0x000100040b18 */
/* WARNING: Switch with 1 destination removed at 0x000100040b28 */
/* WARNING: Switch with 1 destination removed at 0x000100040b34 */
/* WARNING: Switch with 1 destination removed at 0x000100040b50 */
/* WARNING: Switch with 1 destination removed at 0x000100040b5c */
/* WARNING: Switch with 1 destination removed at 0x000100040bac */
/* WARNING: Switch with 1 destination removed at 0x000100040be0 */
/* WARNING: Switch with 1 destination removed at 0x000100040c80 */
/* WARNING: Switch with 1 destination removed at 0x000100040c90 */
/* WARNING: Switch with 1 destination removed at 0x000100040ca0 */
/* WARNING: Switch with 1 destination removed at 0x000100040cb4 */
/* WARNING: Switch with 1 destination removed at 0x000100040ccc */
/* WARNING: Switch with 1 destination removed at 0x000100040e34 */
/* WARNING: Switch with 1 destination removed at 0x000100040f4c */
/* WARNING: Switch with 1 destination removed at 0x0001000410d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000410fc */
/* WARNING: Switch with 1 destination removed at 0x000100041180 */
/* WARNING: Switch with 1 destination removed at 0x00010004119c */
/* WARNING: Switch with 1 destination removed at 0x000100041210 */
/* WARNING: Switch with 1 destination removed at 0x000100041270 */
/* WARNING: Switch with 1 destination removed at 0x00010004128c */
/* WARNING: Switch with 1 destination removed at 0x0001000412f8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYClassInfo_m00266(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f5c == 0) {
  case true:
    bRam0000000100cb1e7f = bRam0000000100cb1e7c ^ 0x2e;
    cRam0000000100cb1e80 = bRam0000000100cb1e7d + (bRam0000000100cb1e7d & 0x99) * -2 + -0x67;
    cRam0000000100cb1e81 = bRam0000000100cb1e7e + (bRam0000000100cb1e7e & 0x45) * -2 + -0x3b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb1e85 = bRam0000000100cb1e82 ^ 0x47;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb1e86 = bRam0000000100cb1e83 ^ 0x5d;
    cRam0000000100cb1e87 = bRam0000000100cb1e84 + (bRam0000000100cb1e84 & 9) * -2 + -0x77;
    bRam0000000100cb1e8d = bRam0000000100cb1e88 ^ 0x5a;
    bRam0000000100cb1e8e = bRam0000000100cb1e89 ^ 0x66;
    cRam0000000100cb1e8f = bRam0000000100cb1e8a + (bRam0000000100cb1e8a & 0xcf) * -2 + -0x31;
    bRam0000000100cb1e90 = bRam0000000100cb1e8b ^ 0x74;
    bRam0000000100cb1e91 = bRam0000000100cb1e8c ^ 0x65;
    cRam0000000100cb1e5e = bRam0000000100cb1e50 + (bRam0000000100cb1e50 & 0x62) * -2 + -0x1e;
    uRam0000000100cb1e5f =
         CONCAT17((byte)((ulong)uRam0000000100cb1e51 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b458 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cb1e51 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b458 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cb1e51 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b458 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cb1e51 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b458 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cb1e51 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b458 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cb1e51 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b458 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cb1e51 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b458 >> 8),
                                                  (byte)uRam0000000100cb1e51 ^ (byte)_UNK_10097b458)
                                                  ))))));
    bRam0000000100cb1e67 = bRam0000000100cb1e59 ^ 0xbe;
    bRam0000000100cb1e68 = bRam0000000100cb1e5a ^ 0xaf;
    cRam0000000100cb1e69 = bRam0000000100cb1e5b + (bRam0000000100cb1e5b & 0x52) * -2 + -0x2e;
    bRam0000000100cb1e6a = bRam0000000100cb1e5c ^ 0xf8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb1e6b = bRam0000000100cb1e5d ^ 0x70;
    bRam0000000100cb1e7a = bRam0000000100cb1e78 ^ 0x8d;
    bRam0000000100cb1e7b = bRam0000000100cb1e79 ^ 0xc9;
    bRam0000000100cb1e72 = bRam0000000100cb1e6c ^ 0x9f;
    cRam0000000100cb1e73 = bRam0000000100cb1e6d + (bRam0000000100cb1e6d & 0x55) * -2 + -0x2b;
    cRam0000000100cb1e74 = bRam0000000100cb1e6e + (bRam0000000100cb1e6e & 0x5c) * -2 + -0x24;
    cRam0000000100cb1e75 = bRam0000000100cb1e6f + (bRam0000000100cb1e6f & 0x49) * -2 + 'I';
    cRam0000000100cb1e76 = bRam0000000100cb1e70 + (bRam0000000100cb1e70 & 199) * -2 + -0x39;
    cRam0000000100cb1e77 = bRam0000000100cb1e71 + (bRam0000000100cb1e71 & 0x32) * -2 + '2';
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f5c = 1;
  func_0x0001000421bc(uRam0000000100c715d8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100950c20(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100938b40(uVar2,auVar6._8_8_,0x100cb1ea0);
  _objc_release(auVar6._0_8_);
  auVar6 = func_0x000100974960(param_1);
  uVar3 = auVar6._8_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(auVar6._0_8_ != 0) {
  case true:
    uVar3 = func_0x0001000421c0(param_1);
                    /* WARNING: Switch is manually overridden */
    _NSStringFromClass(uVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x000100938b40(uVar2,auVar6._8_8_,0x100cb1ec0);
    _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
    uVar3 = extraout_x1_02;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100938c00(uVar2,uVar3,0x100cb1ee0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001000421c4(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar1 = func_0x00010093e360();
  _objc_release(uVar3);
  puVar5 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
  uVar3 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100938c00(uVar2,extraout_x1,0x100cb1f00);
    func_0x0001000421c8(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    puStack_a0 = puVar5;
    uStack_98 = _UNK_10097b060;
    puStack_90 = &DAT_1000412fc;
    puStack_88 = &UNK_100aff1b8;
    auVar6 = _objc_retain(uVar2);
    uStack_80 = auVar6._0_8_;
    func_0x000100942b00(uVar3,auVar6._8_8_,&puStack_a0);
    _objc_release(uVar3);
    func_0x0001000421cc(auVar6._0_8_,extraout_x1_03,0x100cb1f20);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uStack_80);
    uVar3 = extraout_x1_04;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100938c00(uVar2,uVar3,0x100cb1ee0);
  func_0x0001000421d0(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _UNK_10097b060;
  uStack_c8 = _UNK_10097b060;
  puStack_c0 = &DAT_1000415c0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_b8 = &UNK_100aff1e8;
  puStack_d0 = puVar5;
  auVar6 = _objc_retain(uVar2);
  uStack_b0 = auVar6._0_8_;
  func_0x000100942b00(uVar4,auVar6._8_8_,&puStack_d0);
  _objc_release(uVar4);
  func_0x00010093c7a0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puStack_100 = puVar5;
  uStack_f8 = uVar3;
  puStack_f0 = &DAT_1000417ec;
  puStack_e8 = &UNK_100aff218;
  auVar6 = _objc_retain(auVar6._0_8_);
  uStack_e0 = auVar6._0_8_;
  func_0x000100942b00(uVar2,auVar6._8_8_,&puStack_100);
  _objc_release(uVar2);
  func_0x00010094fda0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puStack_130 = puVar5;
  uStack_128 = uVar3;
  puStack_120 = &DAT_100041a64;
  puStack_118 = &UNK_100aff218;
  auVar6 = _objc_retain(auVar6._0_8_);
  uVar3 = auVar6._0_8_;
  uStack_110 = uVar3;
                    /* WARNING: Switch is manually overridden */
  func_0x000100942b00(uVar2,auVar6._8_8_,&puStack_130);
  _objc_release(uVar2);
  func_0x0001000421d4(uVar3,extraout_x1_00,0x100cb1ee0);
  func_0x000100938c00(uVar3,extraout_x1_01,0x100cb1f40);
  uVar2 = func_0x0001000421d8(uVar3);
  _objc_release(uStack_110);
  _objc_release(uStack_e0);
  _objc_release(uStack_b0);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo cls]
 * Entry: 0x100041d18; original ABI: #16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041d20 */
/* WARNING: Switch with 1 destination removed at 0x000100041d2c */

undefined8 Recovered_YYYClassInfo_m00267(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo superCls]
 * Entry: 0x100041d38; original ABI: #16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041d40 */
/* WARNING: Switch with 1 destination removed at 0x000100041d4c */
/* WARNING: Switch with 1 destination removed at 0x000100041d58 */

undefined8 Recovered_YYYClassInfo_m00268(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo metaCls]
 * Entry: 0x100041d64; original ABI: #16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041d6c */
/* WARNING: Switch with 1 destination removed at 0x000100041d78 */

undefined8 Recovered_YYYClassInfo_m00269(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo isMeta]
 * Entry: 0x100041d84; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041d8c */
/* WARNING: Switch with 1 destination removed at 0x000100041d9c */
/* WARNING: Switch with 1 destination removed at 0x000100041da8 */

bool Recovered_YYYClassInfo_m00270(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + 9) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo name]
 * Entry: 0x100041db8; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041dc0 */
/* WARNING: Switch with 1 destination removed at 0x000100041dd0 */

undefined8 Recovered_YYYClassInfo_m00271(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo ivarInfos]
 * Entry: 0x100041dd8; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041de4 */

undefined8 Recovered_YYYClassInfo_m00272(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo methodInfos]
 * Entry: 0x100041dec; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041df4 */
/* WARNING: Switch with 1 destination removed at 0x000100041e00 */

undefined8 Recovered_YYYClassInfo_m00273(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo classMethodInfos]
 * Entry: 0x100041e0c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041e14 */
/* WARNING: Switch with 1 destination removed at 0x000100041e20 */

undefined8 Recovered_YYYClassInfo_m00274(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo propertyInfos]
 * Entry: 0x100041e2c; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041e34 */

undefined8 Recovered_YYYClassInfo_m00275(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo setSuperClassInfo:]
 * Entry: 0x100041e40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041e4c */
/* WARNING: Switch with 1 destination removed at 0x000100041e58 */

void Recovered_YYYClassInfo_m00276(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x50,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo setMetaClassInfo:]
 * Entry: 0x100041e64; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041e80 */
/* WARNING: Switch with 1 destination removed at 0x000100041e8c */
/* WARNING: Switch with 1 destination removed at 0x000100041e98 */
/* WARNING: Switch with 1 destination removed at 0x000100041ec8 */

void Recovered_YYYClassInfo_m00277(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + 0x58,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassInfo .cxx_destruct]
 * Entry: 0x100041ecc; original ABI: v16@0:8
 * Original instructions in modeled body: 44; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100041ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100041f50 */
/* WARNING: Switch with 1 destination removed at 0x000100041f60 */
/* WARNING: Switch with 1 destination removed at 0x000100041fb4 */
/* WARNING: Switch with 1 destination removed at 0x000100041fc0 */

void Recovered_YYYClassInfo_m00278(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYClassInfo classInfoWithClass:]
 * Entry: 0x100040544; original ABI: @24@0:8#16
 * Original instructions in modeled body: 57; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100040560 */
/* WARNING: Switch with 1 destination removed at 0x00010004056c */
/* WARNING: Switch with 1 destination removed at 0x000100040578 */
/* WARNING: Switch with 1 destination removed at 0x0001000405a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000405b0 */
/* WARNING: Switch with 1 destination removed at 0x0001000405c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000405cc */
/* WARNING: Switch with 1 destination removed at 0x0001000405e8 */
/* WARNING: Switch with 1 destination removed at 0x000100040630 */
/* WARNING: Switch with 1 destination removed at 0x00010004064c */

void Recovered_YYYClassInfo_m00279(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 == 0) {
  case false:
    auVar2 = _objc_alloc(uRam0000000100c71610);
    func_0x000100948b00(auVar2._0_8_,auVar2._8_8_,param_3);
    uVar1 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    uVar1 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYClassInfo classInfoWithClassName:]
 * Entry: 0x100040650; original ABI: @24@0:8@16
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100040670 */
/* WARNING: Switch with 1 destination removed at 0x000100040680 */
/* WARNING: Switch with 1 destination removed at 0x0001000406c4 */
/* WARNING: Switch with 1 destination removed at 0x000100040700 */

void Recovered_YYYClassInfo_m00280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar3 = _NSClassFromString(uVar2);
  func_0x00010093c780(param_1,auVar3._8_8_,auVar3._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar1);
  return;
}



