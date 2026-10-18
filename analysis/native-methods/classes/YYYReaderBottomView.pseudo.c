/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView initWithFrame:]
 * Entry: 0x1003cfb7c; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 113; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cfbc4 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfc1c */
/* WARNING: Switch with 1 destination removed at 0x0001003cfc2c */
/* WARNING: Switch with 1 destination removed at 0x0001003cfc48 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfc70 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfca4 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfcb0 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfccc */
/* WARNING: Switch with 1 destination removed at 0x0001003cfcd8 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfcf4 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfd04 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfdac */
/* WARNING: Switch with 1 destination removed at 0x0001003cfdc8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYReaderBottomView_m02864
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* WARNING: Switch is manually overridden */
  uStack_68 = uRam0000000100c73c40;
  uStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,PTR_s_initWithFrame__100c61370);
  lVar1 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(lVar1 + iRam0000000100c7600c) = 0;
    func_0x00010094dda0(lVar1);
    *(undefined1 *)(lVar1 + iRam0000000100c76010) = 0;
    func_0x00010093fce0(uRam0000000100c71400);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001003d3474(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_styleChange_100c6eef0,_UNK_100b00d28,0
                       );
    _objc_release(auVar3._0_8_);
    func_0x0001003d3478(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView pointInside:withEvent:]
 * Entry: 0x1003cfdcc; original ABI: B40@0:8{CGPoint=dd}16@32
 * Original instructions in modeled body: 31; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cfe18 */

void Recovered_YYYReaderBottomView_m02865(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  func_0x000100939b60(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100944960();
                    /* WARNING: Switch is manually overridden */
  uVar2 = func_0x0001003d3484();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003cfe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100deb720))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView dealloc]
 * Entry: 0x1003cfe78; original ABI: v16@0:8
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cfed0 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfef4 */

void Recovered_YYYReaderBottomView_m02866(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010093fce0(uRam0000000100c71400);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095b580(auVar1._0_8_,auVar1._8_8_,param_1);
  _objc_release(auVar1._0_8_);
  uStack_28 = uRam0000000100c73c40;
  uStack_30 = param_1;
                    /* WARNING: Switch is manually overridden */
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_100c5db00);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView styleChange]
 * Entry: 0x1003cff08; original ABI: v16@0:8
 * Original instructions in modeled body: 154; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cff2c */
/* WARNING: Switch with 1 destination removed at 0x0001003cff40 */
/* WARNING: Switch with 1 destination removed at 0x0001003cff88 */

