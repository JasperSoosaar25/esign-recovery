/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView initWithFrame:]
 * Entry: 0x10002f898; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 71; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f8d4 */
/* WARNING: Switch with 1 destination removed at 0x00010002f8fc */
/* WARNING: Switch with 1 destination removed at 0x00010002f938 */
/* WARNING: Switch with 1 destination removed at 0x00010002f948 */
/* WARNING: Switch with 1 destination removed at 0x00010002f95c */
/* WARNING: Switch with 1 destination removed at 0x00010002f978 */
/* WARNING: Switch with 1 destination removed at 0x00010002f98c */
/* WARNING: Switch with 1 destination removed at 0x00010002f9f0 */

undefined8 Recovered_YYYLanZouQRCodeView_m00192(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = uRam0000000100c73878;
  uStack_40 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__100c61370);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010093cfa0(0,0x3fe0000000000000,uRam0000000100c71438);
    auVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100960820(lVar1,auVar3._8_8_,auVar3._0_8_);
    _objc_release(auVar3._0_8_);
    func_0x000100034644(0,lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010094dda0(lVar1);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView showWithFile:]
 * Entry: 0x10002f9f4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 130; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002fa20 */
/* WARNING: Switch with 1 destination removed at 0x00010002fa34 */
/* WARNING: Switch with 1 destination removed at 0x00010002fa40 */
/* WARNING: Switch with 1 destination removed at 0x00010002fa4c */
/* WARNING: Switch with 1 destination removed at 0x00010002fa70 */
/* WARNING: Switch with 1 destination removed at 0x00010002fb68 */
/* WARNING: Switch with 1 destination removed at 0x00010002fb80 */
/* WARNING: Switch with 1 destination removed at 0x00010002fbdc */
/* WARNING: Switch with 1 destination removed at 0x00010002fbe8 */
/* WARNING: Switch with 1 destination removed at 0x00010002fee0 */

void Recovered_YYYLanZouQRCodeView_m00193(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f0c == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100caef22 = bRam0000000100caef20 ^ 0x9b;
    bRam0000000100caef23 = bRam0000000100caef21 ^ 6;
    uRam0000000100caef50 = uRam0000000100caef30 ^ 0x5335;
    uRam0000000100caef52 = uRam0000000100caef32 ^ 0x9718;
    sRam0000000100caef54 = uRam0000000100caef34 + (uRam0000000100caef34 & 0x6798) * -2 + 0x6798;
    uRam0000000100caef56 = uRam0000000100caef36 ^ 0x3a8f;
    uRam0000000100caef58 = uRam0000000100caef38 ^ 0xf637;
    uRam0000000100caef5a = uRam0000000100caef3a ^ 0xcb9;
    sRam0000000100caef5c = uRam0000000100caef3c + (uRam0000000100caef3c & 0x387) * -2 + -0x7c79;
    sRam0000000100caef5e = uRam0000000100caef3e + (uRam0000000100caef3e & 0x2abc) * -2 + 0x2abc;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100caef60 = uRam0000000100caef40 ^ 0x9b3b;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90f0c = 1;
  uVar1 = _objc_retain(param_3);
  func_0x000100951ea0(uVar1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x00010094b580(auVar3._0_8_,auVar3._8_8_,0x100caef70);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010002fbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100caf378))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView dismiss]
 * Entry: 0x10002ffd4; original ABI: v16@0:8
 * Original instructions in modeled body: 45; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003000c */
/* WARNING: Switch with 1 destination removed at 0x00010003001c */
/* WARNING: Switch with 1 destination removed at 0x000100030038 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYLanZouQRCodeView_m00194(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100938360(_UNK_10097b0c8,uRam0000000100c71418);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView createQRCodeImageFromString:]
 * Entry: 0x100030140; original ABI: @24@0:8@16
 * Original instructions in modeled body: 50; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100030160 */
/* WARNING: Switch with 1 destination removed at 0x0001000301b0 */
/* WARNING: Switch with 1 destination removed at 0x0001000301c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000301d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000301dc */

void Recovered_YYYLanZouQRCodeView_m00195(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar2 = _objc_retain(param_3);
  func_0x00010093e7a0(param_1,auVar2._8_8_,auVar2._0_8_);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010003468c(0x4069000000000000,param_1,auVar3._8_8_,auVar3._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar3._0_8_);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView createQRForString:]
 * Entry: 0x10003031c; original ABI: @24@0:8@16
 * Original instructions in modeled body: 337; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003033c */
