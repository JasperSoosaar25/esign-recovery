/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController viewDidLoad]
 * Entry: 0x100363250; original ABI: v16@0:8
 * Original instructions in modeled body: 311; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363280 */
/* WARNING: Switch with 1 destination removed at 0x00010036328c */
/* WARNING: Switch with 1 destination removed at 0x0001003632a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003632b4 */
/* WARNING: Switch with 1 destination removed at 0x00010036336c */
/* WARNING: Switch with 1 destination removed at 0x00010036338c */
/* WARNING: Switch with 1 destination removed at 0x0001003633c4 */
/* WARNING: Switch with 1 destination removed at 0x000100363430 */
/* WARNING: Switch with 1 destination removed at 0x000100363444 */
/* WARNING: Switch with 1 destination removed at 0x000100363548 */
/* WARNING: Switch with 1 destination removed at 0x000100363558 */
/* WARNING: Switch with 1 destination removed at 0x0001003635e8 */
/* WARNING: Switch with 1 destination removed at 0x000100363634 */
/* WARNING: Switch with 1 destination removed at 0x0001003636e0 */
/* WARNING: Switch with 1 destination removed at 0x000100363810 */
/* WARNING: Switch with 1 destination removed at 0x0001003638a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003638c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYModifyDylibTableViewController_m02540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92328 == 0) {
  case true:
    uRam0000000100dc4010 =
         CONCAT17((byte)((ulong)uRam0000000100dc4000 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800c0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4000 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800c0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4000 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4000 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4000 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4000 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4000 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800c0 >> 8),
                                                  (byte)uRam0000000100dc4000 ^ (byte)_UNK_1009800c0)
                                                  ))))));
    uRam0000000100dc4018 =
         ~((uRam0000000100dc4008 | 0xbba2) & (uRam0000000100dc4008 ^ 0xffff | 0x445d));
    uRam0000000100dc4040 =
         CONCAT17((byte)((ulong)uRam0000000100dc4020 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800c8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4020 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800c8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4020 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800c8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4020 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800c8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4020 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800c8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4020 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800c8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4020 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800c8 >> 8),
                                                  (byte)uRam0000000100dc4020 ^ (byte)_UNK_1009800c8)
                                                  ))))));
    sRam0000000100dc4048 = uRam0000000100dc4028 + (uRam0000000100dc4028 & 0x1fac) * -2 + -0x6054;
    uRam0000000100dc404a = uRam0000000100dc402a ^ 0x991;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dc404c = uRam0000000100dc402c ^ 0x2cb6;
    sRam0000000100dc404e = uRam0000000100dc402e + (uRam0000000100dc402e & 0x2d1a) * -2 + 0x2d1a;
    uRam0000000100dc4050 = uRam0000000100dc4030 ^ 0x191c;
    uRam0000000100dc4052 =
         ~((uRam0000000100dc4032 | 0xe101) & (uRam0000000100dc4032 ^ 0xffff | 0x1efe));
    uRam0000000100dc4054 = uRam0000000100dc4034 ^ 0x9a60;
    uRam0000000100dc4056 = uRam0000000100dc4036 ^ 0x740f;
    uRam0000000100dc4058 = uRam0000000100dc4038 ^ 0x1b41;
    sRam0000000100dc405a = uRam0000000100dc403a + (uRam0000000100dc403a & 0x223f) * -2 + 0x223f;
    uRam0000000100dc405c = uRam0000000100dc403c ^ 0x8d06;
    sRam0000000100dc405e = uRam0000000100dc403e + (uRam0000000100dc403e & 0x43be) * -2 + -0x3c42;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92328 = 1;
  uStack_58 = uRam0000000100c73bc8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_viewDidLoad_100c70870);
  func_0x000100942140(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100366470();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f0e0(param_1,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
  uVar1 = uRam0000000100c71368;
  func_0x000100942140(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100366474(uVar1,auVar5._8_8_,auVar5._0_8_);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100961020(param_1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(auVar5._0_8_);
  func_0x000100366478(param_1);
  lVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release();
  uVar1 = uRam0000000100c714b8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 == 0) {
  case false:
    func_0x00010093a9e0(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094ed60();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009450a0();
    uVar2 = _objc_retainAutoreleasedReturnValue();
    auVar5 = func_0x000100950b20();
    func_0x000100962940(param_1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    func_0x000100975120(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010095aa80();
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    func_0x00010097a8a0(0x100dc4060);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x00010097a8a0(0x100dc4080);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010036647c(uVar1,auVar5._8_8_,uVar3,auVar5._0_8_);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar5._0_8_);
    _objc_release(uVar3);
    puStack_90 = PTR___NSConcreteStackBlock_100afc560;
    uStack_88 = _UNK_10097b060;
    puStack_80 = &DAT_1003638cc;
    puStack_78 = &UNK_100aff308;
    uStack_70 = param_1;
    func_0x00010097a400(uVar1,extraout_x1,&puStack_90);
    func_0x0001009723a0(uVar1,extraout_x1_00,1);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController initTableView]
 * Entry: 0x1003639e8; original ABI: v16@0:8
 * Original instructions in modeled body: 128; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363a10 */
