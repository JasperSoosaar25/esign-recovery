/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYCreateQRCode createQRCodeWithData:size:]
 * Entry: 0x1001062c4; original ABI: @32@0:8@16d24
 * Original instructions in modeled body: 62; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001062f0 */
/* WARNING: Switch with 1 destination removed at 0x000100106300 */
/* WARNING: Switch with 1 destination removed at 0x000100106310 */
/* WARNING: Switch with 1 destination removed at 0x00010010636c */
/* WARNING: Switch with 1 destination removed at 0x000100106428 */

void Recovered_YYYCreateQRCode_m00822
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = _objc_retain(param_4);
  func_0x00010093a2a0(uRam0000000100c71438);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100979940(uRam0000000100c71438);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100107a8c(param_1,param_2,auVar4._8_8_,uVar1,uVar2,auVar4._0_8_);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYCreateQRCode createQRCodeWithData:size:color:backgroundColor:]
 * Entry: 0x10010642c; original ABI: @48@0:8@16d24@32@40
 * Original instructions in modeled body: 577; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100106474 */
/* WARNING: Switch with 1 destination removed at 0x000100106480 */
/* WARNING: Switch with 1 destination removed at 0x00010010649c */
/* WARNING: Switch with 1 destination removed at 0x0001001064a8 */
/* WARNING: Switch with 1 destination removed at 0x0001001064ec */
/* WARNING: Switch with 1 destination removed at 0x0001001067e8 */
/* WARNING: Switch with 1 destination removed at 0x00010010681c */
/* WARNING: Switch with 1 destination removed at 0x000100106a4c */
/* WARNING: Switch with 1 destination removed at 0x000100106aa0 */
/* WARNING: Switch with 1 destination removed at 0x000100106ff4 */
/* WARNING: Switch with 1 destination removed at 0x000100107070 */
/* WARNING: Switch with 1 destination removed at 0x000100107084 */
/* WARNING: Switch with 1 destination removed at 0x0001001073c8 */
/* WARNING: Switch with 1 destination removed at 0x000100107450 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYCreateQRCode_m00823
               (double param_1,undefined1 param_2 [16],double param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_c0 [56];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91420 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cfb568 =
         CONCAT17((byte)((ulong)uRam0000000100cfb558 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c690 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cfb558 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c690 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cfb558 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c690 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cfb558 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c690 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cfb558 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c690 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cfb558 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c690 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cfb558 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c690 >> 8),
                                                  (byte)uRam0000000100cfb558 ^ (byte)_UNK_10097c690)
                                                  ))))));
    bRam0000000100cfb570 = bRam0000000100cfb560 ^ 0x58;
    bRam0000000100cfb571 = bRam0000000100cfb561 ^ 0x8e;
    bRam0000000100cfb572 = bRam0000000100cfb562 ^ 1;
    bRam0000000100cfb573 = bRam0000000100cfb563 ^ 0x77;
    uRam0000000100cfb530 =
         CONCAT17((byte)((ulong)uRam0000000100cfb520 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c698 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cfb520 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c698 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cfb520 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c698 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cfb520 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c698 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cfb520 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c698 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cfb520 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c698 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cfb520 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c698 >> 8),
                                                  (byte)uRam0000000100cfb520 ^ (byte)_UNK_10097c698)
                                                  ))))));
    bRam0000000100cfb538 = bRam0000000100cfb528 ^ 10;
    bRam0000000100cfb539 = bRam0000000100cfb529 ^ 0x1b;
    cRam0000000100cfb53a = bRam0000000100cfb52a + (bRam0000000100cfb52a & 0xef) * -2 + 'o';
    cRam0000000100cfb512 = bRam0000000100cfb505 + (bRam0000000100cfb505 & 0x55) * -2 + 'U';
    bRam0000000100cfb513 = bRam0000000100cfb506 ^ 0xc1;
    bRam0000000100cfb514 = bRam0000000100cfb507 ^ 0x3f;
    bRam0000000100cfb515 = bRam0000000100cfb508 ^ 0xa8;
    bRam0000000100cfb516 = ~((bRam0000000100cfb509 | 0x71) & (bRam0000000100cfb509 ^ 0xff | 0x8e));
    bRam0000000100cfb517 = bRam0000000100cfb50a ^ 0x89;
    bRam0000000100cfb518 = bRam0000000100cfb50b ^ 0x14;
    cRam0000000100cfb519 = bRam0000000100cfb50c + (bRam0000000100cfb50c & 0x57) * -2 + 'W';
    bRam0000000100cfb51a = bRam0000000100cfb50d ^ 0xa7;
    bRam0000000100cfb51b = bRam0000000100cfb50e ^ 0x53;
    cRam0000000100cfb51c = bRam0000000100cfb50f + (bRam0000000100cfb50f & 0x31) * -2 + '1';
    bRam0000000100cfb51d = bRam0000000100cfb510 ^ 8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cfb51e = bRam0000000100cfb511 ^ 0x2b;
    uRam0000000100cfb4a0 =
         CONCAT17((byte)((ulong)uRam0000000100cfb480 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c6b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cfb480 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c6b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cfb480 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c6b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cfb480 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c6b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cfb480 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c6b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cfb480 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c6b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cfb480 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c6b0 >> 8),
                                                  (byte)uRam0000000100cfb480 ^ (byte)_UNK_10097c6b0)
                                                  ))))));
    uRam0000000100cfb4a8 =
         CONCAT17((byte)((ulong)uRam0000000100cfb488 >> 0x38) ^
                  (byte)((ulong)_UNK_10097c6b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cfb488 >> 0x30) ^
                           (byte)((ulong)_UNK_10097c6b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cfb488 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097c6b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cfb488 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097c6b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cfb488 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097c6b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cfb488 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097c6b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cfb488 >> 8) ^
                                                  (byte)((ulong)_UNK_10097c6b8 >> 8),
                                                  (byte)uRam0000000100cfb488 ^ (byte)_UNK_10097c6b8)
                                                  ))))));
    bRam0000000100cfb4b0 = bRam0000000100cfb490 ^ 0xe6;
    bRam0000000100cfb4b1 = bRam0000000100cfb491 ^ 0x5b;
    bRam0000000100cfb4bf = bRam0000000100cfb4b2 ^ 0xd2;
    bRam0000000100cfb4c0 = ~((bRam0000000100cfb4b3 | 0xaa) & (~bRam0000000100cfb4b3 | 0x55));
    cRam0000000100cfb4c1 = bRam0000000100cfb4b4 + (bRam0000000100cfb4b4 & 9) * -2 + -0x77;
    bRam0000000100cfb4c2 = bRam0000000100cfb4b5 ^ 0xe5;
    bRam0000000100cfb4c3 = bRam0000000100cfb4b6 ^ 0xf1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cfb4c4 = bRam0000000100cfb4b7 ^ 0x3f;
    bRam0000000100cfb4c5 = bRam0000000100cfb4b8 ^ 0x90;
    cRam0000000100cfb4c6 = bRam0000000100cfb4b9 + (bRam0000000100cfb4b9 & 0xb) * -2 + -0x75;
    bRam0000000100cfb4c7 = bRam0000000100cfb4ba ^ 0xb1;
    cRam0000000100cfb4c8 = bRam0000000100cfb4bb + (bRam0000000100cfb4bb & 0x50) * -2 + 'P';
    bRam0000000100cfb4c9 = bRam0000000100cfb4bc ^ 0xcc;
    bRam0000000100cfb4ca = bRam0000000100cfb4bd ^ 0xa7;
    bRam0000000100cfb4cb = bRam0000000100cfb4be ^ 0x73;
    cRam0000000100cfb547 = bRam0000000100cfb53b + (bRam0000000100cfb53b & 0x52) * -2 + 'R';
    bRam0000000100cfb548 = bRam0000000100cfb53c ^ 0xe3;
    bRam0000000100cfb549 = bRam0000000100cfb53d ^ 0x5d;
    bRam0000000100cfb54a = bRam0000000100cfb53e ^ 0xa3;
    cRam0000000100cfb54b = bRam0000000100cfb53f + (bRam0000000100cfb53f & 0xc) * -2 + '\f';
    bRam0000000100cfb54c = bRam0000000100cfb540 ^ 4;
    bRam0000000100cfb54d = bRam0000000100cfb541 ^ 0x4e;
    bRam0000000100cfb54e = bRam0000000100cfb542 ^ 0x93;
    bRam0000000100cfb54f = bRam0000000100cfb543 ^ 0xf1;
    bRam0000000100cfb550 = bRam0000000100cfb544 ^ 0x62;
    bRam0000000100cfb551 = bRam0000000100cfb545 ^ 0x4d;
    bRam0000000100cfb552 = bRam0000000100cfb546 ^ 0x50;
    bRam0000000100cfb4f0 = bRam0000000100cfb4d0 ^ 0x76;
    bRam0000000100cfb4f1 = bRam0000000100cfb4d1 ^ 0x46;
    bRam0000000100cfb4f2 = bRam0000000100cfb4d2 ^ 0xec;
    bRam0000000100cfb4f3 = bRam0000000100cfb4d3 ^ 0x77;
    bRam0000000100cfb4f4 = bRam0000000100cfb4d4 ^ 0xbb;
    bRam0000000100cfb4f5 = bRam0000000100cfb4d5 ^ 0x2c;
    bRam0000000100cfb4f6 = ~((bRam0000000100cfb4d6 | 0x9e) & (bRam0000000100cfb4d6 ^ 0xff | 0x61));
    cRam0000000100cfb4f7 = bRam0000000100cfb4d7 + (bRam0000000100cfb4d7 & 0x34) * -2 + -0x4c;
    bRam0000000100cfb4f8 = bRam0000000100cfb4d8 ^ 0x57;
    bRam0000000100cfb4f9 = bRam0000000100cfb4d9 ^ 0x82;
    bRam0000000100cfb4fa = bRam0000000100cfb4da ^ 0xd1;
    cRam0000000100cfb4fb = bRam0000000100cfb4db + (bRam0000000100cfb4db & 0x1c) * -2 + -100;
    bRam0000000100cfb4fc = bRam0000000100cfb4dc ^ 0xb2;
    bRam0000000100cfb4fd = bRam0000000100cfb4dd ^ 0x81;
    bRam0000000100cfb4fe = bRam0000000100cfb4de ^ 0xea;
    bRam0000000100cfb4ff = bRam0000000100cfb4df ^ 0x85;
    bRam0000000100cfb500 = ~((bRam0000000100cfb4e0 | 0xe4) & (bRam0000000100cfb4e0 ^ 0xff | 0x1b));
    bRam0000000100cfb501 = bRam0000000100cfb4e1 ^ 0xa4;
    bRam0000000100cfb502 = bRam0000000100cfb4e2 ^ 0xda;
    cRam0000000100cfb503 = bRam0000000100cfb4e3 + (bRam0000000100cfb4e3 & 0xcf) * -2 + 'O';
    cRam0000000100cfb504 = bRam0000000100cfb4e4 + (bRam0000000100cfb4e4 & 0x1d) * -2 + -99;
    bRam0000000100cfb4ce = bRam0000000100cfb4cc ^ 0xa9;
    bRam0000000100cfb4cf = bRam0000000100cfb4cd ^ 0x95;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e91420 = 1;
  uVar2 = _objc_retain(param_6);
  uVar3 = _objc_retain(param_7);
  auVar9 = _objc_retain(param_8);
  func_0x000100107a9c(uVar2,auVar9._8_8_,4);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943d00(uRam0000000100c71588,auVar10._8_8_,0x100cfb580);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  uVar4 = auVar11._0_8_;
  func_0x00010096fde0(uVar4,auVar11._8_8_,auVar10._0_8_,0x100cfb5a0);
  func_0x00010096fde0(uVar4,extraout_x1_01,0x100cfb5c0,0x100cfb5e0);
  uStack_88 = uVar3;
  uStack_80 = auVar9._0_8_;
  puStack_78 = auStack_c0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100107aa0(uVar4);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943d00(uRam0000000100c71588,auVar9._8_8_,0x100cfb600);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar11._0_8_;
  func_0x00010096fde0(uVar5,auVar11._8_8_,auVar9._0_8_,0x100cfb620);
  uVar7 = uRam0000000100c71940;
  uVar3 = _objc_retainAutorelease(uVar3);
  auVar11 = func_0x000100934be0();
  func_0x00010093cf20(uVar7,auVar11._8_8_,auVar11._0_8_);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fde0(uVar5,auVar11._8_8_,auVar11._0_8_,0x100cfb640);
  _objc_release(auVar11._0_8_);
  uVar7 = uRam0000000100c71940;
  uVar6 = _objc_retainAutorelease(uStack_80);
  auVar11 = func_0x000100934be0();
  func_0x00010093cf20(uVar7,auVar11._8_8_,auVar11._0_8_);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fde0(uVar5,auVar11._8_8_,auVar11._0_8_,0x100cfb660);
  _objc_release(auVar11._0_8_);
  func_0x000100107aa4(uVar5);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943180();
  puVar1 = puStack_78;
  _CGAffineTransformMakeScale(puStack_78,param_1 / param_3,param_1 / param_3);
  func_0x000100947080(uVar7,extraout_x1,puVar1);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x000100947900(uRam0000000100c713c0,extraout_x1_00,uVar8);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar4);
  _objc_release(auVar10._0_8_);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(uVar7);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYCreateQRCode createQRCodeWithData:size:logoImage:ratio:]
 * Entry: 0x100107454; original ABI: @48@0:8@16d24@32d40
 * Original instructions in modeled body: 63; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010010748c */
