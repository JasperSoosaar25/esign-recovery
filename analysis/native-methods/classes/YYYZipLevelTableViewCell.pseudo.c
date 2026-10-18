/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1000aa070; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 428; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aa0b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa0f8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa21c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa228 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa23c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa250 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa26c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa45c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa5e0 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa690 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa6ac */
/* WARNING: Switch with 1 destination removed at 0x0001000aa7b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa7d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa7ec */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Recovered_YYYZipLevelTableViewCell_m00557
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e911c0 == 0) {
  case true:
    uRam0000000100cdaa50 =
         CONCAT17((byte)((ulong)uRam0000000100cdaa40 >> 0x38) ^
                  (byte)((ulong)_UNK_10097beb0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cdaa40 >> 0x30) ^
                           (byte)((ulong)_UNK_10097beb0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cdaa40 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097beb0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cdaa40 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097beb0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cdaa40 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097beb0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cdaa40 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097beb0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cdaa40 >> 8) ^
                                                  (byte)((ulong)_UNK_10097beb0 >> 8),
                                                  (byte)uRam0000000100cdaa40 ^ (byte)_UNK_10097beb0)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cdaa58 =
         ~((uRam0000000100cdaa48 | 0x912c) & (uRam0000000100cdaa48 ^ 0xffff | 0x6ed3));
    uRam0000000100cdaa60 = uRam0000000100cdaa5a ^ 0x9fdd;
    uRam0000000100cdaa62 = uRam0000000100cdaa5c ^ 0xb5a3;
    uRam0000000100cdaa64 = uRam0000000100cdaa5e ^ 0x9daa;
    sRam0000000100cdaa6c = uRam0000000100cdaa66 + (uRam0000000100cdaa66 & 0x3a8f) * -2 + 0x3a8f;
    sRam0000000100cdaa6e = uRam0000000100cdaa68 + (uRam0000000100cdaa68 & 0x3706) * -2 + 0x3706;
    uRam0000000100cdaa70 = uRam0000000100cdaa6a ^ 0x5049;
    sRam0000000100cdaa78 = uRam0000000100cdaa72 + (uRam0000000100cdaa72 & 0x6f5a) * -2 + -0x10a6;
    sRam0000000100cdaa7a = uRam0000000100cdaa74 + (uRam0000000100cdaa74 & 0xed5) * -2 + -0x712b;
    uRam0000000100cdaa7c = uRam0000000100cdaa76 ^ 0x74ed;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  ppuVar1 = &puStack_80;
  puVar7 = (undefined8 *)0x100e911c0;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    *(undefined4 *)puVar7 = 1;
    puVar12 = (undefined8 *)((long)ppuVar1 + -0x30);
    puVar11 = (undefined8 *)((long)ppuVar1 + -0x40);
    puVar9 = (undefined8 *)((long)ppuVar1 + -0x50);
    puVar8 = (undefined8 *)((long)ppuVar1 + -0x70);
    uVar4 = _objc_retain(param_4);
    *(undefined8 **)((long)ppuVar1 + -0x10) = param_1;
    *(undefined8 *)((long)ppuVar1 + -8) = uRam0000000100c73928;
    uVar5 = func_0x0001000aab9c((undefined1 *)((long)ppuVar1 + -0x10),
                                PTR_s_initWithStyle_reuseIdentifier__100c61930,1,uVar4);
                    /* WARNING: Switch is manually overridden */
    lVar6 = _objc_retain(uVar5);
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    puVar10 = puVar9;
                    /* WARNING: Switch is manually overridden */
    switch(lVar6 != 0) {
    case true:
      puStack_80 = (undefined8 *)((long)ppuVar1 + -0x60);
      func_0x0001000aaba0(0x100cdaa80);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      func_0x0001000aaba4(lVar6);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x0001000aaba8(auVar13._0_8_,auVar13._8_8_,uVar5);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar5);
      func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      func_0x000100976100(lVar6);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x000100964720(auVar13._0_8_,auVar13._8_8_,uVar5);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar5);
      func_0x000100955080(uRam0000000100c71438);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x0001000aabac(lVar6,auVar13._8_8_,auVar13._0_8_);
      _objc_release(auVar13._0_8_);
      func_0x0001000aabb0(lVar6,extraout_x1,0);
      uVar5 = _objc_alloc(uRam0000000100c717f0);
      func_0x00010097a8a0(0x100cdaaa0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      *puVar12 = uVar2;
      func_0x00010097a8a0(0x100cdaac0);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      *(undefined8 *)((long)ppuVar1 + -0x28) = uVar3;
      func_0x0001000aabb4(0x100cdaae0);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      *(long *)((long)ppuVar1 + -0x20) = auVar13._0_8_;
      func_0x000100939140(uRam0000000100c713e8,auVar13._8_8_,puVar12,3);
      auVar14 = _objc_retainAutoreleasedReturnValue();
      auVar15 = func_0x0001009494a0(uVar5,auVar14._8_8_,auVar14._0_8_);
      func_0x00010096c120(lVar6,auVar15._8_8_,auVar15._0_8_);
      _objc_release(auVar15._0_8_);
      _objc_release(auVar14._0_8_);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar3);
      _objc_release(uVar2);
      func_0x0001000aabb8(lVar6);
      puVar12 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
      puVar10 = puStack_80;
      uStack_78 = *(undefined8 *)PTR__NSFontAttributeName_100afc158;
      *puVar9 = uStack_78;
      puStack_70 = puVar9;
                    /* WARNING: Switch is manually overridden */
      func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      *puVar11 = auVar13._0_8_;
      func_0x000100940a20(uRam0000000100c71458,auVar13._8_8_,puVar11,puStack_70,1);
      auVar14 = _objc_retainAutoreleasedReturnValue();
      func_0x00010096f240(puVar12,auVar14._8_8_,auVar14._0_8_,0);
      _objc_release(auVar14._0_8_);
      _objc_release(auVar13._0_8_);
      _objc_release(puVar12);
      func_0x00010095e740(lVar6);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      *puVar8 = uStack_78;
      func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      *puVar10 = auVar13._0_8_;
      func_0x000100940a20(uRam0000000100c71458,auVar13._8_8_,puVar10,puVar8,1);
      auVar14 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x00010096f240(uVar5,auVar14._8_8_,auVar14._0_8_,4);
      _objc_release(auVar14._0_8_);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar5);
      func_0x00010095e740(lVar6);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      func_0x000100972900();
      _objc_release(uVar5);
      func_0x00010095e740(lVar6);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x0001000aabbc(lVar6,auVar13._8_8_,auVar13._0_8_);
      _objc_release(auVar13._0_8_);
      func_0x00010095e740(lVar6);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      param_4 = (undefined8 *)PTR_s_segmentedControlHandle__100c686b0;
      func_0x0001009375a0(auVar13._0_8_,auVar13._8_8_,lVar6,PTR_s_segmentedControlHandle__100c686b0,
                          0x1000);
      _objc_release(auVar13._0_8_);
      puVar8 = puVar11;
    }
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    *(undefined4 *)puVar7 = 1;
    uVar4 = _objc_retain(param_4);
    *(undefined8 **)((long)ppuVar1 + -0x80) = puVar12;
    *(undefined8 *)((long)ppuVar1 + -0x78) = uRam0000000100c73928;
    func_0x0001000aabc0((undefined1 *)((long)ppuVar1 + -0x80),
                        PTR_s_initWithStyle_reuseIdentifier__100c61930,1,uVar4);
    ppuVar1 = (undefined8 **)((long)ppuVar1 + -0x80);
    puVar7 = puVar10;
    param_4 = puVar8;
    param_1 = puVar12;
  }
  return lVar6;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell segmentedControlHandle:]
 * Entry: 0x1000aa7f0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 74; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aa810 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa81c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa85c */
