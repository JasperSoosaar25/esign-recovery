/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation initWithCoder:]
 * Entry: 0x10038ae54; original ABI: @24@0:8@16
 * Original instructions in modeled body: 37; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038ae78 */
/* WARNING: Switch with 1 destination removed at 0x00010038aed0 */
/* WARNING: Switch with 1 destination removed at 0x00010038aee0 */

undefined8 Recovered_YYYLocation_m02695(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar3 = func_0x000100948020(param_1);
  func_0x00010097abc0(auVar3._0_8_,auVar3._8_8_,uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_release(auVar3._0_8_);
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation encodeWithCoder:]
 * Entry: 0x10038af0c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038af2c */
/* WARNING: Switch with 1 destination removed at 0x00010038af38 */
/* WARNING: Switch with 1 destination removed at 0x00010038af84 */

void Recovered_YYYLocation_m02696(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1 = _objc_retain(param_3);
  func_0x00010097aba0(param_1,auVar1._8_8_,auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(auVar1._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation hash]
 * Entry: 0x10038af88; original ABI: Q16@0:8
 * Original instructions in modeled body: 58; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038afb0 */
/* WARNING: Switch with 1 destination removed at 0x00010038afbc */
/* WARNING: Switch with 1 destination removed at 0x00010038afe0 */
/* WARNING: Switch with 1 destination removed at 0x00010038aff0 */
/* WARNING: Switch with 1 destination removed at 0x00010038b0a4 */

ulong Recovered_YYYLocation_m02697(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = uRam0000000100c71410;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar4 = func_0x00010038b418(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100951a00(uVar4,uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x000100946380();
  uVar2 = uRam0000000100c71410;
  func_0x00010094d280(param_1);
  func_0x00010038b41c(uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = func_0x000100946380();
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
  return uVar3 ^ uVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation isEqual:]
 * Entry: 0x10038b0c8; original ABI: B24@0:8@16
 * Original instructions in modeled body: 59; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b0ec */
/* WARNING: Switch with 1 destination removed at 0x00010038b0f8 */
/* WARNING: Switch with 1 destination removed at 0x00010038b120 */
/* WARNING: Switch with 1 destination removed at 0x00010038b144 */
/* WARNING: Switch with 1 destination removed at 0x00010038b174 */
/* WARNING: Switch with 1 destination removed at 0x00010038b180 */
/* WARNING: Switch with 1 destination removed at 0x00010038b19c */
/* WARNING: Switch with 1 destination removed at 0x00010038b264 */

undefined8 Recovered_YYYLocation_m02698(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_1 == lVar3) {
  case false:
                    /* WARNING: Switch is manually overridden */
    auVar4 = func_0x00010093c700(uRam0000000100c71800);
    uVar1 = func_0x00010094ba40(lVar3,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010038b154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100dd22b8))();
    return uVar2;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
    return 1;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation name]
 * Entry: 0x10038b284; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b28c */

undefined8 Recovered_YYYLocation_m02699(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation setName:]
 * Entry: 0x10038b298; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b2bc */
/* WARNING: Switch with 1 destination removed at 0x00010038b2c8 */
/* WARNING: Switch with 1 destination removed at 0x00010038b2d4 */
/* WARNING: Switch with 1 destination removed at 0x00010038b308 */

void Recovered_YYYLocation_m02700(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010038b430(param_1,param_2,param_3,8);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation latitude]
 * Entry: 0x10038b31c; original ABI: d16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b324 */
/* WARNING: Switch with 1 destination removed at 0x00010038b330 */

undefined1  [16] Recovered_YYYLocation_m02701(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + 0x10);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation setLatitude:]
 * Entry: 0x10038b33c; original ABI: v24@0:8d16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b344 */
/* WARNING: Switch with 1 destination removed at 0x00010038b350 */
/* WARNING: Switch with 1 destination removed at 0x00010038b360 */

void Recovered_YYYLocation_m02702(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + 0x10) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation longitude]
 * Entry: 0x10038b368; original ABI: d16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b370 */
/* WARNING: Switch with 1 destination removed at 0x00010038b37c */

undefined1  [16] Recovered_YYYLocation_m02703(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + 0x18);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation setLongitude:]
 * Entry: 0x10038b388; original ABI: v24@0:8d16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b390 */
/* WARNING: Switch with 1 destination removed at 0x00010038b39c */
/* WARNING: Switch with 1 destination removed at 0x00010038b3ac */

void Recovered_YYYLocation_m02704(undefined8 param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_2 + 0x18) = param_1;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLocation .cxx_destruct]
 * Entry: 0x10038b3b4; original ABI: v16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038b3c8 */
/* WARNING: Switch with 1 destination removed at 0x00010038b3d4 */
/* WARNING: Switch with 1 destination removed at 0x00010038b3e4 */
/* WARNING: Switch with 1 destination removed at 0x00010038b414 */

void Recovered_YYYLocation_m02705(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 8,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



