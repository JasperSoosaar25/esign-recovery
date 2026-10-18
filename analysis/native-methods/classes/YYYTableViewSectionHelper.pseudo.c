/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addCell:handle:]
 * Entry: 0x1002f8020; original ABI: @32@0:8#16@?24
 * Original instructions in modeled body: 204; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f804c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8068 */
/* WARNING: Switch with 1 destination removed at 0x0001002f808c */
/* WARNING: Switch with 1 destination removed at 0x0001002f80b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f80bc */
/* WARNING: Switch with 1 destination removed at 0x0001002f80e0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f80ec */
/* WARNING: Switch with 1 destination removed at 0x0001002f8108 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8114 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8134 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8140 */
/* WARNING: Switch with 1 destination removed at 0x0001002f816c */
/* WARNING: Switch with 1 destination removed at 0x0001002f818c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8198 */
/* WARNING: Switch with 1 destination removed at 0x0001002f81d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f81e4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f81f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8224 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8240 */
/* WARNING: Switch with 1 destination removed at 0x0001002f824c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8258 */
/* WARNING: Switch with 1 destination removed at 0x0001002f82f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8318 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8348 */
/* WARNING: Switch with 1 destination removed at 0x0001002f83ec */
/* WARNING: Switch with 1 destination removed at 0x0001002f8428 */