/* WARNING: Switch with 1 destination removed at 0x0001000aa888 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa898 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa8d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa8e0 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa8ec */
/* WARNING: Switch with 1 destination removed at 0x0001000aa8f8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa948 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa964 */

void Recovered_YYYZipLevelTableViewCell_m00558
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x00010095e900(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    func_0x00010095e900(param_1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x0001000aabcc(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell awakeFromNib]
 * Entry: 0x1000aa968; original ABI: v16@0:8
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aa984 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa990 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa9a4 */

void Recovered_YYYZipLevelTableViewCell_m00559(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_18 = uRam0000000100c73928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_awakeFromNib_100c5bab8);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell setSelected:animated:]
 * Entry: 0x1000aa9cc; original ABI: v24@0:8B16B20
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aa9e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000aa9f0 */

void Recovered_YYYZipLevelTableViewCell_m00560(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_18 = uRam0000000100c73928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setSelected_animated__100c6c908);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell segmentedControl]
 * Entry: 0x1000aaa1c; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aaa24 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaa38 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaa44 */

undefined8 Recovered_YYYZipLevelTableViewCell_m00561(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75504);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell setSegmentedControl:]
 * Entry: 0x1000aaa50; original ABI: v24@0:8@16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYZipLevelTableViewCell_m00562(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75504;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell selectIndexChangeHandle]
 * Entry: 0x1000aaa88; original ABI: @?16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aaa90 */

undefined8 Recovered_YYYZipLevelTableViewCell_m00563(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75508);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell setSelectIndexChangeHandle:]
 * Entry: 0x1000aaaa4; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aaac8 */
/* WARNING: Switch with 1 destination removed at 0x0001000aaadc */
/* WARNING: Switch with 1 destination removed at 0x0001000aab20 */

void Recovered_YYYZipLevelTableViewCell_m00564
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)iRam0000000100c75508);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYZipLevelTableViewCell .cxx_destruct]
 * Entry: 0x1000aab24; original ABI: v16@0:8
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000aab3c */
/* WARNING: Switch with 1 destination removed at 0x0001000aab68 */
/* WARNING: Switch with 1 destination removed at 0x0001000aab98 */

void Recovered_YYYZipLevelTableViewCell_m00565(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75508,0);
  _objc_storeStrong(param_1 + iRam0000000100c75504,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



