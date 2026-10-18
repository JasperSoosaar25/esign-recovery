/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob init]
 * Entry: 0x100772dd4; original ABI: @16@0:8
 * Original instructions in modeled body: 75; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100772df8 */
/* WARNING: Switch with 1 destination removed at 0x000100772e44 */
/* WARNING: Switch with 1 destination removed at 0x000100772e7c */
/* WARNING: Switch with 1 destination removed at 0x000100772e88 */
/* WARNING: Switch with 1 destination removed at 0x000100772e94 */
/* WARNING: Switch with 1 destination removed at 0x000100772ec8 */
/* WARNING: Switch with 1 destination removed at 0x000100772ed4 */
/* WARNING: Switch with 1 destination removed at 0x000100772ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100772f18 */
/* WARNING: Switch with 1 destination removed at 0x000100772f34 */

undefined8 Recovered_YYYSuperBlob_m03368(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c74be8;
  uStack_40 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_40,PTR_s_init_100c60da0);
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    *(undefined4 *)(lVar1 + 8) = 0xfade0cc0;
    func_0x000100939020(uRam0000000100c71378);
    auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100960ce0(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob setupBlobIndexsOffset]
 * Entry: 0x1007737d0; original ABI: v16@0:8
 * Original instructions in modeled body: 156; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773808 */
/* WARNING: Switch with 1 destination removed at 0x000100773834 */
/* WARNING: Switch with 1 destination removed at 0x0001007738ac */
/* WARNING: Switch with 1 destination removed at 0x0001007738b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007738d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007738dc */
/* WARNING: Switch with 1 destination removed at 0x000100773908 */
/* WARNING: Switch with 1 destination removed at 0x000100773924 */
/* WARNING: Switch with 1 destination removed at 0x000100773930 */
/* WARNING: Switch with 1 destination removed at 0x000100773940 */
/* WARNING: Switch with 1 destination removed at 0x00010077399c */
/* WARNING: Switch with 1 destination removed at 0x0001007739d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007739e0 */
/* WARNING: Switch with 1 destination removed at 0x000100773a08 */
/* WARNING: Switch with 1 destination removed at 0x000100773a24 */
/* WARNING: Switch with 1 destination removed at 0x000100773a30 */

void Recovered_YYYSuperBlob_m03369(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uVar3;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010093e360(param_1);
                    /* WARNING: Switch is manually overridden */
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  iVar5 = (uVar1 | 8) * (uVar1 & 8) + (uVar1 & 0xfffffff7) * (~uVar1 & 8) + 0xc;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  func_0x00010093a3c0(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar10._0_8_;
  auVar10 = func_0x00010093e380(uVar3,auVar10._8_8_,&uStack_a0,auStack_120,0x10);
                    /* WARNING: Switch is manually overridden */
  switch(auVar10._0_8_ == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar8 = *plStack_90;
    uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_1007738a0_case_1:
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 != lStack_58) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000100773a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000100e2a500)();
      return;
    }
    return;
  }
