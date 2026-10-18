/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView initWithFrame:]
 * Entry: 0x10000825c; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 103; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000829c */
/* WARNING: Switch with 1 destination removed at 0x0001000082b0 */
/* WARNING: Switch with 1 destination removed at 0x0001000082bc */
/* WARNING: Switch with 1 destination removed at 0x000100008374 */
/* WARNING: Switch with 1 destination removed at 0x000100008388 */
/* WARNING: Switch with 1 destination removed at 0x000100008404 */
/* WARNING: Switch with 1 destination removed at 0x000100008420 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYFontToolView_m00018
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = uRam0000000100c73838;
  uStack_70 = param_5;
  lVar1 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                              PTR_s_initWithFrame__100c61370);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x00010000ca18(lVar1);
    func_0x00010093fce0(uRam0000000100c71400);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937080(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_fontChange_100c5f828,_UNK_100b00d30,0)
    ;
    _objc_release(auVar3._0_8_);
    func_0x00010093fce0(uRam0000000100c71400);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937080(auVar3._0_8_,auVar3._8_8_,lVar1,PTR_s_styleChange_100c6eef0,_UNK_100b00d28,0
                       );
    _objc_release(auVar3._0_8_);
    func_0x000100974380(lVar1);
    func_0x0001009444e0(lVar1);
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView styleChange]
 * Entry: 0x100008424; original ABI: v16@0:8
 * Original instructions in modeled body: 143; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000085c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000086c4 */

