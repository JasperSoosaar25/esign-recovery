/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper init]
 * Entry: 0x10002c05c; original ABI: @16@0:8
 * Original instructions in modeled body: 79; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c07c */
/* WARNING: Switch with 1 destination removed at 0x00010002c08c */
/* WARNING: Switch with 1 destination removed at 0x00010002c0a8 */
/* WARNING: Switch with 1 destination removed at 0x00010002c0bc */
/* WARNING: Switch with 1 destination removed at 0x00010002c0ec */
/* WARNING: Switch with 1 destination removed at 0x00010002c118 */
/* WARNING: Switch with 1 destination removed at 0x00010002c130 */
/* WARNING: Switch with 1 destination removed at 0x00010002c148 */
/* WARNING: Switch with 1 destination removed at 0x00010002c164 */
/* WARNING: Switch with 1 destination removed at 0x00010002c1a0 */
/* WARNING: Switch with 1 destination removed at 0x00010002c1d4 */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00154(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c73868;
  uStack_40 = param_1;
  lVar3 = _objc_msgSendSuper2(&uStack_40,PTR_s_init_100c60da0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010093c700(uRam0000000100c71558);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__UITableViewAutomaticDimension_100afc4e0;
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)puVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper heightForSection:]
 * Entry: 0x10002c1d8; original ABI: d24@0:8q16
 * Original instructions in modeled body: 101; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c1fc */
/* WARNING: Switch with 1 destination removed at 0x00010002c228 */
/* WARNING: Switch with 1 destination removed at 0x00010002c238 */
/* WARNING: Switch with 1 destination removed at 0x00010002c244 */
/* WARNING: Switch with 1 destination removed at 0x00010002c268 */
/* WARNING: Switch with 1 destination removed at 0x00010002c274 */
/* WARNING: Switch with 1 destination removed at 0x00010002c280 */
/* WARNING: Switch with 1 destination removed at 0x00010002c2ac */
/* WARNING: Switch with 1 destination removed at 0x00010002c2bc */
/* WARNING: Switch with 1 destination removed at 0x00010002c2ec */
/* WARNING: Switch with 1 destination removed at 0x00010002c30c */
/* WARNING: Switch with 1 destination removed at 0x00010002c33c */
/* WARNING: Switch with 1 destination removed at 0x00010002c370 */
/* WARNING: Switch with 1 destination removed at 0x00010002c38c */
/* WARNING: Switch with 1 destination removed at 0x00010002c3a8 */

undefined1  [16]
Recovered_YYYTableViewHeaderFooterHelper_m00155
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  func_0x000100946660(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    uVar3 = func_0x000100946580(param_1);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010002c6f4(param_1);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    lVar2 = func_0x00010002c6f8(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar2 = func_0x00010002c6fc(uRam0000000100c71560,lVar2);
                    /* WARNING: Switch is manually overridden */
    }
    uVar3 = (**(code **)(lVar1 + 0x10))(lVar1,lVar2,param_3);
    _objc_release(lVar1);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar3;
                    /* WARNING: Switch is manually overridden */
  return auVar4;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper identifier]
 * Entry: 0x10002c3ac; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c3b4 */
/* WARNING: Switch with 1 destination removed at 0x00010002c3c0 */
/* WARNING: Switch with 1 destination removed at 0x00010002c3cc */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00156(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setIdentifier:]
 * Entry: 0x10002c3d8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c3e0 */

void Recovered_YYYTableViewHeaderFooterHelper_m00157(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper anyClass]
 * Entry: 0x10002c3ec; original ABI: #16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c3f4 */
/* WARNING: Switch with 1 destination removed at 0x00010002c400 */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00158(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setAnyClass:]
 * Entry: 0x10002c40c; original ABI: v24@0:8#16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c424 */
/* WARNING: Switch with 1 destination removed at 0x00010002c43c */
/* WARNING: Switch with 1 destination removed at 0x00010002c46c */

void Recovered_YYYTableViewHeaderFooterHelper_m00159
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper height]
 * Entry: 0x10002c470; original ABI: d16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c478 */
/* WARNING: Switch with 1 destination removed at 0x00010002c488 */

undefined1  [16] Recovered_YYYTableViewHeaderFooterHelper_m00160(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + 0x18);
  auVar1._8_8_ = 0;
                    /* WARNING: Switch is manually overridden */
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setHeight:]
 * Entry: 0x10002c490; original ABI: v24@0:8d16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c498 */
/* WARNING: Switch with 1 destination removed at 0x00010002c4a4 */
/* WARNING: Switch with 1 destination removed at 0x00010002c4b4 */

void Recovered_YYYTableViewHeaderFooterHelper_m00161(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper title]
 * Entry: 0x10002c4bc; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c4c4 */
/* WARNING: Switch with 1 destination removed at 0x00010002c4d0 */
/* WARNING: Switch with 1 destination removed at 0x00010002c4dc */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00162(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setTitle:]
 * Entry: 0x10002c4e8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c4f8 */
/* WARNING: Switch with 1 destination removed at 0x00010002c50c */

void Recovered_YYYTableViewHeaderFooterHelper_m00163(void)

{
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper heightHandle]
 * Entry: 0x10002c518; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c520 */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00164(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setHeightHandle:]
 * Entry: 0x10002c52c; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c534 */

void Recovered_YYYTableViewHeaderFooterHelper_m00165(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper titleHandle]
 * Entry: 0x10002c540; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c548 */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00166(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setTitleHandle:]
 * Entry: 0x10002c554; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c578 */
/* WARNING: Switch with 1 destination removed at 0x00010002c584 */
/* WARNING: Switch with 1 destination removed at 0x00010002c590 */
/* WARNING: Switch with 1 destination removed at 0x00010002c5c4 */

void Recovered_YYYTableViewHeaderFooterHelper_m00167
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x30);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper configHandle]
 * Entry: 0x10002c5d8; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c5e0 */

undefined8 Recovered_YYYTableViewHeaderFooterHelper_m00168(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper setConfigHandle:]
 * Entry: 0x10002c5ec; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c610 */
/* WARNING: Switch with 1 destination removed at 0x00010002c61c */
/* WARNING: Switch with 1 destination removed at 0x00010002c650 */
/* WARNING: Switch with 1 destination removed at 0x00010002c65c */

void Recovered_YYYTableViewHeaderFooterHelper_m00169
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x38);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterHelper .cxx_destruct]
 * Entry: 0x10002c670; original ABI: v16@0:8
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c6a0 */
/* WARNING: Switch with 1 destination removed at 0x00010002c6c4 */

void Recovered_YYYTableViewHeaderFooterHelper_m00170(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 8,0);
  return;
}



