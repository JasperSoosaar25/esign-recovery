/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYGradientLayerView initWithFrame:]
 * Entry: 0x1000aabd0; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 226; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aac30 */
/* WARNING: Switch with 1 destination removed at 0x0001000aac48 */
/* WARNING: Switch with 1 destination removed at 0x0001000aac5c */
/* WARNING: Switch with 1 destination removed at 0x0001000aac84 */
/* WARNING: Switch with 1 destination removed at 0x0001000aacc8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aacf0 */
/* WARNING: Switch with 1 destination removed at 0x0001000aad10 */
/* WARNING: Switch with 1 destination removed at 0x0001000aad98 */
/* WARNING: Switch with 1 destination removed at 0x0001000aada8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaf64 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaf80 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaf9c */

undefined8 *
Recovered_YYYGradientLayerView_m00566
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 auStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar6 = &uStack_a0;
  puVar5 = auStack_b0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_98 = uRam0000000100c73930;
  uStack_a0 = param_5;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar6,PTR_s_initWithFrame__100c61370)
  ;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    unaff_x27 = &UNK_10097b000;
    unaff_x28 = &UNK_10097b000;
    unaff_x26 = &PTR_s_y_fileName_100c71000;
    puVar6 = puRam0000000100c71438;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_1000aad10_case_0;
  }
  while( true ) {
    puVar5 = (undefined8 *)_objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
    _objc_release(puVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_88) break;
    ___stack_chk_fail();
    func_0x00010093cfa0(0,*(undefined8 *)(unaff_x27 + 200),puVar6);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000ab0d4(0,*(undefined8 *)(unaff_x28 + 0xeb8),puRam0000000100c71438);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease(uVar2);
    uVar2 = func_0x000100934be0();
    *puVar5 = uVar2;
    _objc_retainAutorelease(uVar3);
    auVar9 = func_0x0001000ab0d8();
    puVar5[1] = auVar9._0_8_;
    func_0x0001000ab0dc(unaff_x26[0x7d],auVar9._8_8_,puVar5,2);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100945ae0(lVar1);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    func_0x000100961c60(auVar9._0_8_,auVar9._8_8_,uVar2);
    _objc_release(auVar9._0_8_);
    _objc_release(uVar2);
    func_0x0001000aafa0(0,0x3ff0000000000000);
override_jmp_1000aad10_case_0:
    func_0x00010093cfa0(0,*(undefined8 *)(unaff_x27 + 200),puVar6);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093cfa0(0,*(undefined8 *)(unaff_x28 + 0xeb8),puRam0000000100c71438);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_retainAutorelease(uVar2);
    uVar2 = func_0x000100934be0();
    *puVar5 = uVar2;
    uVar3 = _objc_retainAutorelease(uVar3);
    auVar9 = func_0x000100934be0();
    puVar5[1] = auVar9._0_8_;
    func_0x000100939140(unaff_x26[0x7d],auVar9._8_8_,puVar5,2);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100945ae0(lVar1);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    func_0x000100961c60(auVar9._0_8_,auVar9._8_8_,uVar2);
    _objc_release(auVar9._0_8_);
    _objc_release(uVar2);
    uVar8 = 0x3ff0000000000000;
    uVar7 = func_0x0001000ab0c8(0,0x3ff0000000000000);
    func_0x000100945ae0(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096d6a0(uVar7,uVar8);
    _objc_release(uVar2);
    uVar8 = 0;
    uVar7 = func_0x0001000aafa0(0,0);
    func_0x0001000ab0cc(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000ab0d0(uVar7,uVar8);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
  }
  return puVar5;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYGradientLayerView gradientLayer]
 * Entry: 0x1000ab03c; original ABI: @16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ab054 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab060 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab06c */
/* WARNING: Switch with 1 destination removed at 0x0001000ab0a8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab0c4 */

void Recovered_YYYGradientLayerView_m00567(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010094d2e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYGradientLayerView layerClass]
 * Entry: 0x1000aafb0; original ABI: #16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aafc8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaff8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab004 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab010 */
/* WARNING: Switch with 1 destination removed at 0x0001000ab02c */

void Recovered_YYYGradientLayerView_m00568(void)

{
  undefined8 uVar1;
  
                    /* WARNING: Switch is manually overridden */
  func_0x00010093c700(uRam0000000100c717f8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