/* WARNING: Switch with 1 destination removed at 0x0001001074a0 */
/* WARNING: Switch with 1 destination removed at 0x0001001074e4 */
/* WARNING: Switch with 1 destination removed at 0x0001001075b4 */

void Recovered_YYYCreateQRCode_m00824
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = _objc_retain(param_5);
  uVar3 = uRam0000000100c71438;
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_6);
  func_0x000100979940(uVar3);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093e780(param_1,param_2,0x4014000000000000,0x4014000000000000,param_3,auVar4._8_8_,
                      uVar1,uVar2,auVar4._0_8_);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYCreateQRCode createQRCodeWithData:size:logoImage:ratio:logoImageCornerRadius:logoImageBorderWidth:logoImageBorderColor:]
 * Entry: 0x1001075b8; original ABI: @72@0:8@16d24@32d40d48d56@64
 * Original instructions in modeled body: 213; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010010760c */
/* WARNING: Switch with 1 destination removed at 0x0001001076ac */
/* WARNING: Switch with 1 destination removed at 0x000100107704 */
/* WARNING: Switch with 1 destination removed at 0x000100107710 */
/* WARNING: Switch with 1 destination removed at 0x00010010771c */
/* WARNING: Switch with 1 destination removed at 0x00010010773c */
/* WARNING: Switch with 1 destination removed at 0x000100107748 */
/* WARNING: Switch with 1 destination removed at 0x000100107754 */
/* WARNING: Switch with 1 destination removed at 0x0001001077b0 */
/* WARNING: Switch with 1 destination removed at 0x0001001077f8 */
/* WARNING: Switch with 1 destination removed at 0x000100107a78 */

