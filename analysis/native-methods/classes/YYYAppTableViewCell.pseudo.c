/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x10006aa00; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 88; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010006aa28 */
/* WARNING: Switch with 1 destination removed at 0x00010006aa4c */
/* WARNING: Switch with 1 destination removed at 0x00010006aa60 */
/* WARNING: Switch with 1 destination removed at 0x00010006aa6c */
/* WARNING: Switch with 1 destination removed at 0x00010006aa90 */
/* WARNING: Switch with 1 destination removed at 0x00010006aab8 */
/* WARNING: Switch with 1 destination removed at 0x00010006aadc */
/* WARNING: Switch with 1 destination removed at 0x00010006aaf8 */
/* WARNING: Switch with 1 destination removed at 0x00010006ab08 */
/* WARNING: Switch with 1 destination removed at 0x00010006ab34 */
/* WARNING: Switch with 1 destination removed at 0x00010006ab94 */
/* WARNING: Switch with 1 destination removed at 0x00010006abb0 */

undefined8
Recovered_YYYAppTableViewCell_m00448
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
  uStack_48 = uRam0000000100c738d0;
  uStack_50 = param_1;
  lVar3 = func_0x000100070748(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                              uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x00010094dda0(lVar3);
                    /* WARNING: Switch is manually overridden */
    func_0x00010007074c(*(undefined8 *)PTR__UIEdgeInsetsZero_100afc418,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_100afc418 + 0x18),lVar3);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell prepareForReuse]
 * Entry: 0x10006abb4; original ABI: v16@0:8
 * Original instructions in modeled body: 164; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010006abe4 */
/* WARNING: Switch with 1 destination removed at 0x00010006abf0 */
/* WARNING: Switch with 1 destination removed at 0x00010006acb8 */
/* WARNING: Switch with 1 destination removed at 0x00010006ad10 */
/* WARNING: Switch with 1 destination removed at 0x00010006ad28 */
/* WARNING: Switch with 1 destination removed at 0x00010006ad34 */
/* WARNING: Switch with 1 destination removed at 0x00010006aebc */

