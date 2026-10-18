/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager init]
 * Entry: 0x10038192c; original ABI: @16@0:8
 * Original instructions in modeled body: 127; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381958 */
/* WARNING: Switch with 1 destination removed at 0x000100381964 */
/* WARNING: Switch with 1 destination removed at 0x00010038197c */
/* WARNING: Switch with 1 destination removed at 0x0001003819ac */
/* WARNING: Switch with 1 destination removed at 0x000100381a94 */
/* WARNING: Switch with 1 destination removed at 0x000100381ae4 */
/* WARNING: Switch with 1 destination removed at 0x000100381b50 */
/* WARNING: Switch with 1 destination removed at 0x000100381b5c */
/* WARNING: Switch with 1 destination removed at 0x000100381b70 */
/* WARNING: Switch with 1 destination removed at 0x000100381bb8 */
/* WARNING: Switch with 1 destination removed at 0x000100381bd4 */

undefined8 Recovered_YYYWebDAVManager_m02646(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = uRam0000000100c73bf8;
  uStack_50 = param_1;
  lVar2 = _objc_msgSendSuper2(&uStack_50,PTR_s_init_100c60da0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    _objc_alloc(uRam0000000100c71b58);
    auVar4 = func_0x000100948020();
    func_0x00010096ae60(lVar2,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    func_0x0001009595a0(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100386cb0(auVar4._0_8_,auVar4._8_8_,1);
    _objc_release(auVar4._0_8_);
    func_0x00010093ff80(uRam0000000100c71788);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar3 = uRam0000000100c71698;
    func_0x000100386cb4(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010095f000(uVar3,auVar4._8_8_,uVar1,lVar2,auVar4._0_8_);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096c660(lVar2,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x000100940920(uRam0000000100c71440);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100386cb8(lVar2,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  }
  uVar3 = _objc_retain(lVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager urlForPath:]
 * Entry: 0x100381bd8; original ABI: @24@0:8@16
 * Original instructions in modeled body: 57; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381bfc */
/* WARNING: Switch with 1 destination removed at 0x000100381c18 */
/* WARNING: Switch with 1 destination removed at 0x000100381c28 */
/* WARNING: Switch with 1 destination removed at 0x000100381c34 */
/* WARNING: Switch with 1 destination removed at 0x000100381d00 */
/* WARNING: Switch with 1 destination removed at 0x000100381d1c */

void Recovered_YYYWebDAVManager_m02647(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x000100939e60(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386cc8(uVar1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100935020(uVar2,auVar4._8_8_,auVar4._0_8_);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager fileListWithPath:completion:]
 * Entry: 0x100381d20; original ABI: v32@0:8@16@?24
 * Original instructions in modeled body: 648; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381d60 */
/* WARNING: Switch with 1 destination removed at 0x000100381d6c */
/* WARNING: Switch with 1 destination removed at 0x000100381d88 */
/* WARNING: Switch with 1 destination removed at 0x000100381ddc */
/* WARNING: Switch with 1 destination removed at 0x000100381e00 */
/* WARNING: Switch with 1 destination removed at 0x00010038205c */
/* WARNING: Switch with 1 destination removed at 0x000100382334 */
/* WARNING: Switch with 1 destination removed at 0x0001003823d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003823ec */
/* WARNING: Switch with 1 destination removed at 0x000100382480 */
/* WARNING: Switch with 1 destination removed at 0x000100382c14 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVManager_m02648
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923d4 == 0) {
  case true:
    bRam0000000100dcf119 = bRam0000000100dcf110 ^ 0xdb;
    cRam0000000100dcf11a = bRam0000000100dcf111 + (bRam0000000100dcf111 & 0x25) * -2 + -0x5b;
    bRam0000000100dcf11b = bRam0000000100dcf112 ^ 0x76;
    cRam0000000100dcf11c = bRam0000000100dcf113 + (bRam0000000100dcf113 & 0xe) * -2 + '\x0e';
    bRam0000000100dcf11d = bRam0000000100dcf114 ^ 0x5d;
    bRam0000000100dcf11e = bRam0000000100dcf115 ^ 0x56;
    bRam0000000100dcf11f = bRam0000000100dcf116 ^ 0x7a;
    bRam0000000100dcf120 = bRam0000000100dcf117 ^ 0xc9;
    bRam0000000100dcf121 = bRam0000000100dcf118 ^ 0x23;
    bRam0000000100dcf1f1 = bRam0000000100dcf1ef ^ 0xce;
    bRam0000000100dcf1f2 = bRam0000000100dcf1f0 ^ 0xbc;
    uRam0000000100dcf190 =
         CONCAT17((byte)((ulong)uRam0000000100dcf130 >> 0x38) ^
                  (byte)((ulong)_UNK_1009802e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf130 >> 0x30) ^
                           (byte)((ulong)_UNK_1009802e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf130 >> 0x28) ^
                                    (byte)((ulong)_UNK_1009802e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf130 >> 0x20) ^
                                             (byte)((ulong)_UNK_1009802e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf130 >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009802e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf130 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009802e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf130 >> 8) ^
                                                  (byte)((ulong)_UNK_1009802e8 >> 8),
                                                  (byte)uRam0000000100dcf130 ^ (byte)_UNK_1009802e8)
                                                  ))))));
    bRam0000000100dcf198 = bRam0000000100dcf138 ^ 4;
    cRam0000000100dcf199 = bRam0000000100dcf139 + (bRam0000000100dcf139 & 0x37) * -2 + '7';
    bRam0000000100dcf19a = bRam0000000100dcf13a ^ 0x1e;
    bRam0000000100dcf19b = bRam0000000100dcf13b ^ 0xd7;
    cRam0000000100dcf19c = bRam0000000100dcf13c + (bRam0000000100dcf13c & 0xee) * -2 + -0x12;
    bRam0000000100dcf19d = bRam0000000100dcf13d ^ 0x95;
    bRam0000000100dcf19e = bRam0000000100dcf13e ^ 0xfb;
    bRam0000000100dcf19f = bRam0000000100dcf13f ^ 0x7b;
    bRam0000000100dcf1a0 = ~((bRam0000000100dcf140 | 5) & (bRam0000000100dcf140 ^ 0xff | 0xfa));
    cRam0000000100dcf1a1 = bRam0000000100dcf141 + (bRam0000000100dcf141 & 0x27) * -2 + -0x59;
    cRam0000000100dcf1a2 = bRam0000000100dcf142 + (bRam0000000100dcf142 & 0x23) * -2 + -0x5d;
    bRam0000000100dcf1a3 = bRam0000000100dcf143 ^ 0x89;
    bRam0000000100dcf1a4 = bRam0000000100dcf144 ^ 0x4a;
    bRam0000000100dcf1a5 = bRam0000000100dcf145 ^ 0x45;
    bRam0000000100dcf1a6 = bRam0000000100dcf146 ^ 0xaf;
    bRam0000000100dcf1a7 = bRam0000000100dcf147 ^ 0x7b;
    cRam0000000100dcf1a8 = bRam0000000100dcf148 + (bRam0000000100dcf148 & 3) * -2 + '\x03';
    bRam0000000100dcf1a9 = bRam0000000100dcf149 ^ 0xc5;
    bRam0000000100dcf1aa = bRam0000000100dcf14a ^ 0x19;
    bRam0000000100dcf1ab = bRam0000000100dcf14b ^ 0x6f;
    bRam0000000100dcf1ac = bRam0000000100dcf14c ^ 0x60;
    bRam0000000100dcf1ad = bRam0000000100dcf14d ^ 0x33;
    bRam0000000100dcf1ae = ~((bRam0000000100dcf14e | 0xcf) & (~bRam0000000100dcf14e | 0x30));
    uRam0000000100dcf1af =
         CONCAT17((byte)((ulong)uRam0000000100dcf14f >> 0x38) ^
                  (byte)((ulong)_UNK_1009802f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf14f >> 0x30) ^
                           (byte)((ulong)_UNK_1009802f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf14f >> 0x28) ^
                                    (byte)((ulong)_UNK_1009802f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf14f >> 0x20) ^
                                             (byte)((ulong)_UNK_1009802f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf14f >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009802f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf14f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009802f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf14f >> 8) ^
                                                  (byte)((ulong)_UNK_1009802f0 >> 8),
                                                  (byte)uRam0000000100dcf14f ^ (byte)_UNK_1009802f0)
                                                  ))))));
    bRam0000000100dcf1b7 = bRam0000000100dcf157 ^ 6;
    bRam0000000100dcf1b8 = bRam0000000100dcf158 ^ 0xab;
    bRam0000000100dcf1b9 = bRam0000000100dcf159 ^ 200;
    bRam0000000100dcf1ba = bRam0000000100dcf15a ^ 0x12;
    cRam0000000100dcf1bb = bRam0000000100dcf15b + (bRam0000000100dcf15b & 0xe1) * -2 + -0x1f;
    cRam0000000100dcf1bc = bRam0000000100dcf15c + (bRam0000000100dcf15c & 0x59) * -2 + 'Y';
    bRam0000000100dcf1bd = bRam0000000100dcf15d ^ 0xa0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf1be = bRam0000000100dcf15e ^ 0x51;
    uRam0000000100dcf1bf =
         CONCAT17((byte)((ulong)uRam0000000100dcf15f >> 0x38) ^
                  (byte)((ulong)_UNK_1009802f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf15f >> 0x30) ^
                           (byte)((ulong)_UNK_1009802f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf15f >> 0x28) ^
                                    (byte)((ulong)_UNK_1009802f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf15f >> 0x20) ^
                                             (byte)((ulong)_UNK_1009802f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf15f >> 0x18) ^
                                                      (byte)((ulong)_UNK_1009802f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf15f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_1009802f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf15f >> 8) ^
                                                  (byte)((ulong)_UNK_1009802f8 >> 8),
                                                  (byte)uRam0000000100dcf15f ^ (byte)_UNK_1009802f8)
                                                  ))))));
    bRam0000000100dcf1c7 = bRam0000000100dcf167 ^ 0xca;
    bRam0000000100dcf1c8 = bRam0000000100dcf168 ^ 0xb1;
    bRam0000000100dcf1c9 = bRam0000000100dcf169 ^ 0xf2;
    bRam0000000100dcf1ca = bRam0000000100dcf16a ^ 0xf5;
    cRam0000000100dcf1cb = bRam0000000100dcf16b + (bRam0000000100dcf16b & 0x70) * -2 + 'p';
    uRam0000000100dcf1cc =
         CONCAT17((byte)((ulong)uRam0000000100dcf16c >> 0x38) ^
                  (byte)((ulong)_UNK_100980308 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf16c >> 0x30) ^
                           (byte)((ulong)_UNK_100980308 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf16c >> 0x28) ^
                                    (byte)((ulong)_UNK_100980308 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf16c >> 0x20) ^
                                             (byte)((ulong)_UNK_100980308 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf16c >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980308 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf16c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980308 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf16c >> 8) ^
                                                  (byte)((ulong)_UNK_100980308 >> 8),
                                                  (byte)uRam0000000100dcf16c ^ (byte)_UNK_100980308)
                                                  ))))));
    bRam0000000100dcf1d4 = bRam0000000100dcf174 ^ 0xd7;
    bRam0000000100dcf1d5 = bRam0000000100dcf175 ^ 2;
    cRam0000000100dcf1d6 = bRam0000000100dcf176 + (bRam0000000100dcf176 & 0x6a) * -2 + 'j';
    bRam0000000100dcf1d7 = bRam0000000100dcf177 ^ 0x89;
    bRam0000000100dcf1d8 = bRam0000000100dcf178 ^ 10;
    bRam0000000100dcf1d9 = bRam0000000100dcf179 ^ 0x31;
    bRam0000000100dcf1da = bRam0000000100dcf17a ^ 0xf7;
    bRam0000000100dcf1db = bRam0000000100dcf17b ^ 0xd1;
    bRam0000000100dcf1dc = bRam0000000100dcf17c ^ 0x7f;
    bRam0000000100dcf1dd = bRam0000000100dcf17d ^ 0xe0;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf1de = bRam0000000100dcf17e ^ 0xc4;
    bRam0000000100dcf1df = bRam0000000100dcf17f ^ 0x56;
    bRam0000000100dcf1e0 = bRam0000000100dcf180 ^ 0x58;
    cRam0000000100dcf1e1 = bRam0000000100dcf181 + (bRam0000000100dcf181 & 0x2f) * -2 + -0x51;
    cRam0000000100dcf1e2 = bRam0000000100dcf182 + (bRam0000000100dcf182 & 0xc3) * -2 + -0x3d;
    cRam0000000100dcf1e3 = bRam0000000100dcf183 + (bRam0000000100dcf183 & 0x49) * -2 + 'I';
    uRam0000000100dcf1e4 =
         CONCAT17((byte)((ulong)uRam0000000100dcf184 >> 0x38) ^
                  (byte)((ulong)_UNK_100980310 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf184 >> 0x30) ^
                           (byte)((ulong)_UNK_100980310 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf184 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980310 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf184 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980310 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf184 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980310 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf184 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980310 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf184 >> 8) ^
                                                  (byte)((ulong)_UNK_100980310 >> 8),
                                                  (byte)uRam0000000100dcf184 ^ (byte)_UNK_100980310)
                                                  ))))));
    bRam0000000100dcf1ec = ~((bRam0000000100dcf18c | 0x45) & (bRam0000000100dcf18c ^ 0xff | 0xba));
    bRam0000000100dcf1ed = bRam0000000100dcf18d ^ 0xf0;
    bRam0000000100dcf1ee = bRam0000000100dcf18e ^ 0x9f;
    cRam0000000100dcf1f9 = bRam0000000100dcf1f3 + (bRam0000000100dcf1f3 & 0x69) * -2 + -0x17;
    bRam0000000100dcf1fa = bRam0000000100dcf1f4 ^ 0x77;
    cRam0000000100dcf1fb = bRam0000000100dcf1f5 + (bRam0000000100dcf1f5 & 0x18) * -2 + -0x68;
    bRam0000000100dcf1fc = bRam0000000100dcf1f6 ^ 0x48;
    bRam0000000100dcf1fd = bRam0000000100dcf1f7 ^ 0x8f;
    bRam0000000100dcf1fe = bRam0000000100dcf1f8 ^ 0x80;
    bRam0000000100dcf20f = ~((bRam0000000100dcf1ff | 0xa3) & (bRam0000000100dcf1ff ^ 0xff | 0x5c));
    bRam0000000100dcf210 = bRam0000000100dcf200 ^ 0x25;
    bRam0000000100dcf211 = bRam0000000100dcf201 ^ 0xd4;
    bRam0000000100dcf212 = bRam0000000100dcf202 ^ 0xbe;
    cRam0000000100dcf213 = bRam0000000100dcf203 + (bRam0000000100dcf203 & 0x21) * -2 + '!';
    uRam0000000100dcf214 =
         CONCAT17((byte)((ulong)uRam0000000100dcf204 >> 0x38) ^
                  (byte)((ulong)_UNK_100980318 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf204 >> 0x30) ^
                           (byte)((ulong)_UNK_100980318 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf204 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980318 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf204 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980318 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf204 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980318 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf204 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980318 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf204 >> 8) ^
                                                  (byte)((ulong)_UNK_100980318 >> 8),
                                                  (byte)uRam0000000100dcf204 ^ (byte)_UNK_100980318)
                                                  ))))));
    bRam0000000100dcf21c = bRam0000000100dcf20c ^ 0x99;
    bRam0000000100dcf21d = bRam0000000100dcf20d ^ 0xb5;
    bRam0000000100dcf21e = bRam0000000100dcf20e ^ 0x65;
    bRam0000000100dcf22c = bRam0000000100dcf21f ^ 0x9f;
    bRam0000000100dcf22d = bRam0000000100dcf220 ^ 0xfc;
    bRam0000000100dcf22e = bRam0000000100dcf221 ^ 0x51;
    bRam0000000100dcf22f = bRam0000000100dcf222 ^ 0x8c;
    bRam0000000100dcf230 = bRam0000000100dcf223 ^ 0x6e;
    bRam0000000100dcf231 = bRam0000000100dcf224 ^ 0xaf;
    bRam0000000100dcf232 = bRam0000000100dcf225 ^ 0xa6;
    cRam0000000100dcf233 = bRam0000000100dcf226 + (bRam0000000100dcf226 & 0x6b) * -2 + 'k';
    uRam0000000100dcf234 = uRam0000000100dcf227;
    bRam0000000100dcf235 = bRam0000000100dcf228 ^ 0x3e;
    bRam0000000100dcf236 = bRam0000000100dcf229 ^ 0x5f;
    bRam0000000100dcf237 = bRam0000000100dcf22a ^ 0xef;
    bRam0000000100dcf238 = bRam0000000100dcf22b ^ 0xb3;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e923d4 = 1;
  uVar1 = _objc_retain(param_3);
  auVar7 = _objc_retain(param_4);
  func_0x000100978820(param_1,auVar7._8_8_,uVar1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar8._0_8_;
  func_0x00010095c000(uRam0000000100c71690,auVar8._8_8_,uVar2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100961320(uVar3,auVar8._8_8_,1);
  func_0x00010096efc0(0x4024000000000000,uVar3);
  func_0x000100964c60(uVar3,extraout_x1,0x100dcf240);
  func_0x000100974200(uRam0000000100c71448,extraout_x1_00,0x100dcf260);
  auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010096fdc0(uVar3,auVar8._8_8_,0x100dcf280,0x100dcf2a0);
  func_0x000100386cd0(uVar3,extraout_x1_01,0x100dcf2c0,0x100dcf2e0);
  func_0x00010093f3a0(auVar8._0_8_,extraout_x1_02,4);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964c20(uVar3,auVar9._8_8_,auVar9._0_8_);
  _objc_release(auVar9._0_8_);
  func_0x000100386cd4(param_1);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093f340(auVar9._0_8_,auVar9._8_8_,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar9._0_8_);
  func_0x000100386cd8(uVar2);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar4,auVar9._8_8_,auVar9._0_8_);
  _objc_release(auVar9._0_8_);
  auVar9 = func_0x000100386cdc(uRam0000000100c71eb0);
  uVar5 = auVar9._0_8_;
  func_0x00010096b360(uVar5,auVar9._8_8_,uVar3);
  func_0x000100961ce0(uVar5,extraout_x1_03,auVar7._0_8_);
  func_0x000100386ce0(param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100975c40(uVar4);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386ce4(uVar6,auVar9._8_8_,uVar5,auVar9._0_8_);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar6);
  func_0x00010095c7c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(auVar7._0_8_);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager removeItemWithPath:completion:]
 * Entry: 0x100382c18; original ABI: v32@0:8@16@?24
 * Original instructions in modeled body: 162; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100382c3c */
/* WARNING: Switch with 1 destination removed at 0x000100382c50 */
/* WARNING: Switch with 1 destination removed at 0x000100382c64 */
/* WARNING: Switch with 1 destination removed at 0x000100382cd8 */

void Recovered_YYYWebDAVManager_m02649
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923d8 == 0) {
  case true:
    cRam0000000100dcf307 = bRam0000000100dcf300 + (bRam0000000100dcf300 & 0xb) * -2 + '\v';
    cRam0000000100dcf308 = bRam0000000100dcf301 + (bRam0000000100dcf301 & 0x34) * -2 + -0x4c;
    bRam0000000100dcf309 = bRam0000000100dcf302 ^ 0x2f;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf30a = bRam0000000100dcf303 ^ 0x78;
    bRam0000000100dcf30b = bRam0000000100dcf304 ^ 8;
    bRam0000000100dcf30c = bRam0000000100dcf305 ^ 0x8e;
    bRam0000000100dcf30d = bRam0000000100dcf306 ^ 0xde;
  }
  iRam0000000100e923d8 = 1;
  auVar6 = _objc_retain(param_4);
  func_0x000100386cec(param_1,auVar6._8_8_,param_3);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar7._0_8_;
  func_0x000100386cf0(uRam0000000100c71690,auVar7._8_8_,uVar1);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar7._0_8_;
  func_0x000100961320(uVar2,auVar7._8_8_,1);
  func_0x000100386cf4(0x4024000000000000,uVar2);
  func_0x000100386cf8(uVar2,extraout_x1,0x100dcf310);
  func_0x00010095ef80(param_1);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093f340(auVar7._0_8_,auVar7._8_8_,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar7._0_8_);
  func_0x000100386cfc(uVar1);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar3,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  auVar7 = func_0x000100386d00(uRam0000000100c71eb0);
  uVar4 = auVar7._0_8_;
  func_0x00010096b360(uVar4,auVar7._8_8_,uVar2);
  func_0x000100961ce0(uVar4,extraout_x1_00,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x00010093f1e0(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d04(uVar3);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968700(uVar5,auVar6._8_8_,uVar4,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar5);
  func_0x000100386d08(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager createDirectoryWithPath:completion:]
 * Entry: 0x100382ea4; original ABI: v32@0:8@16@?24
 * Original instructions in modeled body: 172; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100382ed4 */
/* WARNING: Switch with 1 destination removed at 0x000100382ee8 */
/* WARNING: Switch with 1 destination removed at 0x000100382ef4 */
/* WARNING: Switch with 1 destination removed at 0x000100382f38 */
/* WARNING: Switch with 1 destination removed at 0x000100382f98 */
/* WARNING: Switch with 1 destination removed at 0x000100383100 */
/* WARNING: Switch with 1 destination removed at 0x00010038310c */
/* WARNING: Switch with 1 destination removed at 0x000100383128 */
/* WARNING: Switch with 1 destination removed at 0x00010038316c */

void Recovered_YYYWebDAVManager_m02650
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923dc == 0) {
  case true:
    cRam0000000100dcf336 = bRam0000000100dcf330 + (bRam0000000100dcf330 & 0xf1) * -2 + 'q';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf337 = bRam0000000100dcf331 ^ 0x92;
    bRam0000000100dcf338 = bRam0000000100dcf332 ^ 0xae;
    bRam0000000100dcf339 = bRam0000000100dcf333 ^ 0xf1;
    bRam0000000100dcf33a = bRam0000000100dcf334 ^ 199;
    bRam0000000100dcf33b = bRam0000000100dcf335 ^ 0xe7;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e923dc = 1;
  uVar1 = _objc_retain(param_3);
  auVar7 = _objc_retain(param_4);
  func_0x000100978820(param_1,auVar7._8_8_,uVar1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar8._0_8_;
  func_0x00010095c000(uRam0000000100c71690,auVar8._8_8_,uVar2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar8._0_8_;
  func_0x000100961320(uVar3,auVar8._8_8_,1);
  func_0x00010096efc0(0x4024000000000000,uVar3);
  func_0x000100964c60(uVar3,extraout_x1,0x100dcf340);
  func_0x00010095ef80(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093f340(auVar8._0_8_,auVar8._8_8_,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  func_0x000100936080(uVar2);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar4,auVar8._8_8_,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  auVar8 = func_0x000100386d0c(uRam0000000100c71eb0);
  uVar5 = auVar8._0_8_;
  func_0x00010096b360(uVar5,auVar8._8_8_,uVar3);
  func_0x000100386d10(uVar5,extraout_x1_00,auVar7._0_8_);
  func_0x00010093f1e0(param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d14(uVar4);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d18(uVar6,auVar8._8_8_,uVar5,auVar8._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar6);
  func_0x00010095c7c0(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager copyItemWithPath:toPath:completion:]
 * Entry: 0x100383170; original ABI: v40@0:8@16@24@?32
 * Original instructions in modeled body: 253; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003831b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003831c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003831d0 */
/* WARNING: Switch with 1 destination removed at 0x00010038321c */
/* WARNING: Switch with 1 destination removed at 0x000100383270 */
/* WARNING: Switch with 1 destination removed at 0x000100383298 */
/* WARNING: Switch with 1 destination removed at 0x0001003832a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003832e4 */
/* WARNING: Switch with 1 destination removed at 0x000100383348 */
/* WARNING: Switch with 1 destination removed at 0x0001003836a8 */
/* WARNING: Switch with 1 destination removed at 0x000100383758 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVManager_m02651
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
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
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923e0 == 0) {
  case true:
    cRam0000000100dcf365 = bRam0000000100dcf360 + (bRam0000000100dcf360 & 0x1b) * -2 + -0x65;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf366 = bRam0000000100dcf361 ^ 0x45;
    bRam0000000100dcf367 = bRam0000000100dcf362 ^ 1;
    bRam0000000100dcf368 = bRam0000000100dcf363 ^ 0xed;
    bRam0000000100dcf369 = bRam0000000100dcf364 ^ 0x5b;
    cRam0000000100dcf376 = bRam0000000100dcf36a + (bRam0000000100dcf36a & 0x70) * -2 + 'p';
    uRam0000000100dcf377 = uRam0000000100dcf36b;
    uRam0000000100dcf378 =
         CONCAT17((byte)((ulong)uRam0000000100dcf36c >> 0x38) ^
                  (byte)((ulong)_UNK_100980320 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf36c >> 0x30) ^
                           (byte)((ulong)_UNK_100980320 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf36c >> 0x28) ^
                                    (byte)((ulong)_UNK_100980320 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf36c >> 0x20) ^
                                             (byte)((ulong)_UNK_100980320 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf36c >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980320 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf36c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980320 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf36c >> 8) ^
                                                  (byte)((ulong)_UNK_100980320 >> 8),
                                                  (byte)uRam0000000100dcf36c ^ (byte)_UNK_100980320)
                                                  ))))));
    bRam0000000100dcf380 = bRam0000000100dcf374 ^ 0x6b;
    bRam0000000100dcf381 = bRam0000000100dcf375 ^ 0x6b;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e923e0 = 1;
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  auVar9 = _objc_retain(param_5);
  func_0x000100386d1c(param_1,auVar9._8_8_,uVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d20(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d24(auVar10._0_8_,auVar10._8_8_,uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar10._0_8_);
  func_0x00010095c000(uRam0000000100c71690,extraout_x1,uVar3);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar10._0_8_;
  func_0x000100961320(uVar5,auVar10._8_8_,1);
  func_0x00010096efc0(0x4024000000000000,uVar5);
  func_0x000100964c60(uVar5,extraout_x1_00,0x100dcf390);
  func_0x000100386d28(uVar4);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fdc0(uVar5,auVar10._8_8_,auVar10._0_8_,0x100dcf3b0);
  _objc_release(auVar10._0_8_);
  func_0x00010095ef80(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093f340(auVar10._0_8_,auVar10._8_8_,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  func_0x000100936080(uVar3);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar6,auVar10._8_8_,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  auVar10 = func_0x000100951360(uRam0000000100c71eb0);
  uVar7 = auVar10._0_8_;
  func_0x00010096b360(uVar7,auVar10._8_8_,uVar5);
  func_0x000100961ce0(uVar7,extraout_x1_01,auVar9._0_8_);
  func_0x00010093f1e0(param_1);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100975c40(uVar6);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968700(uVar8,auVar10._8_8_,uVar7,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  _objc_release(uVar8);
  func_0x00010095c7c0(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager moveItemWithPath:toPath:completion:]
 * Entry: 0x10038375c; original ABI: v40@0:8@16@24@?32
 * Original instructions in modeled body: 252; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003837a0 */
/* WARNING: Switch with 1 destination removed at 0x0001003837ac */
/* WARNING: Switch with 1 destination removed at 0x0001003837c8 */
/* WARNING: Switch with 1 destination removed at 0x00010038380c */
/* WARNING: Switch with 1 destination removed at 0x000100383820 */
/* WARNING: Switch with 1 destination removed at 0x000100383864 */
/* WARNING: Switch with 1 destination removed at 0x000100383870 */
/* WARNING: Switch with 1 destination removed at 0x0001003838b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003838c0 */
/* WARNING: Switch with 1 destination removed at 0x000100383a34 */
/* WARNING: Switch with 1 destination removed at 0x000100383da0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVManager_m02652
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
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
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923e4 == 0) {
  case true:
    cRam0000000100dcf3d5 = bRam0000000100dcf3d0 + (bRam0000000100dcf3d0 & 100) * -2 + 'd';
    bRam0000000100dcf3d6 = bRam0000000100dcf3d1 ^ 0x6f;
    cRam0000000100dcf3d7 = bRam0000000100dcf3d2 + (bRam0000000100dcf3d2 & 0x60) * -2 + '`';
    bRam0000000100dcf3d8 = bRam0000000100dcf3d3 ^ 0x42;
    bRam0000000100dcf3d9 = bRam0000000100dcf3d4 ^ 0xdb;
    cRam0000000100dcf3e6 = bRam0000000100dcf3da + (bRam0000000100dcf3da & 0xf7) * -2 + 'w';
    cRam0000000100dcf3e7 = bRam0000000100dcf3db + (bRam0000000100dcf3db & 0xdd) * -2 + -0x23;
    bRam0000000100dcf3e8 = bRam0000000100dcf3dc ^ 0x9c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf3e9 = bRam0000000100dcf3dd ^ 0x6e;
    uRam0000000100dcf3ea =
         CONCAT17((byte)((ulong)uRam0000000100dcf3de >> 0x38) ^
                  (byte)((ulong)_UNK_100980328 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf3de >> 0x30) ^
                           (byte)((ulong)_UNK_100980328 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf3de >> 0x28) ^
                                    (byte)((ulong)_UNK_100980328 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf3de >> 0x20) ^
                                             (byte)((ulong)_UNK_100980328 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf3de >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980328 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf3de >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980328 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf3de >> 8) ^
                                                  (byte)((ulong)_UNK_100980328 >> 8),
                                                  (byte)uRam0000000100dcf3de ^ (byte)_UNK_100980328)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e923e4 = 1;
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  auVar9 = _objc_retain(param_5);
  func_0x000100978820(param_1,auVar9._8_8_,uVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100939e60(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100935020(auVar10._0_8_,auVar10._8_8_,uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  func_0x00010095c000(uRam0000000100c71690,extraout_x1,uVar3);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar10._0_8_;
  func_0x000100961320(uVar5,auVar10._8_8_,1);
  func_0x00010096efc0(0x4024000000000000,uVar5);
  func_0x000100964c60(uVar5,extraout_x1_00,0x100dcf400);
  func_0x000100936080(uVar4);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fdc0(uVar5,auVar10._8_8_,auVar10._0_8_,0x100dcf420);
  _objc_release(auVar10._0_8_);
  func_0x00010095ef80(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093f340(auVar10._0_8_,auVar10._8_8_,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  func_0x000100936080(uVar3);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar6,auVar10._8_8_,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  auVar10 = func_0x000100386d3c(uRam0000000100c71eb0);
  uVar7 = auVar10._0_8_;
  func_0x00010096b360(uVar7,auVar10._8_8_,uVar5);
  func_0x000100961ce0(uVar7,extraout_x1_01,auVar9._0_8_);
  func_0x00010093f1e0(param_1);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d40(uVar6);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968700(uVar8,auVar10._8_8_,uVar7,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  _objc_release(uVar8);
  func_0x000100386d44(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager uploadFileWithPath:fileUrl:progressBlock:completion:]
 * Entry: 0x100383da4; original ABI: v48@0:8@16@24@?32@?40
 * Original instructions in modeled body: 614; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100383dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100383df0 */
/* WARNING: Switch with 1 destination removed at 0x000100383dfc */
/* WARNING: Switch with 1 destination removed at 0x000100383fcc */
/* WARNING: Switch with 1 destination removed at 0x000100383fe8 */
/* WARNING: Switch with 1 destination removed at 0x000100383ffc */
/* WARNING: Switch with 1 destination removed at 0x00010038400c */
/* WARNING: Switch with 1 destination removed at 0x00010038401c */
/* WARNING: Switch with 1 destination removed at 0x000100384048 */
/* WARNING: Switch with 1 destination removed at 0x00010038406c */
/* WARNING: Switch with 1 destination removed at 0x00010038407c */
/* WARNING: Switch with 1 destination removed at 0x00010038409c */
/* WARNING: Switch with 1 destination removed at 0x0001003840e8 */
/* WARNING: Switch with 1 destination removed at 0x000100384104 */
/* WARNING: Switch with 1 destination removed at 0x000100384140 */
/* WARNING: Switch with 1 destination removed at 0x000100384700 */
/* WARNING: Switch with 1 destination removed at 0x00010038484c */
/* WARNING: Switch with 1 destination removed at 0x000100384a6c */
/* WARNING: Switch with 1 destination removed at 0x000100384c4c */
/* WARNING: Switch with 1 destination removed at 0x000100384c78 */
/* WARNING: Switch with 1 destination removed at 0x000100384ccc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVManager_m02653
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923e8 == 0) {
  case true:
    bRam0000000100dcf44d = bRam0000000100dcf440 ^ 0x58;
    bRam0000000100dcf44e = bRam0000000100dcf441 ^ 0x45;
    bRam0000000100dcf44f = bRam0000000100dcf442 ^ 0x82;
    bRam0000000100dcf450 = bRam0000000100dcf443 ^ 0x3e;
    bRam0000000100dcf451 = bRam0000000100dcf444 ^ 0x16;
    cRam0000000100dcf452 = bRam0000000100dcf445 + (bRam0000000100dcf445 & 0xf1) * -2 + 'q';
    bRam0000000100dcf453 = bRam0000000100dcf446 ^ 0x3a;
    bRam0000000100dcf454 = bRam0000000100dcf447 ^ 0x9b;
    bRam0000000100dcf455 = bRam0000000100dcf448 ^ 0xd0;
    bRam0000000100dcf456 = bRam0000000100dcf449 ^ 0xe9;
    bRam0000000100dcf457 = bRam0000000100dcf44a ^ 0x43;
    bRam0000000100dcf458 = bRam0000000100dcf44b ^ 0xf4;
    bRam0000000100dcf459 = bRam0000000100dcf44c ^ 0x90;
    bRam0000000100dcf480 = bRam0000000100dcf460 ^ 0x7c;
    bRam0000000100dcf481 = bRam0000000100dcf461 ^ 0x6b;
    bRam0000000100dcf482 = bRam0000000100dcf462 ^ 200;
    bRam0000000100dcf483 = bRam0000000100dcf463 ^ 0xf5;
    bRam0000000100dcf484 = bRam0000000100dcf464 ^ 2;
    bRam0000000100dcf485 = bRam0000000100dcf465 ^ 0x26;
    bRam0000000100dcf486 = bRam0000000100dcf466 ^ 0x20;
    bRam0000000100dcf487 = ~((bRam0000000100dcf467 | 0xba) & (bRam0000000100dcf467 ^ 0xff | 0x45));
    bRam0000000100dcf488 = bRam0000000100dcf468 ^ 0xf3;
    cRam0000000100dcf489 = bRam0000000100dcf469 + (bRam0000000100dcf469 & 0x3e) * -2 + '>';
    bRam0000000100dcf48a = bRam0000000100dcf46a ^ 9;
    bRam0000000100dcf48b = bRam0000000100dcf46b ^ 0x9c;
    bRam0000000100dcf48c = bRam0000000100dcf46c ^ 0x4a;
    cRam0000000100dcf48d = bRam0000000100dcf46d + (bRam0000000100dcf46d & 0x66) * -2 + -0x1a;
    bRam0000000100dcf48e = bRam0000000100dcf46e ^ 0x4e;
    bRam0000000100dcf48f = bRam0000000100dcf46f ^ 0x11;
    bRam0000000100dcf490 = bRam0000000100dcf470 ^ 0x26;
    bRam0000000100dcf491 = bRam0000000100dcf471 ^ 199;
    cRam0000000100dcf4c0 = bRam0000000100dcf4a0 + (bRam0000000100dcf4a0 & 0x5a) * -2 + 'Z';
    cRam0000000100dcf4c1 = bRam0000000100dcf4a1 + (bRam0000000100dcf4a1 & 0x3e) * -2 + '>';
    uRam0000000100dcf4c2 =
         CONCAT17((byte)((ulong)uRam0000000100dcf4a2 >> 0x38) ^
                  (byte)((ulong)_UNK_100980330 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf4a2 >> 0x30) ^
                           (byte)((ulong)_UNK_100980330 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf4a2 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980330 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf4a2 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980330 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf4a2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980330 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf4a2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980330 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf4a2 >> 8) ^
                                                  (byte)((ulong)_UNK_100980330 >> 8),
                                                  (byte)uRam0000000100dcf4a2 ^ (byte)_UNK_100980330)
                                                  ))))));
    bRam0000000100dcf4ca = bRam0000000100dcf4aa ^ 0x1c;
    cRam0000000100dcf4cb = bRam0000000100dcf4ab + (bRam0000000100dcf4ab & 0xbb) * -2 + -0x45;
    bRam0000000100dcf4cc = bRam0000000100dcf4ac ^ 100;
    bRam0000000100dcf4cd = ~((bRam0000000100dcf4ad | 0xfb) & (~bRam0000000100dcf4ad | 4));
    bRam0000000100dcf4ce = bRam0000000100dcf4ae ^ 0x40;
    bRam0000000100dcf4cf = bRam0000000100dcf4af ^ 0x88;
    bRam0000000100dcf4d0 = bRam0000000100dcf4b0 ^ 0xe8;
    bRam0000000100dcf4d1 = bRam0000000100dcf4b1 ^ 0x99;
    bRam0000000100dcf4d2 = bRam0000000100dcf4b2 ^ 0x28;
    bRam0000000100dcf4d3 = bRam0000000100dcf4b3 ^ 0xf;
    cRam0000000100dcf4d4 = bRam0000000100dcf4b4 + (bRam0000000100dcf4b4 & 0x55) * -2 + 'U';
    bRam0000000100dcf4d5 = bRam0000000100dcf4b5 ^ 0xcf;
    cRam0000000100dcf4d6 = bRam0000000100dcf4b6 + (bRam0000000100dcf4b6 & 0x62) * -2 + -0x1e;
    bRam0000000100dcf4d7 = bRam0000000100dcf4b7 ^ 0x2c;
    bRam0000000100dcf4d8 = bRam0000000100dcf4b8 ^ 0x31;
    bRam0000000100dcf4dd = bRam0000000100dcf4d9 ^ 0x84;
    bRam0000000100dcf4de = bRam0000000100dcf4da ^ 0x6f;
    cRam0000000100dcf4df = bRam0000000100dcf4db + (bRam0000000100dcf4db & 0x3e) * -2 + -0x42;
    bRam0000000100dcf4e0 = bRam0000000100dcf4dc ^ 0x65;
    bRam0000000100dcf4e5 = bRam0000000100dcf4e1 ^ 0xe;
    cRam0000000100dcf4e6 = bRam0000000100dcf4e2 + (bRam0000000100dcf4e2 & 0x38) * -2 + '8';
    cRam0000000100dcf4e7 = bRam0000000100dcf4e3 + (bRam0000000100dcf4e3 & 0x1a) * -2 + -0x66;
    bRam0000000100dcf4e8 = bRam0000000100dcf4e4 ^ 0x42;
    bRam0000000100dcf4f8 = bRam0000000100dcf4e9 ^ 0xba;
    cRam0000000100dcf4f9 = bRam0000000100dcf4ea + (bRam0000000100dcf4ea & 0x4b) * -2 + -0x35;
    cRam0000000100dcf4fa = bRam0000000100dcf4eb + (bRam0000000100dcf4eb & 0x1f) * -2 + '\x1f';
    bRam0000000100dcf4fb = bRam0000000100dcf4ec ^ 0x6a;
    bRam0000000100dcf4fc = bRam0000000100dcf4ed ^ 0xb0;
    bRam0000000100dcf4fd = bRam0000000100dcf4ee ^ 0x5b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf4fe = bRam0000000100dcf4ef ^ 0x55;
    bRam0000000100dcf4ff = bRam0000000100dcf4f0 ^ 0xb6;
    bRam0000000100dcf500 = bRam0000000100dcf4f1 ^ 0x20;
    bRam0000000100dcf501 = bRam0000000100dcf4f2 ^ 0x2a;
    cRam0000000100dcf502 = bRam0000000100dcf4f3 + (bRam0000000100dcf4f3 & 0x6c) * -2 + 'l';
    cRam0000000100dcf503 = bRam0000000100dcf4f4 + (bRam0000000100dcf4f4 & 0xd) * -2 + '\r';
    cRam0000000100dcf504 = bRam0000000100dcf4f5 + (bRam0000000100dcf4f5 & 0x7e) * -2 + -2;
    bRam0000000100dcf505 = bRam0000000100dcf4f6 ^ 0x5a;
    cRam0000000100dcf506 = bRam0000000100dcf4f7 + (bRam0000000100dcf4f7 & 0xe1) * -2 + 'a';
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e923e8 = 1;
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  lVar3 = _objc_retain(param_5);
  auVar9 = _objc_retain(param_6);
  func_0x000100386d64(param_1,auVar9._8_8_,uVar1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar4 = auVar10._0_8_;
  func_0x00010095c000(uRam0000000100c71690,auVar10._8_8_,uVar4);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar10._0_8_;
  func_0x000100386d68(uVar5,auVar10._8_8_,1);
  func_0x000100386d6c(uVar5,extraout_x1,0x100dcf550);
  func_0x00010096fdc0(uVar5,extraout_x1_00,0x100dcf570,0x100dcf510);
  uVar7 = uRam0000000100c71448;
  func_0x000100952d80(uVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d70();
  func_0x000100974200(uVar7,extraout_x1_01,0x100dcf590);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fdc0(uVar5,auVar10._8_8_,auVar10._0_8_,0x100dcf5b0);
  _objc_release(auVar10._0_8_);
  _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
  func_0x00010094a420(uRam0000000100c71eb8,extraout_x1_02,uVar2);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964c40(uVar5,auVar10._8_8_,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  func_0x00010095ef80(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386d74(auVar10._0_8_,auVar10._8_8_,uVar5);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  func_0x000100386d78(uVar4);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096e940(uVar7,auVar10._8_8_,auVar10._0_8_);
  _objc_release(auVar10._0_8_);
  auVar10 = func_0x000100951360(uRam0000000100c71eb0);
  uVar6 = auVar10._0_8_;
  func_0x000100386d7c(uVar6,auVar10._8_8_,uVar5);
  func_0x000100961ce0(uVar6,extraout_x1_03,auVar9._0_8_);
  func_0x0001009695c0(uVar6,extraout_x1_04,lVar3);
  func_0x00010093f1e0(param_1);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100975c40(uVar7);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  func_0x000100968700(uVar8,auVar10._8_8_,uVar6,auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar10._0_8_);
  _objc_release(uVar8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x000100954a20(uVar7);
    auVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100386d80(auVar10._0_8_,auVar10._8_8_,uVar6,0x100dcf530,1,0);
    _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar3 + 0x10))(0,lVar3);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  func_0x00010095c7c0(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar4);
  _objc_release(auVar9._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager URLSession:didReceiveChallenge:completionHandler:]
 * Entry: 0x100384cd0; original ABI: v40@0:8@16@24@?32
 * Original instructions in modeled body: 169; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100384d00 */
/* WARNING: Switch with 1 destination removed at 0x000100384d0c */
/* WARNING: Switch with 1 destination removed at 0x000100384d50 */
/* WARNING: Switch with 1 destination removed at 0x000100384d60 */
/* WARNING: Switch with 1 destination removed at 0x000100384d90 */
/* WARNING: Switch with 1 destination removed at 0x000100384dd0 */
/* WARNING: Switch with 1 destination removed at 0x000100384ddc */
/* WARNING: Switch with 1 destination removed at 0x000100384de8 */
/* WARNING: Switch with 1 destination removed at 0x000100384e00 */
/* WARNING: Switch with 1 destination removed at 0x000100384e1c */
/* WARNING: Switch with 1 destination removed at 0x000100384e28 */
/* WARNING: Switch with 1 destination removed at 0x000100384e44 */
/* WARNING: Switch with 1 destination removed at 0x000100384e50 */
/* WARNING: Switch with 1 destination removed at 0x000100384e5c */
/* WARNING: Switch with 1 destination removed at 0x000100384e68 */
/* WARNING: Switch with 1 destination removed at 0x000100384e84 */
/* WARNING: Switch with 1 destination removed at 0x000100384e90 */
/* WARNING: Switch with 1 destination removed at 0x000100384eac */
/* WARNING: Switch with 1 destination removed at 0x000100384eb8 */
/* WARNING: Switch with 1 destination removed at 0x000100384efc */
/* WARNING: Switch with 1 destination removed at 0x000100384f08 */
/* WARNING: Switch with 1 destination removed at 0x000100384f50 */
/* WARNING: Switch with 1 destination removed at 0x000100384f6c */
/* WARNING: Switch with 1 destination removed at 0x000100384fb0 */
/* WARNING: Switch with 1 destination removed at 0x000100384fdc */

void Recovered_YYYWebDAVManager_m02654
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  long lVar7;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  lVar4 = _objc_retain(param_5);
  func_0x000100386d94(param_1);
  lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar7 = 0;
  bVar1 = false;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100952d20(param_1);
    param_4 = _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    lVar7 = 1;
                    /* WARNING: Switch is manually overridden */
    switch(param_4 != 0) {
    case true:
      lVar7 = func_0x000100954520(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      bVar1 = lVar7 == 0;
      lVar7 = 1;
                    /* WARNING: Switch is manually overridden */
    }
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar7 * 8 + 0x100dcfdf0)) {
  case 0x100384e14:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(bVar1) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar4 + 0x10))(lVar4,2,0);
    break;
  case true:
    func_0x00010093e9c0(uRam0000000100c71798,extraout_x1,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,uVar5);
    _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager URLSession:task:didReceiveChallenge:completionHandler:]
 * Entry: 0x100384fe0; original ABI: v48@0:8@16@24@32@?40
 * Original instructions in modeled body: 185; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100385014 */
/* WARNING: Switch with 1 destination removed at 0x00010038502c */
/* WARNING: Switch with 1 destination removed at 0x000100385094 */
/* WARNING: Switch with 1 destination removed at 0x0001003850c4 */
/* WARNING: Switch with 1 destination removed at 0x0001003850d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003850dc */
/* WARNING: Switch with 1 destination removed at 0x000100385108 */
/* WARNING: Switch with 1 destination removed at 0x000100385114 */
/* WARNING: Switch with 1 destination removed at 0x000100385130 */
/* WARNING: Switch with 1 destination removed at 0x00010038513c */
/* WARNING: Switch with 1 destination removed at 0x00010038516c */
/* WARNING: Switch with 1 destination removed at 0x000100385178 */
/* WARNING: Switch with 1 destination removed at 0x000100385194 */
/* WARNING: Switch with 1 destination removed at 0x0001003851b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003851bc */
/* WARNING: Switch with 1 destination removed at 0x0001003851cc */
/* WARNING: Switch with 1 destination removed at 0x00010038520c */
/* WARNING: Switch with 1 destination removed at 0x000100385218 */
/* WARNING: Switch with 1 destination removed at 0x000100385224 */
/* WARNING: Switch with 1 destination removed at 0x000100385268 */
/* WARNING: Switch with 1 destination removed at 0x000100385274 */
/* WARNING: Switch with 1 destination removed at 0x000100385280 */
/* WARNING: Switch with 1 destination removed at 0x00010038528c */
/* WARNING: Switch with 1 destination removed at 0x0001003852c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003852d4 */
/* WARNING: Switch with 1 destination removed at 0x000100385320 */
/* WARNING: Switch with 1 destination removed at 0x000100385354 */
/* WARNING: Switch with 1 destination removed at 0x000100385370 */

void Recovered_YYYWebDAVManager_m02655
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  long lVar7;
  ulong uVar8;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_retain(param_5);
  lVar4 = _objc_retain(param_6);
  func_0x000100386d9c(param_1);
  lVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  lVar7 = 0;
  uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar5 != 0) {
  case true:
    func_0x000100386da0(param_1);
    param_6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar8 = 0;
    lVar7 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(param_6 != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      lVar7 = func_0x000100954520(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar8 = (ulong)(lVar7 == 0);
      lVar7 = 1;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar7 * 8 + 0x100dcffc0)) {
  case 0x10038515c:
    _objc_release(param_6);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(uVar8 * 8 + 0x100dd0000)) {
  case 0x1003851a8:
    (**(code **)(lVar4 + 0x10))(lVar4,2,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case 0x1003851c0:
                    /* WARNING: Switch is manually overridden */
    func_0x00010093e9c0(uRam0000000100c71798,extraout_x1,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18),1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar4 + 0x10))(lVar4,0,uVar6);
    _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager URLSession:dataTask:didReceiveResponse:completionHandler:]
 * Entry: 0x100385374; original ABI: v48@0:8@16@24@32@?40
 * Original instructions in modeled body: 116; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003853a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003853ec */
/* WARNING: Switch with 1 destination removed at 0x0001003853fc */
/* WARNING: Switch with 1 destination removed at 0x00010038543c */
/* WARNING: Switch with 1 destination removed at 0x0001003854a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003854c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003854d4 */
/* WARNING: Switch with 1 destination removed at 0x0001003854f8 */
/* WARNING: Switch with 1 destination removed at 0x000100385514 */
/* WARNING: Switch with 1 destination removed at 0x000100385584 */
/* WARNING: Switch with 1 destination removed at 0x0001003855a8 */

void Recovered_YYYWebDAVManager_m02656
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_retain(param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar4 = _objc_retain(param_6);
  func_0x00010093f1e0(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100975c40(uVar2);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100951cc0(uVar5,auVar7._8_8_,auVar7._0_8_);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar7._0_8_);
  _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case false:
    (**(code **)(lVar4 + 0x10))(lVar4,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    func_0x00010093f1c0(uRam0000000100c71778);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096b4e0(lVar6,auVar7._8_8_,auVar7._0_8_);
    _objc_release(auVar7._0_8_);
    (**(code **)(lVar4 + 0x10))(lVar4,1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager URLSession:dataTask:didReceiveData:]
 * Entry: 0x1003855ac; original ABI: v40@0:8@16@24@32
 * Original instructions in modeled body: 72; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038565c */
/* WARNING: Switch with 1 destination removed at 0x0001003856c0 */
/* WARNING: Switch with 1 destination removed at 0x0001003856cc */
/* WARNING: Switch with 1 destination removed at 0x0001003856fc */

void Recovered_YYYWebDAVManager_m02657
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_retain(param_5);
  func_0x00010093f1e0(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100386da8(uVar2);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  func_0x000100951cc0(uVar4,auVar6._8_8_,auVar6._0_8_);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  _objc_release(uVar4);
  func_0x00010095c560(uVar5);
  auVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100938b20(auVar6._0_8_,auVar6._8_8_,uVar3);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager URLSession:task:didCompleteWithError:]
 * Entry: 0x100385700; original ABI: v40@0:8@16@24@32
 * Original instructions in modeled body: 807; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100385754 */
/* WARNING: Switch with 1 destination removed at 0x000100385760 */
/* WARNING: Switch with 1 destination removed at 0x00010038577c */
/* WARNING: Switch with 1 destination removed at 0x000100385788 */
/* WARNING: Switch with 1 destination removed at 0x000100385a00 */
/* WARNING: Switch with 1 destination removed at 0x000100385a20 */
/* WARNING: Switch with 1 destination removed at 0x000100385a30 */
/* WARNING: Switch with 1 destination removed at 0x000100385a40 */
/* WARNING: Switch with 1 destination removed at 0x000100385a60 */
/* WARNING: Switch with 1 destination removed at 0x000100385ab0 */
/* WARNING: Switch with 1 destination removed at 0x000100385b38 */
/* WARNING: Switch with 1 destination removed at 0x000100385b64 */
/* WARNING: Switch with 1 destination removed at 0x000100385b94 */
/* WARNING: Switch with 1 destination removed at 0x000100385ba0 */
/* WARNING: Switch with 1 destination removed at 0x000100385c18 */
/* WARNING: Switch with 1 destination removed at 0x000100385c44 */
/* WARNING: Switch with 1 destination removed at 0x000100385c6c */
/* WARNING: Switch with 1 destination removed at 0x000100385c88 */
/* WARNING: Switch with 1 destination removed at 0x000100385c94 */
/* WARNING: Switch with 1 destination removed at 0x000100385cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100385cc4 */
/* WARNING: Switch with 1 destination removed at 0x000100385cd0 */
/* WARNING: Switch with 1 destination removed at 0x000100385d00 */
/* WARNING: Switch with 1 destination removed at 0x000100385d18 */
/* WARNING: Switch with 1 destination removed at 0x000100385dac */
/* WARNING: Switch with 1 destination removed at 0x000100385dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100385de4 */
/* WARNING: Switch with 1 destination removed at 0x000100385df0 */
/* WARNING: Switch with 1 destination removed at 0x000100386120 */
/* WARNING: Switch with 1 destination removed at 0x00010038612c */
/* WARNING: Switch with 1 destination removed at 0x000100386178 */
/* WARNING: Switch with 1 destination removed at 0x000100386564 */
/* WARNING: Switch with 1 destination removed at 0x000100386628 */
/* WARNING: Switch with 1 destination removed at 0x000100386654 */
/* WARNING: Switch with 1 destination removed at 0x000100386670 */
/* WARNING: Switch with 1 destination removed at 0x00010038674c */
/* WARNING: Switch with 1 destination removed at 0x000100386788 */
/* WARNING: Switch with 1 destination removed at 0x0001003867d8 */
/* WARNING: Switch with 1 destination removed at 0x000100386804 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVManager_m02658
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *extraout_x8;
  undefined4 *puVar8;
  uint uVar9;
  uint extraout_w9;
  byte *extraout_x10;
  byte *pbVar10;
  byte *extraout_x11;
  byte *pbVar11;
  byte *extraout_x12;
  byte *pbVar12;
  byte *extraout_x13;
  byte *pbVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  plVar2 = &lStack_80;
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar8 = (undefined4 *)0x100e923ec;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  plVar1 = &lStack_80;
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923ec == 0) {
  case true:
    bRam0000000100dcf5d9 = bRam0000000100dcf5d0 ^ 0xe3;
    bRam0000000100dcf5da = bRam0000000100dcf5d1 ^ 0xd5;
    bRam0000000100dcf5db = bRam0000000100dcf5d2 ^ 0x10;
    bRam0000000100dcf5dc = bRam0000000100dcf5d3 ^ 0x19;
    bRam0000000100dcf5dd = bRam0000000100dcf5d4 ^ 0xf5;
    bRam0000000100dcf5de = bRam0000000100dcf5d5 ^ 0x54;
    cRam0000000100dcf5df = bRam0000000100dcf5d6 + (bRam0000000100dcf5d6 & 0x62) * -2 + 'b';
    bRam0000000100dcf5e0 = bRam0000000100dcf5d7 ^ 0xf4;
    bRam0000000100dcf5e1 = bRam0000000100dcf5d8 ^ 0x7b;
    bRam0000000100dcf610 = bRam0000000100dcf5f0 ^ 0x74;
    bRam0000000100dcf611 = ~((bRam0000000100dcf5f1 | 0x7f) & (~bRam0000000100dcf5f1 | 0x80));
    bRam0000000100dcf612 = bRam0000000100dcf5f2 ^ 5;
    bRam0000000100dcf613 = bRam0000000100dcf5f3 ^ 3;
    bRam0000000100dcf614 = bRam0000000100dcf5f4 ^ 0x52;
    bRam0000000100dcf615 = bRam0000000100dcf5f5 ^ 0xdd;
    cRam0000000100dcf616 = bRam0000000100dcf5f6 + (bRam0000000100dcf5f6 & 0x55) * -2 + -0x2b;
    uRam0000000100dcf617 =
         CONCAT17((byte)((ulong)uRam0000000100dcf5f7 >> 0x38) ^
                  (byte)((ulong)_UNK_100980348 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf5f7 >> 0x30) ^
                           (byte)((ulong)_UNK_100980348 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf5f7 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980348 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf5f7 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980348 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf5f7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980348 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf5f7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980348 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf5f7 >> 8) ^
                                                  (byte)((ulong)_UNK_100980348 >> 8),
                                                  (byte)uRam0000000100dcf5f7 ^ (byte)_UNK_100980348)
                                                  ))))));
    bRam0000000100dcf61f = bRam0000000100dcf5ff ^ 0x8d;
    bRam0000000100dcf620 = bRam0000000100dcf600 ^ 0x73;
    cRam0000000100dcf621 = bRam0000000100dcf601 + (bRam0000000100dcf601 & 0x14) * -2 + -0x6c;
    bRam0000000100dcf650 = bRam0000000100dcf630 ^ 7;
    cRam0000000100dcf651 = bRam0000000100dcf631 + (bRam0000000100dcf631 & 0x5a) * -2 + -0x26;
    uRam0000000100dcf652 =
         CONCAT17((byte)((ulong)uRam0000000100dcf632 >> 0x38) ^
                  (byte)((ulong)_UNK_100980350 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dcf632 >> 0x30) ^
                           (byte)((ulong)_UNK_100980350 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dcf632 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980350 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dcf632 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980350 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dcf632 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980350 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dcf632 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980350 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dcf632 >> 8) ^
                                                  (byte)((ulong)_UNK_100980350 >> 8),
                                                  (byte)uRam0000000100dcf632 ^ (byte)_UNK_100980350)
                                                  ))))));
    bRam0000000100dcf65a = bRam0000000100dcf63a ^ 0xfa;
    bRam0000000100dcf65b = bRam0000000100dcf63b ^ 0x75;
    bRam0000000100dcf65c = bRam0000000100dcf63c ^ 0x85;
    bRam0000000100dcf65d = bRam0000000100dcf63d ^ 0x91;
    cRam0000000100dcf65e = bRam0000000100dcf63e + (bRam0000000100dcf63e & 0xc3) * -2 + 'C';
    cRam0000000100dcf65f = bRam0000000100dcf63f + (bRam0000000100dcf63f & 0x18) * -2 + '\x18';
    uVar9 = (uint)bRam0000000100dcf640;
    pbVar10 = (byte *)0x100dcf660;
    pbVar11 = (byte *)0x100dcf641;
    pbVar12 = (byte *)0x100dcf670;
    pbVar13 = (byte *)0x100dcf690;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_100385a00_case_0;
  }
  do {
                    /* WARNING: Switch is manually overridden */
    *puVar8 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar14 = _objc_retain(param_3);
    uVar3 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
    param_3 = _objc_retain(param_5);
    func_0x00010093f1e0(param_1);
    param_5 = _objc_retainAutoreleasedReturnValue();
    func_0x000100386dac(uVar3);
    auVar15 = _objc_retainAutoreleasedReturnValue();
    func_0x000100386db0(param_5,auVar15._8_8_,auVar15._0_8_);
    param_4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar15._0_8_);
    _objc_release(param_5);
                    /* WARNING: Switch is manually overridden */
    switch(param_4 != 0) {
    case true:
      func_0x000100386db4(param_4);
      lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar6 != 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x000100954a20(uVar3);
        auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010095b5a0(auVar15._0_8_,auVar15._8_8_,param_4,0x100dcf6e0);
        _objc_release(auVar15._0_8_);
      }
      lStack_70 = param_4;
      func_0x000100386db8(param_1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x000100975c40(uVar3);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x000100968700(uVar4,auVar15._8_8_,0,auVar15._0_8_);
      _objc_release(auVar15._0_8_);
      _objc_release(uVar4);
      param_4 = lStack_70;
                    /* WARNING: Switch is manually overridden */
      func_0x00010095c540(uVar3);
      param_1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(param_3 == 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
        lVar6 = func_0x000100973a60(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(299 < lVar6) {
        case false:
          lVar6 = func_0x000100386dbc(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(lVar6 < 200) {
          case false:
            goto override_jmp_100385c60_case_1;
          }
        }
        uVar7 = uRam0000000100c717c0;
        uVar4 = uRam0000000100c71448;
        *(undefined8 *)((long)plVar1 + -0x20) =
             *(undefined8 *)PTR__NSLocalizedDescriptionKey_100afc1d0;
        lStack_80 = param_3;
        auVar15 = func_0x000100386dc0(param_1);
        func_0x00010094e2a0(uVar7,auVar15._8_8_,auVar15._0_8_);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        auVar15 = func_0x000100386dc4(param_1);
        *(undefined8 *)((long)plVar1 + -0x50) = uVar7;
        *(long *)((long)plVar1 + -0x48) = auVar15._0_8_;
        func_0x000100974200(uVar4,auVar15._8_8_,0x100dcf700);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)((long)plVar1 + -0x10) = uVar4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        *(undefined8 *)((long)plVar1 + -0x18) =
             *(undefined8 *)PTR__NSURLErrorFailingURLErrorKey_100afc278;
        uStack_78 = uVar7;
        func_0x000100934fe0(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        *(long *)((long)plVar1 + -8) = auVar15._0_8_;
                    /* WARNING: Switch is manually overridden */
        func_0x000100940a20(uRam0000000100c71458,auVar15._8_8_,(undefined8 *)((long)plVar1 + -0x10),
                            (undefined8 *)((long)plVar1 + -0x20),2);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        _objc_release(uVar4);
        _objc_release(uStack_78);
        uVar4 = uRam0000000100c71810;
        auVar15 = func_0x000100973a60(param_1);
        func_0x000100942ce0(uVar4,auVar15._8_8_,0x100dcf720,auVar15._0_8_,uVar7);
        param_3 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_80);
        _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
        param_4 = lStack_70;
      }
override_jmp_100385c60_case_1:
                    /* WARNING: Switch is manually overridden */
      lStack_80 = param_3;
                    /* WARNING: Switch is manually overridden */
      switch(param_3 != 0) {
      case false:
        func_0x000100952380(uVar3);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        func_0x000100934de0();
        auVar15 = _objc_retainAutoreleasedReturnValue();
        uVar5 = func_0x000100386dc8(auVar15._0_8_,auVar15._8_8_,0x100dcf6c0);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100385e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100dd04a0))();
        return;
                    /* WARNING: Switch is manually overridden */
      case true:
        func_0x00010093d200(param_4);
        param_5 = _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,0,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        _objc_release(param_5);
        _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
        param_3 = lStack_80;
                    /* WARNING: Switch is manually overridden */
      }
    }
    plVar2 = (long *)((long)plVar1 + -0x40);
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(uVar3);
    _objc_release(uVar14);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
      return;
    }
    ___stack_chk_fail();
    *extraout_x10 = (byte)extraout_w9 ^ 0xba;
    extraout_x10[1] = *extraout_x11 ^ 0x78;
    extraout_x10[2] = extraout_x11[1] ^ 0x98;
    extraout_x10[3] = extraout_x11[2] ^ 0xc1;
    extraout_x10[4] = extraout_x11[3] ^ 0x1d;
    extraout_x10[5] = extraout_x11[4] ^ 0xd;
    extraout_x10[6] = extraout_x11[5] ^ 0xee;
    extraout_x10[7] = extraout_x11[6] + (extraout_x11[6] & 0x7a) * -2 + 0x7a;
    extraout_x10[8] = extraout_x11[7] ^ 0xae;
    *extraout_x13 = *extraout_x12 ^ 0x85;
    extraout_x13[1] = extraout_x12[1] ^ 0x20;
    extraout_x13[2] = (extraout_x12[2] + (extraout_x12[2] & 0xe7) * -2) - 0x19;
    extraout_x13[3] = extraout_x12[3] ^ 0x5b;
    extraout_x13[4] = extraout_x12[4] ^ 99;
    extraout_x13[5] = extraout_x12[5] ^ 0x1e;
    extraout_x13[6] = extraout_x12[6] ^ 0xdc;
    extraout_x13[7] = extraout_x12[7] ^ 0x83;
    extraout_x13[8] = extraout_x12[8] ^ 0xb5;
    extraout_x13[9] = extraout_x12[9] ^ 0x3b;
    extraout_x13[10] = extraout_x12[10] + (extraout_x12[10] & 199) * -2 + 0x47;
    extraout_x13[0xb] = extraout_x12[0xb] ^ 0x82;
    extraout_x13[0xc] = extraout_x12[0xc] ^ 0xf;
    extraout_x13[0xd] = extraout_x12[0xd] ^ 0x33;
    extraout_x13[0xe] = extraout_x12[0xe] ^ 0xaa;
    extraout_x13[0xf] = extraout_x12[0xf] + (extraout_x12[0xf] & 9) * -2 + 9;
    uVar14 = *(undefined8 *)(extraout_x12 + 0x10);
    *(ulong *)(extraout_x13 + 0x10) =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)_UNK_100980358 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)_UNK_100980358 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980358 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980358 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980358 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)((ulong)_UNK_100980358 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar14 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_100980358 >> 8),
                                                  (byte)uVar14 ^ (byte)_UNK_100980358)))))));
    extraout_x13[0x18] = extraout_x12[0x18] ^ 0x60;
    extraout_x13[0x19] = extraout_x12[0x19] ^ 0x87;
    extraout_x13[0x1a] = extraout_x12[0x1a] ^ 0xa7;
    extraout_x13[0x1b] = extraout_x12[0x1b] ^ 0xc4;
    extraout_x13[0x1c] = extraout_x12[0x1c] ^ 0xf8;
    extraout_x13[0x1d] = extraout_x12[0x1d] ^ 0xe1;
    puVar8 = extraout_x8;
    pbVar10 = extraout_x10;
    pbVar11 = extraout_x11;
    pbVar12 = extraout_x12;
    pbVar13 = extraout_x13;
    uVar9 = extraout_w9;