void Recovered_YYYTableViewSectionHelper_m02177
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  long lVar7;
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  func_0x0001002f9ad8(uRam0000000100c71dd8);
  uVar2 = func_0x000100948020();
  func_0x0001002f9adc(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096dfe0(uVar2,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  auVar8 = func_0x0001002f9ae0(param_1);
  func_0x000100960420(uVar2,auVar8._8_8_,auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 != 0) {
  case true:
    func_0x0001002f9ae4(uVar2,extraout_x1,param_3);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = func_0x0001009387e0(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x00010093c700(uRam0000000100c713a0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100946e80(uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  lVar6 = lVar4;
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case false:
    func_0x0001002f9ae8(lVar3);
    lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar7 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar5 = _objc_retain(lVar6);
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar7 * 8 + 0x100d9fac8)) {
  case 0x1002f8214:
    _objc_release(lVar6);
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar4);
  func_0x000100975120(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095a820(auVar8._0_8_,auVar8._8_8_,lVar3,uVar5);
  _objc_release(auVar8._0_8_);
  func_0x0001002f9aec(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937000(auVar8._0_8_,auVar8._8_8_,uVar2);
  _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar5);
  _objc_release(lVar1);
  _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addCellHandle:]
 * Entry: 0x1002f842c; original ABI: @24@0:8@?16
 * Original instructions in modeled body: 38; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f844c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8460 */
/* WARNING: Switch with 1 destination removed at 0x0001002f84c0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f84f0 */

void Recovered_YYYTableViewSectionHelper_m02178
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar3 = func_0x00010093c700(uRam0000000100c713a0);
  func_0x000100936780(param_1,auVar3._8_8_,auVar3._0_8_,uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addHeaderTitle:]
 * Entry: 0x1002f84f4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 53; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f8518 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8538 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8590 */
/* WARNING: Switch with 1 destination removed at 0x0001002f85e8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTableViewSectionHelper_m02179
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  uStack_50 = _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_100afc560;
  uStack_68 = _UNK_10097b060;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_60 = &DAT_1002f85ec;
  puStack_58 = &UNK_100b02d68;
  auVar1 = _objc_retain(uStack_50);
  func_0x0001002f9b08(param_1,auVar1._8_8_,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addHeaderHandle:]
 * Entry: 0x1002f8644; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 177; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f866c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8678 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8688 */
/* WARNING: Switch with 1 destination removed at 0x0001002f86b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f86c0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f86d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8704 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8710 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8754 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8764 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8770 */
/* WARNING: Switch with 1 destination removed at 0x0001002f878c */
/* WARNING: Switch with 1 destination removed at 0x0001002f87ac */
/* WARNING: Switch with 1 destination removed at 0x0001002f87c8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f87d4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f87e0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f885c */
/* WARNING: Switch with 1 destination removed at 0x0001002f886c */
/* WARNING: Switch with 1 destination removed at 0x0001002f88b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f88bc */
/* WARNING: Switch with 1 destination removed at 0x0001002f88f8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f891c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8940 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8960 */
/* WARNING: Switch with 1 destination removed at 0x0001002f898c */
/* WARNING: Switch with 1 destination removed at 0x0001002f89a8 */

void Recovered_YYYTableViewSectionHelper_m02180(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar4 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  _objc_alloc(uRam0000000100c71de0);
  uVar5 = func_0x000100948020();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar4 + 0x10))(lVar4,uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  lVar1 = func_0x0001009387e0(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    lVar1 = func_0x00010093c700(uRam0000000100c71558);
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100946e80(uVar5);
  lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
  lVar2 = lVar6;
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case false:
    _NSStringFromClass(lVar1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar7 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar3 = _objc_retain(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar7) {
  case 1:
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar6);
  func_0x0001002f9b0c(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095a860(auVar8._0_8_,auVar8._8_8_,lVar1,uVar3);
  _objc_release(auVar8._0_8_);
  uVar5 = _objc_retain(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addFooterTitle:]
 * Entry: 0x1002f89ac; original ABI: v24@0:8@16
 * Original instructions in modeled body: 55; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f89d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f89f0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8a10 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8a54 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8ac8 */

void Recovered_YYYTableViewSectionHelper_m02181
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined *puStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  uStack_50 = _objc_retain(param_3);
  puStack_70 = puVar1;
  uStack_68 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
  uStack_64 = 0;
  puStack_60 = &DAT_1002f8acc;
  puStack_58 = &UNK_100b02d68;
  auVar2 = _objc_retain(uStack_50);
  func_0x000100936bc0(param_1,auVar2._8_8_,&puStack_70);
  _objc_release(uStack_50);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper addFooterHandle:]
 * Entry: 0x1002f8b70; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 151; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f8bcc */
/* WARNING: Switch with 1 destination removed at 0x0001002f8bd8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8c04 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8c1c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8c48 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8c68 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8ca8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8cb4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8cc4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8cec */
/* WARNING: Switch with 1 destination removed at 0x0001002f8cf8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8d04 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8d10 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8d2c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8d6c */
/* WARNING: Switch with 1 destination removed at 0x0001002f8db4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8dd0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8e24 */

void Recovered_YYYTableViewSectionHelper_m02182(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  lVar1 = _objc_retain(param_3);
  func_0x0001002f9b18(uRam0000000100c71de0);
  uVar2 = func_0x000100948020();
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Switch is manually overridden */
  }
  lVar3 = func_0x0001002f9b1c(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x0001002f9b20(uRam0000000100c71558);
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100946e80(uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  lVar8 = 0;
  lVar6 = lVar4;
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case false:
    func_0x0001002f9b24(lVar3);
    lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar8 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar5 = _objc_retain(lVar6);
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar8 * 8 + 0x100d9ff28)) {
  case 0x1002f8ce4:
    _objc_release(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar4);
                    /* WARNING: Switch is manually overridden */
  func_0x0001002f9b28(param_1);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095a860(auVar9._0_8_,auVar9._8_8_,lVar3,uVar5);
  _objc_release(auVar9._0_8_);
  uVar2 = _objc_retain(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper cellHelperForIndexPath:]
 * Entry: 0x1002f8e28; original ABI: @24@0:8@16
 * Original instructions in modeled body: 222; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f8e78 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8e84 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8eb8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8ec8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f18 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f48 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f54 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f70 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f84 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8f90 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8fb4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f8fc0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9008 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9040 */
/* WARNING: Switch with 1 destination removed at 0x0001002f904c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9084 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9098 */
/* WARNING: Switch with 1 destination removed at 0x0001002f90a4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f90e8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f90f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9110 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9140 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9180 */
/* WARNING: Switch with 1 destination removed at 0x0001002f918c */
/* WARNING: Switch with 1 destination removed at 0x0001002f91f4 */

void Recovered_YYYTableViewSectionHelper_m02183
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_140 [128];
  undefined8 uStack_c0;
  long lStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  undefined8 uVar3;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
  lStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093bee0(param_1);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar9._0_8_;
  uVar4 = func_0x0001002f9b2c(uVar3,auVar9._8_8_,&uStack_c0,auStack_140,0x10);
                    /* WARNING: Switch is manually overridden */
  bVar1 = false;
                    /* WARNING: Switch is manually overridden */
  switch(uVar4 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lStack_78 = *plStack_b0;
    uVar8 = 0;
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_1002f8f38_case_1:
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)!bVar1 * 8 + 0x100da0188)) {
    case 0x1002f9174:
      param_1 = 0;
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    while( true ) {
      _objc_release(uVar2);
      _objc_autoreleaseReturnValue(param_1);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
      ___stack_chk_fail();
      _objc_release(uVar2);
      _objc_autoreleaseReturnValue(param_1);
    }
    return;
  }
override_jmp_1002f8f70_case_0:
  do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_b0 == lStack_78) * 8 + 0x100da0058)) {
    case 0x1002f9074:
      _objc_enumerationMutation(uVar3);
                    /* WARNING: Switch is manually overridden */
    }
    uVar6 = *(undefined8 *)(lStack_b8 + uVar7 * 8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar5 = func_0x00010093bea0(uVar6);
    uStack_70 = lVar5 + uVar8;
    auVar10 = func_0x0001002f9b30(uVar2);
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._0_8_ = param_1;
    bVar1 = false;
    lVar5 = 1;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(uVar8 <= auVar10._0_8_) * 8 + 0x100da0098)) {
    case 0x1002f90e0:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      auVar10 = func_0x0001002f9b34(uVar2);
      auVar9._8_8_ = auVar10._8_8_;
                    /* WARNING: Switch is manually overridden */
      bVar1 = false;
      lVar5 = 1;
                    /* WARNING: Switch is manually overridden */
      switch(auVar10._0_8_ < (long)uStack_70) {
      case true:
        auVar9 = _objc_retain(uVar6);
        lVar5 = 0;
        bVar1 = true;
                    /* WARNING: Switch is manually overridden */
      }
    }
    uVar8 = uStack_70;
    param_1 = auVar9._0_8_;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar5 * 8 + 0x100da0108)) {
    case 0x1002f9154:
      goto override_jmp_1002f8f38_case_1;
    }
    uVar7 = uVar7 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar7 < uVar4) {
    case true:
      goto override_jmp_1002f8f70_case_0;
    }
    uVar4 = func_0x00010093e380(uVar3,auVar9._8_8_,&uStack_c0,auStack_140,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar7 = 0;
    bVar1 = false;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar4 == 0) {
    case true:
      goto override_jmp_1002f8f38_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper cells]
 * Entry: 0x1002f91f8; original ABI: @16@0:8
 * Original instructions in modeled body: 45; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9210 */