override_jmp_1007738d0_case_0:
  do {
    uVar4 = auVar10._8_8_;
    uVar6 = auVar10._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_90 == lVar8) * 8 + 0x100e2a430)) {
    case 0x100773900:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uVar3);
      uVar4 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar7 = *(undefined8 *)(lStack_98 + uVar9 * 8);
    func_0x000100968740(uVar7,uVar4,iVar5);
    func_0x00010093f1c0(uVar7);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = func_0x00010094d6e0();
    iVar5 = iVar5 + iVar2;
    _objc_release(uVar4);
    auVar10._8_8_ = extraout_x1_00;
    auVar10._0_8_ = uVar6;
    uVar9 = uVar9 + 1;
                    /* WARNING: Switch is manually overridden */
    switch(uVar9 < uVar6) {
    case true:
      goto override_jmp_1007738d0_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    auVar10 = func_0x00010093e380(uVar3,extraout_x1_00,&uStack_a0,auStack_120,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(auVar10._0_8_ == 0) {
    case true:
      goto override_jmp_1007738a0_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob addBlobIndex:]
 * Entry: 0x100773a6c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 44; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773a8c */
/* WARNING: Switch with 1 destination removed at 0x000100773a9c */
/* WARNING: Switch with 1 destination removed at 0x000100773af0 */
/* WARNING: Switch with 1 destination removed at 0x000100773afc */
/* WARNING: Switch with 1 destination removed at 0x000100773b28 */
/* WARNING: Switch with 1 destination removed at 0x000100773b54 */

void Recovered_YYYSuperBlob_m03370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093a3c0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937000(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
  func_0x000100970820(param_1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob count]
 * Entry: 0x100773b58; original ABI: I16@0:8
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773b74 */
/* WARNING: Switch with 1 destination removed at 0x000100773b80 */
/* WARNING: Switch with 1 destination removed at 0x000100773be4 */

undefined8 Recovered_YYYSuperBlob_m03371(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010093a3c0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x00010093e360();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob length]
 * Entry: 0x100773be8; original ABI: I16@0:8
 * Original instructions in modeled body: 151; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773c24 */
/* WARNING: Switch with 1 destination removed at 0x000100773c30 */
/* WARNING: Switch with 1 destination removed at 0x000100773c3c */
/* WARNING: Switch with 1 destination removed at 0x000100773c70 */
/* WARNING: Switch with 1 destination removed at 0x000100773c8c */
/* WARNING: Switch with 1 destination removed at 0x000100773cdc */
/* WARNING: Switch with 1 destination removed at 0x000100773ce8 */
/* WARNING: Switch with 1 destination removed at 0x000100773d14 */
/* WARNING: Switch with 1 destination removed at 0x000100773d20 */
/* WARNING: Switch with 1 destination removed at 0x000100773d34 */
/* WARNING: Switch with 1 destination removed at 0x000100773d78 */
/* WARNING: Switch with 1 destination removed at 0x000100773da0 */
/* WARNING: Switch with 1 destination removed at 0x000100773dbc */
/* WARNING: Switch with 1 destination removed at 0x000100773e2c */
/* WARNING: Switch with 1 destination removed at 0x000100773e9c */

int Recovered_YYYSuperBlob_m03372(undefined8 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar1 = auStack_70;
                    /* WARNING: Switch is manually overridden */
  do {
    puVar7 = (undefined8 *)(puVar1 + -0x40);
    puVar8 = puVar1 + -0xc0;
    iVar3 = func_0x00010093e360(param_1);
                    /* WARNING: Switch is manually overridden */
    iVar3 = iVar3 * 8 + 0xc;
    *(undefined8 *)(puVar1 + -0x18) = 0;
    *(undefined8 *)(puVar1 + -0x20) = 0;
    *(undefined8 *)(puVar1 + -8) = 0;
    *(undefined8 *)(puVar1 + -0x10) = 0;
    *(undefined8 *)(puVar1 + -0x38) = 0;
    *puVar7 = 0;
    *(undefined8 *)(puVar1 + -0x28) = 0;
    *(undefined8 *)(puVar1 + -0x30) = 0;
    func_0x00010093a3c0(param_1);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    uVar5 = auVar11._0_8_;
    uVar6 = func_0x00010093e380(uVar5,auVar11._8_8_,puVar7,puVar8,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 == 0) {
    case false:
      lVar9 = **(long **)(puVar1 + -0x30);
      uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100773c70_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(**(long **)(puVar1 + -0x30) == lVar9) {
        case false:
          _objc_enumerationMutation(uVar5);
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        param_1 = *(undefined8 *)(*(long *)(puVar1 + -0x38) + uVar10 * 8);
        func_0x00010093f1c0(param_1);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        iVar2 = func_0x00010094d6e0();
        _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
        iVar3 = iVar3 + iVar2;
        uVar10 = uVar10 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar10 < uVar6) {
        case true:
          goto override_jmp_100773c70_case_0;
        }
        uVar6 = func_0x00010093e380(uVar5,extraout_x1,puVar7,puVar8,0x10);
                    /* WARNING: Switch is manually overridden */
        uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 == 0) {
        case true:
          goto override_jmp_100773c58_case_1;
        }
      } while( true );
    case true:
override_jmp_100773c58_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return iVar3;
      }
      ___stack_chk_fail();
      func_0x00010093e360(param_1);
      puVar1 = puVar8;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob superBlob]
 * Entry: 0x100773ea0; original ABI: {__SuperBlob=III[0{__BlobIndex=II}]}16@0:8
 * Original instructions in modeled body: 98; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773ecc */
/* WARNING: Switch with 1 destination removed at 0x000100773f10 */
/* WARNING: Switch with 1 destination removed at 0x000100774064 */

undefined1  [16] Recovered_YYYSuperBlob_m03373(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint extraout_var;
  uint extraout_var_00;
  undefined1 auVar11 [16];
  
  uVar5 = func_0x00010094ee80(param_1);
  uVar6 = func_0x00010094ee80(param_1);
  uVar7 = func_0x00010094ee80(param_1);
  iVar8 = func_0x00010094ee80(param_1);
  uVar9 = func_0x00010094d6e0(param_1);
  func_0x00010094d6e0(param_1);
  func_0x00010094d6e0(param_1);
  iVar10 = func_0x00010094d6e0(param_1);
                    /* WARNING: Switch is manually overridden */
  uVar7 = (uVar7 + (~uVar7 | 0xff00)) * 0x100 + 0x100;
  uVar1 = func_0x00010093e360(param_1);
  uVar2 = func_0x00010093e360(param_1);
  uVar3 = func_0x00010093e360(param_1);
  iVar4 = func_0x00010093e360(param_1);
                    /* WARNING: Switch is manually overridden */
  auVar11._4_4_ =
       extraout_var & 0xff00 | uVar9 + (~uVar9 | 0xff000000) + 1 >> 0x18 |
       (extraout_var_00 & 0xff) << 0x10 | iVar10 << 0x18;
  auVar11._0_4_ =
       (uVar6 + (~uVar6 | 0xff0000) + 1 >> 8 | uVar5 >> 0x18 | uVar7) ^ iVar8 << 0x18 |
       uVar7 & iVar8 << 0x18;
  auVar11._8_4_ =
       uVar2 >> 8 & 0xff00 | uVar1 >> 0x18 | iVar4 << 0x18 |
       (uVar3 + (~uVar3 | 0xff00)) * 0x100 + 0x100;
  auVar11._12_4_ = 0;
  return auVar11;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob superBlobData]
 * Entry: 0x100774068; original ABI: @16@0:8
 * Original instructions in modeled body: 311; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007740a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007740f0 */
/* WARNING: Switch with 1 destination removed at 0x000100774104 */
/* WARNING: Switch with 1 destination removed at 0x00010077411c */
/* WARNING: Switch with 1 destination removed at 0x0001007741b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007741ec */
/* WARNING: Switch with 1 destination removed at 0x000100774208 */
/* WARNING: Switch with 1 destination removed at 0x000100774234 */
/* WARNING: Switch with 1 destination removed at 0x000100774240 */
/* WARNING: Switch with 1 destination removed at 0x00010077424c */
/* WARNING: Switch with 1 destination removed at 0x000100774260 */
/* WARNING: Switch with 1 destination removed at 0x00010077426c */
/* WARNING: Switch with 1 destination removed at 0x0001007742c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007742d0 */
/* WARNING: Switch with 1 destination removed at 0x000100774324 */
/* WARNING: Switch with 1 destination removed at 0x000100774330 */
/* WARNING: Switch with 1 destination removed at 0x000100774358 */
/* WARNING: Switch with 1 destination removed at 0x000100774368 */
/* WARNING: Switch with 1 destination removed at 0x000100774378 */
/* WARNING: Switch with 1 destination removed at 0x000100774394 */
/* WARNING: Switch with 1 destination removed at 0x0001007743cc */
/* WARNING: Switch with 1 destination removed at 0x0001007743d8 */
/* WARNING: Switch with 1 destination removed at 0x000100774404 */
/* WARNING: Switch with 1 destination removed at 0x000100774428 */
/* WARNING: Switch with 1 destination removed at 0x00010077445c */
/* WARNING: Switch with 1 destination removed at 0x000100774484 */
/* WARNING: Switch with 1 destination removed at 0x000100774490 */
/* WARNING: Switch with 1 destination removed at 0x00010077449c */
/* WARNING: Switch with 1 destination removed at 0x0001007744c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007744e0 */
/* WARNING: Switch with 1 destination removed at 0x0001007744ec */
/* WARNING: Switch with 1 destination removed at 0x0001007744fc */
/* WARNING: Switch with 1 destination removed at 0x000100774528 */
/* WARNING: Switch with 1 destination removed at 0x0001007745a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007745dc */
/* WARNING: Switch with 1 destination removed at 0x0001007745f8 */

void Recovered_YYYSuperBlob_m03374(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined1 auVar12 [16];
  undefined8 auStack_220 [16];
  undefined8 auStack_1a0 [8];
  undefined8 auStack_160 [2];
  undefined1 auStack_150 [128];
  undefined8 auStack_d0 [8];
  undefined8 auStack_90 [3];
  undefined8 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  puVar10 = auStack_90;
  puVar4 = auStack_d0;
  puVar8 = auStack_150;
  puVar9 = auStack_160;
  puVar5 = auStack_1a0;
  func_0x000100970820(param_1);
                    /* WARNING: Switch is manually overridden */
  ppuVar11 = &PTR_s_y_fileName_100c71000;
  puStack_78 = auStack_220;
                    /* WARNING: Switch is manually overridden */
  do {
    func_0x00010093f1c0(ppuVar11[0xef]);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x000100974880(param_1);
    uStack_70 = param_1;
                    /* WARNING: Switch is manually overridden */
    *puVar10 = auVar12._0_8_;
    *(int *)(puVar10 + 1) = auVar12._8_4_;
    func_0x000100938ac0(uVar3,auVar12._8_8_,puVar10,0xc);
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    func_0x00010093a3c0(uStack_70);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    ppuVar11 = auVar12._0_8_;
    param_1 = func_0x00010093e380(ppuVar11,auVar12._8_8_,puVar4,puVar8,0x10);
    uVar1 = uStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(param_1 == 0) {
    case false:
      lVar6 = *(long *)puVar4[2];
      uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_1007741ec_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*(long *)puVar4[2] == lVar6) * 8 + 0x100e2a770)) {
        case 0x10077422c:
          _objc_enumerationMutation(ppuVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        auVar12 = func_0x00010093a320(*(undefined8 *)(puVar4[1] + uVar7 * 8));
        *puVar9 = auVar12._0_8_;
        func_0x000100938ac0(uVar3,auVar12._8_8_,puVar9,8);
        uVar7 = uVar7 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(uVar7 < param_1) {
        case true:
          goto override_jmp_1007741ec_case_0;
        }
        param_1 = func_0x00010093e380(ppuVar11,extraout_x1,puVar4,puVar8,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(param_1 == 0) {
        case true:
          goto override_jmp_1007741d4_case_1;
        }
      } while( true );
    }
override_jmp_1007741d4_case_1:
    _objc_release(ppuVar11);
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    func_0x00010093a3c0(uVar1);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    puVar10 = puStack_78;
    uVar2 = auVar12._0_8_;
    puVar4 = (undefined8 *)func_0x00010093e380(uVar2,auVar12._8_8_,puVar5,puStack_78,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(puVar4 == (undefined8 *)0x0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      puVar8 = *(undefined1 **)puVar5[2];
                    /* WARNING: Switch is manually overridden */
      puVar9 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100774378_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*(undefined1 **)puVar5[2] == puVar8) * 8 + 0x100e2a8a0)) {
        case 0x1007743fc:
          _objc_enumerationMutation(uVar2);
                    /* WARNING: Switch is manually overridden */
        }
        func_0x00010093f1c0(*(undefined8 *)(puVar5[1] + (long)puVar9 * 8));
        auVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x000100938b20(uVar3,auVar12._8_8_,auVar12._0_8_);
        _objc_release(auVar12._0_8_);
                    /* WARNING: Switch is manually overridden */
        puVar9 = (undefined8 *)((long)puVar9 + 1);
                    /* WARNING: Switch is manually overridden */
        switch(puVar9 < puVar4) {
        case true:
          goto override_jmp_100774378_case_0;
        }
        puVar4 = (undefined8 *)func_0x00010093e380(uVar2,extraout_x1_00,puVar5,puVar10,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        puVar9 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(puVar4 == (undefined8 *)0x0) {
        case true:
          goto override_jmp_100774348_case_1;
        }
      } while( true );
    case true:
override_jmp_100774348_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar2);
      puVar5 = (undefined8 *)_objc_retain(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(puVar5);
      _objc_autoreleaseReturnValue(puVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010093f1c0(ppuVar11[0xef]);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100974880(param_1);
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob magic]
 * Entry: 0x1007745fc; original ABI: I16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100774604 */
/* WARNING: Switch with 1 destination removed at 0x000100774610 */
/* WARNING: Switch with 1 destination removed at 0x00010077461c */

undefined4 Recovered_YYYSuperBlob_m03375(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined4 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob setMagic:]
 * Entry: 0x100774628; original ABI: v20@0:8I16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100774630 */
/* WARNING: Switch with 1 destination removed at 0x000100774640 */

void Recovered_YYYSuperBlob_m03376(long param_1,undefined8 param_2,undefined4 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined4 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob blobs]
 * Entry: 0x100774648; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100774650 */
/* WARNING: Switch with 1 destination removed at 0x00010077465c */

undefined8 Recovered_YYYSuperBlob_m03377(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob setBlobs:]
 * Entry: 0x100774668; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100774684 */
/* WARNING: Switch with 1 destination removed at 0x0001007746a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007746c4 */

void Recovered_YYYSuperBlob_m03378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSuperBlob .cxx_destruct]
 * Entry: 0x1007746d8; original ABI: v16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007746ec */
/* WARNING: Switch with 1 destination removed at 0x0001007746f8 */
/* WARNING: Switch with 1 destination removed at 0x000100774708 */
/* WARNING: Switch with 1 destination removed at 0x00010077472c */

void Recovered_YYYSuperBlob_m03379(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYSuperBlob superBlobWithMagic:]
 * Entry: 0x100772f38; original ABI: @20@0:8I16
 * Original instructions in modeled body: 37; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100772f54 */
/* WARNING: Switch with 1 destination removed at 0x000100772f64 */
/* WARNING: Switch with 1 destination removed at 0x000100772fa8 */
/* WARNING: Switch with 1 destination removed at 0x000100772fb8 */
/* WARNING: Switch with 1 destination removed at 0x000100772fe4 */

void Recovered_YYYSuperBlob_m03380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar2 = func_0x000100951360(uRam0000000100c730d8);
  func_0x000100966ec0(auVar2._0_8_,auVar2._8_8_,param_3);
  uVar1 = _objc_retain(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYSuperBlob superBlobWithSuperBlobData:]
 * Entry: 0x100772ff8; original ABI: @24@0:8@16
 * Original instructions in modeled body: 404; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100773020 */
/* WARNING: Switch with 1 destination removed at 0x000100773070 */
/* WARNING: Switch with 1 destination removed at 0x000100773084 */
/* WARNING: Switch with 1 destination removed at 0x0001007730cc */
/* WARNING: Switch with 1 destination removed at 0x0001007730d8 */
/* WARNING: Switch with 1 destination removed at 0x000100773108 */
/* WARNING: Switch with 1 destination removed at 0x000100773120 */
/* WARNING: Switch with 1 destination removed at 0x00010077315c */
/* WARNING: Switch with 1 destination removed at 0x00010077316c */
/* WARNING: Switch with 1 destination removed at 0x000100773178 */
/* WARNING: Switch with 1 destination removed at 0x000100773184 */
/* WARNING: Switch with 1 destination removed at 0x000100773208 */
/* WARNING: Switch with 1 destination removed at 0x000100773214 */
/* WARNING: Switch with 1 destination removed at 0x00010077322c */
/* WARNING: Switch with 1 destination removed at 0x000100773248 */
/* WARNING: Switch with 1 destination removed at 0x000100773258 */
/* WARNING: Switch with 1 destination removed at 0x000100773264 */
/* WARNING: Switch with 1 destination removed at 0x0001007732dc */
/* WARNING: Switch with 1 destination removed at 0x000100773308 */
/* WARNING: Switch with 1 destination removed at 0x000100773314 */
/* WARNING: Switch with 1 destination removed at 0x00010077333c */
/* WARNING: Switch with 1 destination removed at 0x000100773348 */
/* WARNING: Switch with 1 destination removed at 0x000100773374 */
/* WARNING: Switch with 1 destination removed at 0x000100773384 */
/* WARNING: Switch with 1 destination removed at 0x0001007733ec */
/* WARNING: Switch with 1 destination removed at 0x0001007733f8 */
/* WARNING: Switch with 1 destination removed at 0x000100773404 */
/* WARNING: Switch with 1 destination removed at 0x000100773428 */
/* WARNING: Switch with 1 destination removed at 0x000100773434 */
/* WARNING: Switch with 1 destination removed at 0x000100773444 */
/* WARNING: Switch with 1 destination removed at 0x000100773454 */
/* WARNING: Switch with 1 destination removed at 0x000100773460 */
/* WARNING: Switch with 1 destination removed at 0x00010077346c */
/* WARNING: Switch with 1 destination removed at 0x000100773478 */
/* WARNING: Switch with 1 destination removed at 0x0001007734b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007734e4 */
/* WARNING: Switch with 1 destination removed at 0x000100773578 */
/* WARNING: Switch with 1 destination removed at 0x000100773588 */
/* WARNING: Switch with 1 destination removed at 0x0001007735bc */
/* WARNING: Switch with 1 destination removed at 0x0001007735cc */
/* WARNING: Switch with 1 destination removed at 0x000100773610 */
/* WARNING: Switch with 1 destination removed at 0x00010077361c */
/* WARNING: Switch with 1 destination removed at 0x000100773628 */
/* WARNING: Switch with 1 destination removed at 0x00010077364c */
/* WARNING: Switch with 1 destination removed at 0x000100773678 */
/* WARNING: Switch with 1 destination removed at 0x0001007736ac */
/* WARNING: Switch with 1 destination removed at 0x0001007736ec */
/* WARNING: Switch with 1 destination removed at 0x00010077370c */
/* WARNING: Switch with 1 destination removed at 0x000100773728 */
/* WARNING: Switch with 1 destination removed at 0x000100773758 */
/* WARNING: Switch with 1 destination removed at 0x000100773764 */
/* WARNING: Switch with 1 destination removed at 0x000100773770 */
/* WARNING: Switch with 1 destination removed at 0x0001007737ac */

void Recovered_YYYSuperBlob_m03381(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uStack_80;
  uint uStack_7c;
  uint auStack_70 [2];
  uint uStack_68;
  
                    /* WARNING: Switch is manually overridden */
  auVar13 = _objc_retain(param_3);
  uVar5 = auVar13._0_8_;
  func_0x0001009451e0(uVar5,auVar13._8_8_,auStack_70,0xc);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar6 = func_0x000100951360(uRam0000000100c730d8);
  uVar2 = func_0x00010094ee80();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar2 != (auStack_70[0] >> 8 & 0xff00 |
                   auStack_70[0] + (~auStack_70[0] | 0xff000000) + 1 >> 0x18 |
                   (auStack_70[0] >> 8 & 0xff) << 0x10 | auStack_70[0] << 0x18)) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar1 = uStack_68 >> 8 & 0xff00 | uStack_68 >> 0x18;
                    /* WARNING: Switch is manually overridden */
    uVar12 = 0;
    uVar2 = (uStack_68 + (~uStack_68 | 0xff00)) * 0x100 + 0x100;
    uVar2 = ((uVar1 ^ uVar2) + uVar1) - (uVar1 & (uVar2 ^ 0xffffffff)) | uStack_68 << 0x18;
    iVar3 = 0xc;
                    /* WARNING: Switch is manually overridden */
    do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uVar12 < uVar2) {
      case false:
        goto override_jmp_10077332c_case_1;
      case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        auVar13 = func_0x0001007724c8(iVar3,8);
        uVar7 = func_0x00010094d6e0(uVar5);
                    /* WARNING: Switch is manually overridden */
        switch((ulong)(auVar13._0_8_ + auVar13._8_8_) <= uVar7) {
        case false:
          lVar10 = 0;
          iVar4 = 1;
          break;
        case true:
          auVar13 = func_0x0001007724c8(iVar3,8);
          func_0x000100945200(uVar5,auVar13._8_8_,&uStack_80,auVar13._0_8_,auVar13._8_8_);
          auVar13 = func_0x000100951360(uRam0000000100c730d0);
          uVar11 = auVar13._0_8_;
          uVar1 = (uStack_80 & 0xff00ff00) >> 8 | (uStack_80 & 0xff00ff) << 8;
          func_0x00010096f8e0(uVar11,auVar13._8_8_,uVar1 >> 0x10 | uVar1 << 0x10);
          uVar1 = (uStack_7c & 0xff00ff00) >> 8 | (uStack_7c & 0xff00ff) << 8;
          func_0x000100968740(uVar11,extraout_x1,uVar1 >> 0x10 | uVar1 << 0x10);
          func_0x00010093a3c0(uVar6);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          func_0x000100937000(auVar13._0_8_,auVar13._8_8_,uVar11);
                    /* WARNING: Switch is manually overridden */
          _objc_release(auVar13._0_8_);
          _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          iVar4 = 0;
          iVar3 = iVar3 + 8;
          lVar10 = 1;
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)(lVar10 * 8 + 0x100e2a140)) {
        case 0x100773240:
                    /* WARNING: Switch is manually overridden */
          uVar12 = uVar12 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          break;
        case 0x100773340:
          goto override_jmp_10077323c_case_1;
        }
      }
    } while( true );
  case true:
    uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
  }
  goto override_jmp_10077316c_case_0;
