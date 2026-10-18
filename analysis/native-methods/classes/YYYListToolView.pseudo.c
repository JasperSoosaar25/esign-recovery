/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView initWithFrame:]
 * Entry: 0x100325494; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 90; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003254d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003254e8 */
/* WARNING: Switch with 1 destination removed at 0x000100325510 */
/* WARNING: Switch with 1 destination removed at 0x000100325520 */
/* WARNING: Switch with 1 destination removed at 0x000100325534 */
/* WARNING: Switch with 1 destination removed at 0x000100325544 */
/* WARNING: Switch with 1 destination removed at 0x000100325560 */
/* WARNING: Switch with 1 destination removed at 0x00010032556c */
/* WARNING: Switch with 1 destination removed at 0x0001003255cc */
/* WARNING: Switch with 1 destination removed at 0x0001003255f8 */
/* WARNING: Switch with 1 destination removed at 0x00010032562c */
/* WARNING: Switch with 1 destination removed at 0x000100325648 */

undefined8
Recovered_YYYListToolView_m02299
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73b98;
  uStack_50 = param_5;
  lVar1 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,
                              PTR_s_initWithFrame__100c61370);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x000100327bbc(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100327bc0(0x4039000000000000,uVar2);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010094dda0(lVar1);
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView loadSubviews]
 * Entry: 0x10032564c; original ABI: v16@0:8
 * Original instructions in modeled body: 666; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100325684 */
/* WARNING: Switch with 1 destination removed at 0x0001003256c0 */
/* WARNING: Switch with 1 destination removed at 0x0001003257ac */
/* WARNING: Switch with 1 destination removed at 0x0001003257c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003257dc */
/* WARNING: Switch with 1 destination removed at 0x000100325814 */
/* WARNING: Switch with 1 destination removed at 0x000100325b20 */
/* WARNING: Switch with 1 destination removed at 0x000100325f30 */
/* WARNING: Switch with 1 destination removed at 0x000100326534 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYListToolView_m02300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92138 == 0) {
  case true:
    uRam0000000100dafdca = uRam0000000100dafdc4 ^ 0xd88f;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dafdcc = uRam0000000100dafdc6 ^ 0x8479;
    uRam0000000100dafdce = uRam0000000100dafdc8 ^ 0xf2b4;
    uRam0000000100dafdbe = uRam0000000100dafdb8 ^ 0x530e;
    uRam0000000100dafdc0 = uRam0000000100dafdba ^ 0x30b0;
    uRam0000000100dafdc2 = uRam0000000100dafdbc ^ 0xf3c2;
    uRam0000000100dafdb2 = uRam0000000100dafdac ^ 0x5f67;
    uRam0000000100dafdb4 = uRam0000000100dafdae ^ 0xa360;
    uRam0000000100dafdb6 = uRam0000000100dafdb0 ^ 0x3642;
    uRam0000000100dafda6 = uRam0000000100dafda0 ^ 0xc231;
    uRam0000000100dafda8 = uRam0000000100dafda2 ^ 0xe673;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dafdaa = uRam0000000100dafda4 ^ 0x507;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92138 = 1;
  func_0x000100327bc8(param_1,param_2,1);
  auVar5 = func_0x000100327bcc(uRam0000000100c71418);
  func_0x000100962180(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x00010093cf80(_UNK_10097f980,_UNK_10097f980,_UNK_10097f980,0x3ff0000000000000,
                      uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093dd00(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar5._0_8_,auVar5._8_8_,uVar1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327bd0(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1,0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009638e0(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x000100942240(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bd4(0x100dafdd0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bd8(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327bdc(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979940(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f120(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100327be0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar5._0_8_,auVar5._8_8_,uVar1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327be4(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1_00,0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096d140(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x0001009725e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a8a0(0x100dafdf0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f100(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327be8(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979940(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bec(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327bf0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a9a0(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f120(uVar1,auVar5._8_8_,auVar5._0_8_,2);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bf4(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bf8();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar5._0_8_,auVar5._8_8_,uVar1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009725e0(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1_01,0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327bfc(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x000100327c00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a8a0(0x100dafe10);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f100(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327c04(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c08(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c0c(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327c10(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c14(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c18(uVar1,auVar5._8_8_,auVar5._0_8_,2);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c1c(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar5._0_8_,auVar5._8_8_,uVar1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c20(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1_02,0);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c24(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x000100327c28(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c2c(0x100dafe30);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f100(uVar1,auVar5._8_8_,auVar5._0_8_,0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327c30(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c34(auVar5._0_8_,auVar5._8_8_,1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327c38(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c3c(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar5._0_8_,auVar5._8_8_,uVar1);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095e7a0(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c40(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  func_0x000100327c44(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100326538(0,0x4014000000000000,0,0x4014000000000000);
  func_0x000100961f40(uVar1);
  _objc_release(uVar1);
  func_0x0001009725e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c48(0,0x4014000000000000,0,0x4014000000000000);
  func_0x000100961f40(uVar1);
  _objc_release(uVar1);
  func_0x000100327c4c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100326538(0,0x4014000000000000,0,0x4014000000000000);
  func_0x000100961f40(uVar1);
  _objc_release(uVar1);
  func_0x00010095e7a0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100326538(0,0x4014000000000000,0,0x4014000000000000);
  func_0x000100961f40(uVar1);
  _objc_release(uVar1);
  uVar1 = func_0x000100327c50(uRam0000000100c71418);
  func_0x00010093a760(param_1);
  uVar1 = func_0x0001009492e0(uVar1);
  func_0x000100964020(_UNK_10097f988);
  func_0x000100964080(0,uVar1);
  func_0x000100979940(uRam0000000100c71438);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327c54(uVar1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x000100327c58(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010093e2c0();
  func_0x00010094d2e0(uVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962300(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010094d2e0(uVar1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009670e0(auVar5._0_8_,auVar5._8_8_,1);
  _objc_release(auVar5._0_8_);
  func_0x000100967080(param_1,extraout_x1_03,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView sizeThatFits:]
 * Entry: 0x100326554; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 104; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100326574 */