/* WARNING: Switch with 1 destination removed at 0x0001002f921c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9228 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9250 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9264 */
/* WARNING: Switch with 1 destination removed at 0x0001002f92a0 */

void Recovered_YYYTableViewSectionHelper_m02184(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar1 = *(long *)(param_1 + 0x40);
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001002f9b40(uRam0000000100c71378);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x40);
  }
  _objc_retainAutoreleaseReturnValue(lVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper cellCount]
 * Entry: 0x1002f92c0; original ABI: q16@0:8
 * Original instructions in modeled body: 23; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f92f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9310 */

void Recovered_YYYTableViewSectionHelper_m02185(undefined8 param_1)

{
  ulong uVar1;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010094b820(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001002f9320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100da0258))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper isHidden]
 * Entry: 0x1002f9584; original ABI: B16@0:8
 * Original instructions in modeled body: 62; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f959c */
/* WARNING: Switch with 1 destination removed at 0x0001002f95c8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f95d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f95fc */
/* WARNING: Switch with 1 destination removed at 0x0001002f9610 */
/* WARNING: Switch with 1 destination removed at 0x0001002f961c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9644 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9670 */
/* WARNING: Switch with 1 destination removed at 0x0001002f96a0 */

undefined8 Recovered_YYYTableViewSectionHelper_m02186(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  func_0x0001002f9b54(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar2 = 0;
    break;
  case true:
    func_0x000100946800(param_1);
    lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar2 = (**(code **)(lVar1 + 0x10))(lVar1,param_1);
    _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper tableView]
 * Entry: 0x1002f96a4; original ABI: @16@0:8
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f96c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f96d0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f96f8 */

void Recovered_YYYTableViewSectionHelper_m02187(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x10);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setTableView:]
 * Entry: 0x1002f96fc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9708 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9714 */

