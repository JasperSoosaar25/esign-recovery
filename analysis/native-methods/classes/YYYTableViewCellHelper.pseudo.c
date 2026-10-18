/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper init]
 * Entry: 0x100087908; original ABI: @16@0:8
 * Original instructions in modeled body: 67; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100087928 */
/* WARNING: Switch with 1 destination removed at 0x000100087970 */
/* WARNING: Switch with 1 destination removed at 0x000100087984 */
/* WARNING: Switch with 1 destination removed at 0x0001000879ac */
/* WARNING: Switch with 1 destination removed at 0x0001000879f8 */
/* WARNING: Switch with 1 destination removed at 0x000100087a10 */
/* WARNING: Switch with 1 destination removed at 0x000100087a24 */
/* WARNING: Switch with 1 destination removed at 0x000100087a54 */

undefined8 Recovered_YYYTableViewCellHelper_m00463(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* WARNING: Switch is manually overridden */
  uStack_28 = uRam0000000100c738f8;
  uStack_30 = param_1;
  lVar1 = func_0x000100088b1c(&uStack_30,PTR_s_init_100c60da0);
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(lVar1 + 0x30) = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010093c700(uRam0000000100c713a0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(lVar1 + 0x28) = 0xc058c00000000000;
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper isHiddenWithIndexPath:]
 * Entry: 0x100087a58; original ABI: B24@0:8@16
 * Original instructions in modeled body: 98; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100087a7c */
/* WARNING: Switch with 1 destination removed at 0x000100087a8c */
/* WARNING: Switch with 1 destination removed at 0x000100087ab8 */
/* WARNING: Switch with 1 destination removed at 0x000100087ae8 */
/* WARNING: Switch with 1 destination removed at 0x000100087af4 */
/* WARNING: Switch with 1 destination removed at 0x000100087b08 */
/* WARNING: Switch with 1 destination removed at 0x000100087b34 */
/* WARNING: Switch with 1 destination removed at 0x000100087b50 */
/* WARNING: Switch with 1 destination removed at 0x000100087b5c */
/* WARNING: Switch with 1 destination removed at 0x000100087b68 */
/* WARNING: Switch with 1 destination removed at 0x000100087b74 */
/* WARNING: Switch with 1 destination removed at 0x000100087b80 */
/* WARNING: Switch with 1 destination removed at 0x000100087bbc */
/* WARNING: Switch with 1 destination removed at 0x000100087be8 */
/* WARNING: Switch with 1 destination removed at 0x000100087c04 */
/* WARNING: Switch with 1 destination removed at 0x000100087c20 */

undefined8
Recovered_YYYTableViewCellHelper_m00464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x23;
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100088b20(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  lVar3 = 0;
  uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x000100946800(param_1);
    unaff_x23 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar4 = (**(code **)(unaff_x23 + 0x10))(unaff_x23,uVar2);
    lVar3 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar3 * 8 + 0x100cce730)) {
  case 0x100087b48:
    _objc_release(unaff_x23);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
  return uVar4;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper cellForTableView:indexPath:]
 * Entry: 0x100087c24; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 161; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100087c50 */
/* WARNING: Switch with 1 destination removed at 0x000100087c5c */
/* WARNING: Switch with 1 destination removed at 0x000100087c78 */
/* WARNING: Switch with 1 destination removed at 0x000100087c88 */
/* WARNING: Switch with 1 destination removed at 0x000100087cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100087ce0 */
/* WARNING: Switch with 1 destination removed at 0x000100087cf4 */
/* WARNING: Switch with 1 destination removed at 0x000100087d14 */
/* WARNING: Switch with 1 destination removed at 0x000100087d20 */
/* WARNING: Switch with 1 destination removed at 0x000100087d2c */
/* WARNING: Switch with 1 destination removed at 0x000100087d5c */
/* WARNING: Switch with 1 destination removed at 0x000100087d68 */
/* WARNING: Switch with 1 destination removed at 0x000100087d78 */
/* WARNING: Switch with 1 destination removed at 0x000100087d84 */
/* WARNING: Switch with 1 destination removed at 0x000100087da0 */
/* WARNING: Switch with 1 destination removed at 0x000100087dc0 */
/* WARNING: Switch with 1 destination removed at 0x000100087dcc */
/* WARNING: Switch with 1 destination removed at 0x000100087dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100087de4 */
/* WARNING: Switch with 1 destination removed at 0x000100087e30 */
/* WARNING: Switch with 1 destination removed at 0x000100087e40 */
/* WARNING: Switch with 1 destination removed at 0x000100087e7c */
/* WARNING: Switch with 1 destination removed at 0x000100087e88 */
/* WARNING: Switch with 1 destination removed at 0x000100087ecc */
/* WARNING: Switch with 1 destination removed at 0x000100087efc */
/* WARNING: Switch with 1 destination removed at 0x000100087f18 */
/* WARNING: Switch with 1 destination removed at 0x000100087f34 */