/* WARNING: Switch with 1 destination removed at 0x000100363a24 */
/* WARNING: Switch with 1 destination removed at 0x000100363a30 */
/* WARNING: Switch with 1 destination removed at 0x000100363a3c */
/* WARNING: Switch with 1 destination removed at 0x000100363b28 */
/* WARNING: Switch with 1 destination removed at 0x000100363b4c */
/* WARNING: Switch with 1 destination removed at 0x000100363b60 */
/* WARNING: Switch with 1 destination removed at 0x000100363b70 */
/* WARNING: Switch with 1 destination removed at 0x000100363b98 */
/* WARNING: Switch with 1 destination removed at 0x000100363c34 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYModifyDylibTableViewController_m02541(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9232c == 0) {
  case true:
    bRam0000000100dc40c0 = bRam0000000100dc40a0 ^ 0x51;
    uRam0000000100dc40c1 =
         CONCAT17((byte)((ulong)uRam0000000100dc40a1 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800d8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc40a1 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800d8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc40a1 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800d8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc40a1 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800d8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc40a1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800d8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc40a1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800d8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc40a1 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800d8 >> 8),
                                                  (byte)uRam0000000100dc40a1 ^ (byte)_UNK_1009800d8)
                                                  ))))));
    bRam0000000100dc40c9 = bRam0000000100dc40a9 ^ 0xf3;
    bRam0000000100dc40ca = bRam0000000100dc40aa ^ 0x58;
    cRam0000000100dc40cb = bRam0000000100dc40ab + (bRam0000000100dc40ab & 0xc) * -2 + '\f';
    cRam0000000100dc40cc = bRam0000000100dc40ac + (bRam0000000100dc40ac & 0x16) * -2 + '\x16';
    bRam0000000100dc40cd = bRam0000000100dc40ad ^ 0x11;
    bRam0000000100dc40ce = bRam0000000100dc40ae ^ 0xe1;
    bRam0000000100dc40cf = bRam0000000100dc40af ^ 0xa4;
    bRam0000000100dc40d0 = bRam0000000100dc40b0 ^ 0x50;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e9232c = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73bc8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initTableView_100c60f08);
  func_0x000100366488(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  auVar2 = func_0x00010093c700(uRam0000000100c71ea0);
  func_0x00010095a820(uVar1,auVar2._8_8_,auVar2._0_8_,0x100dc40e0);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController numberOfSectionsInTableView:]
 * Entry: 0x100363c50; original ABI: q24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363c58 */
/* WARNING: Switch with 1 destination removed at 0x000100363c64 */
/* WARNING: Switch with 1 destination removed at 0x000100363c70 */

undefined8 Recovered_YYYModifyDylibTableViewController_m02542(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController tableView:numberOfRowsInSection:]
 * Entry: 0x100363c7c; original ABI: q32@0:8@16q24
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363c98 */
/* WARNING: Switch with 1 destination removed at 0x000100363cc4 */
/* WARNING: Switch with 1 destination removed at 0x000100363d18 */

