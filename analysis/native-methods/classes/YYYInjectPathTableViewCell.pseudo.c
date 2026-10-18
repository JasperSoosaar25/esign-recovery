/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1002cb280; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 420; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cb2cc */
/* WARNING: Switch with 1 destination removed at 0x0001002cb2d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb324 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb474 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb4a8 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb550 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb560 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb570 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb5a0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb65c */
/* WARNING: Switch with 1 destination removed at 0x0001002cb670 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb688 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb694 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb6b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb6c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb6f0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb77c */
/* WARNING: Switch with 1 destination removed at 0x0001002cb7b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb7e4 */
/* WARNING: Switch with 1 destination removed at 0x0001002cb9b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbc94 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYInjectPathTableViewCell_m02082
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined4 *extraout_x8;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar3 = (undefined4 *)0x100e91ee4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91ee4 == 0) {
  case true:
    bRam0000000100d91999 = bRam0000000100d91992 ^ 0x16;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d9199a = bRam0000000100d91993 ^ 0x68;
    bRam0000000100d9199b = bRam0000000100d91994 ^ 6;
    bRam0000000100d9199c = bRam0000000100d91995 ^ 0x77;
    bRam0000000100d9199d = bRam0000000100d91996 ^ 0xb3;
    bRam0000000100d9199e = bRam0000000100d91997 ^ 0x9d;
    bRam0000000100d9199f = bRam0000000100d91998 ^ 0xb5;
    bRam0000000100d91986 = bRam0000000100d9197a ^ 0x15;
    bRam0000000100d91987 = bRam0000000100d9197b ^ 0x66;
    bRam0000000100d91988 = bRam0000000100d9197c ^ 0xf2;
    bRam0000000100d91989 = bRam0000000100d9197d ^ 0xba;
    bRam0000000100d9198a = bRam0000000100d9197e ^ 0x1b;
    bRam0000000100d9198b = bRam0000000100d9197f ^ 0xb8;
    bRam0000000100d9198c = bRam0000000100d91980 ^ 0xa1;
    cRam0000000100d9198d = bRam0000000100d91981 + (bRam0000000100d91981 & 0x3f) * -2 + -0x41;
    bRam0000000100d9198e = bRam0000000100d91982 ^ 0x4b;
    bRam0000000100d9198f = bRam0000000100d91983 ^ 0xc9;
    bRam0000000100d91990 = bRam0000000100d91984 ^ 0xdd;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d91991 = bRam0000000100d91985 ^ 0x76;
    uRam0000000100d91970 =
         CONCAT17((byte)((ulong)uRam0000000100d91960 >> 0x38) ^
                  (byte)((ulong)_UNK_10097f380 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d91960 >> 0x30) ^
                           (byte)((ulong)_UNK_10097f380 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d91960 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097f380 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d91960 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097f380 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d91960 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097f380 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d91960 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097f380 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d91960 >> 8) ^
                                                  (byte)((ulong)_UNK_10097f380 >> 8),
                                                  (byte)uRam0000000100d91960 ^ (byte)_UNK_10097f380)
                                                  ))))));
    uRam0000000100d91978 = uRam0000000100d91968 ^ 0x5d52;
                    /* WARNING: Switch is manually overridden */
  }
  puVar1 = (undefined8 *)auStack_80;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    *puVar3 = 1;
    puVar5 = puVar1 + -0xc;
                    /* WARNING: Switch is manually overridden */
    uVar2 = _objc_retain(param_4);
    puVar1[-2] = param_1;
    puVar1[-1] = uRam0000000100c73b40;
                    /* WARNING: Switch is manually overridden */
    param_4 = _objc_msgSendSuper2(puVar1 + -2,PTR_s_initWithStyle_reuseIdentifier__100c61930,1,uVar2
                                 );
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uStack_78 = uVar2;
                    /* WARNING: Switch is manually overridden */
    switch(param_4 != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x0001002cc004(0x100d919a0);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x000100976100(param_4);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x00010096ea00(auVar6._0_8_,auVar6._8_8_,uVar2);
      _objc_release(auVar6._0_8_);
      _objc_release(uVar2);
      func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x0001002cc008(param_4);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x0001002cc00c(auVar6._0_8_,auVar6._8_8_,uVar2);
      _objc_release(auVar6._0_8_);
      _objc_release(uVar2);
      func_0x000100955080(uRam0000000100c71438);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x000100960820(param_4,auVar6._8_8_,auVar6._0_8_);
      _objc_release(auVar6._0_8_);
      func_0x0001002cc010(param_4,extraout_x1,0);
      auVar6 = func_0x0001002cc014(uRam0000000100c717f0);
      puVar1[-4] = 0x100d919c0;
      puVar1[-3] = 0x100d919e0;
      func_0x000100939140(uRam0000000100c713e8,auVar6._8_8_,puVar1 + -4,2);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      auVar6 = func_0x0001009494a0(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);
      func_0x0001002cc018(param_4,auVar6._8_8_,auVar6._0_8_);
      _objc_release(auVar6._0_8_);
      _objc_release(auVar7._0_8_);
      func_0x0001002cc01c(param_4);
      param_1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar4 = *(undefined8 *)PTR__NSFontAttributeName_100afc158;
                    /* WARNING: Switch is manually overridden */
      puVar1[-8] = uVar4;
      puStack_70 = puVar1 + -10;
      func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      puVar1[-6] = auVar6._0_8_;
      func_0x0001002cc020(uRam0000000100c71458,auVar6._8_8_,puVar1 + -6,puVar1 + -8,1);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x00010096f240(param_1,auVar7._8_8_,auVar7._0_8_,0);
      _objc_release(auVar7._0_8_);
      _objc_release(auVar6._0_8_);
      _objc_release(param_1);
      func_0x00010095e740(param_4);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      puVar1 = puStack_70;
      *puVar5 = uVar4;
      func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      *puVar1 = auVar6._0_8_;
      func_0x0001002cc024(uRam0000000100c71458,auVar6._8_8_,puVar1,puVar5,1);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      func_0x00010096f240(uVar2,auVar7._8_8_,auVar7._0_8_,4);
      _objc_release(auVar7._0_8_);
      _objc_release(auVar6._0_8_);
      _objc_release(uVar2);
      func_0x0001002cc028(param_4);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x0001002cc02c();
      _objc_release(uVar2);
      func_0x00010095e740(param_4);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x00010095f1a0(param_4,auVar6._8_8_,auVar6._0_8_);
      _objc_release(auVar6._0_8_);
      func_0x0001002cc030(param_4);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x0001002cc034(auVar6._0_8_,auVar6._8_8_,param_4,PTR_s_segmentedControlHandle__100c686b0,
                          0x1000);
      _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(uStack_78);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    *extraout_x8 = 1;
    puVar1 = puVar5;
    puVar3 = extraout_x8;
  }
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell segmentedControlHandle:]
 * Entry: 0x1002cbc98; original ABI: v24@0:8@16
 * Original instructions in modeled body: 55; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbcd4 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbce0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbcfc */
/* WARNING: Switch with 1 destination removed at 0x0001002cbd34 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbd68 */

void Recovered_YYYInjectPathTableViewCell_m02083
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  func_0x0001002cc050(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    func_0x00010095e900(param_1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x00010095eb20(uVar1);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
    _objc_release(lVar2);
  }
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell awakeFromNib]
 * Entry: 0x1002cbd7c; original ABI: v16@0:8
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbda4 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbdd0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbddc */

void Recovered_YYYInjectPathTableViewCell_m02084(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* WARNING: Switch is manually overridden */
  uStack_28 = uRam0000000100c73b40;
  uStack_30 = param_1;
  func_0x0001002cc054(&uStack_30,PTR_s_awakeFromNib_100c5bab8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell setSelected:animated:]
 * Entry: 0x1002cbdf0; original ABI: v24@0:8B16B20
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbe04 */

void Recovered_YYYInjectPathTableViewCell_m02085(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
                    /* WARNING: Switch is manually overridden */
  uStack_18 = uRam0000000100c73b40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_setSelected_animated__100c6c908);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell segmentedControl]
 * Entry: 0x1002cbe30; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbe38 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbe44 */

undefined8 Recovered_YYYInjectPathTableViewCell_m02086(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75d08);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell setSegmentedControl:]
 * Entry: 0x1002cbe58; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbe80 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbe9c */
/* WARNING: Switch with 1 destination removed at 0x0001002cbeb0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbee4 */

void Recovered_YYYInjectPathTableViewCell_m02087(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75d08;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell selectIndexChangeHandle]
 * Entry: 0x1002cbee8; original ABI: @?16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbef0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbefc */

undefined8 Recovered_YYYInjectPathTableViewCell_m02088(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75d0c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell setSelectIndexChangeHandle:]
 * Entry: 0x1002cbf10; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbf3c */
/* WARNING: Switch with 1 destination removed at 0x0001002cbf48 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbf54 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbf88 */

void Recovered_YYYInjectPathTableViewCell_m02089
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001002cc058(param_1,param_2,param_3,(long)iRam0000000100c75d0c);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYInjectPathTableViewCell .cxx_destruct]
 * Entry: 0x1002cbf9c; original ABI: v16@0:8
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002cbfd0 */
/* WARNING: Switch with 1 destination removed at 0x0001002cbff4 */

void Recovered_YYYInjectPathTableViewCell_m02090(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75d0c,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75d08,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