override_jmp_100385a00_case_0:
    *pbVar10 = ((char)uVar9 - ((byte)(uVar9 << 1) & 0x74)) + 0xba;
    uVar14 = *(undefined8 *)pbVar11;
    *(ulong *)(pbVar10 + 1) =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)_UNK_100980360 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)_UNK_100980360 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980360 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980360 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980360 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)((ulong)_UNK_100980360 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar14 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_100980360 >> 8),
                                                  (byte)uVar14 ^ (byte)_UNK_100980360)))))));
    *pbVar13 = *pbVar12 ^ 0x85;
    pbVar13[1] = pbVar12[1] ^ 0x20;
    pbVar13[2] = pbVar12[2] ^ 0xe7;
    pbVar13[3] = pbVar12[3] + (pbVar12[3] & 0x5b) * -2 + 0x5b;
    pbVar13[4] = pbVar12[4] ^ 99;
    pbVar13[5] = pbVar12[5] ^ 0x1e;
    pbVar13[6] = (pbVar12[6] + (pbVar12[6] & 0x5c) * -2) - 0x24;
    pbVar13[7] = pbVar12[7] ^ 0x83;
    pbVar13[8] = pbVar12[8] ^ 0xb5;
    pbVar13[9] = pbVar12[9] ^ 0x3b;
    pbVar13[10] = pbVar12[10] + (pbVar12[10] & 199) * -2 + 0x47;
    pbVar13[0xb] = pbVar12[0xb] + (pbVar12[0xb] & 2) * -2 + 0x82;
    pbVar13[0xc] = pbVar12[0xc] + (pbVar12[0xc] & 0xf) * -2 + 0xf;
    pbVar13[0xd] = pbVar12[0xd] ^ 0x33;
    pbVar13[0xe] = pbVar12[0xe] ^ 0xaa;
    pbVar13[0xf] = pbVar12[0xf] + (pbVar12[0xf] & 9) * -2 + 9;
    pbVar13[0x10] = pbVar12[0x10] + (pbVar12[0x10] & 0xf) * -2 + 0x8f;
    uVar14 = *(undefined8 *)(pbVar12 + 0x11);
    *(ulong *)(pbVar13 + 0x11) =
         CONCAT17((byte)((ulong)uVar14 >> 0x38) ^ (byte)((ulong)_UNK_100980368 >> 0x38),
                  CONCAT16((byte)((ulong)uVar14 >> 0x30) ^ (byte)((ulong)_UNK_100980368 >> 0x30),
                           CONCAT15((byte)((ulong)uVar14 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980368 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar14 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980368 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar14 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980368 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar14 >> 0x10) ^
                                                               (byte)((ulong)_UNK_100980368 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar14 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_100980368 >> 8),
                                                  (byte)uVar14 ^ (byte)_UNK_100980368)))))));
    pbVar13[0x19] = pbVar12[0x19] + (pbVar12[0x19] & 7) * -2 + 0x87;
    pbVar13[0x1a] = pbVar12[0x1a] ^ 0xa7;
    pbVar13[0x1b] = pbVar12[0x1b] ^ 0xc4;
    pbVar13[0x1c] = pbVar12[0x1c] ^ 0xf8;
    pbVar13[0x1d] = pbVar12[0x1d] ^ 0xe1;
    bRam0000000100dcf6ae = pbVar12[0x1e] ^ 0xe1;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcf6b4 = bRam0000000100dcf6af ^ 0x93;
    bRam0000000100dcf6b5 = bRam0000000100dcf6b0 ^ 0x7b;
    bRam0000000100dcf6b6 = bRam0000000100dcf6b1 ^ 0x58;
    bRam0000000100dcf6b7 = bRam0000000100dcf6b2 ^ 0xd7;
    bRam0000000100dcf6b8 = bRam0000000100dcf6b3 ^ 0xda;
    plVar1 = plVar2;
                    /* WARNING: Switch is manually overridden */
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager timeout]
 * Entry: 0x1003868ec; original ABI: q16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003868f4 */