undefined8
Recovered_YYYModifyDylibTableViewController_m02543
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x00010093f300(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = func_0x00010093e360(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController tableView:heightForRowAtIndexPath:]
 * Entry: 0x100363d1c; original ABI: d32@0:8@16@24
 * Original instructions in modeled body: 63; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363d4c */
/* WARNING: Switch with 1 destination removed at 0x000100363d68 */
/* WARNING: Switch with 1 destination removed at 0x000100363d7c */
/* WARNING: Switch with 1 destination removed at 0x000100363e6c */

undefined1  [16]
Recovered_YYYModifyDylibTableViewController_m02544
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
  func_0x00010093f300(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010095cb20(uVar2);
  _objc_release(uVar2);
  func_0x000100951c40(uVar3,extraout_x1,uVar4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  auVar5._0_8_ = func_0x0001009466e0(uRam0000000100c71ea0,extraout_x1_00,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar5._8_8_ = 0;
                    /* WARNING: Switch is manually overridden */
  return auVar5;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController tableView:cellForRowAtIndexPath:]
 * Entry: 0x100363e90; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 142; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100363ebc */
/* WARNING: Switch with 1 destination removed at 0x000100363ff8 */
/* WARNING: Switch with 1 destination removed at 0x000100364050 */
/* WARNING: Switch with 1 destination removed at 0x00010036405c */
/* WARNING: Switch with 1 destination removed at 0x000100364088 */
/* WARNING: Switch with 1 destination removed at 0x0001003640b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003640e0 */

void Recovered_YYYModifyDylibTableViewController_m02545
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92330 == 0) {
  case true:
    bRam0000000100dc4120 = bRam0000000100dc4100 ^ 0xa8;
    bRam0000000100dc4121 = bRam0000000100dc4101 ^ 0xf4;
    bRam0000000100dc4122 = bRam0000000100dc4102 ^ 7;
    bRam0000000100dc4123 = bRam0000000100dc4103 ^ 0x8b;
    bRam0000000100dc4124 = bRam0000000100dc4104 ^ 0x8f;
    bRam0000000100dc4125 = bRam0000000100dc4105 ^ 0xd0;
    bRam0000000100dc4126 = ~((bRam0000000100dc4106 | 0xba) & (bRam0000000100dc4106 ^ 0xff | 0x45));
    bRam0000000100dc4127 = bRam0000000100dc4107 ^ 0xe7;
    cRam0000000100dc4128 = bRam0000000100dc4108 + (bRam0000000100dc4108 & 0xc) * -2 + -0x74;
    cRam0000000100dc4129 = bRam0000000100dc4109 + (bRam0000000100dc4109 & 0xcc) * -2 + -0x34;
    bRam0000000100dc412a = bRam0000000100dc410a ^ 0x14;
    bRam0000000100dc412b = bRam0000000100dc410b ^ 0xd8;
    bRam0000000100dc412c = bRam0000000100dc410c ^ 0x13;
    bRam0000000100dc412d = bRam0000000100dc410d ^ 0x52;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dc412e = bRam0000000100dc410e ^ 0xfd;
    cRam0000000100dc412f = bRam0000000100dc410f + (bRam0000000100dc410f & 0xfb) * -2 + -5;
    bRam0000000100dc4130 = bRam0000000100dc4110 ^ 0x45;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92330 = 1;
  auVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  func_0x0001009404c0(auVar2._0_8_,auVar2._8_8_,0x100dc4140,param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar2._0_8_);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController tableView:willDisplayCell:forRowAtIndexPath:]
 * Entry: 0x1003640f4; original ABI: v40@0:8@16@24@32
 * Original instructions in modeled body: 255; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100364124 */
/* WARNING: Switch with 1 destination removed at 0x000100364130 */
/* WARNING: Switch with 1 destination removed at 0x000100364170 */
/* WARNING: Switch with 1 destination removed at 0x000100364398 */
/* WARNING: Switch with 1 destination removed at 0x0001003643c8 */
/* WARNING: Switch with 1 destination removed at 0x000100364400 */
/* WARNING: Switch with 1 destination removed at 0x000100364470 */
/* WARNING: Switch with 1 destination removed at 0x000100364480 */
/* WARNING: Switch with 1 destination removed at 0x000100364490 */
/* WARNING: Switch with 1 destination removed at 0x0001003644bc */
/* WARNING: Switch with 1 destination removed at 0x00010036464c */
/* WARNING: Switch with 1 destination removed at 0x000100364858 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYModifyDylibTableViewController_m02546
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92334 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    cRam0000000100dc4190 = bRam0000000100dc4160 + (bRam0000000100dc4160 & 6) * -2 + -0x7a;
    cRam0000000100dc4191 = bRam0000000100dc4161 + (bRam0000000100dc4161 & 8) * -2 + '\b';
    bRam0000000100dc4192 = bRam0000000100dc4162 ^ 0x3a;
    bRam0000000100dc4193 = bRam0000000100dc4163 ^ 0xdf;
    bRam0000000100dc4194 = bRam0000000100dc4164 ^ 0x66;
    bRam0000000100dc4195 = bRam0000000100dc4165 ^ 0x28;
    cRam0000000100dc4196 = bRam0000000100dc4166 + (bRam0000000100dc4166 & 0x66) * -2 + 'f';
    uRam0000000100dc4197 =
         CONCAT17((byte)((ulong)uRam0000000100dc4167 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4167 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4167 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4167 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4167 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4167 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4167 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800e8 >> 8),
                                                  (byte)uRam0000000100dc4167 ^ (byte)_UNK_1009800e8)
                                                  ))))));
    bRam0000000100dc419f = bRam0000000100dc416f ^ 0x67;
    bRam0000000100dc41a0 = bRam0000000100dc4170 ^ 0x77;
    cRam0000000100dc41a1 = bRam0000000100dc4171 + (bRam0000000100dc4171 & 0x37) * -2 + -0x49;
    uRam0000000100dc41a2 =
         CONCAT17((byte)((ulong)uRam0000000100dc4172 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4172 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4172 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4172 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4172 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4172 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4172 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800f0 >> 8),
                                                  (byte)uRam0000000100dc4172 ^ (byte)_UNK_1009800f0)
                                                  ))))));
    bRam0000000100dc41aa = bRam0000000100dc417a ^ 0xe9;
    cRam0000000100dc41ab = bRam0000000100dc417b + (bRam0000000100dc417b & 0x34) * -2 + -0x4c;
    bRam0000000100dc41ac = bRam0000000100dc417c ^ 0xe2;
    uRam0000000100dc41ad = uRam0000000100dc417d;
    bRam0000000100dc41ae = bRam0000000100dc417e ^ 0xfc;
    bRam0000000100dc41af = bRam0000000100dc417f ^ 0x24;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dc41b0 = bRam0000000100dc4180 ^ 0xd9;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dc41b1 = bRam0000000100dc4181 ^ 0x2e;
    bRam0000000100dc41b2 = bRam0000000100dc4182 ^ 9;
    bRam0000000100dc41b3 = bRam0000000100dc4183 ^ 0xbd;
    bRam0000000100dc41b4 = bRam0000000100dc4184 ^ 0x65;
    bRam0000000100dc41b5 = bRam0000000100dc4185 ^ 0xf9;
    bRam0000000100dc41b6 = bRam0000000100dc4186 ^ 0x9f;
    cRam0000000100dc41b7 = bRam0000000100dc4187 + (bRam0000000100dc4187 & 0x2e) * -2 + '.';
    bRam0000000100dc41b8 = bRam0000000100dc4188 ^ 0xc9;
    cRam0000000100dc41b9 = bRam0000000100dc4189 + (bRam0000000100dc4189 & 0x37) * -2 + -0x49;
    bRam0000000100dc41ba = bRam0000000100dc418a ^ 6;
    bRam0000000100dc41bb = bRam0000000100dc418b ^ 0x78;
    bRam0000000100dc41bc = bRam0000000100dc418c ^ 0x7c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92334 = 1;
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
  uVar2 = _objc_retain(param_5);
  func_0x00010093f300(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  auVar5 = func_0x00010095cb20(uVar2);
  func_0x000100951c40(uVar3,auVar5._8_8_,auVar5._0_8_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(uVar1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar5._0_8_,auVar5._8_8_,uVar2);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar3);
  func_0x000100976a00(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100366498();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010093da20(auVar5._0_8_,auVar5._8_8_,0x100dc41c0);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010036465c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100dc4890))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController tableView:didSelectRowAtIndexPath:]
 * Entry: 0x100364978; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 320; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003649b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003649bc */
/* WARNING: Switch with 1 destination removed at 0x000100364a30 */
/* WARNING: Switch with 1 destination removed at 0x000100364af8 */
/* WARNING: Switch with 1 destination removed at 0x000100364b8c */
/* WARNING: Switch with 1 destination removed at 0x000100364ccc */
/* WARNING: Switch with 1 destination removed at 0x000100364ce8 */
/* WARNING: Switch with 1 destination removed at 0x000100364cf8 */
/* WARNING: Switch with 1 destination removed at 0x000100364e20 */
/* WARNING: Switch with 1 destination removed at 0x0001003650b4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYModifyDylibTableViewController_m02547
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e92338 == 0) {
  case true:
    uRam0000000100dc41ec = uRam0000000100dc41e0 ^ 0xbcd6;
    uRam0000000100dc41ee = uRam0000000100dc41e2 ^ 0x1316;
    sRam0000000100dc41f0 = uRam0000000100dc41e4 + (uRam0000000100dc41e4 & 0x1d04) * -2 + -0x62fc;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dc41f2 = uRam0000000100dc41e6 ^ 0x47ed;
    sRam0000000100dc41f4 = uRam0000000100dc41e8 + (uRam0000000100dc41e8 & 0x55ae) * -2 + -0x2a52;
    sRam0000000100dc41f6 = uRam0000000100dc41ea + (uRam0000000100dc41ea & 0x1246) * -2 + 0x1246;
    uRam0000000100dc4260 = uRam0000000100dc425a ^ 0xcbb0;
    uRam0000000100dc4262 =
         ~((uRam0000000100dc425c | 0x1489) & (uRam0000000100dc425c ^ 0xffff | 0xeb76));
    uRam0000000100dc4264 = uRam0000000100dc425e ^ 0x5ca2;
    uRam0000000100dc426c = uRam0000000100dc4266 ^ 0xba28;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dc4230 =
         CONCAT17((byte)((ulong)uRam0000000100dc4200 >> 0x38) ^
                  (byte)((ulong)_UNK_100980110 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4200 >> 0x30) ^
                           (byte)((ulong)_UNK_100980110 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4200 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980110 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4200 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980110 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4200 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980110 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4200 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980110 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4200 >> 8) ^
                                                  (byte)((ulong)_UNK_100980110 >> 8),
                                                  (byte)uRam0000000100dc4200 ^ (byte)_UNK_100980110)
                                                  ))))));
    uRam0000000100dc4238 =
         CONCAT17((byte)((ulong)uRam0000000100dc4208 >> 0x38) ^
                  (byte)((ulong)_UNK_100980118 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4208 >> 0x30) ^
                           (byte)((ulong)_UNK_100980118 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4208 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980118 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4208 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980118 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4208 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980118 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4208 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980118 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4208 >> 8) ^
                                                  (byte)((ulong)_UNK_100980118 >> 8),
                                                  (byte)uRam0000000100dc4208 ^ (byte)_UNK_100980118)
                                                  ))))));
    uRam0000000100dc4240 =
         CONCAT17((byte)((ulong)uRam0000000100dc4210 >> 0x38) ^
                  (byte)((ulong)_UNK_100980120 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4210 >> 0x30) ^
                           (byte)((ulong)_UNK_100980120 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4210 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980120 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4210 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980120 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4210 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980120 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4210 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980120 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4210 >> 8) ^
                                                  (byte)((ulong)_UNK_100980120 >> 8),
                                                  (byte)uRam0000000100dc4210 ^ (byte)_UNK_100980120)
                                                  ))))));
    uRam0000000100dc4248 =
         CONCAT17((byte)((ulong)uRam0000000100dc4218 >> 0x38) ^
                  (byte)((ulong)_UNK_100980128 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4218 >> 0x30) ^
                           (byte)((ulong)_UNK_100980128 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4218 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980128 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4218 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980128 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4218 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980128 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4218 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980128 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4218 >> 8) ^
                                                  (byte)((ulong)_UNK_100980128 >> 8),
                                                  (byte)uRam0000000100dc4218 ^ (byte)_UNK_100980128)
                                                  ))))));
    uRam0000000100dc426e = uRam0000000100dc4268 ^ 0x36e9;
    uRam0000000100dc4270 = uRam0000000100dc426a ^ 0x5bdc;
    uRam0000000100dc4250 =
         CONCAT17((byte)((ulong)uRam0000000100dc4220 >> 0x38) ^
                  (byte)((ulong)_UNK_1009800f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dc4220 >> 0x30) ^
                           (byte)((ulong)_UNK_1009800f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dc4220 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009800f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dc4220 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009800f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dc4220 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009800f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dc4220 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009800f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dc4220 >> 8) ^
                                                  (byte)((ulong)_UNK_1009800f8 >> 8),
                                                  (byte)uRam0000000100dc4220 ^ (byte)_UNK_1009800f8)
                                                  ))))));
    uRam0000000100dc4258 = uRam0000000100dc4228 ^ 0xe3;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e92338 = 1;
  uStack_80 = param_4;
  uStack_78 = param_1;
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(uStack_80);
  func_0x0001003664b4(uStack_78);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar8 = func_0x00010095cb20(uVar3);
  func_0x000100951c40(uVar4,auVar8._8_8_,auVar8._0_8_);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uRam0000000100c714b8;
  func_0x00010097a8a0(0x100dc4280);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a8a0(0x100dc42a0);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uStack_90 = uVar3;
  uStack_88 = uVar2;
  func_0x000100937d40(uVar4,auVar8._8_8_,uVar6,auVar8._0_8_,0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  _objc_release(uVar6);
  func_0x0001003664b8(0x100dc42c0);
  uStack_80 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _UNK_10097b060;
  puStack_c0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_b8 = _UNK_10097b060;
  puStack_b0 = &DAT_1003650b8;
  puStack_a8 = &UNK_100aff638;
  uStack_a0 = uStack_78;
  auVar8 = _objc_retain(uVar5);
  uVar2 = uStack_80;
  uVar5 = auVar8._0_8_;
  uStack_98 = uVar5;
                    /* WARNING: Switch is manually overridden */
  func_0x00010097a380(uVar3,auVar8._8_8_,uStack_80,&puStack_c0);
  _objc_release(uVar2);
  func_0x0001003664bc(0x100dc42e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
  puStack_100 = PTR___NSConcreteStackBlock_100afc560;
  uStack_f8 = uVar4;
  puStack_f0 = &DAT_10036514c;
  puStack_e8 = &UNK_100aff518;
  uStack_e0 = uStack_78;
  uStack_d8 = uVar5;
  uVar6 = _objc_retain(uStack_88);
  uStack_d0 = uVar6;
  uVar7 = _objc_retain(uStack_90);
  uStack_c8 = uVar7;
  auVar8 = _objc_retain(uVar5);
  func_0x00010097a380(uVar3,auVar8._8_8_,uVar2,&puStack_100);
  _objc_release(uVar2);
  puStack_130 = puVar1;
  uStack_128 = uVar4;
  puStack_120 = &DAT_100365390;
  puStack_118 = &UNK_100aff638;
  uStack_110 = uVar6;
  uStack_108 = uVar7;
  uVar4 = _objc_retain(uVar7);
  auVar9 = _objc_retain(uVar6);
  func_0x00010097a3e0(uVar3,auVar9._8_8_,&puStack_130);
  func_0x0001009723a0(uVar3,extraout_x1,1);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_98);
  _objc_release(uVar4);
  _objc_release(auVar9._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController modifyDylib:]
 * Entry: 0x100365404; original ABI: v24@0:8@16
 * Original instructions in modeled body: 189; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010036543c */
/* WARNING: Switch with 1 destination removed at 0x000100365450 */
/* WARNING: Switch with 1 destination removed at 0x00010036545c */
/* WARNING: Switch with 1 destination removed at 0x0001003654f8 */
/* WARNING: Switch with 1 destination removed at 0x000100365538 */
/* WARNING: Switch with 1 destination removed at 0x000100365544 */
/* WARNING: Switch with 1 destination removed at 0x000100365554 */
/* WARNING: Switch with 1 destination removed at 0x0001003655cc */
/* WARNING: Switch with 1 destination removed at 0x0001003655dc */
/* WARNING: Switch with 1 destination removed at 0x0001003657c8 */
/* WARNING: Switch with 1 destination removed at 0x000100365804 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYModifyDylibTableViewController_m02548
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e9233c == 0) {
  case true:
    uRam0000000100dc430a = uRam0000000100dc4300 ^ 0xb452;
    uRam0000000100dc430c = uRam0000000100dc4302 ^ 0xfe2b;
    uRam0000000100dc430e = uRam0000000100dc4304 ^ 0xd53d;
    uRam0000000100dc4310 = uRam0000000100dc4306 ^ 0x34a3;
    uRam0000000100dc4312 = uRam0000000100dc4308 ^ 0x706e;
    uRam0000000100dc431a = uRam0000000100dc4314 ^ 0xd671;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dc431c = uRam0000000100dc4316 ^ 0x7524;
    uRam0000000100dc431e = uRam0000000100dc4318 ^ 0x36a5;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e9233c = 1;
  uVar1 = _objc_retain(param_3);
  uVar2 = uRam0000000100c714b8;
  func_0x00010097a8a0(0x100dc4320);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x00010097a4a0(uVar2,auVar6._8_8_,auVar6._0_8_,0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  func_0x0001009375e0(uVar2,extraout_x1_00,&UNK_100b034d8);
  puVar4 = PTR___NSConcreteStackBlock_100afc560;
  puStack_a0 = PTR___NSConcreteStackBlock_100afc560;
  uVar5 = _UNK_10097b060;
  uStack_98 = _UNK_10097b060;
  puStack_90 = &DAT_100365b20;
  puStack_88 = &UNK_100aff308;
  uStack_80 = param_1;
  func_0x00010097a3e0(uVar2,extraout_x1_01,&puStack_a0);
  func_0x00010097a8a0(0x100dc4340);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_c0 = &DAT_100365c08;
  puStack_b8 = &UNK_100aff638;
  puStack_d0 = puVar4;
  uStack_c8 = uVar5;
  uStack_b0 = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar6 = _objc_retain(uVar1);
  uStack_a8 = auVar6._0_8_;
  func_0x0001003664d4(uVar2,auVar6._8_8_,uVar3,&puStack_d0);
  _objc_release(uVar3);
  func_0x0001009723a0(uVar2,extraout_x1,1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uStack_a8);
  _objc_release(uVar2);
  _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController dylibPath]
 * Entry: 0x1003661f8; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100366200 */
/* WARNING: Switch with 1 destination removed at 0x00010036620c */
/* WARNING: Switch with 1 destination removed at 0x000100366218 */

undefined8 Recovered_YYYModifyDylibTableViewController_m02549(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ed8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController setDylibPath:]
 * Entry: 0x10036622c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100366250 */
/* WARNING: Switch with 1 destination removed at 0x00010036625c */
/* WARNING: Switch with 1 destination removed at 0x00010036626c */
/* WARNING: Switch with 1 destination removed at 0x0001003662b0 */

void Recovered_YYYModifyDylibTableViewController_m02550
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)iRam0000000100c75ed8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController bundle]
 * Entry: 0x1003662b4; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003662bc */