void Recovered_YYYFontToolView_m00019(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976de0();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca1c(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca20();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca24(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar3._0_8_,auVar3._8_8_,uVar2);
  func_0x000100972840(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100974480(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100970d60(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca28();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f120(uVar1,auVar3._8_8_,auVar3._0_8_,0);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100936700(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100970d60(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976e00();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f120(uVar1,auVar3._8_8_,auVar3._0_8_,0);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100970d60(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972a60();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100974480(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar3._0_8_,auVar3._8_8_,uVar2);
  func_0x00010000ca2c(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca30(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView fontChange]
 * Entry: 0x1000086c8; original ABI: v16@0:8
 * Original instructions in modeled body: 198; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000086ec */
/* WARNING: Switch with 1 destination removed at 0x0001000086fc */
/* WARNING: Switch with 1 destination removed at 0x000100008718 */
/* WARNING: Switch with 1 destination removed at 0x000100008724 */
/* WARNING: Switch with 1 destination removed at 0x00010000874c */
/* WARNING: Switch with 1 destination removed at 0x000100008758 */
/* WARNING: Switch with 1 destination removed at 0x0001000087b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000087c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000087d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000087fc */
/* WARNING: Switch with 1 destination removed at 0x00010000880c */
/* WARNING: Switch with 1 destination removed at 0x000100008818 */
/* WARNING: Switch with 1 destination removed at 0x000100008828 */
/* WARNING: Switch with 1 destination removed at 0x00010000885c */
/* WARNING: Switch with 1 destination removed at 0x00010000886c */
/* WARNING: Switch with 1 destination removed at 0x0001000088d8 */
/* WARNING: Switch with 1 destination removed at 0x000100008924 */
/* WARNING: Switch with 1 destination removed at 0x0001000089a0 */
/* WARNING: Switch with 1 destination removed at 0x000100008a14 */
/* WARNING: Switch with 1 destination removed at 0x000100008a68 */
/* WARNING: Switch with 1 destination removed at 0x000100008ae4 */

void Recovered_YYYFontToolView_m00020(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  func_0x00010000ca38(uRam0000000100c71408);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)func_0x000100944580();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar3 == 16.0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(dVar3 == 30.0) {
    case false:
      func_0x000100974480(param_1);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x000100963ac0(auVar4._0_8_,auVar4._8_8_,1);
      _objc_release(auVar4._0_8_);
      func_0x000100974480(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x00010095fc00(0x3ff0000000000000,uVar2);
      _objc_release(uVar2);
      func_0x000100936700(param_1);
      auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x00010000ca48(auVar4._0_8_,auVar4._8_8_,1);
      _objc_release(auVar4._0_8_);
      func_0x00010000ca4c(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x00010095fc00(0x3ff0000000000000);
      _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      func_0x00010000ca40(param_1);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x00010000ca44(auVar4._0_8_,auVar4._8_8_,0);
      _objc_release(auVar4._0_8_);
      func_0x000100936700(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010095fc00(0x3fe0000000000000,uVar2);
      _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100974480(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010000ca3c(auVar4._0_8_,auVar4._8_8_,0);
    _objc_release(auVar4._0_8_);
    func_0x000100974480(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010095fc00(0x3fe0000000000000);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100951a00(dVar3,uRam0000000100c71410);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100974120();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972840(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView buttonHandle:]
 * Entry: 0x100008ae8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 64; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100008b10 */
/* WARNING: Switch with 1 destination removed at 0x000100008b20 */
/* WARNING: Switch with 1 destination removed at 0x000100008b30 */
/* WARNING: Switch with 1 destination removed at 0x000100008b94 */
/* WARNING: Switch with 1 destination removed at 0x000100008c4c */

void Recovered_YYYFontToolView_m00021(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = _objc_retain(param_3);
  func_0x000100936700(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010000ca60(uRam0000000100c71408);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)func_0x000100944580();
  _objc_release(uVar3);
  dVar5 = 2.0;
  if (lVar2 != lVar1) {
    dVar5 = -2.0;
  }
                    /* WARNING: Switch is manually overridden */
  func_0x000100970d60(uRam0000000100c71408);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964760(dVar5 + dVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView loadSubviews]
 * Entry: 0x100008c50; original ABI: v16@0:8
 * Original instructions in modeled body: 434; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100008c78 */
/* WARNING: Switch with 1 destination removed at 0x000100008c84 */
/* WARNING: Switch with 1 destination removed at 0x000100008c9c */
/* WARNING: Switch with 1 destination removed at 0x000100008ca8 */
/* WARNING: Switch with 1 destination removed at 0x000100008cec */
/* WARNING: Switch with 1 destination removed at 0x000100008d10 */
/* WARNING: Switch with 1 destination removed at 0x000100008da8 */
/* WARNING: Switch with 1 destination removed at 0x000100008e10 */
/* WARNING: Switch with 1 destination removed at 0x000100008e2c */
/* WARNING: Switch with 1 destination removed at 0x000100009160 */
/* WARNING: Switch with 1 destination removed at 0x000100009170 */
/* WARNING: Switch with 1 destination removed at 0x000100009430 */
/* WARNING: Switch with 1 destination removed at 0x000100009440 */
/* WARNING: Switch with 1 destination removed at 0x000100009804 */

void Recovered_YYYFontToolView_m00022(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar6 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90c80 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uRam0000000100ca2a36 = uRam0000000100ca2a30 ^ 0x8535;
    uRam0000000100ca2a38 = uRam0000000100ca2a32 ^ 0xfe11;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100ca2a3a = uRam0000000100ca2a34 ^ 0xcffd;
    bRam0000000100ca2a3f = bRam0000000100ca2a3c ^ 0x68;
    cRam0000000100ca2a40 = bRam0000000100ca2a3d + (bRam0000000100ca2a3d & 0x78) * -2 + 'x';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca2a41 = bRam0000000100ca2a3e ^ 0x9d;
    bRam0000000100ca2a45 = bRam0000000100ca2a42 ^ 0x53;
    bRam0000000100ca2a46 = bRam0000000100ca2a43 ^ 0xed;
    cRam0000000100ca2a47 = bRam0000000100ca2a44 + (bRam0000000100ca2a44 & 3) * -2 + '\x03';
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90c80 = 1;
  auVar6 = func_0x000100951360(uRam0000000100c71418);
  func_0x000100962180(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x00010093dd00(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  auVar6 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096f180(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x00010097a8a0(0x100ca2a50);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca70(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca74(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca78(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010093dd00(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar2,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1,0);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096da00(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x000100974480(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca7c(auVar6._0_8_,auVar6._8_8_,0x100ca2a70,0);
  _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca80(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010093dd00(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100974480(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar2,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  auVar6 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096d220(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972840(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca84(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010000ca88(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea20(auVar6._0_8_,auVar6._8_8_,1);
  _objc_release(auVar6._0_8_);
  func_0x00010093dd00(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca8c(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca90(uVar2,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1_00,0);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca94(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x000100936700(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f100(auVar6._0_8_,auVar6._8_8_,0x100ca2a90,0);
  _objc_release(auVar6._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100936700(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000ca98(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010000ca9c(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100936700(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010000caa0(uVar2,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010000caa4(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962300(0x402e000000000000);
  func_0x000100974480(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  uVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962300(0x402e000000000000);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x000100974480(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_buttonHandle__100c5c1e8;
  func_0x0001009375a0(auVar6._0_8_,auVar6._8_8_,param_1,PTR_s_buttonHandle__100c5c1e8,0x40);
  _objc_release(auVar6._0_8_);
  func_0x000100936700(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009375a0(auVar6._0_8_,auVar6._8_8_,param_1,puVar1,0x40);
  _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView yyy_setupViewsConstraints]
 * Entry: 0x100009824; original ABI: v16@0:8
 * Original instructions in modeled body: 156; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000985c */
/* WARNING: Switch with 1 destination removed at 0x000100009878 */
/* WARNING: Switch with 1 destination removed at 0x000100009b80 */
/* WARNING: Switch with 1 destination removed at 0x000100009bfc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYFontToolView_m00023(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined *puStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  
  ppuStack_80 = &puStack_f0;
  ppuStack_78 = &puStack_120;
  uStack_88 = uRam0000000100c73838;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x00010093dd00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _UNK_10097b060;
  puStack_c0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_b8 = _UNK_10097b060;
  puStack_b0 = &DAT_100009c00;
  puStack_a8 = &UNK_100afeb38;
  uStack_a0 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_c0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x00010000caf4(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
  puStack_f0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_e8 = uVar1;
  puStack_e0 = &DAT_10000b324;
  puStack_d8 = &UNK_100afeb38;
  uStack_d0 = param_1;
  func_0x00010000caf8(auVar3._0_8_,auVar3._8_8_,ppuStack_80);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100974480(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_120 = puVar2;
  uStack_118 = uVar1;
  puStack_110 = &DAT_10000b548;
  puStack_108 = &UNK_100afeb38;
  uStack_100 = param_1;
  func_0x00010000cafc(auVar3._0_8_,auVar3._8_8_,ppuStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100972840(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_150 = puVar2;
  uStack_148 = uVar1;
  puStack_140 = &DAT_10000ba48;
                    /* WARNING: Switch is manually overridden */
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
  puStack_138 = &UNK_100afeb38;
  uStack_130 = param_1;
  func_0x00010000cb00(auVar3._0_8_,auVar3._8_8_,&puStack_150);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x00010000cb04(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uStack_178 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
  uStack_174 = 0;
  puStack_170 = &DAT_10000bfd0;
  puStack_168 = &UNK_100afeb38;
  puStack_180 = puVar2;
  uStack_160 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_180);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView titleLabel]
 * Entry: 0x10000c544; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c54c */
/* WARNING: Switch with 1 destination removed at 0x00010000c560 */

undefined8 Recovered_YYYFontToolView_m00024(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751b0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setTitleLabel:]
 * Entry: 0x10000c56c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c58c */
/* WARNING: Switch with 1 destination removed at 0x00010000c598 */
/* WARNING: Switch with 1 destination removed at 0x00010000c5a8 */
/* WARNING: Switch with 1 destination removed at 0x00010000c5e0 */
/* WARNING: Switch with 1 destination removed at 0x00010000c604 */

void Recovered_YYYFontToolView_m00025(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c751b0;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView subButton]
 * Entry: 0x10000c608; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c618 */
/* WARNING: Switch with 1 destination removed at 0x00010000c624 */
/* WARNING: Switch with 1 destination removed at 0x00010000c630 */

undefined8 Recovered_YYYFontToolView_m00026(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751b4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setSubButton:]
 * Entry: 0x10000c63c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c65c */
/* WARNING: Switch with 1 destination removed at 0x00010000c668 */
/* WARNING: Switch with 1 destination removed at 0x00010000c678 */
/* WARNING: Switch with 1 destination removed at 0x00010000c6b4 */

void Recovered_YYYFontToolView_m00027(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + iRam0000000100c751b4,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView addButton]
 * Entry: 0x10000c6b8; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c6c8 */

undefined8 Recovered_YYYFontToolView_m00028(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751b8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setAddButton:]
 * Entry: 0x10000c6d4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c6f8 */
/* WARNING: Switch with 1 destination removed at 0x00010000c708 */
/* WARNING: Switch with 1 destination removed at 0x00010000c738 */
/* WARNING: Switch with 1 destination removed at 0x00010000c744 */
/* WARNING: Switch with 1 destination removed at 0x00010000c774 */

void Recovered_YYYFontToolView_m00029(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c751b8;
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
 * Method: -[YYYFontToolView sizeLabel]
 * Entry: 0x10000c778; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c788 */
/* WARNING: Switch with 1 destination removed at 0x00010000c798 */
/* WARNING: Switch with 1 destination removed at 0x00010000c7a4 */

undefined8 Recovered_YYYFontToolView_m00030(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751bc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setSizeLabel:]
 * Entry: 0x10000c7b0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c7d4 */
/* WARNING: Switch with 1 destination removed at 0x00010000c7e0 */
/* WARNING: Switch with 1 destination removed at 0x00010000c81c */

void Recovered_YYYFontToolView_m00031(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeStrong(param_1 + iRam0000000100c751bc,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView stackView]
 * Entry: 0x10000c820; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c828 */
/* WARNING: Switch with 1 destination removed at 0x00010000c83c */

undefined8 Recovered_YYYFontToolView_m00032(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751c0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setStackView:]
 * Entry: 0x10000c848; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c85c */

void Recovered_YYYFontToolView_m00033(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c751c0,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView contentView]
 * Entry: 0x10000c868; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c878 */
/* WARNING: Switch with 1 destination removed at 0x00010000c884 */
/* WARNING: Switch with 1 destination removed at 0x00010000c894 */

undefined8 Recovered_YYYFontToolView_m00034(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c751c4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView setContentView:]
 * Entry: 0x10000c89c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c8bc */
/* WARNING: Switch with 1 destination removed at 0x00010000c8d0 */
/* WARNING: Switch with 1 destination removed at 0x00010000c8ec */
/* WARNING: Switch with 1 destination removed at 0x00010000c900 */
/* WARNING: Switch with 1 destination removed at 0x00010000c924 */

void Recovered_YYYFontToolView_m00035(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c751c4;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYFontToolView .cxx_destruct]
 * Entry: 0x10000c938; original ABI: v16@0:8
 * Original instructions in modeled body: 48; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c95c */
/* WARNING: Switch with 1 destination removed at 0x00010000c9b8 */
/* WARNING: Switch with 1 destination removed at 0x00010000ca14 */

void Recovered_YYYFontToolView_m00036(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c751c4,0);
  _objc_storeStrong(param_1 + iRam0000000100c751c0,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c751bc,0);
  _objc_storeStrong(param_1 + iRam0000000100c751b8,0);
  _objc_storeStrong(param_1 + iRam0000000100c751b4,0);
  _objc_storeStrong(param_1 + iRam0000000100c751b0,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYFontToolView requiresConstraintBasedLayout]
 * Entry: 0x10000c518; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000c520 */
/* WARNING: Switch with 1 destination removed at 0x00010000c52c */
/* WARNING: Switch with 1 destination removed at 0x00010000c538 */

undefined8 Recovered_YYYFontToolView_m00037(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