/* WARNING: Switch with 1 destination removed at 0x000100386900 */
/* WARNING: Switch with 1 destination removed at 0x00010038690c */

undefined8 Recovered_YYYWebDAVManager_m02659(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setTimeout:]
 * Entry: 0x100386918; original ABI: v24@0:8q16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386920 */
/* WARNING: Switch with 1 destination removed at 0x000100386930 */
/* WARNING: Switch with 1 destination removed at 0x00010038693c */

void Recovered_YYYWebDAVManager_m02660(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager username]
 * Entry: 0x100386954; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038695c */
/* WARNING: Switch with 1 destination removed at 0x000100386968 */
/* WARNING: Switch with 1 destination removed at 0x000100386978 */

undefined8 Recovered_YYYWebDAVManager_m02661(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setUsername:]
 * Entry: 0x100386980; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003869a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003869b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003869e4 */
/* WARNING: Switch with 1 destination removed at 0x0001003869f0 */

void Recovered_YYYWebDAVManager_m02662(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager password]
 * Entry: 0x100386a04; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386a0c */
/* WARNING: Switch with 1 destination removed at 0x000100386a18 */
/* WARNING: Switch with 1 destination removed at 0x000100386a24 */

undefined8 Recovered_YYYWebDAVManager_m02663(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setPassword:]
 * Entry: 0x100386a30; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386a54 */
