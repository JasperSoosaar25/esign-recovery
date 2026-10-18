/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFatArchO reallocCodeSignSpace]
 * Entry: 0x100762e74; original ABI: I16@0:8
 * Original instructions in modeled body: 86; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100762e98 */
/* WARNING: Switch with 1 destination removed at 0x000100762eb0 */
/* WARNING: Switch with 1 destination removed at 0x000100762ed8 */
/* WARNING: Switch with 1 destination removed at 0x000100762f10 */
/* WARNING: Switch with 1 destination removed at 0x000100762f20 */
/* WARNING: Switch with 1 destination removed at 0x000100762f64 */
/* WARNING: Switch with 1 destination removed at 0x000100762fa0 */
/* WARNING: Switch with 1 destination removed at 0x0001007631cc */
/* WARNING: Switch with 1 destination removed at 0x0001007631f8 */

undefined8 Recovered_YYYFatArchO_m03284(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
  uStack_58 = uRam0000000100c74be0;
  uStack_60 = param_1;
  uVar5 = _objc_msgSendSuper2(&uStack_60,PTR_s_reallocCodeSignSpace_100c670d0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iVar1 == (int)uVar5) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x0001009434e0(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = func_0x0001009434e0();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar2);
    *(int *)(lVar3 + 0xc) = (int)uVar5;
    func_0x0001009434e0(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar4 = func_0x000100971b80();
    _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100762f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e236f0))();
    return uVar5;
  case true:
                    /* WARNING: Switch is manually overridden */
    return uVar5;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFatArchO AddCodeSignSpaceLength:]
 * Entry: 0x100763254; original ABI: I20@0:8I16
 * Original instructions in modeled body: 85; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100763280 */
/* WARNING: Switch with 1 destination removed at 0x000100763290 */
/* WARNING: Switch with 1 destination removed at 0x0001007632bc */
/* WARNING: Switch with 1 destination removed at 0x0001007632fc */
/* WARNING: Switch with 1 destination removed at 0x000100763378 */
/* WARNING: Switch with 1 destination removed at 0x000100763388 */
/* WARNING: Switch with 1 destination removed at 0x000100763394 */
/* WARNING: Switch with 1 destination removed at 0x000100763590 */
/* WARNING: Switch with 1 destination removed at 0x0001007635dc */

undefined8 Recovered_YYYFatArchO_m03285(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  iVar1 = func_0x00010094d6e0(param_1);
  uStack_48 = uRam0000000100c74be0;
  uStack_50 = param_1;
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_msgSendSuper2(&uStack_50,PTR_s_AddCodeSignSpaceLength__100c59cd0,param_3);
                    /* WARNING: Switch is manually overridden */
  switch(iVar1 == (int)uVar2) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x0001009434e0(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = func_0x0001009434e0();
    _objc_release(uVar3);
    *(int *)(lVar4 + 0xc) = (int)uVar2;
    func_0x0001009434e0(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar5 = func_0x000100971b80(uVar2);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001007633a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e23850))();
    return uVar2;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
    return uVar2;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFatArchO fatArch]
 * Entry: 0x100763694; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010076369c */
/* WARNING: Switch with 1 destination removed at 0x0001007636b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007636c0 */

undefined8 Recovered_YYYFatArchO_m03286(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7929c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFatArchO setFatArch:]
 * Entry: 0x1007636c8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007636e4 */
/* WARNING: Switch with 1 destination removed at 0x000100763708 */
/* WARNING: Switch with 1 destination removed at 0x000100763734 */

void Recovered_YYYFatArchO_m03287(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c7929c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFatArchO .cxx_destruct]
 * Entry: 0x100763738; original ABI: v16@0:8
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100763754 */
/* WARNING: Switch with 1 destination removed at 0x000100763760 */
/* WARNING: Switch with 1 destination removed at 0x000100763770 */
/* WARNING: Switch with 1 destination removed at 0x000100763794 */

void Recovered_YYYFatArchO_m03288(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7929c,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



