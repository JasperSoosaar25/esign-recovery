/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource modelCustomTransformFromDictionary:]
 * Entry: 0x10017feac; original ABI: B24@0:8@16
 * Original instructions in modeled body: 195; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010017fefc */
/* WARNING: Switch with 1 destination removed at 0x00010017ff08 */
/* WARNING: Switch with 1 destination removed at 0x00010017ff18 */
/* WARNING: Switch with 1 destination removed at 0x00010017ff68 */
/* WARNING: Switch with 1 destination removed at 0x00010017ff9c */
/* WARNING: Switch with 1 destination removed at 0x00010017ffac */
/* WARNING: Switch with 1 destination removed at 0x00010017ffc8 */
/* WARNING: Switch with 1 destination removed at 0x00010018004c */
/* WARNING: Switch with 1 destination removed at 0x000100180084 */
/* WARNING: Switch with 1 destination removed at 0x0001001800b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001800c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001800d0 */
/* WARNING: Switch with 1 destination removed at 0x000100180144 */
/* WARNING: Switch with 1 destination removed at 0x000100180150 */
/* WARNING: Switch with 1 destination removed at 0x00010018015c */
/* WARNING: Switch with 1 destination removed at 0x000100180184 */
/* WARNING: Switch with 1 destination removed at 0x000100180190 */
/* WARNING: Switch with 1 destination removed at 0x0001001801ac */
/* WARNING: Switch with 1 destination removed at 0x000100180220 */
/* WARNING: Switch with 1 destination removed at 0x00010018023c */

undefined8
Recovered_YYYAppStoreSource_m01208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
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
                    /* WARNING: Switch is manually overridden */
  do {
    uVar2 = _objc_retain(param_3);
    lStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
                    /* WARNING: Switch is manually overridden */
    func_0x000100938e80(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    param_3 = auVar5._0_8_;
    uVar1 = func_0x00010093e380(param_3,auVar5._8_8_,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 == 0) {
    case false:
      lStack_70 = *plStack_a0;
                    /* WARNING: Switch is manually overridden */
      uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10017ffac_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_a0 == lStack_70) * 8 + 0x100d26858)) {
        case 0x1001800ac:
          _objc_enumerationMutation(param_3);
                    /* WARNING: Switch is manually overridden */
        }
        uVar3 = *(undefined8 *)(lStack_a8 + uVar4 * 8);
        func_0x000100950c20(param_1);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        func_0x00010096d420(uVar3,auVar5._8_8_,auVar5._0_8_);
        _objc_release(auVar5._0_8_);
        func_0x000100195258(param_1);
        auVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100968de0(uVar3,auVar5._8_8_,auVar5._0_8_);
        _objc_release(auVar5._0_8_);
        func_0x00010019525c(param_1);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        func_0x000100195260(uVar3,auVar5._8_8_,auVar5._0_8_);
        _objc_release(auVar5._0_8_);
        uVar4 = ((ulong)(uint)((int)uVar4 << 1) & 2) + (uVar4 ^ 1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar4 < uVar1) {
        case true:
          goto override_jmp_10017ffac_case_0;
        }
        uVar1 = func_0x00010093e380(param_3,extraout_x1,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar1 == 0) {
        case true:
          goto override_jmp_10017ff84_case_1;
        }
      } while( true );
    case true:
override_jmp_10017ff84_case_1:
      _objc_release(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return 1;
      }
      ___stack_chk_fail();
      _objc_retain(param_3);
      lStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      plStack_a0 = (long *)0x0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource initWithCoder:]
 * Entry: 0x100180240; original ABI: @24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100180260 */
/* WARNING: Switch with 1 destination removed at 0x00010018026c */
/* WARNING: Switch with 1 destination removed at 0x000100180278 */
/* WARNING: Switch with 1 destination removed at 0x0001001802d4 */