/* WARNING: Switch with 1 destination removed at 0x000100326600 */
/* WARNING: Switch with 1 destination removed at 0x00010032664c */
/* WARNING: Switch with 1 destination removed at 0x0001003267f4 */

void Recovered_YYYListToolView_m02301(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
                    /* WARNING: Switch is manually overridden */
  func_0x00010095e7a0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327ca4();
  _objc_release(uVar1);
  func_0x000100327ca8(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  func_0x000100327cac(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
  func_0x000100327cb0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
  func_0x00010095e7a0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar2 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  if (dVar2 <= 50.0) {
    dVar2 = 50.0;
  }
  func_0x0001009725e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
  if (dVar3 <= 50.0) {
    dVar3 = 50.0;
  }
  func_0x0001009401a0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar4 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
  if (dVar4 <= 50.0) {
    dVar4 = 50.0;
  }
  func_0x000100942240(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
  if (dVar5 <= 50.0) {
    dVar5 = 50.0;
  }
  func_0x000100327cb4(dVar2 + dVar3 + dVar4 + dVar5 + 15.0,0x4049000000000000);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView layoutSubviews]
 * Entry: 0x100326814; original ABI: v16@0:8
 * Original instructions in modeled body: 412; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100326844 */
/* WARNING: Switch with 1 destination removed at 0x000100326854 */
/* WARNING: Switch with 1 destination removed at 0x000100326860 */
/* WARNING: Switch with 1 destination removed at 0x0001003268b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003268dc */
/* WARNING: Switch with 1 destination removed at 0x0001003268ec */
/* WARNING: Switch with 1 destination removed at 0x000100326900 */
/* WARNING: Switch with 1 destination removed at 0x00010032690c */
/* WARNING: Switch with 1 destination removed at 0x000100326940 */
/* WARNING: Switch with 1 destination removed at 0x00010032696c */
/* WARNING: Switch with 1 destination removed at 0x00010032697c */
/* WARNING: Switch with 1 destination removed at 0x0001003269b8 */
/* WARNING: Switch with 1 destination removed at 0x0001003269c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003269d0 */
/* WARNING: Switch with 1 destination removed at 0x000100326a20 */
/* WARNING: Switch with 1 destination removed at 0x000100326a4c */
/* WARNING: Switch with 1 destination removed at 0x000100326a78 */
/* WARNING: Switch with 1 destination removed at 0x000100326a88 */
/* WARNING: Switch with 1 destination removed at 0x000100326a94 */
/* WARNING: Switch with 1 destination removed at 0x000100326ac0 */
/* WARNING: Switch with 1 destination removed at 0x000100326afc */
/* WARNING: Switch with 1 destination removed at 0x000100326b08 */
/* WARNING: Switch with 1 destination removed at 0x000100326b50 */
/* WARNING: Switch with 1 destination removed at 0x000100326b64 */
/* WARNING: Switch with 1 destination removed at 0x000100326b78 */
/* WARNING: Switch with 1 destination removed at 0x000100326be8 */
/* WARNING: Switch with 1 destination removed at 0x000100326bfc */
/* WARNING: Switch with 1 destination removed at 0x000100326e8c */
/* WARNING: Switch with 1 destination removed at 0x000100326f38 */
/* WARNING: Switch with 1 destination removed at 0x000100326f64 */
/* WARNING: Switch with 1 destination removed at 0x000100326f90 */
/* WARNING: Switch with 1 destination removed at 0x000100326fc8 */
/* WARNING: Switch with 1 destination removed at 0x000100327004 */
/* WARNING: Switch with 1 destination removed at 0x0001003271e4 */
/* WARNING: Switch with 1 destination removed at 0x0001003272e8 */

void Recovered_YYYListToolView_m02302
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = uRam0000000100c73b98;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_100c62d78);
  uVar6 = func_0x00010093a760(param_5);
  func_0x00010094f560(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327cc4(uVar6,param_2,param_3,param_4);
  _objc_release(uVar1);
  uVar6 = func_0x00010093a760(param_5);
  func_0x00010093dd00(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964900(uVar6,param_2,param_3,param_4);
  _objc_release(uVar1);
  func_0x00010095e7a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
  func_0x000100327cc8(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100972900(uVar1);
  _objc_release(uVar1);
  func_0x0001009401a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
  func_0x000100942240(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972900();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010095e7a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < 50.0) {
  case true:
    func_0x00010095e7a0(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x0001009640a0(0x4049000000000000,uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  }
  func_0x0001009725e0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x0001009433a0();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < 50.0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x0001009725e0(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100327ccc(0x4049000000000000,uVar1);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001009401a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x000100327cd0();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < 50.0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100327cd4(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100327cd8(0x4049000000000000,uVar1);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  func_0x000100942240(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  dVar5 = (double)func_0x0001009433a0();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < 50.0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100942240(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009640a0(0x4049000000000000);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
  }
  uVar7 = func_0x000100327cdc(param_5);
  func_0x000100327ce0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964000(uVar7);
  func_0x0001009401a0(param_5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327ce4(uVar7);
  func_0x000100327ce8(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964000(uVar7);
  func_0x00010095e7a0(param_5);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100327cec(uVar7);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x00010095e7a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964020(0);
  _objc_release(uVar1);
  func_0x00010095e7a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x000100327cf0();
  func_0x000100327cf4(param_5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100327cf8(dVar5 + 5.0,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x0001009725e0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x000100327cfc();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001009401a0(param_5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964020(dVar5 + 5.0);
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x0001009401a0(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x000100943340();
  func_0x000100942240(param_5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964020(dVar5 + 5.0);
  _objc_release(uVar6);
  _objc_release(uVar1);
  uVar4 = func_0x0001009720a0(param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100326c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100db02b0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setShowMore:]
 * Entry: 0x100327368; original ABI: v20@0:8B16
 * Original instructions in modeled body: 46; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003273c0 */
/* WARNING: Switch with 1 destination removed at 0x00010032742c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYListToolView_m02303(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  puStack_90 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c75e10) = param_3;
  uStack_88 = _UNK_10097b060;
  puStack_80 = &DAT_100327450;
  puStack_78 = &UNK_100b00a58;
  lStack_70 = param_1;
  uStack_68 = param_3;
  func_0x000100938340(_UNK_10097b0c8,uRam0000000100c71418,param_2,&puStack_90);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView pointInside:withEvent:]
 * Entry: 0x10032761c; original ABI: B40@0:8{CGPoint=dd}16@32
 * Original instructions in modeled body: 38; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327650 */
/* WARNING: Switch with 1 destination removed at 0x000100327678 */
/* WARNING: Switch with 1 destination removed at 0x0001003276bc */

void Recovered_YYYListToolView_m02304
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_5);
                    /* WARNING: Switch is manually overridden */
  uStack_58 = uRam0000000100c73b98;
  uStack_60 = param_3;
  uVar2 = func_0x000100327d58(param_1,param_2,&uStack_60,PTR_s_pointInside_withEvent__100c650c0,
                              uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001003276cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100db0490))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView contentView]
 * Entry: 0x10032777c; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010032778c */
/* WARNING: Switch with 1 destination removed at 0x000100327798 */

undefined8 Recovered_YYYListToolView_m02305(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75e14);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setContentView:]
 * Entry: 0x1003277a4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003277bc */
/* WARNING: Switch with 1 destination removed at 0x0001003277d4 */
/* WARNING: Switch with 1 destination removed at 0x0001003277f8 */
/* WARNING: Switch with 1 destination removed at 0x000100327804 */

void Recovered_YYYListToolView_m02306(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75e14,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView editButton]
 * Entry: 0x100327814; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010032781c */
/* WARNING: Switch with 1 destination removed at 0x000100327830 */

undefined8 Recovered_YYYListToolView_m02307(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75e18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setEditButton:]
 * Entry: 0x10032783c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010032785c */
/* WARNING: Switch with 1 destination removed at 0x00010032786c */
/* WARNING: Switch with 1 destination removed at 0x000100327884 */
/* WARNING: Switch with 1 destination removed at 0x0001003278b8 */

void Recovered_YYYListToolView_m02308(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + iRam0000000100c75e18);
  *(undefined8 *)(param_1 + iRam0000000100c75e18) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView signButton]
 * Entry: 0x1003278bc; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003278c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003278d8 */
/* WARNING: Switch with 1 destination removed at 0x0001003278e4 */

undefined8 Recovered_YYYListToolView_m02309(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75e1c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setSignButton:]
 * Entry: 0x1003278f0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327904 */

void Recovered_YYYListToolView_m02310(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75e1c,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView deleteButton]
 * Entry: 0x100327910; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327920 */
/* WARNING: Switch with 1 destination removed at 0x00010032792c */

undefined8 Recovered_YYYListToolView_m02311(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75e20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setDeleteButton:]
 * Entry: 0x100327938; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327958 */
/* WARNING: Switch with 1 destination removed at 0x00010032796c */
/* WARNING: Switch with 1 destination removed at 0x000100327998 */

void Recovered_YYYListToolView_m02312(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75e20;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView selectAllButton]
 * Entry: 0x1003279ac; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003279bc */
/* WARNING: Switch with 1 destination removed at 0x0001003279c8 */

undefined8 Recovered_YYYListToolView_m02313(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75e24);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView setSelectAllButton:]
 * Entry: 0x1003279d4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003279f4 */
/* WARNING: Switch with 1 destination removed at 0x000100327a1c */
/* WARNING: Switch with 1 destination removed at 0x000100327a28 */
/* WARNING: Switch with 1 destination removed at 0x000100327a38 */
/* WARNING: Switch with 1 destination removed at 0x000100327a6c */

void Recovered_YYYListToolView_m02314(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75e24;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView showMore]
 * Entry: 0x100327a70; original ABI: B16@0:8
 * Original instructions in modeled body: 15; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327a80 */
/* WARNING: Switch with 1 destination removed at 0x000100327a8c */
/* WARNING: Switch with 1 destination removed at 0x000100327a9c */

bool Recovered_YYYListToolView_m02315(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + iRam0000000100c75e10) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYListToolView .cxx_destruct]
 * Entry: 0x100327aac; original ABI: v16@0:8
 * Original instructions in modeled body: 49; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100327adc */
/* WARNING: Switch with 1 destination removed at 0x000100327b68 */
/* WARNING: Switch with 1 destination removed at 0x000100327b80 */
/* WARNING: Switch with 1 destination removed at 0x000100327bb8 */

void Recovered_YYYListToolView_m02316(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75e24,0);
  _objc_storeStrong(param_1 + iRam0000000100c75e20,0);
  _objc_storeStrong(param_1 + iRam0000000100c75e1c,0);
  _objc_storeStrong(param_1 + iRam0000000100c75e18,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75e14,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



