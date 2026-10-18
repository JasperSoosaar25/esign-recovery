/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController viewDidLoad]
 * Entry: 0x10002c714; original ABI: v16@0:8
 * Original instructions in modeled body: 248; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002c748 */
/* WARNING: Switch with 1 destination removed at 0x00010002c754 */
/* WARNING: Switch with 1 destination removed at 0x00010002c848 */
/* WARNING: Switch with 1 destination removed at 0x00010002c8c8 */
/* WARNING: Switch with 1 destination removed at 0x00010002c8e0 */
/* WARNING: Switch with 1 destination removed at 0x00010002c900 */
/* WARNING: Switch with 1 destination removed at 0x00010002c95c */
/* WARNING: Switch with 1 destination removed at 0x00010002cc80 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTextViewViewController_m00171(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ef8 == 0) {
  case true:
    uRam0000000100cae02a = uRam0000000100cae024 ^ 0xb4c5;
    uRam0000000100cae02c = uRam0000000100cae026 ^ 0x62e5;
    uRam0000000100cae02e = uRam0000000100cae028 ^ 0x4f5d;
    sRam0000000100cadfe6 = uRam0000000100cadfe0 + (uRam0000000100cadfe0 & 0x191f) * -2 + -0x66e1;
    uRam0000000100cadfe8 = uRam0000000100cadfe2 ^ 0x165d;
    uRam0000000100cadfea = uRam0000000100cadfe4 ^ 0x3f87;
    uRam0000000100cae010 =
         CONCAT17((byte)((ulong)uRam0000000100cadff0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cadff0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cadff0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cadff0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cadff0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cadff0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cadff0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3a8 >> 8),
                                                  (byte)uRam0000000100cadff0 ^ (byte)_UNK_10097b3a8)
                                                  ))))));
    uRam0000000100cae018 = uRam0000000100cadff8 ^ 0x231b;
    uRam0000000100cae01a = uRam0000000100cadffa ^ 0x7ad5;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cae01c = uRam0000000100cadffc ^ 0xfe6;
    sRam0000000100cae01e = uRam0000000100cadffe + (uRam0000000100cadffe & 0x5575) * -2 + -0x2a8b;
    sRam0000000100cae020 = uRam0000000100cae000 + (uRam0000000100cae000 & 0x2a6) * -2 + 0x2a6;
    sRam0000000100cae022 = uRam0000000100cae002 + (uRam0000000100cae002 & 0x4446) * -2 + -0x3bba;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90ef8 = 1;
  uStack_68 = uRam0000000100c73870;
  uStack_70 = param_1;
  func_0x00010002f6f0(&uStack_70,PTR_s_viewDidLoad_100c70870);
  func_0x00010002f6f4(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f6f8();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f6fc(param_1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  uVar1 = func_0x00010002f700(uRam0000000100c71370);
  func_0x00010097a8a0(0x100cae030);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010094a060(uVar1,auVar2._8_8_,auVar2._0_8_,0,param_1,PTR_s_saveHandle_100c67f90);
  func_0x000100951100(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f704(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  _objc_release(auVar2._0_8_);
  func_0x00010002f708(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095ca00();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f70c(auVar2._0_8_,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
  func_0x000100971dc0(param_1,extraout_x1,1,0,0x100cae050,0,0x100cae070,
                      PTR_s_popViewController_100c65108);
  func_0x00010002f710(uRam0000000100c71390);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943980(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_98 = _UNK_10097b060;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_90 = &DAT_10002cc84;
  puStack_88 = &UNK_100aff0e8;
  uStack_80 = param_1;
  func_0x00010002f714(uVar1,auVar2._8_8_,auVar2._0_8_,&puStack_a0);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController popViewController]
 * Entry: 0x10002d06c; original ABI: v16@0:8
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002d084 */
/* WARNING: Switch with 1 destination removed at 0x00010002d0d4 */
/* WARNING: Switch with 1 destination removed at 0x00010002d0e0 */
/* WARNING: Switch with 1 destination removed at 0x00010002d0fc */