void Recovered_YYYAppTableViewCell_m00449(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e910a0 == 0) {
  case true:
    bRam0000000100cc507c = ~((bRam0000000100cc5070 | 0x2e) & (bRam0000000100cc5070 ^ 0xff | 0xd1));
    bRam0000000100cc507d = bRam0000000100cc5071 ^ 0x46;
    bRam0000000100cc507e = bRam0000000100cc5072 ^ 0xf6;
    bRam0000000100cc507f = bRam0000000100cc5073 ^ 0x5b;
    bRam0000000100cc5080 = bRam0000000100cc5074 ^ 0xd0;
    bRam0000000100cc5081 = bRam0000000100cc5075 ^ 0x89;
    bRam0000000100cc5082 = bRam0000000100cc5076 ^ 0xdf;
    cRam0000000100cc5083 = bRam0000000100cc5077 + (bRam0000000100cc5077 & 0x24) * -2 + -0x5c;
    bRam0000000100cc5084 = bRam0000000100cc5078 ^ 0xb0;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100cc5085 = uRam0000000100cc5079;
    bRam0000000100cc5086 = bRam0000000100cc507a ^ 0xea;
    bRam0000000100cc5087 = bRam0000000100cc507b ^ 0x9a;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e910a0 = 1;
  uStack_58 = uRam0000000100c738d0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_prepareForReuse_100c65378);
  func_0x00010097a980(uRam0000000100c71438);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar3._0_8_,auVar3._8_8_,uVar2);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  uVar1 = func_0x00010094c1e0(param_1);
  func_0x00010095e9c0(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010095fc00((double)uVar1,uVar2);
  _objc_release(uVar2);
  func_0x000100947300(uRam0000000100c713c0,extraout_x1,0x100cc5090);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070750(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070754(auVar3._0_8_,auVar3._8_8_,uVar2);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell loadSubviews]
 * Entry: 0x10006aec0; original ABI: v16@0:8
 * Original instructions in modeled body: 326; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010006aef4 */
/* WARNING: Switch with 1 destination removed at 0x00010006b1cc */
/* WARNING: Switch with 1 destination removed at 0x00010006b1e4 */
/* WARNING: Switch with 1 destination removed at 0x00010006b7b0 */
/* WARNING: Switch with 1 destination removed at 0x00010006b7c0 */
/* WARNING: Switch with 1 destination removed at 0x00010006b848 */

void Recovered_YYYAppTableViewCell_m00450(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar4 = func_0x000100951360(uRam0000000100c715a0);
  func_0x000100966d60(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x00010094e880(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070764();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070768(0x4024000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010007076c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070770();
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009670e0(auVar4._0_8_,auVar4._8_8_,1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x000100070774(uRam0000000100c71438);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_retainAutorelease();
  uVar2 = func_0x000100070778();
  func_0x00010007077c(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070780();
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960de0(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = func_0x000100953560(uRam0000000100c714d0);
  func_0x00010094e880(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d2e0();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960e40(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094e880(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100070784(uVar1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  auVar4 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096f180(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x0001009552e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x000100070788(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100976a00(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010007078c(uVar1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  auVar4 = func_0x000100951360(uRam0000000100c71420);
  func_0x00010096d7a0(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x000100070790(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009738e0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x000100070794(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009738e0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x000100955120(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100070798(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x00010093dd00(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009738e0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  auVar4 = func_0x000100951360(uRam0000000100c71420);
  func_0x0001009642e0(param_1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  func_0x000100974e00(0x402a000000000000,uRam0000000100c713a8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964720(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x0001009550e0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
  func_0x00010007079c(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943920(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100937540(uVar1,auVar4._8_8_,auVar4._0_8_);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell setupInfo:]
 * Entry: 0x10006b84c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 376; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010006b87c */
/* WARNING: Switch with 1 destination removed at 0x00010006b890 */
/* WARNING: Switch with 1 destination removed at 0x00010006b89c */
/* WARNING: Switch with 1 destination removed at 0x00010006b8f0 */
/* WARNING: Switch with 1 destination removed at 0x00010006b930 */
/* WARNING: Switch with 1 destination removed at 0x00010006b980 */
/* WARNING: Switch with 1 destination removed at 0x00010006bcd4 */
/* WARNING: Switch with 1 destination removed at 0x00010006bce4 */
/* WARNING: Switch with 1 destination removed at 0x00010006bcfc */
/* WARNING: Switch with 1 destination removed at 0x00010006bd34 */
/* WARNING: Switch with 1 destination removed at 0x00010006ce20 */
/* WARNING: Switch with 1 destination removed at 0x00010006d010 */
/* WARNING: Switch with 1 destination removed at 0x00010006d044 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYAppTableViewCell_m00451(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e910a4 == 0) {
  case true:
    uRam0000000100cc514a = uRam0000000100cc5144 ^ 0x83f8;
    uRam0000000100cc514c = uRam0000000100cc5146 ^ 0x3ae1;
    uRam0000000100cc514e = uRam0000000100cc5148 ^ 0xc39b;
    bRam0000000100cc50d6 = bRam0000000100cc50c8 ^ 0xc4;
    bRam0000000100cc50d7 = bRam0000000100cc50c9 ^ 0x54;
    bRam0000000100cc50d8 = bRam0000000100cc50ca ^ 0xe3;
    bRam0000000100cc50d9 = bRam0000000100cc50cb ^ 0xa5;
    bRam0000000100cc50da = bRam0000000100cc50cc ^ 0x75;
    bRam0000000100cc50db = bRam0000000100cc50cd ^ 0x5f;
    bRam0000000100cc50dc = bRam0000000100cc50ce ^ 0x75;
    cRam0000000100cc50dd = bRam0000000100cc50cf + (bRam0000000100cc50cf & 0xc3) * -2 + -0x3d;
    bRam0000000100cc50de = bRam0000000100cc50d0 ^ 0x2e;
    bRam0000000100cc50df = bRam0000000100cc50d1 ^ 0xe1;
    bRam0000000100cc50e0 = bRam0000000100cc50d2 ^ 0xd5;
    bRam0000000100cc50e1 = bRam0000000100cc50d3 ^ 0x6d;
    bRam0000000100cc50e2 = bRam0000000100cc50d4 ^ 0x8d;
    bRam0000000100cc50e3 = ~((bRam0000000100cc50d5 | 7) & (~bRam0000000100cc50d5 | 0xf8));
    bRam0000000100cc50bc = bRam0000000100cc50b0 ^ 0xd8;
    bRam0000000100cc50bd = bRam0000000100cc50b1 ^ 0xc4;
    cRam0000000100cc50be = bRam0000000100cc50b2 + (bRam0000000100cc50b2 & 0x26) * -2 + '&';
    bRam0000000100cc50bf = bRam0000000100cc50b3 ^ 0x94;
    bRam0000000100cc50c0 = bRam0000000100cc50b4 ^ 0x5f;
    bRam0000000100cc50c1 = bRam0000000100cc50b5 ^ 0x5b;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100cc50c2 = bRam0000000100cc50b6 + (bRam0000000100cc50b6 & 0x5b) * -2 + -0x25;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100cc50c3 = bRam0000000100cc50b7 + (bRam0000000100cc50b7 & 0xcc) * -2 + -0x34;
    bRam0000000100cc50c4 = bRam0000000100cc50b8 ^ 0xe;
    bRam0000000100cc50c5 = bRam0000000100cc50b9 ^ 0x54;
    bRam0000000100cc50c6 = bRam0000000100cc50ba ^ 0xcf;
    bRam0000000100cc50c7 = bRam0000000100cc50bb ^ 0x41;
    sRam0000000100cc50f8 = uRam0000000100cc50e8 + (uRam0000000100cc50e8 & 0x2e17) * -2 + 0x2e17;
    uRam0000000100cc50fa =
         CONCAT17((byte)((ulong)uRam0000000100cc50ea >> 0x38) ^
                  (byte)((ulong)_UNK_10097b8a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cc50ea >> 0x30) ^
                           (byte)((ulong)_UNK_10097b8a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cc50ea >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b8a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cc50ea >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b8a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cc50ea >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b8a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cc50ea >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b8a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cc50ea >> 8) ^
                                                  (byte)((ulong)_UNK_10097b8a0 >> 8),
                                                  (byte)uRam0000000100cc50ea ^ (byte)_UNK_10097b8a0)
                                                  ))))));
    uRam0000000100cc5102 = uRam0000000100cc50f2 ^ 0x38b2;
    uRam0000000100cc5104 = uRam0000000100cc50f4 ^ 0xc3fc;
    bRam0000000100cc5112 = bRam0000000100cc5106 ^ 0x6d;
    cRam0000000100cc5113 = bRam0000000100cc5107 + (bRam0000000100cc5107 & 0x7e) * -2 + '~';
    bRam0000000100cc5114 = ~((bRam0000000100cc5108 | 0x79) & (bRam0000000100cc5108 ^ 0xff | 0x86));
    bRam0000000100cc5115 = bRam0000000100cc5109 ^ 0x83;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cc5116 = bRam0000000100cc510a ^ 0x8c;
    bRam0000000100cc5117 = bRam0000000100cc510b ^ 0x54;
    bRam0000000100cc5118 = bRam0000000100cc510c ^ 0x94;
    bRam0000000100cc5119 = bRam0000000100cc510d ^ 0xe7;
    cRam0000000100cc511a = bRam0000000100cc510e + (bRam0000000100cc510e & 0x7e) * -2 + '~';
    bRam0000000100cc511b = bRam0000000100cc510f ^ 0x5d;
    bRam0000000100cc511c = bRam0000000100cc5110 ^ 0x7b;
    bRam0000000100cc511d = bRam0000000100cc5111 ^ 0x70;
    uRam0000000100cc5128 = uRam0000000100cc511e ^ 0xb54;
    uRam0000000100cc512a = uRam0000000100cc5120 ^ 0xfce1;
    uRam0000000100cc512c = uRam0000000100cc5122 ^ 0xe5b3;
    sRam0000000100cc512e = uRam0000000100cc5124 + (uRam0000000100cc5124 & 0x202a) * -2 + 0x202a;
    uRam0000000100cc5130 = uRam0000000100cc5126 ^ 0x9eb8;
    bRam0000000100cc513b = bRam0000000100cc5132 ^ 0xf0;
    cRam0000000100cc513c = bRam0000000100cc5133 + (bRam0000000100cc5133 & 0x2e) * -2 + '.';
    bRam0000000100cc513d = bRam0000000100cc5134 ^ 0x52;
    bRam0000000100cc513e = bRam0000000100cc5135 ^ 0xd7;
    bRam0000000100cc513f = bRam0000000100cc5136 ^ 0x2d;
    bRam0000000100cc5140 = bRam0000000100cc5137 ^ 0xdf;
    bRam0000000100cc5141 = bRam0000000100cc5138 ^ 0x12;
    bRam0000000100cc5142 = bRam0000000100cc5139 ^ 1;
    bRam0000000100cc5143 = bRam0000000100cc513a ^ 0xfd;
    uRam0000000100cc5156 = uRam0000000100cc5150 ^ 0xe85;
    uRam0000000100cc5158 = uRam0000000100cc5152 ^ 0xa8a8;
    uRam0000000100cc515a = uRam0000000100cc5154 ^ 0xb671;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e910a4 = 1;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar3 = func_0x00010093c700(uRam0000000100c71720);
  uVar2 = func_0x0001000707dc(uVar1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010006bd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100cc55b0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell yyy_setupViewsConstraints]
 * Entry: 0x10006d9d0; original ABI: v16@0:8
 * Original instructions in modeled body: 131; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010006da0c */
/* WARNING: Switch with 1 destination removed at 0x00010006db60 */
/* WARNING: Switch with 1 destination removed at 0x00010006db74 */
/* WARNING: Switch with 1 destination removed at 0x00010006db80 */
/* WARNING: Switch with 1 destination removed at 0x00010006dbac */
/* WARNING: Switch with 1 destination removed at 0x00010006dd0c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYAppTableViewCell_m00452(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
  uStack_78 = uRam0000000100c738d0;
  uStack_80 = param_1;
  func_0x00010007092c(&uStack_80,PTR_s_yyy_setupViewsConstraints_100c711a0);
  func_0x00010094e880(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar1 = _UNK_10097b060;
  puStack_b0 = puVar2;
  uStack_a8 = _UNK_10097b060;
  puStack_a0 = &DAT_10006dd10;
  puStack_98 = &UNK_100afeb38;
  uStack_90 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_b0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100976a00(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_e0 = puVar2;
  uStack_d8 = uVar1;
  puStack_d0 = &DAT_10006f790;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_c8 = &UNK_100afeb38;
  uStack_c0 = param_1;
  func_0x000100070930(auVar3._0_8_,auVar3._8_8_,&puStack_e0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x0001009738e0(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar2;
  uStack_108 = uVar1;
  puStack_100 = &DAT_10006fdc8;
  puStack_f8 = &UNK_100afeb38;
  uStack_f0 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_110);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  func_0x000100943920(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar2;
  uStack_138 = uVar1;
  puStack_130 = &DAT_1000700e8;
  puStack_128 = &UNK_100afeb38;
  uStack_120 = param_1;
  func_0x00010094f380(auVar3._0_8_,auVar3._8_8_,&puStack_140);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell logoImageView]
 * Entry: 0x100070400; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100070408 */
/* WARNING: Switch with 1 destination removed at 0x000100070414 */

undefined8 Recovered_YYYAppTableViewCell_m00453(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c753e0);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell setLogoImageView:]
 * Entry: 0x100070428; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100070450 */
/* WARNING: Switch with 1 destination removed at 0x000100070478 */
/* WARNING: Switch with 1 destination removed at 0x000100070484 */
/* WARNING: Switch with 1 destination removed at 0x0001000704a0 */

void Recovered_YYYAppTableViewCell_m00454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c753e0;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell titleLabel]
 * Entry: 0x1000704b4; original ABI: @16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000704c4 */

undefined8 Recovered_YYYAppTableViewCell_m00455(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c753e4);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell setTitleLabel:]
 * Entry: 0x1000704d0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000704dc */
/* WARNING: Switch with 1 destination removed at 0x0001000704e8 */

void Recovered_YYYAppTableViewCell_m00456(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c753e4,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell stateLabel]
 * Entry: 0x1000704fc; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010007050c */
/* WARNING: Switch with 1 destination removed at 0x000100070518 */

undefined8 Recovered_YYYAppTableViewCell_m00457(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c753e8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell setStateLabel:]
 * Entry: 0x100070524; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100070540 */
/* WARNING: Switch with 1 destination removed at 0x00010007054c */
/* WARNING: Switch with 1 destination removed at 0x000100070568 */

void Recovered_YYYAppTableViewCell_m00458(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + iRam0000000100c753e8);
  *(undefined8 *)(param_1 + iRam0000000100c753e8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell fileNameLabel]
 * Entry: 0x10007058c; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100070594 */
/* WARNING: Switch with 1 destination removed at 0x0001000705a0 */

undefined8 Recovered_YYYAppTableViewCell_m00459(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c753ec);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYAppTableViewCell setFileNameLabel:]
 * Entry: 0x1000705b4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000705d4 */
/* WARNING: Switch with 1 destination removed at 0x0001000705e4 */
/* WARNING: Switch with 1 destination removed at 0x000100070620 */

void Recovered_YYYAppTableViewCell_m00460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c753ec;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
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
 * Method: -[YYYAppTableViewCell .cxx_destruct]
 * Entry: 0x100070624; original ABI: v16@0:8
 * Original instructions in modeled body: 41; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100070644 */
/* WARNING: Switch with 1 destination removed at 0x000100070650 */
/* WARNING: Switch with 1 destination removed at 0x000100070674 */
/* WARNING: Switch with 1 destination removed at 0x0001000706e0 */

void Recovered_YYYAppTableViewCell_m00461(long param_1)

{
  _objc_storeStrong(param_1 + iRam0000000100c753ec,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c753e8,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c753e4,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c753e0,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYAppTableViewCell requiresConstraintBasedLayout]
 * Entry: 0x1000703d4; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000703dc */
/* WARNING: Switch with 1 destination removed at 0x0001000703e8 */
/* WARNING: Switch with 1 destination removed at 0x0001000703f4 */

undefined8 Recovered_YYYAppTableViewCell_m00462(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