void Recovered_YYYTableViewCellHelper_m00465
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  long lVar8;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
  lVar3 = func_0x0001009387e0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x00010093c700(uRam0000000100c713a0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100088b28(param_1);
  lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  lVar8 = 0;
                    /* WARNING: Switch is manually overridden */
  lVar7 = lVar6;
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case false:
    _NSStringFromClass(lVar3);
    lVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar8 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar4 = _objc_retain(lVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar8 * 8 + 0x100cce8e0)) {
  case 0x100087db8:
    _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar6);
  func_0x000100088b2c(uVar1,extraout_x1,uVar4,uVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper heightForIndexPath:]
 * Entry: 0x100087f38; original ABI: d24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100087f5c */
/* WARNING: Switch with 1 destination removed at 0x000100087f68 */
/* WARNING: Switch with 1 destination removed at 0x000100087f74 */
/* WARNING: Switch with 1 destination removed at 0x000100088194 */
/* WARNING: Switch with 1 destination removed at 0x0001000881b8 */

void Recovered_YYYTableViewCellHelper_m00466
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010094b840(param_1,auVar2._8_8_,auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100087f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100cce9e0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper cellNumber]
 * Entry: 0x100088264; original ABI: q16@0:8
 * Original instructions in modeled body: 57; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088290 */
/* WARNING: Switch with 1 destination removed at 0x0001000882ac */
/* WARNING: Switch with 1 destination removed at 0x0001000882d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000882e0 */
/* WARNING: Switch with 1 destination removed at 0x000100088320 */
/* WARNING: Switch with 1 destination removed at 0x000100088330 */
/* WARNING: Switch with 1 destination removed at 0x00010008833c */
/* WARNING: Switch with 1 destination removed at 0x00010008836c */

undefined8 Recovered_YYYTableViewCellHelper_m00467(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010093bec0();
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    uVar2 = *(undefined8 *)(param_1 + 0x30);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010093bec0(param_1);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = (**(code **)(lVar1 + 0x10))();
    _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper tableView]
 * Entry: 0x100088370; original ABI: @16@0:8
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088388 */
/* WARNING: Switch with 1 destination removed at 0x0001000883a4 */
/* WARNING: Switch with 1 destination removed at 0x0001000883b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000883dc */

void Recovered_YYYTableViewCellHelper_m00468(long param_1)

{
  undefined8 uVar1;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_loadWeakRetained(param_1 + 0x10);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setTableView:]
 * Entry: 0x1000883e0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000883fc */
/* WARNING: Switch with 1 destination removed at 0x000100088420 */

void Recovered_YYYTableViewCellHelper_m00469(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeWeak(param_1 + 0x10,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper identifier]
 * Entry: 0x100088430; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088438 */
/* WARNING: Switch with 1 destination removed at 0x000100088444 */
/* WARNING: Switch with 1 destination removed at 0x000100088454 */

undefined8 Recovered_YYYTableViewCellHelper_m00470(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setIdentifier:]
 * Entry: 0x10008845c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088480 */
/* WARNING: Switch with 1 destination removed at 0x00010008848c */
/* WARNING: Switch with 1 destination removed at 0x000100088498 */
/* WARNING: Switch with 1 destination removed at 0x0001000884dc */

void Recovered_YYYTableViewCellHelper_m00471
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x18);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper anyClass]
 * Entry: 0x1000884e0; original ABI: #16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000884e8 */
/* WARNING: Switch with 1 destination removed at 0x0001000884f4 */
/* WARNING: Switch with 1 destination removed at 0x000100088500 */

undefined8 Recovered_YYYTableViewCellHelper_m00472(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setAnyClass:]
 * Entry: 0x10008850c; original ABI: v24@0:8#16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010008852c */
/* WARNING: Switch with 1 destination removed at 0x000100088538 */
/* WARNING: Switch with 1 destination removed at 0x000100088544 */
/* WARNING: Switch with 1 destination removed at 0x00010008857c */
/* WARNING: Switch with 1 destination removed at 0x000100088598 */

void Recovered_YYYTableViewCellHelper_m00473(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper height]
 * Entry: 0x10008859c; original ABI: d16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000885a8 */
/* WARNING: Switch with 1 destination removed at 0x0001000885b4 */

undefined1  [16] Recovered_YYYTableViewCellHelper_m00474(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(param_1 + 0x28);
  auVar1._8_8_ = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setHeight:]
 * Entry: 0x1000885bc; original ABI: v24@0:8d16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000885c8 */