void Recovered_YYYReaderBottomView_m02867(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976de0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x0001003d348c(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d3490(auVar3._0_8_,auVar3._8_8_,uVar2);
  func_0x0001003d3494(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar4._0_8_,auVar4._8_8_,uVar2);
  func_0x0001003d3498(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar5._0_8_,auVar5._8_8_,uVar2);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001003d349c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100970d60(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34a0();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f060(uVar1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093a7e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34a4(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34a8();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34ac(uVar1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001009444c0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100970d60(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100939a00();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f060(uVar1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34b0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100939b60(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100969ee0(auVar3._0_8_,auVar3._8_8_,uVar2);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView createButtonWithImageName:]
 * Entry: 0x1003d018c; original ABI: @24@0:8@16
 * Original instructions in modeled body: 110; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d01c0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0338 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0348 */
/* WARNING: Switch with 1 destination removed at 0x0001003d03d8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d03e4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d045c */

void Recovered_YYYReaderBottomView_m02868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar5 = _objc_retain(param_3);
  func_0x0001003d34b8(uRam0000000100c71428,auVar5._8_8_,0);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  uVar4 = auVar6._0_8_;
  func_0x000100947300(uRam0000000100c713c0,auVar6._8_8_,auVar5._0_8_);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar6._0_8_;
  func_0x0001003d34bc(uVar1,auVar6._8_8_,2);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009653a0(uVar4,auVar6._8_8_,auVar6._0_8_,0);
  func_0x000100974dc0(uRam0000000100c71438);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100956e40(uVar1,auVar7._8_8_,auVar7._0_8_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar7._0_8_);
  func_0x0001003d34c0(uVar4,extraout_x1,uVar2,4);
  func_0x000100970d60(uRam0000000100c71408);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100975e20(uVar3);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f060(uVar4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar3);
  uVar4 = _objc_retain(uVar4);
  _objc_release(uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(auVar5._0_8_);
  _objc_autoreleaseReturnValue(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setShowType:]
 * Entry: 0x1003d0460; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 483; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d04b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d04c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d04f4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0510 */
/* WARNING: Switch with 1 destination removed at 0x0001003d052c */
/* WARNING: Switch with 1 destination removed at 0x0001003d053c */
/* WARNING: Switch with 1 destination removed at 0x0001003d058c */
/* WARNING: Switch with 1 destination removed at 0x0001003d05d4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d05fc */
/* WARNING: Switch with 1 destination removed at 0x0001003d0608 */
/* WARNING: Switch with 1 destination removed at 0x0001003d062c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0670 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0684 */
/* WARNING: Switch with 1 destination removed at 0x0001003d06a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d06b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d06c0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d06f0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d06fc */
/* WARNING: Switch with 1 destination removed at 0x0001003d0740 */
/* WARNING: Switch with 1 destination removed at 0x0001003d074c */
/* WARNING: Switch with 1 destination removed at 0x0001003d07b8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d07c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d07f0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0808 */
/* WARNING: Switch with 1 destination removed at 0x0001003d083c */
/* WARNING: Switch with 1 destination removed at 0x0001003d084c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0878 */
/* WARNING: Switch with 1 destination removed at 0x0001003d089c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0908 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0914 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0930 */
/* WARNING: Switch with 1 destination removed at 0x0001003d093c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0950 */
/* WARNING: Switch with 1 destination removed at 0x0001003d09c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d09d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d09dc */
/* WARNING: Switch with 1 destination removed at 0x0001003d09e8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d09f8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a04 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a20 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a2c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a50 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a7c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a8c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0a98 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0ad4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0ae0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0aec */
/* WARNING: Switch with 1 destination removed at 0x0001003d0b74 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0c00 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0c4c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0d14 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0d60 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0df8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d0e2c */
/* WARNING: Switch with 1 destination removed at 0x0001003d0e64 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderBottomView_m02869
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5,undefined8 param_6,long param_7)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar1;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
                    /* WARNING: Switch is manually overridden */
  lVar2 = (long)iRam0000000100c7600c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_5 + lVar2) == param_7) {
  case true:
    goto override_jmp_1003d04e4_case_1;
  }
                    /* WARNING: Switch is manually overridden */
  uVar3 = func_0x00010095cde0(uRam0000000100c714d0);
  func_0x0001009444c0(param_5);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d34c8(auVar4._0_8_,auVar4._8_8_,0);
  func_0x00010093a7e0(param_5);
  auVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010096c2a0(auVar5._0_8_,auVar5._8_8_,0);
  func_0x0001003d34cc(param_5);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096c2a0(auVar6._0_8_,auVar6._8_8_,0);
  _objc_release(auVar6._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_7 < 2) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(param_7 < 3) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(param_7 == 3) {
      case true:
        func_0x0001009445c0(param_5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        func_0x0001003d34e0(param_5);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        func_0x00010096c2a0(auVar4._0_8_,auVar4._8_8_,1);
        _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
        uVar1 = extraout_x1_00;
                    /* WARNING: Switch is manually overridden */
        switch(*(long *)(param_5 + lVar2) == 2) {
        case true:
          func_0x0001009445c0(param_5);
          auVar4 = _objc_retainAutoreleasedReturnValue();
          func_0x0001003d34e4(param_5,auVar4._8_8_,auVar4._0_8_);
          _objc_release(auVar4._0_8_);
          func_0x000100976dc0(param_5);
          auVar4 = _objc_retainAutoreleasedReturnValue();
          func_0x00010093a880(param_5,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
          uVar1 = extraout_x1_01;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        puStack_1c0 = PTR___NSConcreteStackBlock_100afc560;
        uStack_1b8 = _UNK_10097b060;
        puStack_1b0 = &DAT_1003d1704;
        puStack_1a8 = &UNK_100b039a8;
        lStack_1a0 = param_5;
        uStack_198 = uVar3;
        uStack_190 = param_2;
        uStack_188 = param_3;
        uStack_180 = param_4;
        func_0x000100938340(_UNK_10097b0c8,uRam0000000100c71418,uVar1,&puStack_1c0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x00010093a820(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(long *)(param_5 + lVar2) == 3) {
      case true:
        func_0x00010093a820(param_5);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        func_0x00010093a880(param_5,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        _objc_release(auVar4._0_8_);
        func_0x000100976dc0(param_5);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        func_0x00010093a880(param_5,auVar4._8_8_,auVar4._0_8_);
        _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      func_0x0001003d34d8(param_5);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x00010096c2a0(auVar4._0_8_,auVar4._8_8_,1);
      _objc_release(auVar4._0_8_);
      puStack_170 = PTR___NSConcreteStackBlock_100afc560;
      uStack_168 = _UNK_10097b060;
      puStack_160 = &DAT_1003d1450;
      puStack_158 = &UNK_100b039a8;
      lStack_150 = param_5;
      uStack_148 = uVar3;
      uStack_140 = param_2;
      uStack_138 = param_3;
      uStack_130 = param_4;
      func_0x0001003d34dc(_UNK_10097b0c8,uRam0000000100c71418,extraout_x1_03,&puStack_170);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(param_7 < 1) {
    case false:
      func_0x0001003d34d0(param_5);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x0001003d34d4(auVar4._0_8_,auVar4._8_8_,1);
      _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(long *)(param_5 + lVar2) == 3) {
      case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(long *)(param_5 + lVar2) == 2) {
        case false:
          goto override_jmp_1003d0580_case_1;
        }
      }
                    /* WARNING: Switch is manually overridden */
      puStack_120 = PTR___NSConcreteStackBlock_100afc560;
      uStack_118 = _UNK_10097b060;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      puStack_110 = &DAT_1003d1124;
      puStack_108 = &UNK_100b039a8;
      lStack_100 = param_5;
      uStack_f8 = uVar3;
      uStack_f0 = param_2;
      uStack_e8 = param_3;
      uStack_e0 = param_4;
      func_0x000100938340(_UNK_10097b0c8,uRam0000000100c71418,extraout_x1,&puStack_120);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      switch(param_7 == 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
        puStack_d0 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uStack_c8 = _UNK_10097b060;
        puStack_c0 = &DAT_1003d0e68;
                    /* WARNING: Switch is manually overridden */
        puStack_b8 = &UNK_100b039a8;
        lStack_b0 = param_5;
        uStack_a8 = uVar3;
        uStack_a0 = param_2;
        uStack_98 = param_3;
        uStack_90 = param_4;
        func_0x000100938340(_UNK_10097b0c8,uRam0000000100c71418,extraout_x1_02,&puStack_d0);
      }
    }
  }
override_jmp_1003d0580_case_1:
                    /* WARNING: Switch is manually overridden */
  *(long *)(param_5 + lVar2) = param_7;
  func_0x000100972360(param_5);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x0001003d34e8(param_5);
    lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar2 + 0x10))(lVar2,param_7);
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
override_jmp_1003d04e4_case_1:
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView hiddenAll]
 * Entry: 0x1003d199c; original ABI: v16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d19a4 */

void Recovered_YYYReaderBottomView_m02870(undefined8 param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010096cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100afcb80)(param_1,PTR_s_setShowType__100c6cc98,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView toolButtonHandle:]
 * Entry: 0x1003d19b0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 71; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d19d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d19dc */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a24 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a30 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a54 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a60 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a84 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a90 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1a9c */
/* WARNING: Switch with 1 destination removed at 0x0001003d1ab8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1ac4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1af0 */

void Recovered_YYYReaderBottomView_m02871(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar1 = func_0x000100972340(param_1);
  auVar3 = func_0x0001003d3580(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == auVar3._0_8_) {
  case false:
    auVar3 = func_0x000100975a80(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010096cfc0(param_1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010096cfc0(param_1,auVar3._8_8_,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView loadSubviews]
 * Entry: 0x1003d1af4; original ABI: v16@0:8
 * Original instructions in modeled body: 546; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d1b24 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1b3c */
/* WARNING: Switch with 1 destination removed at 0x0001003d1b48 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1b64 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1c38 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1c64 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1c90 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1cb0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1d80 */
/* WARNING: Switch with 1 destination removed at 0x0001003d1f98 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2078 */
/* WARNING: Switch with 1 destination removed at 0x0001003d28a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2944 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderBottomView_m02872
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92584 == 0) {
  case true:
    bRam0000000100deb55f = bRam0000000100deb550 ^ 0xd3;
    bRam0000000100deb560 = bRam0000000100deb551 ^ 0xd0;
    bRam0000000100deb561 = bRam0000000100deb552 ^ 0x5b;
    bRam0000000100deb562 = bRam0000000100deb553 ^ 0x23;
    bRam0000000100deb563 = bRam0000000100deb554 ^ 0x5b;
    cRam0000000100deb564 = bRam0000000100deb555 + (bRam0000000100deb555 & 0x21) * -2 + -0x5f;
    bRam0000000100deb565 = bRam0000000100deb556 ^ 0x91;
    bRam0000000100deb566 = bRam0000000100deb557 ^ 0x18;
    bRam0000000100deb567 = bRam0000000100deb558 ^ 0x57;
    bRam0000000100deb568 = bRam0000000100deb559 ^ 0xeb;
    bRam0000000100deb569 = bRam0000000100deb55a ^ 0x9a;
    bRam0000000100deb56a = bRam0000000100deb55b ^ 0xa6;
    bRam0000000100deb56b = bRam0000000100deb55c ^ 0x7f;
    bRam0000000100deb56c = bRam0000000100deb55d ^ 0xa3;
    bRam0000000100deb56d = bRam0000000100deb55e ^ 100;
    bRam0000000100deb590 = bRam0000000100deb570 ^ 9;
    bRam0000000100deb591 = bRam0000000100deb571 ^ 0xb9;
    bRam0000000100deb592 = bRam0000000100deb572 ^ 0xde;
    bRam0000000100deb593 = bRam0000000100deb573 ^ 0xc9;
    bRam0000000100deb594 = bRam0000000100deb574 ^ 0xf6;
    bRam0000000100deb595 = bRam0000000100deb575 ^ 0xfc;
    cRam0000000100deb596 = bRam0000000100deb576 + (bRam0000000100deb576 & 0x3d) * -2 + '=';
    cRam0000000100deb597 = bRam0000000100deb577 + (bRam0000000100deb577 & 0xe3) * -2 + -0x1d;
    uRam0000000100deb598 =
         CONCAT17((byte)((ulong)uRam0000000100deb578 >> 0x38) ^
                  (byte)((ulong)_UNK_100980c48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100deb578 >> 0x30) ^
                           (byte)((ulong)_UNK_100980c48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100deb578 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980c48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100deb578 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980c48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100deb578 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980c48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100deb578 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980c48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100deb578 >> 8) ^
                                                  (byte)((ulong)_UNK_100980c48 >> 8),
                                                  (byte)uRam0000000100deb578 ^ (byte)_UNK_100980c48)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100deb5a0 = bRam0000000100deb580 ^ 0x4a;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100deb5a1 = bRam0000000100deb581 ^ 0x2e;
    uRam0000000100deb5b8 =
         CONCAT17((byte)((ulong)uRam0000000100deb5a8 >> 0x38) ^
                  (byte)((ulong)_UNK_100980c58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100deb5a8 >> 0x30) ^
                           (byte)((ulong)_UNK_100980c58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100deb5a8 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980c58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100deb5a8 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980c58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100deb5a8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980c58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100deb5a8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980c58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100deb5a8 >> 8) ^
                                                  (byte)((ulong)_UNK_100980c58 >> 8),
                                                  (byte)uRam0000000100deb5a8 ^ (byte)_UNK_100980c58)
                                                  ))))));
    bRam0000000100deb5c0 = bRam0000000100deb5b0 ^ 0x61;
    bRam0000000100deb5c1 = bRam0000000100deb5b1 ^ 1;
    bRam0000000100deb5c2 = bRam0000000100deb5b2 ^ 0xd5;
    bRam0000000100deb5c3 = bRam0000000100deb5b3 ^ 0xc4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e92584 = 1;
  func_0x00010095cde0(uRam0000000100c714d0);
  uVar2 = _objc_alloc(uRam0000000100c71418);
  uVar3 = func_0x0001003d3588(param_4);
  func_0x0001003d2948(0,0,uVar3,param_3 + _UNK_100980c40);
  auVar7 = func_0x0001009492e0(uVar2);
  func_0x000100960960(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  func_0x0001003d358c(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d3590(auVar7._0_8_,auVar7._8_8_,1);
  _objc_release(auVar7._0_8_);
  func_0x000100970d60(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972a60();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100939b60(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100969ee0(auVar7._0_8_,auVar7._8_8_,uVar3);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000100939b60(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  uVar3 = func_0x000100939900(param_4);
  func_0x000100939b60(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d3594(uVar3);
  _objc_release(uVar2);
  uVar2 = _objc_alloc(uRam0000000100c71418);
  uVar3 = func_0x0001003d3598(param_4);
  func_0x0001003d2948(0,0,uVar3,param_3 + 50.0);
  auVar7 = func_0x0001009492e0(uVar2);
  func_0x0001003d359c(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  uVar3 = func_0x0001003d35a0(param_4);
  func_0x000100976dc0(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d35a4(uVar3);
  _objc_release(uVar2);
  func_0x0001003d35a8(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  auVar7 = func_0x000100951360(uRam0000000100c71ab0);
  uVar2 = auVar7._0_8_;
  func_0x0001009606c0(uVar2,auVar7._8_8_,0);
  func_0x0001009634a0(uVar2,extraout_x1,1);
  func_0x00010095fa20(uVar2,extraout_x1_00,0);
  func_0x00010096d560(0x4034000000000000,uVar2);
  func_0x00010096d620(param_4,extraout_x1_01,uVar2);
  _objc_release(uVar2);
  func_0x0001003d35ac(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100973320(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar2,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar2);
  uVar3 = func_0x0001009433a0(param_4);
  uVar5 = 0;
  uVar6 = 0x4049000000000000;
  uVar4 = func_0x0001003d35b0(0,0,uVar3,0x4049000000000000);
  func_0x000100973320(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d35b4(uVar4,uVar5,uVar3,uVar6);
  _objc_release(uVar2);
  func_0x00010093e480(param_4,extraout_x1_02,0x100deb5d0);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961720(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  func_0x000100973320(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093bc40(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100936600(uVar2,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar2);
  func_0x00010093e480(param_4,extraout_x1_03,0x100deb5f0);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960f60(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  func_0x0001003d35b8(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093a7e0(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100936600(uVar2,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar2);
  func_0x00010093e480(param_4,extraout_x1_04,0x100deb610);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d35bc(param_4,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  func_0x000100973320(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009444c0(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100936600(uVar2,auVar7._8_8_,auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar7._0_8_);
  _objc_release(uVar2);
  func_0x00010093bc40(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e7e0(auVar7._0_8_,auVar7._8_8_,1);
  _objc_release(auVar7._0_8_);
  func_0x0001003d35c0(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x0001003d35c4(auVar7._0_8_,auVar7._8_8_,2);
  _objc_release(auVar7._0_8_);
  func_0x0001003d35c8(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e7e0(auVar7._0_8_,auVar7._8_8_,3);
  _objc_release(auVar7._0_8_);
  func_0x0001003d35cc(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_toolButtonHandle__100c6fb48;
  func_0x0001009375a0(auVar7._0_8_,auVar7._8_8_,param_4,PTR_s_toolButtonHandle__100c6fb48,0x40);
  _objc_release(auVar7._0_8_);
  func_0x00010093a7e0(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x0001003d35d0(auVar7._0_8_,auVar7._8_8_,param_4,puVar1,0x40);
  _objc_release(auVar7._0_8_);
  func_0x0001009444c0(param_4);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009375a0(auVar7._0_8_,auVar7._8_8_,param_4,puVar1,0x40);
  _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView brightnessToolView]
 * Entry: 0x1003d2958; original ABI: @16@0:8
 * Original instructions in modeled body: 105; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2980 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2998 */
/* WARNING: Switch with 1 destination removed at 0x0001003d29c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d29e0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2ad8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2af0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2afc */
/* WARNING: Switch with 1 destination removed at 0x0001003d2b08 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2b24 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2b98 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderBottomView_m02873(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c76014;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar3) != 0) {
  case false:
    uVar2 = _objc_alloc(uRam0000000100c71f30);
    uVar4 = func_0x0001003d3628(param_1);
    uVar6 = 0;
    uVar1 = _UNK_100980c68;
    uVar5 = func_0x0001003d362c(0,0,uVar4,_UNK_100980c68);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar1 = func_0x0001009492e0(uVar5,uVar6,uVar4,uVar1,uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x000100976dc0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100943380();
    func_0x000100964080(*(undefined8 *)(param_1 + lVar3));
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x000100976dc0(param_1);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x0001003d3630(param_1,auVar7._8_8_,uVar1,auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView fontToolView]
 * Entry: 0x1003d2b9c; original ABI: @16@0:8
 * Original instructions in modeled body: 87; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2c28 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2c38 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2c54 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2d7c */

void Recovered_YYYReaderBottomView_m02874(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = (long)iRam0000000100c76018;
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar2) != 0) {
  case false:
    uVar1 = func_0x0001003d3640(uRam0000000100c71f38);
    uVar3 = func_0x0001009433a0(param_1);
    uVar6 = 0x4049000000000000;
    uVar5 = 0;
    uVar4 = func_0x0001003d2948(0,0,uVar3,0x4049000000000000);
    uVar1 = func_0x0001009492e0(uVar4,uVar5,uVar3,uVar6,uVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar1;
    _objc_release(uVar3);
    func_0x0001003d3644(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100943380();
    func_0x0001003d3648(*(undefined8 *)(param_1 + lVar2));
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x000100976dc0(param_1);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x0001003d364c(param_1,auVar7._8_8_,uVar1,auVar7._0_8_);
    _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView showType]
 * Entry: 0x1003d2d80; original ABI: Q16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYReaderBottomView_m02875(long param_1)

{
  return *(undefined8 *)(param_1 + iRam0000000100c7600c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView stackView]
 * Entry: 0x1003d2d90; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2da0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2dac */
/* WARNING: Switch with 1 destination removed at 0x0001003d2db8 */

undefined8 Recovered_YYYReaderBottomView_m02876(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7601c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setStackView:]
 * Entry: 0x1003d2dc4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2ddc */
/* WARNING: Switch with 1 destination removed at 0x0001003d2df4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2e00 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2e30 */

void Recovered_YYYReaderBottomView_m02877(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7601c,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView backgroundView]
 * Entry: 0x1003d2e34; original ABI: @16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYReaderBottomView_m02878(long param_1)

{
  return *(undefined8 *)(param_1 + iRam0000000100c76020);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setBackgroundView:]
 * Entry: 0x1003d2e44; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2e6c */
/* WARNING: Switch with 1 destination removed at 0x0001003d2e78 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2e94 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2ea0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2ee4 */

void Recovered_YYYReaderBottomView_m02879(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c76020;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView toolView]
 * Entry: 0x1003d2ee8; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2ef8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2f04 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2f10 */

undefined8 Recovered_YYYReaderBottomView_m02880(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c76024);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setToolView:]
 * Entry: 0x1003d2f1c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2f50 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2f6c */

void Recovered_YYYReaderBottomView_m02881(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c76024;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView catalogButton]
 * Entry: 0x1003d2f80; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2f90 */

undefined8 Recovered_YYYReaderBottomView_m02882(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c76028);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setCatalogButton:]
 * Entry: 0x1003d2f9c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d2fbc */
/* WARNING: Switch with 1 destination removed at 0x0001003d2fd0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d2fdc */
/* WARNING: Switch with 1 destination removed at 0x0001003d2ff8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3030 */

void Recovered_YYYReaderBottomView_m02883(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c76028;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView brightnessButton]
 * Entry: 0x1003d3034; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d3044 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3050 */

undefined8 Recovered_YYYReaderBottomView_m02884(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7602c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setBrightnessButton:]
 * Entry: 0x1003d305c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d3074 */
/* WARNING: Switch with 1 destination removed at 0x0001003d308c */
/* WARNING: Switch with 1 destination removed at 0x0001003d30bc */

void Recovered_YYYReaderBottomView_m02885(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7602c,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView fontButton]
 * Entry: 0x1003d30c0; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d30c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d30d4 */
/* WARNING: Switch with 1 destination removed at 0x0001003d30e8 */

undefined8 Recovered_YYYReaderBottomView_m02886(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c76030);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setFontButton:]
 * Entry: 0x1003d30f4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d310c */
/* WARNING: Switch with 1 destination removed at 0x0001003d3124 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3154 */

void Recovered_YYYReaderBottomView_m02887(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c76030,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setBrightnessToolView:]
 * Entry: 0x1003d3158; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d3180 */
/* WARNING: Switch with 1 destination removed at 0x0001003d31b8 */

void Recovered_YYYReaderBottomView_m02888(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c76014;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setFontToolView:]
 * Entry: 0x1003d31bc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYReaderBottomView_m02889(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c76018;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView showTypeChangeBlock]
 * Entry: 0x1003d31f4; original ABI: @?16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d3204 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3210 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3220 */

undefined8 Recovered_YYYReaderBottomView_m02890(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c76034);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setShowTypeChangeBlock:]
 * Entry: 0x1003d3228; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d324c */
/* WARNING: Switch with 1 destination removed at 0x0001003d3260 */
/* WARNING: Switch with 1 destination removed at 0x0001003d326c */
/* WARNING: Switch with 1 destination removed at 0x0001003d32b0 */

void Recovered_YYYReaderBottomView_m02891(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  func_0x0001003d3654(param_1,param_2,param_3,(long)iRam0000000100c76034);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView showBrightness]
 * Entry: 0x1003d32b4; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d32bc */
/* WARNING: Switch with 1 destination removed at 0x0001003d32d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003d32dc */

undefined1 Recovered_YYYReaderBottomView_m02892(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + iRam0000000100c76010);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView setShowBrightness:]
 * Entry: 0x1003d32e8; original ABI: v20@0:8B16
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d32f8 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3308 */

void Recovered_YYYReaderBottomView_m02893(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c76010) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderBottomView .cxx_destruct]
 * Entry: 0x1003d3324; original ABI: v16@0:8
 * Original instructions in modeled body: 64; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003d3358 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3364 */
/* WARNING: Switch with 1 destination removed at 0x0001003d3470 */

void Recovered_YYYReaderBottomView_m02894(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c76034,0);
  _objc_storeStrong(param_1 + iRam0000000100c76018,0);
  _objc_storeStrong(param_1 + iRam0000000100c76014,0);
  _objc_storeStrong(param_1 + iRam0000000100c76030,0);
  _objc_storeStrong(param_1 + iRam0000000100c7602c,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c76028,0);
  _objc_storeStrong(param_1 + iRam0000000100c76024,0);
  _objc_storeStrong(param_1 + iRam0000000100c76020,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c7601c,0);
  return;
}



