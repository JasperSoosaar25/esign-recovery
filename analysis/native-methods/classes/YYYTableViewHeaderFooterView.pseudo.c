/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView initWithReuseIdentifier:]
 * Entry: 0x10016f034; original ABI: @24@0:8@16
 * Original instructions in modeled body: 72; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016f064 */
/* WARNING: Switch with 1 destination removed at 0x00010016f0b8 */
/* WARNING: Switch with 1 destination removed at 0x00010016f0c4 */
/* WARNING: Switch with 1 destination removed at 0x00010016f0e8 */
/* WARNING: Switch with 1 destination removed at 0x00010016f0fc */
/* WARNING: Switch with 1 destination removed at 0x00010016f108 */
/* WARNING: Switch with 1 destination removed at 0x00010016f118 */
/* WARNING: Switch with 1 destination removed at 0x00010016f124 */
/* WARNING: Switch with 1 destination removed at 0x00010016f15c */
/* WARNING: Switch with 1 destination removed at 0x00010016f188 */

undefined8
Recovered_YYYTableViewHeaderFooterView_m01123
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uStack_48 = uRam0000000100c73a00;
  uStack_50 = param_1;
  lVar2 = func_0x000100170b40(&uStack_50,PTR_s_initWithReuseIdentifier__100c61860,uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100170b44(lVar2);
                    /* WARNING: Switch is manually overridden */
  }
  uVar3 = _objc_retain(lVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView didInitialize]
 * Entry: 0x10016f18c; original ABI: v16@0:8
 * Original instructions in modeled body: 122; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016f1b0 */
/* WARNING: Switch with 1 destination removed at 0x00010016f1ec */