/* WARNING: Switch with 1 destination removed at 0x0001000885d4 */

void Recovered_YYYTableViewCellHelper_m00475(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setCellNumber:]
 * Entry: 0x1000885dc; original ABI: v24@0:8q16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000885e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000885f4 */

void Recovered_YYYTableViewCellHelper_m00476(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper autoDeselectRow]
 * Entry: 0x1000885fc; original ABI: B16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined1 Recovered_YYYTableViewCellHelper_m00477(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setAutoDeselectRow:]
 * Entry: 0x100088604; original ABI: v20@0:8B16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010008860c */
/* WARNING: Switch with 1 destination removed at 0x00010008861c */

void Recovered_YYYTableViewCellHelper_m00478(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper configHandle]
 * Entry: 0x100088624; original ABI: @?16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010008862c */
/* WARNING: Switch with 1 destination removed at 0x00010008863c */
/* WARNING: Switch with 1 destination removed at 0x000100088648 */

undefined8 Recovered_YYYTableViewCellHelper_m00479(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setConfigHandle:]
 * Entry: 0x100088654; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010008865c */

void Recovered_YYYTableViewCellHelper_m00480(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper didSelectRowHandle]
 * Entry: 0x100088668; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088670 */

undefined8 Recovered_YYYTableViewCellHelper_m00481(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setDidSelectRowHandle:]
 * Entry: 0x10008867c; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000886a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000886ac */
/* WARNING: Switch with 1 destination removed at 0x0001000886b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000886fc */

void Recovered_YYYTableViewCellHelper_m00482
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100088b54(param_1,param_2,param_3,0x40);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper didDeselectRowHandle]
 * Entry: 0x100088700; original ABI: @?16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088708 */
/* WARNING: Switch with 1 destination removed at 0x000100088714 */

undefined8 Recovered_YYYTableViewCellHelper_m00483(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setDidDeselectRowHandle:]
 * Entry: 0x100088720; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088744 */
/* WARNING: Switch with 1 destination removed at 0x000100088750 */
/* WARNING: Switch with 1 destination removed at 0x000100088794 */

void Recovered_YYYTableViewCellHelper_m00484
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100088b5c(param_1,param_2,param_3,0x48);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper heightHandle]
 * Entry: 0x100088798; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000887a4 */

undefined8 Recovered_YYYTableViewCellHelper_m00485(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setHeightHandle:]
 * Entry: 0x1000887ac; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000887d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000887dc */
/* WARNING: Switch with 1 destination removed at 0x0001000887e8 */
/* WARNING: Switch with 1 destination removed at 0x00010008882c */

void Recovered_YYYTableViewCellHelper_m00486
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x50);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper cellNumberHandle]
 * Entry: 0x100088830; original ABI: @?16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYTableViewCellHelper_m00487(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setCellNumberHandle:]
 * Entry: 0x100088838; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088840 */

void Recovered_YYYTableViewCellHelper_m00488(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper editingStyleHandle]
 * Entry: 0x10008884c; original ABI: @?16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088854 */

undefined8 Recovered_YYYTableViewCellHelper_m00489(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setEditingStyleHandle:]
 * Entry: 0x100088860; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088884 */
/* WARNING: Switch with 1 destination removed at 0x0001000888c8 */

void Recovered_YYYTableViewCellHelper_m00490
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x60);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper commitEditingStyleHandle]
 * Entry: 0x1000888cc; original ABI: @?16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000888d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000888e4 */

undefined8 Recovered_YYYTableViewCellHelper_m00491(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x68);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setCommitEditingStyleHandle:]
 * Entry: 0x1000888ec; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088910 */
/* WARNING: Switch with 1 destination removed at 0x00010008891c */
/* WARNING: Switch with 1 destination removed at 0x000100088950 */
/* WARNING: Switch with 1 destination removed at 0x00010008895c */

void Recovered_YYYTableViewCellHelper_m00492
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x68);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper hiddenHandle]
 * Entry: 0x100088970; original ABI: @?16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088978 */
/* WARNING: Switch with 1 destination removed at 0x000100088984 */

undefined8 Recovered_YYYTableViewCellHelper_m00493(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x70);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper setHiddenHandle:]
 * Entry: 0x100088990; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000889b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000889c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000889f4 */
/* WARNING: Switch with 1 destination removed at 0x000100088a00 */

void Recovered_YYYTableViewCellHelper_m00494
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100088b6c(param_1,param_2,param_3,0x70);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewCellHelper .cxx_destruct]
 * Entry: 0x100088a14; original ABI: v16@0:8
 * Original instructions in modeled body: 46; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100088a60 */
/* WARNING: Switch with 1 destination removed at 0x000100088b18 */

void Recovered_YYYTableViewCellHelper_m00495(long param_1)

{
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