undefined8 Recovered_YYYModifyDylibTableViewController_m02551(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75edc);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController setBundle:]
 * Entry: 0x1003662d0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003662f0 */
/* WARNING: Switch with 1 destination removed at 0x0001003662fc */
/* WARNING: Switch with 1 destination removed at 0x00010036630c */
/* WARNING: Switch with 1 destination removed at 0x000100366330 */

void Recovered_YYYModifyDylibTableViewController_m02552
               (long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75edc,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController dataSources]
 * Entry: 0x100366340; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100366348 */
/* WARNING: Switch with 1 destination removed at 0x000100366354 */
/* WARNING: Switch with 1 destination removed at 0x000100366368 */

undefined8 Recovered_YYYModifyDylibTableViewController_m02553(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75ee0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController setDataSources:]
 * Entry: 0x100366374; original ABI: v24@0:8@16
 * Original instructions in modeled body: 19; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100366398 */
/* WARNING: Switch with 1 destination removed at 0x0001003663bc */

void Recovered_YYYModifyDylibTableViewController_m02554
               (long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ee0,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYModifyDylibTableViewController .cxx_destruct]
 * Entry: 0x1003663cc; original ABI: v16@0:8
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003663e8 */
/* WARNING: Switch with 1 destination removed at 0x000100366410 */
/* WARNING: Switch with 1 destination removed at 0x00010036645c */

void Recovered_YYYModifyDylibTableViewController_m02555(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75ee0,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75edc,0);
  _objc_storeStrong(param_1 + iRam0000000100c75ed8,0);
                    /* WARNING: Switch is manually overridden */
  return;
}