/* WARNING: Switch with 1 destination removed at 0x000100030354 */
/* WARNING: Switch with 1 destination removed at 0x0001000303b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000303ec */
/* WARNING: Switch with 1 destination removed at 0x000100030788 */
/* WARNING: Switch with 1 destination removed at 0x000100030834 */
/* WARNING: Switch with 1 destination removed at 0x000100030840 */
/* WARNING: Switch with 1 destination removed at 0x0001000308e8 */

void Recovered_YYYLanZouQRCodeView_m00196(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f10 == 0) {
  case true:
    bRam0000000100caf020 = bRam0000000100caf000 ^ 0xb4;
    bRam0000000100caf021 = bRam0000000100caf001 ^ 0x60;
    bRam0000000100caf022 = bRam0000000100caf002 ^ 0x53;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100caf023 = bRam0000000100caf003 ^ 10;
    bRam0000000100caf024 = bRam0000000100caf004 ^ 0xfb;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100caf025 = bRam0000000100caf005 + (bRam0000000100caf005 & 0x12) * -2 + -0x6e;
    bRam0000000100caf026 = bRam0000000100caf006 ^ 0xd;
    bRam0000000100caf027 = bRam0000000100caf007 ^ 0x19;
    cRam0000000100caf028 = bRam0000000100caf008 + (bRam0000000100caf008 & 0x48) * -2 + -0x38;
    bRam0000000100caf029 = bRam0000000100caf009 ^ 0xa7;
    bRam0000000100caf02a = bRam0000000100caf00a ^ 0xe6;
    bRam0000000100caf02b = bRam0000000100caf00b ^ 0xe5;
    cRam0000000100caf02c = '\x7f' - cRam0000000100caf00c;
    bRam0000000100caf02d = bRam0000000100caf00d ^ 0xf;
    bRam0000000100caf02e = ~((bRam0000000100caf00e | 0xf6) & (bRam0000000100caf00e ^ 0xff | 9));
    bRam0000000100caf02f = bRam0000000100caf00f ^ 0x36;
    bRam0000000100caf030 = bRam0000000100caf010 ^ 0x78;
    bRam0000000100caf031 = bRam0000000100caf011 ^ 0xbb;
    cRam0000000100caf032 = bRam0000000100caf012 + (bRam0000000100caf012 & 0x1d) * -2 + '\x1d';
    bRam0000000100caf033 = bRam0000000100caf013 ^ 0xf9;
    bRam0000000100caf034 = bRam0000000100caf014 ^ 0xef;
    bRam0000000100caefd0 = bRam0000000100caefb0 ^ 0x6e;
    bRam0000000100caefd1 = bRam0000000100caefb1 ^ 0x6b;
    bRam0000000100caefd2 = bRam0000000100caefb2 ^ 0xe2;
    bRam0000000100caefd3 = bRam0000000100caefb3 ^ 0x13;
    bRam0000000100caefd4 = bRam0000000100caefb4 ^ 5;
    bRam0000000100caefd5 = bRam0000000100caefb5 ^ 0x38;
    bRam0000000100caefd6 = bRam0000000100caefb6 ^ 0x93;
    cRam0000000100caefd7 = bRam0000000100caefb7 + (bRam0000000100caefb7 & 0xf9) * -2 + 'y';
    cRam0000000100caefd8 = bRam0000000100caefb8 + (bRam0000000100caefb8 & 0x78) * -2 + -8;
    cRam0000000100caefd9 = bRam0000000100caefb9 + (bRam0000000100caefb9 & 7) * -2 + -0x79;
    cRam0000000100caefda = bRam0000000100caefba + (bRam0000000100caefba & 0x72) * -2 + 'r';
    cRam0000000100caefdb = bRam0000000100caefbb + (bRam0000000100caefbb & 0x59) * -2 + 'Y';
    bRam0000000100caefdc = bRam0000000100caefbc ^ 0x65;
    bRam0000000100caefdd = bRam0000000100caefbd ^ 0xcc;
    bRam0000000100caefde = bRam0000000100caefbe ^ 0xb4;
    bRam0000000100caefdf = bRam0000000100caefbf ^ 0x73;
    bRam0000000100caefe0 = bRam0000000100caefc0 ^ 0xbf;
    bRam0000000100caefe1 = bRam0000000100caefc1 ^ 0xac;
    bRam0000000100caefef = bRam0000000100caefe2 ^ 0x71;
    bRam0000000100caeff0 = bRam0000000100caefe3 ^ 0x45;
    bRam0000000100caeff1 = bRam0000000100caefe4 ^ 0x7c;
    bRam0000000100caeff2 = bRam0000000100caefe5 ^ 0x97;
    cRam0000000100caeff3 = bRam0000000100caefe6 + (bRam0000000100caefe6 & 0x7a) * -2 + 'z';
    cRam0000000100caeff4 = bRam0000000100caefe7 + (bRam0000000100caefe7 & 0x50) * -2 + 'P';
    bRam0000000100caeff5 = bRam0000000100caefe8 ^ 0xbe;
    bRam0000000100caeff6 = bRam0000000100caefe9 ^ 0x7a;
    bRam0000000100caeff7 = bRam0000000100caefea ^ 0xc6;
    bRam0000000100caeff8 = bRam0000000100caefeb ^ 0x6a;
    bRam0000000100caeff9 = bRam0000000100caefec ^ 0xe2;
    cRam0000000100caeffa = bRam0000000100caefed + (bRam0000000100caefed & 0x14) * -2 + -0x6c;
    bRam0000000100caeffb = bRam0000000100caefee ^ 0x1e;
    bRam0000000100caeffe = bRam0000000100caeffc ^ 0xd9;
    cRam0000000100caefff = bRam0000000100caeffd + (bRam0000000100caeffd & 0x12) * -2 + '\x12';
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f10 = 1;
  auVar3 = _objc_retain(param_3);
  func_0x00010093f3a0(auVar3._0_8_,auVar3._8_8_,5);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100034698(uRam0000000100c71588,auVar4._8_8_,0x100caf040);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar5._0_8_;
  func_0x00010003469c(uVar1,auVar5._8_8_,auVar4._0_8_,0x100caf060);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001000346a0(uVar1,extraout_x1,0x100caf080,0x100caf0a0);
  func_0x000100952420(uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView createNonInterpolatedUIImageFormCIImage:withSize:]
 * Entry: 0x1000308ec; original ABI: @32@0:8@16d24
 * Original instructions in modeled body: 174; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003091c */
/* WARNING: Switch with 1 destination removed at 0x000100030928 */
/* WARNING: Switch with 1 destination removed at 0x000100030944 */
/* WARNING: Switch with 1 destination removed at 0x000100030970 */
/* WARNING: Switch with 1 destination removed at 0x000100030b3c */
/* WARNING: Switch with 1 destination removed at 0x000100030b48 */
/* WARNING: Switch with 1 destination removed at 0x000100030bd0 */

void Recovered_YYYLanZouQRCodeView_m00197
               (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
    uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    func_0x000100943180(lVar1);
    uVar5 = func_0x0001000346a8();
    dVar6 = (double)_CGRectGetWidth();
    dVar7 = (double)_CGRectGetHeight(uVar5,param_2,param_3,param_4);
    dVar9 = param_1 / dVar6;
    if (param_1 / dVar7 <= param_1 / dVar6) {
      dVar9 = param_1 / dVar7;
    }
    dVar6 = (double)func_0x0001000346ac(uVar5,param_2,param_3,param_4);
    dVar7 = (double)_CGRectGetHeight(uVar5,param_2,param_3,param_4);
    uVar2 = func_0x0001000346b0();
    auVar10 = _CGBitmapContextCreate(0,(long)(dVar6 * dVar9),(long)(dVar7 * dVar9),8,0,uVar2,0);
    uVar4 = auVar10._0_8_;
    func_0x00010093dec0(uRam0000000100c71590,auVar10._8_8_,0);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x00010093e4c0(uVar5,param_2,param_3,param_4,auVar10._0_8_,auVar10._8_8_,lVar1);
    _CGContextSetInterpolationQuality(uVar4,1);
    _CGContextScaleCTM(dVar9,dVar9,uVar4);
    func_0x0001000346b4(uVar5,param_2,param_3,param_4,uVar4,uVar3);
    uVar5 = _CGBitmapContextCreateImage(uVar4);
    func_0x0001000346b8(uVar2);
    _CGContextRelease(uVar4);
    _CGImageRelease(uVar3);
    func_0x0001009478c0(uRam0000000100c713c0,extraout_x1,uVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x0001000346bc();
    func_0x0001000346c0(uRam0000000100c71598);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar8 = func_0x0001000346c4();
    _UIGraphicsBeginImageContextWithOptions(uVar3,param_2,uVar8,0);
    _objc_release(uVar4);
    uVar3 = 0;
    dVar9 = param_1;
    uVar4 = func_0x000100030bd4(0,0,param_1,param_1);
    func_0x0001000346c8(uVar4,uVar3,param_1,dVar9,uVar2);
    _CGImageRelease(uVar5);
    _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView loadSubviews]
 * Entry: 0x100030bf8; original ABI: v16@0:8
 * Original instructions in modeled body: 318; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100030c20 */
/* WARNING: Switch with 1 destination removed at 0x000100030c34 */
/* WARNING: Switch with 1 destination removed at 0x000100030c48 */
/* WARNING: Switch with 1 destination removed at 0x000100030cc0 */
/* WARNING: Switch with 1 destination removed at 0x000100030cec */
/* WARNING: Switch with 1 destination removed at 0x000100030d20 */
/* WARNING: Switch with 1 destination removed at 0x000100030db8 */
/* WARNING: Switch with 1 destination removed at 0x00010003134c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYLanZouQRCodeView_m00198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f14 == 0) {
  case true:
    uRam0000000100caf0f0 =
         CONCAT17((byte)((ulong)uRam0000000100caf0d0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100caf0d0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100caf0d0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100caf0d0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100caf0d0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100caf0d0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100caf0d0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3e0 >> 8),
                                                  (byte)uRam0000000100caf0d0 ^ (byte)_UNK_10097b3e0)
                                                  ))))));
    uRam0000000100caf0f8 =
         CONCAT17((byte)((ulong)uRam0000000100caf0d8 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100caf0d8 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100caf0d8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100caf0d8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100caf0d8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100caf0d8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100caf0d8 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3e8 >> 8),
                                                  (byte)uRam0000000100caf0d8 ^ (byte)_UNK_10097b3e8)
                                                  ))))));
    uRam0000000100caf100 = uRam0000000100caf0e0 ^ 0xcabb;
    uRam0000000100caf102 = uRam0000000100caf0e2 ^ 0xf653;
    uRam0000000100caf104 = uRam0000000100caf0e4 ^ 0x6fa0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100caf106 = uRam0000000100caf0e6 ^ 0x88b9;
    uRam0000000100caf0c6 = uRam0000000100caf0c0 ^ 0x9363;
    uRam0000000100caf0c8 = uRam0000000100caf0c2 ^ 0xe90d;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100caf0ca = uRam0000000100caf0c4 ^ 0xfac6;
  }
  iRam0000000100e90f14 = 1;
  auVar2 = func_0x000100951360(uRam0000000100c71418);
  func_0x000100962180(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x0001000346cc(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  auVar2 = func_0x000100951360(uRam0000000100c715a0);
  func_0x0001009654a0(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x0001000346d0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096fc00(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x000100979940(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346d4(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346d8(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968560(auVar2._0_8_,auVar2._8_8_,2);
  _objc_release(auVar2._0_8_);
  func_0x000100978840(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  auVar2 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096f0a0(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x0001000346dc(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009768a0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x0001009768a0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346e0(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010097a8a0(0x100caf130);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009768a0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar2._0_8_,auVar2._8_8_,uVar1);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x0001009768a0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x00010093acc0(uRam0000000100c71428,extraout_x1,0);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346e4(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  func_0x00010093cba0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a8a0(0x100caf110);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346e8(uVar1,auVar2._8_8_,auVar2._0_8_,0);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x00010093cba0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000346ec(auVar2._0_8_,auVar2._8_8_,param_1,PTR_s_dismiss_100c5e4e8,0x40);
  _objc_release(auVar2._0_8_);
  func_0x0001000346f0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100970910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100afcb80)(param_1,PTR_s_setupFrame_100c6dce0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setupFrame]
 * Entry: 0x100031350; original ABI: v16@0:8
 * Original instructions in modeled body: 146; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100031388 */
/* WARNING: Switch with 1 destination removed at 0x0001000313ac */
/* WARNING: Switch with 1 destination removed at 0x0001000313c4 */
/* WARNING: Switch with 1 destination removed at 0x000100031514 */
/* WARNING: Switch with 1 destination removed at 0x000100031620 */
/* WARNING: Switch with 1 destination removed at 0x0001000316dc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYLanZouQRCodeView_m00199(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_78;
  
  ppuStack_78 = &puStack_e0;
  func_0x00010093dd00(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
  uVar1 = _UNK_10097b060;
  puStack_b0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_1000316e0;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x000100034718(auVar4._0_8_,auVar4._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  func_0x00010003471c(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___NSConcreteStackBlock_100afc560;
  puStack_e0 = puVar2;
  uStack_d8 = uVar1;
  puStack_d0 = &DAT_100032e90;
  puStack_c8 = &UNK_100afeb38;
  uStack_c0 = param_1;
                    /* WARNING: Switch is manually overridden */
  func_0x000100034720(auVar4._0_8_,auVar4._8_8_,ppuStack_78);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  func_0x000100978840(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar3;
  uStack_108 = uVar1;
  puStack_100 = &DAT_10003327c;
  puStack_f8 = &UNK_100afeb38;
  uStack_f0 = param_1;
  func_0x00010094f380(auVar4._0_8_,auVar4._8_8_,&puStack_110);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  func_0x0001009768a0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar3;
  uStack_138 = uVar1;
  puStack_130 = &DAT_100033678;
  puStack_128 = &UNK_100afeb38;
  uStack_120 = param_1;
                    /* WARNING: Switch is manually overridden */
  func_0x000100034724(auVar4._0_8_,auVar4._8_8_,&puStack_140);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  func_0x00010093cba0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  puStack_170 = puVar3;
  uStack_168 = uVar1;
  puStack_160 = &DAT_100033b2c;
  puStack_158 = &UNK_100afeb38;
  uStack_150 = param_1;
  func_0x000100034728(auVar4._0_8_,auVar4._8_8_,&puStack_170);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView contentView]
 * Entry: 0x100034278; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034280 */
/* WARNING: Switch with 1 destination removed at 0x000100034294 */

undefined8 Recovered_YYYLanZouQRCodeView_m00200(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75288);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setContentView:]
 * Entry: 0x1000342a0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000342c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000342d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000342e0 */
/* WARNING: Switch with 1 destination removed at 0x0001000342fc */
/* WARNING: Switch with 1 destination removed at 0x000100034334 */

void Recovered_YYYLanZouQRCodeView_m00201(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75288;
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
 * Method: -[YYYLanZouQRCodeView imageView]
 * Entry: 0x100034338; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034340 */

undefined8 Recovered_YYYLanZouQRCodeView_m00202(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7528c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setImageView:]
 * Entry: 0x100034354; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034384 */
/* WARNING: Switch with 1 destination removed at 0x000100034390 */

void Recovered_YYYLanZouQRCodeView_m00203(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c7528c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView urlLabel]
 * Entry: 0x1000343b4; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000343c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000343d0 */

undefined8 Recovered_YYYLanZouQRCodeView_m00204(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75290);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setUrlLabel:]
 * Entry: 0x1000343dc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000343fc */
/* WARNING: Switch with 1 destination removed at 0x00010003440c */
/* WARNING: Switch with 1 destination removed at 0x000100034438 */

void Recovered_YYYLanZouQRCodeView_m00205(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75290,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView tipLabel]
 * Entry: 0x10003444c; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034454 */
/* WARNING: Switch with 1 destination removed at 0x000100034468 */
/* WARNING: Switch with 1 destination removed at 0x000100034474 */

undefined8 Recovered_YYYLanZouQRCodeView_m00206(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75294);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setTipLabel:]
 * Entry: 0x100034480; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000344b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000344e0 */