void Recovered_YYYTableViewHeaderFooterView_m01124(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  _objc_alloc(uRam0000000100c71420);
  uVar1 = func_0x000100948020();
  uVar2 = *(undefined8 *)(param_1 + iRam0000000100c7587c);
  *(undefined8 *)(param_1 + iRam0000000100c7587c) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
  func_0x000100976a00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968560(auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  func_0x000100170b4c(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100170b50(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  func_0x00010097a980(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100170b54(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  func_0x000100170b58(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009667c0(auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  func_0x000100170b5c(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100170b60(auVar3._0_8_,auVar3._8_8_,1);
  _objc_release(auVar3._0_8_);
  func_0x000100940700(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100170b64(auVar3._0_8_,auVar3._8_8_,1);
  _objc_release(auVar3._0_8_);
  _objc_alloc(uRam0000000100c71418);
  auVar3 = func_0x000100170b68();
  func_0x000100960960(param_1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(auVar3._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView y_insets]
 * Entry: 0x10016f388; original ABI: {UIEdgeInsets=dddd}16@0:8
 * Original instructions in modeled body: 27; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016f3b4 */
/* WARNING: Switch with 1 destination removed at 0x00010016f3c8 */
/* WARNING: Switch with 1 destination removed at 0x00010016f89c */

void Recovered_YYYTableViewHeaderFooterView_m01125(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = func_0x00010095c520(param_1,param_2,PTR_s__insetsToContentRect_100c5a4a8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010016f3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d1efd0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView layoutSubviews]
 * Entry: 0x10016f980; original ABI: v16@0:8
 * Original instructions in modeled body: 90; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016f9b4 */
/* WARNING: Switch with 1 destination removed at 0x00010016fa34 */
/* WARNING: Switch with 1 destination removed at 0x00010016fa44 */
/* WARNING: Switch with 1 destination removed at 0x00010016fb7c */

void Recovered_YYYTableViewHeaderFooterView_m01126
               (undefined1 param_1 [16],double param_2,double param_3,double param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
                    /* WARNING: Switch is manually overridden */
  uStack_78 = uRam0000000100c73a00;
  uStack_80 = param_5;
  _objc_msgSendSuper2(&uStack_80,PTR_s_layoutSubviews_100c62d78);
  uVar2 = func_0x00010097a780(param_5);
  func_0x00010093dd00(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100944960(uVar1);
  param_4 = (param_3 - param_2) - param_4;
  _objc_release(uVar1);
  func_0x000100170b9c(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x7fefffffffffffff;
  func_0x000100170ba0(param_4,0x7fefffffffffffff);
  func_0x0001009728a0(uVar1);
  _objc_release(uVar1);
  uVar3 = func_0x000100170ba4(param_2,uVar2,param_4,uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100976a00(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100170ba8(uVar3,uVar2,param_4,uVar4);
  _objc_release(uVar1);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView sizeThatFits:]
 * Entry: 0x10016fbb8; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 155; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016fc00 */
/* WARNING: Switch with 1 destination removed at 0x00010016fde8 */
/* WARNING: Switch with 1 destination removed at 0x00010016fe40 */
/* WARNING: Switch with 1 destination removed at 0x00010016fee8 */

undefined1  [16]
Recovered_YYYTableViewHeaderFooterView_m01127
          (undefined1 param_1 [16],double param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  func_0x000100170bb0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100944960();
  _objc_release(uVar1);
  func_0x00010097a780(param_5);
  param_4 = (param_3 - param_2) - param_4;
  func_0x000100170bb4(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009692e0(param_4);
  _objc_release(uVar1);
  _objc_alloc(uRam0000000100c719f8);
  uVar1 = func_0x000100948020();
  func_0x000100170bb8(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  auVar7 = func_0x00010094d8c0();
  func_0x0001009667c0(uVar1,auVar7._8_8_,auVar7._0_8_);
  _objc_release(uVar2);
  func_0x000100976a00(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100975dc0();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar6 = 0x7fefffffffffffff;
  uVar5 = func_0x00010016fb80(param_4,0x7fefffffffffffff);
  uStack_b0 = *(undefined8 *)PTR__NSFontAttributeName_100afc158;
  func_0x000100976a00(param_5);
  uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100944480();
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_100afc1f8;
  uStack_a0 = auVar7._0_8_;
  uStack_98 = uVar1;
  func_0x000100170bbc(uRam0000000100c71458,auVar7._8_8_,&uStack_a0,&uStack_b0,2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010093a720(uVar5,uVar6,uVar3,auVar8._8_8_,3,auVar8._0_8_,0);
  _objc_release(auVar8._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  if (*(long *)PTR____stack_chk_guard_100afc6e8 != lStack_88) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010016ff60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar7 = (*pcRam0000000100d1f440)();
    return auVar7;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView setBackgroundColor:]
 * Entry: 0x10016ff40; original ABI: v24@0:8@16
 * Original instructions in modeled body: 40; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010016ff60 */
/* WARNING: Switch with 1 destination removed at 0x00010016ff6c */
/* WARNING: Switch with 1 destination removed at 0x00010016ff78 */
/* WARNING: Switch with 1 destination removed at 0x00010016ffbc */
/* WARNING: Switch with 1 destination removed at 0x000100170010 */

void Recovered_YYYTableViewHeaderFooterView_m01128
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _objc_retain(param_3);
  func_0x000100170bcc(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100960820(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView backgroundColor]
 * Entry: 0x100170014; original ABI: @16@0:8
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010017002c */
/* WARNING: Switch with 1 destination removed at 0x000100170038 */
/* WARNING: Switch with 1 destination removed at 0x000100170048 */
/* WARNING: Switch with 1 destination removed at 0x00010017009c */
/* WARNING: Switch with 1 destination removed at 0x0001001700d4 */

void Recovered_YYYTableViewHeaderFooterView_m01129(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100939b60(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100939a40(uVar2);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView titleLabel]
 * Entry: 0x1001700d8; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001700e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001700f8 */

undefined8 Recovered_YYYTableViewHeaderFooterView_m01130(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7587c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView setTitleLabel:]
 * Entry: 0x100170100; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100170128 */
/* WARNING: Switch with 1 destination removed at 0x000100170150 */
/* WARNING: Switch with 1 destination removed at 0x00010017015c */
/* WARNING: Switch with 1 destination removed at 0x000100170188 */

void Recovered_YYYTableViewHeaderFooterView_m01131
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c7587c;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView tableView]
 * Entry: 0x10017018c; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010017019c */

void Recovered_YYYTableViewHeaderFooterView_m01132(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_loadWeakRetained(param_1 + iRam0000000100c75880);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView setTableView:]
 * Entry: 0x1001701b8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001701d8 */
/* WARNING: Switch with 1 destination removed at 0x0001001701e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001701f8 */
/* WARNING: Switch with 1 destination removed at 0x00010017022c */

void Recovered_YYYTableViewHeaderFooterView_m01133
               (long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeWeak(param_1 + iRam0000000100c75880,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView isFooter]
 * Entry: 0x100170230; original ABI: B16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100170240 */
/* WARNING: Switch with 1 destination removed at 0x00010017024c */

undefined1 Recovered_YYYTableViewHeaderFooterView_m01134(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + iRam0000000100c75884);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView setIsFooter:]
 * Entry: 0x100170258; original ABI: v20@0:8B16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100170268 */
/* WARNING: Switch with 1 destination removed at 0x000100170274 */
/* WARNING: Switch with 1 destination removed at 0x000100170280 */
/* WARNING: Switch with 1 destination removed at 0x000100170294 */

void Recovered_YYYTableViewHeaderFooterView_m01135
               (long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c75884) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHeaderFooterView .cxx_destruct]
 * Entry: 0x10017029c; original ABI: v16@0:8
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001702c0 */
/* WARNING: Switch with 1 destination removed at 0x0001001702d4 */
/* WARNING: Switch with 1 destination removed at 0x000100170310 */

void Recovered_YYYTableViewHeaderFooterView_m01136(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_destroyWeak(param_1 + iRam0000000100c75880);
  _objc_storeStrong(param_1 + iRam0000000100c7587c,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