void Recovered_YYYTextViewViewController_m00172(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
  func_0x000100951080(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100953ba0(auVar1._0_8_,auVar1._8_8_,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController keyboardWillChangeFrameWithUserInfo:]
 * Entry: 0x10002d10c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 75; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002d138 */
/* WARNING: Switch with 1 destination removed at 0x00010002d154 */
/* WARNING: Switch with 1 destination removed at 0x00010002d1b4 */
/* WARNING: Switch with 1 destination removed at 0x00010002d1d4 */
/* WARNING: Switch with 1 destination removed at 0x00010002d230 */
/* WARNING: Switch with 1 destination removed at 0x00010002d298 */

void Recovered_YYYTextViewViewController_m00173
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = _objc_retain(param_3);
  func_0x000100979160(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar4 = func_0x000100946680(uVar3,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  uVar2 = uRam0000000100c71418;
  uVar5 = func_0x000100938600(uVar3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_84 = 0;
  puStack_80 = &DAT_10002d29c;
  puStack_78 = &UNK_100aff118;
  uStack_70 = param_1;
  uStack_68 = uVar4;
  func_0x000100938340(uVar5,uVar2,extraout_x1,&puStack_90);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController stepperValueChange:]
 * Entry: 0x10002d598; original ABI: v24@0:8@16
 * Original instructions in modeled body: 298; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002d5d4 */
/* WARNING: Switch with 1 destination removed at 0x00010002d5e8 */
/* WARNING: Switch with 1 destination removed at 0x00010002d5f4 */
/* WARNING: Switch with 1 destination removed at 0x00010002d628 */
/* WARNING: Switch with 1 destination removed at 0x00010002d85c */
/* WARNING: Switch with 1 destination removed at 0x00010002d884 */
/* WARNING: Switch with 1 destination removed at 0x00010002d8b8 */
/* WARNING: Switch with 1 destination removed at 0x00010002d938 */
/* WARNING: Switch with 1 destination removed at 0x00010002d944 */
/* WARNING: Switch with 1 destination removed at 0x00010002d97c */
/* WARNING: Switch with 1 destination removed at 0x00010002d99c */
/* WARNING: Switch with 1 destination removed at 0x00010002d9b4 */
/* WARNING: Switch with 1 destination removed at 0x00010002daf0 */
/* WARNING: Switch with 1 destination removed at 0x00010002dc6c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTextViewViewController_m00174
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f00 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cae140 = ~((bRam0000000100cae120 | 0x7b) & (bRam0000000100cae120 ^ 0xff | 0x84));
    cRam0000000100cae141 = bRam0000000100cae121 + (bRam0000000100cae121 & 3) * -2 + -0x7d;
    cRam0000000100cae142 = bRam0000000100cae122 + (bRam0000000100cae122 & 0x3a) * -2 + -0x46;
    bRam0000000100cae143 = bRam0000000100cae123 ^ 0xfd;
    bRam0000000100cae144 = bRam0000000100cae124 ^ 0x93;
    bRam0000000100cae145 = bRam0000000100cae125 ^ 0x5f;
    bRam0000000100cae146 = bRam0000000100cae126 ^ 0xde;
    bRam0000000100cae147 = bRam0000000100cae127 ^ 0xc3;
    cRam0000000100cae148 = bRam0000000100cae128 + (bRam0000000100cae128 & 0x68) * -2 + -0x18;
    uRam0000000100cae149 =
         CONCAT17((byte)((ulong)uRam0000000100cae129 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cae129 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cae129 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cae129 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cae129 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cae129 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cae129 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3b8 >> 8),
                                                  (byte)uRam0000000100cae129 ^ (byte)_UNK_10097b3b8)
                                                  ))))));
    cRam0000000100cae151 = bRam0000000100cae131 + (bRam0000000100cae131 & 0x65) * -2 + 'e';
    bRam0000000100cae152 = bRam0000000100cae132 ^ 0x36;
    cRam0000000100cae153 = bRam0000000100cae133 + (bRam0000000100cae133 & 0x54) * -2 + -0x2c;
    bRam0000000100cae154 = bRam0000000100cae134 ^ 0x24;
    cRam0000000100cae155 = bRam0000000100cae135 + (bRam0000000100cae135 & 0xf9) * -2 + 'y';
    bRam0000000100cae156 = bRam0000000100cae136 ^ 0xa2;
    bRam0000000100cae157 = bRam0000000100cae137 ^ 0xcc;
    uRam0000000100cae112 = uRam0000000100cae10c ^ 0xd247;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cae114 = uRam0000000100cae10e ^ 0xdc4b;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cae116 = uRam0000000100cae110 ^ 0x1c58;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cae106 = bRam0000000100cae100 ^ 0xe7;
    bRam0000000100cae107 = bRam0000000100cae101 ^ 0xd;
    bRam0000000100cae108 = bRam0000000100cae102 ^ 0xd7;
    bRam0000000100cae109 = bRam0000000100cae103 ^ 0xa7;
    bRam0000000100cae10a = bRam0000000100cae104 ^ 0x9f;
    cRam0000000100cae10b = bRam0000000100cae105 + (bRam0000000100cae105 & 0x48) * -2 + 'H';
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f00 = 1;
  uVar1 = _objc_retain(param_3);
  dVar5 = (double)func_0x000100978b20();
  func_0x00010002f788(dVar5,uRam0000000100c713a8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976260(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  uVar2 = uRam0000000100c71448;
  func_0x00010097a8a0(0x100cae180);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f78c(dVar5,uRam0000000100c71410);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f790(uVar2,auVar7._8_8_,0x100cae160,uVar3,auVar7._0_8_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7ac(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001009445a0(uVar4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar6._0_8_,auVar6._8_8_,uVar2);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar3);
  func_0x00010002f7b0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d4a0();
  _objc_release(uVar2);
  func_0x0001009733a0(uRam0000000100c713f8);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964640((float)dVar5,auVar6._0_8_,auVar6._8_8_,0x100cae1a0);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController initSubviews]
 * Entry: 0x10002dc70; original ABI: v16@0:8
 * Original instructions in modeled body: 509; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002dca4 */
/* WARNING: Switch with 1 destination removed at 0x00010002dcb8 */
/* WARNING: Switch with 1 destination removed at 0x00010002dcc4 */
/* WARNING: Switch with 1 destination removed at 0x00010002dd00 */
/* WARNING: Switch with 1 destination removed at 0x00010002de34 */
/* WARNING: Switch with 1 destination removed at 0x00010002de58 */
/* WARNING: Switch with 1 destination removed at 0x00010002e1fc */
/* WARNING: Switch with 1 destination removed at 0x00010002e20c */
/* WARNING: Switch with 1 destination removed at 0x00010002e220 */
/* WARNING: Switch with 1 destination removed at 0x00010002e24c */
/* WARNING: Switch with 1 destination removed at 0x00010002e4c4 */
/* WARNING: Switch with 1 destination removed at 0x00010002e650 */
/* WARNING: Switch with 1 destination removed at 0x00010002e6bc */
/* WARNING: Switch with 1 destination removed at 0x00010002e84c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTextViewViewController_m00175
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f04 == 0) {
  case true:
    uRam0000000100cae1d2 = uRam0000000100cae1cc ^ 0x4f35;
    uRam0000000100cae1d4 = uRam0000000100cae1ce ^ 0xbea2;
    uRam0000000100cae1d6 = uRam0000000100cae1d0 ^ 0xa1b8;
    bRam0000000100cae1c6 = bRam0000000100cae1c0 ^ 0x4b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cae1c7 = bRam0000000100cae1c1 ^ 0x57;
    bRam0000000100cae1c8 = bRam0000000100cae1c2 ^ 0xfd;
    bRam0000000100cae1c9 = bRam0000000100cae1c3 ^ 0x6c;
    bRam0000000100cae1ca = bRam0000000100cae1c4 ^ 0x5a;
    cRam0000000100cae1cb = bRam0000000100cae1c5 + (bRam0000000100cae1c5 & 0xfd) * -2 + '}';
    bRam0000000100cae200 = bRam0000000100cae1e0 ^ 0x43;
    bRam0000000100cae201 = bRam0000000100cae1e1 ^ 99;
    bRam0000000100cae202 = bRam0000000100cae1e2 ^ 0xf9;
    bRam0000000100cae203 = bRam0000000100cae1e3 ^ 0x17;
    cRam0000000100cae204 = bRam0000000100cae1e4 + (bRam0000000100cae1e4 & 0x1b) * -2 + -0x65;
    bRam0000000100cae205 = bRam0000000100cae1e5 ^ 0x5f;
    bRam0000000100cae206 = bRam0000000100cae1e6 ^ 0xae;
    bRam0000000100cae207 = bRam0000000100cae1e7 ^ 199;
    cRam0000000100cae208 = bRam0000000100cae1e8 + (bRam0000000100cae1e8 & 9) * -2 + -0x77;
    bRam0000000100cae209 = bRam0000000100cae1e9 ^ 0x74;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100cae20a = bRam0000000100cae1ea + (bRam0000000100cae1ea & 0x32) * -2 + -0x4e;
    uRam0000000100cae20b =
         CONCAT17((byte)((ulong)uRam0000000100cae1eb >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cae1eb >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cae1eb >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cae1eb >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cae1eb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cae1eb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cae1eb >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3c0 >> 8),
                                                  (byte)uRam0000000100cae1eb ^ (byte)_UNK_10097b3c0)
                                                  ))))));
    bRam0000000100cae213 = bRam0000000100cae1f3 ^ 0x20;
    cRam0000000100cae214 = bRam0000000100cae1f4 + (bRam0000000100cae1f4 & 0xaa) * -2 + '*';
    cRam0000000100cae215 = bRam0000000100cae1f5 + (bRam0000000100cae1f5 & 0x1b) * -2 + -0x65;
    bRam0000000100cae216 = bRam0000000100cae1f6 ^ 0xdf;
    cRam0000000100cae217 = bRam0000000100cae1f7 + (bRam0000000100cae1f7 & 0x3c) * -2 + '<';
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f04 = 1;
  uStack_78 = uRam0000000100c73870;
  uStack_80 = param_4;
  _objc_msgSendSuper2(&uStack_80,PTR_s_initSubviews_100c60f00);
  uVar1 = _objc_alloc(uRam0000000100c71570);
  func_0x00010002f7d4(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7d8();
  auVar6 = func_0x0001009492e0(uVar1);
  func_0x00010096edc0(param_4,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x00010002f7dc(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962c60(auVar6._0_8_,auVar6._8_8_,param_4);
  _objc_release(auVar6._0_8_);
  func_0x00010002f7e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7e4(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7e8(auVar6._0_8_,auVar6._8_8_,uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x000100955040(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976260(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar6._0_8_,auVar6._8_8_,uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x000100979160(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976260(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  uVar1 = _objc_alloc(uRam0000000100c71578);
  func_0x000100979160(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x0001009433a0();
  func_0x00010095cde0(uRam0000000100c714d0);
  func_0x00010002e850(0,0,uVar4,param_3 + 40.0);
  auVar6 = func_0x00010002f7ec(uVar1);
  func_0x00010096f520(param_4,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x000100976dc0(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943e60();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7f0(auVar6._0_8_,auVar6._8_8_,param_4,PTR_s_buttonHandle__100c5c1e8,0x40);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x000100976dc0(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7f4();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7f8(auVar6._0_8_,auVar6._8_8_,param_4,PTR_s_stepperValueChange__100c6ebe0,0x1000);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x000100979160(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f7fc(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  func_0x00010002f800(uRam0000000100c713f8);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  fVar3 = (float)func_0x000100944300(auVar6._0_8_,auVar6._8_8_,0x100cae260);
  _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  dVar5 = (double)fVar3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(fVar3 <= 0.0) {
  case true:
    dVar5 = 20.0;
                    /* WARNING: Switch is manually overridden */
  }
  func_0x000100976dc0(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100973aa0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fd60(dVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100974e00(dVar5,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976260(param_4);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar6._0_8_,auVar6._8_8_,uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  uVar1 = uRam0000000100c71448;
  func_0x00010097a8a0(0x100cae240);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100951a00(dVar5,uRam0000000100c71410);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f804(uVar1,auVar6._8_8_,0x100cae220,uVar2,auVar6._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f820(param_4);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009445a0();
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar7._0_8_,auVar7._8_8_,uVar1);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  func_0x000100979160(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010002f824();
  func_0x000100976dc0(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963fa0(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100976dc0(param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x000100943380();
  func_0x000100976260(param_4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964000(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController saveHandle]
 * Entry: 0x10002e880; original ABI: v16@0:8
 * Original instructions in modeled body: 207; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002e8ac */
/* WARNING: Switch with 1 destination removed at 0x00010002e91c */
/* WARNING: Switch with 1 destination removed at 0x00010002e9a8 */
/* WARNING: Switch with 1 destination removed at 0x00010002e9b8 */
/* WARNING: Switch with 1 destination removed at 0x00010002e9d0 */
/* WARNING: Switch with 1 destination removed at 0x00010002e9f8 */
/* WARNING: Switch with 1 destination removed at 0x00010002ea08 */
/* WARNING: Switch with 1 destination removed at 0x00010002ea98 */
/* WARNING: Switch with 1 destination removed at 0x00010002eabc */
/* WARNING: Switch with 1 destination removed at 0x00010002eaf8 */
/* WARNING: Switch with 1 destination removed at 0x00010002eb1c */
/* WARNING: Switch with 1 destination removed at 0x00010002eb28 */
/* WARNING: Switch with 1 destination removed at 0x00010002eb38 */
/* WARNING: Switch with 1 destination removed at 0x00010002eb54 */
/* WARNING: Switch with 1 destination removed at 0x00010002eb68 */
/* WARNING: Switch with 1 destination removed at 0x00010002eb84 */
/* WARNING: Switch with 1 destination removed at 0x00010002ecd8 */
/* WARNING: Switch with 1 destination removed at 0x00010002ecf4 */
/* WARNING: Switch with 1 destination removed at 0x00010002ed38 */
/* WARNING: Switch with 1 destination removed at 0x00010002ed54 */
/* WARNING: Switch with 1 destination removed at 0x00010002edb8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTextViewViewController_m00176(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 auStack_50 [2];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f08 == 0) {
  case true:
    uRam0000000100cae28a =
         ~((uRam0000000100cae280 | 0x8be3) & (uRam0000000100cae280 ^ 0xffff | 0x741c));
    sRam0000000100cae28c = uRam0000000100cae282 + (uRam0000000100cae282 & 0x4290) * -2 + 0x4290;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cae28e = uRam0000000100cae284 ^ 0x3422;
    uRam0000000100cae290 = uRam0000000100cae286 ^ 0x6428;
    uRam0000000100cae292 = uRam0000000100cae288 ^ 0xbcd6;
    uRam0000000100cae2a8 =
         CONCAT17((byte)((ulong)uRam0000000100cae298 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b3c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cae298 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b3c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cae298 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b3c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cae298 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b3c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cae298 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b3c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cae298 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b3c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cae298 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b3c8 >> 8),
                                                  (byte)uRam0000000100cae298 ^ (byte)_UNK_10097b3c8)
                                                  ))))));
    sRam0000000100cae2b0 = uRam0000000100cae2a0 + (uRam0000000100cae2a0 & 0x4cb3) * -2 + -0x334d;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f08 = 1;
  func_0x000100976260(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100975dc0(uVar4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  auVar5 = func_0x00010002f860(param_1);
  func_0x00010002f864(uVar2,auVar5._8_8_,auVar5._0_8_);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  uVar2 = uRam0000000100c71380;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010097a8a0(0x100cae2c0);
    auVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100972420(uVar2,auVar5._8_8_,auVar5._0_8_);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(auVar5._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
    return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  case true:
    func_0x000100943980(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    auStack_50[0] = 0;
    uVar1 = func_0x00010097a1c0(lVar3,auVar5._8_8_,auVar5._0_8_,1,auStack_50);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_retain(auStack_50[0]);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar5._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010002eb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulong)(uVar1 ^ 1) * 8 + 0x100caea10))();
    return;
                    /* WARNING: Switch is manually overridden */
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController buttonHandle:]
 * Entry: 0x10002ee68; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002ee8c */
/* WARNING: Switch with 1 destination removed at 0x00010002ee9c */
/* WARNING: Switch with 1 destination removed at 0x00010002eeb8 */
/* WARNING: Switch with 1 destination removed at 0x00010002eec4 */
/* WARNING: Switch with 1 destination removed at 0x00010002efc8 */

void Recovered_YYYTextViewViewController_m00177
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010094c1e0(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010002eed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100caebd0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController textViewDidChange:]
 * Entry: 0x10002f0c4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 36; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f100 */
/* WARNING: Switch with 1 destination removed at 0x00010002f184 */

void Recovered_YYYTextViewViewController_m00178
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _objc_retain(param_3);
  func_0x000100951100(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095ca00(uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963ac0(auVar3._0_8_,auVar3._8_8_,1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController textViewDidBeginEditing:]
 * Entry: 0x10002f188; original ABI: v24@0:8@16
 * Original instructions in modeled body: 39; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f1a4 */
/* WARNING: Switch with 1 destination removed at 0x00010002f1e0 */
/* WARNING: Switch with 1 destination removed at 0x00010002f244 */

void Recovered_YYYTextViewViewController_m00179
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x000100976dc0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943e60();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096c2a0(auVar3._0_8_,auVar3._8_8_,1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController textViewDidEndEditing:]
 * Entry: 0x10002f248; original ABI: v24@0:8@16
 * Original instructions in modeled body: 46; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f268 */
/* WARNING: Switch with 1 destination removed at 0x00010002f274 */
/* WARNING: Switch with 1 destination removed at 0x00010002f284 */
/* WARNING: Switch with 1 destination removed at 0x00010002f2f8 */
/* WARNING: Switch with 1 destination removed at 0x00010002f348 */

void Recovered_YYYTextViewViewController_m00180
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _objc_retain(param_3);
  func_0x000100976dc0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100943e60(uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010002f88c(auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController filePath]
 * Entry: 0x10002f34c; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f35c */

undefined8 Recovered_YYYTextViewViewController_m00181(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75274);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController setFilePath:]
 * Entry: 0x10002f368; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYTextViewViewController_m00182(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75274,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController textView]
 * Entry: 0x10002f37c; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f38c */
/* WARNING: Switch with 1 destination removed at 0x00010002f39c */
/* WARNING: Switch with 1 destination removed at 0x00010002f3a8 */

undefined8 Recovered_YYYTextViewViewController_m00183(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75278);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController setTextView:]
 * Entry: 0x10002f3b4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f3dc */
/* WARNING: Switch with 1 destination removed at 0x00010002f3f8 */
/* WARNING: Switch with 1 destination removed at 0x00010002f408 */
/* WARNING: Switch with 1 destination removed at 0x00010002f42c */

void Recovered_YYYTextViewViewController_m00184(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75278;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController encoding]
 * Entry: 0x10002f440; original ABI: Q16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f448 */

undefined8 Recovered_YYYTextViewViewController_m00185(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7527c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController setEncoding:]
 * Entry: 0x10002f45c; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 16; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f46c */
/* WARNING: Switch with 1 destination removed at 0x00010002f478 */
/* WARNING: Switch with 1 destination removed at 0x00010002f484 */
/* WARNING: Switch with 1 destination removed at 0x00010002f498 */

void Recovered_YYYTextViewViewController_m00186(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + iRam0000000100c7527c) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController keyboardManager]
 * Entry: 0x10002f4a0; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f4b0 */
/* WARNING: Switch with 1 destination removed at 0x00010002f4bc */

undefined8 Recovered_YYYTextViewViewController_m00187(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75280);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController setKeyboardManager:]
 * Entry: 0x10002f4c8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f4fc */
/* WARNING: Switch with 1 destination removed at 0x00010002f518 */

void Recovered_YYYTextViewViewController_m00188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75280;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController toolView]
 * Entry: 0x10002f52c; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f534 */
/* WARNING: Switch with 1 destination removed at 0x00010002f548 */

undefined8 Recovered_YYYTextViewViewController_m00189(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75284);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTextViewViewController setToolView:]
 * Entry: 0x10002f554; original ABI: v24@0:8@16
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f578 */
/* WARNING: Switch with 1 destination removed at 0x00010002f588 */
/* WARNING: Switch with 1 destination removed at 0x00010002f5b8 */
/* WARNING: Switch with 1 destination removed at 0x00010002f5c4 */
/* WARNING: Switch with 1 destination removed at 0x00010002f5f4 */

void Recovered_YYYTextViewViewController_m00190(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75284;
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
 * Method: -[YYYTextViewViewController .cxx_destruct]
 * Entry: 0x10002f5f8; original ABI: v16@0:8
 * Original instructions in modeled body: 48; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010002f618 */
/* WARNING: Switch with 1 destination removed at 0x00010002f624 */
/* WARNING: Switch with 1 destination removed at 0x00010002f638 */
/* WARNING: Switch with 1 destination removed at 0x00010002f680 */
/* WARNING: Switch with 1 destination removed at 0x00010002f6a8 */
/* WARNING: Switch with 1 destination removed at 0x00010002f6ec */

void Recovered_YYYTextViewViewController_m00191(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c75284,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75280,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75278,0);
  _objc_storeStrong(param_1 + iRam0000000100c75274,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



