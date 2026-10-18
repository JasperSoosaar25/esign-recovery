/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTabBarViewController viewDidLoad]
 * Entry: 0x100006b74; original ABI: v16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100006b9c */
/* WARNING: Switch with 1 destination removed at 0x000100006bc8 */

void Recovered_YYYTabBarViewController_m00014(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
                    /* WARNING: Switch is manually overridden */
  uStack_28 = uRam0000000100c73830;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_100c70870);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTabBarViewController generateSubViewController]
 * Entry: 0x100006bdc; original ABI: v16@0:8
 * Original instructions in modeled body: 900; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100006c20 */
/* WARNING: Switch with 1 destination removed at 0x000100006c2c */
/* WARNING: Switch with 1 destination removed at 0x000100006c48 */
/* WARNING: Switch with 1 destination removed at 0x000100006c54 */
/* WARNING: Switch with 1 destination removed at 0x0001000070e4 */
/* WARNING: Switch with 1 destination removed at 0x00010000711c */
/* WARNING: Switch with 1 destination removed at 0x00010000717c */
/* WARNING: Switch with 1 destination removed at 0x0001000071a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000071b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000077b8 */
/* WARNING: Switch with 1 destination removed at 0x000100007a28 */
/* WARNING: Switch with 1 destination removed at 0x000100007cbc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTabBarViewController_m00015(undefined8 param_1)

{
  undefined8 *puVar1;
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
  undefined4 *extraout_x14;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90c78 == 0) {
  case true:
    bRam0000000100ca249f = bRam0000000100ca2496 ^ 0x5a;
    cRam0000000100ca24a0 = bRam0000000100ca2497 + (bRam0000000100ca2497 & 0x2f) * -2 + '/';
    cRam0000000100ca24a1 = bRam0000000100ca2498 + (bRam0000000100ca2498 & 0xe7) * -2 + 'g';
    bRam0000000100ca24a2 = bRam0000000100ca2499 ^ 0xb9;
    cRam0000000100ca24a3 = bRam0000000100ca249a + (bRam0000000100ca249a & 0x2d) * -2 + -0x53;
    cRam0000000100ca24a4 = bRam0000000100ca249b + (bRam0000000100ca249b & 0xdf) * -2 + '_';
    bRam0000000100ca24a5 = bRam0000000100ca249c ^ 0xb8;
    cRam0000000100ca24a6 = bRam0000000100ca249d + (bRam0000000100ca249d & 0x13) * -2 + -0x6d;
    bRam0000000100ca24a7 = bRam0000000100ca249e ^ 0xd2;
    uRam0000000100ca24ae = uRam0000000100ca24a8 ^ 0x5a91;
    uRam0000000100ca24b0 = uRam0000000100ca24aa ^ 0x8ade;
    uRam0000000100ca24b2 =
         ~((uRam0000000100ca24ac | 0xd595) & (uRam0000000100ca24ac ^ 0xffff | 0x2a6a));
    uRam0000000100ca250a = uRam0000000100ca2504 ^ 0x739d;
    uRam0000000100ca250c = uRam0000000100ca2506 ^ 0xbdc8;
    uRam0000000100ca250e = uRam0000000100ca2508 ^ 0x2644;
    uRam0000000100ca2490 = uRam0000000100ca248a ^ 0x49d6;
    uRam0000000100ca2492 = uRam0000000100ca248c ^ 0x915c;
    uRam0000000100ca2494 = uRam0000000100ca248e ^ 0xad04;
    uRam0000000100ca2480 =
         CONCAT17((byte)((ulong)uRam0000000100ca2470 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b088 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100ca2470 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b088 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100ca2470 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b088 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100ca2470 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b088 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100ca2470 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b088 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100ca2470 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b088 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100ca2470 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b088 >> 8),
                                                  (byte)uRam0000000100ca2470 ^ (byte)_UNK_10097b088)
                                                  ))))));
    uRam0000000100ca2488 = uRam0000000100ca2478 ^ 0x7d8f;
    uRam0000000100ca24c0 = uRam0000000100ca24b4 ^ 0xd6ee;
    sRam0000000100ca24c2 = uRam0000000100ca24b6 + (uRam0000000100ca24b6 & 0x3b6d) * -2 + 0x3b6d;
    uRam0000000100ca24c4 =
         CONCAT17((byte)((ulong)uRam0000000100ca24b8 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b090 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100ca24b8 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b090 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100ca24b8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b090 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100ca24b8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b090 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100ca24b8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b090 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100ca24b8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b090 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100ca24b8 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b090 >> 8),
                                                  (byte)uRam0000000100ca24b8 ^ (byte)_UNK_10097b090)
                                                  ))))));
    cRam0000000100ca24d5 = bRam0000000100ca24cc + (bRam0000000100ca24cc & 0x7a) * -2 + -6;
    bRam0000000100ca24d6 = bRam0000000100ca24cd ^ 1;
    bRam0000000100ca24d7 = bRam0000000100ca24ce ^ 1;
    bRam0000000100ca24d8 = bRam0000000100ca24cf ^ 0x84;
    cRam0000000100ca24d9 = bRam0000000100ca24d0 + (bRam0000000100ca24d0 & 0x17) * -2 + '\x17';
    bRam0000000100ca24da = bRam0000000100ca24d1 ^ 0x89;
    bRam0000000100ca24db = bRam0000000100ca24d2 ^ 0xf0;
    bRam0000000100ca24dc = bRam0000000100ca24d3 ^ 0x35;
    bRam0000000100ca24dd = bRam0000000100ca24d4 ^ 0xa8;
    uRam0000000100ca24e4 = uRam0000000100ca24de ^ 0xc9af;
    uRam0000000100ca24e6 = uRam0000000100ca24e0 ^ 0x5bdf;
    sRam0000000100ca24e8 = uRam0000000100ca24e2 + (uRam0000000100ca24e2 & 0x1ac9) * -2 + 0x1ac9;
    cRam0000000100ca24f7 = bRam0000000100ca24ea + (bRam0000000100ca24ea & 0x16) * -2 + '\x16';
    bRam0000000100ca24f8 = bRam0000000100ca24eb ^ 100;
    cRam0000000100ca24f9 = bRam0000000100ca24ec + (bRam0000000100ca24ec & 2) * -2 + -0x7e;
    bRam0000000100ca24fa = bRam0000000100ca24ed ^ 0xb7;
    bRam0000000100ca24fb = bRam0000000100ca24ee ^ 0x5e;
    cRam0000000100ca24fc = bRam0000000100ca24ef + (bRam0000000100ca24ef & 0x49) * -2 + 'I';
    bRam0000000100ca24fd = ~((bRam0000000100ca24f0 | 0xce) & (bRam0000000100ca24f0 ^ 0xff | 0x31));
    bRam0000000100ca24fe = bRam0000000100ca24f1 ^ 0xeb;
    bRam0000000100ca24ff = bRam0000000100ca24f2 ^ 0x36;
    bRam0000000100ca2500 = bRam0000000100ca24f3 ^ 0xdd;
    bRam0000000100ca2501 = bRam0000000100ca24f4 ^ 0x3d;
    bRam0000000100ca2502 = bRam0000000100ca24f5 ^ 0xca;
    bRam0000000100ca2503 = bRam0000000100ca24f6 ^ 0x7f;
    uRam0000000100ca2520 =
         CONCAT17((byte)((ulong)uRam0000000100ca2510 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b098 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100ca2510 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b098 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100ca2510 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b098 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100ca2510 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b098 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100ca2510 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b098 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100ca2510 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b098 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100ca2510 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b098 >> 8),
                                                  (byte)uRam0000000100ca2510 ^ (byte)_UNK_10097b098)
                                                  ))))));
    bRam0000000100ca2528 = bRam0000000100ca2518 ^ 0xa6;
    bRam0000000100ca2529 = bRam0000000100ca2519 ^ 0x67;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100ca252a = bRam0000000100ca251a ^ 0x8c;
    bRam0000000100ca252b = ~((bRam0000000100ca251b | 0xad) & (bRam0000000100ca251b ^ 0xff | 0x52));
                    /* WARNING: Switch is manually overridden */
  }
  puVar1 = (undefined8 *)auStack_b0;
  uStack_70 = param_1;
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    iRam0000000100e90c78 = 1;
    puVar9 = puVar1 + -6;
    auVar10 = _objc_alloc(uRam0000000100c713b0);
    uVar2 = func_0x000100949ea0(auVar10._0_8_,auVar10._8_8_,0);
    func_0x000100970d60(uRam0000000100c71390);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100972ea0();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100963260(uVar2,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    _objc_release(uVar3);
    func_0x00010097a8a0(0x100ca2530);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f0e0(uVar2,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    func_0x000100964fe0(uVar2,extraout_x1_00,0);
    auVar10 = func_0x000100008174(uRam0000000100c71398);
    uVar3 = func_0x000100008178(auVar10._0_8_,auVar10._8_8_,uVar2);
    func_0x00010000817c();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f860(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar4 = _objc_alloc(uRam0000000100c713b8);
    func_0x00010097a8a0(0x100ca2550);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca2570);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x000100008180(uVar4,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    uStack_a0 = uVar3;
    func_0x000100008184(uVar3,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    auVar10 = func_0x000100008188(uRam0000000100c713c8);
    auVar10 = func_0x000100949ea0(auVar10._0_8_,auVar10._8_8_,0);
    uVar3 = auVar10._0_8_;
    func_0x000100964fe0(uVar3,auVar10._8_8_,0);
    auVar10 = _objc_alloc(uRam0000000100c71398);
    uVar4 = func_0x00010000818c(auVar10._0_8_,auVar10._8_8_,uVar3);
    func_0x000100951000();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100008190(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar5 = func_0x000100008194(uRam0000000100c713b8);
    func_0x000100008198(0x100ca2590);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca25b0);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x00010000819c(uVar5,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    func_0x00010096dda0(uVar4,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    auVar10 = _objc_alloc(uRam0000000100c713d0);
    auVar10 = func_0x000100949ea0(auVar10._0_8_,auVar10._8_8_,1);
    uVar5 = auVar10._0_8_;
    func_0x0001000081a0(uVar5,auVar10._8_8_,0);
    auVar10 = _objc_alloc(uRam0000000100c71398);
    uVar6 = func_0x000100949ce0(auVar10._0_8_,auVar10._8_8_,uVar5);
    func_0x000100951000();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000081a4(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar7 = _objc_alloc(uRam0000000100c713b8);
    func_0x0001000081a8(0x100ca25d0);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000081ac(uRam0000000100c713c0,uVar8,0x100ca25d0);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    auVar11 = func_0x00010094a020(uVar7,auVar10._8_8_,uVar8,auVar10._0_8_,0);
    uStack_a8 = uVar4;
    uStack_88 = uVar5;
    uStack_80 = uVar3;
    uStack_78 = uVar2;
                    /* WARNING: Switch is manually overridden */
    func_0x00010096dda0(uVar6,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    _objc_release(uVar8);
    auVar10 = _objc_alloc(uRam0000000100c713d8);
    auVar10 = func_0x000100949ea0(auVar10._0_8_,auVar10._8_8_,0);
    uVar4 = auVar10._0_8_;
    func_0x0001000081b0(uVar4,auVar10._8_8_,0);
    auVar10 = func_0x0001000081b4(uRam0000000100c71398);
    uVar5 = func_0x000100949ce0(auVar10._0_8_,auVar10._8_8_,uVar4);
    func_0x000100951000();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x0001000081b8(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar2 = _objc_alloc(uRam0000000100c713b8);
    func_0x00010097a8a0(0x100ca25f0);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca2610);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x00010094a020(uVar2,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    func_0x0001000081bc(uVar5,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    auVar10 = _objc_alloc(uRam0000000100c713e0);
    auVar10 = func_0x000100949ea0(auVar10._0_8_,auVar10._8_8_,_UNK_100981798);
    uVar7 = auVar10._0_8_;
    func_0x000100964fe0(uVar7,auVar10._8_8_,0);
    auVar10 = func_0x0001000081c0(uRam0000000100c71398);
    uVar3 = uStack_a0;
    uVar2 = uStack_a8;
    uStack_90 = auVar10._0_8_;
    uStack_98 = uVar4;
                    /* WARNING: Switch is manually overridden */
    uVar4 = func_0x0001000081c4(uStack_90,auVar10._8_8_,uVar7);
    func_0x0001000081c8();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f860(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar8 = _objc_alloc(uRam0000000100c713b8);
    func_0x0001000081cc(0x100ca2630);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca2650);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x0001000081d0(uVar8,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    func_0x0001000081d4(uVar4,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    *puVar9 = uVar3;
    puVar1[-5] = uVar2;
    puVar1[-4] = uVar6;
    puVar1[-3] = uVar5;
    puVar1[-2] = uVar4;
    func_0x000100939140(uRam0000000100c713e8,extraout_x1_01,puVar9,5);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009701e0(uStack_70,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar5);
    _objc_release(uStack_98);
    _objc_release(uVar6);
    _objc_release(uStack_88);
    _objc_release(uVar2);
    _objc_release(uStack_80);
    _objc_release(uVar3);
    _objc_release(uStack_78);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    *extraout_x14 = 1;
    auVar10 = func_0x0001000081d8(uRam0000000100c713b0);
    uVar2 = func_0x0001000081dc(auVar10._0_8_,auVar10._8_8_,0);
    func_0x0001000081e0(uRam0000000100c71390);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100972ea0();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100963260(uVar2,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    _objc_release(uVar3);
    func_0x00010097a8a0(0x100ca2530);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f0e0(uVar2,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    func_0x0001000081e4(uVar2,extraout_x1,0);
    auVar10 = _objc_alloc(uRam0000000100c71398);
    uVar2 = func_0x000100949ce0(auVar10._0_8_,auVar10._8_8_,uVar2);
    func_0x0001000081e8();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f860(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar3 = _objc_alloc(uRam0000000100c713b8);
    func_0x00010097a8a0(0x100ca2550);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca2570);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x00010094a020(uVar3,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    func_0x00010096dda0(uVar2,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    auVar10 = func_0x0001000081ec(uRam0000000100c713c8);
    auVar10 = func_0x0001000081f0(auVar10._0_8_,auVar10._8_8_,0);
    func_0x0001000081f4(auVar10._0_8_,auVar10._8_8_,0);
    auVar11 = func_0x0001000081f8(uRam0000000100c71398);
    uVar2 = func_0x0001000081fc(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_);
    func_0x000100008200();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096f860(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar3 = func_0x000100008204(uRam0000000100c713b8);
    func_0x00010097a8a0(0x100ca2590);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca25b0);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar12 = func_0x000100008208(uVar3,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    func_0x00010096dda0(uVar2,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(auVar10._0_8_);
    auVar10 = func_0x00010000820c(uRam0000000100c713d0);
    auVar10 = func_0x000100008210(auVar10._0_8_,auVar10._8_8_,1);
    func_0x000100964fe0(auVar10._0_8_,auVar10._8_8_,0);
    auVar11 = _objc_alloc(uRam0000000100c71398);
    func_0x000100949ce0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_);
    func_0x000100951000();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100008214(auVar10._0_8_,auVar10._8_8_,0);
    _objc_release(auVar10._0_8_);
    uVar2 = func_0x000100008218(uRam0000000100c713b8);
    func_0x00010097a8a0(0x100ca25d0);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100947300(uRam0000000100c713c0,auVar10._8_8_,0x100ca25d0);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094a020(uVar2,auVar11._8_8_,auVar10._0_8_,auVar11._0_8_,0);
    puVar1 = puVar9;
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTabBarViewController supportedInterfaceOrientations]
 * Entry: 0x100007ebc; original ABI: Q16@0:8
 * Original instructions in modeled body: 112; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100007ee4 */
/* WARNING: Switch with 1 destination removed at 0x000100007ef8 */
/* WARNING: Switch with 1 destination removed at 0x000100007f04 */
/* WARNING: Switch with 1 destination removed at 0x000100007fec */
/* WARNING: Switch with 1 destination removed at 0x000100007ff8 */
/* WARNING: Switch with 1 destination removed at 0x00010000801c */
/* WARNING: Switch with 1 destination removed at 0x000100008028 */
/* WARNING: Switch with 1 destination removed at 0x00010000803c */
/* WARNING: Switch with 1 destination removed at 0x000100008170 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYTabBarViewController_m00016(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90c7c == 0) {
  case true:
    uRam0000000100ca2680 =
         CONCAT17((byte)((ulong)uRam0000000100ca2670 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b0a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100ca2670 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b0a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100ca2670 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b0a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100ca2670 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b0a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100ca2670 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b0a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100ca2670 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b0a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100ca2670 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b0a0 >> 8),
                                                  (byte)uRam0000000100ca2670 ^ (byte)_UNK_10097b0a0)
                                                  ))))));
    bRam0000000100ca2688 = bRam0000000100ca2678 ^ 0xd;
    bRam0000000100ca2689 = bRam0000000100ca2679 ^ 0x6c;
    bRam0000000100ca268a = bRam0000000100ca267a ^ 0x82;
    bRam0000000100ca268b = bRam0000000100ca267b ^ 0x22;
    bRam0000000100ca268c = bRam0000000100ca267c ^ 0x41;
    cRam0000000100ca268d = bRam0000000100ca267d + (bRam0000000100ca267d & 0x2f) * -2 + '/';
    bRam0000000100ca268e = bRam0000000100ca267e ^ 0x4c;
    cRam0000000100ca268f = bRam0000000100ca267f + (bRam0000000100ca267f & 0x72) * -2 + 'r';
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90c7c = 1;
  func_0x0001009733a0(uRam0000000100c713f8);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x00010093a540(auVar2._0_8_,auVar2._8_8_,0x100ca2690);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010000804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100ca2998))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYTabBarViewController sharedTabbarController]
 * Entry: 0x100007cc0; original ABI: @16@0:8
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100007cd4 */
/* WARNING: Switch with 1 destination removed at 0x000100007ce0 */
/* WARNING: Switch with 1 destination removed at 0x000100007cec */
/* WARNING: Switch with 1 destination removed at 0x000100007d34 */
/* WARNING: Switch with 1 destination removed at 0x000100007d50 */

void Recovered_YYYTabBarViewController_m00017(void)

{
  func_0x000100007d54(0x100e90c70,&UNK_100afeb18);
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(uRam0000000100e90c68);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