/* WARNING: Switch with 1 destination removed at 0x000100386a88 */

void Recovered_YYYWebDAVManager_m02664(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x18);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager baseUrl]
 * Entry: 0x100386a9c; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386aa4 */
/* WARNING: Switch with 1 destination removed at 0x000100386ab4 */

undefined8 Recovered_YYYWebDAVManager_m02665(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setBaseUrl:]
 * Entry: 0x100386abc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYWebDAVManager_m02666(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager session]
 * Entry: 0x100386ac4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386acc */
/* WARNING: Switch with 1 destination removed at 0x000100386ad8 */

undefined8 Recovered_YYYWebDAVManager_m02667(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setSession:]
 * Entry: 0x100386ae4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386af0 */

void Recovered_YYYWebDAVManager_m02668(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x28,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager queue]
 * Entry: 0x100386afc; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386b04 */
/* WARNING: Switch with 1 destination removed at 0x000100386b10 */

undefined8 Recovered_YYYWebDAVManager_m02669(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setQueue:]
 * Entry: 0x100386b1c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386b34 */
/* WARNING: Switch with 1 destination removed at 0x000100386b50 */
/* WARNING: Switch with 1 destination removed at 0x000100386b78 */

void Recovered_YYYWebDAVManager_m02670(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager dataCacheDic]
 * Entry: 0x100386b7c; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386b84 */

undefined8 Recovered_YYYWebDAVManager_m02671(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager setDataCacheDic:]
 * Entry: 0x100386b90; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386bac */
/* WARNING: Switch with 1 destination removed at 0x000100386bc8 */
/* WARNING: Switch with 1 destination removed at 0x000100386bec */

void Recovered_YYYWebDAVManager_m02672(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVManager .cxx_destruct]
 * Entry: 0x100386c00; original ABI: v16@0:8
 * Original instructions in modeled body: 38; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386c18 */
/* WARNING: Switch with 1 destination removed at 0x000100386c58 */
/* WARNING: Switch with 1 destination removed at 0x000100386c7c */
/* WARNING: Switch with 1 destination removed at 0x000100386cac */

void Recovered_YYYWebDAVManager_m02673(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