void Recovered_YYYTableViewSectionHelper_m02188(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_100afe380)(param_1 + 0x10,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper identifier]
 * Entry: 0x1002f9720; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9728 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9734 */

undefined8 Recovered_YYYTableViewSectionHelper_m02189(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setIdentifier:]
 * Entry: 0x1002f9740; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9764 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9770 */
/* WARNING: Switch with 1 destination removed at 0x0001002f97a4 */

void Recovered_YYYTableViewSectionHelper_m02190
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001002f9b5c(param_1,param_2,param_3,0x18);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper section]
 * Entry: 0x1002f97b8; original ABI: q16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f97c0 */

undefined8 Recovered_YYYTableViewSectionHelper_m02191(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setSection:]
 * Entry: 0x1002f97cc; original ABI: v24@0:8q16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f97d4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f97e0 */

void Recovered_YYYTableViewSectionHelper_m02192(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper autoDeselectRow]
 * Entry: 0x1002f97ec; original ABI: B16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f97f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9804 */

bool Recovered_YYYTableViewSectionHelper_m02193(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + 8) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setAutoDeselectRow:]
 * Entry: 0x1002f9814; original ABI: v20@0:8B16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f981c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9828 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9838 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9844 */

void Recovered_YYYTableViewSectionHelper_m02194(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper header]
 * Entry: 0x1002f985c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9864 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9870 */

undefined8 Recovered_YYYTableViewSectionHelper_m02195(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setHeader:]
 * Entry: 0x1002f987c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYTableViewSectionHelper_m02196(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper footer]
 * Entry: 0x1002f98ac; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f98b4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f98c0 */
/* WARNING: Switch with 1 destination removed at 0x0001002f98cc */

undefined8 Recovered_YYYTableViewSectionHelper_m02197(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setFooter:]
 * Entry: 0x1002f98d8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f98f4 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9910 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9924 */
/* WARNING: Switch with 1 destination removed at 0x0001002f994c */

void Recovered_YYYTableViewSectionHelper_m02198(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper hiddenHandle]
 * Entry: 0x1002f9950; original ABI: @?16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9958 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9964 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9974 */

undefined8 Recovered_YYYTableViewSectionHelper_m02199(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setHiddenHandle:]
 * Entry: 0x1002f997c; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9984 */

void Recovered_YYYTableViewSectionHelper_m02200(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper setCells:]
 * Entry: 0x1002f9990; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f99ac */
/* WARNING: Switch with 1 destination removed at 0x0001002f99b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002f99f0 */

void Recovered_YYYTableViewSectionHelper_m02201(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewSectionHelper .cxx_destruct]
 * Entry: 0x1002f99f4; original ABI: v16@0:8
 * Original instructions in modeled body: 40; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002f9a0c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9a30 */
/* WARNING: Switch with 1 destination removed at 0x0001002f9a3c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9a4c */
/* WARNING: Switch with 1 destination removed at 0x0001002f9ac8 */

void Recovered_YYYTableViewSectionHelper_m02202(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Switch is manually overridden */
  return;
}