override_jmp_100773740_case_1:
  uVar11 = _objc_retain(uVar6);
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_100773364_case_1;
override_jmp_10077332c_case_1:
  iVar4 = 2;
                    /* WARNING: Switch is manually overridden */
override_jmp_10077323c_case_1:
                    /* WARNING: Switch is manually overridden */
  uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)((ulong)(iVar4 == 2) * 8 + 0x100e2a190)) {
  case 0x100773368:
    uVar12 = 0;
                    /* WARNING: Switch is manually overridden */
    do {
                    /* WARNING: Switch is manually overridden */
      switch(uVar12 < uVar2) {
      case false:
        goto override_jmp_100773740_case_1;
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x00010093a3c0(uVar6);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        func_0x000100951c40(auVar13._0_8_,auVar13._8_8_,uVar12);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar13._0_8_);
        iVar3 = func_0x000100951d60(uVar11);
        uVar12 = uVar12 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar12 < uVar2) {
        case false:
          iVar4 = func_0x00010094d6e0(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          break;
        case true:
          func_0x00010093a3c0(uVar6);
          auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
          func_0x000100951c40(auVar13._0_8_,auVar13._8_8_,uVar12);
          uVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
          _objc_release(auVar13._0_8_);
          iVar4 = func_0x000100951d60(uVar8);
          _objc_release(uVar8);
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        auVar13 = func_0x0001007724c8(iVar3,iVar4 - iVar3);
        uVar9 = auVar13._8_8_;
        uVar7 = auVar13._0_8_;
        auVar13 = func_0x00010094d6e0(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch((uVar7 ^ uVar9) + (uVar7 & uVar9) * 2 <= auVar13._0_8_) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x000100974540(uVar5,auVar13._8_8_,uVar7,uVar9);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          func_0x0001009628a0(uVar11,auVar13._8_8_,auVar13._0_8_);
          _objc_release(auVar13._0_8_);
          uVar8 = uRam0000000100c730c8;
          func_0x00010093f1c0(uVar11);
          auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          func_0x00010093a3a0(uVar8,auVar13._8_8_,auVar13._0_8_);
          auVar14 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          func_0x000100960cc0(uVar11,auVar14._8_8_,auVar14._0_8_);
          _objc_release(auVar14._0_8_);
          _objc_release(auVar13._0_8_);
                    /* WARNING: Switch is manually overridden */
        }
        _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    } while( true );
  }
override_jmp_100773364_case_1:
                    /* WARNING: Switch is manually overridden */
override_jmp_10077316c_case_0:
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_autoreleaseReturnValue(uVar11);
                    /* WARNING: Switch is manually overridden */
  return;
}



