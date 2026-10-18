/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel initWithKey:value:index:]
 * Entry: 0x10000cdec; original ABI: @40@0:8@16@24q32
 * Original instructions in modeled body: 123; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000ce1c */
/* WARNING: Switch with 1 destination removed at 0x00010000ce60 */
/* WARNING: Switch with 1 destination removed at 0x00010000ce88 */
/* WARNING: Switch with 1 destination removed at 0x00010000ceac */
/* WARNING: Switch with 1 destination removed at 0x00010000ceb8 */
/* WARNING: Switch with 1 destination removed at 0x00010000cf0c */
/* WARNING: Switch with 1 destination removed at 0x00010000cf18 */
/* WARNING: Switch with 1 destination removed at 0x00010000cf3c */
/* WARNING: Switch with 1 destination removed at 0x00010000cf60 */
/* WARNING: Switch with 1 destination removed at 0x00010000cf6c */
/* WARNING: Switch with 1 destination removed at 0x00010000cf78 */
/* WARNING: Switch with 1 destination removed at 0x00010000cfa0 */
/* WARNING: Switch with 1 destination removed at 0x00010000cfac */
/* WARNING: Switch with 1 destination removed at 0x00010000cfec */
/* WARNING: Switch with 1 destination removed at 0x00010000d008 */
/* WARNING: Switch with 1 destination removed at 0x00010000d024 */
/* WARNING: Switch with 1 destination removed at 0x00010000d040 */