undefined8
Recovered_YYYAppStoreSource_m01209(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100195274(param_1,param_2,param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar1;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource encodeWithCoder:]
 * Entry: 0x1001802d8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001802fc */
/* WARNING: Switch with 1 destination removed at 0x000100180308 */
/* WARNING: Switch with 1 destination removed at 0x000100180348 */

void Recovered_YYYAppStoreSource_m01210(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1 = _objc_retain(param_3);
  func_0x000100195278(param_1,auVar1._8_8_,auVar1._0_8_);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource changeValue:]
 * Entry: 0x1001937d8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 170; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001937f8 */
/* WARNING: Switch with 1 destination removed at 0x000100193804 */
/* WARNING: Switch with 1 destination removed at 0x000100193810 */
/* WARNING: Switch with 1 destination removed at 0x000100193858 */
/* WARNING: Switch with 1 destination removed at 0x000100193870 */
/* WARNING: Switch with 1 destination removed at 0x000100193894 */
/* WARNING: Switch with 1 destination removed at 0x0001001939f0 */
/* WARNING: Switch with 1 destination removed at 0x000100193a1c */
/* WARNING: Switch with 1 destination removed at 0x000100193a44 */
/* WARNING: Switch with 1 destination removed at 0x000100193a50 */
/* WARNING: Switch with 1 destination removed at 0x000100193a80 */
/* WARNING: Switch with 1 destination removed at 0x000100193a9c */

void Recovered_YYYAppStoreSource_m01211(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar3 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case false:
    uVar4 = 0;
    bVar1 = true;
    break;
  case true:
    func_0x000100195358(lVar3);
    param_3 = _objc_retainAutoreleasedReturnValue();
    lVar2 = func_0x00010019535c();
                    /* WARNING: Switch is manually overridden */
    bVar1 = lVar2 == 0;
    uVar4 = 1;
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar4) {
  case 1:
    _objc_release(param_3);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  switch(bVar1) {
  case false:
    func_0x000100195360(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100967cc0(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x000100195364(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009601a0(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x000100946e80(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100195368(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x00010094fca0(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010019536c(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x000100952f40(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100968de0(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x000100977b60(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096fa20(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x0001009730a0(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096d540(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    func_0x00010095a740(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100195370(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x000100942c60(lVar3);
    auVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100195374(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource name]
 * Entry: 0x100193aa0; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193aa8 */
/* WARNING: Switch with 1 destination removed at 0x000100193ab4 */
/* WARNING: Switch with 1 destination removed at 0x000100193ac0 */

undefined8 Recovered_YYYAppStoreSource_m01212(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setName:]
 * Entry: 0x100193acc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193ad4 */

void Recovered_YYYAppStoreSource_m01213(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource identifier]
 * Entry: 0x100193ae0; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193ae8 */
/* WARNING: Switch with 1 destination removed at 0x000100193af4 */

undefined8 Recovered_YYYAppStoreSource_m01214(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setIdentifier:]
 * Entry: 0x100193b00; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193b24 */
/* WARNING: Switch with 1 destination removed at 0x000100193b30 */
/* WARNING: Switch with 1 destination removed at 0x000100193b3c */
/* WARNING: Switch with 1 destination removed at 0x000100193b80 */

void Recovered_YYYAppStoreSource_m01215(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x18);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource sourceURL]
 * Entry: 0x100193b84; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193b8c */
/* WARNING: Switch with 1 destination removed at 0x000100193b98 */

undefined8 Recovered_YYYAppStoreSource_m01216(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setSourceURL:]
 * Entry: 0x100193ba4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193bac */
/* WARNING: Switch with 1 destination removed at 0x000100193bb8 */

void Recovered_YYYAppStoreSource_m01217(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource sourceicon]
 * Entry: 0x100193bc4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193bcc */
/* WARNING: Switch with 1 destination removed at 0x000100193bd8 */

undefined8 Recovered_YYYAppStoreSource_m01218(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setSourceicon:]
 * Entry: 0x100193be4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193bec */
/* WARNING: Switch with 1 destination removed at 0x000100193bf8 */

void Recovered_YYYAppStoreSource_m01219(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource message]
 * Entry: 0x100193c04; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193c0c */

undefined8 Recovered_YYYAppStoreSource_m01220(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setMessage:]
 * Entry: 0x100193c18; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193c3c */
/* WARNING: Switch with 1 destination removed at 0x000100193c70 */

void Recovered_YYYAppStoreSource_m01221(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  func_0x000100195384(param_1,param_2,param_3,0x30);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource payURL]
 * Entry: 0x100193c84; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193c8c */
/* WARNING: Switch with 1 destination removed at 0x000100193c98 */

undefined8 Recovered_YYYAppStoreSource_m01222(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setPayURL:]
 * Entry: 0x100193ca4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193cc8 */
/* WARNING: Switch with 1 destination removed at 0x000100193cd4 */
/* WARNING: Switch with 1 destination removed at 0x000100193d18 */

void Recovered_YYYAppStoreSource_m01223(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x38);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource unlockURL]
 * Entry: 0x100193d1c; original ABI: @16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193d24 */
/* WARNING: Switch with 1 destination removed at 0x000100193d34 */
/* WARNING: Switch with 1 destination removed at 0x000100193d40 */

undefined8 Recovered_YYYAppStoreSource_m01224(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setUnlockURL:]
 * Entry: 0x100193d4c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193d70 */
/* WARNING: Switch with 1 destination removed at 0x000100193d7c */
/* WARNING: Switch with 1 destination removed at 0x000100193db0 */
/* WARNING: Switch with 1 destination removed at 0x000100193dbc */

void Recovered_YYYAppStoreSource_m01225(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x40);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource apps]
 * Entry: 0x100193dd0; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100193de4 */

undefined8 Recovered_YYYAppStoreSource_m01226(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setApps:]
 * Entry: 0x100193df0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193dfc */

void Recovered_YYYAppStoreSource_m01227(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x48,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource isEncrypt]
 * Entry: 0x100193e08; original ABI: B16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193e10 */
/* WARNING: Switch with 1 destination removed at 0x000100193e1c */

undefined1 Recovered_YYYAppStoreSource_m01228(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setIsEncrypt:]
 * Entry: 0x100193e28; original ABI: v20@0:8B16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193e30 */
/* WARNING: Switch with 1 destination removed at 0x000100193e3c */
/* WARNING: Switch with 1 destination removed at 0x000100193e4c */

void Recovered_YYYAppStoreSource_m01229(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource encryptTime]
 * Entry: 0x100193e54; original ABI: q16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193e5c */
/* WARNING: Switch with 1 destination removed at 0x000100193e68 */
/* WARNING: Switch with 1 destination removed at 0x000100193e74 */

undefined8 Recovered_YYYAppStoreSource_m01230(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setEncryptTime:]
 * Entry: 0x100193e80; original ABI: v24@0:8q16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193e8c */

void Recovered_YYYAppStoreSource_m01231(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource UDID]
 * Entry: 0x100193e94; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193e9c */
/* WARNING: Switch with 1 destination removed at 0x000100193ea8 */

undefined8 Recovered_YYYAppStoreSource_m01232(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x58);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setUDID:]
 * Entry: 0x100193eb4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193ed8 */
/* WARNING: Switch with 1 destination removed at 0x000100193ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100193ef0 */
/* WARNING: Switch with 1 destination removed at 0x000100193f34 */

void Recovered_YYYAppStoreSource_m01233(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x58);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource refreshTime]
 * Entry: 0x100193f38; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193f40 */

undefined8 Recovered_YYYAppStoreSource_m01234(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setRefreshTime:]
 * Entry: 0x100193f4c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193f6c */
/* WARNING: Switch with 1 destination removed at 0x000100193f78 */
/* WARNING: Switch with 1 destination removed at 0x000100193fa0 */
/* WARNING: Switch with 1 destination removed at 0x000100193fac */
/* WARNING: Switch with 1 destination removed at 0x000100193fd8 */

void Recovered_YYYAppStoreSource_m01235(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource errmsg]
 * Entry: 0x100193fdc; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100193fe4 */

undefined8 Recovered_YYYAppStoreSource_m01236(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x68);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource setErrmsg:]
 * Entry: 0x100193ff0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010019400c */
/* WARNING: Switch with 1 destination removed at 0x000100194018 */
/* WARNING: Switch with 1 destination removed at 0x000100194034 */

void Recovered_YYYAppStoreSource_m01237(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppStoreSource .cxx_destruct]
 * Entry: 0x100194050; original ABI: v16@0:8
 * Original instructions in modeled body: 49; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100194068 */
/* WARNING: Switch with 1 destination removed at 0x0001001940b0 */
/* WARNING: Switch with 1 destination removed at 0x000100194158 */

void Recovered_YYYAppStoreSource_m01238(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYAppStoreSource modelContainerPropertyGenericClass]
 * Entry: 0x10017fbcc; original ABI: @16@0:8
 * Original instructions in modeled body: 175; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010017fc04 */
/* WARNING: Switch with 1 destination removed at 0x00010017fc5c */
/* WARNING: Switch with 1 destination removed at 0x00010017fcb8 */
/* WARNING: Switch with 1 destination removed at 0x00010017fda8 */
/* WARNING: Switch with 1 destination removed at 0x00010017fdb4 */
/* WARNING: Switch with 1 destination removed at 0x00010017fdc4 */
/* WARNING: Switch with 1 destination removed at 0x00010017fe48 */
/* WARNING: Switch with 1 destination removed at 0x00010017fe8c */
/* WARNING: Switch with 1 destination removed at 0x00010017fea8 */

void Recovered_YYYAppStoreSource_m01239(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined4 *extraout_x8;
  undefined4 *puVar3;
  undefined8 auStack_60 [4];
  undefined1 auStack_40 [8];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar3 = (undefined4 *)0x100e916dc;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e916dc == 0) {
  case true:
    bRam0000000100d22d65 = bRam0000000100d22d60 ^ 199;
    bRam0000000100d22d66 = bRam0000000100d22d61 ^ 2;
    bRam0000000100d22d67 = bRam0000000100d22d62 ^ 0xf8;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d22d68 = bRam0000000100d22d63 ^ 0x7d;
    bRam0000000100d22d69 = bRam0000000100d22d64 ^ 0xdd;
    bRam0000000100d22d79 = bRam0000000100d22d6a ^ 0xdd;
    bRam0000000100d22d7a = bRam0000000100d22d6b ^ 0x72;
    bRam0000000100d22d7b = bRam0000000100d22d6c ^ 0x31;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d22d7c = bRam0000000100d22d6d ^ 0x6a;
    bRam0000000100d22d7d = bRam0000000100d22d6e ^ 0x73;
    uRam0000000100d22d7e = uRam0000000100d22d6f;
    bRam0000000100d22d7f = bRam0000000100d22d70 ^ 0x8b;
    cRam0000000100d22d80 = bRam0000000100d22d71 + (bRam0000000100d22d71 & 0x42) * -2 + -0x3e;
    bRam0000000100d22d81 = bRam0000000100d22d72 ^ 0xdc;
    bRam0000000100d22d82 = bRam0000000100d22d73 ^ 0x2b;
    bRam0000000100d22d83 = bRam0000000100d22d74 ^ 0x8e;
    bRam0000000100d22d84 = bRam0000000100d22d75 ^ 0xf1;
    cRam0000000100d22d85 = bRam0000000100d22d76 + (bRam0000000100d22d76 & 0x3c) * -2 + '<';
    bRam0000000100d22d86 = bRam0000000100d22d77 ^ 0x84;
    bRam0000000100d22d87 = bRam0000000100d22d78 ^ 0xd8;
  }
  puVar1 = auStack_40;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    *puVar3 = 1;
    *(undefined8 *)(puVar1 + -0x20) = 0x100d22d90;
    *(undefined8 *)(puVar1 + -0x10) = 0x100d22db0;
                    /* WARNING: Switch is manually overridden */
    func_0x000100940a20(uRam0000000100c71458,param_2,puVar1 + -0x10,puVar1 + -0x20,1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_38) break;
    ___stack_chk_fail();
    *extraout_x8 = 1;
    puVar1 = puVar1 + -0x20;
    puVar3 = extraout_x8;
    param_2 = extraout_x1;
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYAppStoreSource modelWithJSON:]
 * Entry: 0x10018034c; original ABI: @24@0:8@16
 * Original instructions in modeled body: 10752; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100180380 */
/* WARNING: Switch with 1 destination removed at 0x000100180394 */
/* WARNING: Switch with 1 destination removed at 0x0001001803a0 */
/* WARNING: Switch with 1 destination removed at 0x000100182328 */
/* WARNING: Switch with 1 destination removed at 0x0001001843b4 */
/* WARNING: Switch with 1 destination removed at 0x0001001843cc */
/* WARNING: Switch with 1 destination removed at 0x0001001843f4 */
/* WARNING: Switch with 1 destination removed at 0x000100184400 */
/* WARNING: Switch with 1 destination removed at 0x000100184428 */
/* WARNING: Switch with 1 destination removed at 0x000100184470 */
/* WARNING: Switch with 1 destination removed at 0x00010018447c */
/* WARNING: Switch with 1 destination removed at 0x0001001844a4 */
/* WARNING: Switch with 1 destination removed at 0x0001001844b8 */
/* WARNING: Switch with 1 destination removed at 0x0001001844c8 */
/* WARNING: Switch with 1 destination removed at 0x0001001844d4 */
/* WARNING: Switch with 1 destination removed at 0x000100185664 */
/* WARNING: Switch with 1 destination removed at 0x000100185680 */
/* WARNING: Switch with 1 destination removed at 0x00010018568c */
/* WARNING: Switch with 1 destination removed at 0x00010019223c */
/* WARNING: Switch with 1 destination removed at 0x00010019226c */
/* WARNING: Switch with 1 destination removed at 0x0001001922a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001926b8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYAppStoreSource_m01240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e916e0 == 0) {
  case true:
    cRam0000000100d22d65 = bRam0000000100d22d60 + (bRam0000000100d22d60 & 199) * -2 + -0x39;
    bRam0000000100d22d66 = bRam0000000100d22d61 ^ 2;
    bRam0000000100d22d67 = bRam0000000100d22d62 ^ 0xf8;
    bRam0000000100d22d68 = bRam0000000100d22d63 ^ 0x7d;
    cRam0000000100d22d69 = bRam0000000100d22d64 + (bRam0000000100d22d64 & 0xdd) * -2 + -0x23;
    uRam0000000100d22de0 =
         CONCAT17((byte)((ulong)uRam0000000100d22dd0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d310 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22dd0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d310 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22dd0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d310 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22dd0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d310 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22dd0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d310 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22dd0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d310 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22dd0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d310 >> 8),
                                                  (byte)uRam0000000100d22dd0 ^ (byte)_UNK_10097d310)
                                                  ))))));
    cRam0000000100d22de8 = bRam0000000100d22dd8 + (bRam0000000100d22dd8 & 8) * -2 + -0x78;
    cRam0000000100d22de9 = bRam0000000100d22dd9 + (bRam0000000100d22dd9 & 0x2c) * -2 + ',';
    bRam0000000100d22dea = bRam0000000100d22dda ^ 0x56;
    bRam0000000100d22deb = bRam0000000100d22ddb ^ 0x99;
    bRam0000000100d234a0 = bRam0000000100d22df0 ^ 0xfa;
    bRam0000000100d234a1 = bRam0000000100d22df1 ^ 0xa0;
    bRam0000000100d234a2 = bRam0000000100d22df2 ^ 0xfe;
    bRam0000000100d234a3 = bRam0000000100d22df3 ^ 0x7b;
    cRam0000000100d234a4 = bRam0000000100d22df4 + (bRam0000000100d22df4 & 100) * -2 + -0x1c;
    bRam0000000100d234a5 = bRam0000000100d22df5 ^ 0xb3;
    bRam0000000100d234a6 = bRam0000000100d22df6 ^ 0xb1;
    bRam0000000100d234a7 = bRam0000000100d22df7 ^ 0xd8;
    bRam0000000100d234a8 = bRam0000000100d22df8 ^ 0x21;
    bRam0000000100d234a9 = ~((bRam0000000100d22df9 | 0xa7) & (bRam0000000100d22df9 ^ 0xff | 0x58));
    bRam0000000100d234aa = ~((bRam0000000100d22dfa | 0x55) & (~bRam0000000100d22dfa | 0xaa));
    bRam0000000100d234ab = bRam0000000100d22dfb ^ 0xee;
    cRam0000000100d234ac = bRam0000000100d22dfc + (bRam0000000100d22dfc & 0x6d) * -2 + -0x13;
    cRam0000000100d234ad = bRam0000000100d22dfd + (bRam0000000100d22dfd & 0x3a) * -2 + ':';
    bRam0000000100d234b6 = bRam0000000100d22e06 ^ 0x1d;
    bRam0000000100d234b7 = bRam0000000100d22e07 ^ 0xd4;
    bRam0000000100d234b8 = bRam0000000100d22e08 ^ 0x7f;
    bRam0000000100d234b9 = bRam0000000100d22e09 ^ 0xb7;
    bRam0000000100d234ba = bRam0000000100d22e0a ^ 0x23;
    bRam0000000100d234bb = bRam0000000100d22e0b ^ 0x88;
    bRam0000000100d234bc = bRam0000000100d22e0c ^ 0x6f;
    cRam0000000100d234bd = bRam0000000100d22e0d + (bRam0000000100d22e0d & 0x10) * -2 + -0x70;
    bRam0000000100d234be = bRam0000000100d22e0e ^ 0x33;
    bRam0000000100d234bf = bRam0000000100d22e0f ^ 0x36;
    bRam0000000100d234c0 = bRam0000000100d22e10 ^ 0x8b;
    bRam0000000100d234c1 = bRam0000000100d22e11 ^ 0x6b;
    bRam0000000100d234c2 = bRam0000000100d22e12 ^ 0x21;
    cRam0000000100d234c3 = bRam0000000100d22e13 + (bRam0000000100d22e13 & 0x27) * -2 + -0x59;
    bRam0000000100d234c4 = bRam0000000100d22e14 ^ 0xf2;
    cRam0000000100d234c5 = bRam0000000100d22e15 + (bRam0000000100d22e15 & 0x2c) * -2 + ',';
    cRam0000000100d234c6 = bRam0000000100d22e16 + (bRam0000000100d22e16 & 0x1c) * -2 + '\x1c';
    bRam0000000100d234c7 = bRam0000000100d22e17 ^ 0xb7;
    bRam0000000100d234c8 = bRam0000000100d22e18 ^ 0x78;
    bRam0000000100d234c9 = bRam0000000100d22e19 ^ 0x7f;
    bRam0000000100d234ca = bRam0000000100d22e1a ^ 0xa4;
    bRam0000000100d234cb = bRam0000000100d22e1b ^ 0xe;
    bRam0000000100d234cc = bRam0000000100d22e1c ^ 0x9b;
    cRam0000000100d234cd = bRam0000000100d22e1d + (bRam0000000100d22e1d & 0xdf) * -2 + '_';
    cRam0000000100d234d6 = bRam0000000100d22e26 + (bRam0000000100d22e26 & 0x5a) * -2 + -0x26;
    bRam0000000100d234d7 = bRam0000000100d22e27 ^ 0x11;
    cRam0000000100d234d8 = bRam0000000100d22e28 + (bRam0000000100d22e28 & 10) * -2 + -0x76;
    cRam0000000100d234d9 = (cRam0000000100d22e29 << 1 ^ 0xffU) + cRam0000000100d22e29;
    bRam0000000100d234ea = bRam0000000100d22e3a ^ 0xfc;
    bRam0000000100d234eb = ~((bRam0000000100d22e3b | 0xa6) & (bRam0000000100d22e3b ^ 0xff | 0x59));
    bRam0000000100d234ec = bRam0000000100d22e3c ^ 0x5c;
    bRam0000000100d234ed = bRam0000000100d22e3d ^ 0x49;
    bRam0000000100d234ee = bRam0000000100d22e3e ^ 0xc6;
    bRam0000000100d234ef = bRam0000000100d22e3f ^ 0x5e;
    bRam0000000100d234f0 = bRam0000000100d22e40 ^ 0x6b;
    bRam0000000100d234f1 = bRam0000000100d22e41 ^ 0xe0;
    bRam0000000100d234f2 = bRam0000000100d22e42 ^ 0x68;
    cRam0000000100d234f3 = bRam0000000100d22e43 + (bRam0000000100d22e43 & 0x3c) * -2 + '<';
    bRam0000000100d234f4 = bRam0000000100d22e44 ^ 0xc2;
    bRam0000000100d234f5 = bRam0000000100d22e45 ^ 0x2c;
    bRam0000000100d234f6 = bRam0000000100d22e46 ^ 0xc4;
    bRam0000000100d234f7 = bRam0000000100d22e47 ^ 0x95;
    cRam0000000100d234f8 = bRam0000000100d22e48 + (bRam0000000100d22e48 & 0x75) * -2 + -0xb;
    bRam0000000100d234f9 = bRam0000000100d22e49 ^ 0x13;
    cRam0000000100d234fa = bRam0000000100d22e4a + (bRam0000000100d22e4a & 0xe) * -2 + '\x0e';
    bRam0000000100d234fb = bRam0000000100d22e4b ^ 0x47;
    bRam0000000100d234fc = bRam0000000100d22e4c ^ 0x59;
    cRam0000000100d234fd = bRam0000000100d22e4d + (bRam0000000100d22e4d & 0xc3) * -2 + -0x3d;
    cRam0000000100d23506 = bRam0000000100d22e56 + (bRam0000000100d22e56 & 0x38) * -2 + '8';
    bRam0000000100d23507 = bRam0000000100d22e57 ^ 0xca;
    bRam0000000100d23508 = bRam0000000100d22e58 ^ 0xc1;
    bRam0000000100d23509 = bRam0000000100d22e59 ^ 99;
    bRam0000000100d2350a = bRam0000000100d22e5a ^ 0x9d;
    bRam0000000100d2350b = bRam0000000100d22e5b ^ 0x20;
    bRam0000000100d2350c = bRam0000000100d22e5c ^ 0xe7;
    bRam0000000100d2350d = bRam0000000100d22e5d ^ 0x48;
    cRam0000000100d2350e = bRam0000000100d22e5e + (bRam0000000100d22e5e & 0x99) * -2 + '\x19';
    cRam0000000100d2350f = bRam0000000100d22e5f + (bRam0000000100d22e5f & 0x4d) * -2 + 'M';
    bRam0000000100d23510 = bRam0000000100d22e60 ^ 0xed;
    bRam0000000100d23511 = bRam0000000100d22e61 ^ 0x33;
    cRam0000000100d23512 = bRam0000000100d22e62 + (bRam0000000100d22e62 & 0x2c) * -2 + -0x54;
    bRam0000000100d2351b = bRam0000000100d22e6b ^ 0x62;
    bRam0000000100d2351c = bRam0000000100d22e6c ^ 0x4e;
    bRam0000000100d2351d = bRam0000000100d22e6d ^ 0x67;
    bRam0000000100d2351e = bRam0000000100d22e6e ^ 0x13;
    bRam0000000100d2351f = bRam0000000100d22e6f ^ 0x61;
    bRam0000000100d23520 = bRam0000000100d22e70 ^ 0xac;
    cRam0000000100d23521 = bRam0000000100d22e71 + (bRam0000000100d22e71 & 0x15) * -2 + '\x15';
    bRam0000000100d23522 = bRam0000000100d22e72 ^ 0xa1;
    bRam0000000100d23523 = bRam0000000100d22e73 ^ 0xf6;
    bRam0000000100d23524 = bRam0000000100d22e74 ^ 0xec;
    bRam0000000100d23525 = bRam0000000100d22e75 ^ 99;
    bRam0000000100d23526 = bRam0000000100d22e76 ^ 0xf3;
    cRam0000000100d23527 = bRam0000000100d22e77 + (bRam0000000100d22e77 & 0x55) * -2 + 'U';
    bRam0000000100d23528 = bRam0000000100d22e78 ^ 0x6d;
    cRam0000000100d23529 = bRam0000000100d22e79 + (bRam0000000100d22e79 & 0x30) * -2 + -0x50;
    bRam0000000100d2352a = bRam0000000100d22e7a ^ 0x95;
    bRam0000000100d2352b = bRam0000000100d22e7b ^ 0x13;
    bRam0000000100d2352c = bRam0000000100d22e7c ^ 0x6a;
    bRam0000000100d2352d = bRam0000000100d22e7d ^ 0x1b;
    bRam0000000100d2352e = bRam0000000100d22e7e ^ 0xfe;
    bRam0000000100d2352f = ~((bRam0000000100d22e7f | 0x52) & (bRam0000000100d22e7f ^ 0xff | 0xad));
    bRam0000000100d23530 = bRam0000000100d22e80 ^ 0x16;
    bRam0000000100d23531 = bRam0000000100d22e81 ^ 0xd7;
    bRam0000000100d23532 = bRam0000000100d22e82 ^ 0x48;
    cRam0000000100d23533 = bRam0000000100d22e83 + (bRam0000000100d22e83 & 0xbb) * -2 + ';';
    cRam0000000100d23534 = bRam0000000100d22e84 + (bRam0000000100d22e84 & 0x3f) * -2 + '?';
    bRam0000000100d23535 = bRam0000000100d22e85 ^ 0xc2;
    bRam0000000100d23536 = bRam0000000100d22e86 ^ 0xeb;
    cRam0000000100d23537 = bRam0000000100d22e87 + (bRam0000000100d22e87 & 0xef) * -2 + -0x11;
    bRam0000000100d23538 = bRam0000000100d22e88 ^ 0x92;
    bRam0000000100d23539 = bRam0000000100d22e89 ^ 0xcf;
    bRam0000000100d2353a = bRam0000000100d22e8a ^ 0x41;
    cRam0000000100d2353b = bRam0000000100d22e8b + (bRam0000000100d22e8b & 0x65) * -2 + -0x1b;
    bRam0000000100d2353c = bRam0000000100d22e8c ^ 0x6f;
    cRam0000000100d2353d = bRam0000000100d22e8d + (bRam0000000100d22e8d & 0x6d) * -2 + 'm';
    cRam0000000100d2353e = bRam0000000100d22e8e + (bRam0000000100d22e8e & 0x5b) * -2 + '[';
    bRam0000000100d2353f = bRam0000000100d22e8f ^ 0x25;
    cRam0000000100d23540 = bRam0000000100d22e90 + (bRam0000000100d22e90 & 0x16) * -2 + -0x6a;
    cRam0000000100d23541 = bRam0000000100d22e91 + (bRam0000000100d22e91 & 0x53) * -2 + 'S';
    bRam0000000100d23542 = bRam0000000100d22e92 ^ 0x75;
    cRam0000000100d23543 = bRam0000000100d22e93 + (bRam0000000100d22e93 & 0x62) * -2 + -0x1e;
    bRam0000000100d23544 = bRam0000000100d22e94 ^ 0xe8;
    bRam0000000100d23545 = bRam0000000100d22e95 ^ 0xf;
    bRam0000000100d23546 = bRam0000000100d22e96 ^ 9;
    cRam0000000100d23547 = bRam0000000100d22e97 + (bRam0000000100d22e97 & 0xf1) * -2 + -0xf;
    bRam0000000100d23548 = bRam0000000100d22e98 ^ 0xb2;
    bRam0000000100d23549 = bRam0000000100d22e99 ^ 0x49;
    bRam0000000100d2354a = bRam0000000100d22e9a ^ 0x6b;
    bRam0000000100d2354b = bRam0000000100d22e9b ^ 0x71;
    cRam0000000100d2354c = bRam0000000100d22e9c + (bRam0000000100d22e9c & 0x7a) * -2 + 'z';
    bRam0000000100d2354d = bRam0000000100d22e9d ^ 0xd7;
    cRam0000000100d2354e = bRam0000000100d22e9e + (bRam0000000100d22e9e & 0x68) * -2 + -0x18;
    cRam0000000100d23557 = bRam0000000100d22ea7 + (bRam0000000100d22ea7 & 0x38) * -2 + -0x48;
    bRam0000000100d23558 = bRam0000000100d22ea8 ^ 0x22;
    bRam0000000100d23559 = bRam0000000100d22ea9 ^ 6;
    bRam0000000100d2355a = bRam0000000100d22eaa ^ 0x9d;
    bRam0000000100d2355b = bRam0000000100d22eab ^ 0xfd;
    bRam0000000100d2355c = bRam0000000100d22eac ^ 0xd8;
    cRam0000000100d2355d = bRam0000000100d22ead + (bRam0000000100d22ead & 1) * -2 + '\x01';
    bRam0000000100d2355e = bRam0000000100d22eae ^ 0x95;
    cRam0000000100d2355f = bRam0000000100d22eaf + (bRam0000000100d22eaf & 0x53) * -2 + -0x2d;
    bRam0000000100d23560 = bRam0000000100d22eb0 ^ 0x96;
    bRam0000000100d23561 = bRam0000000100d22eb1 ^ 0x44;
    cRam0000000100d23562 = bRam0000000100d22eb2 + (bRam0000000100d22eb2 & 0x25) * -2 + '%';
    bRam0000000100d23563 = bRam0000000100d22eb3 ^ 0x2a;
    bRam0000000100d23564 = bRam0000000100d22eb4 ^ 0x72;
    cRam0000000100d23565 = bRam0000000100d22eb5 + (bRam0000000100d22eb5 & 0x17) * -2 + -0x69;
    bRam0000000100d23566 = bRam0000000100d22eb6 ^ 0x3a;
    bRam0000000100d23567 = bRam0000000100d22eb7 ^ 8;
    cRam0000000100d23568 = bRam0000000100d22eb8 + (bRam0000000100d22eb8 & 0x39) * -2 + -0x47;
    bRam0000000100d23569 = bRam0000000100d22eb9 ^ 0xb7;
    bRam0000000100d2356a = bRam0000000100d22eba ^ 0x71;
    bRam0000000100d2356b = bRam0000000100d22ebb ^ 0x78;
    bRam0000000100d2356c = bRam0000000100d22ebc ^ 0x86;
    bRam0000000100d2356d = bRam0000000100d22ebd ^ 0x16;
    cRam0000000100d2356e = bRam0000000100d22ebe + (bRam0000000100d22ebe & 0x7c) * -2 + '|';
    bRam0000000100d2356f = bRam0000000100d22ebf ^ 0x9a;
    bRam0000000100d23570 = bRam0000000100d22ec0 ^ 0x1b;
    bRam0000000100d23571 = bRam0000000100d22ec1 ^ 0x1c;
    bRam0000000100d23572 = bRam0000000100d22ec2 ^ 0xeb;
    bRam0000000100d23573 = bRam0000000100d22ec3 ^ 0x6b;
    bRam0000000100d23574 = bRam0000000100d22ec4 ^ 0xb4;
    bRam0000000100d23575 = bRam0000000100d22ec5 ^ 0xbe;
    cRam0000000100d23576 = bRam0000000100d22ec6 + (bRam0000000100d22ec6 & 0xc1) * -2 + 'A';
    bRam0000000100d23577 = bRam0000000100d22ec7 ^ 0xd0;
    bRam0000000100d23578 = bRam0000000100d22ec8 ^ 100;
    bRam0000000100d23579 = bRam0000000100d22ec9 ^ 0x28;
    cRam0000000100d2357a = bRam0000000100d22eca + (bRam0000000100d22eca & 0x58) * -2 + -0x28;
    bRam0000000100d2357b = bRam0000000100d22ecb ^ 0xc6;
    cRam0000000100d2357c = bRam0000000100d22ecc + (bRam0000000100d22ecc & 0xe1) * -2 + 'a';
    bRam0000000100d23585 = bRam0000000100d22ed5 ^ 0xbe;
    bRam0000000100d23586 = bRam0000000100d22ed6 ^ 0x91;
    bRam0000000100d23587 = bRam0000000100d22ed7 ^ 0x6c;
    bRam0000000100d23588 = bRam0000000100d22ed8 ^ 0x21;
    cRam0000000100d23589 = bRam0000000100d22ed9 + (bRam0000000100d22ed9 & 0x51) * -2 + 'Q';
    bRam0000000100d23592 = bRam0000000100d22ee2 ^ 0x5d;
    bRam0000000100d23593 = bRam0000000100d22ee3 ^ 0x68;
    cRam0000000100d23594 = bRam0000000100d22ee4 + (bRam0000000100d22ee4 & 0x28) * -2 + '(';
    bRam0000000100d23595 = bRam0000000100d22ee5 ^ 0x19;
    bRam0000000100d23596 = bRam0000000100d22ee6 ^ 0x8b;
    cRam0000000100d23597 = bRam0000000100d22ee7 + (bRam0000000100d22ee7 & 0x69) * -2 + 'i';
    bRam0000000100d235a0 = bRam0000000100d22ef0 ^ 0xdd;
    bRam0000000100d235a1 = bRam0000000100d22ef1 ^ 0xf7;
    bRam0000000100d235a2 = bRam0000000100d22ef2 ^ 0xcd;
    bRam0000000100d235a3 = bRam0000000100d22ef3 ^ 0xfe;
    bRam0000000100d235a4 = bRam0000000100d22ef4 ^ 0xd9;
    bRam0000000100d235a5 = ~bRam0000000100d22ef5;
    cRam0000000100d235a6 = bRam0000000100d22ef6 + (bRam0000000100d22ef6 & 0x15) * -2 + -0x6b;
    bRam0000000100d235a7 = bRam0000000100d22ef7 ^ 0x6d;
    cRam0000000100d235a8 = bRam0000000100d22ef8 + (bRam0000000100d22ef8 & 0x1b) * -2 + '\x1b';
    uRam0000000100d235a9 =
         CONCAT17((byte)((ulong)uRam0000000100d22ef9 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d358 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22ef9 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d358 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22ef9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d358 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22ef9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d358 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22ef9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d358 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22ef9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d358 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22ef9 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d358 >> 8),
                                                  (byte)uRam0000000100d22ef9 ^ (byte)_UNK_10097d358)
                                                  ))))));
    bRam0000000100d235b1 = bRam0000000100d22f01 ^ 0x72;
    bRam0000000100d235b2 = bRam0000000100d22f02 ^ 0xd5;
    bRam0000000100d235b3 = bRam0000000100d22f03 ^ 0x13;
    bRam0000000100d235b4 = bRam0000000100d22f04 ^ 0xab;
    cRam0000000100d235b5 = bRam0000000100d22f05 + (bRam0000000100d22f05 & 0x2b) * -2 + -0x55;
    bRam0000000100d235b6 = bRam0000000100d22f06 ^ 0x22;
    bRam0000000100d235b7 = bRam0000000100d22f07 ^ 7;
    bRam0000000100d235b8 = bRam0000000100d22f08 ^ 0x96;
    bRam0000000100d235b9 = bRam0000000100d22f09 ^ 0xf8;
    bRam0000000100d235ba = bRam0000000100d22f0a ^ 0x2d;
    bRam0000000100d235bb = bRam0000000100d22f0b ^ 0xe2;
    bRam0000000100d235bc = bRam0000000100d22f0c ^ 0xc5;
    cRam0000000100d235bd = bRam0000000100d22f0d + (bRam0000000100d22f0d & 0xef) * -2 + -0x11;
    cRam0000000100d235be = bRam0000000100d22f0e + (bRam0000000100d22f0e & 0x56) * -2 + 'V';
    uRam0000000100d235bf =
         CONCAT17((byte)((ulong)uRam0000000100d22f0f >> 0x38) ^
                  (byte)((ulong)_UNK_10097d360 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f0f >> 0x30) ^
                           (byte)((ulong)_UNK_10097d360 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f0f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d360 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f0f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d360 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f0f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d360 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f0f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d360 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f0f >> 8) ^
                                                  (byte)((ulong)_UNK_10097d360 >> 8),
                                                  (byte)uRam0000000100d22f0f ^ (byte)_UNK_10097d360)
                                                  ))))));
    bRam0000000100d235c7 = bRam0000000100d22f17 ^ 0x2d;
    bRam0000000100d235c8 = bRam0000000100d22f18 ^ 0xb5;
    cRam0000000100d235c9 = bRam0000000100d22f19 + (bRam0000000100d22f19 & 0x32) * -2 + '2';
    uRam0000000100d235ca =
         CONCAT17((byte)((ulong)uRam0000000100d22f1a >> 0x38) ^
                  (byte)((ulong)_UNK_10097d860 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f1a >> 0x30) ^
                           (byte)((ulong)_UNK_10097d860 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f1a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d860 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f1a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d860 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f1a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d860 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f1a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d860 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f1a >> 8) ^
                                                  (byte)((ulong)_UNK_10097d860 >> 8),
                                                  (byte)uRam0000000100d22f1a ^ (byte)_UNK_10097d860)
                                                  ))))));
    uRam0000000100d235d2 =
         CONCAT17((byte)((ulong)uRam0000000100d22f22 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d868 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f22 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d868 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f22 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d868 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f22 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d868 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f22 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d868 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f22 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d868 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f22 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d868 >> 8),
                                                  (byte)uRam0000000100d22f22 ^ (byte)_UNK_10097d868)
                                                  ))))));
    cRam0000000100d235da = bRam0000000100d22f2a + (bRam0000000100d22f2a & 0x37) * -2 + '7';
    bRam0000000100d235db = bRam0000000100d22f2b ^ 0x8a;
    bRam0000000100d235dc = bRam0000000100d22f2c ^ 0xbe;
    cRam0000000100d235dd = bRam0000000100d22f2d + (bRam0000000100d22f2d & 0x7c) * -2 + '|';
    uRam0000000100d235de =
         CONCAT17((byte)((ulong)uRam0000000100d22f2e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d368 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f2e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d368 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f2e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d368 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f2e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d368 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f2e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d368 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f2e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d368 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f2e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d368 >> 8),
                                                  (byte)uRam0000000100d22f2e ^ (byte)_UNK_10097d368)
                                                  ))))));
    cRam0000000100d235e6 = bRam0000000100d22f36 + (bRam0000000100d22f36 & 0x40) * '\x02' + -0x40;
    cRam0000000100d235e7 = bRam0000000100d22f37 + (bRam0000000100d22f37 & 0x68) * -2 + -0x18;
    bRam0000000100d235f0 = bRam0000000100d22f40 ^ 0x47;
    bRam0000000100d235f1 = bRam0000000100d22f41 ^ 0x18;
    bRam0000000100d235f2 = bRam0000000100d22f42 ^ 0xb0;
    cRam0000000100d235f3 = bRam0000000100d22f43 + (bRam0000000100d22f43 & 3) * -2 + '\x03';
    cRam0000000100d235f4 = bRam0000000100d22f44 + (bRam0000000100d22f44 & 0x2d) * -2 + '-';
    bRam0000000100d235f5 = bRam0000000100d22f45 ^ 0xfc;
    bRam0000000100d235f6 = bRam0000000100d22f46 ^ 0xfe;
    uRam0000000100d235f7 = uRam0000000100d22f47;
    bRam0000000100d235f8 = bRam0000000100d22f48 ^ 0x94;
    bRam0000000100d235f9 = bRam0000000100d22f49 ^ 0xa6;
    bRam0000000100d235fa = bRam0000000100d22f4a ^ 0x86;
    bRam0000000100d235fb = bRam0000000100d22f4b ^ 0xa6;
    bRam0000000100d235fc = bRam0000000100d22f4c ^ 0x21;
    bRam0000000100d235fd = bRam0000000100d22f4d ^ 0x58;
    cRam0000000100d235fe = bRam0000000100d22f4e + (bRam0000000100d22f4e & 0x10) * -2 + '\x10';
    bRam0000000100d235ff = bRam0000000100d22f4f ^ 0xf5;
    cRam0000000100d23600 = bRam0000000100d22f50 + (bRam0000000100d22f50 & 0x66) * -2 + -0x1a;
    bRam0000000100d23601 = bRam0000000100d22f51 ^ 0xd7;
    bRam0000000100d23602 = bRam0000000100d22f52 ^ 0x77;
    cRam0000000100d23603 = bRam0000000100d22f53 + (bRam0000000100d22f53 & 0x3f) * -2 + '?';
    cRam0000000100d23604 = bRam0000000100d22f54 + (bRam0000000100d22f54 & 0x66) * -2 + -0x1a;
    bRam0000000100d23605 = bRam0000000100d22f55 ^ 0x88;
    bRam0000000100d23606 = bRam0000000100d22f56 ^ 0x45;
    bRam0000000100d23607 = bRam0000000100d22f57 ^ 0xca;
    bRam0000000100d23608 = bRam0000000100d22f58 ^ 0xe0;
    bRam0000000100d23609 = bRam0000000100d22f59 ^ 0x39;
    bRam0000000100d2360a = bRam0000000100d22f5a ^ 0x80;
    cRam0000000100d2360b = bRam0000000100d22f5b + (bRam0000000100d22f5b & 0x4e) * -2 + 'N';
    bRam0000000100d2360c = bRam0000000100d22f5c ^ 0xc0;
    bRam0000000100d2360d = bRam0000000100d22f5d ^ 4;
    bRam0000000100d2360e = bRam0000000100d22f5e ^ 0x1b;
    bRam0000000100d2360f = bRam0000000100d22f5f ^ 0x54;
    bRam0000000100d23610 = bRam0000000100d22f60 ^ 0x52;
    cRam0000000100d23611 = bRam0000000100d22f61 + (bRam0000000100d22f61 & 0xdf) * -2 + '_';
    uRam0000000100d23598 =
         CONCAT17((byte)((ulong)uRam0000000100d22ee8 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d350 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22ee8 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d350 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22ee8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d350 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22ee8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d350 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22ee8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d350 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22ee8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d350 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22ee8 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d350 >> 8),
                                                  (byte)uRam0000000100d22ee8 ^ (byte)_UNK_10097d350)
                                                  ))))));
    uRam0000000100d23612 =
         CONCAT17((byte)((ulong)uRam0000000100d22f62 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d378 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f62 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d378 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f62 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d378 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f62 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d378 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f62 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d378 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f62 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d378 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f62 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d378 >> 8),
                                                  (byte)uRam0000000100d22f62 ^ (byte)_UNK_10097d378)
                                                  ))))));
    bRam0000000100d2361a = bRam0000000100d22f6a ^ 0xe7;
    bRam0000000100d2361b = bRam0000000100d22f6b ^ 0xd1;
    cRam0000000100d2361c = bRam0000000100d22f6c + (bRam0000000100d22f6c & 0x76) * -2 + -10;
    bRam0000000100d2361d = bRam0000000100d22f6d ^ 0x7d;
    bRam0000000100d2361e = bRam0000000100d22f6e ^ 0xd;
    uRam0000000100d2358a =
         CONCAT17((byte)((ulong)uRam0000000100d22eda >> 0x38) ^
                  (byte)((ulong)_UNK_10097d348 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22eda >> 0x30) ^
                           (byte)((ulong)_UNK_10097d348 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22eda >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d348 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22eda >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d348 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22eda >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d348 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22eda >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d348 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22eda >> 8) ^
                                                  (byte)((ulong)_UNK_10097d348 >> 8),
                                                  (byte)uRam0000000100d22eda ^ (byte)_UNK_10097d348)
                                                  ))))));
    bRam0000000100d2361f = bRam0000000100d22f6f ^ 0x35;
    bRam0000000100d23620 = bRam0000000100d22f70 ^ 0x98;
    cRam0000000100d23621 = bRam0000000100d22f71 + (bRam0000000100d22f71 & 0x58) * -2 + -0x28;
    cRam0000000100d23622 = '\x7f' - cRam0000000100d22f72;
    bRam0000000100d23623 = bRam0000000100d22f73 ^ 0x1b;
    bRam0000000100d23624 = bRam0000000100d22f74 ^ 0xbe;
    bRam0000000100d23625 = bRam0000000100d22f75 ^ 0x7f;
    uRam0000000100d2357d =
         CONCAT17((byte)((ulong)uRam0000000100d22ecd >> 0x38) ^
                  (byte)((ulong)_UNK_10097d340 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22ecd >> 0x30) ^
                           (byte)((ulong)_UNK_10097d340 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22ecd >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d340 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22ecd >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d340 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22ecd >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d340 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22ecd >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d340 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22ecd >> 8) ^
                                                  (byte)((ulong)_UNK_10097d340 >> 8),
                                                  (byte)uRam0000000100d22ecd ^ (byte)_UNK_10097d340)
                                                  ))))));
    bRam0000000100d23626 = bRam0000000100d22f76 ^ 0xd5;
    cRam0000000100d23627 = bRam0000000100d22f77 + (bRam0000000100d22f77 & 0x53) * -2 + 'S';
    bRam0000000100d23628 = bRam0000000100d22f78 ^ 0x3a;
    bRam0000000100d23629 = ~((bRam0000000100d22f79 | 0xe0) & (~bRam0000000100d22f79 | 0x1f));
    bRam0000000100d2362a = bRam0000000100d22f7a ^ 0x4b;
    bRam0000000100d2362b = bRam0000000100d22f7b ^ 0x91;
    bRam0000000100d2362c = bRam0000000100d22f7c ^ 0xad;
    cRam0000000100d2362d = bRam0000000100d22f7d + (bRam0000000100d22f7d & 0x35) * -2 + '5';
    uRam0000000100d2362e =
         CONCAT17((byte)((ulong)uRam0000000100d22f7e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d380 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f7e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d380 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f7e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d380 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f7e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d380 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f7e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d380 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f7e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d380 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f7e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d380 >> 8),
                                                  (byte)uRam0000000100d22f7e ^ (byte)_UNK_10097d380)
                                                  ))))));
    bRam0000000100d23636 = bRam0000000100d22f86 ^ 0x82;
    bRam0000000100d23637 = bRam0000000100d22f87 ^ 0x85;
    bRam0000000100d23638 = bRam0000000100d22f88 ^ 0x54;
    bRam0000000100d23639 = bRam0000000100d22f89 ^ 0x72;
    bRam0000000100d2363a = bRam0000000100d22f8a ^ 0xad;
    bRam0000000100d2363b = bRam0000000100d22f8b ^ 0x59;
    cRam0000000100d2363c = bRam0000000100d22f8c + (bRam0000000100d22f8c & 0x65) * -2 + 'e';
    bRam0000000100d2363d = bRam0000000100d22f8d ^ 0x98;
    cRam0000000100d2363e = bRam0000000100d22f8e + (bRam0000000100d22f8e & 0x7a) * -2 + -6;
    bRam0000000100d2363f = bRam0000000100d22f8f ^ 0x4e;
    cRam0000000100d23640 = bRam0000000100d22f90 + (bRam0000000100d22f90 & 0x59) * -2 + -0x27;
    uRam0000000100d23641 =
         CONCAT17((byte)((ulong)uRam0000000100d22f91 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d388 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f91 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d388 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f91 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d388 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f91 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d388 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f91 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d388 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f91 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d388 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f91 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d388 >> 8),
                                                  (byte)uRam0000000100d22f91 ^ (byte)_UNK_10097d388)
                                                  ))))));
    cRam0000000100d23649 = bRam0000000100d22f99 + (bRam0000000100d22f99 & 0xcf) * -2 + -0x31;
    bRam0000000100d2364a = bRam0000000100d22f9a ^ 0xb0;
    bRam0000000100d2364b = bRam0000000100d22f9b ^ 0x3e;
    bRam0000000100d2364c = bRam0000000100d22f9c ^ 0x51;
    bRam0000000100d2364d = bRam0000000100d22f9d ^ 10;
    bRam0000000100d2364e = bRam0000000100d22f9e ^ 0x8e;
    bRam0000000100d2364f = bRam0000000100d22f9f ^ 0x9e;
    bRam0000000100d23650 = bRam0000000100d22fa0 ^ 0x59;
    cRam0000000100d23651 = bRam0000000100d22fa1 + (bRam0000000100d22fa1 & 0x30) * -2 + '0';
    cRam0000000100d23652 = bRam0000000100d22fa2 + (bRam0000000100d22fa2 & 0x3a) * -2 + -0x46;
    cRam0000000100d23653 = bRam0000000100d22fa3 + (bRam0000000100d22fa3 & 0x42) * -2 + -0x3e;
    uRam0000000100d23654 =
         CONCAT17((byte)((ulong)uRam0000000100d22fa4 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d390 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22fa4 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d390 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22fa4 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d390 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22fa4 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d390 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22fa4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d390 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22fa4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d390 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22fa4 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d390 >> 8),
                                                  (byte)uRam0000000100d22fa4 ^ (byte)_UNK_10097d390)
                                                  ))))));
    bRam0000000100d2365c = bRam0000000100d22fac ^ 0x83;
    bRam0000000100d2365d = bRam0000000100d22fad ^ 0x7e;
    bRam0000000100d2365e = bRam0000000100d22fae ^ 0x90;
    bRam0000000100d2365f = bRam0000000100d22faf ^ 0xe2;
    bRam0000000100d23660 = bRam0000000100d22fb0 ^ 0x9d;
    bRam0000000100d23661 = bRam0000000100d22fb1 ^ 0x53;
    uRam0000000100d2354f =
         CONCAT17((byte)((ulong)uRam0000000100d22e9f >> 0x38) ^
                  (byte)((ulong)_UNK_10097d338 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e9f >> 0x30) ^
                           (byte)((ulong)_UNK_10097d338 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e9f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d338 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e9f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d338 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e9f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d338 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e9f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d338 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e9f >> 8) ^
                                                  (byte)((ulong)_UNK_10097d338 >> 8),
                                                  (byte)uRam0000000100d22e9f ^ (byte)_UNK_10097d338)
                                                  ))))));
    bRam0000000100d23662 = bRam0000000100d22fb2 ^ 0x30;
    cRam0000000100d23663 = bRam0000000100d22fb3 + (bRam0000000100d22fb3 & 0x13) * -2 + '\x13';
    bRam0000000100d23664 = bRam0000000100d22fb4 ^ 3;
    cRam0000000100d23665 = bRam0000000100d22fb5 + (bRam0000000100d22fb5 & 0x44) * -2 + 'D';
    uRam0000000100d23666 =
         CONCAT17((byte)((ulong)uRam0000000100d22fb6 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d398 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22fb6 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d398 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22fb6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d398 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22fb6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d398 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22fb6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d398 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22fb6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d398 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22fb6 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d398 >> 8),
                                                  (byte)uRam0000000100d22fb6 ^ (byte)_UNK_10097d398)
                                                  ))))));
    bRam0000000100d2366e = bRam0000000100d22fbe ^ 0xdf;
    bRam0000000100d2366f = bRam0000000100d22fbf ^ 0x78;
    cRam0000000100d23670 = bRam0000000100d22fc0 + (bRam0000000100d22fc0 & 0xf9) * -2 + 'y';
    bRam0000000100d23671 = bRam0000000100d22fc1 ^ 0x8c;
    bRam0000000100d23672 = bRam0000000100d22fc2 ^ 0xe0;
    cRam0000000100d23673 = bRam0000000100d22fc3 + (bRam0000000100d22fc3 & 0xf7) * -2 + -9;
    bRam0000000100d23674 = bRam0000000100d22fc4 ^ 0x94;
    bRam0000000100d23675 = bRam0000000100d22fc5 ^ 0x4a;
    bRam0000000100d23676 = bRam0000000100d22fc6 ^ 0x86;
    bRam0000000100d23677 = ~((bRam0000000100d22fc7 | 0x21) & (bRam0000000100d22fc7 ^ 0xff | 0xde));
    bRam0000000100d23678 = bRam0000000100d22fc8 ^ 0x43;
    cRam0000000100d23679 = bRam0000000100d22fc9 + (bRam0000000100d22fc9 & 0x6a) * -2 + -0x16;
    cRam0000000100d2367a = bRam0000000100d22fca + (bRam0000000100d22fca & 0x34) * -2 + '4';
    bRam0000000100d2367b = bRam0000000100d22fcb ^ 0xf0;
    cRam0000000100d2367c = bRam0000000100d22fcc + (bRam0000000100d22fcc & 0xdd) * -2 + ']';
    bRam0000000100d2367d = bRam0000000100d22fcd ^ 0x2f;
    cRam0000000100d2367e = bRam0000000100d22fce + (bRam0000000100d22fce & 0x45) * -2 + -0x3b;
    bRam0000000100d2367f = bRam0000000100d22fcf ^ 0x19;
    cRam0000000100d23680 = bRam0000000100d22fd0 + (bRam0000000100d22fd0 & 0x2e) * -2 + -0x52;
    bRam0000000100d23681 = bRam0000000100d22fd1 ^ 8;
    bRam0000000100d23682 = bRam0000000100d22fd2 ^ 0xab;
    bRam0000000100d23683 = bRam0000000100d22fd3 ^ 0x1b;
    bRam0000000100d23684 = bRam0000000100d22fd4 ^ 0x14;
    bRam0000000100d23685 = bRam0000000100d22fd5 ^ 0xd0;
    cRam0000000100d23686 = bRam0000000100d22fd6 + (bRam0000000100d22fd6 & 0x6b) * -2 + 'k';
    bRam0000000100d23687 = bRam0000000100d22fd7 ^ 0x70;
    bRam0000000100d23688 = bRam0000000100d22fd8 ^ 4;
    bRam0000000100d23689 = bRam0000000100d22fd9 ^ 0xf9;
    bRam0000000100d2368a = bRam0000000100d22fda ^ 0x58;
    cRam0000000100d2368b = bRam0000000100d22fdb + (bRam0000000100d22fdb & 0x35) * -2 + '5';
    cRam0000000100d2368c = bRam0000000100d22fdc + (bRam0000000100d22fdc & 0x2e) * -2 + '.';
    bRam0000000100d2368d = bRam0000000100d22fdd ^ 0xb;
    bRam0000000100d2368e = bRam0000000100d22fde ^ 0xe8;
    bRam0000000100d2368f = ~((bRam0000000100d22fdf | 0x83) & (~bRam0000000100d22fdf | 0x7c));
    bRam0000000100d23690 = bRam0000000100d22fe0 ^ 8;
    bRam0000000100d23691 = bRam0000000100d22fe1 ^ 0xd8;
    bRam0000000100d23692 = bRam0000000100d22fe2 ^ 0x5c;
    bRam0000000100d23693 = ~((bRam0000000100d22fe3 | 0x92) & (bRam0000000100d22fe3 ^ 0xff | 0x6d));
    bRam0000000100d23694 = bRam0000000100d22fe4 ^ 0x8c;
    cRam0000000100d23695 = bRam0000000100d22fe5 + (bRam0000000100d22fe5 & 0x1e) * -2 + -0x62;
    uRam0000000100d23696 = uRam0000000100d22fe6;
    bRam0000000100d23697 = ~((bRam0000000100d22fe7 | 0xfa) & (bRam0000000100d22fe7 ^ 0xff | 5));
    bRam0000000100d23698 = bRam0000000100d22fe8 ^ 0x9a;
    cRam0000000100d23699 = bRam0000000100d22fe9 + (bRam0000000100d22fe9 & 0x5b) * -2 + -0x25;
    bRam0000000100d2369a = bRam0000000100d22fea ^ 0x96;
    bRam0000000100d2369b = bRam0000000100d22feb ^ 0x8f;
    bRam0000000100d2369c = bRam0000000100d22fec ^ 0xc3;
    bRam0000000100d2369d = bRam0000000100d22fed ^ 0x87;
    uRam0000000100d23513 =
         CONCAT17((byte)((ulong)uRam0000000100d22e63 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d330 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e63 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d330 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e63 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d330 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e63 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d330 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e63 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d330 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e63 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d330 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e63 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d330 >> 8),
                                                  (byte)uRam0000000100d22e63 ^ (byte)_UNK_10097d330)
                                                  ))))));
    bRam0000000100d2369e = bRam0000000100d22fee ^ 0x54;
    cRam0000000100d2369f = bRam0000000100d22fef + (bRam0000000100d22fef & 0xf) * -2 + '\x0f';
    bRam0000000100d236a8 = bRam0000000100d22ff8 ^ 0xca;
    bRam0000000100d236a9 = bRam0000000100d22ff9 ^ 0x36;
    bRam0000000100d236aa = bRam0000000100d22ffa ^ 0x46;
    bRam0000000100d236ab = bRam0000000100d22ffb ^ 0x92;
    bRam0000000100d236ac = bRam0000000100d22ffc ^ 0xd2;
    bRam0000000100d236ad = bRam0000000100d22ffd ^ 0xd7;
    cRam0000000100d236ae = bRam0000000100d22ffe + (bRam0000000100d22ffe & 0xdd) * -2 + -0x23;
    bRam0000000100d236af = bRam0000000100d22fff ^ 0xdd;
    bRam0000000100d236b0 = bRam0000000100d23000 ^ 0xa6;
    uRam0000000100d234fe =
         CONCAT17((byte)((ulong)uRam0000000100d22e4e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d328 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e4e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d328 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e4e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d328 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e4e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d328 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e4e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d328 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e4e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d328 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e4e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d328 >> 8),
                                                  (byte)uRam0000000100d22e4e ^ (byte)_UNK_10097d328)
                                                  ))))));
    cRam0000000100d236b1 = bRam0000000100d23001 + (bRam0000000100d23001 & 0x4d) * -2 + -0x33;
    bRam0000000100d236b2 = bRam0000000100d23002 ^ 0x16;
    bRam0000000100d236b3 = bRam0000000100d23003 ^ 0x15;
    bRam0000000100d236b4 = bRam0000000100d23004 ^ 0x23;
    bRam0000000100d236b5 = bRam0000000100d23005 ^ 0x8d;
    bRam0000000100d236b6 = bRam0000000100d23006 ^ 0x2c;
    bRam0000000100d236b7 = bRam0000000100d23007 ^ 0xd;
    bRam0000000100d236b8 = ~((bRam0000000100d23008 | 0xf9) & (~bRam0000000100d23008 | 6));
    cRam0000000100d236b9 = bRam0000000100d23009 + (bRam0000000100d23009 & 0xbb) * -2 + -0x45;
    bRam0000000100d236ba = ~((bRam0000000100d2300a | 0xa7) & (bRam0000000100d2300a ^ 0xff | 0x58));
    cRam0000000100d236bb = bRam0000000100d2300b + (bRam0000000100d2300b & 0x74) * -2 + 't';
    bRam0000000100d236bc = bRam0000000100d2300c ^ 0x51;
    bRam0000000100d236bd = bRam0000000100d2300d ^ 0x26;
    bRam0000000100d236be = bRam0000000100d2300e ^ 0xf2;
    bRam0000000100d236bf = bRam0000000100d2300f ^ 0xcb;
    bRam0000000100d236c0 = bRam0000000100d23010 ^ 0x1b;
    bRam0000000100d236c1 = ~((bRam0000000100d23011 | 0xf3) & (~bRam0000000100d23011 | 0xc));
    bRam0000000100d236c2 = bRam0000000100d23012 ^ 0x41;
    bRam0000000100d236c3 = bRam0000000100d23013 ^ 0x89;
    bRam0000000100d236c4 = bRam0000000100d23014 ^ 0x56;
    bRam0000000100d236c5 = bRam0000000100d23015 ^ 0xd8;
    bRam0000000100d236c6 = ~((bRam0000000100d23016 | 0x59) & (bRam0000000100d23016 ^ 0xff | 0xa6));
    bRam0000000100d236c7 = bRam0000000100d23017 ^ 0x72;
    bRam0000000100d236c8 = bRam0000000100d23018 ^ 0xdd;
    uRam0000000100d234da =
         CONCAT17((byte)((ulong)uRam0000000100d22e2a >> 0x38) ^
                  (byte)((ulong)_UNK_10097d850 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e2a >> 0x30) ^
                           (byte)((ulong)_UNK_10097d850 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e2a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d850 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e2a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d850 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e2a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d850 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e2a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d850 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e2a >> 8) ^
                                                  (byte)((ulong)_UNK_10097d850 >> 8),
                                                  (byte)uRam0000000100d22e2a ^ (byte)_UNK_10097d850)
                                                  ))))));
    uRam0000000100d234e2 =
         CONCAT17((byte)((ulong)uRam0000000100d22e32 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d858 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e32 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d858 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e32 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d858 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e32 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d858 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e32 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d858 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e32 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d858 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e32 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d858 >> 8),
                                                  (byte)uRam0000000100d22e32 ^ (byte)_UNK_10097d858)
                                                  ))))));
    bRam0000000100d236c9 = bRam0000000100d23019 ^ 0x55;
    bRam0000000100d236ca = bRam0000000100d2301a ^ 6;
    bRam0000000100d236cb = bRam0000000100d2301b ^ 0x40;
    bRam0000000100d236cc = bRam0000000100d2301c ^ 0xa7;
    bRam0000000100d236cd = bRam0000000100d2301d ^ 4;
    uRam0000000100d234ce =
         CONCAT17((byte)((ulong)uRam0000000100d22e1e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d320 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22e1e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d320 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22e1e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d320 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22e1e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d320 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22e1e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d320 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22e1e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d320 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22e1e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d320 >> 8),
                                                  (byte)uRam0000000100d22e1e ^ (byte)_UNK_10097d320)
                                                  ))))));
    cRam0000000100d236ce = bRam0000000100d2301e + (bRam0000000100d2301e & 0x56) * -2 + -0x2a;
    bRam0000000100d236cf = bRam0000000100d2301f ^ 0x27;
    bRam0000000100d236d0 = bRam0000000100d23020 ^ 0xe8;
    bRam0000000100d236d1 = bRam0000000100d23021 ^ 0xe9;
    bRam0000000100d236d2 = bRam0000000100d23022 ^ 0x12;
    cRam0000000100d236d3 = bRam0000000100d23023 + (bRam0000000100d23023 & 0xaa) * -2 + -0x56;
    bRam0000000100d236d4 = bRam0000000100d23024 ^ 0xc4;
    bRam0000000100d236d5 = bRam0000000100d23025 ^ 0x79;
    bRam0000000100d236d6 = bRam0000000100d23026 ^ 0x9b;
    bRam0000000100d236d7 = bRam0000000100d23027 ^ 0xab;
    bRam0000000100d236d8 = bRam0000000100d23028 ^ 0x7d;
    cRam0000000100d236d9 = bRam0000000100d23029 + (bRam0000000100d23029 & 0x40) * '\x02' + -0x40;
    cRam0000000100d236da = bRam0000000100d2302a + (bRam0000000100d2302a & 0x31) * -2 + -0x4f;
    bRam0000000100d236db = bRam0000000100d2302b ^ 0x4c;
    cRam0000000100d236dc = bRam0000000100d2302c + (bRam0000000100d2302c & 0x2d) * -2 + -0x53;
    bRam0000000100d236dd = bRam0000000100d2302d ^ 0x6d;
    bRam0000000100d236de = bRam0000000100d2302e ^ 0xe;
    bRam0000000100d236df = bRam0000000100d2302f ^ 0xcb;
    bRam0000000100d236e0 = bRam0000000100d23030 ^ 0x26;
    bRam0000000100d236e1 = bRam0000000100d23031 ^ 0x8a;
    bRam0000000100d236e2 = bRam0000000100d23032 ^ 0xb4;
    bRam0000000100d236e3 = ~((bRam0000000100d23033 | 0x43) & (bRam0000000100d23033 ^ 0xff | 0xbc));
    bRam0000000100d236e4 = bRam0000000100d23034 ^ 0x12;
    bRam0000000100d236e5 = bRam0000000100d23035 ^ 0xfa;
    uRam0000000100d234ae =
         CONCAT17((byte)((ulong)uRam0000000100d22dfe >> 0x38) ^
                  (byte)((ulong)_UNK_10097d318 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22dfe >> 0x30) ^
                           (byte)((ulong)_UNK_10097d318 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22dfe >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d318 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22dfe >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d318 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22dfe >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d318 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22dfe >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d318 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22dfe >> 8) ^
                                                  (byte)((ulong)_UNK_10097d318 >> 8),
                                                  (byte)uRam0000000100d22dfe ^ (byte)_UNK_10097d318)
                                                  ))))));
    cRam0000000100d236e6 = bRam0000000100d23036 + (bRam0000000100d23036 & 0x27) * -2 + -0x59;
    cRam0000000100d236e7 = bRam0000000100d23037 + (bRam0000000100d23037 & 0x2c) * -2 + ',';
    bRam0000000100d236e8 = ~((bRam0000000100d23038 | 0xed) & (bRam0000000100d23038 ^ 0xff | 0x12));
    bRam0000000100d236e9 = bRam0000000100d23039 ^ 0x66;
    bRam0000000100d236ea = bRam0000000100d2303a ^ 0x46;
    cRam0000000100d236eb = bRam0000000100d2303b + (bRam0000000100d2303b & 0x39) * -2 + -0x47;
    cRam0000000100d236ec = bRam0000000100d2303c + (bRam0000000100d2303c & 0x39) * -2 + -0x47;
    bRam0000000100d236ed = bRam0000000100d2303d ^ 0x38;
    bRam0000000100d236ee = bRam0000000100d2303e ^ 0x2d;
    bRam0000000100d236ef = bRam0000000100d2303f ^ 0x6a;
    bRam0000000100d236f0 = bRam0000000100d23040 ^ 0xd9;
    bRam0000000100d236f1 = bRam0000000100d23041 ^ 0xda;
    cRam0000000100d236f2 = bRam0000000100d23042 + (bRam0000000100d23042 & 0x3e) * -2 + -0x42;
    cRam0000000100d236f3 = bRam0000000100d23043 + (bRam0000000100d23043 & 0x60) * -2 + -0x20;
    bRam0000000100d236f4 = bRam0000000100d23044 ^ 6;
    cRam0000000100d236f5 = bRam0000000100d23045 + (bRam0000000100d23045 & 0x45) * -2 + 'E';
    bRam0000000100d236f6 = bRam0000000100d23046 ^ 0x78;
    cRam0000000100d236f7 = bRam0000000100d23047 + (bRam0000000100d23047 & 0x7e) * -2 + -2;
    bRam0000000100d236f8 = bRam0000000100d23048 ^ 0x24;
    bRam0000000100d236f9 = bRam0000000100d23049 ^ 0x5b;
    bRam0000000100d236fa = bRam0000000100d2304a ^ 0x40;
    cRam0000000100d236fb = bRam0000000100d2304b + (bRam0000000100d2304b & 0x36) * -2 + '6';
    bRam0000000100d236fc = bRam0000000100d2304c ^ 0x8d;
    cRam0000000100d236fd = bRam0000000100d2304d + (bRam0000000100d2304d & 0x4e) * -2 + -0x32;
    bRam0000000100d23706 = bRam0000000100d23056 ^ 0x2f;
    bRam0000000100d23707 = bRam0000000100d23057 ^ 0x12;
    uRam0000000100d235e8 =
         CONCAT17((byte)((ulong)uRam0000000100d22f38 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d370 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22f38 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d370 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22f38 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d370 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22f38 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d370 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22f38 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d370 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22f38 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d370 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22f38 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d370 >> 8),
                                                  (byte)uRam0000000100d22f38 ^ (byte)_UNK_10097d370)
                                                  ))))));
    uRam0000000100d236a0 =
         CONCAT17((byte)((ulong)uRam0000000100d22ff0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d3a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d22ff0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d3a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d22ff0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d3a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d22ff0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d3a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d22ff0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d3a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d22ff0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d3a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d22ff0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d3a0 >> 8),
                                                  (byte)uRam0000000100d22ff0 ^ (byte)_UNK_10097d3a0)
                                                  ))))));
    uRam0000000100d236fe =
         CONCAT17((byte)((ulong)uRam0000000100d2304e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d3a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2304e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d3a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2304e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d3a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2304e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d3a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2304e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d3a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2304e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d3a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2304e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d3a8 >> 8),
                                                  (byte)uRam0000000100d2304e ^ (byte)_UNK_10097d3a8)
                                                  ))))));
    bRam0000000100d23708 = bRam0000000100d23058 ^ 0x72;
    bRam0000000100d23719 = bRam0000000100d23069 ^ 0x3f;
    cRam0000000100d2371a = bRam0000000100d2306a + (bRam0000000100d2306a & 0x16) * -2 + -0x6a;
    cRam0000000100d2371b = bRam0000000100d2306b + (bRam0000000100d2306b & 0x37) * -2 + '7';
    bRam0000000100d2371c = bRam0000000100d2306c ^ 0xcf;
    bRam0000000100d2371d = bRam0000000100d2306d ^ 0x47;
    bRam0000000100d2371e = bRam0000000100d2306e ^ 0x7d;
    bRam0000000100d2371f = bRam0000000100d2306f ^ 0x1c;
    bRam0000000100d23720 = bRam0000000100d23070 ^ 0x8a;
    bRam0000000100d23721 = bRam0000000100d23071 ^ 0xf4;
    cRam0000000100d23722 = bRam0000000100d23072 + (bRam0000000100d23072 & 0x68) * -2 + -0x18;
    bRam0000000100d23723 = bRam0000000100d23073 ^ 0x7b;
    bRam0000000100d23724 = bRam0000000100d23074 ^ 0xec;
    bRam0000000100d23725 = bRam0000000100d23075 ^ 0xb6;
    bRam0000000100d23726 = bRam0000000100d23076 ^ 0x9b;
    bRam0000000100d23727 = bRam0000000100d23077 ^ 0xaf;
    bRam0000000100d23728 = ~((bRam0000000100d23078 | 0x98) & (bRam0000000100d23078 ^ 0xff | 0x67));
    bRam0000000100d23729 = bRam0000000100d23079 ^ 0x95;
    bRam0000000100d2372a = bRam0000000100d2307a ^ 0xa3;
    bRam0000000100d2372b = bRam0000000100d2307b ^ 1;
    bRam0000000100d2372c = bRam0000000100d2307c ^ 3;
    bRam0000000100d2372d = ~((bRam0000000100d2307d | 0xd5) & (bRam0000000100d2307d ^ 0xff | 0x2a));
    bRam0000000100d2372e = bRam0000000100d2307e ^ 0xe7;
    cRam0000000100d2372f = bRam0000000100d2307f + (bRam0000000100d2307f & 0x16) * -2 + -0x6a;
    bRam0000000100d23730 = bRam0000000100d23080 ^ 0x1a;
    bRam0000000100d23731 = bRam0000000100d23081 ^ 0x8f;
    bRam0000000100d23732 = bRam0000000100d23082 ^ 0xd;
    bRam0000000100d23733 = bRam0000000100d23083 ^ 0x5a;
    bRam0000000100d23734 = bRam0000000100d23084 ^ 0x3e;
    bRam0000000100d23735 = bRam0000000100d23085 ^ 0xad;
    bRam0000000100d23736 = bRam0000000100d23086 ^ 0x2e;
    cRam0000000100d23737 = bRam0000000100d23087 + (bRam0000000100d23087 & 1) * -2 + -0x7f;
    bRam0000000100d23740 = bRam0000000100d23090 ^ 0x8b;
    bRam0000000100d23741 = bRam0000000100d23091 ^ 0xf9;
    bRam0000000100d23742 = bRam0000000100d23092 ^ 0xb5;
    bRam0000000100d23743 = bRam0000000100d23093 ^ 0x14;
    bRam0000000100d23744 = bRam0000000100d23094 ^ 0xc9;
    bRam0000000100d23745 = bRam0000000100d23095 ^ 0x4d;
    cRam0000000100d23746 = bRam0000000100d23096 + (bRam0000000100d23096 & 0x75) * -2 + -0xb;
    bRam0000000100d2374f = bRam0000000100d2309f ^ 0xab;
    bRam0000000100d23750 = bRam0000000100d230a0 ^ 0x94;
    bRam0000000100d23751 = bRam0000000100d230a1 ^ 0xcf;
    cRam0000000100d23752 = bRam0000000100d230a2 + (bRam0000000100d230a2 & 199) * -2 + 'G';
    bRam0000000100d23753 = bRam0000000100d230a3 ^ 0x20;
    cRam0000000100d23754 = bRam0000000100d230a4 + (bRam0000000100d230a4 & 0x45) * -2 + -0x3b;
    bRam0000000100d23755 = bRam0000000100d230a5 ^ 0x79;
    bRam0000000100d23756 = bRam0000000100d230a6 ^ 0x7a;
    bRam0000000100d23757 = bRam0000000100d230a7 ^ 0x1c;
    bRam0000000100d23758 = bRam0000000100d230a8 ^ 0x8d;
    cRam0000000100d23759 = bRam0000000100d230a9 + (bRam0000000100d230a9 & 0x7a) * -2 + 'z';
    uRam0000000100d23762 = uRam0000000100d230b2;
    bRam0000000100d23763 = bRam0000000100d230b3 ^ 99;
    cRam0000000100d23764 = bRam0000000100d230b4 + (bRam0000000100d230b4 & 0x53) * -2 + 'S';
    bRam0000000100d23765 = bRam0000000100d230b5 ^ 0x14;
    bRam0000000100d23766 = bRam0000000100d230b6 ^ 0x8a;
    bRam0000000100d23767 = bRam0000000100d230b7 ^ 0x6c;
    cRam0000000100d23768 = bRam0000000100d230b8 + (bRam0000000100d230b8 & 0x5e) * -2 + '^';
    cRam0000000100d23771 = bRam0000000100d230c1 + (bRam0000000100d230c1 & 0x27) * -2 + -0x59;
    bRam0000000100d23772 = bRam0000000100d230c2 ^ 0x99;
    cRam0000000100d23773 = bRam0000000100d230c3 + (bRam0000000100d230c3 & 0xf) * -2 + '\x0f';
    cRam0000000100d23774 = bRam0000000100d230c4 + (bRam0000000100d230c4 & 0xf) * -2 + -0x71;
    bRam0000000100d23775 = bRam0000000100d230c5 ^ 0xde;
    bRam0000000100d23776 = bRam0000000100d230c6 ^ 0x89;
    bRam0000000100d23777 = bRam0000000100d230c7 ^ 0x25;
    bRam0000000100d23778 = bRam0000000100d230c8 ^ 0x6f;
    bRam0000000100d23779 = bRam0000000100d230c9 ^ 0x36;
    bRam0000000100d2377a = bRam0000000100d230ca ^ 0x81;
    cRam0000000100d2377b = bRam0000000100d230cb + (bRam0000000100d230cb & 0x5a) * -2 + -0x26;
    bRam0000000100d23784 = bRam0000000100d230d4 ^ 0x93;
    bRam0000000100d23785 = bRam0000000100d230d5 ^ 0x62;
    bRam0000000100d23786 = bRam0000000100d230d6 ^ 0x52;
    bRam0000000100d23787 = bRam0000000100d230d7 ^ 0xe8;
    bRam0000000100d23788 = bRam0000000100d230d8 ^ 0xe1;
    bRam0000000100d23789 = bRam0000000100d230d9 ^ 0x8a;
    cRam0000000100d2378a = bRam0000000100d230da + (bRam0000000100d230da & 0x5e) * -2 + -0x22;
    bRam0000000100d2378b = bRam0000000100d230db ^ 0x42;
    bRam0000000100d2378c = bRam0000000100d230dc ^ 0xd2;
    bRam0000000100d2378d = bRam0000000100d230dd ^ 0x68;
    cRam0000000100d2378e = bRam0000000100d230de + (bRam0000000100d230de & 0x60) * -2 + -0x20;
    cRam0000000100d23797 = bRam0000000100d230e7 + (bRam0000000100d230e7 & 0x4e) * -2 + -0x32;
    bRam0000000100d23798 = bRam0000000100d230e8 ^ 0x4f;
    bRam0000000100d23799 = bRam0000000100d230e9 ^ 0xe9;
    bRam0000000100d2379a = bRam0000000100d230ea ^ 0x10;
    bRam0000000100d2379b = bRam0000000100d230eb ^ 0xe3;
    bRam0000000100d2379c = bRam0000000100d230ec ^ 0x6e;
    bRam0000000100d2379d = bRam0000000100d230ed ^ 0x6c;
    cRam0000000100d2379e = bRam0000000100d230ee + (bRam0000000100d230ee & 0x5b) * -2 + -0x25;
    bRam0000000100d2379f = bRam0000000100d230ef ^ 0x2d;
    cRam0000000100d237a0 = bRam0000000100d230f0 + (bRam0000000100d230f0 & 0x6b) * -2 + -0x15;
    cRam0000000100d237a1 = bRam0000000100d230f1 + (bRam0000000100d230f1 & 0x14) * -2 + '\x14';
    bRam0000000100d237a2 = bRam0000000100d230f2 ^ 0xda;
    cRam0000000100d237a3 = bRam0000000100d230f3 + (bRam0000000100d230f3 & 0xdd) * -2 + -0x23;
    bRam0000000100d237a4 = bRam0000000100d230f4 ^ 0xb2;
    cRam0000000100d237a5 = bRam0000000100d230f5 + (bRam0000000100d230f5 & 0x56) * -2 + 'V';
    cRam0000000100d237a6 = bRam0000000100d230f6 + (bRam0000000100d230f6 & 0x60) * -2 + -0x20;
    bRam0000000100d237af = bRam0000000100d230ff ^ 0xb9;
    bRam0000000100d237b0 = bRam0000000100d23100 ^ 2;
    bRam0000000100d237b1 = bRam0000000100d23101 ^ 0x9c;
    bRam0000000100d237b2 = ~((bRam0000000100d23102 | 0x71) & (bRam0000000100d23102 ^ 0xff | 0x8e));
    cRam0000000100d237b3 = bRam0000000100d23103 + (bRam0000000100d23103 & 0x11) * -2 + '\x11';
    cRam0000000100d237b4 = bRam0000000100d23104 + (bRam0000000100d23104 & 0x11) * -2 + '\x11';
    bRam0000000100d237bd = bRam0000000100d2310d ^ 0xd1;
    bRam0000000100d237be = ~((bRam0000000100d2310e | 0x96) & (bRam0000000100d2310e ^ 0xff | 0x69));
    bRam0000000100d237bf = bRam0000000100d2310f ^ 0x80;
    bRam0000000100d237c0 = bRam0000000100d23110 ^ 0x92;
    bRam0000000100d237c1 = bRam0000000100d23111 ^ 0x99;
    bRam0000000100d237c2 = bRam0000000100d23112 ^ 0x17;
    cRam0000000100d237c3 = bRam0000000100d23113 + (bRam0000000100d23113 & 0x35) * -2 + '5';
    cRam0000000100d237cc = bRam0000000100d2311c + (bRam0000000100d2311c & 0x68) * -2 + 'h';
    bRam0000000100d237cd = bRam0000000100d2311d ^ 0x4d;
    bRam0000000100d237ce = bRam0000000100d2311e ^ 0x90;
    cRam0000000100d237cf = bRam0000000100d2311f + (bRam0000000100d2311f & 0x14) * -2 + '\x14';
    bRam0000000100d237d0 = bRam0000000100d23120 ^ 0xa1;
    bRam0000000100d237d1 = bRam0000000100d23121 ^ 0x85;
    bRam0000000100d237d2 = bRam0000000100d23122 ^ 0x35;
    bRam0000000100d237d3 = bRam0000000100d23123 ^ 0x24;
    bRam0000000100d237d4 = bRam0000000100d23124 ^ 0xf4;
    bRam0000000100d237d5 = bRam0000000100d23125 ^ 0x7e;
    bRam0000000100d237d6 = bRam0000000100d23126 ^ 0x38;
    cRam0000000100d237d7 = bRam0000000100d23127 + (bRam0000000100d23127 & 0x70) * -2 + -0x10;
    bRam0000000100d237d8 = bRam0000000100d23128 ^ 0xbd;
    bRam0000000100d237d9 = bRam0000000100d23129 ^ 0x78;
    bRam0000000100d237da = bRam0000000100d2312a ^ 0x31;
    bRam0000000100d237db = bRam0000000100d2312b ^ 4;
    cRam0000000100d237dc = bRam0000000100d2312c + (bRam0000000100d2312c & 4) * -2 + '\x04';
    bRam0000000100d237dd = bRam0000000100d2312d ^ 0xc3;
    bRam0000000100d237de = bRam0000000100d2312e ^ 0xf3;
    bRam0000000100d237df = bRam0000000100d2312f ^ 0x95;
    bRam0000000100d237e0 = bRam0000000100d23130 ^ 0x39;
    bRam0000000100d237e1 = bRam0000000100d23131 ^ 0x2d;
    cRam0000000100d237e2 = bRam0000000100d23132 + (bRam0000000100d23132 & 0x3a) * -2 + ':';
    bRam0000000100d237e3 = bRam0000000100d23133 ^ 0x62;
    bRam0000000100d237e4 = bRam0000000100d23134 ^ 0xee;
    cRam0000000100d237e5 = bRam0000000100d23135 + (bRam0000000100d23135 & 0x65) * -2 + 'e';
    bRam0000000100d237e6 = bRam0000000100d23136 ^ 0x6f;
    bRam0000000100d237e7 = bRam0000000100d23137 ^ 0x21;
    bRam0000000100d237e8 = bRam0000000100d23138 ^ 0xd8;
    bRam0000000100d237e9 = bRam0000000100d23139 ^ 0x3e;
    bRam0000000100d237ea = bRam0000000100d2313a ^ 0xc3;
    cRam0000000100d237eb = bRam0000000100d2313b + (bRam0000000100d2313b & 0x24) * -2 + '$';
    bRam0000000100d237f4 = bRam0000000100d23144 ^ 0x7d;
    bRam0000000100d237f5 = bRam0000000100d23145 ^ 0x5a;
    bRam0000000100d237f6 = bRam0000000100d23146 ^ 0x8e;
    bRam0000000100d237f7 = bRam0000000100d23147 ^ 0xc0;
    bRam0000000100d237f8 = bRam0000000100d23148 ^ 0x2b;
    bRam0000000100d237f9 = ~((bRam0000000100d23149 | 0xa8) & (bRam0000000100d23149 ^ 0xff | 0x57));
    bRam0000000100d237fa = bRam0000000100d2314a ^ 0x6f;
    bRam0000000100d237fb = bRam0000000100d2314b ^ 0x43;
    bRam0000000100d237fc = bRam0000000100d2314c ^ 0xca;
    bRam0000000100d237fd = bRam0000000100d2314d ^ 0x7e;
    bRam0000000100d237fe = bRam0000000100d2314e ^ 0xea;
    bRam0000000100d237ff = bRam0000000100d2314f ^ 0x91;
    cRam0000000100d23800 = bRam0000000100d23150 + (bRam0000000100d23150 & 0x66) * -2 + -0x1a;
    bRam0000000100d23801 = bRam0000000100d23151 ^ 0x67;
    bRam0000000100d23802 = bRam0000000100d23152 ^ 0xa0;
    bRam0000000100d23803 = bRam0000000100d23153 ^ 0xcd;
    bRam0000000100d23804 = bRam0000000100d23154 ^ 0x7a;
    bRam0000000100d23805 = bRam0000000100d23155 ^ 0xb0;
    bRam0000000100d23806 = bRam0000000100d23156 ^ 0xa6;
    cRam0000000100d23807 = bRam0000000100d23157 + (bRam0000000100d23157 & 0x7a) * -2 + -6;
    bRam0000000100d23808 = bRam0000000100d23158 ^ 0x1f;
    bRam0000000100d23809 = bRam0000000100d23159 ^ 0xc4;
    bRam0000000100d2380a = bRam0000000100d2315a ^ 0x67;
    bRam0000000100d2380b = bRam0000000100d2315b ^ 0x69;
    bRam0000000100d2380c = bRam0000000100d2315c ^ 0x5f;
    bRam0000000100d2380d = bRam0000000100d2315d ^ 0x99;
    bRam0000000100d2380e = ~((bRam0000000100d2315e | 0x82) & (bRam0000000100d2315e ^ 0xff | 0x7d));
    bRam0000000100d2380f = bRam0000000100d2315f ^ 0x1b;
    bRam0000000100d23810 = bRam0000000100d23160 ^ 4;
    bRam0000000100d23811 = bRam0000000100d23161 ^ 0xeb;
    bRam0000000100d23812 = bRam0000000100d23162 ^ 1;
    bRam0000000100d23813 = bRam0000000100d23163 ^ 0x3f;
    bRam0000000100d23814 = bRam0000000100d23164 ^ 5;
    bRam0000000100d23815 = bRam0000000100d23165 ^ 0xa7;
    cRam0000000100d23816 = bRam0000000100d23166 + (bRam0000000100d23166 & 0x69) * -2 + 'i';
    uRam0000000100d23817 =
         CONCAT17((byte)((ulong)uRam0000000100d23167 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23167 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23167 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23167 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23167 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23167 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23167 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5b0 >> 8),
                                                  (byte)uRam0000000100d23167 ^ (byte)_UNK_10097d5b0)
                                                  ))))));
    bRam0000000100d2381f = bRam0000000100d2316f ^ 0x8a;
    bRam0000000100d23820 = bRam0000000100d23170 ^ 0x83;
    bRam0000000100d23821 = bRam0000000100d23171 ^ 0x69;
    cRam0000000100d23822 = bRam0000000100d23172 + (bRam0000000100d23172 & 0x68) * -2 + -0x18;
    uRam0000000100d23823 =
         CONCAT17((byte)((ulong)uRam0000000100d23173 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23173 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23173 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23173 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23173 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23173 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23173 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5b8 >> 8),
                                                  (byte)uRam0000000100d23173 ^ (byte)_UNK_10097d5b8)
                                                  ))))));
    bRam0000000100d2382b = bRam0000000100d2317b ^ 0x35;
    bRam0000000100d2382c = bRam0000000100d2317c ^ 0x4a;
    bRam0000000100d2382d = bRam0000000100d2317d ^ 0x19;
    cRam0000000100d2382e = bRam0000000100d2317e + (bRam0000000100d2317e & 0x18) * -2 + '\x18';
    bRam0000000100d2382f = bRam0000000100d2317f ^ 4;
    cRam0000000100d23830 = bRam0000000100d23180 + (bRam0000000100d23180 & 0xf) * -2 + '\x0f';
    bRam0000000100d23831 = bRam0000000100d23181 ^ 0x3e;
    bRam0000000100d23832 = bRam0000000100d23182 ^ 0x67;
    bRam0000000100d23833 = bRam0000000100d23183 ^ 0x3c;
    bRam0000000100d23834 = bRam0000000100d23184 ^ 0x12;
    cRam0000000100d23835 = bRam0000000100d23185 + (bRam0000000100d23185 & 0x3f) * -2 + -0x41;
    uRam0000000100d23836 =
         CONCAT17((byte)((ulong)uRam0000000100d23186 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23186 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23186 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23186 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23186 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23186 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23186 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9d0 >> 8),
                                                  (byte)uRam0000000100d23186 ^ (byte)_UNK_10097d9d0)
                                                  ))))));
    uRam0000000100d2383e =
         CONCAT17((byte)((ulong)uRam0000000100d2318e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2318e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2318e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2318e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2318e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2318e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2318e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9d8 >> 8),
                                                  (byte)uRam0000000100d2318e ^ (byte)_UNK_10097d9d8)
                                                  ))))));
    bRam0000000100d23846 = bRam0000000100d23196 ^ 0xd2;
    cRam0000000100d23847 = bRam0000000100d23197 + (bRam0000000100d23197 & 0x76) * -2 + 'v';
    bRam0000000100d23848 = ~((bRam0000000100d23198 | 9) & (bRam0000000100d23198 ^ 0xff | 0xf6));
    bRam0000000100d23849 = bRam0000000100d23199 ^ 0xcd;
    bRam0000000100d2384a = bRam0000000100d2319a ^ 0x96;
    bRam0000000100d2384b = bRam0000000100d2319b ^ 0xf3;
    bRam0000000100d2384c = bRam0000000100d2319c ^ 0x39;
    cRam0000000100d2384d = bRam0000000100d2319d + (bRam0000000100d2319d & 0x14) * -2 + '\x14';
    bRam0000000100d2384e = bRam0000000100d2319e ^ 0xa9;
    bRam0000000100d2384f = bRam0000000100d2319f ^ 0x1e;
    bRam0000000100d23850 = bRam0000000100d231a0 ^ 2;
    cRam0000000100d23851 = bRam0000000100d231a1 + (bRam0000000100d231a1 & 0xaa) * -2 + '*';
    bRam0000000100d23852 = bRam0000000100d231a2 ^ 0x59;
    bRam0000000100d23853 = bRam0000000100d231a3 ^ 0x7f;
    bRam0000000100d23854 = bRam0000000100d231a4 ^ 0x22;
    bRam0000000100d23855 = bRam0000000100d231a5 ^ 0xf7;
    bRam0000000100d23856 = bRam0000000100d231a6 ^ 0x71;
    bRam0000000100d23857 = bRam0000000100d231a7 ^ 0xaa;
    bRam0000000100d23858 = bRam0000000100d231a8 ^ 0xe7;
    cRam0000000100d23859 = bRam0000000100d231a9 + (bRam0000000100d231a9 & 0x74) * -2 + 't';
    bRam0000000100d2385a = bRam0000000100d231aa ^ 3;
    bRam0000000100d2385b = bRam0000000100d231ab ^ 0x9c;
    cRam0000000100d2385c = bRam0000000100d231ac + (bRam0000000100d231ac & 0x1f) * -2 + -0x61;
    uRam0000000100d2385d =
         CONCAT17((byte)((ulong)uRam0000000100d231ad >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d231ad >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d231ad >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d231ad >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d231ad >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d231ad >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d231ad >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5c0 >> 8),
                                                  (byte)uRam0000000100d231ad ^ (byte)_UNK_10097d5c0)
                                                  ))))));
    bRam0000000100d23865 = bRam0000000100d231b5 ^ 0x3a;
    bRam0000000100d23866 = bRam0000000100d231b6 ^ 0x8a;
    bRam0000000100d23867 = bRam0000000100d231b7 ^ 0x77;
    bRam0000000100d23868 = bRam0000000100d231b8 ^ 199;
    bRam0000000100d23869 = bRam0000000100d231b9 ^ 0xb0;
    bRam0000000100d2386a = bRam0000000100d231ba ^ 0xad;
    bRam0000000100d2386b = ~((bRam0000000100d231bb | 0x2e) & (bRam0000000100d231bb ^ 0xff | 0xd1));
    cRam0000000100d2386c = bRam0000000100d231bc + (bRam0000000100d231bc & 0x56) * -2 + -0x2a;
    uRam0000000100d2386d =
         CONCAT17((byte)((ulong)uRam0000000100d231bd >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d231bd >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d231bd >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d231bd >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d231bd >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d231bd >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d231bd >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5c8 >> 8),
                                                  (byte)uRam0000000100d231bd ^ (byte)_UNK_10097d5c8)
                                                  ))))));
    bRam0000000100d23875 = bRam0000000100d231c5 ^ 0x93;
    bRam0000000100d23876 = bRam0000000100d231c6 ^ 0x84;
    bRam0000000100d23877 = bRam0000000100d231c7 ^ 0x13;
    cRam0000000100d23878 = bRam0000000100d231c8 + (bRam0000000100d231c8 & 0x69) * -2 + -0x17;
    uRam0000000100d23879 =
         CONCAT17((byte)((ulong)uRam0000000100d231c9 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d231c9 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d231c9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d231c9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d231c9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d231c9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d231c9 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5d0 >> 8),
                                                  (byte)uRam0000000100d231c9 ^ (byte)_UNK_10097d5d0)
                                                  ))))));
    bRam0000000100d23881 = bRam0000000100d231d1 ^ 199;
    bRam0000000100d23882 = bRam0000000100d231d2 ^ 0x56;
    cRam0000000100d23883 = bRam0000000100d231d3 + (bRam0000000100d231d3 & 0x4e) * -2 + -0x32;
    bRam0000000100d23884 = bRam0000000100d231d4 ^ 0xa0;
    cRam0000000100d23885 = bRam0000000100d231d5 + (bRam0000000100d231d5 & 0x36) * -2 + -0x4a;
    cRam0000000100d23886 = bRam0000000100d231d6 + (bRam0000000100d231d6 & 2) * -2 + -0x7e;
    uRam0000000100d23887 =
         CONCAT17((byte)((ulong)uRam0000000100d231d7 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d231d7 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d231d7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d231d7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d231d7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d231d7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d231d7 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5d8 >> 8),
                                                  (byte)uRam0000000100d231d7 ^ (byte)_UNK_10097d5d8)
                                                  ))))));
    bRam0000000100d2388f = bRam0000000100d231df ^ 0x1a;
    cRam0000000100d23890 = bRam0000000100d231e0 + (bRam0000000100d231e0 & 0x7a) * -2 + 'z';
    cRam0000000100d23891 = bRam0000000100d231e1 + (bRam0000000100d231e1 & 0x50) * -2 + 'P';
    uRam0000000100d23892 =
         CONCAT17((byte)((ulong)uRam0000000100d231e2 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d231e2 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d231e2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d231e2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d231e2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d231e2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d231e2 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5e0 >> 8),
                                                  (byte)uRam0000000100d231e2 ^ (byte)_UNK_10097d5e0)
                                                  ))))));
    bRam0000000100d2389a = bRam0000000100d231ea ^ 1;
    bRam0000000100d2389b = bRam0000000100d231eb ^ 0x31;
    uRam0000000100d23709 =
         CONCAT17((byte)((ulong)uRam0000000100d23059 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d870 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23059 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d870 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23059 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d870 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23059 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d870 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23059 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d870 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23059 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d870 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23059 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d870 >> 8),
                                                  (byte)uRam0000000100d23059 ^ (byte)_UNK_10097d870)
                                                  ))))));
    uRam0000000100d23711 =
         CONCAT17((byte)((ulong)uRam0000000100d23061 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d878 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23061 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d878 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23061 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d878 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23061 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d878 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23061 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d878 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23061 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d878 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23061 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d878 >> 8),
                                                  (byte)uRam0000000100d23061 ^ (byte)_UNK_10097d878)
                                                  ))))));
    bRam0000000100d2389c = bRam0000000100d231ec ^ 0xd4;
    bRam0000000100d2389d = bRam0000000100d231ed ^ 0x17;
    bRam0000000100d2389e = bRam0000000100d231ee ^ 0xb8;
    cRam0000000100d2389f = bRam0000000100d231ef + (bRam0000000100d231ef & 0x14) * -2 + -0x6c;
    bRam0000000100d238a0 = bRam0000000100d231f0 ^ 0x90;
    cRam0000000100d238a1 = bRam0000000100d231f1 + (bRam0000000100d231f1 & 0x28) * -2 + -0x58;
    bRam0000000100d238a2 = bRam0000000100d231f2 ^ 0x8e;
    bRam0000000100d238a3 = bRam0000000100d231f3 ^ 0xd0;
    bRam0000000100d238a4 = bRam0000000100d231f4 ^ 0x15;
    bRam0000000100d238a5 = bRam0000000100d231f5 ^ 0x8d;
    bRam0000000100d238a6 = bRam0000000100d231f6 ^ 0x86;
    bRam0000000100d238a7 = bRam0000000100d231f7 ^ 0x62;
    bRam0000000100d238a8 = bRam0000000100d231f8 ^ 0x58;
    bRam0000000100d238a9 = ~((bRam0000000100d231f9 | 0xd7) & (bRam0000000100d231f9 ^ 0xff | 0x28));
    bRam0000000100d238aa = bRam0000000100d231fa ^ 0x2f;
    cRam0000000100d238ab = bRam0000000100d231fb + (bRam0000000100d231fb & 0x35) * -2 + -0x4b;
    cRam0000000100d238ac = bRam0000000100d231fc + (bRam0000000100d231fc & 0x51) * -2 + 'Q';
    bRam0000000100d238ad = bRam0000000100d231fd ^ 0xe7;
    bRam0000000100d238ae = bRam0000000100d231fe ^ 0x7f;
    bRam0000000100d238af = bRam0000000100d231ff ^ 0xac;
    bRam0000000100d238b0 = bRam0000000100d23200 ^ 0xda;
    bRam0000000100d238b1 = bRam0000000100d23201 ^ 0x44;
    bRam0000000100d238b2 = bRam0000000100d23202 ^ 0x6e;
    bRam0000000100d238b3 = bRam0000000100d23203 ^ 0xcf;
    cRam0000000100d238b4 = bRam0000000100d23204 + (bRam0000000100d23204 & 0x54) * -2 + 'T';
    uRam0000000100d238b5 =
         CONCAT17((byte)((ulong)uRam0000000100d23205 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23205 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23205 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23205 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23205 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23205 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23205 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5e8 >> 8),
                                                  (byte)uRam0000000100d23205 ^ (byte)_UNK_10097d5e8)
                                                  ))))));
    bRam0000000100d238bd = bRam0000000100d2320d ^ 0x10;
    bRam0000000100d238be = bRam0000000100d2320e ^ 0x8b;
    bRam0000000100d238bf = bRam0000000100d2320f ^ 0xb0;
    cRam0000000100d238c0 = bRam0000000100d23210 + (bRam0000000100d23210 & 0x55) * -2 + -0x2b;
    bRam0000000100d238c1 = bRam0000000100d23211 ^ 0x4e;
    bRam0000000100d238c2 = bRam0000000100d23212 ^ 0x44;
    bRam0000000100d238c3 = bRam0000000100d23213 ^ 0x81;
    bRam0000000100d238c4 = bRam0000000100d23214 ^ 0x2d;
    bRam0000000100d238c5 = bRam0000000100d23215 ^ 0x4b;
    bRam0000000100d238c6 = ~((bRam0000000100d23216 | 0x32) & (bRam0000000100d23216 ^ 0xff | 0xcd));
    cRam0000000100d238c7 = bRam0000000100d23217 + (bRam0000000100d23217 & 0x7a) * -2 + -6;
    bRam0000000100d238c8 = bRam0000000100d23218 ^ 0xed;
    bRam0000000100d238c9 = bRam0000000100d23219 ^ 0x37;
    bRam0000000100d238ca = bRam0000000100d2321a ^ 0x18;
    bRam0000000100d238cb = bRam0000000100d2321b ^ 0xfc;
    bRam0000000100d238cc = bRam0000000100d2321c ^ 0xbe;
    cRam0000000100d238cd = bRam0000000100d2321d + (bRam0000000100d2321d & 0xc1) * -2 + 'A';
    bRam0000000100d238ce = bRam0000000100d2321e ^ 0x24;
    bRam0000000100d238cf = bRam0000000100d2321f ^ 0x4b;
    bRam0000000100d238d0 = bRam0000000100d23220 ^ 0x79;
    cRam0000000100d238d1 = bRam0000000100d23221 + (bRam0000000100d23221 & 0x48) * -2 + 'H';
    cRam0000000100d238d2 = bRam0000000100d23222 + (bRam0000000100d23222 & 0x59) * -2 + 'Y';
    cRam0000000100d238d3 = bRam0000000100d23223 + (bRam0000000100d23223 & 0x1b) * -2 + -0x65;
    bRam0000000100d238d4 = bRam0000000100d23224 ^ 0xfb;
    bRam0000000100d238d5 = bRam0000000100d23225 ^ 0x1e;
    bRam0000000100d238d6 = bRam0000000100d23226 ^ 0x4e;
    cRam0000000100d238d7 = bRam0000000100d23227 + (bRam0000000100d23227 & 0x3e) * -2 + -0x42;
    bRam0000000100d238d8 = bRam0000000100d23228 ^ 0xa9;
    bRam0000000100d238d9 = bRam0000000100d23229 ^ 0x8f;
    bRam0000000100d238da = bRam0000000100d2322a ^ 0xe;
    bRam0000000100d238db = bRam0000000100d2322b ^ 0x5b;
    bRam0000000100d238dc = bRam0000000100d2322c ^ 0x13;
    bRam0000000100d238dd = bRam0000000100d2322d ^ 0xea;
    cRam0000000100d238de = bRam0000000100d2322e + (bRam0000000100d2322e & 0x5c) * -2 + '\\';
    uRam0000000100d238df =
         CONCAT17((byte)((ulong)uRam0000000100d2322f >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2322f >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2322f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2322f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2322f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2322f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2322f >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9e0 >> 8),
                                                  (byte)uRam0000000100d2322f ^ (byte)_UNK_10097d9e0)
                                                  ))))));
    uRam0000000100d238e7 =
         CONCAT17((byte)((ulong)uRam0000000100d23237 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23237 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23237 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23237 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23237 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23237 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23237 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9e8 >> 8),
                                                  (byte)uRam0000000100d23237 ^ (byte)_UNK_10097d9e8)
                                                  ))))));
    bRam0000000100d238ef = bRam0000000100d2323f ^ 0x2b;
    bRam0000000100d238f0 = bRam0000000100d23240 ^ 0xa4;
    bRam0000000100d238f1 = bRam0000000100d23241 ^ 0x4f;
    cRam0000000100d238f2 = bRam0000000100d23242 + (bRam0000000100d23242 & 0x2f) * -2 + -0x51;
    cRam0000000100d238f3 = bRam0000000100d23243 + (bRam0000000100d23243 & 0xd) * -2 + -0x73;
    bRam0000000100d238f4 = bRam0000000100d23244 ^ 0xdf;
    bRam0000000100d238f5 = bRam0000000100d23245 ^ 0x67;
    bRam0000000100d238f6 = bRam0000000100d23246 ^ 0xa5;
    bRam0000000100d238f7 = bRam0000000100d23247 ^ 0xdf;
    bRam0000000100d238f8 = bRam0000000100d23248 ^ 0x10;
    bRam0000000100d238f9 = bRam0000000100d23249 ^ 0xa6;
    bRam0000000100d238fa = ~((bRam0000000100d2324a | 0x68) & (bRam0000000100d2324a ^ 0xff | 0x97));
    cRam0000000100d238fb = bRam0000000100d2324b + (bRam0000000100d2324b & 0xaa) * -2 + -0x56;
    bRam0000000100d238fc = bRam0000000100d2324c ^ 0xd5;
    bRam0000000100d238fd = bRam0000000100d2324d ^ 0x30;
    bRam0000000100d238fe = bRam0000000100d2324e ^ 0xe9;
    bRam0000000100d238ff = bRam0000000100d2324f ^ 0xd3;
    cRam0000000100d23900 = bRam0000000100d23250 + (bRam0000000100d23250 & 0xcf) * -2 + -0x31;
    uRam0000000100d23901 =
         CONCAT17((byte)((ulong)uRam0000000100d23251 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23251 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23251 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23251 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23251 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23251 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23251 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5f0 >> 8),
                                                  (byte)uRam0000000100d23251 ^ (byte)_UNK_10097d5f0)
                                                  ))))));
    bRam0000000100d23909 = bRam0000000100d23259 ^ 0xd;
    bRam0000000100d2390a = bRam0000000100d2325a ^ 0xc;
    bRam0000000100d2390b = bRam0000000100d2325b ^ 0x34;
    bRam0000000100d2390c = ~((bRam0000000100d2325c | 0x45) & (bRam0000000100d2325c ^ 0xff | 0xba));
    bRam0000000100d2390d = ~((bRam0000000100d2325d | 0x80) & (~bRam0000000100d2325d | 0x7f));
    bRam0000000100d2390e = bRam0000000100d2325e ^ 2;
    bRam0000000100d2390f = bRam0000000100d2325f ^ 0x60;
    bRam0000000100d23910 = bRam0000000100d23260 ^ 0xdd;
    bRam0000000100d23911 = bRam0000000100d23261 ^ 0x94;
    cRam0000000100d23912 = bRam0000000100d23262 + (bRam0000000100d23262 & 0x54) * -2 + 'T';
    bRam0000000100d23913 = bRam0000000100d23263 ^ 0x77;
    cRam0000000100d23914 = bRam0000000100d23264 + (bRam0000000100d23264 & 0x20) * -2 + ' ';
    bRam0000000100d23915 = bRam0000000100d23265 ^ 0xb6;
    bRam0000000100d23916 = bRam0000000100d23266 ^ 0x35;
    bRam0000000100d23917 = bRam0000000100d23267 ^ 0xc6;
    bRam0000000100d23918 = bRam0000000100d23268 ^ 0xe1;
    cRam0000000100d23919 = bRam0000000100d23269 + (bRam0000000100d23269 & 0x15) * -2 + -0x6b;
    bRam0000000100d2391a = bRam0000000100d2326a ^ 0x12;
    bRam0000000100d2391b = bRam0000000100d2326b ^ 0x74;
    bRam0000000100d2391c = bRam0000000100d2326c ^ 0x60;
    bRam0000000100d2391d = bRam0000000100d2326d ^ 0x5c;
    bRam0000000100d2391e = bRam0000000100d2326e ^ 8;
    bRam0000000100d2391f = bRam0000000100d2326f ^ 0x68;
    cRam0000000100d23920 = bRam0000000100d23270 + (bRam0000000100d23270 & 0x46) * -2 + 'F';
    bRam0000000100d23921 = bRam0000000100d23271 ^ 0xdb;
    bRam0000000100d23922 = bRam0000000100d23272 ^ 0xce;
    bRam0000000100d23923 = bRam0000000100d23273 ^ 0x1c;
    bRam0000000100d23924 = bRam0000000100d23274 ^ 0xe3;
    bRam0000000100d23925 = bRam0000000100d23275 ^ 0x2b;
    bRam0000000100d23926 = bRam0000000100d23276 ^ 0x1e;
    cRam0000000100d23927 = bRam0000000100d23277 + (bRam0000000100d23277 & 0xf1) * -2 + 'q';
    uRam0000000100d23928 = uRam0000000100d23278;
    uRam0000000100d23929 =
         CONCAT17((byte)((ulong)uRam0000000100d23279 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23279 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23279 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23279 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23279 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23279 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23279 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5f8 >> 8),
                                                  (byte)uRam0000000100d23279 ^ (byte)_UNK_10097d5f8)
                                                  ))))));
    bRam0000000100d23931 = bRam0000000100d23281 ^ 0xb;
    uRam0000000100d237ec =
         CONCAT17((byte)((ulong)uRam0000000100d2313c >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2313c >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2313c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2313c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2313c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2313c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2313c >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5a8 >> 8),
                                                  (byte)uRam0000000100d2313c ^ (byte)_UNK_10097d5a8)
                                                  ))))));
    bRam0000000100d23932 = bRam0000000100d23282 ^ 0x65;
    bRam0000000100d23933 = bRam0000000100d23283 ^ 0x5e;
    bRam0000000100d23934 = bRam0000000100d23284 ^ 9;
    bRam0000000100d23935 = bRam0000000100d23285 ^ 0xab;
    bRam0000000100d23936 = bRam0000000100d23286 ^ 0x15;
    bRam0000000100d23937 = bRam0000000100d23287 ^ 0xc3;
    cRam0000000100d23938 = bRam0000000100d23288 + (bRam0000000100d23288 & 0x33) * -2 + '3';
    uRam0000000100d23939 =
         CONCAT17((byte)((ulong)uRam0000000100d23289 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d600 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23289 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d600 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23289 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d600 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23289 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d600 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23289 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d600 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23289 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d600 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23289 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d600 >> 8),
                                                  (byte)uRam0000000100d23289 ^ (byte)_UNK_10097d600)
                                                  ))))));
    bRam0000000100d23941 = bRam0000000100d23291 ^ 0x94;
    cRam0000000100d23942 = bRam0000000100d23292 + (bRam0000000100d23292 & 0x18) * -2 + '\x18';
    cRam0000000100d23943 = bRam0000000100d23293 + (bRam0000000100d23293 & 0x1e) * -2 + -0x62;
    bRam0000000100d23944 = bRam0000000100d23294 ^ 0x3b;
    bRam0000000100d23945 = bRam0000000100d23295 ^ 0x9d;
    cRam0000000100d23946 = bRam0000000100d23296 + (bRam0000000100d23296 & 0x1c) * -2 + -100;
    uRam0000000100d23947 =
         CONCAT17((byte)((ulong)uRam0000000100d23297 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d608 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23297 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d608 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23297 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d608 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23297 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d608 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23297 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d608 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23297 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d608 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23297 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d608 >> 8),
                                                  (byte)uRam0000000100d23297 ^ (byte)_UNK_10097d608)
                                                  ))))));
    bRam0000000100d2394f = bRam0000000100d2329f ^ 0x45;
    bRam0000000100d23950 = bRam0000000100d232a0 ^ 0x35;
    cRam0000000100d23951 = bRam0000000100d232a1 + (bRam0000000100d232a1 & 0x76) * -2 + 'v';
    bRam0000000100d23952 = bRam0000000100d232a2 ^ 0x24;
    cRam0000000100d23953 = bRam0000000100d232a3 + (bRam0000000100d232a3 & 0x52) * -2 + -0x2e;
    bRam0000000100d23954 = bRam0000000100d232a4 ^ 0xf5;
    bRam0000000100d23955 = bRam0000000100d232a5 ^ 0x4a;
    bRam0000000100d23956 = bRam0000000100d232a6 ^ 0x60;
    bRam0000000100d23957 = bRam0000000100d232a7 ^ 0x80;
    bRam0000000100d23958 = bRam0000000100d232a8 ^ 0x5c;
    cRam0000000100d23959 = bRam0000000100d232a9 + (bRam0000000100d232a9 & 0x39) * -2 + '9';
    bRam0000000100d2395a = bRam0000000100d232aa ^ 0xfb;
    bRam0000000100d2395b = bRam0000000100d232ab ^ 0x74;
    bRam0000000100d2395c = bRam0000000100d232ac ^ 0x46;
    bRam0000000100d2395d = bRam0000000100d232ad ^ 0x7b;
    bRam0000000100d2395e = bRam0000000100d232ae ^ 0xe7;
    uRam0000000100d237c4 =
         CONCAT17((byte)((ulong)uRam0000000100d23114 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d5a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23114 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d5a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23114 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d5a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23114 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d5a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23114 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d5a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23114 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d5a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23114 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d5a0 >> 8),
                                                  (byte)uRam0000000100d23114 ^ (byte)_UNK_10097d5a0)
                                                  ))))));
    bRam0000000100d2395f = bRam0000000100d232af ^ 0x9e;
    cRam0000000100d23960 = bRam0000000100d232b0 + (bRam0000000100d232b0 & 0xc3) * -2 + 'C';
    bRam0000000100d23961 = bRam0000000100d232b1 ^ 0x29;
    bRam0000000100d23962 = bRam0000000100d232b2 ^ 0xb7;
    bRam0000000100d23963 = bRam0000000100d232b3 ^ 0x2a;
    bRam0000000100d23964 = bRam0000000100d232b4 ^ 0xce;
    cRam0000000100d23965 = bRam0000000100d232b5 + (bRam0000000100d232b5 & 0x5a) * -2 + -0x26;
    bRam0000000100d23966 = bRam0000000100d232b6 ^ 0x89;
    cRam0000000100d23967 = bRam0000000100d232b7 + (bRam0000000100d232b7 & 0x3a) * -2 + -0x46;
    uRam0000000100d237b5 =
         CONCAT17((byte)((ulong)uRam0000000100d23105 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d598 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23105 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d598 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23105 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d598 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23105 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d598 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23105 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d598 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23105 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d598 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23105 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d598 >> 8),
                                                  (byte)uRam0000000100d23105 ^ (byte)_UNK_10097d598)
                                                  ))))));
    bRam0000000100d23970 = bRam0000000100d232c0 ^ 0xed;
    bRam0000000100d23971 = ~((bRam0000000100d232c1 | 0x61) & (bRam0000000100d232c1 ^ 0xff | 0x9e));
    bRam0000000100d23972 = bRam0000000100d232c2 ^ 0x44;
    bRam0000000100d23973 = bRam0000000100d232c3 ^ 0x49;
    cRam0000000100d23974 = bRam0000000100d232c4 + (bRam0000000100d232c4 & 0x16) * -2 + -0x6a;
    uRam0000000100d237a7 =
         CONCAT17((byte)((ulong)uRam0000000100d230f7 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d590 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d230f7 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d590 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d230f7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d590 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d230f7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d590 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d230f7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d590 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d230f7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d590 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d230f7 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d590 >> 8),
                                                  (byte)uRam0000000100d230f7 ^ (byte)_UNK_10097d590)
                                                  ))))));
    bRam0000000100d23975 = bRam0000000100d232c5 ^ 0xd9;
    cRam0000000100d23976 = bRam0000000100d232c6 + (bRam0000000100d232c6 & 0xdf) * -2 + -0x21;
    bRam0000000100d23977 = bRam0000000100d232c7 ^ 0xf6;
    bRam0000000100d23978 = bRam0000000100d232c8 ^ 0xe8;
    cRam0000000100d23979 = bRam0000000100d232c9 + (bRam0000000100d232c9 & 0x3e) * -2 + '>';
    bRam0000000100d2397a = bRam0000000100d232ca ^ 0xae;
    cRam0000000100d2397b = bRam0000000100d232cb + (bRam0000000100d232cb & 0x7e) * -2 + '~';
    bRam0000000100d2397c = bRam0000000100d232cc ^ 0x92;
    bRam0000000100d2397d = bRam0000000100d232cd ^ 0x6b;
    cRam0000000100d2397e = bRam0000000100d232ce + (bRam0000000100d232ce & 0x42) * -2 + 'B';
    bRam0000000100d2397f = bRam0000000100d232cf ^ 0x3e;
    bRam0000000100d23980 = bRam0000000100d232d0 ^ 0x14;
    bRam0000000100d23981 = bRam0000000100d232d1 ^ 0x3e;
    cRam0000000100d23982 = bRam0000000100d232d2 + (bRam0000000100d232d2 & 0x5c) * -2 + -0x24;
    cRam0000000100d23983 = bRam0000000100d232d3 + (bRam0000000100d232d3 & 0x66) * -2 + -0x1a;
    uRam0000000100d2378f =
         CONCAT17((byte)((ulong)uRam0000000100d230df >> 0x38) ^
                  (byte)((ulong)_UNK_10097d588 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d230df >> 0x30) ^
                           (byte)((ulong)_UNK_10097d588 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d230df >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d588 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d230df >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d588 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d230df >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d588 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d230df >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d588 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d230df >> 8) ^
                                                  (byte)((ulong)_UNK_10097d588 >> 8),
                                                  (byte)uRam0000000100d230df ^ (byte)_UNK_10097d588)
                                                  ))))));
    bRam0000000100d23984 = bRam0000000100d232d4 ^ 0x8c;
    bRam0000000100d23985 = bRam0000000100d232d5 ^ 0x7b;
    cRam0000000100d23986 = bRam0000000100d232d6 + (bRam0000000100d232d6 & 0x18) * -2 + -0x68;
    bRam0000000100d23987 = bRam0000000100d232d7 ^ 0x53;
    bRam0000000100d23988 = bRam0000000100d232d8 ^ 0x6d;
    cRam0000000100d23989 = bRam0000000100d232d9 + (bRam0000000100d232d9 & 0x2d) * -2 + '-';
    bRam0000000100d2398a = bRam0000000100d232da ^ 0xc1;
    cRam0000000100d2398b = bRam0000000100d232db + (bRam0000000100d232db & 0x99) * -2 + '\x19';
    bRam0000000100d2398c = bRam0000000100d232dc ^ 0xb2;
    cRam0000000100d2398d = bRam0000000100d232dd + (bRam0000000100d232dd & 1) * -2 + -0x7f;
    bRam0000000100d2398e = bRam0000000100d232de ^ 0x1a;
    bRam0000000100d2398f = bRam0000000100d232df ^ 0xd8;
    bRam0000000100d23990 = bRam0000000100d232e0 ^ 0x7e;
    cRam0000000100d23991 = bRam0000000100d232e1 + (bRam0000000100d232e1 & 0x14) * -2 + '\x14';
    bRam0000000100d23992 = bRam0000000100d232e2 ^ 0x1a;
    uRam0000000100d2377c =
         CONCAT17((byte)((ulong)uRam0000000100d230cc >> 0x38) ^
                  (byte)((ulong)_UNK_10097d580 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d230cc >> 0x30) ^
                           (byte)((ulong)_UNK_10097d580 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d230cc >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d580 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d230cc >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d580 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d230cc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d580 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d230cc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d580 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d230cc >> 8) ^
                                                  (byte)((ulong)_UNK_10097d580 >> 8),
                                                  (byte)uRam0000000100d230cc ^ (byte)_UNK_10097d580)
                                                  ))))));
    bRam0000000100d23993 = bRam0000000100d232e3 ^ 0x5d;
    cRam0000000100d23994 = bRam0000000100d232e4 + (bRam0000000100d232e4 & 0x54) * -2 + 'T';
    uRam0000000100d23995 =
         CONCAT17((byte)((ulong)uRam0000000100d232e5 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d618 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d232e5 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d618 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d232e5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d618 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d232e5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d618 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d232e5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d618 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d232e5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d618 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d232e5 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d618 >> 8),
                                                  (byte)uRam0000000100d232e5 ^ (byte)_UNK_10097d618)
                                                  ))))));
    bRam0000000100d2399d = bRam0000000100d232ed ^ 0xb5;
    bRam0000000100d2399e = bRam0000000100d232ee ^ 0x2f;
    bRam0000000100d2399f = ~((bRam0000000100d232ef | 0xd5) & (bRam0000000100d232ef ^ 0xff | 0x2a));
    bRam0000000100d239a0 = bRam0000000100d232f0 ^ 0x2d;
    bRam0000000100d239a1 = bRam0000000100d232f1 ^ 0xa8;
    bRam0000000100d239a2 = bRam0000000100d232f2 ^ 0xa5;
    cRam0000000100d239a3 = bRam0000000100d232f3 + (bRam0000000100d232f3 & 0x37) * -2 + -0x49;
    bRam0000000100d239a4 = bRam0000000100d232f4 ^ 0xe4;
    cRam0000000100d239a5 = bRam0000000100d232f5 + (bRam0000000100d232f5 & 0x2e) * -2 + -0x52;
    uRam0000000100d23769 =
         CONCAT17((byte)((ulong)uRam0000000100d230b9 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d578 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d230b9 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d578 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d230b9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d578 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d230b9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d578 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d230b9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d578 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d230b9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d578 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d230b9 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d578 >> 8),
                                                  (byte)uRam0000000100d230b9 ^ (byte)_UNK_10097d578)
                                                  ))))));
    bRam0000000100d239a6 = bRam0000000100d232f6 ^ 0xd3;
    bRam0000000100d239a7 = bRam0000000100d232f7 ^ 0x37;
    bRam0000000100d239a8 = bRam0000000100d232f8 ^ 0xa4;
    bRam0000000100d239a9 = ~((bRam0000000100d232f9 | 0x7a) & (bRam0000000100d232f9 ^ 0xff | 0x85));
    bRam0000000100d239aa = bRam0000000100d232fa ^ 0x5e;
    cRam0000000100d239ab = bRam0000000100d232fb + (bRam0000000100d232fb & 0x34) * -2 + -0x4c;
    bRam0000000100d239ac = bRam0000000100d232fc ^ 10;
    uRam0000000100d2375a =
         CONCAT17((byte)((ulong)uRam0000000100d230aa >> 0x38) ^
                  (byte)((ulong)_UNK_10097d570 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d230aa >> 0x30) ^
                           (byte)((ulong)_UNK_10097d570 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d230aa >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d570 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d230aa >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d570 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d230aa >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d570 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d230aa >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d570 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d230aa >> 8) ^
                                                  (byte)((ulong)_UNK_10097d570 >> 8),
                                                  (byte)uRam0000000100d230aa ^ (byte)_UNK_10097d570)
                                                  ))))));
    bRam0000000100d239ad = bRam0000000100d232fd ^ 0xc2;
    bRam0000000100d239ae = bRam0000000100d232fe ^ 0x7b;
    bRam0000000100d239af = bRam0000000100d232ff ^ 0xd6;
    bRam0000000100d239b0 = bRam0000000100d23300 ^ 0x40;
    bRam0000000100d239b1 = bRam0000000100d23301 ^ 0x9a;
    bRam0000000100d239b2 = ~((bRam0000000100d23302 | 0x27) & (bRam0000000100d23302 ^ 0xff | 0xd8));
    cRam0000000100d239b3 = bRam0000000100d23303 + (bRam0000000100d23303 & 100) * -2 + 'd';
    cRam0000000100d239b4 = bRam0000000100d23304 + (bRam0000000100d23304 & 0x76) * -2 + -10;
    bRam0000000100d239b5 = bRam0000000100d23305 ^ 0x9f;
    bRam0000000100d239b6 = bRam0000000100d23306 ^ 0xda;
    cRam0000000100d239b7 = bRam0000000100d23307 + (bRam0000000100d23307 & 0x15) * -2 + -0x6b;
    cRam0000000100d239b8 = bRam0000000100d23308 + (bRam0000000100d23308 & 0x5c) * -2 + '\\';
    uRam0000000100d23747 =
         CONCAT17((byte)((ulong)uRam0000000100d23097 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d568 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23097 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d568 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23097 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d568 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23097 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d568 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23097 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d568 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23097 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d568 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23097 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d568 >> 8),
                                                  (byte)uRam0000000100d23097 ^ (byte)_UNK_10097d568)
                                                  ))))));
    cRam0000000100d239b9 = bRam0000000100d23309 + (bRam0000000100d23309 & 5) * -2 + '\x05';
    uRam0000000100d239ba =
         CONCAT17((byte)((ulong)uRam0000000100d2330a >> 0x38) ^
                  (byte)((ulong)_UNK_10097d620 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2330a >> 0x30) ^
                           (byte)((ulong)_UNK_10097d620 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2330a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d620 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2330a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d620 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2330a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d620 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2330a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d620 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2330a >> 8) ^
                                                  (byte)((ulong)_UNK_10097d620 >> 8),
                                                  (byte)uRam0000000100d2330a ^ (byte)_UNK_10097d620)
                                                  ))))));
    bRam0000000100d239c2 = bRam0000000100d23312 ^ 0xf9;
    cRam0000000100d239c3 = bRam0000000100d23313 + (bRam0000000100d23313 & 0x75) * -2 + 'u';
    bRam0000000100d239c4 = bRam0000000100d23314 ^ 0xab;
    cRam0000000100d239c5 = bRam0000000100d23315 + (bRam0000000100d23315 & 0x1a) * -2 + '\x1a';
    cRam0000000100d239c6 = bRam0000000100d23316 + (bRam0000000100d23316 & 0x42) * -2 + -0x3e;
    uRam0000000100d23738 =
         CONCAT17((byte)((ulong)uRam0000000100d23088 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d560 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23088 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d560 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23088 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d560 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23088 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d560 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23088 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d560 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23088 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d560 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23088 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d560 >> 8),
                                                  (byte)uRam0000000100d23088 ^ (byte)_UNK_10097d560)
                                                  ))))));
    uRam0000000100d239c7 =
         CONCAT17((byte)((ulong)uRam0000000100d23317 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d628 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23317 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d628 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23317 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d628 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23317 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d628 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23317 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d628 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23317 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d628 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23317 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d628 >> 8),
                                                  (byte)uRam0000000100d23317 ^ (byte)_UNK_10097d628)
                                                  ))))));
    bRam0000000100d239cf = bRam0000000100d2331f ^ 0x4d;
    bRam0000000100d239d0 = bRam0000000100d23320 ^ 0xaf;
    bRam0000000100d239d1 = bRam0000000100d23321 ^ 0xb8;
    bRam0000000100d239d2 = bRam0000000100d23322 ^ 0x7d;
    bRam0000000100d239d3 = ~((bRam0000000100d23323 | 0x9a) & (bRam0000000100d23323 ^ 0xff | 0x65));
    uRam0000000100d239d4 =
         CONCAT17((byte)((ulong)uRam0000000100d23324 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23324 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23324 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23324 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23324 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23324 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23324 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9f0 >> 8),
                                                  (byte)uRam0000000100d23324 ^ (byte)_UNK_10097d9f0)
                                                  ))))));
    uRam0000000100d239dc =
         CONCAT17((byte)((ulong)uRam0000000100d2332c >> 0x38) ^
                  (byte)((ulong)_UNK_10097d9f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2332c >> 0x30) ^
                           (byte)((ulong)_UNK_10097d9f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2332c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d9f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2332c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d9f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2332c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d9f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2332c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d9f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2332c >> 8) ^
                                                  (byte)((ulong)_UNK_10097d9f8 >> 8),
                                                  (byte)uRam0000000100d2332c ^ (byte)_UNK_10097d9f8)
                                                  ))))));
    bRam0000000100d239e4 = bRam0000000100d23334 ^ 0xea;
    bRam0000000100d239e5 = ~((bRam0000000100d23335 | 0xb1) & (bRam0000000100d23335 ^ 0xff | 0x4e));
    bRam0000000100d239e6 = bRam0000000100d23336 ^ 0xd2;
    bRam0000000100d239e7 = bRam0000000100d23337 ^ 0xb;
    bRam0000000100d239e8 = bRam0000000100d23338 ^ 0xab;
    bRam0000000100d239e9 = bRam0000000100d23339 ^ 0xce;
    bRam0000000100d239ea = bRam0000000100d2333a ^ 0x8f;
    cRam0000000100d239eb = bRam0000000100d2333b + (bRam0000000100d2333b & 0xfd) * -2 + -3;
    uRam0000000100d239ec =
         CONCAT17((byte)((ulong)uRam0000000100d2333c >> 0x38) ^
                  (byte)((ulong)_UNK_10097da00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2333c >> 0x30) ^
                           (byte)((ulong)_UNK_10097da00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2333c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2333c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2333c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2333c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2333c >> 8) ^
                                                  (byte)((ulong)_UNK_10097da00 >> 8),
                                                  (byte)uRam0000000100d2333c ^ (byte)_UNK_10097da00)
                                                  ))))));
    uRam0000000100d239f4 =
         CONCAT17((byte)((ulong)uRam0000000100d23344 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23344 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23344 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23344 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23344 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23344 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23344 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da08 >> 8),
                                                  (byte)uRam0000000100d23344 ^ (byte)_UNK_10097da08)
                                                  ))))));
    bRam0000000100d239fc = bRam0000000100d2334c ^ 0x41;
    bRam0000000100d239fd = bRam0000000100d2334d ^ 0x16;
    bRam0000000100d239fe = bRam0000000100d2334e ^ 0x27;
    bRam0000000100d239ff = bRam0000000100d2334f ^ 0x36;
    bRam0000000100d23a00 = bRam0000000100d23350 ^ 0xb3;
    bRam0000000100d23a01 = bRam0000000100d23351 ^ 0xf6;
    bRam0000000100d23a02 = bRam0000000100d23352 ^ 0x44;
    cRam0000000100d23a03 = bRam0000000100d23353 + (bRam0000000100d23353 & 0x14) * -2 + -0x6c;
    bRam0000000100d23a04 = bRam0000000100d23354 ^ 0x3c;
    cRam0000000100d23a05 = bRam0000000100d23355 + (bRam0000000100d23355 & 6) * -2 + '\x06';
    bRam0000000100d23a06 = bRam0000000100d23356 ^ 0x45;
    bRam0000000100d23a07 = bRam0000000100d23357 ^ 0xa3;
    bRam0000000100d23a08 = bRam0000000100d23358 ^ 0x5c;
    bRam0000000100d23a09 = bRam0000000100d23359 ^ 0x96;
    bRam0000000100d23a0a = ~((bRam0000000100d2335a | 0x56) & (bRam0000000100d2335a ^ 0xff | 0xa9));
    bRam0000000100d23a0b = bRam0000000100d2335b ^ 0x9b;
    bRam0000000100d23a0c = bRam0000000100d2335c ^ 0x3a;
    bRam0000000100d23a0d = bRam0000000100d2335d ^ 0x7c;
    bRam0000000100d23a0e = bRam0000000100d2335e ^ 0x47;
    bRam0000000100d23a0f = bRam0000000100d2335f ^ 0xf8;
    bRam0000000100d23a10 = bRam0000000100d23360 ^ 0x34;
    bRam0000000100d23a11 = bRam0000000100d23361 ^ 0x1c;
    cRam0000000100d23a12 = bRam0000000100d23362 + (bRam0000000100d23362 & 0x6a) * -2 + 'j';
    bRam0000000100d23a13 = bRam0000000100d23363 ^ 0xc9;
    bRam0000000100d23a14 = bRam0000000100d23364 ^ 10;
    cRam0000000100d23a15 = bRam0000000100d23365 + (bRam0000000100d23365 & 0x2e) * -2 + -0x52;
    bRam0000000100d23a16 = bRam0000000100d23366 ^ 0x38;
    bRam0000000100d23a17 = bRam0000000100d23367 ^ 0x1d;
    uRam0000000100d23a18 = uRam0000000100d23368;
    bRam0000000100d23a19 = bRam0000000100d23369 ^ 0x8b;
    bRam0000000100d23a1a = bRam0000000100d2336a ^ 0x7d;
    bRam0000000100d23a1b = bRam0000000100d2336b ^ 0x7b;
    cRam0000000100d23a1c = bRam0000000100d2336c + (bRam0000000100d2336c & 0x6b) * -2 + 'k';
    bRam0000000100d23a1d = bRam0000000100d2336d ^ 0xd6;
    cRam0000000100d23a1e = bRam0000000100d2336e + (bRam0000000100d2336e & 0xf1) * -2 + -0xf;
    bRam0000000100d23a1f = bRam0000000100d2336f ^ 0xda;
    bRam0000000100d23a20 = bRam0000000100d23370 ^ 0x84;
    bRam0000000100d23a21 = bRam0000000100d23371 ^ 0xde;
    bRam0000000100d23a22 = bRam0000000100d23372 ^ 0x79;
    bRam0000000100d23a23 = bRam0000000100d23373 ^ 0x9f;
    bRam0000000100d23a24 = bRam0000000100d23374 ^ 0x1e;
    cRam0000000100d23a25 = bRam0000000100d23375 + (bRam0000000100d23375 & 4) * -2 + '\x04';
    bRam0000000100d23a26 = bRam0000000100d23376 ^ 0x8b;
    bRam0000000100d23a27 = bRam0000000100d23377 ^ 0xcc;
    bRam0000000100d23a28 = bRam0000000100d23378 ^ 0x88;
    bRam0000000100d23a29 = bRam0000000100d23379 ^ 0xeb;
    bRam0000000100d23a2a = bRam0000000100d2337a ^ 0xf9;
    cRam0000000100d23a2b = bRam0000000100d2337b + (bRam0000000100d2337b & 0x5c) * -2 + '\\';
    cRam0000000100d23a2c = bRam0000000100d2337c + (bRam0000000100d2337c & 0x44) * -2 + 'D';
    cRam0000000100d23a2d = bRam0000000100d2337d + (bRam0000000100d2337d & 0x1e) * -2 + '\x1e';
    bRam0000000100d23a2e = ~((bRam0000000100d2337e | 0xaa) & (~bRam0000000100d2337e | 0x55));
    bRam0000000100d23a2f = bRam0000000100d2337f ^ 6;
    bRam0000000100d23a30 = ~((bRam0000000100d23380 | 0x99) & (~bRam0000000100d23380 | 0x66));
    bRam0000000100d23a31 = bRam0000000100d23381 ^ 0x61;
    bRam0000000100d23a32 = bRam0000000100d23382 ^ 0xd5;
    bRam0000000100d23a33 = bRam0000000100d23383 ^ 0xa7;
    bRam0000000100d23a34 = bRam0000000100d23384 ^ 0xc1;
    bRam0000000100d23a35 = bRam0000000100d23385 ^ 0x48;
    bRam0000000100d23a36 = bRam0000000100d23386 ^ 0x46;
    cRam0000000100d23a37 = bRam0000000100d23387 + (bRam0000000100d23387 & 0x5b) * -2 + -0x25;
    bRam0000000100d23a40 = bRam0000000100d23390 ^ 0x12;
    bRam0000000100d23a41 = bRam0000000100d23391 ^ 0x30;
    cRam0000000100d23a42 = bRam0000000100d23392 + (bRam0000000100d23392 & 0x50) * -2 + -0x30;
    bRam0000000100d23a43 = bRam0000000100d23393 ^ 0x92;
    bRam0000000100d23a44 = bRam0000000100d23394 ^ 0x9c;
    bRam0000000100d23a45 = bRam0000000100d23395 ^ 0xb6;
    bRam0000000100d23a46 = bRam0000000100d23396 ^ 0x49;
    bRam0000000100d23a47 = bRam0000000100d23397 ^ 0x7b;
    cRam0000000100d23a48 = bRam0000000100d23398 + (bRam0000000100d23398 & 0x34) * -2 + -0x4c;
    bRam0000000100d23a49 = bRam0000000100d23399 ^ 0x17;
    bRam0000000100d23a4a = bRam0000000100d2339a ^ 0xd5;
    bRam0000000100d23a4b = bRam0000000100d2339b ^ 0x6e;
    bRam0000000100d23a4c = bRam0000000100d2339c ^ 0xa5;
    bRam0000000100d23a4d = bRam0000000100d2339d ^ 0x3a;
    bRam0000000100d23a4e = bRam0000000100d2339e ^ 0x7a;
    cRam0000000100d23a4f = bRam0000000100d2339f + (bRam0000000100d2339f & 0x2f) * -2 + '/';
    cRam0000000100d23a50 = bRam0000000100d233a0 + (bRam0000000100d233a0 & 0x22) * -2 + '\"';
    bRam0000000100d23a51 = bRam0000000100d233a1 ^ 0x3d;
    cRam0000000100d23a52 = bRam0000000100d233a2 + (bRam0000000100d233a2 & 0xfb) * -2 + -5;
    bRam0000000100d23a53 = bRam0000000100d233a3 ^ 0x41;
    bRam0000000100d23a54 = bRam0000000100d233a4 ^ 0x97;
    bRam0000000100d23a55 = ~((bRam0000000100d233a5 | 0x35) & (bRam0000000100d233a5 ^ 0xff | 0xca));
    bRam0000000100d23a56 = bRam0000000100d233a6 ^ 0xf5;
    bRam0000000100d23a57 = bRam0000000100d233a7 ^ 0x35;
    bRam0000000100d23a58 = bRam0000000100d233a8 ^ 0xef;
    bRam0000000100d23a59 = bRam0000000100d233a9 ^ 0x23;
    cRam0000000100d23a5a = bRam0000000100d233aa + (bRam0000000100d233aa & 0x35) * -2 + -0x4b;
    bRam0000000100d23a5b = bRam0000000100d233ab ^ 0x81;
    cRam0000000100d23a5c = bRam0000000100d233ac + (bRam0000000100d233ac & 0x1b) * -2 + -0x65;
    bRam0000000100d23a5d = bRam0000000100d233ad ^ 0x65;
    bRam0000000100d23a5e = bRam0000000100d233ae ^ 0xb2;
    bRam0000000100d23a5f = bRam0000000100d233af ^ 0x7b;
    cRam0000000100d23a60 = bRam0000000100d233b0 + (bRam0000000100d233b0 & 0x37) * -2 + -0x49;
    uRam0000000100d23a61 =
         CONCAT17((byte)((ulong)uRam0000000100d233b1 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d638 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d233b1 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d638 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d233b1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d638 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d233b1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d638 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d233b1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d638 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d233b1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d638 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d233b1 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d638 >> 8),
                                                  (byte)uRam0000000100d233b1 ^ (byte)_UNK_10097d638)
                                                  ))))));
    bRam0000000100d23a69 = bRam0000000100d233b9 ^ 0xae;
    bRam0000000100d23a6a = bRam0000000100d233ba ^ 0xe9;
    cRam0000000100d23a6b = bRam0000000100d233bb + (bRam0000000100d233bb & 0xe) * -2 + '\x0e';
    uRam0000000100d23a6c =
         CONCAT17((byte)((ulong)uRam0000000100d233bc >> 0x38) ^
                  (byte)((ulong)_UNK_10097d640 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d233bc >> 0x30) ^
                           (byte)((ulong)_UNK_10097d640 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d233bc >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d640 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d233bc >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d640 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d233bc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d640 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d233bc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d640 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d233bc >> 8) ^
                                                  (byte)((ulong)_UNK_10097d640 >> 8),
                                                  (byte)uRam0000000100d233bc ^ (byte)_UNK_10097d640)
                                                  ))))));
    bRam0000000100d23a74 = bRam0000000100d233c4 ^ 0xed;
    bRam0000000100d23a75 = bRam0000000100d233c5 ^ 0x49;
    cRam0000000100d23a76 = bRam0000000100d233c6 + (bRam0000000100d233c6 & 0xef) * -2 + -0x11;
    cRam0000000100d23a77 = bRam0000000100d233c7 + (bRam0000000100d233c7 & 0x17) * -2 + -0x69;
    bRam0000000100d23a78 = bRam0000000100d233c8 ^ 0x31;
    bRam0000000100d23a79 = bRam0000000100d233c9 ^ 0xca;
    bRam0000000100d23a7a = bRam0000000100d233ca ^ 0xd4;
    bRam0000000100d23a7b = bRam0000000100d233cb ^ 0x10;
    cRam0000000100d23a7c = bRam0000000100d233cc + (bRam0000000100d233cc & 199) * -2 + 'G';
    uRam0000000100d23968 =
         CONCAT17((byte)((ulong)uRam0000000100d232b8 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d610 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d232b8 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d610 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d232b8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d610 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d232b8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d610 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d232b8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d610 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d232b8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d610 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d232b8 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d610 >> 8),
                                                  (byte)uRam0000000100d232b8 ^ (byte)_UNK_10097d610)
                                                  ))))));
    bRam0000000100d23a7d = bRam0000000100d233cd ^ 0x6b;
    bRam0000000100d23a7e = bRam0000000100d233ce ^ 0x10;
    bRam0000000100d23a7f = bRam0000000100d233cf ^ 0x37;
    cRam0000000100d23a80 = bRam0000000100d233d0 + (bRam0000000100d233d0 & 0x5a) * -2 + -0x26;
    uRam0000000100d23a81 =
         CONCAT17((byte)((ulong)uRam0000000100d233d1 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d648 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d233d1 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d648 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d233d1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d648 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d233d1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d648 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d233d1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d648 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d233d1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d648 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d233d1 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d648 >> 8),
                                                  (byte)uRam0000000100d233d1 ^ (byte)_UNK_10097d648)
                                                  ))))));
    bRam0000000100d23a89 = bRam0000000100d233d9 ^ 0x20;
    bRam0000000100d23a8a = bRam0000000100d233da ^ 0xcd;
    cRam0000000100d23a8b = bRam0000000100d233db + (bRam0000000100d233db & 0x38) * -2 + '8';
    bRam0000000100d23a8c = bRam0000000100d233dc ^ 0xf;
    bRam0000000100d23a8d = bRam0000000100d233dd ^ 0x65;
    bRam0000000100d23a8e = bRam0000000100d233de ^ 5;
    bRam0000000100d23a8f = bRam0000000100d233df ^ 0xf5;
    bRam0000000100d23a90 = bRam0000000100d233e0 ^ 0xa2;
    bRam0000000100d23a91 = bRam0000000100d233e1 ^ 0x4b;
    cRam0000000100d23a92 = bRam0000000100d233e2 + (bRam0000000100d233e2 & 0x65) * -2 + 'e';
    cRam0000000100d23a93 = bRam0000000100d233e3 + (bRam0000000100d233e3 & 0x35) * -2 + -0x4b;
    bRam0000000100d23a94 = ~bRam0000000100d233e4;
    bRam0000000100d23a95 = bRam0000000100d233e5 ^ 0x3d;
    bRam0000000100d23a96 = bRam0000000100d233e6 ^ 0x8d;
    bRam0000000100d23a97 = bRam0000000100d233e7 ^ 0xa8;
    bRam0000000100d23a98 = bRam0000000100d233e8 ^ 0x32;
    bRam0000000100d23a99 = bRam0000000100d233e9 ^ 0x3e;
    bRam0000000100d23a9a = bRam0000000100d233ea ^ 0xf3;
    cRam0000000100d23a9b = bRam0000000100d233eb + (bRam0000000100d233eb & 0x56) * -2 + -0x2a;
    bRam0000000100d23a9c = bRam0000000100d233ec ^ 0xf3;
    cRam0000000100d23a9d = bRam0000000100d233ed + (bRam0000000100d233ed & 100) * -2 + 'd';
    bRam0000000100d23a9e = bRam0000000100d233ee ^ 0xfc;
    bRam0000000100d23a9f = bRam0000000100d233ef ^ 0x54;
    bRam0000000100d23aa0 = bRam0000000100d233f0 ^ 0xd;
    bRam0000000100d23aa1 = bRam0000000100d233f1 ^ 0x3c;
    bRam0000000100d23aa2 = bRam0000000100d233f2 ^ 0x7f;
    cRam0000000100d23aa3 = bRam0000000100d233f3 + (bRam0000000100d233f3 & 0x6c) * -2 + 'l';
    bRam0000000100d23aa4 = bRam0000000100d233f4 ^ 200;
    cRam0000000100d23aa5 = bRam0000000100d233f5 + (bRam0000000100d233f5 & 0x5a) * -2 + 'Z';
    bRam0000000100d23aa6 = bRam0000000100d233f6 ^ 0xb2;
    bRam0000000100d23aa7 = bRam0000000100d233f7 ^ 0x4a;
    bRam0000000100d23aa8 = bRam0000000100d233f8 ^ 0x60;
    cRam0000000100d23aa9 = bRam0000000100d233f9 + (bRam0000000100d233f9 & 0x4b) * -2 + -0x35;
    bRam0000000100d23aaa = bRam0000000100d233fa ^ 0xd;
    bRam0000000100d23aab = bRam0000000100d233fb ^ 0x9a;
    bRam0000000100d23aac = bRam0000000100d233fc ^ 0x30;
    bRam0000000100d23aad = bRam0000000100d233fd ^ 0x70;
    cRam0000000100d23aae = bRam0000000100d233fe + (bRam0000000100d233fe & 0x59) * -2 + 'Y';
    bRam0000000100d23aaf = bRam0000000100d233ff ^ 0x14;
    bRam0000000100d23ab0 = bRam0000000100d23400 ^ 0x18;
    bRam0000000100d23ab1 = bRam0000000100d23401 ^ 0x27;
    bRam0000000100d23ab2 = bRam0000000100d23402 ^ 0x3c;
    bRam0000000100d23ab3 = bRam0000000100d23403 ^ 0x83;
    bRam0000000100d23ab4 = bRam0000000100d23404 ^ 0x3d;
    bRam0000000100d23ab5 = bRam0000000100d23405 ^ 0x95;
    cRam0000000100d23ab6 = bRam0000000100d23406 + (bRam0000000100d23406 & 0x5a) * -2 + -0x26;
    bRam0000000100d23ab7 = bRam0000000100d23407 ^ 0x75;
    bRam0000000100d23ab8 = bRam0000000100d23408 ^ 0xa1;
    cRam0000000100d23ab9 = bRam0000000100d23409 + (bRam0000000100d23409 & 10) * -2 + -0x76;
    bRam0000000100d23aba = bRam0000000100d2340a ^ 0x38;
    bRam0000000100d23abb = bRam0000000100d2340b ^ 0xb7;
    bRam0000000100d23abc = bRam0000000100d2340c ^ 0xea;
    bRam0000000100d23abd = bRam0000000100d2340d ^ 0x33;
    cRam0000000100d23abe = bRam0000000100d2340e + (bRam0000000100d2340e & 0x3f) * -2 + '?';
    bRam0000000100d23abf = bRam0000000100d2340f ^ 0xf6;
    bRam0000000100d23ac0 = bRam0000000100d23410 ^ 0xe9;
    bRam0000000100d23ac1 = bRam0000000100d23411 ^ 0x34;
    bRam0000000100d23ac2 = bRam0000000100d23412 ^ 0x8b;
    bRam0000000100d23ac3 = bRam0000000100d23413 ^ 8;
    bRam0000000100d23ac4 = ~bRam0000000100d23414;
    cRam0000000100d23ac5 = bRam0000000100d23415 + (bRam0000000100d23415 & 0x35) * -2 + '5';
    cRam0000000100d23ac6 = bRam0000000100d23416 + (bRam0000000100d23416 & 0x3f) * -2 + '?';
    bRam0000000100d23ac7 = bRam0000000100d23417 ^ 0xad;
    bRam0000000100d23ac8 = bRam0000000100d23418 ^ 0x4f;
    cRam0000000100d23ac9 = bRam0000000100d23419 + (bRam0000000100d23419 & 0x48) * -2 + -0x38;
    bRam0000000100d23aca = bRam0000000100d2341a ^ 0x8a;
    cRam0000000100d23acb = bRam0000000100d2341b + (bRam0000000100d2341b & 0x36) * -2 + '6';
    bRam0000000100d23acc = bRam0000000100d2341c ^ 6;
    bRam0000000100d23acd = bRam0000000100d2341d ^ 0xeb;
    bRam0000000100d23ace = bRam0000000100d2341e ^ 0x54;
    bRam0000000100d23acf = bRam0000000100d2341f ^ 0x48;
    cRam0000000100d23ad0 = bRam0000000100d23420 + (bRam0000000100d23420 & 0x2d) * -2 + -0x53;
    bRam0000000100d23ad1 = bRam0000000100d23421 ^ 0xd;
    bRam0000000100d23ad2 = bRam0000000100d23422 ^ 0x23;
    bRam0000000100d23ad3 = bRam0000000100d23423 ^ 0xf3;
    cRam0000000100d23ad4 = bRam0000000100d23424 + (bRam0000000100d23424 & 0x2d) * -2 + -0x53;
    bRam0000000100d23ad5 = bRam0000000100d23425 ^ 0xc6;
    cRam0000000100d23ad6 = bRam0000000100d23426 + (bRam0000000100d23426 & 0x16) * -2 + '\x16';
    bRam0000000100d23ad7 = bRam0000000100d23427 ^ 0x48;
    bRam0000000100d23ad8 = bRam0000000100d23428 ^ 0xd4;
    bRam0000000100d23ad9 = bRam0000000100d23429 ^ 0xed;
    bRam0000000100d23ada = bRam0000000100d2342a ^ 0xa0;
    cRam0000000100d23adb = bRam0000000100d2342b + (bRam0000000100d2342b & 0x1d) * -2 + -99;
    bRam0000000100d23adc = bRam0000000100d2342c ^ 0x9d;
    cRam0000000100d23add = bRam0000000100d2342d + (bRam0000000100d2342d & 0x39) * -2 + -0x47;
    uRam0000000100d23ade =
         CONCAT17((byte)((ulong)uRam0000000100d2342e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d650 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2342e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d650 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2342e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d650 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2342e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d650 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2342e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d650 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2342e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d650 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2342e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d650 >> 8),
                                                  (byte)uRam0000000100d2342e ^ (byte)_UNK_10097d650)
                                                  ))))));
    bRam0000000100d23ae6 = bRam0000000100d23436 ^ 0x43;
    cRam0000000100d23ae7 = bRam0000000100d23437 + (bRam0000000100d23437 & 0x22) * -2 + -0x5e;
    cRam0000000100d23ae8 = bRam0000000100d23438 + (bRam0000000100d23438 & 0xee) * -2 + 'n';
    bRam0000000100d23ae9 = bRam0000000100d23439 ^ 0x17;
    bRam0000000100d23aea = bRam0000000100d2343a ^ 0x59;
    bRam0000000100d23aeb = bRam0000000100d2343b ^ 0xb0;
    cRam0000000100d23aec = bRam0000000100d2343c + (bRam0000000100d2343c & 7) * -2 + '\a';
    bRam0000000100d23aed = bRam0000000100d2343d ^ 0xf9;
    bRam0000000100d23aee = bRam0000000100d2343e ^ 0xa0;
    bRam0000000100d23aef = bRam0000000100d2343f ^ 0xc5;
    bRam0000000100d23af0 = bRam0000000100d23440 ^ 0x37;
    bRam0000000100d23af1 = bRam0000000100d23441 ^ 0x9c;
    bRam0000000100d23af2 = bRam0000000100d23442 ^ 0x97;
    cRam0000000100d23af3 = bRam0000000100d23443 + (bRam0000000100d23443 & 0x56) * -2 + 'V';
    bRam0000000100d23af4 = bRam0000000100d23444 ^ 0xae;
    cRam0000000100d23af5 = bRam0000000100d23445 + (bRam0000000100d23445 & 0x34) * -2 + -0x4c;
    uRam0000000100d23af6 =
         CONCAT17((byte)((ulong)uRam0000000100d23446 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d658 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23446 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d658 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23446 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d658 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23446 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d658 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23446 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d658 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23446 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d658 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23446 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d658 >> 8),
                                                  (byte)uRam0000000100d23446 ^ (byte)_UNK_10097d658)
                                                  ))))));
    bRam0000000100d23afe = bRam0000000100d2344e ^ 0x77;
    bRam0000000100d23aff = bRam0000000100d2344f ^ 0x76;
    cRam0000000100d23b00 = bRam0000000100d23450 + (bRam0000000100d23450 & 0x22) * -2 + '\"';
    bRam0000000100d23b01 = bRam0000000100d23451 ^ 0xae;
    bRam0000000100d23b02 = bRam0000000100d23452 ^ 0xaf;
    bRam0000000100d23b03 = bRam0000000100d23453 ^ 0xf2;
    bRam0000000100d23b04 = bRam0000000100d23454 ^ 0x19;
    bRam0000000100d23b05 = bRam0000000100d23455 ^ 0xb4;
    cRam0000000100d23b06 = bRam0000000100d23456 + (bRam0000000100d23456 & 100) * -2 + -0x1c;
    bRam0000000100d23b07 = bRam0000000100d23457 ^ 0x2d;
    cRam0000000100d23b08 = bRam0000000100d23458 + (bRam0000000100d23458 & 0xaa) * -2 + '*';
    bRam0000000100d23b09 = bRam0000000100d23459 ^ 0x28;
    bRam0000000100d23b0a = ~((bRam0000000100d2345a | 0xc3) & (~bRam0000000100d2345a | 0x3c));
    uRam0000000100d23b0b =
         CONCAT17((byte)((ulong)uRam0000000100d2345b >> 0x38) ^
                  (byte)((ulong)_UNK_10097d660 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2345b >> 0x30) ^
                           (byte)((ulong)_UNK_10097d660 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2345b >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d660 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2345b >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d660 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2345b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d660 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2345b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d660 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2345b >> 8) ^
                                                  (byte)((ulong)_UNK_10097d660 >> 8),
                                                  (byte)uRam0000000100d2345b ^ (byte)_UNK_10097d660)
                                                  ))))));
    bRam0000000100d23b13 = bRam0000000100d23463 ^ 0x22;
    bRam0000000100d23b14 = ~((bRam0000000100d23464 | 0xc3) & (~bRam0000000100d23464 | 0x3c));
    cRam0000000100d23b15 = bRam0000000100d23465 + (bRam0000000100d23465 & 0x3a) * -2 + -0x46;
    uRam0000000100d23b16 = uRam0000000100d23466;
    uRam0000000100d23b17 =
         CONCAT17((byte)((ulong)uRam0000000100d23467 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d4a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23467 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d4a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23467 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d4a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23467 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d4a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23467 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d4a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23467 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d4a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23467 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d4a0 >> 8),
                                                  (byte)uRam0000000100d23467 ^ (byte)_UNK_10097d4a0)
                                                  ))))));
    bRam0000000100d23b1f = bRam0000000100d2346f ^ 0x4f;
    bRam0000000100d23b20 = bRam0000000100d23470 ^ 0x3f;
    bRam0000000100d23b21 = bRam0000000100d23471 ^ 0x28;
    cRam0000000100d23b22 = bRam0000000100d23472 + (bRam0000000100d23472 & 0x4d) * -2 + -0x33;
    uRam0000000100d23b23 =
         CONCAT17((byte)((ulong)uRam0000000100d23473 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d668 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23473 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d668 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23473 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d668 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23473 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d668 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23473 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d668 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23473 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d668 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23473 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d668 >> 8),
                                                  (byte)uRam0000000100d23473 ^ (byte)_UNK_10097d668)
                                                  ))))));
    cRam0000000100d23b2b = bRam0000000100d2347b + (bRam0000000100d2347b & 0x5e) * -2 + '^';
    uRam0000000100d23b2c =
         CONCAT17((byte)((ulong)uRam0000000100d2347c >> 0x38) ^
                  (byte)((ulong)_UNK_10097d670 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2347c >> 0x30) ^
                           (byte)((ulong)_UNK_10097d670 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2347c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d670 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2347c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d670 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2347c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d670 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2347c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d670 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2347c >> 8) ^
                                                  (byte)((ulong)_UNK_10097d670 >> 8),
                                                  (byte)uRam0000000100d2347c ^ (byte)_UNK_10097d670)
                                                  ))))));
    bRam0000000100d23b34 = bRam0000000100d23484 ^ 0xc3;
    bRam0000000100d23b35 = bRam0000000100d23485 ^ 5;
    bRam0000000100d23b36 = bRam0000000100d23486 ^ 0xad;
    cRam0000000100d23b37 = bRam0000000100d23487 + (bRam0000000100d23487 & 0x12) * -2 + '\x12';
    bRam0000000100d23b38 = bRam0000000100d23488 ^ 0xba;
    bRam0000000100d23b39 = bRam0000000100d23489 ^ 0xb7;
    bRam0000000100d23b3a = bRam0000000100d2348a ^ 0x29;
    bRam0000000100d23b3b = bRam0000000100d2348b ^ 0x48;
    bRam0000000100d23b3c = bRam0000000100d2348c ^ 0xe6;
    cRam0000000100d23b3d = bRam0000000100d2348d + (bRam0000000100d2348d & 0x5c) * -2 + '\\';
    bRam0000000100d23b3e = bRam0000000100d2348e ^ 0x40;
    bRam0000000100d23b3f = bRam0000000100d2348f ^ 0xd1;
    bRam0000000100d23b40 = bRam0000000100d23490 ^ 0x17;
    bRam0000000100d23b41 = bRam0000000100d23491 ^ 0x9d;
    cRam0000000100d23b42 = bRam0000000100d23492 + (bRam0000000100d23492 & 199) * -2 + -0x39;
    bRam0000000100d23b43 = bRam0000000100d23493 ^ 10;
    bRam0000000100d23b44 = bRam0000000100d23494 ^ 0xcd;
    bRam0000000100d23b45 = bRam0000000100d23495 ^ 0x4a;
    bRam0000000100d23b46 = ~((bRam0000000100d23496 | 0xb4) & (bRam0000000100d23496 ^ 0xff | 0x4b));
    bRam0000000100d23b47 = bRam0000000100d23497 ^ 0x5f;
    bRam0000000100d23b60 = bRam0000000100d23b50 ^ 0x3a;
    bRam0000000100d23b61 = bRam0000000100d23b51 ^ 0x50;
    bRam0000000100d23b62 = bRam0000000100d23b52 ^ 0x50;
    bRam0000000100d23b63 = bRam0000000100d23b53 ^ 0x9b;
    bRam0000000100d24220 = bRam0000000100d23b70 ^ 0x4d;
    cRam0000000100d24221 = bRam0000000100d23b71 + (bRam0000000100d23b71 & 0x68) * -2 + 'h';
    bRam0000000100d24222 = bRam0000000100d23b72 ^ 0x4f;
    bRam0000000100d24223 = bRam0000000100d23b73 ^ 99;
    bRam0000000100d24224 = bRam0000000100d23b74 ^ 0x2a;
    bRam0000000100d24225 = bRam0000000100d23b75 ^ 0x75;
    bRam0000000100d24226 = bRam0000000100d23b76 ^ 0x9c;
    bRam0000000100d24227 = bRam0000000100d23b77 ^ 0xe6;
    cRam0000000100d24228 = bRam0000000100d23b78 + (bRam0000000100d23b78 & 0x18) * -2 + -0x68;
    cRam0000000100d24229 = bRam0000000100d23b79 + (bRam0000000100d23b79 & 8) * -2 + '\b';
    bRam0000000100d2422a = bRam0000000100d23b7a ^ 100;
    cRam0000000100d2422b = bRam0000000100d23b7b + (bRam0000000100d23b7b & 0xe7) * -2 + 'g';
    bRam0000000100d2422c = ~((bRam0000000100d23b7c | 0x6a) & (bRam0000000100d23b7c ^ 0xff | 0x95));
    bRam0000000100d2422d = bRam0000000100d23b7d ^ 200;
    bRam0000000100d2422e = bRam0000000100d23b7e ^ 0x24;
    bRam0000000100d2422f = bRam0000000100d23b7f ^ 0x5f;
    bRam0000000100d24230 = bRam0000000100d23b80 ^ 7;
    cRam0000000100d24231 = bRam0000000100d23b81 + (bRam0000000100d23b81 & 0x7a) * -2 + -6;
    bRam0000000100d24232 = bRam0000000100d23b82 ^ 7;
    bRam0000000100d24233 = bRam0000000100d23b83 ^ 0x8b;
    bRam0000000100d24234 = bRam0000000100d23b84 ^ 0x42;
    bRam0000000100d24235 = bRam0000000100d23b85 ^ 0xe5;
    bRam0000000100d24236 = bRam0000000100d23b86 ^ 0x90;
    bRam0000000100d24237 = bRam0000000100d23b87 ^ 0x78;
    cRam0000000100d24238 = bRam0000000100d23b88 + (bRam0000000100d23b88 & 0xaa) * -2 + '*';
    cRam0000000100d24239 = bRam0000000100d23b89 + (bRam0000000100d23b89 & 0x62) * -2 + 'b';
    bRam0000000100d2423a = bRam0000000100d23b8a ^ 0x74;
    bRam0000000100d2423b = bRam0000000100d23b8b ^ 0xc1;
    bRam0000000100d2423c = bRam0000000100d23b8c ^ 0x61;
    bRam0000000100d2423d = bRam0000000100d23b8d ^ 0x16;
    bRam0000000100d2423e = bRam0000000100d23b8e ^ 0xab;
    cRam0000000100d2423f = bRam0000000100d23b8f + (bRam0000000100d23b8f & 0xcf) * -2 + 'O';
    bRam0000000100d24248 = bRam0000000100d23b98 ^ 0xeb;
    cRam0000000100d24249 = cRam0000000100d23b99 - (cRam0000000100d23b99 << 1 | 2U);
    bRam0000000100d2424a = bRam0000000100d23b9a ^ 0xcd;
    cRam0000000100d2424b = bRam0000000100d23b9b + (bRam0000000100d23b9b & 0x14) * -2 + -0x6c;
    bRam0000000100d2424c = bRam0000000100d23b9c ^ 0x2d;
    cRam0000000100d2424d = bRam0000000100d23b9d + (bRam0000000100d23b9d & 0x5c) * -2 + '\\';
    uRam0000000100d2424e = uRam0000000100d23b9e;
    cRam0000000100d24257 = bRam0000000100d23ba7 + (bRam0000000100d23ba7 & 0x3c) * -2 + '<';
    bRam0000000100d24258 = bRam0000000100d23ba8 ^ 0x85;
    bRam0000000100d24259 = bRam0000000100d23ba9 ^ 0xfa;
    bRam0000000100d2425a = bRam0000000100d23baa ^ 0x55;
    bRam0000000100d2425b = bRam0000000100d23bab ^ 0xf3;
    bRam0000000100d2425c = bRam0000000100d23bac ^ 0x89;
    bRam0000000100d2425d = bRam0000000100d23bad ^ 0xc6;
    bRam0000000100d2425e = bRam0000000100d23bae ^ 0xf7;
    cRam0000000100d2425f = bRam0000000100d23baf + (bRam0000000100d23baf & 0x69) * -2 + 'i';
    bRam0000000100d24268 = bRam0000000100d23bb8 ^ 0xc1;
    bRam0000000100d24269 = bRam0000000100d23bb9 ^ 0xb7;
    cRam0000000100d2426a = bRam0000000100d23bba + (bRam0000000100d23bba & 0x4a) * -2 + -0x36;
    cRam0000000100d2426b = bRam0000000100d23bbb + (bRam0000000100d23bbb & 0x40) * '\x02' + -0x40;
    bRam0000000100d2426c = bRam0000000100d23bbc ^ 0x98;
    bRam0000000100d2426d = bRam0000000100d23bbd ^ 3;
    bRam0000000100d2426e = bRam0000000100d23bbe ^ 0x9a;
    cRam0000000100d2426f = bRam0000000100d23bbf + (bRam0000000100d23bbf & 0x58) * -2 + 'X';
    cRam0000000100d24270 = bRam0000000100d23bc0 + (bRam0000000100d23bc0 & 0x53) * -2 + -0x2d;
    bRam0000000100d24279 = bRam0000000100d23bc9 ^ 0x7f;
    bRam0000000100d2427a = bRam0000000100d23bca ^ 0x3b;
    bRam0000000100d2427b = bRam0000000100d23bcb ^ 0xe8;
    cRam0000000100d2427c = bRam0000000100d23bcc + (bRam0000000100d23bcc & 4) * -2 + -0x7c;
    cRam0000000100d2427d = bRam0000000100d23bcd + (bRam0000000100d23bcd & 0xdf) * -2 + '_';
    bRam0000000100d24286 = bRam0000000100d23bd6 ^ 0x30;
    bRam0000000100d24287 = bRam0000000100d23bd7 ^ 0x39;
    cRam0000000100d24288 = bRam0000000100d23bd8 + (bRam0000000100d23bd8 & 0x68) * -2 + -0x18;
    bRam0000000100d24289 = bRam0000000100d23bd9 ^ 0xc1;
    bRam0000000100d2428a = bRam0000000100d23bda ^ 0xee;
    bRam0000000100d2428b = bRam0000000100d23bdb ^ 0x48;
    bRam0000000100d2428c = bRam0000000100d23bdc ^ 0x33;
    cRam0000000100d2428d = bRam0000000100d23bdd + (bRam0000000100d23bdd & 0x6a) * -2 + 'j';
    bRam0000000100d24296 = bRam0000000100d23be6 ^ 0x91;
    bRam0000000100d24297 = bRam0000000100d23be7 ^ 0x20;
    bRam0000000100d24298 = bRam0000000100d23be8 ^ 0x56;
    bRam0000000100d24299 = bRam0000000100d23be9 ^ 0x1e;
    cRam0000000100d2429a = bRam0000000100d23bea + (bRam0000000100d23bea & 0xf1) * -2 + 'q';
    bRam0000000100d2429b = bRam0000000100d23beb ^ 0x93;
    uRam0000000100d2429c = uRam0000000100d23bec;
    bRam0000000100d2429d = bRam0000000100d23bed ^ 0xe8;
    bRam0000000100d2429e = bRam0000000100d23bee ^ 0xd5;
    cRam0000000100d2429f = bRam0000000100d23bef + (bRam0000000100d23bef & 0x6b) * -2 + 'k';
    bRam0000000100d242a0 = bRam0000000100d23bf0 ^ 0xad;
    cRam0000000100d242a1 = bRam0000000100d23bf1 + (bRam0000000100d23bf1 & 0x2d) * -2 + '-';
    bRam0000000100d242a2 = bRam0000000100d23bf2 ^ 0x9b;
    bRam0000000100d242a3 = bRam0000000100d23bf3 ^ 0xdf;
    cRam0000000100d242a4 = bRam0000000100d23bf4 + (bRam0000000100d23bf4 & 0x5b) * -2 + -0x25;
    bRam0000000100d242a5 = bRam0000000100d23bf5 ^ 0x2a;
    bRam0000000100d242a6 = bRam0000000100d23bf6 ^ 0xe;
    bRam0000000100d242a7 = bRam0000000100d23bf7 ^ 0x6a;
    bRam0000000100d242a8 = bRam0000000100d23bf8 ^ 0xa0;
    bRam0000000100d242a9 = bRam0000000100d23bf9 ^ 0xb1;
    bRam0000000100d242aa = bRam0000000100d23bfa ^ 199;
    cRam0000000100d242ab = bRam0000000100d23bfb + (bRam0000000100d23bfb & 0xdf) * -2 + -0x21;
    bRam0000000100d242bc = bRam0000000100d23c0c ^ 0x2d;
    bRam0000000100d242bd = bRam0000000100d23c0d ^ 0xee;
    cRam0000000100d242be = bRam0000000100d23c0e + (bRam0000000100d23c0e & 0x56) * -2 + 'V';
    bRam0000000100d242bf = bRam0000000100d23c0f ^ 0x74;
    cRam0000000100d242c0 = bRam0000000100d23c10 + (bRam0000000100d23c10 & 0x57) * -2 + 'W';
    bRam0000000100d242c1 = bRam0000000100d23c11 ^ 0x22;
    cRam0000000100d242c2 = bRam0000000100d23c12 + (bRam0000000100d23c12 & 0x2d) * -2 + '-';
    bRam0000000100d242c3 = bRam0000000100d23c13 ^ 8;
    bRam0000000100d242c4 = bRam0000000100d23c14 ^ 0xdb;
    bRam0000000100d242c5 = bRam0000000100d23c15 ^ 0x49;
    cRam0000000100d242c6 = bRam0000000100d23c16 + (bRam0000000100d23c16 & 0x2f) * -2 + -0x51;
    bRam0000000100d242c7 = bRam0000000100d23c17 ^ 0xa0;
    cRam0000000100d242c8 = bRam0000000100d23c18 + (bRam0000000100d23c18 & 7) * -2 + '\a';
    bRam0000000100d242d1 = bRam0000000100d23c21 ^ 1;
    cRam0000000100d242d2 = bRam0000000100d23c22 + (bRam0000000100d23c22 & 0x3e) * -2 + -0x42;
    bRam0000000100d242db = bRam0000000100d23c2b ^ 0x20;
    bRam0000000100d242dc = bRam0000000100d23c2c ^ 7;
    bRam0000000100d242dd = bRam0000000100d23c2d ^ 10;
    bRam0000000100d242de = bRam0000000100d23c2e ^ 0x61;
    bRam0000000100d242df = bRam0000000100d23c2f ^ 0x2c;
    cRam0000000100d242e0 = bRam0000000100d23c30 + (bRam0000000100d23c30 & 0xf3) * -2 + 's';
    bRam0000000100d242e1 = bRam0000000100d23c31 ^ 0xb2;
    cRam0000000100d242e2 = bRam0000000100d23c32 + (bRam0000000100d23c32 & 0xef) * -2 + -0x11;
    bRam0000000100d242e3 = bRam0000000100d23c33 ^ 0xda;
    bRam0000000100d242e4 = bRam0000000100d23c34 ^ 0xb1;
    cRam0000000100d242e5 = bRam0000000100d23c35 + (bRam0000000100d23c35 & 0x5c) * -2 + '\\';
    bRam0000000100d242e6 = bRam0000000100d23c36 ^ 0xda;
    bRam0000000100d242e7 = bRam0000000100d23c37 ^ 1;
    bRam0000000100d242e8 = bRam0000000100d23c38 ^ 0x7d;
    bRam0000000100d242e9 = bRam0000000100d23c39 ^ 0x41;
    bRam0000000100d242ea = bRam0000000100d23c3a ^ 0x5a;
    bRam0000000100d242eb = bRam0000000100d23c3b ^ 0x5a;
    bRam0000000100d242ec = bRam0000000100d23c3c ^ 0x3e;
    cRam0000000100d242ed = bRam0000000100d23c3d + (bRam0000000100d23c3d & 0x5c) * -2 + '\\';
    cRam0000000100d242f6 = bRam0000000100d23c46 + (bRam0000000100d23c46 & 0xb) * -2 + -0x75;
    cRam0000000100d242f7 = bRam0000000100d23c47 + (bRam0000000100d23c47 & 3) * -2 + '\x03';
    bRam0000000100d242f8 = bRam0000000100d23c48 ^ 0x9e;
    bRam0000000100d242f9 = bRam0000000100d23c49 ^ 0x29;
    bRam0000000100d242fa = bRam0000000100d23c4a ^ 0x52;
    bRam0000000100d242fb = bRam0000000100d23c4b ^ 0x8d;
    bRam0000000100d242fc = ~((bRam0000000100d23c4c | 0x27) & (bRam0000000100d23c4c ^ 0xff | 0xd8));
    bRam0000000100d242fd = bRam0000000100d23c4d ^ 0xd2;
    bRam0000000100d242fe = bRam0000000100d23c4e ^ 0xab;
    bRam0000000100d242ff = bRam0000000100d23c4f ^ 0x25;
    bRam0000000100d24300 = bRam0000000100d23c50 ^ 0xa7;
    bRam0000000100d24301 = ~((bRam0000000100d23c51 | 0xf0) & (~bRam0000000100d23c51 | 0xf));
    bRam0000000100d24302 = bRam0000000100d23c52 ^ 0x6a;
    bRam0000000100d24303 = bRam0000000100d23c53 ^ 0x8e;
    bRam0000000100d24304 = bRam0000000100d23c54 ^ 0x3e;
    bRam0000000100d24305 = ~((bRam0000000100d23c55 | 0xe7) & (~bRam0000000100d23c55 | 0x18));
    bRam0000000100d24306 = bRam0000000100d23c56 ^ 0xca;
    bRam0000000100d24307 = bRam0000000100d23c57 ^ 0x66;
    bRam0000000100d24308 = bRam0000000100d23c58 ^ 0xbe;
    cRam0000000100d24309 = bRam0000000100d23c59 + (bRam0000000100d23c59 & 0x3a) * -2 + ':';
    bRam0000000100d2430a = bRam0000000100d23c5a ^ 0xe7;
    bRam0000000100d2430b = bRam0000000100d23c5b ^ 0xd1;
    bRam0000000100d2430c = bRam0000000100d23c5c ^ 0xea;
    bRam0000000100d2430d = bRam0000000100d23c5d ^ 0x56;
    bRam0000000100d2430e = bRam0000000100d23c5e ^ 0x57;
    bRam0000000100d2430f = ~((bRam0000000100d23c5f | 0x4e) & (bRam0000000100d23c5f ^ 0xff | 0xb1));
    bRam0000000100d24310 = ~((bRam0000000100d23c60 | 0x25) & (bRam0000000100d23c60 ^ 0xff | 0xda));
    bRam0000000100d24311 = bRam0000000100d23c61 ^ 3;
    bRam0000000100d24312 = ~((bRam0000000100d23c62 | 0xd7) & (bRam0000000100d23c62 ^ 0xff | 0x28));
    bRam0000000100d24313 = bRam0000000100d23c63 ^ 0x93;
    bRam0000000100d24314 = bRam0000000100d23c64 ^ 0xf1;
    bRam0000000100d24315 = bRam0000000100d23c65 ^ 0x7e;
    bRam0000000100d24316 = bRam0000000100d23c66 ^ 0xc3;
    bRam0000000100d24317 = bRam0000000100d23c67 ^ 0xad;
    bRam0000000100d24318 = bRam0000000100d23c68 ^ 0x46;
    cRam0000000100d24319 = bRam0000000100d23c69 + (bRam0000000100d23c69 & 0x54) * -2 + 'T';
    bRam0000000100d2431a = bRam0000000100d23c6a ^ 0xdc;
    cRam0000000100d2431b = bRam0000000100d23c6b + (bRam0000000100d23c6b & 0x75) * -2 + 'u';
    bRam0000000100d2431c = bRam0000000100d23c6c ^ 0x22;
    bRam0000000100d2431d = bRam0000000100d23c6d ^ 0x97;
    cRam0000000100d2431e = bRam0000000100d23c6e + (bRam0000000100d23c6e & 0x3c) * -2 + -0x44;
    bRam0000000100d2431f = bRam0000000100d23c6f ^ 0x99;
    bRam0000000100d24320 = bRam0000000100d23c70 ^ 0xe1;
    cRam0000000100d24321 = bRam0000000100d23c71 + (bRam0000000100d23c71 & 0x54) * -2 + 'T';
    bRam0000000100d24322 = bRam0000000100d23c72 ^ 0xc;
    bRam0000000100d24323 = bRam0000000100d23c73 ^ 0x1a;
    bRam0000000100d24324 = bRam0000000100d23c74 ^ 0xae;
    bRam0000000100d24325 = ~((bRam0000000100d23c75 | 200) & (bRam0000000100d23c75 ^ 0xff | 0x37));
    bRam0000000100d24326 = bRam0000000100d23c76 ^ 0x2a;
    cRam0000000100d24327 = bRam0000000100d23c77 + (bRam0000000100d23c77 & 0xe3) * -2 + 'c';
    bRam0000000100d24328 = bRam0000000100d23c78 ^ 0x8e;
    bRam0000000100d24329 = bRam0000000100d23c79 ^ 0x42;
    cRam0000000100d2432a = bRam0000000100d23c7a + (bRam0000000100d23c7a & 0x52) * -2 + 'R';
    cRam0000000100d2432b = bRam0000000100d23c7b + (bRam0000000100d23c7b & 0x3f) * -2 + '?';
    bRam0000000100d2432c = bRam0000000100d23c7c ^ 0x80;
    bRam0000000100d2432d = bRam0000000100d23c7d ^ 0xf5;
    bRam0000000100d2432e = bRam0000000100d23c7e ^ 0xd0;
    uRam0000000100d23a38 =
         CONCAT17((byte)((ulong)uRam0000000100d23388 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d630 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23388 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d630 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23388 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d630 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23388 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d630 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23388 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d630 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23388 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d630 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23388 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d630 >> 8),
                                                  (byte)uRam0000000100d23388 ^ (byte)_UNK_10097d630)
                                                  ))))));
    cRam0000000100d2432f = bRam0000000100d23c7f + (bRam0000000100d23c7f & 0x23) * -2 + -0x5d;
    bRam0000000100d24338 = bRam0000000100d23c88 ^ 0xa9;
    bRam0000000100d24339 = bRam0000000100d23c89 ^ 0x61;
    bRam0000000100d2433a = bRam0000000100d23c8a ^ 99;
    cRam0000000100d2433b = bRam0000000100d23c8b + (bRam0000000100d23c8b & 0x37) * -2 + '7';
    uRam0000000100d2433c =
         CONCAT17((byte)((ulong)uRam0000000100d23c8c >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c8c >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c8c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c8c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c8c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c8c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c8c >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6d0 >> 8),
                                                  (byte)uRam0000000100d23c8c ^ (byte)_UNK_10097d6d0)
                                                  ))))));
    bRam0000000100d24344 = bRam0000000100d23c94 ^ 0xcb;
    cRam0000000100d24345 = bRam0000000100d23c95 + (bRam0000000100d23c95 & 0x4d) * -2 + -0x33;
    bRam0000000100d24346 = bRam0000000100d23c96 ^ 0xc0;
    bRam0000000100d24347 = bRam0000000100d23c97 ^ 0x45;
    bRam0000000100d24348 = bRam0000000100d23c98 ^ 0x80;
    cRam0000000100d24349 = bRam0000000100d23c99 + (bRam0000000100d23c99 & 3) * -2 + '\x03';
    bRam0000000100d2434a = bRam0000000100d23c9a ^ 0x18;
    bRam0000000100d2434b = bRam0000000100d23c9b ^ 0x5f;
    bRam0000000100d2434c = bRam0000000100d23c9c ^ 0x83;
    bRam0000000100d2434d = bRam0000000100d23c9d ^ 0x51;
    bRam0000000100d2434e = bRam0000000100d23c9e ^ 0x16;
    bRam0000000100d2434f = bRam0000000100d23c9f ^ 0xbf;
    bRam0000000100d24350 = bRam0000000100d23ca0 ^ 5;
    cRam0000000100d24351 = bRam0000000100d23ca1 + (bRam0000000100d23ca1 & 0x70) * -2 + -0x10;
    cRam0000000100d24352 = bRam0000000100d23ca2 + (bRam0000000100d23ca2 & 0x48) * -2 + 'H';
    cRam0000000100d24353 = bRam0000000100d23ca3 + (bRam0000000100d23ca3 & 0xaa) * -2 + -0x56;
    cRam0000000100d24354 = bRam0000000100d23ca4 + (bRam0000000100d23ca4 & 0x33) * -2 + -0x4d;
    bRam0000000100d24355 = bRam0000000100d23ca5 ^ 0x13;
    bRam0000000100d24356 = bRam0000000100d23ca6 ^ 0x56;
    bRam0000000100d24357 = bRam0000000100d23ca7 ^ 0x5c;
    cRam0000000100d24358 = bRam0000000100d23ca8 + (bRam0000000100d23ca8 & 0x2b) * -2 + '+';
    bRam0000000100d24359 = bRam0000000100d23ca9 ^ 0xda;
    bRam0000000100d2435a = bRam0000000100d23caa ^ 0x2f;
    cRam0000000100d2435b = bRam0000000100d23cab + (bRam0000000100d23cab & 0x32) * -2 + -0x4e;
    bRam0000000100d2435c = bRam0000000100d23cac ^ 0xf1;
    bRam0000000100d2435d = bRam0000000100d23cad ^ 0x36;
    bRam0000000100d2435e = bRam0000000100d23cae ^ 0x7f;
    bRam0000000100d2435f = bRam0000000100d23caf ^ 200;
    bRam0000000100d24360 = bRam0000000100d23cb0 ^ 0x7b;
    bRam0000000100d24361 = bRam0000000100d23cb1 ^ 0x99;
    cRam0000000100d24362 = bRam0000000100d23cb2 + (bRam0000000100d23cb2 & 0xc3) * -2 + -0x3d;
    bRam0000000100d24363 = bRam0000000100d23cb3 ^ 0xde;
    bRam0000000100d24364 = bRam0000000100d23cb4 ^ 0x2a;
    bRam0000000100d24365 = bRam0000000100d23cb5 ^ 0xc0;
    bRam0000000100d24366 = bRam0000000100d23cb6 ^ 0xa4;
    cRam0000000100d24367 = bRam0000000100d23cb7 + (bRam0000000100d23cb7 & 0x15) * -2 + '\x15';
    bRam0000000100d24368 = bRam0000000100d23cb8 ^ 0x1c;
    bRam0000000100d24369 = bRam0000000100d23cb9 ^ 0x15;
    bRam0000000100d2436a = bRam0000000100d23cba ^ 0xaa;
    cRam0000000100d2436b = bRam0000000100d23cbb + (bRam0000000100d23cbb & 2) * -2 + -0x7e;
    bRam0000000100d2436c = bRam0000000100d23cbc ^ 0x3a;
    bRam0000000100d2436d = bRam0000000100d23cbd ^ 0x96;
    bRam0000000100d2436e = bRam0000000100d23cbe ^ 0xd1;
    bRam0000000100d2436f = ~bRam0000000100d23cbf;
    bRam0000000100d24370 = bRam0000000100d23cc0 ^ 0xd0;
    bRam0000000100d24371 = bRam0000000100d23cc1 ^ 0xe4;
    uRam0000000100d24372 = uRam0000000100d23cc2;
    bRam0000000100d24373 = bRam0000000100d23cc3 ^ 0x14;
    cRam0000000100d24374 = bRam0000000100d23cc4 + (bRam0000000100d23cc4 & 0x2f) * -2 + -0x51;
    cRam0000000100d24375 = bRam0000000100d23cc5 + (bRam0000000100d23cc5 & 0x32) * -2 + -0x4e;
    bRam0000000100d24376 = bRam0000000100d23cc6 ^ 0x5c;
    bRam0000000100d24377 = bRam0000000100d23cc7 ^ 0xb7;
    bRam0000000100d24378 = bRam0000000100d23cc8 ^ 0xb1;
    bRam0000000100d24379 = bRam0000000100d23cc9 ^ 0x97;
    bRam0000000100d2437a = bRam0000000100d23cca ^ 0x18;
    bRam0000000100d2437b = bRam0000000100d23ccb ^ 0xa3;
    cRam0000000100d2437c = bRam0000000100d23ccc + (bRam0000000100d23ccc & 0x75) * -2 + 'u';
    bRam0000000100d2437d = bRam0000000100d23ccd ^ 0xe1;
    bRam0000000100d2437e = bRam0000000100d23cce ^ 0x72;
    bRam0000000100d2437f = bRam0000000100d23ccf ^ 0xda;
    bRam0000000100d24380 = bRam0000000100d23cd0 ^ 0xfe;
    bRam0000000100d24381 = bRam0000000100d23cd1 ^ 0x72;
    bRam0000000100d24382 = bRam0000000100d23cd2 ^ 0x8e;
    cRam0000000100d24383 = bRam0000000100d23cd3 + (bRam0000000100d23cd3 & 0x18) * -2 + -0x68;
    cRam0000000100d24384 = bRam0000000100d23cd4 + (bRam0000000100d23cd4 & 0x69) * -2 + 'i';
    uRam0000000100d24385 =
         CONCAT17((byte)((ulong)uRam0000000100d23cd5 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23cd5 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23cd5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23cd5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23cd5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23cd5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23cd5 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6d8 >> 8),
                                                  (byte)uRam0000000100d23cd5 ^ (byte)_UNK_10097d6d8)
                                                  ))))));
    cRam0000000100d2438d = bRam0000000100d23cdd + (bRam0000000100d23cdd & 0x30) * -2 + -0x50;
    uRam0000000100d2438e =
         CONCAT17((byte)((ulong)uRam0000000100d23cde >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23cde >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23cde >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23cde >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23cde >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23cde >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23cde >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6e0 >> 8),
                                                  (byte)uRam0000000100d23cde ^ (byte)_UNK_10097d6e0)
                                                  ))))));
    bRam0000000100d24396 = bRam0000000100d23ce6 ^ 0xf9;
    bRam0000000100d24397 = bRam0000000100d23ce7 ^ 0x8c;
    bRam0000000100d24398 = bRam0000000100d23ce8 ^ 0x59;
    bRam0000000100d24399 = bRam0000000100d23ce9 ^ 0xdb;
    cRam0000000100d2439a = bRam0000000100d23cea + (bRam0000000100d23cea & 0x10) * -2 + '\x10';
    uRam0000000100d2439b =
         CONCAT17((byte)((ulong)uRam0000000100d23ceb >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ceb >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ceb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ceb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ceb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ceb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ceb >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6e8 >> 8),
                                                  (byte)uRam0000000100d23ceb ^ (byte)_UNK_10097d6e8)
                                                  ))))));
    bRam0000000100d243a3 = bRam0000000100d23cf3 ^ 0x7b;
    bRam0000000100d243a4 = bRam0000000100d23cf4 ^ 0xb3;
    bRam0000000100d243a5 = bRam0000000100d23cf5 ^ 0x45;
    bRam0000000100d243a6 = bRam0000000100d23cf6 ^ 0x14;
    bRam0000000100d243a7 = bRam0000000100d23cf7 ^ 0x7f;
    cRam0000000100d243a8 = bRam0000000100d23cf8 + (bRam0000000100d23cf8 & 0xf9) * -2 + 'y';
    bRam0000000100d243a9 = bRam0000000100d23cf9 ^ 0xc0;
    bRam0000000100d243aa = bRam0000000100d23cfa ^ 0xb1;
    bRam0000000100d243ab = ~((bRam0000000100d23cfb | 0x5d) & (bRam0000000100d23cfb ^ 0xff | 0xa2));
    bRam0000000100d243ac = bRam0000000100d23cfc ^ 0x21;
    bRam0000000100d243ad = bRam0000000100d23cfd ^ 0xd0;
    bRam0000000100d243ae = bRam0000000100d23cfe ^ 0x19;
    bRam0000000100d243af = bRam0000000100d23cff ^ 0xd3;
    bRam0000000100d243b0 = bRam0000000100d23d00 ^ 6;
    cRam0000000100d243b1 = bRam0000000100d23d01 + (bRam0000000100d23d01 & 0x1b) * -2 + -0x65;
    uRam0000000100d243b2 =
         CONCAT17((byte)((ulong)uRam0000000100d23d02 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d02 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d02 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d02 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d02 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d02 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d02 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da20 >> 8),
                                                  (byte)uRam0000000100d23d02 ^ (byte)_UNK_10097da20)
                                                  ))))));
    uRam0000000100d243ba =
         CONCAT17((byte)((ulong)uRam0000000100d23d0a >> 0x38) ^
                  (byte)((ulong)_UNK_10097da28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d0a >> 0x30) ^
                           (byte)((ulong)_UNK_10097da28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d0a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d0a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d0a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d0a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d0a >> 8) ^
                                                  (byte)((ulong)_UNK_10097da28 >> 8),
                                                  (byte)uRam0000000100d23d0a ^ (byte)_UNK_10097da28)
                                                  ))))));
    uRam0000000100d24330 =
         CONCAT17((byte)((ulong)uRam0000000100d23c80 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c80 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c80 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c80 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c80 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c80 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c80 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6c8 >> 8),
                                                  (byte)uRam0000000100d23c80 ^ (byte)_UNK_10097d6c8)
                                                  ))))));
    bRam0000000100d243c2 = bRam0000000100d23d12 ^ 0xe6;
    bRam0000000100d243c3 = bRam0000000100d23d13 ^ 100;
    cRam0000000100d243c4 = bRam0000000100d23d14 + (bRam0000000100d23d14 & 0x48) * -2 + -0x38;
    uRam0000000100d243c5 =
         CONCAT17((byte)((ulong)uRam0000000100d23d15 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d15 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d15 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d15 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d15 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d15 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d15 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6f0 >> 8),
                                                  (byte)uRam0000000100d23d15 ^ (byte)_UNK_10097d6f0)
                                                  ))))));
    bRam0000000100d243cd = ~((bRam0000000100d23d1d | 0xb) & (bRam0000000100d23d1d ^ 0xff | 0xf4));
    cRam0000000100d243ce = bRam0000000100d23d1e + (bRam0000000100d23d1e & 0x23) * -2 + '#';
    cRam0000000100d243cf = bRam0000000100d23d1f + (bRam0000000100d23d1f & 100) * -2 + 'd';
    bRam0000000100d243d0 = bRam0000000100d23d20 ^ 0x5f;
    bRam0000000100d243d1 = bRam0000000100d23d21 ^ 0xcb;
    bRam0000000100d243d2 = bRam0000000100d23d22 ^ 0x49;
    bRam0000000100d243d3 = bRam0000000100d23d23 ^ 0xa5;
    bRam0000000100d243d4 = bRam0000000100d23d24 ^ 0x71;
    cRam0000000100d243d5 = bRam0000000100d23d25 + (bRam0000000100d23d25 & 0x78) * -2 + 'x';
    uRam0000000100d243d6 =
         CONCAT17((byte)((ulong)uRam0000000100d23d26 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d26 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d26 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d26 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6f8 >> 8),
                                                  (byte)uRam0000000100d23d26 ^ (byte)_UNK_10097d6f8)
                                                  ))))));
    bRam0000000100d243de = bRam0000000100d23d2e ^ 0x86;
    bRam0000000100d243df = bRam0000000100d23d2f ^ 0x1e;
    bRam0000000100d243e0 = bRam0000000100d23d30 ^ 0x16;
    cRam0000000100d243e1 = bRam0000000100d23d31 + (bRam0000000100d23d31 & 0x1e) * -2 + '\x1e';
    bRam0000000100d243e2 = bRam0000000100d23d32 ^ 4;
    bRam0000000100d243e3 = bRam0000000100d23d33 ^ 0x1c;
    bRam0000000100d243e4 = bRam0000000100d23d34 ^ 0xb0;
    bRam0000000100d243e5 = bRam0000000100d23d35 ^ 0xb3;
    bRam0000000100d243e6 = bRam0000000100d23d36 ^ 0xb;
    bRam0000000100d243e7 = bRam0000000100d23d37 ^ 0xb0;
    cRam0000000100d243e8 = bRam0000000100d23d38 + (bRam0000000100d23d38 & 0x13) * -2 + '\x13';
    bRam0000000100d243e9 = bRam0000000100d23d39 ^ 0x58;
    bRam0000000100d243ea = bRam0000000100d23d3a ^ 0x50;
    bRam0000000100d243eb = bRam0000000100d23d3b ^ 0x5d;
    cRam0000000100d243ec = bRam0000000100d23d3c + (bRam0000000100d23d3c & 10) * -2 + -0x76;
    bRam0000000100d243ed = ~((bRam0000000100d23d3d | 0x9b) & (bRam0000000100d23d3d ^ 0xff | 100));
    bRam0000000100d243ee = bRam0000000100d23d3e ^ 0x6f;
    bRam0000000100d243ef = bRam0000000100d23d3f ^ 0x95;
    bRam0000000100d243f0 = bRam0000000100d23d40 ^ 0xf2;
    cRam0000000100d243f1 = bRam0000000100d23d41 + (bRam0000000100d23d41 & 0x20) * -2 + ' ';
    bRam0000000100d243f2 = bRam0000000100d23d42 ^ 0x3b;
    bRam0000000100d243f3 = bRam0000000100d23d43 ^ 0xb7;
    bRam0000000100d243f4 = ~((bRam0000000100d23d44 | 0xd7) & (bRam0000000100d23d44 ^ 0xff | 0x28));
    bRam0000000100d243f5 = bRam0000000100d23d45 ^ 0x59;
    cRam0000000100d243f6 = bRam0000000100d23d46 + (bRam0000000100d23d46 & 0x6a) * -2 + 'j';
    uRam0000000100d243f7 =
         CONCAT17((byte)((ulong)uRam0000000100d23d47 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d700 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d47 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d700 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d47 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d700 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d47 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d700 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d47 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d700 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d47 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d700 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d47 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d700 >> 8),
                                                  (byte)uRam0000000100d23d47 ^ (byte)_UNK_10097d700)
                                                  ))))));
    bRam0000000100d243ff = bRam0000000100d23d4f ^ 0x49;
    bRam0000000100d24400 = bRam0000000100d23d50 ^ 0xa3;
    bRam0000000100d24401 = bRam0000000100d23d51 ^ 0xdb;
    bRam0000000100d24402 = bRam0000000100d23d52 ^ 0x8f;
    bRam0000000100d24403 = bRam0000000100d23d53 ^ 0xad;
    cRam0000000100d24404 = bRam0000000100d23d54 + (bRam0000000100d23d54 & 0x56) * -2 + -0x2a;
    uRam0000000100d24405 =
         CONCAT17((byte)((ulong)uRam0000000100d23d55 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d708 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d55 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d708 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d55 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d708 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d55 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d708 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d55 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d708 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d55 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d708 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d55 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d708 >> 8),
                                                  (byte)uRam0000000100d23d55 ^ (byte)_UNK_10097d708)
                                                  ))))));
    bRam0000000100d2440d = bRam0000000100d23d5d ^ 0x19;
    bRam0000000100d2440e = bRam0000000100d23d5e ^ 0xd;
    bRam0000000100d2440f = bRam0000000100d23d5f ^ 0x82;
    bRam0000000100d24410 = bRam0000000100d23d60 ^ 0x43;
    cRam0000000100d24411 = bRam0000000100d23d61 + (bRam0000000100d23d61 & 0x78) * -2 + 'x';
    bRam0000000100d24412 = bRam0000000100d23d62 ^ 99;
    bRam0000000100d24413 = bRam0000000100d23d63 ^ 0xe7;
    cRam0000000100d24414 = bRam0000000100d23d64 + (bRam0000000100d23d64 & 0x6d) * -2 + -0x13;
    bRam0000000100d24415 = bRam0000000100d23d65 ^ 0x20;
    bRam0000000100d24416 = ~((bRam0000000100d23d66 | 0xde) & (bRam0000000100d23d66 ^ 0xff | 0x21));
    cRam0000000100d24417 = bRam0000000100d23d67 + (bRam0000000100d23d67 & 0xaa) * -2 + -0x56;
    bRam0000000100d24418 = bRam0000000100d23d68 ^ 0x1f;
    uRam0000000100d242ee =
         CONCAT17((byte)((ulong)uRam0000000100d23c3e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c3e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c3e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c3e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c3e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c3e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c3e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6c0 >> 8),
                                                  (byte)uRam0000000100d23c3e ^ (byte)_UNK_10097d6c0)
                                                  ))))));
    bRam0000000100d24419 = bRam0000000100d23d69 ^ 0xde;
    bRam0000000100d2441a = bRam0000000100d23d6a ^ 0xb0;
    bRam0000000100d2441b = bRam0000000100d23d6b ^ 9;
    bRam0000000100d2441c = bRam0000000100d23d6c ^ 0x2a;
    bRam0000000100d2441d = bRam0000000100d23d6d ^ 0xee;
    cRam0000000100d2441e = bRam0000000100d23d6e + (bRam0000000100d23d6e & 0xcf) * -2 + 'O';
    bRam0000000100d2441f = bRam0000000100d23d6f ^ 0x23;
    bRam0000000100d24420 = bRam0000000100d23d70 ^ 0x50;
    bRam0000000100d24421 = bRam0000000100d23d71 ^ 0xd4;
    bRam0000000100d24422 = bRam0000000100d23d72 ^ 0xf0;
    bRam0000000100d24423 = bRam0000000100d23d73 ^ 0x81;
    bRam0000000100d24424 = bRam0000000100d23d74 ^ 0x99;
    bRam0000000100d24425 = bRam0000000100d23d75 ^ 0x12;
    bRam0000000100d24426 = ~((bRam0000000100d23d76 | 0x55) & (~bRam0000000100d23d76 | 0xaa));
    bRam0000000100d24427 = bRam0000000100d23d77 ^ 0x21;
    bRam0000000100d24428 = bRam0000000100d23d78 ^ 3;
    bRam0000000100d24429 = bRam0000000100d23d79 ^ 0x19;
    cRam0000000100d2442a = bRam0000000100d23d7a + (bRam0000000100d23d7a & 0x1c) * -2 + -100;
    bRam0000000100d2442b = bRam0000000100d23d7b ^ 0xaf;
    cRam0000000100d2442c = bRam0000000100d23d7c + (bRam0000000100d23d7c & 0x50) * -2 + -0x30;
    cRam0000000100d2442d = bRam0000000100d23d7d + (bRam0000000100d23d7d & 3) * -2 + -0x7d;
    uRam0000000100d242d3 =
         CONCAT17((byte)((ulong)uRam0000000100d23c23 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c23 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c23 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c23 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c23 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c23 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c23 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6b8 >> 8),
                                                  (byte)uRam0000000100d23c23 ^ (byte)_UNK_10097d6b8)
                                                  ))))));
    bRam0000000100d2442e = bRam0000000100d23d7e ^ 0x14;
    bRam0000000100d2442f = bRam0000000100d23d7f ^ 0xf4;
    bRam0000000100d24430 = bRam0000000100d23d80 ^ 1;
    uRam0000000100d242c9 =
         CONCAT17((byte)((ulong)uRam0000000100d23c19 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c19 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c19 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c19 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c19 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c19 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c19 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6b0 >> 8),
                                                  (byte)uRam0000000100d23c19 ^ (byte)_UNK_10097d6b0)
                                                  ))))));
    bRam0000000100d24431 = bRam0000000100d23d81 ^ 0x4f;
    cRam0000000100d24432 = bRam0000000100d23d82 + (bRam0000000100d23d82 & 0x99) * -2 + '\x19';
    bRam0000000100d24433 = bRam0000000100d23d83 ^ 0x2e;
    bRam0000000100d24434 = bRam0000000100d23d84 ^ 0x2b;
    bRam0000000100d24435 = bRam0000000100d23d85 ^ 99;
    bRam0000000100d24436 = bRam0000000100d23d86 ^ 0xe9;
    cRam0000000100d24437 = bRam0000000100d23d87 + (bRam0000000100d23d87 & 0xfb) * -2 + -5;
    cRam0000000100d24438 = bRam0000000100d23d88 + (bRam0000000100d23d88 & 0x27) * -2 + '\'';
    cRam0000000100d24439 = bRam0000000100d23d89 + (bRam0000000100d23d89 & 0x48) * -2 + -0x38;
    uRam0000000100d2443a =
         CONCAT17((byte)((ulong)uRam0000000100d23d8a >> 0x38) ^
                  (byte)((ulong)_UNK_10097da30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d8a >> 0x30) ^
                           (byte)((ulong)_UNK_10097da30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d8a >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d8a >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d8a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d8a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d8a >> 8) ^
                                                  (byte)((ulong)_UNK_10097da30 >> 8),
                                                  (byte)uRam0000000100d23d8a ^ (byte)_UNK_10097da30)
                                                  ))))));
    uRam0000000100d24442 =
         CONCAT17((byte)((ulong)uRam0000000100d23d92 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d92 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d92 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d92 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d92 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d92 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d92 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da38 >> 8),
                                                  (byte)uRam0000000100d23d92 ^ (byte)_UNK_10097da38)
                                                  ))))));
    bRam0000000100d2444a = bRam0000000100d23d9a ^ 0x1e;
    cRam0000000100d2444b = bRam0000000100d23d9b + (bRam0000000100d23d9b & 0x55) * -2 + 'U';
    bRam0000000100d2444c = bRam0000000100d23d9c ^ 0xc3;
    bRam0000000100d2444d = bRam0000000100d23d9d ^ 0x11;
    uRam0000000100d242ac =
         CONCAT17((byte)((ulong)uRam0000000100d23bfc >> 0x38) ^
                  (byte)((ulong)_UNK_10097da10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23bfc >> 0x30) ^
                           (byte)((ulong)_UNK_10097da10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23bfc >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23bfc >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23bfc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23bfc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23bfc >> 8) ^
                                                  (byte)((ulong)_UNK_10097da10 >> 8),
                                                  (byte)uRam0000000100d23bfc ^ (byte)_UNK_10097da10)
                                                  ))))));
    uRam0000000100d242b4 =
         CONCAT17((byte)((ulong)uRam0000000100d23c04 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23c04 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23c04 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23c04 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23c04 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23c04 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23c04 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da18 >> 8),
                                                  (byte)uRam0000000100d23c04 ^ (byte)_UNK_10097da18)
                                                  ))))));
    cRam0000000100d2444e = bRam0000000100d23d9e + (bRam0000000100d23d9e & 0xee) * -2 + -0x12;
    uRam0000000100d2444f =
         CONCAT17((byte)((ulong)uRam0000000100d23d9f >> 0x38) ^
                  (byte)((ulong)_UNK_10097d710 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23d9f >> 0x30) ^
                           (byte)((ulong)_UNK_10097d710 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23d9f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d710 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23d9f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d710 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23d9f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d710 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23d9f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d710 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23d9f >> 8) ^
                                                  (byte)((ulong)_UNK_10097d710 >> 8),
                                                  (byte)uRam0000000100d23d9f ^ (byte)_UNK_10097d710)
                                                  ))))));
    bRam0000000100d24457 = bRam0000000100d23da7 ^ 0x7c;
    bRam0000000100d24458 = bRam0000000100d23da8 ^ 0xf3;
    bRam0000000100d24459 = bRam0000000100d23da9 ^ 0x91;
    bRam0000000100d2445a = bRam0000000100d23daa ^ 0x90;
    bRam0000000100d2445b = bRam0000000100d23dab ^ 0x4c;
    bRam0000000100d2445c = bRam0000000100d23dac ^ 0xc3;
    bRam0000000100d2445d = bRam0000000100d23dad ^ 0x19;
    cRam0000000100d2445e = bRam0000000100d23dae + (bRam0000000100d23dae & 0x6c) * -2 + -0x14;
    bRam0000000100d2445f = bRam0000000100d23daf ^ 0xde;
    bRam0000000100d24460 = bRam0000000100d23db0 ^ 0x6b;
    bRam0000000100d24461 = bRam0000000100d23db1 ^ 0x80;
    bRam0000000100d24462 = bRam0000000100d23db2 ^ 0x74;
    bRam0000000100d24463 = bRam0000000100d23db3 ^ 0x27;
    cRam0000000100d24464 = bRam0000000100d23db4 + (bRam0000000100d23db4 & 0xf3) * -2 + 's';
    bRam0000000100d24465 = bRam0000000100d23db5 ^ 0x12;
    bRam0000000100d24466 = bRam0000000100d23db6 ^ 0xc4;
    cRam0000000100d24467 = bRam0000000100d23db7 + (bRam0000000100d23db7 & 0x1a) * -2 + '\x1a';
    bRam0000000100d24468 = bRam0000000100d23db8 ^ 0x9a;
    bRam0000000100d24469 = bRam0000000100d23db9 ^ 0xe;
    bRam0000000100d2446a = bRam0000000100d23dba ^ 0x15;
    uRam0000000100d2428e =
         CONCAT17((byte)((ulong)uRam0000000100d23bde >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23bde >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23bde >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23bde >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23bde >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23bde >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23bde >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6a8 >> 8),
                                                  (byte)uRam0000000100d23bde ^ (byte)_UNK_10097d6a8)
                                                  ))))));
    cRam0000000100d2446b = bRam0000000100d23dbb + (bRam0000000100d23dbb & 0x39) * -2 + -0x47;
    bRam0000000100d2446c = bRam0000000100d23dbc ^ 0x87;
    bRam0000000100d2446d = bRam0000000100d23dbd ^ 0x55;
    bRam0000000100d2446e = bRam0000000100d23dbe ^ 8;
    bRam0000000100d2446f = bRam0000000100d23dbf ^ 0x1f;
    cRam0000000100d24470 = bRam0000000100d23dc0 + (bRam0000000100d23dc0 & 0x3f) * -2 + -0x41;
    bRam0000000100d24471 = bRam0000000100d23dc1 ^ 0xb6;
    bRam0000000100d24472 = bRam0000000100d23dc2 ^ 0x56;
    cRam0000000100d24473 = bRam0000000100d23dc3 + (bRam0000000100d23dc3 & 0x17) * -2 + '\x17';
    bRam0000000100d24474 = bRam0000000100d23dc4 ^ 0xf;
    uRam0000000100d2427e =
         CONCAT17((byte)((ulong)uRam0000000100d23bce >> 0x38) ^
                  (byte)((ulong)_UNK_10097d6a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23bce >> 0x30) ^
                           (byte)((ulong)_UNK_10097d6a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23bce >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d6a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23bce >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d6a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23bce >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d6a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23bce >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d6a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23bce >> 8) ^
                                                  (byte)((ulong)_UNK_10097d6a0 >> 8),
                                                  (byte)uRam0000000100d23bce ^ (byte)_UNK_10097d6a0)
                                                  ))))));
    bRam0000000100d24475 = bRam0000000100d23dc5 ^ 0x7f;
    bRam0000000100d24476 = bRam0000000100d23dc6 ^ 0xe5;
    bRam0000000100d24477 = bRam0000000100d23dc7 ^ 0xc3;
    bRam0000000100d24478 = bRam0000000100d23dc8 ^ 8;
    cRam0000000100d24479 = bRam0000000100d23dc9 + (bRam0000000100d23dc9 & 0x10) * -2 + -0x70;
    bRam0000000100d2447a = bRam0000000100d23dca ^ 0x5d;
    uRam0000000100d24271 =
         CONCAT17((byte)((ulong)uRam0000000100d23bc1 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d698 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23bc1 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d698 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23bc1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d698 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23bc1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d698 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23bc1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d698 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23bc1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d698 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23bc1 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d698 >> 8),
                                                  (byte)uRam0000000100d23bc1 ^ (byte)_UNK_10097d698)
                                                  ))))));
    cRam0000000100d2447b = bRam0000000100d23dcb + (bRam0000000100d23dcb & 0xf3) * -2 + -0xd;
    cRam0000000100d2447c = bRam0000000100d23dcc + (bRam0000000100d23dcc & 7) * -2 + '\a';
    bRam0000000100d2447d = bRam0000000100d23dcd ^ 0xe4;
    cRam0000000100d2447e = bRam0000000100d23dce + (bRam0000000100d23dce & 0x39) * -2 + -0x47;
    bRam0000000100d2447f = bRam0000000100d23dcf ^ 0xc1;
    bRam0000000100d24480 = bRam0000000100d23dd0 ^ 0x55;
    cRam0000000100d24481 = bRam0000000100d23dd1 + (bRam0000000100d23dd1 & 0x32) * -2 + '2';
    uRam0000000100d24482 =
         CONCAT17((byte)((ulong)uRam0000000100d23dd2 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d718 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23dd2 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d718 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23dd2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d718 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23dd2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d718 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23dd2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d718 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23dd2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d718 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23dd2 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d718 >> 8),
                                                  (byte)uRam0000000100d23dd2 ^ (byte)_UNK_10097d718)
                                                  ))))));
    bRam0000000100d2448a = bRam0000000100d23dda ^ 0xd2;
    bRam0000000100d2448b = bRam0000000100d23ddb ^ 0xf0;
    bRam0000000100d2448c = bRam0000000100d23ddc ^ 0x65;
    uRam0000000100d24260 =
         CONCAT17((byte)((ulong)uRam0000000100d23bb0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d690 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23bb0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d690 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23bb0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d690 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23bb0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d690 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23bb0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d690 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23bb0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d690 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23bb0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d690 >> 8),
                                                  (byte)uRam0000000100d23bb0 ^ (byte)_UNK_10097d690)
                                                  ))))));
    cRam0000000100d2448d = bRam0000000100d23ddd + (bRam0000000100d23ddd & 0x55) * -2 + -0x2b;
    bRam0000000100d2448e = bRam0000000100d23dde ^ 0xd;
    bRam0000000100d2448f = bRam0000000100d23ddf ^ 0x6c;
    bRam0000000100d24490 = bRam0000000100d23de0 ^ 0xf0;
    bRam0000000100d24491 = bRam0000000100d23de1 ^ 0xcb;
    cRam0000000100d24492 = bRam0000000100d23de2 + (bRam0000000100d23de2 & 0x3d) * -2 + -0x43;
    bRam0000000100d24493 = bRam0000000100d23de3 ^ 0xe9;
    cRam0000000100d24494 = bRam0000000100d23de4 + (bRam0000000100d23de4 & 0xfd) * -2 + -3;
    cRam0000000100d24495 = bRam0000000100d23de5 + (bRam0000000100d23de5 & 2) * -2 + -0x7e;
    uRam0000000100d2424f =
         CONCAT17((byte)((ulong)uRam0000000100d23b9f >> 0x38) ^
                  (byte)((ulong)_UNK_10097d688 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23b9f >> 0x30) ^
                           (byte)((ulong)_UNK_10097d688 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23b9f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d688 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23b9f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d688 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23b9f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d688 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23b9f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d688 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23b9f >> 8) ^
                                                  (byte)((ulong)_UNK_10097d688 >> 8),
                                                  (byte)uRam0000000100d23b9f ^ (byte)_UNK_10097d688)
                                                  ))))));
    cRam0000000100d24496 = bRam0000000100d23de6 + (bRam0000000100d23de6 & 0xbb) * -2 + ';';
    bRam0000000100d24497 = bRam0000000100d23de7 ^ 0x4e;
    bRam0000000100d24498 = bRam0000000100d23de8 ^ 0x2d;
    bRam0000000100d24499 = ~((bRam0000000100d23de9 | 0xa1) & (bRam0000000100d23de9 ^ 0xff | 0x5e));
    bRam0000000100d2449a = bRam0000000100d23dea ^ 0xeb;
    bRam0000000100d2449b = bRam0000000100d23deb ^ 0x94;
    bRam0000000100d2449c = bRam0000000100d23dec ^ 0xd0;
    uRam0000000100d24240 =
         CONCAT17((byte)((ulong)uRam0000000100d23b90 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d680 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23b90 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d680 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23b90 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d680 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23b90 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d680 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23b90 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d680 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23b90 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d680 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23b90 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d680 >> 8),
                                                  (byte)uRam0000000100d23b90 ^ (byte)_UNK_10097d680)
                                                  ))))));
    bRam0000000100d2449d = bRam0000000100d23ded ^ 0x5c;
    bRam0000000100d2449e = ~bRam0000000100d23dee;
    cRam0000000100d2449f = bRam0000000100d23def + (bRam0000000100d23def & 0x62) * -2 + 'b';
    cRam0000000100d244a8 = bRam0000000100d23df8 + (bRam0000000100d23df8 & 0x7c) * -2 + '|';
    bRam0000000100d244a9 = bRam0000000100d23df9 ^ 0x76;
    cRam0000000100d244aa = bRam0000000100d23dfa + (bRam0000000100d23dfa & 0xee) * -2 + -0x12;
    uRam0000000100d244ab =
         CONCAT17((byte)((ulong)uRam0000000100d23dfb >> 0x38) ^
                  (byte)((ulong)_UNK_10097da40 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23dfb >> 0x30) ^
                           (byte)((ulong)_UNK_10097da40 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23dfb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da40 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23dfb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da40 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23dfb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da40 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23dfb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da40 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23dfb >> 8) ^
                                                  (byte)((ulong)_UNK_10097da40 >> 8),
                                                  (byte)uRam0000000100d23dfb ^ (byte)_UNK_10097da40)
                                                  ))))));
    uRam0000000100d244b3 =
         CONCAT17((byte)((ulong)uRam0000000100d23e03 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e03 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e03 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e03 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e03 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e03 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e03 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da48 >> 8),
                                                  (byte)uRam0000000100d23e03 ^ (byte)_UNK_10097da48)
                                                  ))))));
    cRam0000000100d244bb = bRam0000000100d23e0b + (bRam0000000100d23e0b & 0xcf) * -2 + 'O';
    cRam0000000100d244bc = bRam0000000100d23e0c + (bRam0000000100d23e0c & 0x11) * -2 + -0x6f;
    bRam0000000100d244bd = bRam0000000100d23e0d ^ 0x23;
    bRam0000000100d244be = bRam0000000100d23e0e ^ 0xb4;
    bRam0000000100d244bf = bRam0000000100d23e0f ^ 0x6e;
    bRam0000000100d244c0 = bRam0000000100d23e10 ^ 0x7b;
    cRam0000000100d244c1 = bRam0000000100d23e11 + (bRam0000000100d23e11 & 0x50) * -2 + 'P';
    bRam0000000100d244c2 = bRam0000000100d23e12 ^ 0x2a;
    cRam0000000100d244c3 = bRam0000000100d23e13 + (bRam0000000100d23e13 & 0xb) * -2 + '\v';
    bRam0000000100d244c4 = bRam0000000100d23e14 ^ 0x6b;
    bRam0000000100d244c5 = ~((bRam0000000100d23e15 | 0x24) & (bRam0000000100d23e15 ^ 0xff | 0xdb));
    uRam0000000100d244c6 =
         CONCAT17((byte)((ulong)uRam0000000100d23e16 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d728 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e16 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d728 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e16 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d728 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e16 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d728 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e16 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d728 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e16 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d728 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e16 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d728 >> 8),
                                                  (byte)uRam0000000100d23e16 ^ (byte)_UNK_10097d728)
                                                  ))))));
    bRam0000000100d244ce = bRam0000000100d23e1e ^ 0x4f;
    bRam0000000100d244cf = bRam0000000100d23e1f ^ 0x20;
    cRam0000000100d244d0 = bRam0000000100d23e20 + (bRam0000000100d23e20 & 0x72) * -2 + -0xe;
    bRam0000000100d244d1 = bRam0000000100d23e21 ^ 0xc3;
    bRam0000000100d244d2 = bRam0000000100d23e22 ^ 0x32;
    cRam0000000100d244d3 = bRam0000000100d23e23 + (bRam0000000100d23e23 & 0x4a) * -2 + -0x36;
    cRam0000000100d244d4 = bRam0000000100d23e24 + (bRam0000000100d23e24 & 0x32) * -2 + '2';
    bRam0000000100d244d5 = bRam0000000100d23e25 ^ 0x10;
    bRam0000000100d244d6 = bRam0000000100d23e26 ^ 0x4c;
    cRam0000000100d244d7 = bRam0000000100d23e27 + (bRam0000000100d23e27 & 0x11) * -2 + '\x11';
    cRam0000000100d244d8 = bRam0000000100d23e28 + (bRam0000000100d23e28 & 100) * -2 + -0x1c;
    bRam0000000100d244d9 = bRam0000000100d23e29 ^ 0x15;
    bRam0000000100d244da = bRam0000000100d23e2a ^ 0x62;
    bRam0000000100d244db = bRam0000000100d23e2b ^ 0x5d;
    cRam0000000100d244dc = bRam0000000100d23e2c + (bRam0000000100d23e2c & 0x49) * -2 + -0x37;
    cRam0000000100d244dd = bRam0000000100d23e2d + (bRam0000000100d23e2d & 0x59) * -2 + 'Y';
    bRam0000000100d244de = bRam0000000100d23e2e ^ 0x89;
    uRam0000000100d23b58 =
         CONCAT17((byte)((ulong)uRam0000000100d23b48 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d678 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23b48 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d678 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23b48 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d678 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23b48 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d678 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23b48 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d678 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23b48 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d678 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23b48 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d678 >> 8),
                                                  (byte)uRam0000000100d23b48 ^ (byte)_UNK_10097d678)
                                                  ))))));
    bRam0000000100d244df = bRam0000000100d23e2f ^ 0xab;
    bRam0000000100d244e0 = bRam0000000100d23e30 ^ 0x8a;
    bRam0000000100d244e1 = bRam0000000100d23e31 ^ 0x3c;
    cRam0000000100d244e2 = bRam0000000100d23e32 + (bRam0000000100d23e32 & 0x35) * -2 + '5';
    uRam0000000100d244e3 =
         CONCAT17((byte)((ulong)uRam0000000100d23e33 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d730 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e33 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d730 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e33 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d730 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e33 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d730 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e33 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d730 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e33 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d730 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e33 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d730 >> 8),
                                                  (byte)uRam0000000100d23e33 ^ (byte)_UNK_10097d730)
                                                  ))))));
    bRam0000000100d244eb = bRam0000000100d23e3b ^ 0x8f;
    bRam0000000100d244ec = bRam0000000100d23e3c ^ 0x82;
    bRam0000000100d244ed = bRam0000000100d23e3d ^ 0x7b;
    bRam0000000100d244ee = bRam0000000100d23e3e ^ 0xf1;
    bRam0000000100d244ef = bRam0000000100d23e3f ^ 0xe3;
    cRam0000000100d244f0 = bRam0000000100d23e40 + (bRam0000000100d23e40 & 0x4d) * -2 + 'M';
    bRam0000000100d244f1 = bRam0000000100d23e41 ^ 0x69;
    bRam0000000100d244f2 = bRam0000000100d23e42 ^ 0x93;
    cRam0000000100d244f3 = bRam0000000100d23e43 + (bRam0000000100d23e43 & 0xc3) * -2 + 'C';
    cRam0000000100d244f4 = bRam0000000100d23e44 + (bRam0000000100d23e44 & 0x7a) * -2 + -6;
    bRam0000000100d244f5 = bRam0000000100d23e45 ^ 0xe5;
    cRam0000000100d244f6 = bRam0000000100d23e46 + (bRam0000000100d23e46 & 0x7a) * -2 + -6;
    bRam0000000100d244f7 = bRam0000000100d23e47 ^ 99;
    bRam0000000100d244f8 = bRam0000000100d23e48 ^ 0xcb;
    bRam0000000100d244f9 = bRam0000000100d23e49 ^ 0x54;
    bRam0000000100d244fa = bRam0000000100d23e4a ^ 0x2b;
    bRam0000000100d244fb = bRam0000000100d23e4b ^ 0xda;
    bRam0000000100d244fc = bRam0000000100d23e4c ^ 0xa2;
    cRam0000000100d244fd = bRam0000000100d23e4d + (bRam0000000100d23e4d & 0x4d) * -2 + -0x33;
    bRam0000000100d244fe = bRam0000000100d23e4e ^ 0x62;
    bRam0000000100d244ff = ~((bRam0000000100d23e4f | 0xb9) & (bRam0000000100d23e4f ^ 0xff | 0x46));
    bRam0000000100d24500 = bRam0000000100d23e50 ^ 0x88;
    bRam0000000100d24501 = bRam0000000100d23e51 ^ 0x87;
    bRam0000000100d24502 = bRam0000000100d23e52 ^ 0x66;
    bRam0000000100d24503 = bRam0000000100d23e53 ^ 0x4d;
    bRam0000000100d24504 = bRam0000000100d23e54 ^ 0xa1;
    cRam0000000100d24505 = bRam0000000100d23e55 + (bRam0000000100d23e55 & 0x38) * -2 + -0x48;
    bRam0000000100d24506 = ~((bRam0000000100d23e56 | 0x27) & (bRam0000000100d23e56 ^ 0xff | 0xd8));
    uRam0000000100d24507 =
         CONCAT17((byte)((ulong)uRam0000000100d23e57 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da50 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e57 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da50 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e57 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da50 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e57 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da50 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e57 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e57 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da50 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e57 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da50 >> 8),
                                                  (byte)uRam0000000100d23e57 ^ (byte)_UNK_10097da50)
                                                  ))))));
    uRam0000000100d2450f =
         CONCAT17((byte)((ulong)uRam0000000100d23e5f >> 0x38) ^
                  (byte)((ulong)_UNK_10097da58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e5f >> 0x30) ^
                           (byte)((ulong)_UNK_10097da58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e5f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e5f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e5f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e5f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e5f >> 8) ^
                                                  (byte)((ulong)_UNK_10097da58 >> 8),
                                                  (byte)uRam0000000100d23e5f ^ (byte)_UNK_10097da58)
                                                  ))))));
    bRam0000000100d24517 = bRam0000000100d23e67 ^ 0x8e;
    bRam0000000100d24518 = bRam0000000100d23e68 ^ 0x78;
    bRam0000000100d24519 = bRam0000000100d23e69 ^ 0xf3;
    bRam0000000100d2451a = bRam0000000100d23e6a ^ 0x5d;
    bRam0000000100d2451b = bRam0000000100d23e6b ^ 0xd3;
    bRam0000000100d2451c = bRam0000000100d23e6c ^ 0x4c;
    uRam0000000100d244a0 =
         CONCAT17((byte)((ulong)uRam0000000100d23df0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d720 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23df0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d720 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23df0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d720 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23df0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d720 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23df0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d720 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23df0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d720 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23df0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d720 >> 8),
                                                  (byte)uRam0000000100d23df0 ^ (byte)_UNK_10097d720)
                                                  ))))));
    cRam0000000100d2451d = bRam0000000100d23e6d + (bRam0000000100d23e6d & 0x22) * -2 + -0x5e;
    uRam0000000100d2451e =
         CONCAT17((byte)((ulong)uRam0000000100d23e6e >> 0x38) ^
                  (byte)((ulong)_UNK_10097d738 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e6e >> 0x30) ^
                           (byte)((ulong)_UNK_10097d738 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e6e >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d738 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e6e >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d738 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e6e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d738 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e6e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d738 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e6e >> 8) ^
                                                  (byte)((ulong)_UNK_10097d738 >> 8),
                                                  (byte)uRam0000000100d23e6e ^ (byte)_UNK_10097d738)
                                                  ))))));
    bRam0000000100d24526 = bRam0000000100d23e76 ^ 0xc4;
    bRam0000000100d24527 = bRam0000000100d23e77 ^ 0x62;
    bRam0000000100d24528 = bRam0000000100d23e78 ^ 0x9b;
    bRam0000000100d24529 = bRam0000000100d23e79 ^ 0x83;
    bRam0000000100d2452a = bRam0000000100d23e7a ^ 0xaa;
    cRam0000000100d2452b = bRam0000000100d23e7b + (bRam0000000100d23e7b & 0x74) * -2 + 't';
    bRam0000000100d2452c = bRam0000000100d23e7c ^ 0xc2;
    bRam0000000100d2452d = bRam0000000100d23e7d ^ 0xf8;
    cRam0000000100d2452e = bRam0000000100d23e7e + (bRam0000000100d23e7e & 0x32) * -2 + -0x4e;
    bRam0000000100d2452f = bRam0000000100d23e7f ^ 199;
    bRam0000000100d24530 = bRam0000000100d23e80 ^ 0xfa;
    bRam0000000100d24531 = bRam0000000100d23e81 ^ 0xc2;
    cRam0000000100d24532 = bRam0000000100d23e82 + (bRam0000000100d23e82 & 0x58) * -2 + 'X';
    uRam0000000100d24533 =
         CONCAT17((byte)((ulong)uRam0000000100d23e83 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d740 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23e83 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d740 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23e83 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d740 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23e83 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d740 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23e83 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d740 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23e83 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d740 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23e83 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d740 >> 8),
                                                  (byte)uRam0000000100d23e83 ^ (byte)_UNK_10097d740)
                                                  ))))));
    bRam0000000100d2453b = bRam0000000100d23e8b ^ 0x30;
    bRam0000000100d2453c = bRam0000000100d23e8c ^ 0x7a;
    bRam0000000100d2453d = bRam0000000100d23e8d ^ 0x41;
    bRam0000000100d2453e = bRam0000000100d23e8e ^ 0xdb;
    bRam0000000100d2453f = bRam0000000100d23e8f ^ 0xa5;
    bRam0000000100d24540 = bRam0000000100d23e90 ^ 0x25;
    cRam0000000100d24541 = bRam0000000100d23e91 + (bRam0000000100d23e91 & 0x69) * -2 + -0x17;
    bRam0000000100d24542 = bRam0000000100d23e92 ^ 0x7f;
    bRam0000000100d24543 = bRam0000000100d23e93 ^ 0xf4;
    bRam0000000100d24544 = bRam0000000100d23e94 ^ 0x33;
    bRam0000000100d24545 = bRam0000000100d23e95 ^ 0x52;
    bRam0000000100d24546 = bRam0000000100d23e96 ^ 0xf4;
    cRam0000000100d24547 = bRam0000000100d23e97 + (bRam0000000100d23e97 & 0xe) * -2 + -0x72;
    bRam0000000100d24548 = bRam0000000100d23e98 ^ 0x80;
    bRam0000000100d24549 = bRam0000000100d23e99 ^ 0x6b;
    bRam0000000100d2454a = bRam0000000100d23e9a ^ 0x9b;
    cRam0000000100d2454b = bRam0000000100d23e9b + (bRam0000000100d23e9b & 0x12) * -2 + -0x6e;
    bRam0000000100d2454c = bRam0000000100d23e9c ^ 0xf0;
    bRam0000000100d2454d = bRam0000000100d23e9d ^ 0xe5;
    cRam0000000100d2454e = bRam0000000100d23e9e + (bRam0000000100d23e9e & 0xbb) * -2 + ';';
    bRam0000000100d2454f = bRam0000000100d23e9f ^ 0x91;
    bRam0000000100d24550 = bRam0000000100d23ea0 ^ 0x16;
    bRam0000000100d24551 = bRam0000000100d23ea1 ^ 0xcf;
    bRam0000000100d24552 = bRam0000000100d23ea2 ^ 0xef;
    bRam0000000100d24553 = bRam0000000100d23ea3 ^ 0x60;
    bRam0000000100d24554 = bRam0000000100d23ea4 ^ 0xac;
    cRam0000000100d24555 = bRam0000000100d23ea5 + (bRam0000000100d23ea5 & 0x2b) * -2 + '+';
    uRam0000000100d24556 =
         CONCAT17((byte)((ulong)uRam0000000100d23ea6 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ea6 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ea6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ea6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ea6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ea6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ea6 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da60 >> 8),
                                                  (byte)uRam0000000100d23ea6 ^ (byte)_UNK_10097da60)
                                                  ))))));
    uRam0000000100d2455e =
         CONCAT17((byte)((ulong)uRam0000000100d23eae >> 0x38) ^
                  (byte)((ulong)_UNK_10097da68 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23eae >> 0x30) ^
                           (byte)((ulong)_UNK_10097da68 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23eae >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da68 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23eae >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da68 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23eae >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23eae >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da68 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23eae >> 8) ^
                                                  (byte)((ulong)_UNK_10097da68 >> 8),
                                                  (byte)uRam0000000100d23eae ^ (byte)_UNK_10097da68)
                                                  ))))));
    bRam0000000100d24566 = bRam0000000100d23eb6 ^ 0x38;
    bRam0000000100d24567 = bRam0000000100d23eb7 ^ 0x7e;
    bRam0000000100d24568 = bRam0000000100d23eb8 ^ 0x54;
    bRam0000000100d24569 = bRam0000000100d23eb9 ^ 0x43;
    cRam0000000100d2456a = bRam0000000100d23eba + (bRam0000000100d23eba & 0x53) * -2 + 'S';
    bRam0000000100d2456b = bRam0000000100d23ebb ^ 0x53;
    bRam0000000100d2456c = bRam0000000100d23ebc ^ 0xb2;
    cRam0000000100d2456d = bRam0000000100d23ebd + (bRam0000000100d23ebd & 0x18) * -2 + '\x18';
    uRam0000000100d2456e =
         CONCAT17((byte)((ulong)uRam0000000100d23ebe >> 0x38) ^
                  (byte)((ulong)_UNK_10097da70 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ebe >> 0x30) ^
                           (byte)((ulong)_UNK_10097da70 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ebe >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da70 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ebe >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da70 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ebe >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ebe >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da70 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ebe >> 8) ^
                                                  (byte)((ulong)_UNK_10097da70 >> 8),
                                                  (byte)uRam0000000100d23ebe ^ (byte)_UNK_10097da70)
                                                  ))))));
    uRam0000000100d24576 =
         CONCAT17((byte)((ulong)uRam0000000100d23ec6 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da78 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ec6 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da78 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ec6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da78 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ec6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da78 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ec6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da78 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ec6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da78 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ec6 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da78 >> 8),
                                                  (byte)uRam0000000100d23ec6 ^ (byte)_UNK_10097da78)
                                                  ))))));
    bRam0000000100d2457e = bRam0000000100d23ece ^ 0x65;
    cRam0000000100d2457f = '\x7f' - cRam0000000100d23ecf;
    bRam0000000100d24580 = bRam0000000100d23ed0 ^ 0x7c;
    cRam0000000100d24581 = bRam0000000100d23ed1 + (bRam0000000100d23ed1 & 0xc) * -2 + -0x74;
    cRam0000000100d24582 = bRam0000000100d23ed2 + (bRam0000000100d23ed2 & 0x6b) * -2 + -0x15;
    bRam0000000100d24583 = bRam0000000100d23ed3 ^ 0xf3;
    bRam0000000100d24584 = bRam0000000100d23ed4 ^ 0xa6;
    bRam0000000100d24585 = bRam0000000100d23ed5 ^ 0xa3;
    bRam0000000100d24586 = bRam0000000100d23ed6 ^ 0x2a;
    bRam0000000100d24587 = bRam0000000100d23ed7 ^ 0x8f;
    bRam0000000100d24588 = bRam0000000100d23ed8 ^ 0x66;
    bRam0000000100d24589 = bRam0000000100d23ed9 ^ 100;
    cRam0000000100d2458a = bRam0000000100d23eda + (bRam0000000100d23eda & 0x2b) * -2 + '+';
    uRam0000000100d2458b =
         CONCAT17((byte)((ulong)uRam0000000100d23edb >> 0x38) ^
                  (byte)((ulong)_UNK_10097d748 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23edb >> 0x30) ^
                           (byte)((ulong)_UNK_10097d748 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23edb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d748 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23edb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d748 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23edb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d748 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23edb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d748 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23edb >> 8) ^
                                                  (byte)((ulong)_UNK_10097d748 >> 8),
                                                  (byte)uRam0000000100d23edb ^ (byte)_UNK_10097d748)
                                                  ))))));
    bRam0000000100d24593 = bRam0000000100d23ee3 ^ 0x9f;
    cRam0000000100d24594 = bRam0000000100d23ee4 + (bRam0000000100d23ee4 & 0x5c) * -2 + -0x24;
    bRam0000000100d24595 = bRam0000000100d23ee5 ^ 0x78;
    bRam0000000100d24596 = bRam0000000100d23ee6 ^ 0x9b;
    bRam0000000100d24597 = bRam0000000100d23ee7 ^ 0xe7;
    cRam0000000100d24598 = bRam0000000100d23ee8 + (bRam0000000100d23ee8 & 7) * -2 + -0x79;
    uRam0000000100d24599 =
         CONCAT17((byte)((ulong)uRam0000000100d23ee9 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d750 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ee9 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d750 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ee9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d750 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ee9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d750 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ee9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d750 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ee9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d750 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ee9 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d750 >> 8),
                                                  (byte)uRam0000000100d23ee9 ^ (byte)_UNK_10097d750)
                                                  ))))));
    bRam0000000100d245a1 = bRam0000000100d23ef1 ^ 0x5f;
    bRam0000000100d245a2 = bRam0000000100d23ef2 ^ 0x3b;
    bRam0000000100d245a3 = bRam0000000100d23ef3 ^ 0x59;
    cRam0000000100d245a4 = bRam0000000100d23ef4 + (bRam0000000100d23ef4 & 0x4e) * -2 + -0x32;
    bRam0000000100d245a5 = bRam0000000100d23ef5 ^ 0x5e;
    bRam0000000100d245a6 = bRam0000000100d23ef6 ^ 8;
    bRam0000000100d245a7 = bRam0000000100d23ef7 ^ 0xe3;
    cRam0000000100d245a8 = bRam0000000100d23ef8 + (bRam0000000100d23ef8 & 0x1d) * -2 + '\x1d';
    bRam0000000100d245a9 = bRam0000000100d23ef9 ^ 0xa2;
    bRam0000000100d245aa = bRam0000000100d23efa ^ 0x6b;
    bRam0000000100d245ab = bRam0000000100d23efb ^ 0xc6;
    cRam0000000100d245ac = bRam0000000100d23efc + (bRam0000000100d23efc & 0x34) * -2 + '4';
    bRam0000000100d245ad = bRam0000000100d23efd ^ 0x8f;
    bRam0000000100d245ae = bRam0000000100d23efe ^ 0xde;
    bRam0000000100d245af = bRam0000000100d23eff ^ 0x8d;
    bRam0000000100d245b0 = bRam0000000100d23f00 ^ 0xc4;
    bRam0000000100d245b1 = bRam0000000100d23f01 ^ 0xd7;
    uRam0000000100d245b2 = uRam0000000100d23f02;
    uRam0000000100d245b3 =
         CONCAT17((byte)((ulong)uRam0000000100d23f03 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d538 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f03 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d538 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f03 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d538 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f03 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d538 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f03 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d538 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f03 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d538 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f03 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d538 >> 8),
                                                  (byte)uRam0000000100d23f03 ^ (byte)_UNK_10097d538)
                                                  ))))));
    bRam0000000100d245bb = bRam0000000100d23f0b ^ 0xa3;
    bRam0000000100d245bc = bRam0000000100d23f0c ^ 0x31;
    bRam0000000100d245bd = bRam0000000100d23f0d ^ 0x9c;
    bRam0000000100d245be = bRam0000000100d23f0e ^ 0x3e;
    cRam0000000100d245bf = bRam0000000100d23f0f + (bRam0000000100d23f0f & 0x1c) * -2 + -100;
    bRam0000000100d245c0 = bRam0000000100d23f10 ^ 0x83;
    bRam0000000100d245c1 = bRam0000000100d23f11 ^ 0xe;
    bRam0000000100d245c2 = bRam0000000100d23f12 ^ 0xdd;
    bRam0000000100d245c3 = bRam0000000100d23f13 ^ 0xcd;
    cRam0000000100d245c4 = bRam0000000100d23f14 + (bRam0000000100d23f14 & 10) * -2 + '\n';
    uRam0000000100d245c5 =
         CONCAT17((byte)((ulong)uRam0000000100d23f15 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d758 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f15 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d758 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f15 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d758 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f15 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d758 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f15 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d758 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f15 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d758 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f15 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d758 >> 8),
                                                  (byte)uRam0000000100d23f15 ^ (byte)_UNK_10097d758)
                                                  ))))));
    bRam0000000100d245cd = bRam0000000100d23f1d ^ 0x61;
    bRam0000000100d245ce = bRam0000000100d23f1e ^ 0x88;
    bRam0000000100d245cf = bRam0000000100d23f1f ^ 0x5e;
    bRam0000000100d245d0 = bRam0000000100d23f20 ^ 0x85;
    bRam0000000100d245d1 = bRam0000000100d23f21 ^ 0x3a;
    cRam0000000100d245d2 = bRam0000000100d23f22 + (bRam0000000100d23f22 & 0x29) * -2 + -0x57;
    bRam0000000100d245d3 = bRam0000000100d23f23 ^ 0x20;
    bRam0000000100d245d4 = bRam0000000100d23f24 ^ 0x12;
    bRam0000000100d245d5 = bRam0000000100d23f25 ^ 0xd9;
    bRam0000000100d245d6 = ~((bRam0000000100d23f26 | 0x87) & (~bRam0000000100d23f26 | 0x78));
    cRam0000000100d245d7 = bRam0000000100d23f27 + (bRam0000000100d23f27 & 0x65) * -2 + -0x1b;
    bRam0000000100d245d8 = bRam0000000100d23f28 ^ 0x70;
    cRam0000000100d245d9 = bRam0000000100d23f29 + (bRam0000000100d23f29 & 0x13) * -2 + -0x6d;
    bRam0000000100d245da = bRam0000000100d23f2a ^ 10;
    cRam0000000100d245db = bRam0000000100d23f2b + (bRam0000000100d23f2b & 0xe1) * -2 + -0x1f;
    bRam0000000100d245dc = bRam0000000100d23f2c ^ 0xf7;
    bRam0000000100d245dd = bRam0000000100d23f2d ^ 3;
    bRam0000000100d245de = bRam0000000100d23f2e ^ 0xcb;
    bRam0000000100d245df = bRam0000000100d23f2f ^ 0xe4;
    bRam0000000100d245e0 = bRam0000000100d23f30 ^ 0x69;
    bRam0000000100d245e1 = bRam0000000100d23f31 ^ 0xe0;
    cRam0000000100d245e2 = bRam0000000100d23f32 + (bRam0000000100d23f32 & 0x78) * -2 + 'x';
    bRam0000000100d245e3 = bRam0000000100d23f33 ^ 0x30;
    bRam0000000100d245e4 = bRam0000000100d23f34 ^ 0xad;
    bRam0000000100d245e5 = bRam0000000100d23f35 ^ 0x22;
    cRam0000000100d245e6 = bRam0000000100d23f36 + (bRam0000000100d23f36 & 0x23) * -2 + '#';
    cRam0000000100d245e7 = bRam0000000100d23f37 + (bRam0000000100d23f37 & 10) * -2 + '\n';
    bRam0000000100d245e8 = bRam0000000100d23f38 ^ 0x52;
    bRam0000000100d245e9 = bRam0000000100d23f39 ^ 0xe1;
    bRam0000000100d245ea = bRam0000000100d23f3a ^ 0xfc;
    cRam0000000100d245eb = bRam0000000100d23f3b + (bRam0000000100d23f3b & 0x2c) * -2 + ',';
    uRam0000000100d245ec =
         CONCAT17((byte)((ulong)uRam0000000100d23f3c >> 0x38) ^
                  (byte)((ulong)_UNK_10097da80 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f3c >> 0x30) ^
                           (byte)((ulong)_UNK_10097da80 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f3c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da80 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f3c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da80 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f3c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da80 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f3c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da80 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f3c >> 8) ^
                                                  (byte)((ulong)_UNK_10097da80 >> 8),
                                                  (byte)uRam0000000100d23f3c ^ (byte)_UNK_10097da80)
                                                  ))))));
    uRam0000000100d245f4 =
         CONCAT17((byte)((ulong)uRam0000000100d23f44 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da88 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f44 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da88 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f44 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da88 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f44 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da88 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f44 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da88 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f44 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da88 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f44 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da88 >> 8),
                                                  (byte)uRam0000000100d23f44 ^ (byte)_UNK_10097da88)
                                                  ))))));
    bRam0000000100d245fc = bRam0000000100d23f4c ^ 0xad;
    bRam0000000100d245fd = bRam0000000100d23f4d ^ 0x58;
    bRam0000000100d245fe = bRam0000000100d23f4e ^ 0xde;
    bRam0000000100d245ff = bRam0000000100d23f4f ^ 0x40;
    bRam0000000100d24600 = bRam0000000100d23f50 ^ 0x27;
    bRam0000000100d24601 = bRam0000000100d23f51 ^ 0xa2;
    cRam0000000100d24602 = bRam0000000100d23f52 + (bRam0000000100d23f52 & 0x56) * -2 + -0x2a;
    bRam0000000100d24603 = bRam0000000100d23f53 ^ 0xed;
    bRam0000000100d24604 = bRam0000000100d23f54 ^ 0x9a;
    bRam0000000100d24605 = bRam0000000100d23f55 ^ 0xf4;
    cRam0000000100d24606 = bRam0000000100d23f56 + (bRam0000000100d23f56 & 0x21) * -2 + '!';
    uRam0000000100d24607 =
         CONCAT17((byte)((ulong)uRam0000000100d23f57 >> 0x38) ^
                  (byte)((ulong)_UNK_10097da90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f57 >> 0x30) ^
                           (byte)((ulong)_UNK_10097da90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f57 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f57 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f57 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f57 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f57 >> 8) ^
                                                  (byte)((ulong)_UNK_10097da90 >> 8),
                                                  (byte)uRam0000000100d23f57 ^ (byte)_UNK_10097da90)
                                                  ))))));
    uRam0000000100d2460f =
         CONCAT17((byte)((ulong)uRam0000000100d23f5f >> 0x38) ^
                  (byte)((ulong)_UNK_10097da98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f5f >> 0x30) ^
                           (byte)((ulong)_UNK_10097da98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f5f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097da98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f5f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097da98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f5f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097da98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f5f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097da98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f5f >> 8) ^
                                                  (byte)((ulong)_UNK_10097da98 >> 8),
                                                  (byte)uRam0000000100d23f5f ^ (byte)_UNK_10097da98)
                                                  ))))));
    bRam0000000100d24617 = bRam0000000100d23f67 ^ 0xa0;
    bRam0000000100d24618 = bRam0000000100d23f68 ^ 0x5c;
    cRam0000000100d24619 = bRam0000000100d23f69 + (bRam0000000100d23f69 & 0xcc) * -2 + 'L';
    cRam0000000100d2461a = bRam0000000100d23f6a + (bRam0000000100d23f6a & 0x30) * -2 + '0';
    bRam0000000100d2461b = bRam0000000100d23f6b ^ 0xcc;
    bRam0000000100d2461c = bRam0000000100d23f6c ^ 0xcf;
    bRam0000000100d2461d = ~bRam0000000100d23f6d;
    bRam0000000100d2461e = bRam0000000100d23f6e ^ 0x49;
    cRam0000000100d2461f = bRam0000000100d23f6f + (bRam0000000100d23f6f & 0x33) * -2 + -0x4d;
    bRam0000000100d24620 = bRam0000000100d23f70 ^ 0x1a;
    cRam0000000100d24621 = '\x7f' - cRam0000000100d23f71;
    bRam0000000100d24622 = bRam0000000100d23f72 ^ 0xdb;
    bRam0000000100d24623 = bRam0000000100d23f73 ^ 0x22;
    bRam0000000100d24624 = bRam0000000100d23f74 ^ 0x8d;
    bRam0000000100d24625 = bRam0000000100d23f75 ^ 0xc3;
    bRam0000000100d24626 = bRam0000000100d23f76 ^ 0x15;
    bRam0000000100d24627 = bRam0000000100d23f77 ^ 0x3d;
    bRam0000000100d24628 = bRam0000000100d23f78 ^ 0x59;
    cRam0000000100d24629 = bRam0000000100d23f79 + (bRam0000000100d23f79 & 0xb) * -2 + '\v';
    bRam0000000100d2462a = bRam0000000100d23f7a ^ 0x7f;
    cRam0000000100d2462b = bRam0000000100d23f7b + (bRam0000000100d23f7b & 0x18) * -2 + '\x18';
    bRam0000000100d2462c = bRam0000000100d23f7c ^ 0x51;
    bRam0000000100d2462d = bRam0000000100d23f7d ^ 0x5e;
    bRam0000000100d2462e = bRam0000000100d23f7e ^ 0x82;
    bRam0000000100d2462f = bRam0000000100d23f7f ^ 0x31;
    bRam0000000100d24630 = bRam0000000100d23f80 ^ 0x6a;
    cRam0000000100d24631 = bRam0000000100d23f81 + (bRam0000000100d23f81 & 0x66) * -2 + 'f';
    uRam0000000100d24632 =
         CONCAT17((byte)((ulong)uRam0000000100d23f82 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d760 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f82 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d760 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f82 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d760 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f82 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d760 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f82 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d760 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f82 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d760 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f82 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d760 >> 8),
                                                  (byte)uRam0000000100d23f82 ^ (byte)_UNK_10097d760)
                                                  ))))));
    bRam0000000100d2463a = bRam0000000100d23f8a ^ 0x10;
    cRam0000000100d2463b = bRam0000000100d23f8b + (bRam0000000100d23f8b & 4) * -2 + '\x04';
    bRam0000000100d2463c = bRam0000000100d23f8c ^ 0xa2;
    bRam0000000100d2463d = bRam0000000100d23f8d ^ 0x38;
    bRam0000000100d2463e = bRam0000000100d23f8e ^ 0xb4;
    cRam0000000100d2463f = bRam0000000100d23f8f + (bRam0000000100d23f8f & 0xcf) * -2 + 'O';
    bRam0000000100d24640 = bRam0000000100d23f90 ^ 0xad;
    bRam0000000100d24641 = bRam0000000100d23f91 ^ 0xa9;
    bRam0000000100d24642 = bRam0000000100d23f92 ^ 0x66;
    cRam0000000100d24643 = bRam0000000100d23f93 + (bRam0000000100d23f93 & 0x36) * -2 + -0x4a;
    bRam0000000100d24644 = bRam0000000100d23f94 ^ 0x35;
    bRam0000000100d24645 = bRam0000000100d23f95 ^ 0x66;
    bRam0000000100d24646 = bRam0000000100d23f96 ^ 0xf3;
    cRam0000000100d24647 = bRam0000000100d23f97 + (bRam0000000100d23f97 & 0x39) * -2 + -0x47;
    cRam0000000100d24650 = bRam0000000100d23fa0 + (bRam0000000100d23fa0 & 7) * -2 + -0x79;
    cRam0000000100d24651 = bRam0000000100d23fa1 + (bRam0000000100d23fa1 & 0xaa) * -2 + -0x56;
    bRam0000000100d24652 = bRam0000000100d23fa2 ^ 0x2e;
    bRam0000000100d24653 = bRam0000000100d23fa3 ^ 0xba;
    bRam0000000100d24654 = bRam0000000100d23fa4 ^ 0x5b;
    bRam0000000100d24655 = bRam0000000100d23fa5 ^ 0x81;
    bRam0000000100d24656 = bRam0000000100d23fa6 ^ 0xc5;
    bRam0000000100d24657 = bRam0000000100d23fa7 ^ 0x9c;
    bRam0000000100d24658 = bRam0000000100d23fa8 ^ 0x9b;
    cRam0000000100d24659 = bRam0000000100d23fa9 + (bRam0000000100d23fa9 & 0x58) * -2 + 'X';
    uRam0000000100d2465a =
         CONCAT17((byte)((ulong)uRam0000000100d23faa >> 0x38) ^
                  (byte)((ulong)_UNK_10097d770 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23faa >> 0x30) ^
                           (byte)((ulong)_UNK_10097d770 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23faa >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d770 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23faa >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d770 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23faa >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d770 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23faa >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d770 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23faa >> 8) ^
                                                  (byte)((ulong)_UNK_10097d770 >> 8),
                                                  (byte)uRam0000000100d23faa ^ (byte)_UNK_10097d770)
                                                  ))))));
    bRam0000000100d24662 = bRam0000000100d23fb2 ^ 0xdc;
    bRam0000000100d24663 = bRam0000000100d23fb3 ^ 0x27;
    bRam0000000100d24664 = bRam0000000100d23fb4 ^ 0xc0;
    bRam0000000100d24665 = bRam0000000100d23fb5 ^ 0x41;
    bRam0000000100d24666 = bRam0000000100d23fb6 ^ 0xc5;
    bRam0000000100d24667 = bRam0000000100d23fb7 ^ 10;
    cRam0000000100d24668 = bRam0000000100d23fb8 + (bRam0000000100d23fb8 & 0x5c) * -2 + '\\';
    bRam0000000100d24669 = bRam0000000100d23fb9 ^ 0x10;
    bRam0000000100d2466a = bRam0000000100d23fba ^ 0x4c;
    cRam0000000100d2466b = bRam0000000100d23fbb + (bRam0000000100d23fbb & 0x45) * -2 + -0x3b;
    bRam0000000100d2466c = bRam0000000100d23fbc ^ 0xaa;
    bRam0000000100d2466d = bRam0000000100d23fbd ^ 0xd5;
    uRam0000000100d24648 =
         CONCAT17((byte)((ulong)uRam0000000100d23f98 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d768 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23f98 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d768 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23f98 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d768 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23f98 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d768 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23f98 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d768 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23f98 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d768 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23f98 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d768 >> 8),
                                                  (byte)uRam0000000100d23f98 ^ (byte)_UNK_10097d768)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    cRam0000000100d2466e = bRam0000000100d23fbe + (bRam0000000100d23fbe & 0x36) * -2 + '6';
    cRam0000000100d2466f = bRam0000000100d23fbf + (bRam0000000100d23fbf & 0x2f) * -2 + '/';
    bRam0000000100d24678 = bRam0000000100d23fc8 ^ 100;
    cRam0000000100d24679 = bRam0000000100d23fc9 + (bRam0000000100d23fc9 & 0x31) * -2 + -0x4f;
    bRam0000000100d2467a = bRam0000000100d23fca ^ 0x17;
    bRam0000000100d2467b = bRam0000000100d23fcb ^ 0x95;
    cRam0000000100d2467c = bRam0000000100d23fcc + (bRam0000000100d23fcc & 5) * -2 + '\x05';
    bRam0000000100d2467d = bRam0000000100d23fcd ^ 0x21;
    bRam0000000100d2467e = bRam0000000100d23fce ^ 0xce;
    cRam0000000100d2467f = bRam0000000100d23fcf + (bRam0000000100d23fcf & 0x31) * -2 + '1';
    bRam0000000100d24680 = bRam0000000100d23fd0 ^ 0x77;
    bRam0000000100d24681 = bRam0000000100d23fd1 ^ 0xf;
    bRam0000000100d24682 = bRam0000000100d23fd2 ^ 0x12;
    bRam0000000100d24683 = bRam0000000100d23fd3 ^ 0xf2;
    bRam0000000100d24684 = bRam0000000100d23fd4 ^ 0x65;
    bRam0000000100d24685 = bRam0000000100d23fd5 ^ 0x8e;
    bRam0000000100d24686 = ~((bRam0000000100d23fd6 | 0xf4) & (bRam0000000100d23fd6 ^ 0xff | 0xb));
    cRam0000000100d24687 = bRam0000000100d23fd7 + (bRam0000000100d23fd7 & 0x51) * -2 + 'Q';
    bRam0000000100d24688 = bRam0000000100d23fd8 ^ 0x1e;
    cRam0000000100d24689 = bRam0000000100d23fd9 + (bRam0000000100d23fd9 & 0x38) * -2 + '8';
    cRam0000000100d2468a = bRam0000000100d23fda + (bRam0000000100d23fda & 0x7c) * -2 + -4;
    bRam0000000100d2468b = bRam0000000100d23fdb ^ 0x79;
    bRam0000000100d2468c = bRam0000000100d23fdc ^ 0xc2;
    bRam0000000100d2468d = bRam0000000100d23fdd ^ 0x9f;
    bRam0000000100d2468e = bRam0000000100d23fde ^ 0x1c;
    bRam0000000100d2468f = bRam0000000100d23fdf ^ 0x88;
    bRam0000000100d24690 = bRam0000000100d23fe0 ^ 0xf3;
    bRam0000000100d24691 = bRam0000000100d23fe1 ^ 0x30;
    cRam0000000100d24692 = bRam0000000100d23fe2 + (bRam0000000100d23fe2 & 0x2b) * -2 + -0x55;
    bRam0000000100d24693 = bRam0000000100d23fe3 ^ 0x5c;
    bRam0000000100d24694 = bRam0000000100d23fe4 ^ 0xd3;
    bRam0000000100d24695 = bRam0000000100d23fe5 ^ 0x7f;
    bRam0000000100d24696 = bRam0000000100d23fe6 ^ 0x22;
    bRam0000000100d24697 = bRam0000000100d23fe7 ^ 0xb;
    bRam0000000100d24698 = ~((bRam0000000100d23fe8 | 0x43) & (bRam0000000100d23fe8 ^ 0xff | 0xbc));
    cRam0000000100d24699 = bRam0000000100d23fe9 + (bRam0000000100d23fe9 & 0x50) * -2 + -0x30;
    bRam0000000100d2469a = bRam0000000100d23fea ^ 8;
    bRam0000000100d2469b = bRam0000000100d23feb ^ 0xb3;
    bRam0000000100d2469c = bRam0000000100d23fec ^ 0x6f;
    bRam0000000100d2469d = bRam0000000100d23fed ^ 0x26;
    bRam0000000100d2469e = bRam0000000100d23fee ^ 0x89;
    cRam0000000100d2469f = bRam0000000100d23fef + (bRam0000000100d23fef & 0x78) * -2 + 'x';
    bRam0000000100d246a8 = bRam0000000100d23ff8 ^ 0xe9;
    bRam0000000100d246a9 = bRam0000000100d23ff9 ^ 0xda;
    bRam0000000100d246aa = bRam0000000100d23ffa ^ 0x61;
    bRam0000000100d246ab = bRam0000000100d23ffb ^ 0xaf;
    bRam0000000100d246ac = bRam0000000100d23ffc ^ 0x28;
    bRam0000000100d246ad = bRam0000000100d23ffd ^ 0x6a;
    cRam0000000100d246ae = bRam0000000100d23ffe + (bRam0000000100d23ffe & 0xe7) * -2 + -0x19;
    bRam0000000100d246af = bRam0000000100d23fff ^ 0x82;
    bRam0000000100d246b0 = bRam0000000100d24000 ^ 0xb;
    bRam0000000100d246b1 = bRam0000000100d24001 ^ 0x1b;
    bRam0000000100d246b2 = bRam0000000100d24002 ^ 0x2d;
    bRam0000000100d246b3 = bRam0000000100d24003 ^ 200;
    cRam0000000100d246b4 = bRam0000000100d24004 + (bRam0000000100d24004 & 0x49) * -2 + -0x37;
    bRam0000000100d246bd = bRam0000000100d2400d ^ 0x8a;
    bRam0000000100d246be = bRam0000000100d2400e ^ 2;
    bRam0000000100d246bf = bRam0000000100d2400f ^ 0xe1;
    bRam0000000100d246c0 = bRam0000000100d24010 ^ 0x75;
    cRam0000000100d246c1 = bRam0000000100d24011 + (bRam0000000100d24011 & 0xd) * -2 + -0x73;
    cRam0000000100d246ca = bRam0000000100d2401a + (bRam0000000100d2401a & 0x10) * -2 + '\x10';
    bRam0000000100d246cb = bRam0000000100d2401b ^ 9;
    cRam0000000100d246cc = bRam0000000100d2401c + (bRam0000000100d2401c & 0x52) * -2 + 'R';
    bRam0000000100d246cd = bRam0000000100d2401d ^ 0x93;
    bRam0000000100d246ce = bRam0000000100d2401e ^ 0x9b;
    bRam0000000100d246cf = bRam0000000100d2401f ^ 0x5f;
    bRam0000000100d246d0 = bRam0000000100d24020 ^ 0xd8;
    bRam0000000100d246d1 = bRam0000000100d24021 ^ 0x58;
    bRam0000000100d246d2 = bRam0000000100d24022 ^ 0xec;
    bRam0000000100d246d3 = ~((bRam0000000100d24023 | 0x68) & (bRam0000000100d24023 ^ 0xff | 0x97));
    bRam0000000100d246d4 = bRam0000000100d24024 ^ 99;
    bRam0000000100d246d5 = bRam0000000100d24025 ^ 0xab;
    cRam0000000100d246d6 = bRam0000000100d24026 + (bRam0000000100d24026 & 0x7e) * -2 + -2;
    cRam0000000100d246d7 = bRam0000000100d24027 + (bRam0000000100d24027 & 0x39) * -2 + -0x47;
    cRam0000000100d246d8 = bRam0000000100d24028 + (bRam0000000100d24028 & 0x5e) * -2 + -0x22;
    bRam0000000100d246d9 = bRam0000000100d24029 ^ 0x1c;
    bRam0000000100d246da = ~((bRam0000000100d2402a | 0x73) & (bRam0000000100d2402a ^ 0xff | 0x8c));
    bRam0000000100d246e3 = bRam0000000100d24033 ^ 0xf4;
    bRam0000000100d246e4 = bRam0000000100d24034 ^ 7;
    bRam0000000100d246e5 = bRam0000000100d24035 ^ 0xa5;
    cRam0000000100d246e6 = bRam0000000100d24036 + (bRam0000000100d24036 & 6) * -2 + '\x06';
    bRam0000000100d246e7 = bRam0000000100d24037 ^ 0xd4;
    bRam0000000100d246e8 = bRam0000000100d24038 ^ 0xb1;
    bRam0000000100d246e9 = bRam0000000100d24039 ^ 0x42;
    bRam0000000100d246ea = bRam0000000100d2403a ^ 0xa1;
    bRam0000000100d246eb = bRam0000000100d2403b ^ 0x94;
    bRam0000000100d246ec = bRam0000000100d2403c ^ 0x41;
    cRam0000000100d246ed = bRam0000000100d2403d + (bRam0000000100d2403d & 0x5a) * -2 + -0x26;
    bRam0000000100d246ee = bRam0000000100d2403e ^ 0xf;
    bRam0000000100d246ef = bRam0000000100d2403f ^ 0xdd;
    uRam0000000100d246f0 = uRam0000000100d24040;
    bRam0000000100d246f1 = bRam0000000100d24041 ^ 0xe1;
    cRam0000000100d246f2 = bRam0000000100d24042 + (bRam0000000100d24042 & 0x38) * -2 + '8';
    bRam0000000100d246f3 = bRam0000000100d24043 ^ 0x81;
    cRam0000000100d246f4 = bRam0000000100d24044 + (bRam0000000100d24044 & 0x49) * -2 + 'I';
    bRam0000000100d246f5 = bRam0000000100d24045 ^ 0x85;
    bRam0000000100d246f6 = bRam0000000100d24046 ^ 0x88;
    bRam0000000100d246f7 = bRam0000000100d24047 ^ 0xa9;
    cRam0000000100d246f8 = bRam0000000100d24048 + (bRam0000000100d24048 & 0x30) * -2 + '0';
    bRam0000000100d24701 = bRam0000000100d24051 ^ 0x9b;
    bRam0000000100d24702 = bRam0000000100d24052 ^ 8;
    cRam0000000100d24703 = bRam0000000100d24053 + (bRam0000000100d24053 & 0x99) * -2 + -0x67;
    bRam0000000100d24704 = bRam0000000100d24054 ^ 0x5d;
    bRam0000000100d24705 = bRam0000000100d24055 ^ 0x1a;
    bRam0000000100d24706 = bRam0000000100d24056 ^ 0xe;
    bRam0000000100d24707 = bRam0000000100d24057 ^ 0x8b;
    cRam0000000100d24708 = bRam0000000100d24058 + (bRam0000000100d24058 & 0x58) * -2 + 'X';
    bRam0000000100d24709 = bRam0000000100d24059 ^ 0x2b;
    bRam0000000100d2470a = bRam0000000100d2405a ^ 0xb6;
    uRam0000000100d2470b = uRam0000000100d2405b;
    bRam0000000100d2470c = bRam0000000100d2405c ^ 0x25;
    bRam0000000100d2470d = bRam0000000100d2405d ^ 0x44;
    bRam0000000100d2470e = bRam0000000100d2405e ^ 0x70;
    bRam0000000100d2470f = bRam0000000100d2405f ^ 0xee;
    cRam0000000100d24710 = bRam0000000100d24060 + (bRam0000000100d24060 & 0x56) * -2 + 'V';
    bRam0000000100d24711 = bRam0000000100d24061 ^ 0xdd;
    bRam0000000100d24712 = bRam0000000100d24062 ^ 0xcd;
    bRam0000000100d24713 = bRam0000000100d24063 ^ 0xbe;
    bRam0000000100d24714 = bRam0000000100d24064 ^ 0x80;
    bRam0000000100d24715 = ~((bRam0000000100d24065 | 0x8d) & (bRam0000000100d24065 ^ 0xff | 0x72));
    bRam0000000100d24716 = bRam0000000100d24066 ^ 0x5f;
    cRam0000000100d24717 = bRam0000000100d24067 + (bRam0000000100d24067 & 0xc1) * -2 + -0x3f;
    cRam0000000100d24718 = bRam0000000100d24068 + (bRam0000000100d24068 & 0xcc) * -2 + 'L';
    bRam0000000100d24719 = bRam0000000100d24069 ^ 0x20;
    bRam0000000100d2471a = bRam0000000100d2406a ^ 0x3c;
    cRam0000000100d2471b = bRam0000000100d2406b + (bRam0000000100d2406b & 0xaa) * -2 + '*';
    bRam0000000100d2471c = bRam0000000100d2406c ^ 0xfd;
    bRam0000000100d2471d = bRam0000000100d2406d ^ 0xfc;
    bRam0000000100d2471e = bRam0000000100d2406e ^ 0x5f;
    bRam0000000100d2471f = bRam0000000100d2406f ^ 0xc;
    bRam0000000100d24720 = bRam0000000100d24070 ^ 0x9e;
    bRam0000000100d24721 = bRam0000000100d24071 ^ 0xa9;
    cRam0000000100d24722 = bRam0000000100d24072 + (bRam0000000100d24072 & 0x3c) * -2 + -0x44;
    bRam0000000100d24723 = bRam0000000100d24073 ^ 0xf5;
    bRam0000000100d24724 = bRam0000000100d24074 ^ 0x72;
    bRam0000000100d24725 = bRam0000000100d24075 ^ 99;
    cRam0000000100d24726 = bRam0000000100d24076 + (bRam0000000100d24076 & 0x10) * -2 + '\x10';
    cRam0000000100d24737 = bRam0000000100d24087 + (bRam0000000100d24087 & 0xf7) * -2 + 'w';
    bRam0000000100d24738 = bRam0000000100d24088 ^ 0xf1;
    bRam0000000100d24739 = bRam0000000100d24089 ^ 0xed;
    bRam0000000100d2473a = bRam0000000100d2408a ^ 0x2c;
    bRam0000000100d2473b = bRam0000000100d2408b ^ 99;
    bRam0000000100d2473c = bRam0000000100d2408c ^ 0x25;
    bRam0000000100d2473d = bRam0000000100d2408d ^ 0x38;
    cRam0000000100d2473e = bRam0000000100d2408e + (bRam0000000100d2408e & 0x70) * -2 + 'p';
    bRam0000000100d2473f = bRam0000000100d2408f ^ 0xe7;
    bRam0000000100d24740 = bRam0000000100d24090 ^ 0xfc;
    bRam0000000100d24741 = bRam0000000100d24091 ^ 0x2a;
    cRam0000000100d24742 = bRam0000000100d24092 + (bRam0000000100d24092 & 0xf9) * -2 + -7;
    bRam0000000100d24743 = bRam0000000100d24093 ^ 0x90;
    cRam0000000100d24744 = bRam0000000100d24094 + (bRam0000000100d24094 & 6) * -2 + -0x7a;
    cRam0000000100d24745 = bRam0000000100d24095 + (bRam0000000100d24095 & 0x5b) * -2 + -0x25;
    cRam0000000100d2474e = bRam0000000100d2409e + (bRam0000000100d2409e & 0x2d) * -2 + -0x53;
    bRam0000000100d2474f = bRam0000000100d2409f ^ 0x66;
    bRam0000000100d24750 = bRam0000000100d240a0 ^ 0x6f;
    bRam0000000100d24751 = bRam0000000100d240a1 ^ 0x39;
    bRam0000000100d24752 = ~((bRam0000000100d240a2 | 0x22) & (~bRam0000000100d240a2 | 0xdd));
    cRam0000000100d24753 = bRam0000000100d240a3 + (bRam0000000100d240a3 & 0x17) * -2 + -0x69;
    bRam0000000100d24754 = bRam0000000100d240a4 ^ 0xe5;
    bRam0000000100d24755 = bRam0000000100d240a5 ^ 0x85;
    bRam0000000100d24756 = bRam0000000100d240a6 ^ 0xab;
    bRam0000000100d24757 = bRam0000000100d240a7 ^ 0x28;
    bRam0000000100d24758 = bRam0000000100d240a8 ^ 0x80;
    bRam0000000100d24759 = bRam0000000100d240a9 ^ 0x25;
    bRam0000000100d2475a = bRam0000000100d240aa ^ 0x71;
    cRam0000000100d2475b = bRam0000000100d240ab + (bRam0000000100d240ab & 0x5c) * -2 + -0x24;
    bRam0000000100d2475c = bRam0000000100d240ac ^ 0xd7;
    bRam0000000100d2475d = bRam0000000100d240ad ^ 0x54;
    bRam0000000100d2475e = bRam0000000100d240ae ^ 199;
    bRam0000000100d2475f = bRam0000000100d240af ^ 0x6f;
    cRam0000000100d24760 = bRam0000000100d240b0 + (bRam0000000100d240b0 & 0x30) * -2 + -0x50;
    bRam0000000100d24761 = bRam0000000100d240b1 ^ 0xf7;
    bRam0000000100d24762 = bRam0000000100d240b2 ^ 0xee;
    bRam0000000100d24763 = bRam0000000100d240b3 ^ 0x38;
    bRam0000000100d24764 = bRam0000000100d240b4 ^ 0xa7;
    cRam0000000100d24765 = bRam0000000100d240b5 + (bRam0000000100d240b5 & 0x74) * -2 + -0xc;
    bRam0000000100d2476e = bRam0000000100d240be ^ 0x9c;
    bRam0000000100d2476f = bRam0000000100d240bf ^ 0xf6;
    cRam0000000100d24770 = '\x7f' - cRam0000000100d240c0;
    bRam0000000100d24771 = bRam0000000100d240c1 ^ 0x25;
    bRam0000000100d24772 = bRam0000000100d240c2 ^ 0xc0;
    bRam0000000100d24773 = bRam0000000100d240c3 ^ 0xb;
    bRam0000000100d24774 = bRam0000000100d240c4 ^ 0xfb;
    cRam0000000100d24775 = bRam0000000100d240c5 + (bRam0000000100d240c5 & 0xe) * -2 + '\x0e';
    cRam0000000100d24776 = bRam0000000100d240c6 + (bRam0000000100d240c6 & 0x72) * -2 + 'r';
    bRam0000000100d24777 = bRam0000000100d240c7 ^ 0x90;
    cRam0000000100d24778 = bRam0000000100d240c8 + (bRam0000000100d240c8 & 6) * -2 + -0x7a;
    bRam0000000100d24779 = bRam0000000100d240c9 ^ 0xa2;
    cRam0000000100d2477a = bRam0000000100d240ca + (bRam0000000100d240ca & 0x27) * -2 + -0x59;
    uRam0000000100d2477b =
         CONCAT17((byte)((ulong)uRam0000000100d240cb >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d240cb >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d240cb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d240cb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d240cb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d240cb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d240cb >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7b8 >> 8),
                                                  (byte)uRam0000000100d240cb ^ (byte)_UNK_10097d7b8)
                                                  ))))));
    bRam0000000100d24783 = bRam0000000100d240d3 ^ 0xfe;
    bRam0000000100d24784 = bRam0000000100d240d4 ^ 0x60;
    bRam0000000100d24785 = bRam0000000100d240d5 ^ 0xfc;
    bRam0000000100d24786 = bRam0000000100d240d6 ^ 0x87;
    bRam0000000100d24787 = bRam0000000100d240d7 ^ 0xf7;
    bRam0000000100d24788 = bRam0000000100d240d8 ^ 0xd4;
    bRam0000000100d24789 = bRam0000000100d240d9 ^ 0x40;
    cRam0000000100d2478a = bRam0000000100d240da + (bRam0000000100d240da & 0x7c) * -2 + '|';
    bRam0000000100d2478b = bRam0000000100d240db ^ 0xc;
    bRam0000000100d2478c = bRam0000000100d240dc ^ 0xf3;
    bRam0000000100d2478d = bRam0000000100d240dd ^ 0xf3;
    cRam0000000100d2478e = bRam0000000100d240de + (bRam0000000100d240de & 0xdf) * -2 + -0x21;
    bRam0000000100d2478f = bRam0000000100d240df ^ 0xad;
    bRam0000000100d24790 = bRam0000000100d240e0 ^ 0x6a;
    bRam0000000100d24791 = bRam0000000100d240e1 ^ 0x68;
    bRam0000000100d24792 = bRam0000000100d240e2 ^ 0xfe;
    bRam0000000100d24793 = bRam0000000100d240e3 ^ 0x33;
    cRam0000000100d24794 = bRam0000000100d240e4 + (bRam0000000100d240e4 & 3) * -2 + -0x7d;
    uRam0000000100d24795 =
         CONCAT17((byte)((ulong)uRam0000000100d240e5 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d240e5 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d240e5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d240e5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d240e5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d240e5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d240e5 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7c0 >> 8),
                                                  (byte)uRam0000000100d240e5 ^ (byte)_UNK_10097d7c0)
                                                  ))))));
    bRam0000000100d2479d = bRam0000000100d240ed ^ 0x62;
    bRam0000000100d2479e = bRam0000000100d240ee ^ 9;
    bRam0000000100d2479f = bRam0000000100d240ef ^ 0x76;
    bRam0000000100d247a0 = bRam0000000100d240f0 ^ 0xfc;
    cRam0000000100d247a1 = bRam0000000100d240f1 + (bRam0000000100d240f1 & 5) * -2 + '\x05';
    uRam0000000100d247a2 =
         CONCAT17((byte)((ulong)uRam0000000100d240f2 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d240f2 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d240f2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d240f2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d240f2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d240f2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d240f2 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7c8 >> 8),
                                                  (byte)uRam0000000100d240f2 ^ (byte)_UNK_10097d7c8)
                                                  ))))));
    bRam0000000100d247aa = bRam0000000100d240fa ^ 0x27;
    bRam0000000100d247ab = bRam0000000100d240fb ^ 0xf;
    cRam0000000100d247ac = bRam0000000100d240fc + (bRam0000000100d240fc & 0x57) * -2 + -0x29;
    bRam0000000100d247ad = bRam0000000100d240fd ^ 0x62;
    cRam0000000100d247ae = bRam0000000100d240fe + (bRam0000000100d240fe & 0x3e) * -2 + -0x42;
    cRam0000000100d247af = bRam0000000100d240ff + (bRam0000000100d240ff & 4) * -2 + -0x7c;
    bRam0000000100d247b0 = bRam0000000100d24100 ^ 0xed;
    bRam0000000100d247b1 = ~((bRam0000000100d24101 | 0x20) & (~bRam0000000100d24101 | 0xdf));
    bRam0000000100d247b2 = bRam0000000100d24102 ^ 0x48;
    cRam0000000100d247b3 = bRam0000000100d24103 + (bRam0000000100d24103 & 0x4e) * -2 + 'N';
    bRam0000000100d247b4 = bRam0000000100d24104 ^ 0x3a;
    bRam0000000100d247b5 = bRam0000000100d24105 ^ 0x88;
    bRam0000000100d247b6 = bRam0000000100d24106 ^ 0xd3;
    bRam0000000100d247b7 = bRam0000000100d24107 ^ 0xf7;
    cRam0000000100d247b8 = bRam0000000100d24108 + (bRam0000000100d24108 & 0x99) * -2 + -0x67;
    bRam0000000100d247b9 = bRam0000000100d24109 ^ 0x4c;
    bRam0000000100d247ba = bRam0000000100d2410a ^ 0x56;
    cRam0000000100d247bb = bRam0000000100d2410b + (bRam0000000100d2410b & 0x4b) * -2 + -0x35;
    cRam0000000100d247bc = bRam0000000100d2410c + (bRam0000000100d2410c & 0x10) * -2 + -0x70;
    bRam0000000100d247bd = bRam0000000100d2410d ^ 0x31;
    bRam0000000100d247be = bRam0000000100d2410e ^ 9;
    bRam0000000100d247bf = bRam0000000100d2410f ^ 0xca;
    cRam0000000100d247c0 = bRam0000000100d24110 + (bRam0000000100d24110 & 0xcc) * -2 + -0x34;
    bRam0000000100d247c1 = bRam0000000100d24111 ^ 0xf;
    cRam0000000100d247c2 = bRam0000000100d24112 + (bRam0000000100d24112 & 0x2f) * -2 + '/';
    bRam0000000100d247c3 = bRam0000000100d24113 ^ 0xe6;
    bRam0000000100d247c4 = bRam0000000100d24114 ^ 0x7d;
    bRam0000000100d247c5 = bRam0000000100d24115 ^ 0xc5;
    bRam0000000100d247c6 = bRam0000000100d24116 ^ 0x28;
    cRam0000000100d247c7 = bRam0000000100d24117 + (bRam0000000100d24117 & 0x14) * -2 + -0x6c;
    bRam0000000100d247c8 = bRam0000000100d24118 ^ 0x4c;
    bRam0000000100d247c9 = bRam0000000100d24119 ^ 0x61;
    bRam0000000100d247ca = bRam0000000100d2411a ^ 0x92;
    bRam0000000100d247cb = bRam0000000100d2411b ^ 0xb2;
    bRam0000000100d247cc = bRam0000000100d2411c ^ 0x18;
    bRam0000000100d247cd = bRam0000000100d2411d ^ 0x74;
    bRam0000000100d247ce = ~((bRam0000000100d2411e | 0xb3) & (bRam0000000100d2411e ^ 0xff | 0x4c));
    bRam0000000100d247cf = bRam0000000100d2411f ^ 0x8a;
    bRam0000000100d247d0 = bRam0000000100d24120 ^ 0x22;
    cRam0000000100d247d1 = bRam0000000100d24121 + (bRam0000000100d24121 & 0x2f) * -2 + '/';
    cRam0000000100d247d2 = bRam0000000100d24122 + (bRam0000000100d24122 & 0x69) * -2 + -0x17;
    bRam0000000100d247d3 = bRam0000000100d24123 ^ 0xee;
    bRam0000000100d247d4 = bRam0000000100d24124 ^ 0x95;
    bRam0000000100d247d5 = bRam0000000100d24125 ^ 0xb1;
    bRam0000000100d247d6 = bRam0000000100d24126 ^ 0x59;
    bRam0000000100d247d7 = bRam0000000100d24127 ^ 0xd7;
    cRam0000000100d247d8 = bRam0000000100d24128 + (bRam0000000100d24128 & 0x4b) * -2 + 'K';
    bRam0000000100d247d9 = bRam0000000100d24129 ^ 0x61;
    cRam0000000100d247da = bRam0000000100d2412a + (bRam0000000100d2412a & 0x14) * -2 + -0x6c;
    bRam0000000100d247db = bRam0000000100d2412b ^ 0xbe;
    bRam0000000100d247dc = bRam0000000100d2412c ^ 0xc4;
    bRam0000000100d247dd = bRam0000000100d2412d ^ 0xe0;
    cRam0000000100d247de = bRam0000000100d2412e + (bRam0000000100d2412e & 0x6a) * -2 + -0x16;
    bRam0000000100d247df = bRam0000000100d2412f ^ 0xf5;
    bRam0000000100d247e0 = bRam0000000100d24130 ^ 0x36;
    bRam0000000100d247e1 = bRam0000000100d24131 ^ 0xae;
    bRam0000000100d247e2 = bRam0000000100d24132 ^ 0xcd;
    bRam0000000100d247e3 = bRam0000000100d24133 ^ 0x7a;
    bRam0000000100d247e4 = bRam0000000100d24134 ^ 0x78;
    bRam0000000100d247e5 = bRam0000000100d24135 ^ 0xc0;
    cRam0000000100d247e6 = bRam0000000100d24136 + (bRam0000000100d24136 & 0x20) * -2 + ' ';
    bRam0000000100d247e7 = bRam0000000100d24137 ^ 0x55;
    bRam0000000100d247e8 = bRam0000000100d24138 ^ 0x5d;
    bRam0000000100d247e9 = bRam0000000100d24139 ^ 0xbc;
    cRam0000000100d247ea = bRam0000000100d2413a + (bRam0000000100d2413a & 0x38) * -2 + -0x48;
    cRam0000000100d247eb = bRam0000000100d2413b + (bRam0000000100d2413b & 0x46) * -2 + -0x3a;
    uRam0000000100d247ec =
         CONCAT17((byte)((ulong)uRam0000000100d2413c >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7d0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2413c >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7d0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2413c >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7d0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2413c >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7d0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2413c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7d0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2413c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7d0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2413c >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7d0 >> 8),
                                                  (byte)uRam0000000100d2413c ^ (byte)_UNK_10097d7d0)
                                                  ))))));
    bRam0000000100d247f4 = bRam0000000100d24144 ^ 0x2b;
    bRam0000000100d247f5 = bRam0000000100d24145 ^ 0xe7;
    cRam0000000100d247f6 = bRam0000000100d24146 + (bRam0000000100d24146 & 0x2c) * -2 + -0x54;
    bRam0000000100d247f7 = bRam0000000100d24147 ^ 0x9d;
    bRam0000000100d247f8 = bRam0000000100d24148 ^ 0x16;
    bRam0000000100d247f9 = bRam0000000100d24149 ^ 0xaf;
    bRam0000000100d247fa = bRam0000000100d2414a ^ 0xc1;
    bRam0000000100d247fb = bRam0000000100d2414b ^ 0xcb;
    uRam0000000100d24766 =
         CONCAT17((byte)((ulong)uRam0000000100d240b6 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d240b6 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d240b6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d240b6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d240b6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d240b6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d240b6 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7b0 >> 8),
                                                  (byte)uRam0000000100d240b6 ^ (byte)_UNK_10097d7b0)
                                                  ))))));
    cRam0000000100d247fc = bRam0000000100d2414c + (bRam0000000100d2414c & 0x21) * -2 + '!';
    bRam0000000100d247fd = bRam0000000100d2414d ^ 0x1d;
    bRam0000000100d247fe = ~((bRam0000000100d2414e | 0x8a) & (bRam0000000100d2414e ^ 0xff | 0x75));
    bRam0000000100d247ff = bRam0000000100d2414f ^ 0xea;
    bRam0000000100d24800 = bRam0000000100d24150 ^ 0x2f;
    bRam0000000100d24801 = bRam0000000100d24151 ^ 0x17;
    bRam0000000100d24802 = bRam0000000100d24152 ^ 0xc6;
    cRam0000000100d24803 = bRam0000000100d24153 + (bRam0000000100d24153 & 0x7c) * -2 + '|';
    bRam0000000100d24804 = ~((bRam0000000100d24154 | 0xc1) & (~bRam0000000100d24154 | 0x3e));
    bRam0000000100d24805 = bRam0000000100d24155 ^ 0x17;
    bRam0000000100d24806 = bRam0000000100d24156 ^ 0xed;
    bRam0000000100d24807 = bRam0000000100d24157 ^ 0xb0;
    bRam0000000100d24808 = bRam0000000100d24158 ^ 0xbb;
    bRam0000000100d24809 = bRam0000000100d24159 ^ 0x3d;
    cRam0000000100d2480a = bRam0000000100d2415a + (bRam0000000100d2415a & 0x1b) * -2 + -0x65;
    bRam0000000100d2480b = bRam0000000100d2415b ^ 0xbe;
    bRam0000000100d2480c = bRam0000000100d2415c ^ 0xbe;
    bRam0000000100d2480d = bRam0000000100d2415d ^ 0x57;
    bRam0000000100d2480e = bRam0000000100d2415e ^ 0xf6;
    cRam0000000100d2480f = bRam0000000100d2415f + (bRam0000000100d2415f & 5) * -2 + -0x7b;
    bRam0000000100d24810 = bRam0000000100d24160 ^ 0x17;
    bRam0000000100d24811 = bRam0000000100d24161 ^ 0x85;
    bRam0000000100d24812 = bRam0000000100d24162 ^ 0x91;
    bRam0000000100d24813 = bRam0000000100d24163 ^ 0xbc;
    bRam0000000100d24814 = bRam0000000100d24164 ^ 0xc5;
    uRam0000000100d24746 =
         CONCAT17((byte)((ulong)uRam0000000100d24096 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24096 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24096 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24096 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24096 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24096 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24096 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7a8 >> 8),
                                                  (byte)uRam0000000100d24096 ^ (byte)_UNK_10097d7a8)
                                                  ))))));
    cRam0000000100d24815 = bRam0000000100d24165 + (bRam0000000100d24165 & 6) * -2 + -0x7a;
    cRam0000000100d24816 = bRam0000000100d24166 + (bRam0000000100d24166 & 0x4d) * -2 + -0x33;
    bRam0000000100d24817 = bRam0000000100d24167 ^ 0x82;
    bRam0000000100d24818 = bRam0000000100d24168 ^ 0x56;
    cRam0000000100d24819 = bRam0000000100d24169 + (bRam0000000100d24169 & 0x33) * -2 + '3';
    bRam0000000100d2481a = bRam0000000100d2416a ^ 0xc2;
    bRam0000000100d2481b = bRam0000000100d2416b ^ 0xd2;
    cRam0000000100d2481c = bRam0000000100d2416c + (bRam0000000100d2416c & 0x38) * -2 + '8';
    uRam0000000100d2481d =
         CONCAT17((byte)((ulong)uRam0000000100d2416d >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2416d >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2416d >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2416d >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2416d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2416d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2416d >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7d8 >> 8),
                                                  (byte)uRam0000000100d2416d ^ (byte)_UNK_10097d7d8)
                                                  ))))));
    bRam0000000100d24825 = bRam0000000100d24175 ^ 0x9a;
    bRam0000000100d24826 = bRam0000000100d24176 ^ 0xb4;
    bRam0000000100d24827 = bRam0000000100d24177 ^ 0xbe;
    cRam0000000100d24828 = bRam0000000100d24178 + (bRam0000000100d24178 & 0x14) * -2 + '\x14';
    bRam0000000100d24829 = bRam0000000100d24179 ^ 0x15;
    bRam0000000100d2482a = bRam0000000100d2417a ^ 0x4b;
    cRam0000000100d2482b = bRam0000000100d2417b + (bRam0000000100d2417b & 0x17) * -2 + '\x17';
    uRam0000000100d24727 =
         CONCAT17((byte)((ulong)uRam0000000100d24077 >> 0x38) ^
                  (byte)((ulong)_UNK_10097daa0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24077 >> 0x30) ^
                           (byte)((ulong)_UNK_10097daa0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24077 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097daa0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24077 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097daa0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24077 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097daa0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24077 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097daa0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24077 >> 8) ^
                                                  (byte)((ulong)_UNK_10097daa0 >> 8),
                                                  (byte)uRam0000000100d24077 ^ (byte)_UNK_10097daa0)
                                                  ))))));
    uRam0000000100d2472f =
         CONCAT17((byte)((ulong)uRam0000000100d2407f >> 0x38) ^
                  (byte)((ulong)_UNK_10097daa8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2407f >> 0x30) ^
                           (byte)((ulong)_UNK_10097daa8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2407f >> 0x28) ^
                                    (byte)((ulong)_UNK_10097daa8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2407f >> 0x20) ^
                                             (byte)((ulong)_UNK_10097daa8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2407f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097daa8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2407f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097daa8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2407f >> 8) ^
                                                  (byte)((ulong)_UNK_10097daa8 >> 8),
                                                  (byte)uRam0000000100d2407f ^ (byte)_UNK_10097daa8)
                                                  ))))));
    bRam0000000100d2482c = bRam0000000100d2417c ^ 0x2e;
    cRam0000000100d2482d = bRam0000000100d2417d + (bRam0000000100d2417d & 0x30) * -2 + -0x50;
    bRam0000000100d2482e = bRam0000000100d2417e ^ 0x42;
    bRam0000000100d2482f = bRam0000000100d2417f ^ 0x85;
    bRam0000000100d24830 = bRam0000000100d24180 ^ 0x15;
    cRam0000000100d24831 = bRam0000000100d24181 + (bRam0000000100d24181 & 0xcf) * -2 + 'O';
    uRam0000000100d24832 =
         CONCAT17((byte)((ulong)uRam0000000100d24182 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24182 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24182 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24182 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24182 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24182 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24182 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7e0 >> 8),
                                                  (byte)uRam0000000100d24182 ^ (byte)_UNK_10097d7e0)
                                                  ))))));
    bRam0000000100d2483a = bRam0000000100d2418a ^ 0xfa;
    bRam0000000100d2483b = bRam0000000100d2418b ^ 0xf3;
    bRam0000000100d2483c = bRam0000000100d2418c ^ 0xb0;
    bRam0000000100d2483d = bRam0000000100d2418d ^ 0xd1;
    bRam0000000100d2483e = bRam0000000100d2418e ^ 0x29;
    bRam0000000100d2483f = bRam0000000100d2418f ^ 0x2b;
    cRam0000000100d24840 = bRam0000000100d24190 + (bRam0000000100d24190 & 0x59) * -2 + -0x27;
    bRam0000000100d24841 = bRam0000000100d24191 ^ 0x74;
    cRam0000000100d24842 = bRam0000000100d24192 + (bRam0000000100d24192 & 0xe1) * -2 + -0x1f;
    bRam0000000100d24843 = bRam0000000100d24193 ^ 0x32;
    bRam0000000100d24844 = bRam0000000100d24194 ^ 0xc;
    cRam0000000100d24845 = bRam0000000100d24195 + (bRam0000000100d24195 & 0x70) * -2 + -0x10;
    bRam0000000100d24846 = bRam0000000100d24196 ^ 0x6c;
    bRam0000000100d24847 = bRam0000000100d24197 ^ 0x2c;
    bRam0000000100d24848 = bRam0000000100d24198 ^ 0xa2;
    bRam0000000100d24849 = bRam0000000100d24199 ^ 0xd3;
    cRam0000000100d2484a = bRam0000000100d2419a + (bRam0000000100d2419a & 0x40) * '\x02' + '@';
    uRam0000000100d2484b =
         CONCAT17((byte)((ulong)uRam0000000100d2419b >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2419b >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2419b >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2419b >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2419b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2419b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2419b >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7e8 >> 8),
                                                  (byte)uRam0000000100d2419b ^ (byte)_UNK_10097d7e8)
                                                  ))))));
    cRam0000000100d24853 = bRam0000000100d241a3 + (bRam0000000100d241a3 & 0x5a) * -2 + -0x26;
    bRam0000000100d24854 = bRam0000000100d241a4 ^ 0xa5;
    bRam0000000100d24855 = bRam0000000100d241a5 ^ 0x7e;
    bRam0000000100d24856 = bRam0000000100d241a6 ^ 0x1c;
    cRam0000000100d24857 = bRam0000000100d241a7 + (bRam0000000100d241a7 & 0x38) * -2 + '8';
    bRam0000000100d24858 = bRam0000000100d241a8 ^ 0x14;
    bRam0000000100d24859 = bRam0000000100d241a9 ^ 0x6b;
    cRam0000000100d2485a = bRam0000000100d241aa + (bRam0000000100d241aa & 0x5c) * -2 + -0x24;
    uRam0000000100d2485b =
         CONCAT17((byte)((ulong)uRam0000000100d241ab >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d241ab >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d241ab >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d241ab >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d241ab >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d241ab >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d241ab >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7f0 >> 8),
                                                  (byte)uRam0000000100d241ab ^ (byte)_UNK_10097d7f0)
                                                  ))))));
    bRam0000000100d24863 = bRam0000000100d241b3 ^ 0x96;
    bRam0000000100d24864 = bRam0000000100d241b4 ^ 0x23;
    bRam0000000100d24865 = bRam0000000100d241b5 ^ 0x95;
    cRam0000000100d24866 = bRam0000000100d241b6 + (bRam0000000100d241b6 & 0xaa) * -2 + -0x56;
    bRam0000000100d24867 = bRam0000000100d241b7 ^ 0xb6;
    bRam0000000100d24868 = bRam0000000100d241b8 ^ 0x48;
    uRam0000000100d246f9 =
         CONCAT17((byte)((ulong)uRam0000000100d24049 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24049 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24049 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24049 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24049 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24049 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24049 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7a0 >> 8),
                                                  (byte)uRam0000000100d24049 ^ (byte)_UNK_10097d7a0)
                                                  ))))));
    bRam0000000100d24869 = bRam0000000100d241b9 ^ 0x34;
    bRam0000000100d2486a = bRam0000000100d241ba ^ 0x67;
    bRam0000000100d2486b = bRam0000000100d241bb ^ 0xba;
    cRam0000000100d2486c = bRam0000000100d241bc + (bRam0000000100d241bc & 0x58) * -2 + -0x28;
    uRam0000000100d2486d =
         CONCAT17((byte)((ulong)uRam0000000100d241bd >> 0x38) ^
                  (byte)((ulong)_UNK_10097d7f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d241bd >> 0x30) ^
                           (byte)((ulong)_UNK_10097d7f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d241bd >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d7f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d241bd >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d7f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d241bd >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d7f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d241bd >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d7f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d241bd >> 8) ^
                                                  (byte)((ulong)_UNK_10097d7f8 >> 8),
                                                  (byte)uRam0000000100d241bd ^ (byte)_UNK_10097d7f8)
                                                  ))))));
    cRam0000000100d24875 = bRam0000000100d241c5 + (bRam0000000100d241c5 & 0xbb) * -2 + -0x45;
    cRam0000000100d24876 = bRam0000000100d241c6 + (bRam0000000100d241c6 & 0x1d) * -2 + -99;
    bRam0000000100d24877 = bRam0000000100d241c7 ^ 0x3b;
    bRam0000000100d24878 = bRam0000000100d241c8 ^ 0xf3;
    cRam0000000100d24879 = bRam0000000100d241c9 + (bRam0000000100d241c9 & 0x76) * -2 + 'v';
    bRam0000000100d2487a = bRam0000000100d241ca ^ 0xfa;
    bRam0000000100d2487b = bRam0000000100d241cb ^ 0x1c;
    cRam0000000100d2487c = bRam0000000100d241cc + (bRam0000000100d241cc & 0x27) * -2 + '\'';
    bRam0000000100d2487d = bRam0000000100d241cd ^ 5;
    bRam0000000100d2487e = bRam0000000100d241ce ^ 0xb5;
    bRam0000000100d2487f = bRam0000000100d241cf ^ 0xdd;
    bRam0000000100d24880 = bRam0000000100d241d0 ^ 0x43;
    bRam0000000100d24881 = bRam0000000100d241d1 ^ 0xef;
    bRam0000000100d24882 = bRam0000000100d241d2 ^ 0x68;
    cRam0000000100d24883 = bRam0000000100d241d3 + (bRam0000000100d241d3 & 0x39) * -2 + -0x47;
    uRam0000000100d24884 =
         CONCAT17((byte)((ulong)uRam0000000100d241d4 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d800 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d241d4 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d800 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d241d4 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d800 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d241d4 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d800 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d241d4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d800 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d241d4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d800 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d241d4 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d800 >> 8),
                                                  (byte)uRam0000000100d241d4 ^ (byte)_UNK_10097d800)
                                                  ))))));
    uRam0000000100d246db =
         CONCAT17((byte)((ulong)uRam0000000100d2402b >> 0x38) ^
                  (byte)((ulong)_UNK_10097d798 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d2402b >> 0x30) ^
                           (byte)((ulong)_UNK_10097d798 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d2402b >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d798 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d2402b >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d798 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d2402b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d798 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d2402b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d798 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d2402b >> 8) ^
                                                  (byte)((ulong)_UNK_10097d798 >> 8),
                                                  (byte)uRam0000000100d2402b ^ (byte)_UNK_10097d798)
                                                  ))))));
    cRam0000000100d2488c = bRam0000000100d241dc + (bRam0000000100d241dc & 9) * -2 + -0x77;
    bRam0000000100d2488d = bRam0000000100d241dd ^ 0x9a;
    bRam0000000100d2488e = ~((bRam0000000100d241de | 0xa3) & (bRam0000000100d241de ^ 0xff | 0x5c));
    bRam0000000100d2488f = bRam0000000100d241df ^ 0x8e;
    bRam0000000100d24890 = bRam0000000100d241e0 ^ 0x88;
    bRam0000000100d24891 = bRam0000000100d241e1 ^ 0xf9;
    cRam0000000100d24892 = bRam0000000100d241e2 + (bRam0000000100d241e2 & 0x1f) * -2 + '\x1f';
    bRam0000000100d24893 = bRam0000000100d241e3 ^ 0xc;
    bRam0000000100d24894 = bRam0000000100d241e4 ^ 0xac;
    bRam0000000100d24895 = bRam0000000100d241e5 ^ 0x68;
    cRam0000000100d24896 = bRam0000000100d241e6 + (bRam0000000100d241e6 & 0x66) * -2 + 'f';
    bRam0000000100d2489f = bRam0000000100d241ef ^ 0x9e;
    cRam0000000100d248a0 = bRam0000000100d241f0 + (bRam0000000100d241f0 & 0xdd) * -2 + ']';
    cRam0000000100d248a1 = bRam0000000100d241f1 + (bRam0000000100d241f1 & 4) * -2 + -0x7c;
    cRam0000000100d248a2 = bRam0000000100d241f2 + (bRam0000000100d241f2 & 0xf7) * -2 + -9;
    bRam0000000100d248a3 = bRam0000000100d241f3 ^ 0x92;
    cRam0000000100d248a4 = bRam0000000100d241f4 + (bRam0000000100d241f4 & 10) * -2 + -0x76;
    bRam0000000100d248a5 = bRam0000000100d241f5 ^ 0x16;
    uRam0000000100d246c2 =
         CONCAT17((byte)((ulong)uRam0000000100d24012 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d790 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24012 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d790 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24012 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d790 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24012 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d790 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24012 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d790 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24012 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d790 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24012 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d790 >> 8),
                                                  (byte)uRam0000000100d24012 ^ (byte)_UNK_10097d790)
                                                  ))))));
    bRam0000000100d248a6 = bRam0000000100d241f6 ^ 0xf;
    bRam0000000100d248a7 = bRam0000000100d241f7 ^ 0xbe;
    bRam0000000100d248a8 = bRam0000000100d241f8 ^ 0x13;
    bRam0000000100d248a9 = bRam0000000100d241f9 ^ 0xed;
    cRam0000000100d248aa = bRam0000000100d241fa + (bRam0000000100d241fa & 6) * -2 + -0x7a;
    uRam0000000100d246b5 =
         CONCAT17((byte)((ulong)uRam0000000100d24005 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d788 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d24005 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d788 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d24005 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d788 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d24005 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d788 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d24005 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d788 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d24005 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d788 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d24005 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d788 >> 8),
                                                  (byte)uRam0000000100d24005 ^ (byte)_UNK_10097d788)
                                                  ))))));
    cRam0000000100d248ab = bRam0000000100d241fb + (bRam0000000100d241fb & 0x69) * -2 + -0x17;
    bRam0000000100d248ac = bRam0000000100d241fc ^ 10;
    bRam0000000100d248ad = bRam0000000100d241fd ^ 0x4f;
    cRam0000000100d248ae = bRam0000000100d241fe + (bRam0000000100d241fe & 0x16) * -2 + '\x16';
    bRam0000000100d248af = bRam0000000100d241ff ^ 0x3c;
    bRam0000000100d248b0 = bRam0000000100d24200 ^ 0xf8;
    bRam0000000100d248b1 = bRam0000000100d24201 ^ 0xcc;
    cRam0000000100d248b2 = bRam0000000100d24202 + (bRam0000000100d24202 & 0x21) * -2 + '!';
    bRam0000000100d248b3 = bRam0000000100d24203 ^ 0x8f;
    bRam0000000100d248b4 = bRam0000000100d24204 ^ 0xaf;
    bRam0000000100d248b5 = bRam0000000100d24205 ^ 2;
    bRam0000000100d248b6 = bRam0000000100d24206 ^ 0xa1;
    bRam0000000100d248b7 = bRam0000000100d24207 ^ 0x68;
    bRam0000000100d248b8 = bRam0000000100d24208 ^ 0x90;
    cRam0000000100d248b9 = bRam0000000100d24209 + (bRam0000000100d24209 & 0x13) * -2 + '\x13';
    uRam0000000100d246a0 =
         CONCAT17((byte)((ulong)uRam0000000100d23ff0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d780 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23ff0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d780 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23ff0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d780 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23ff0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d780 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23ff0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d780 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23ff0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d780 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23ff0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d780 >> 8),
                                                  (byte)uRam0000000100d23ff0 ^ (byte)_UNK_10097d780)
                                                  ))))));
    bRam0000000100d248ba = bRam0000000100d2420a ^ 0x9a;
    bRam0000000100d248bb = bRam0000000100d2420b ^ 0x54;
    bRam0000000100d248bc = bRam0000000100d2420c ^ 0xb7;
    bRam0000000100d248bd = bRam0000000100d2420d ^ 0x74;
    bRam0000000100d248be = bRam0000000100d2420e ^ 0x16;
    cRam0000000100d248bf = bRam0000000100d2420f + (bRam0000000100d2420f & 0x3a) * -2 + -0x46;
    bRam0000000100d248c0 = bRam0000000100d24210 ^ 0x8b;
    bRam0000000100d248c1 = bRam0000000100d24211 ^ 0xbc;
    bRam0000000100d248c2 = bRam0000000100d24212 ^ 0xee;
    cRam0000000100d248c3 = bRam0000000100d24213 + (bRam0000000100d24213 & 0x68) * -2 + 'h';
    bRam0000000100d248c4 = bRam0000000100d24214 ^ 0x4a;
    bRam0000000100d248c5 = bRam0000000100d24215 ^ 0xf5;
    bRam0000000100d248e6 = bRam0000000100d248e1 ^ 0x6d;
    bRam0000000100d248e7 = bRam0000000100d248e2 ^ 0xe6;
    cRam0000000100d248e8 = bRam0000000100d248e3 + (bRam0000000100d248e3 & 0x4d) * -2 + -0x33;
    bRam0000000100d248e9 = bRam0000000100d248e4 ^ 0xea;
    bRam0000000100d248ea = bRam0000000100d248e5 ^ 0x7b;
    bRam0000000100d24910 = bRam0000000100d248f0 ^ 0x9e;
    bRam0000000100d24911 = bRam0000000100d248f1 ^ 0xb1;
    bRam0000000100d24912 = bRam0000000100d248f2 ^ 0x25;
    bRam0000000100d24913 = bRam0000000100d248f3 ^ 0xa5;
    cRam0000000100d24914 = bRam0000000100d248f4 + (bRam0000000100d248f4 & 0xf7) * -2 + -9;
    bRam0000000100d24915 = bRam0000000100d248f5 ^ 0xd2;
    cRam0000000100d24916 = bRam0000000100d248f6 + (bRam0000000100d248f6 & 0x12) * -2 + -0x6e;
    bRam0000000100d24917 = bRam0000000100d248f7 ^ 0xd8;
    bRam0000000100d24918 = bRam0000000100d248f8 ^ 4;
    bRam0000000100d24919 = bRam0000000100d248f9 ^ 0xdb;
    cRam0000000100d2491a = bRam0000000100d248fa + (bRam0000000100d248fa & 0x13) * -2 + '\x13';
    bRam0000000100d2491b = bRam0000000100d248fb ^ 0xf8;
    bRam0000000100d2491c = bRam0000000100d248fc ^ 0xd0;
    bRam0000000100d2491d = bRam0000000100d248fd ^ 0xfd;
    bRam0000000100d2491e = bRam0000000100d248fe ^ 0x98;
    bRam0000000100d2491f = bRam0000000100d248ff ^ 0xad;
    bRam0000000100d24920 = bRam0000000100d24900 ^ 0xf1;
    bRam0000000100d24921 = bRam0000000100d24901 ^ 0x4d;
    cRam0000000100d24922 = bRam0000000100d24902 + (bRam0000000100d24902 & 0x21) * -2 + '!';
    bRam0000000100d24923 = bRam0000000100d24903 ^ 0xe5;
    bRam0000000100d24924 = bRam0000000100d24904 ^ 0x66;
    bRam0000000100d24925 = bRam0000000100d24905 ^ 0xd5;
    bRam0000000100d24926 = bRam0000000100d24906 ^ 0x75;
    bRam0000000100d24927 = bRam0000000100d24907 ^ 0x2d;
    uRam0000000100d24670 =
         CONCAT17((byte)((ulong)uRam0000000100d23fc0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d778 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d23fc0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d778 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d23fc0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d778 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d23fc0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d778 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d23fc0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d778 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d23fc0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d778 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d23fc0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d778 >> 8),
                                                  (byte)uRam0000000100d23fc0 ^ (byte)_UNK_10097d778)
                                                  ))))));
    bRam0000000100d24928 = bRam0000000100d24908 ^ 0xc0;
    cRam0000000100d248c6 = bRam0000000100d24216 + (bRam0000000100d24216 & 0x34) * -2 + '4';
    bRam0000000100d248c7 = bRam0000000100d24217 ^ 0xf5;
    uRam0000000100d24897 =
         CONCAT17((byte)((ulong)uRam0000000100d241e7 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d808 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d241e7 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d808 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d241e7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d808 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d241e7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d808 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d241e7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d808 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d241e7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d808 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d241e7 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d808 >> 8),
                                                  (byte)uRam0000000100d241e7 ^ (byte)_UNK_10097d808)
                                                  ))))));
    bRam0000000100d248e0 = bRam0000000100d248d0 ^ 0xea;
    uRam0000000100d248d8 =
         CONCAT17((byte)((ulong)uRam0000000100d248c8 >> 0x38) ^
                  (byte)((ulong)_UNK_10097d810 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d248c8 >> 0x30) ^
                           (byte)((ulong)_UNK_10097d810 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d248c8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097d810 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d248c8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097d810 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d248c8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097d810 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d248c8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097d810 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d248c8 >> 8) ^
                                                  (byte)((ulong)_UNK_10097d810 >> 8),
                                                  (byte)uRam0000000100d248c8 ^ (byte)_UNK_10097d810)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e916e0 = 1;
  auVar4 = _objc_retain(param_3);
  lVar2 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010019527c(uRam0000000100c71898,auVar4._8_8_,lVar2,1,0);
    lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      auVar4 = func_0x000100195280(uRam0000000100c71458);
      uVar3 = func_0x000100195284(lVar1,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001844e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100d26b18))();
      return;
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar2);
  _objc_autoreleaseReturnValue(0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