void Recovered_YYYLanZouQRCodeView_m00207(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75294;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView closeButton]
 * Entry: 0x1000344e4; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000344f4 */
/* WARNING: Switch with 1 destination removed at 0x000100034500 */
/* WARNING: Switch with 1 destination removed at 0x00010003450c */

undefined8 Recovered_YYYLanZouQRCodeView_m00208(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75298);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYLanZouQRCodeView setCloseButton:]
 * Entry: 0x100034518; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034540 */
/* WARNING: Switch with 1 destination removed at 0x000100034578 */

void Recovered_YYYLanZouQRCodeView_m00209(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75298;
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
 * Method: -[YYYLanZouQRCodeView .cxx_destruct]
 * Entry: 0x10003457c; original ABI: v16@0:8
 * Original instructions in modeled body: 39; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000345bc */
/* WARNING: Switch with 1 destination removed at 0x000100034620 */

void Recovered_YYYLanZouQRCodeView_m00210(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75298,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75294,0);
  _objc_storeStrong(param_1 + iRam0000000100c75290,0);
  _objc_storeStrong(param_1 + iRam0000000100c7528c,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75288,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYLanZouQRCodeView requiresConstraintBasedLayout]
 * Entry: 0x10003424c; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100034254 */
/* WARNING: Switch with 1 destination removed at 0x000100034260 */
/* WARNING: Switch with 1 destination removed at 0x00010003426c */

undefined8 Recovered_YYYLanZouQRCodeView_m00211(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