undefined8
Recovered_YYYPlistInfoModel_m00039
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  auVar5 = func_0x000100948020(param_1);
  lVar3 = auVar5._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100010698(lVar3,auVar5._8_8_,uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010001069c(lVar3,extraout_x1,uVar2);
    func_0x0001000106a0(lVar3,extraout_x1_00,uVar1);
    func_0x000100965520(lVar3,extraout_x1_01,param_5);
    func_0x00010096cf60(lVar3,extraout_x1_02,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(param_5 == 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100968c20(lVar3,extraout_x1_04,5);
      func_0x00010096cf60(lVar3,extraout_x1_03,1);
    }
    func_0x00010093c540(lVar3);
                    /* WARNING: Switch is manually overridden */
    func_0x0001000106a4(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar4 = _objc_retain(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar4;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel getPlistValue]
 * Entry: 0x10000d044; original ABI: @16@0:8
 * Original instructions in modeled body: 361; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000d0a0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d0ac */
/* WARNING: Switch with 1 destination removed at 0x00010000d0b8 */
/* WARNING: Switch with 1 destination removed at 0x00010000d0d4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d13c */
/* WARNING: Switch with 1 destination removed at 0x00010000d164 */
/* WARNING: Switch with 1 destination removed at 0x00010000d174 */
/* WARNING: Switch with 1 destination removed at 0x00010000d198 */
/* WARNING: Switch with 1 destination removed at 0x00010000d1bc */
/* WARNING: Switch with 1 destination removed at 0x00010000d1f0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d218 */
/* WARNING: Switch with 1 destination removed at 0x00010000d230 */
/* WARNING: Switch with 1 destination removed at 0x00010000d264 */
/* WARNING: Switch with 1 destination removed at 0x00010000d298 */
/* WARNING: Switch with 1 destination removed at 0x00010000d2c4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d2e0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d2ec */
/* WARNING: Switch with 1 destination removed at 0x00010000d2f8 */
/* WARNING: Switch with 1 destination removed at 0x00010000d308 */
/* WARNING: Switch with 1 destination removed at 0x00010000d330 */
/* WARNING: Switch with 1 destination removed at 0x00010000d354 */
/* WARNING: Switch with 1 destination removed at 0x00010000d380 */
/* WARNING: Switch with 1 destination removed at 0x00010000d3e4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d3f4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d410 */
/* WARNING: Switch with 1 destination removed at 0x00010000d498 */
/* WARNING: Switch with 1 destination removed at 0x00010000d4c4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d4d0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d4fc */
/* WARNING: Switch with 1 destination removed at 0x00010000d508 */
/* WARNING: Switch with 1 destination removed at 0x00010000d514 */
/* WARNING: Switch with 1 destination removed at 0x00010000d520 */
/* WARNING: Switch with 1 destination removed at 0x00010000d548 */
/* WARNING: Switch with 1 destination removed at 0x00010000d554 */
/* WARNING: Switch with 1 destination removed at 0x00010000d58c */
/* WARNING: Switch with 1 destination removed at 0x00010000d598 */
/* WARNING: Switch with 1 destination removed at 0x00010000d5c0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d5dc */
/* WARNING: Switch with 1 destination removed at 0x00010000d5e8 */
/* WARNING: Switch with 1 destination removed at 0x00010000d5f0 */
/* WARNING: Switch with 1 destination removed at 0x00010000d60c */
/* WARNING: Switch with 1 destination removed at 0x00010000d68c */
/* WARNING: Switch with 1 destination removed at 0x00010000d6b8 */

void Recovered_YYYPlistInfoModel_m00040(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_1f0 [128];
  undefined *puStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [128];
  undefined8 auStack_b0 [9];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar6 = auStack_b0;
  puVar4 = auStack_130;
  ppuVar5 = &puStack_170;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100978be0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch((long)uVar1 < 5) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch((long)uVar1 < 6) {
    case true:
      func_0x0001000106c8(uRam0000000100c71440);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      puStack_170 = (undefined *)0x0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      func_0x0001009744e0(param_1);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      puVar6 = auVar11._0_8_;
      puVar3 = (undefined1 *)func_0x00010093e380(puVar6,auVar11._8_8_,ppuVar5,auStack_1f0,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(puVar3 == (undefined1 *)0x0) {
      case false:
        lVar9 = *plStack_160;
                    /* WARNING: Switch is manually overridden */
        puVar10 = (undefined1 *)0x0;
        puVar4 = puVar3;
                    /* WARNING: Switch is manually overridden */
override_jmp_10000d3f4_case_0:
        do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined8 *)((ulong)(*plStack_160 == lVar9) * 8 + 0x100ca43e0)) {
          case 0x10000d4f4:
            _objc_enumerationMutation(puVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          }
          uVar7 = *(undefined8 *)(lStack_168 + (long)puVar10 * 8);
          func_0x0001000106cc(uVar7);
          param_1 = _objc_retainAutoreleasedReturnValue();
          func_0x0001000106d0(uVar7);
          auVar11 = _objc_retainAutoreleasedReturnValue();
          func_0x0001000106d4(uVar2,auVar11._8_8_,param_1,auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
          _objc_release(auVar11._0_8_);
          _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          puVar10 = puVar10 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(puVar10 < puVar4) {
          case true:
            goto override_jmp_10000d3f4_case_0;
          }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          puVar4 = (undefined1 *)func_0x00010093e380(puVar6,extraout_x1_00,ppuVar5,auStack_1f0,0x10)
          ;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          puVar10 = (undefined1 *)0x0;
                    /* WARNING: Switch is manually overridden */
          switch(puVar4 == (undefined1 *)0x0) {
          case true:
            goto override_jmp_10000d3cc_case_1;
          }
        } while( true );
      case true:
override_jmp_10000d3cc_case_1:
                    /* WARNING: Switch is manually overridden */
        _objc_release(puVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      goto override_jmp_10000d380_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 == 6) {
    case true:
      goto override_jmp_10000d11c_case_0;
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch((long)uVar1 < 4) {
    case false:
      ppuVar5 = &PTR_s_y_fileName_100c71000;
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10000d164_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 < 4) {
    case true:
override_jmp_10000d11c_case_0:
      func_0x0001000106b8(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10000d380_case_0;
    }
  }
  uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10000d380_case_0:
  do {
    _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    func_0x0001000106d8(ppuVar5[0x6f]);
    _objc_retainAutoreleasedReturnValue();
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
override_jmp_10000d164_case_0:
    func_0x0001000106bc(ppuVar5[0x6f]);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    func_0x0001009744e0(param_1);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    ppuVar5 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
    uVar1 = func_0x00010093e380(ppuVar5,auVar11._8_8_,puVar6,puVar4,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar9 = *(long *)puVar6[2];
      uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10000d230_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
        switch(*(long *)puVar6[2] == lVar9) {
        case false:
                    /* WARNING: Switch is manually overridden */
          _objc_enumerationMutation(ppuVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        func_0x0001000106c0(*(undefined8 *)(puVar6[1] + uVar8 * 8));
        auVar11 = _objc_retainAutoreleasedReturnValue();
        param_1 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
        func_0x0001000106c4(uVar2,auVar11._8_8_,param_1);
        _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar8 = uVar8 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar8 < uVar1) {
        case true:
          goto override_jmp_10000d230_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        uVar1 = func_0x00010093e380(ppuVar5,extraout_x1,puVar6,puVar4,0x10);
                    /* WARNING: Switch is manually overridden */
        uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar1 == 0) {
        case true:
          goto override_jmp_10000d20c_case_1;
        }
      } while( true );
    case true:
override_jmp_10000d20c_case_1:
      _objc_release(ppuVar5);
                    /* WARNING: Switch is manually overridden */
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel checkValueType]
 * Entry: 0x10000d6bc; original ABI: v16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000d6d8 */
/* WARNING: Switch with 1 destination removed at 0x00010000d6e4 */
/* WARNING: Switch with 1 destination removed at 0x00010000d710 */
/* WARNING: Switch with 1 destination removed at 0x00010000d724 */
/* WARNING: Switch with 1 destination removed at 0x00010000d758 */

void Recovered_YYYPlistInfoModel_m00041(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100978b20(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar3 = func_0x00010093c700(uRam0000000100c71448);
  uVar2 = func_0x00010094ba40(uVar1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010000d768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100ca4570))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setupSubValues]
 * Entry: 0x10000db0c; original ABI: v16@0:8
 * Original instructions in modeled body: 106; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000db40 */
/* WARNING: Switch with 1 destination removed at 0x00010000db90 */
/* WARNING: Switch with 1 destination removed at 0x00010000dbc8 */
/* WARNING: Switch with 1 destination removed at 0x00010000dc00 */
/* WARNING: Switch with 1 destination removed at 0x00010000dc40 */
/* WARNING: Switch with 1 destination removed at 0x00010000dcc4 */
/* WARNING: Switch with 1 destination removed at 0x00010000e1d0 */

void Recovered_YYYPlistInfoModel_m00042(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90c9c == 0) {
  case true:
    bRam0000000100ca3de8 = bRam0000000100ca3de0 ^ 0xd;
    bRam0000000100ca3de9 = bRam0000000100ca3de1 ^ 0xf8;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100ca3dea = bRam0000000100ca3de2 + (bRam0000000100ca3de2 & 0x34) * -2 + '4';
    bRam0000000100ca3deb = bRam0000000100ca3de3 ^ 0x40;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca3dec = bRam0000000100ca3de4 ^ 0x32;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca3ded = bRam0000000100ca3de5 ^ 0x24;
    cRam0000000100ca3dee = bRam0000000100ca3de6 + (bRam0000000100ca3de6 & 6) * -2 + '\x06';
    bRam0000000100ca3def = bRam0000000100ca3de7 ^ 0x9f;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90c9c = 1;
  func_0x000100010704(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  auVar3 = func_0x000100010708(uRam0000000100c713e8);
  uVar1 = func_0x00010094ba40(uVar2,auVar3._8_8_,auVar3._0_8_);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010000dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100ca48d0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel getAllNode]
 * Entry: 0x10000e3f8; original ABI: @16@0:8
 * Original instructions in modeled body: 40; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000e438 */
/* WARNING: Switch with 1 destination removed at 0x00010000e464 */
/* WARNING: Switch with 1 destination removed at 0x00010000e474 */
/* WARNING: Switch with 1 destination removed at 0x00010000e4a8 */

void Recovered_YYYPlistInfoModel_m00043(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
  func_0x000100939020(uRam0000000100c71378);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010001076c(auVar2._0_8_,auVar2._8_8_,param_1);
  uVar1 = func_0x000100972280(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010000e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100ca4be0))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel getValueTypeString]
 * Entry: 0x10000f18c; original ABI: @16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000f1a8 */
/* WARNING: Switch with 1 destination removed at 0x00010000f1b4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f1d8 */
/* WARNING: Switch with 1 destination removed at 0x00010000f1e8 */
/* WARNING: Switch with 1 destination removed at 0x00010000f224 */

void Recovered_YYYPlistInfoModel_m00044(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = uRam0000000100c71468;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar2 = func_0x000100010784(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100010788(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_retainAutoreleasedReturnValue();
  _objc_autoreleaseReturnValue();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel getValueString]
 * Entry: 0x10000f238; original ABI: @16@0:8
 * Original instructions in modeled body: 465; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000f268 */
/* WARNING: Switch with 1 destination removed at 0x00010000f274 */
/* WARNING: Switch with 1 destination removed at 0x00010000f290 */
/* WARNING: Switch with 1 destination removed at 0x00010000f29c */
/* WARNING: Switch with 1 destination removed at 0x00010000f2c0 */
/* WARNING: Switch with 1 destination removed at 0x00010000f3bc */
/* WARNING: Switch with 1 destination removed at 0x00010000f510 */
/* WARNING: Switch with 1 destination removed at 0x00010000f51c */
/* WARNING: Switch with 1 destination removed at 0x00010000f528 */
/* WARNING: Switch with 1 destination removed at 0x00010000f554 */
/* WARNING: Switch with 1 destination removed at 0x00010000f58c */
/* WARNING: Switch with 1 destination removed at 0x00010000f5f4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f610 */
/* WARNING: Switch with 1 destination removed at 0x00010000f630 */
/* WARNING: Switch with 1 destination removed at 0x00010000f688 */
/* WARNING: Switch with 1 destination removed at 0x00010000f6b0 */
/* WARNING: Switch with 1 destination removed at 0x00010000f6d4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f6f0 */
/* WARNING: Switch with 1 destination removed at 0x00010000f734 */
/* WARNING: Switch with 1 destination removed at 0x00010000f7a4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f7e4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f7f0 */
/* WARNING: Switch with 1 destination removed at 0x00010000f7fc */
/* WARNING: Switch with 1 destination removed at 0x00010000f808 */
/* WARNING: Switch with 1 destination removed at 0x00010000f824 */
/* WARNING: Switch with 1 destination removed at 0x00010000f83c */
/* WARNING: Switch with 1 destination removed at 0x00010000f85c */
/* WARNING: Switch with 1 destination removed at 0x00010000f868 */
/* WARNING: Switch with 1 destination removed at 0x00010000f874 */
/* WARNING: Switch with 1 destination removed at 0x00010000f8ac */
/* WARNING: Switch with 1 destination removed at 0x00010000f8bc */
/* WARNING: Switch with 1 destination removed at 0x00010000f8cc */
/* WARNING: Switch with 1 destination removed at 0x00010000f910 */
/* WARNING: Switch with 1 destination removed at 0x00010000f930 */
/* WARNING: Switch with 1 destination removed at 0x00010000f94c */
/* WARNING: Switch with 1 destination removed at 0x00010000f9dc */
/* WARNING: Switch with 1 destination removed at 0x00010000fa08 */
/* WARNING: Switch with 1 destination removed at 0x00010000fab0 */

void Recovered_YYYPlistInfoModel_m00045(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ca4 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca3f9b = bRam0000000100ca3f98 ^ 0xaf;
    bRam0000000100ca3f9c = bRam0000000100ca3f99 ^ 0xc4;
    bRam0000000100ca3f9d = bRam0000000100ca3f9a ^ 0x8a;
    bRam0000000100ca3fa8 = bRam0000000100ca3f9e ^ 0x2b;
    cRam0000000100ca3fa9 = bRam0000000100ca3f9f + (bRam0000000100ca3f9f & 0x65) * -2 + -0x1b;
    cRam0000000100ca3faa = bRam0000000100ca3fa0 + (bRam0000000100ca3fa0 & 0x20) * -2 + ' ';
    bRam0000000100ca3fab = ~((bRam0000000100ca3fa1 | 0xca) & (bRam0000000100ca3fa1 ^ 0xff | 0x35));
    bRam0000000100ca3fac = bRam0000000100ca3fa2 ^ 0xc9;
    bRam0000000100ca3fad = bRam0000000100ca3fa3 ^ 0xea;
    bRam0000000100ca3fae = bRam0000000100ca3fa4 ^ 0x35;
    bRam0000000100ca3faf = bRam0000000100ca3fa5 ^ 0x35;
    bRam0000000100ca3fb0 = bRam0000000100ca3fa6 ^ 0x56;
    bRam0000000100ca3fb1 = bRam0000000100ca3fa7 ^ 0x89;
    bRam0000000100ca3fbe = bRam0000000100ca3fb2 ^ 0xee;
    cRam0000000100ca3fbf = bRam0000000100ca3fb3 + (bRam0000000100ca3fb3 & 0x23) * -2 + -0x5d;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca3fc0 = bRam0000000100ca3fb4 ^ 0xa5;
    bRam0000000100ca3fc1 = bRam0000000100ca3fb5 ^ 0x80;
    bRam0000000100ca3fc2 = bRam0000000100ca3fb6 ^ 0x2f;
    cRam0000000100ca3fc3 = bRam0000000100ca3fb7 + (bRam0000000100ca3fb7 & 3) * -2 + '\x03';
    bRam0000000100ca3fc4 = bRam0000000100ca3fb8 ^ 0xca;
    bRam0000000100ca3fc5 = bRam0000000100ca3fb9 ^ 0x7e;
    bRam0000000100ca3fc6 = bRam0000000100ca3fba ^ 0x57;
    bRam0000000100ca3fc7 = bRam0000000100ca3fbb ^ 0xc3;
    bRam0000000100ca3fc8 = bRam0000000100ca3fbc ^ 0x57;
    cRam0000000100ca3fc9 = bRam0000000100ca3fbd + (bRam0000000100ca3fbd & 0x1d) * -2 + '\x1d';
    bRam0000000100ca3f94 = bRam0000000100ca3f90 ^ 4;
    bRam0000000100ca3f95 = bRam0000000100ca3f91 ^ 0x26;
    bRam0000000100ca3f96 = bRam0000000100ca3f92 ^ 0x86;
    cRam0000000100ca3f97 = bRam0000000100ca3f93 + (bRam0000000100ca3f93 & 0x54) * -2 + 'T';
  }
  iRam0000000100e90ca4 = 1;
  func_0x000100978b20(param_1);
  lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case false:
    uVar4 = 0x100b391a8;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_10000f554_case_0;
  }
  lVar2 = func_0x000100978be0(param_1);
  uVar3 = uRam0000000100c71448;
  uVar4 = uRam0000000100c71410;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 < 3) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 < 5) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 < 6) {
      case false:
                    /* WARNING: Switch is manually overridden */
        switch(lVar2 == 6) {
        case true:
                    /* WARNING: Switch is manually overridden */
          uVar5 = _objc_retain(lVar6);
          uVar3 = uRam0000000100c71448;
          uVar4 = uRam0000000100c71410;
          auVar7 = func_0x00010094d6e0(uVar5);
          func_0x0001000107a4(uVar4,auVar7._8_8_,auVar7._0_8_);
          auVar7 = _objc_retainAutoreleasedReturnValue();
          func_0x000100974200(uVar3,auVar7._8_8_,0x100ca4030);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release(auVar7._0_8_);
          _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_10000f554_case_0;
        }
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar5 = _objc_retain(lVar6);
        uVar3 = uRam0000000100c71448;
        uVar4 = uRam0000000100c71410;
        auVar7 = func_0x00010001079c(uVar5);
        func_0x0001000107a0(uVar4,auVar7._8_8_,auVar7._0_8_);
        auVar7 = _objc_retainAutoreleasedReturnValue();
        func_0x000100974200(uVar3,auVar7._8_8_,0x100ca4010);
        uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        _objc_release(auVar7._0_8_);
        _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_10000f554_case_0;
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 < 4) {
      case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        auVar7 = func_0x000100010798(lVar6);
        func_0x000100951b20(uVar4,auVar7._8_8_,auVar7._0_8_);
        auVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x000100974200(uVar3,auVar7._8_8_,0x100ca4010);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar7._0_8_);
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar3 = _objc_retain(lVar6);
        func_0x000100010794();
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      goto override_jmp_10000f554_case_0;
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 < 1) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 < 2) {
      case false:
        iVar1 = func_0x00010093a560(lVar6);
                    /* WARNING: Switch is manually overridden */
        uVar4 = 0x100ca3fd0;
        if (iVar1 == 0) {
          uVar4 = 0x100ca3ff0;
        }
        uVar4 = _objc_retain(uVar4);
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        func_0x000100974120(lVar6);
        uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      goto override_jmp_10000f554_case_0;
    case true:
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 == 0) {
      case true:
        uVar4 = _objc_retain(lVar6);
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_10000f554_case_0;
      }
    }
  }
  func_0x0001000107a8(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010093c700();
                    /* WARNING: Switch is manually overridden */
  _NSStringFromClass(uVar4);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
override_jmp_10000f554_case_0:
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar4);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel removeSubModel:]
 * Entry: 0x10000fab4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 122; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000fad0 */
/* WARNING: Switch with 1 destination removed at 0x00010000fafc */
/* WARNING: Switch with 1 destination removed at 0x00010000fb20 */
/* WARNING: Switch with 1 destination removed at 0x00010000fb2c */
/* WARNING: Switch with 1 destination removed at 0x00010000fb48 */
/* WARNING: Switch with 1 destination removed at 0x00010000fb6c */
/* WARNING: Switch with 1 destination removed at 0x00010000fbbc */
/* WARNING: Switch with 1 destination removed at 0x00010000fbcc */
/* WARNING: Switch with 1 destination removed at 0x00010000fc10 */
/* WARNING: Switch with 1 destination removed at 0x00010000fc1c */
/* WARNING: Switch with 1 destination removed at 0x00010000fc3c */
/* WARNING: Switch with 1 destination removed at 0x00010000fc48 */
/* WARNING: Switch with 1 destination removed at 0x00010000fc64 */
/* WARNING: Switch with 1 destination removed at 0x00010000fc70 */
/* WARNING: Switch with 1 destination removed at 0x00010000fcc4 */
/* WARNING: Switch with 1 destination removed at 0x00010000fd30 */

void Recovered_YYYPlistInfoModel_m00046(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x0001009744e0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095b440(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  lVar3 = func_0x000100978be0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 == 5) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x000100978be0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 == 4) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100978b20(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x000100978b20(uVar1);
      auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010095b440(uVar2,auVar4._8_8_,auVar4._0_8_);
      _objc_release(auVar4._0_8_);
      _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x0001000107e8(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094cc20(uVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010095b4a0(uVar2,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel addArrayValue:]
 * Entry: 0x10000fd34; original ABI: @24@0:8@16
 * Original instructions in modeled body: 184; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000fd5c */
/* WARNING: Switch with 1 destination removed at 0x00010000fd74 */
/* WARNING: Switch with 1 destination removed at 0x00010000fdd4 */
/* WARNING: Switch with 1 destination removed at 0x00010000fe48 */
/* WARNING: Switch with 1 destination removed at 0x00010000fe5c */
/* WARNING: Switch with 1 destination removed at 0x00010000fe84 */
/* WARNING: Switch with 1 destination removed at 0x00010000feac */
/* WARNING: Switch with 1 destination removed at 0x00010000fec0 */
/* WARNING: Switch with 1 destination removed at 0x00010000ff44 */
/* WARNING: Switch with 1 destination removed at 0x00010000ff54 */
/* WARNING: Switch with 1 destination removed at 0x0001000100a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000100ac */
/* WARNING: Switch with 1 destination removed at 0x0001000100f4 */

void Recovered_YYYPlistInfoModel_m00047(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ca8 == 0) {
  case true:
    bRam0000000100ca4058 = bRam0000000100ca4050 ^ 0xbb;
    bRam0000000100ca4059 = bRam0000000100ca4051 ^ 0x93;
    bRam0000000100ca405a = bRam0000000100ca4052 ^ 0x52;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca405b = bRam0000000100ca4053 ^ 0x9b;
    bRam0000000100ca405c = bRam0000000100ca4054 ^ 0x96;
    bRam0000000100ca405d = bRam0000000100ca4055 ^ 0xc5;
    cRam0000000100ca405e = bRam0000000100ca4056 + (bRam0000000100ca4056 & 0x6b) * -2 + 'k';
    bRam0000000100ca405f = bRam0000000100ca4057 ^ 0x3d;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90ca8 = 1;
  uVar1 = _objc_retain(param_3);
  lVar2 = func_0x0001000107f4(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 4) {
  case false:
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar3 = _objc_alloc(uRam0000000100c71468);
    uVar6 = uRam0000000100c71448;
    uVar5 = uRam0000000100c71410;
    func_0x0001000107f8(param_1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    auVar7 = func_0x00010093e360();
    func_0x0001000107fc(uVar5,auVar7._8_8_,auVar7._0_8_);
    auVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100974200(uVar6,auVar7._8_8_,0x100ca4060);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    auVar8 = func_0x000100947c60(param_1);
    uVar6 = func_0x000100949540(uVar3,auVar8._8_8_,uVar5,uVar1,auVar8._0_8_ + 1);
    _objc_release(uVar5);
    _objc_release(auVar7._0_8_);
    _objc_release(uVar4);
    func_0x000100978b20(param_1);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937000(auVar7._0_8_,auVar7._8_8_,uVar1);
    _objc_release(auVar7._0_8_);
    func_0x0001009744e0(param_1);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937000(auVar7._0_8_,auVar7._8_8_,uVar6);
    _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar6);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel addDictionaryValue:key:]
 * Entry: 0x1000100f8; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 96; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010120 */
/* WARNING: Switch with 1 destination removed at 0x000100010130 */
/* WARNING: Switch with 1 destination removed at 0x000100010158 */
/* WARNING: Switch with 1 destination removed at 0x000100010168 */
/* WARNING: Switch with 1 destination removed at 0x0001000101c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000101e8 */
/* WARNING: Switch with 1 destination removed at 0x000100010240 */
/* WARNING: Switch with 1 destination removed at 0x00010001025c */
/* WARNING: Switch with 1 destination removed at 0x000100010300 */

void Recovered_YYYPlistInfoModel_m00048
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  lVar3 = func_0x000100978be0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 == 5) {
  case false:
    uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar4 = _objc_alloc(uRam0000000100c71468);
    auVar5 = func_0x000100947c60(param_1);
    uVar4 = func_0x000100010818(uVar4,auVar5._8_8_,uVar2,uVar1,auVar5._0_8_ + 1);
                    /* WARNING: Switch is manually overridden */
    auVar5 = func_0x000100978be0(param_1);
    func_0x000100968c20(uVar4,auVar5._8_8_,auVar5._0_8_);
    func_0x000100978b20(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010001081c(auVar5._0_8_,auVar5._8_8_,uVar1,uVar2);
    func_0x000100010820(param_1);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937000(auVar6._0_8_,auVar6._8_8_,uVar4);
    _objc_release(auVar6._0_8_);
    _objc_release(auVar5._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar4);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel index]
 * Entry: 0x100010304; original ABI: q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010001030c */
/* WARNING: Switch with 1 destination removed at 0x000100010318 */

undefined8 Recovered_YYYPlistInfoModel_m00049(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setIndex:]
 * Entry: 0x100010324; original ABI: v24@0:8q16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010001032c */
/* WARNING: Switch with 1 destination removed at 0x00010001033c */
/* WARNING: Switch with 1 destination removed at 0x000100010348 */

void Recovered_YYYPlistInfoModel_m00050(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel parentValueType]
 * Entry: 0x100010350; original ABI: Q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010358 */
/* WARNING: Switch with 1 destination removed at 0x000100010364 */

undefined8 Recovered_YYYPlistInfoModel_m00051(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setParentValueType:]
 * Entry: 0x100010370; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010378 */
/* WARNING: Switch with 1 destination removed at 0x000100010388 */
/* WARNING: Switch with 1 destination removed at 0x000100010394 */

void Recovered_YYYPlistInfoModel_m00052(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel valueType]
 * Entry: 0x10001039c; original ABI: Q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000103a4 */
/* WARNING: Switch with 1 destination removed at 0x0001000103b0 */

undefined8 Recovered_YYYPlistInfoModel_m00053(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setValueType:]
 * Entry: 0x1000103bc; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000103c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000103d0 */

void Recovered_YYYPlistInfoModel_m00054(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel key]
 * Entry: 0x1000103dc; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000103e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000103f0 */

undefined8 Recovered_YYYPlistInfoModel_m00055(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setKey:]
 * Entry: 0x1000103fc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010001040c */
/* WARNING: Switch with 1 destination removed at 0x000100010420 */

void Recovered_YYYPlistInfoModel_m00056(void)

{
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel keyPath]
 * Entry: 0x10001042c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010434 */
/* WARNING: Switch with 1 destination removed at 0x000100010440 */

undefined8 Recovered_YYYPlistInfoModel_m00057(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setKeyPath:]
 * Entry: 0x10001044c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010001045c */
/* WARNING: Switch with 1 destination removed at 0x000100010470 */

void Recovered_YYYPlistInfoModel_m00058(void)

{
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel value]
 * Entry: 0x10001047c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010484 */
/* WARNING: Switch with 1 destination removed at 0x000100010490 */

undefined8 Recovered_YYYPlistInfoModel_m00059(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setValue:]
 * Entry: 0x10001049c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000104b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000104d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000104ec */

void Recovered_YYYPlistInfoModel_m00060(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel showSub]
 * Entry: 0x1000104fc; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010504 */
/* WARNING: Switch with 1 destination removed at 0x000100010510 */

undefined1 Recovered_YYYPlistInfoModel_m00061(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setShowSub:]
 * Entry: 0x10001051c; original ABI: v20@0:8B16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010524 */
/* WARNING: Switch with 1 destination removed at 0x000100010530 */
/* WARNING: Switch with 1 destination removed at 0x000100010540 */

void Recovered_YYYPlistInfoModel_m00062(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel subValues]
 * Entry: 0x100010548; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010550 */
/* WARNING: Switch with 1 destination removed at 0x00010001055c */

undefined8 Recovered_YYYPlistInfoModel_m00063(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel setSubValues:]
 * Entry: 0x100010568; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010588 */
/* WARNING: Switch with 1 destination removed at 0x0001000105a4 */
/* WARNING: Switch with 1 destination removed at 0x0001000105b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000105e8 */

void Recovered_YYYPlistInfoModel_m00064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYPlistInfoModel .cxx_destruct]
 * Entry: 0x1000105ec; original ABI: v16@0:8
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100010604 */
/* WARNING: Switch with 1 destination removed at 0x000100010628 */
/* WARNING: Switch with 1 destination removed at 0x000100010634 */
/* WARNING: Switch with 1 destination removed at 0x000100010694 */

void Recovered_YYYPlistInfoModel_m00065(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYPlistInfoModel valueTypeString:]
 * Entry: 0x10000e780; original ABI: @24@0:8Q16
 * Original instructions in modeled body: 457; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000e7a0 */
/* WARNING: Switch with 1 destination removed at 0x00010000e7b4 */
/* WARNING: Switch with 1 destination removed at 0x00010000e7c0 */
/* WARNING: Switch with 1 destination removed at 0x00010000e7cc */
/* WARNING: Switch with 1 destination removed at 0x00010000e948 */
/* WARNING: Switch with 1 destination removed at 0x00010000eed0 */
/* WARNING: Switch with 1 destination removed at 0x00010000ef20 */
/* WARNING: Switch with 1 destination removed at 0x00010000ef3c */
/* WARNING: Switch with 1 destination removed at 0x00010000ef48 */
/* WARNING: Switch with 1 destination removed at 0x00010000ef54 */
/* WARNING: Switch with 1 destination removed at 0x00010000eff4 */
/* WARNING: Switch with 1 destination removed at 0x00010000f020 */
/* WARNING: Switch with 1 destination removed at 0x00010000f058 */
/* WARNING: Switch with 1 destination removed at 0x00010000f07c */
/* WARNING: Switch with 1 destination removed at 0x00010000f090 */
/* WARNING: Switch with 1 destination removed at 0x00010000f09c */
/* WARNING: Switch with 1 destination removed at 0x00010000f0b8 */
/* WARNING: Switch with 1 destination removed at 0x00010000f0cc */
/* WARNING: Switch with 1 destination removed at 0x00010000f0e0 */
/* WARNING: Switch with 1 destination removed at 0x00010000f0ec */
/* WARNING: Switch with 1 destination removed at 0x00010000f124 */
/* WARNING: Switch with 1 destination removed at 0x00010000f148 */
/* WARNING: Switch with 1 destination removed at 0x00010000f16c */
/* WARNING: Switch with 1 destination removed at 0x00010000f188 */

void Recovered_YYYPlistInfoModel_m00066(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ca0 == 0) {
  case true:
    bRam0000000100ca3e17 = bRam0000000100ca3e10 ^ 0xb1;
    bRam0000000100ca3e18 = bRam0000000100ca3e11 ^ 0x8e;
    bRam0000000100ca3e19 = bRam0000000100ca3e12 ^ 0x72;
    bRam0000000100ca3e1a = bRam0000000100ca3e13 ^ 0xf2;
    bRam0000000100ca3e1b = bRam0000000100ca3e14 ^ 0x77;
    bRam0000000100ca3e1c = bRam0000000100ca3e15 ^ 0x57;
    bRam0000000100ca3e1d = bRam0000000100ca3e16 ^ 0x1a;
    bRam0000000100ca3e26 = bRam0000000100ca3e1e ^ 0xdb;
    bRam0000000100ca3e27 = bRam0000000100ca3e1f ^ 0x1e;
    cRam0000000100ca3e28 = bRam0000000100ca3e20 + (bRam0000000100ca3e20 & 0xee) * -2 + 'n';
    bRam0000000100ca3e29 = bRam0000000100ca3e21 ^ 6;
    cRam0000000100ca3e2a = bRam0000000100ca3e22 + (bRam0000000100ca3e22 & 0x78) * -2 + 'x';
                    /* WARNING: Switch is manually overridden */
    cRam0000000100ca3e2b = bRam0000000100ca3e23 + (bRam0000000100ca3e23 & 0x31) * -2 + '1';
    cRam0000000100ca3e2c = bRam0000000100ca3e24 + (bRam0000000100ca3e24 & 0xdf) * -2 + '_';
    cRam0000000100ca3e2d = bRam0000000100ca3e25 + (bRam0000000100ca3e25 & 0xc) * -2 + -0x74;
    bRam0000000100ca3e6d = bRam0000000100ca3e68 ^ 0xa8;
    bRam0000000100ca3e6e = bRam0000000100ca3e69 ^ 0x18;
    cRam0000000100ca3e6f = bRam0000000100ca3e6a + (bRam0000000100ca3e6a & 7) * -2 + -0x79;
    bRam0000000100ca3e70 = ~bRam0000000100ca3e6b;
    bRam0000000100ca3e71 = bRam0000000100ca3e6c ^ 0x4a;
    cRam0000000100ca3e35 = bRam0000000100ca3e2e + (bRam0000000100ca3e2e & 0x50) * -2 + 'P';
    bRam0000000100ca3e36 = bRam0000000100ca3e2f ^ 0x28;
    bRam0000000100ca3e37 = bRam0000000100ca3e30 ^ 0x73;
    bRam0000000100ca3e38 = bRam0000000100ca3e31 ^ 0xb;
    bRam0000000100ca3e39 = bRam0000000100ca3e32 ^ 0x17;
    cRam0000000100ca3e3a = bRam0000000100ca3e33 + (bRam0000000100ca3e33 & 0xef) * -2 + 'o';
    bRam0000000100ca3e3b = bRam0000000100ca3e34 ^ 10;
    bRam0000000100ca3e41 = bRam0000000100ca3e3c ^ 0x86;
    bRam0000000100ca3e42 = bRam0000000100ca3e3d ^ 0x89;
    cRam0000000100ca3e43 = bRam0000000100ca3e3e + (bRam0000000100ca3e3e & 0xe1) * -2 + 'a';
    bRam0000000100ca3e44 = bRam0000000100ca3e3f ^ 0xec;
    bRam0000000100ca3e45 = bRam0000000100ca3e40 ^ 0x3c;
    bRam0000000100ca3e4c = bRam0000000100ca3e46 ^ 0x5c;
    bRam0000000100ca3e4d = bRam0000000100ca3e47 ^ 0xd4;
    bRam0000000100ca3e4e = bRam0000000100ca3e48 ^ 0x99;
    cRam0000000100ca3e4f = bRam0000000100ca3e49 + (bRam0000000100ca3e49 & 0x4d) * -2 + -0x33;
    bRam0000000100ca3e50 = ~bRam0000000100ca3e4a;
    bRam0000000100ca3e51 = bRam0000000100ca3e4b ^ 0xa1;
    bRam0000000100ca3e5d = bRam0000000100ca3e52 ^ 0x90;
    bRam0000000100ca3e5e = bRam0000000100ca3e53 ^ 0x67;
    bRam0000000100ca3e5f = bRam0000000100ca3e54 ^ 0x43;
    bRam0000000100ca3e60 = bRam0000000100ca3e55 ^ 0xac;
    bRam0000000100ca3e61 = bRam0000000100ca3e56 ^ 0x54;
    bRam0000000100ca3e62 = bRam0000000100ca3e57 ^ 0x93;
    bRam0000000100ca3e63 = bRam0000000100ca3e58 ^ 0x1e;
    bRam0000000100ca3e64 = ~((bRam0000000100ca3e59 | 0xf5) & (bRam0000000100ca3e59 ^ 0xff | 10));
    uRam0000000100ca3e65 = uRam0000000100ca3e5a;
    bRam0000000100ca3e66 = bRam0000000100ca3e5b ^ 0xbe;
    cRam0000000100ca3e67 = bRam0000000100ca3e5c + (bRam0000000100ca3e5c & 0xe7) * -2 + 'g';
    bRam0000000100ca3e7a = bRam0000000100ca3e72 ^ 0x96;
    bRam0000000100ca3e7b = bRam0000000100ca3e73 ^ 0x60;
    cRam0000000100ca3e7c = bRam0000000100ca3e74 + (bRam0000000100ca3e74 & 8) * -2 + -0x78;
    cRam0000000100ca3e7d = bRam0000000100ca3e75 + (bRam0000000100ca3e75 & 0x60) * -2 + '`';
    bRam0000000100ca3e7e = bRam0000000100ca3e76 ^ 0x37;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca3e7f = bRam0000000100ca3e77 ^ 0xb7;
    bRam0000000100ca3e80 = bRam0000000100ca3e78 ^ 2;
    cRam0000000100ca3e81 = bRam0000000100ca3e79 + (bRam0000000100ca3e79 & 0x5a) * -2 + -0x26;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90ca0 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 < 3) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(param_3 < 5) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(param_3 < 6) {
      case true:
                    /* WARNING: Switch is manually overridden */
        _objc_retain(0x100ca3f30);
                    /* WARNING: Switch is manually overridden */
        uVar1 = 0x100ca3f30;
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_10000f090_case_0;
      }
      uVar1 = 0x100ca3f50;
                    /* WARNING: Switch is manually overridden */
      switch(param_3 == 6) {
      case false:
        goto override_jmp_10000efb8_case_0;
      }
      break;
    case true:
      uVar1 = 0x100ca3f10;
                    /* WARNING: Switch is manually overridden */
      switch(param_3 < 4) {
      case true:
        _objc_retain(0x100ca3ef0);
        uVar1 = 0x100ca3ef0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_10000f090_case_0;
      }
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(param_3 < 1) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(param_3 < 2) {
      case false:
        uVar1 = 0x100ca3eb0;
        _objc_retain(0x100ca3eb0);
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        _objc_retain(0x100ca3ed0);
        uVar1 = 0x100ca3ed0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      goto override_jmp_10000f090_case_0;
    case true:
                    /* WARNING: Switch is manually overridden */
      switch(param_3 == 0) {
      case true:
        uVar1 = 0x100ca3e90;
        _objc_retain(0x100ca3e90);
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_10000f090_case_0;
      }
    }
override_jmp_10000efb8_case_0:
    uVar1 = 0x100ca3f70;
  }
  _objc_retain(uVar1);
override_jmp_10000f090_case_0:
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