void Recovered_YYYCreateQRCode_m00825
               (double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  
  dVar12 = param_2;
  uVar6 = _objc_retain(param_7);
                    /* WARNING: Switch is manually overridden */
  lVar2 = _objc_retain(param_8);
  uVar3 = _objc_retain(param_9);
  func_0x000100107ab0(uRam0000000100c71438);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979940(uRam0000000100c71438);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093e760(param_1,param_5,auVar15._8_8_,uVar6,uVar4,auVar15._0_8_);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar15._0_8_);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    bVar1 = true;
    if ((param_2 <= 0.5) && (bVar1 = false, !NAN(param_2))) {
      bVar1 = param_2 < 0.0;
    }
    dVar14 = 0.25;
    if (!bVar1) {
      dVar14 = param_2;
    }
    dVar14 = dVar14 * param_1;
    dVar7 = (double)func_0x000100972800(uVar5);
    func_0x000100107ab4(uVar5);
    dVar8 = (dVar12 - dVar14) * 0.5;
    dVar13 = dVar14;
    uVar9 = func_0x000100107a7c((dVar7 - dVar14) * 0.5,dVar8,dVar14,dVar14);
    dVar12 = dVar8;
    uVar10 = func_0x000100972800(uVar5);
    func_0x00010094ef40(uRam0000000100c71598);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar11 = func_0x00010095d020();
    _UIGraphicsBeginImageContextWithOptions(uVar10,dVar12,uVar11,0);
    _objc_release(uVar4);
    uVar4 = func_0x000100972800(uVar5);
    func_0x000100107ab8(uVar5);
    func_0x000100107abc(0,0,uVar4,dVar12);
    func_0x000100941f60(uVar5);
    bVar1 = true;
                    /* WARNING: Switch is manually overridden */
    if ((param_3 <= 10.0) && (bVar1 = false, !NAN(param_3))) {
      bVar1 = param_3 < 0.0;
    }
    dVar12 = 5.0;
    if (!bVar1) {
      dVar12 = param_3;
    }
    func_0x00010093a240(uVar9,dVar8,dVar14,dVar13,dVar12,uRam0000000100c71948);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    if ((param_4 <= 10.0) && (bVar1 = false, !NAN(param_4))) {
      bVar1 = param_4 < 0.0;
    }
    dVar12 = 5.0;
    if (!bVar1) {
      dVar12 = param_4;
    }
    func_0x0001009668c0(dVar12);
    func_0x00010096d940(uVar3);
    func_0x000100974280(uVar10);
    func_0x000100936900(uVar10);
    func_0x000100941f60(uVar9,dVar8,dVar14,dVar13,lVar2);
    _UIGraphicsGetImageFromCurrentImageContext();
    uVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100107ac0();
    _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar4 = _objc_retain(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_autoreleaseReturnValue(uVar4);
                    /* WARNING: Switch is manually overridden */
  return;
}



