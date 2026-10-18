/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO initWithMachOPath:readOnly:thinToArm64:]
 * Entry: 0x10070de48; original ABI: @32@0:8@16B24B28
 * Original instructions in modeled body: 144; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070de84 */
/* WARNING: Switch with 1 destination removed at 0x00010070de98 */
/* WARNING: Switch with 1 destination removed at 0x00010070dfac */
/* WARNING: Switch with 1 destination removed at 0x00010070e024 */
/* WARNING: Switch with 1 destination removed at 0x00010070e034 */
/* WARNING: Switch with 1 destination removed at 0x00010070e044 */
/* WARNING: Switch with 1 destination removed at 0x00010070e068 */
/* WARNING: Switch with 1 destination removed at 0x00010070e59c */

void Recovered_YYYMachO_m03039(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d68 == 0) {
  case true:
    bRam0000000100e0950e = bRam0000000100e09500 ^ 0xc5;
    cRam0000000100e0950f = bRam0000000100e09501 + (bRam0000000100e09501 & 0xfb) * -2 + -5;
    cRam0000000100e09510 = bRam0000000100e09502 + (bRam0000000100e09502 & 0x12) * -2 + '\x12';
    bRam0000000100e09511 = bRam0000000100e09503 ^ 0x1e;
    bRam0000000100e09512 = bRam0000000100e09504 ^ 0xb2;
    bRam0000000100e09513 = bRam0000000100e09505 ^ 0x80;
    bRam0000000100e09514 = bRam0000000100e09506 ^ 0x70;
    cRam0000000100e09515 = bRam0000000100e09507 + (bRam0000000100e09507 & 0xf7) * -2 + -9;
    cRam0000000100e09516 = bRam0000000100e09508 + (bRam0000000100e09508 & 0x57) * -2 + -0x29;
    bRam0000000100e09517 = bRam0000000100e09509 ^ 0x3d;
    bRam0000000100e09518 = bRam0000000100e0950a ^ 0xdb;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e09519 = bRam0000000100e0950b ^ 0xa3;
    bRam0000000100e0951a = bRam0000000100e0950c ^ 0xb1;
    cRam0000000100e0951b = bRam0000000100e0950d + (bRam0000000100e0950d & 0xef) * -2 + -0x11;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95d68 = 1;
  uVar2 = _objc_retain(param_3);
  func_0x00010093ff20(uRam0000000100c71648);
  auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x0001009436c0(auVar3._0_8_,auVar3._8_8_,uVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar3._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010070e084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((ulong)(uVar1 ^ 1) * 8 + 0x100e09ce0))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setupDefaultEntitlements]
 * Entry: 0x10070e7a4; original ABI: v16@0:8
 * Original instructions in modeled body: 1486; unresolved jumps: 4
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070e7e8 */
/* WARNING: Switch with 1 destination removed at 0x00010070e7fc */
/* WARNING: Switch with 1 destination removed at 0x00010070f0c0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f0d0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f0e8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f130 */
/* WARNING: Switch with 1 destination removed at 0x00010070f13c */
/* WARNING: Switch with 1 destination removed at 0x00010070f15c */
/* WARNING: Switch with 1 destination removed at 0x00010070f17c */
/* WARNING: Switch with 1 destination removed at 0x00010070f188 */
/* WARNING: Switch with 1 destination removed at 0x00010070f194 */
/* WARNING: Switch with 1 destination removed at 0x00010070f1ac */
/* WARNING: Switch with 1 destination removed at 0x00010070f1c8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f21c */
/* WARNING: Switch with 1 destination removed at 0x00010070f238 */
/* WARNING: Switch with 1 destination removed at 0x00010070f260 */
/* WARNING: Switch with 1 destination removed at 0x00010070f274 */
/* WARNING: Switch with 1 destination removed at 0x00010070f2f0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f2fc */
/* WARNING: Switch with 1 destination removed at 0x00010070f308 */
/* WARNING: Switch with 1 destination removed at 0x00010070f320 */
/* WARNING: Switch with 1 destination removed at 0x00010070f32c */
/* WARNING: Switch with 1 destination removed at 0x00010070f348 */
/* WARNING: Switch with 1 destination removed at 0x00010070f364 */
/* WARNING: Switch with 1 destination removed at 0x00010070f394 */
/* WARNING: Switch with 1 destination removed at 0x00010070f3a0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f3ac */
/* WARNING: Switch with 1 destination removed at 0x00010070f3c0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f3cc */
/* WARNING: Switch with 1 destination removed at 0x00010070f3f4 */
/* WARNING: Switch with 1 destination removed at 0x00010070f400 */
/* WARNING: Switch with 1 destination removed at 0x00010070f428 */
/* WARNING: Switch with 1 destination removed at 0x00010070f434 */
/* WARNING: Switch with 1 destination removed at 0x00010070f440 */
/* WARNING: Switch with 1 destination removed at 0x00010070f470 */
/* WARNING: Switch with 1 destination removed at 0x00010070f47c */
/* WARNING: Switch with 1 destination removed at 0x00010070f488 */
/* WARNING: Switch with 1 destination removed at 0x00010070f49c */
/* WARNING: Switch with 1 destination removed at 0x00010070f4a8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f4cc */
/* WARNING: Switch with 1 destination removed at 0x00010070f4f4 */
/* WARNING: Switch with 1 destination removed at 0x00010070f508 */
/* WARNING: Switch with 1 destination removed at 0x00010070f5a0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f5ac */
/* WARNING: Switch with 1 destination removed at 0x00010070f5b8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f5c4 */
/* WARNING: Switch with 1 destination removed at 0x00010070f5ec */
/* WARNING: Switch with 1 destination removed at 0x00010070f5f8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f624 */
/* WARNING: Switch with 1 destination removed at 0x00010070f630 */
/* WARNING: Switch with 1 destination removed at 0x00010070f644 */
/* WARNING: Switch with 1 destination removed at 0x00010070f690 */
/* WARNING: Switch with 1 destination removed at 0x00010070f6b8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f6c4 */
/* WARNING: Switch with 1 destination removed at 0x00010070f6f0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f6fc */
/* WARNING: Switch with 1 destination removed at 0x00010070f710 */
/* WARNING: Switch with 1 destination removed at 0x00010070f780 */
/* WARNING: Switch with 1 destination removed at 0x00010070f790 */
/* WARNING: Switch with 1 destination removed at 0x00010070f79c */
/* WARNING: Switch with 1 destination removed at 0x00010070f7ac */
/* WARNING: Switch with 1 destination removed at 0x00010070f7b8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f7c4 */
/* WARNING: Switch with 1 destination removed at 0x00010070f7d0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f7fc */
/* WARNING: Switch with 1 destination removed at 0x00010070f8b0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f8bc */
/* WARNING: Switch with 1 destination removed at 0x00010070f8c8 */
/* WARNING: Switch with 1 destination removed at 0x00010070f8e0 */
/* WARNING: Switch with 1 destination removed at 0x00010070f904 */
/* WARNING: Switch with 1 destination removed at 0x00010070f910 */
/* WARNING: Switch with 1 destination removed at 0x00010070f930 */
/* WARNING: Switch with 1 destination removed at 0x00010070f93c */
/* WARNING: Switch with 1 destination removed at 0x00010070f948 */
/* WARNING: Switch with 1 destination removed at 0x00010070f974 */
/* WARNING: Switch with 1 destination removed at 0x00010070f99c */
/* WARNING: Switch with 1 destination removed at 0x00010070f9f0 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa04 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa0c */
/* WARNING: Switch with 1 destination removed at 0x00010070fa30 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa38 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa50 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa58 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa68 */
/* WARNING: Switch with 1 destination removed at 0x00010070fa8c */
/* WARNING: Switch with 1 destination removed at 0x00010070fab0 */
/* WARNING: Switch with 1 destination removed at 0x00010070fabc */
/* WARNING: Switch with 1 destination removed at 0x00010070faf8 */
/* WARNING: Switch with 1 destination removed at 0x00010070fb0c */
/* WARNING: Switch with 1 destination removed at 0x00010070fbc4 */
/* WARNING: Switch with 1 destination removed at 0x00010070fbd0 */
/* WARNING: Switch with 1 destination removed at 0x00010070fc1c */
/* WARNING: Switch with 1 destination removed at 0x000100710698 */
/* WARNING: Switch with 1 destination removed at 0x0001007106b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007106d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007106fc */
/* WARNING: Switch with 1 destination removed at 0x000100710718 */
/* WARNING: Switch with 1 destination removed at 0x000100710758 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYMachO_m03040(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined1 auVar6 [16];
  undefined1 auStack_1b0 [128];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d6c == 0) {
  case true:
    cRam0000000100e0954d = bRam0000000100e09540 + (bRam0000000100e09540 & 0x54) * -2 + 'T';
    bRam0000000100e0954e = bRam0000000100e09541 ^ 0xa8;
    bRam0000000100e0954f = bRam0000000100e09542 ^ 0x6e;
    bRam0000000100e09550 = bRam0000000100e09543 ^ 0x83;
    bRam0000000100e09551 = bRam0000000100e09544 ^ 0x36;
    bRam0000000100e09552 = bRam0000000100e09545 ^ 0x2a;
    bRam0000000100e09553 = bRam0000000100e09546 ^ 0x95;
    uRam0000000100e09554 = uRam0000000100e09547;
    bRam0000000100e09555 = bRam0000000100e09548 ^ 0x58;
    bRam0000000100e09556 = bRam0000000100e09549 ^ 0xde;
    cRam0000000100e09557 = bRam0000000100e0954a + (bRam0000000100e0954a & 0x2e) * -2 + '.';
    bRam0000000100e09558 = bRam0000000100e0954b ^ 0x8b;
    bRam0000000100e09559 = bRam0000000100e0954c ^ 0x5b;
    uRam0000000100e095a8 =
         CONCAT17((byte)((ulong)uRam0000000100e09598 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b5e0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09598 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b5e0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09598 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b5e0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09598 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b5e0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09598 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b5e0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09598 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b5e0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09598 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b5e0 >> 8),
                                                  (byte)uRam0000000100e09598 ^ (byte)_UNK_10099b5e0)
                                                  ))))));
    bRam0000000100e095b0 = bRam0000000100e095a0 ^ 0xfb;
    bRam0000000100e09790 = bRam0000000100e09760 ^ 0x9c;
    bRam0000000100e09791 = bRam0000000100e09761 ^ 0xc2;
    bRam0000000100e09792 = bRam0000000100e09762 ^ 0x41;
    bRam0000000100e09793 = bRam0000000100e09763 ^ 0xd2;
    bRam0000000100e09794 = bRam0000000100e09764 ^ 1;
    bRam0000000100e09795 = bRam0000000100e09765 ^ 0xc4;
    cRam0000000100e09796 = bRam0000000100e09766 + (bRam0000000100e09766 & 0x33) * -2 + '3';
    uRam0000000100e09797 =
         CONCAT17((byte)((ulong)uRam0000000100e09767 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b650 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09767 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b650 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09767 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b650 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09767 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b650 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09767 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b650 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09767 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b650 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09767 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b650 >> 8),
                                                  (byte)uRam0000000100e09767 ^ (byte)_UNK_10099b650)
                                                  ))))));
    uRam0000000100e0979f =
         CONCAT17((byte)((ulong)uRam0000000100e0976f >> 0x38) ^
                  (byte)((ulong)_UNK_10099b658 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0976f >> 0x30) ^
                           (byte)((ulong)_UNK_10099b658 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0976f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b658 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0976f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b658 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0976f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b658 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0976f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b658 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0976f >> 8) ^
                                                  (byte)((ulong)_UNK_10099b658 >> 8),
                                                  (byte)uRam0000000100e0976f ^ (byte)_UNK_10099b658)
                                                  ))))));
    bRam0000000100e097a7 = bRam0000000100e09777 ^ 0xe5;
    cRam0000000100e097a8 = bRam0000000100e09778 + (bRam0000000100e09778 & 0x37) * -2 + -0x49;
    cRam0000000100e097a9 = bRam0000000100e09779 + (bRam0000000100e09779 & 0x53) * -2 + 'S';
    uRam0000000100e097aa =
         CONCAT17((byte)((ulong)uRam0000000100e0977a >> 0x38) ^
                  (byte)((ulong)_UNK_10099b5e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0977a >> 0x30) ^
                           (byte)((ulong)_UNK_10099b5e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0977a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b5e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0977a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b5e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0977a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b5e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0977a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b5e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0977a >> 8) ^
                                                  (byte)((ulong)_UNK_10099b5e8 >> 8),
                                                  (byte)uRam0000000100e0977a ^ (byte)_UNK_10099b5e8)
                                                  ))))));
    bRam0000000100e097b2 = bRam0000000100e09782 ^ 0x1b;
    bRam0000000100e097b3 = bRam0000000100e09783 ^ 0xfe;
    bRam0000000100e097b4 = bRam0000000100e09784 ^ 0x25;
    bRam0000000100e097b5 = bRam0000000100e09785 ^ 0x7c;
    uRam0000000100e09688 =
         CONCAT17((byte)((ulong)uRam0000000100e09678 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b5f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09678 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b5f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09678 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b5f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09678 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b5f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09678 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b5f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09678 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b5f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09678 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b5f0 >> 8),
                                                  (byte)uRam0000000100e09678 ^ (byte)_UNK_10099b5f0)
                                                  ))))));
    cRam0000000100e09690 = bRam0000000100e09680 + (bRam0000000100e09680 & 0x18) * -2 + '\x18';
    bRam0000000100e09691 = bRam0000000100e09681 ^ 0x9b;
    bRam0000000100e09692 = bRam0000000100e09682 ^ 0xbc;
    bRam0000000100e09693 = bRam0000000100e09683 ^ 0x99;
    bRam0000000100e09694 = bRam0000000100e09684 ^ 0xd9;
    bRam0000000100e09695 = bRam0000000100e09685 ^ 0xfc;
    bRam0000000100e09696 = bRam0000000100e09686 ^ 6;
    cRam0000000100e09697 = bRam0000000100e09687 + (bRam0000000100e09687 & 0x5b) * -2 + -0x25;
    bRam0000000100e09580 = bRam0000000100e09560 ^ 0x25;
    cRam0000000100e09581 = bRam0000000100e09561 + (bRam0000000100e09561 & 10) * -2 + -0x76;
    bRam0000000100e09582 = bRam0000000100e09562 ^ 0x88;
    bRam0000000100e09583 = bRam0000000100e09563 ^ 0xba;
    bRam0000000100e09584 = bRam0000000100e09564 ^ 0x80;
    bRam0000000100e09585 = bRam0000000100e09565 ^ 0x45;
    bRam0000000100e09586 = bRam0000000100e09566 ^ 0xb;
    bRam0000000100e09587 = bRam0000000100e09567 ^ 0xe3;
    bRam0000000100e09588 = bRam0000000100e09568 ^ 0xec;
    bRam0000000100e09589 = bRam0000000100e09569 ^ 0x21;
    bRam0000000100e0958a = bRam0000000100e0956a ^ 0xd6;
    bRam0000000100e0958b = bRam0000000100e0956b ^ 0xbb;
    cRam0000000100e0958c = bRam0000000100e0956c + (bRam0000000100e0956c & 0x53) * -2 + 'S';
    bRam0000000100e0958d = bRam0000000100e0956d ^ 0xad;
    bRam0000000100e0958e = bRam0000000100e0956e ^ 0x15;
    bRam0000000100e0958f = bRam0000000100e0956f ^ 0x35;
    cRam0000000100e09590 = bRam0000000100e09570 + (bRam0000000100e09570 & 0x65) * -2 + -0x1b;
    bRam0000000100e09591 = bRam0000000100e09571 ^ 0x8e;
    bRam0000000100e09592 = bRam0000000100e09572 ^ 0x4a;
    bRam0000000100e09593 = bRam0000000100e09573 ^ 0x9d;
    bRam0000000100e09594 = bRam0000000100e09574 ^ 0x90;
    bRam0000000100e09595 = bRam0000000100e09575 ^ 0xda;
    bRam0000000100e09596 = bRam0000000100e09576 ^ 0xb4;
    bRam0000000100e09660 = bRam0000000100e09640 ^ 0x10;
    bRam0000000100e09661 = bRam0000000100e09641 ^ 0x5d;
    bRam0000000100e09662 = bRam0000000100e09642 ^ 0xce;
    cRam0000000100e09663 = bRam0000000100e09643 + (bRam0000000100e09643 & 0x6c) * -2 + -0x14;
    cRam0000000100e09664 = bRam0000000100e09644 + (bRam0000000100e09644 & 0x48) * -2 + 'H';
    bRam0000000100e09665 = bRam0000000100e09645 ^ 0x96;
    bRam0000000100e09666 = bRam0000000100e09646 ^ 0xa6;
    bRam0000000100e09667 = bRam0000000100e09647 ^ 6;
    bRam0000000100e09668 = bRam0000000100e09648 ^ 0xa1;
    bRam0000000100e09669 = bRam0000000100e09649 ^ 0x4d;
    bRam0000000100e0966a = bRam0000000100e0964a ^ 0x7d;
    cRam0000000100e0966b = bRam0000000100e0964b + (bRam0000000100e0964b & 0x4d) * -2 + 'M';
    cRam0000000100e0966c = bRam0000000100e0964c + (bRam0000000100e0964c & 0xfb) * -2 + -5;
    bRam0000000100e0966d = bRam0000000100e0964d ^ 10;
    bRam0000000100e0966e = bRam0000000100e0964e ^ 0x5b;
    bRam0000000100e0966f = bRam0000000100e0964f ^ 0xa5;
    cRam0000000100e09670 = bRam0000000100e09650 + (bRam0000000100e09650 & 0x25) * -2 + '%';
    bRam0000000100e09671 = bRam0000000100e09651 ^ 0xa8;
    bRam0000000100e09672 = bRam0000000100e09652 ^ 0x5d;
    bRam0000000100e09673 = bRam0000000100e09653 ^ 0x55;
    bRam0000000100e09674 = bRam0000000100e09654 ^ 0xc1;
    bRam0000000100e09675 = bRam0000000100e09655 ^ 7;
    bRam0000000100e09676 = bRam0000000100e09656 ^ 0xf5;
    bRam0000000100e09730 = bRam0000000100e09700 ^ 0x77;
    bRam0000000100e09731 = bRam0000000100e09701 ^ 0x31;
    bRam0000000100e09732 = bRam0000000100e09702 ^ 0xe0;
    bRam0000000100e09733 = bRam0000000100e09703 ^ 0x51;
    bRam0000000100e09734 = bRam0000000100e09704 ^ 0xd;
    bRam0000000100e09735 = bRam0000000100e09705 ^ 0x1d;
    cRam0000000100e09736 = bRam0000000100e09706 + (bRam0000000100e09706 & 0x5c) * -2 + -0x24;
    bRam0000000100e09737 = bRam0000000100e09707 ^ 0x45;
    bRam0000000100e09738 = bRam0000000100e09708 ^ 0x48;
    bRam0000000100e09739 = bRam0000000100e09709 ^ 0x20;
    bRam0000000100e0973a = bRam0000000100e0970a ^ 0x56;
    bRam0000000100e0973b = bRam0000000100e0970b ^ 0x85;
    bRam0000000100e0973c = bRam0000000100e0970c ^ 0x56;
    cRam0000000100e0973d = bRam0000000100e0970d + (bRam0000000100e0970d & 0x26) * -2 + '&';
    uRam0000000100e0973e =
         CONCAT17((byte)((ulong)uRam0000000100e0970e >> 0x38) ^
                  (byte)((ulong)_UNK_10099b5f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0970e >> 0x30) ^
                           (byte)((ulong)_UNK_10099b5f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0970e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b5f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0970e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b5f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0970e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b5f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0970e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b5f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0970e >> 8) ^
                                                  (byte)((ulong)_UNK_10099b5f8 >> 8),
                                                  (byte)uRam0000000100e0970e ^ (byte)_UNK_10099b5f8)
                                                  ))))));
    bRam0000000100e09746 = bRam0000000100e09716 ^ 0xd4;
    bRam0000000100e09747 = bRam0000000100e09717 ^ 199;
    bRam0000000100e09748 = bRam0000000100e09718 ^ 0xbf;
    bRam0000000100e09749 = bRam0000000100e09719 ^ 4;
    cRam0000000100e0974a = bRam0000000100e0971a + (bRam0000000100e0971a & 0x3d) * -2 + '=';
    bRam0000000100e0974b = bRam0000000100e0971b ^ 0xc5;
    bRam0000000100e0974c = bRam0000000100e0971c ^ 0xdf;
    uRam0000000100e0974d = uRam0000000100e0971d;
    cRam0000000100e0974e = bRam0000000100e0971e + (bRam0000000100e0971e & 0x60) * -2 + '`';
    bRam0000000100e0974f = bRam0000000100e0971f ^ 0x24;
    cRam0000000100e09750 = bRam0000000100e09720 + (bRam0000000100e09720 & 0xdd) * -2 + ']';
    bRam0000000100e09751 = bRam0000000100e09721 ^ 0x85;
    bRam0000000100e09752 = bRam0000000100e09722 ^ 0xcd;
    bRam0000000100e09753 = bRam0000000100e09723 ^ 0x55;
    bRam0000000100e09754 = bRam0000000100e09724 ^ 0x97;
    bRam0000000100e09755 = bRam0000000100e09725 ^ 2;
    bRam0000000100e09756 = bRam0000000100e09726 ^ 10;
    bRam0000000100e09757 = bRam0000000100e09727 ^ 0xa9;
    bRam0000000100e09631 = bRam0000000100e09622 ^ 0xb5;
    bRam0000000100e09632 = bRam0000000100e09623 ^ 0x98;
    bRam0000000100e09633 = bRam0000000100e09624 ^ 0xb8;
    bRam0000000100e09634 = bRam0000000100e09625 ^ 0x26;
    bRam0000000100e09635 = bRam0000000100e09626 ^ 0x6e;
    cRam0000000100e09636 = bRam0000000100e09627 + (bRam0000000100e09627 & 0x40) * '\x02' + '@';
    bRam0000000100e09637 = bRam0000000100e09628 ^ 0xf3;
    bRam0000000100e09638 = bRam0000000100e09629 ^ 0x43;
    bRam0000000100e09639 = bRam0000000100e0962a ^ 0x1e;
    bRam0000000100e0963a = bRam0000000100e0962b ^ 0x68;
    cRam0000000100e0963b = bRam0000000100e0962c + (bRam0000000100e0962c & 0xe3) * -2 + -0x1d;
    bRam0000000100e0963c = bRam0000000100e0962d ^ 99;
    bRam0000000100e0963d = bRam0000000100e0962e ^ 0x87;
    bRam0000000100e0963e = bRam0000000100e0962f ^ 0x4b;
    bRam0000000100e0963f = bRam0000000100e09630 ^ 0x5e;
    bRam0000000100e0961b = bRam0000000100e09614 ^ 0xbc;
    bRam0000000100e0961c = bRam0000000100e09615 ^ 0x9b;
    bRam0000000100e0961d = bRam0000000100e09616 ^ 0x6d;
    bRam0000000100e0961e = bRam0000000100e09617 ^ 0x6b;
    bRam0000000100e0961f = bRam0000000100e09618 ^ 0x5c;
    bRam0000000100e09620 = bRam0000000100e09619 ^ 0x56;
    bRam0000000100e09621 = bRam0000000100e0961a ^ 100;
    cRam0000000100e095f0 = bRam0000000100e095c0 + (bRam0000000100e095c0 & 0x5e) * -2 + '^';
    bRam0000000100e095f1 = bRam0000000100e095c1 ^ 0x57;
    cRam0000000100e095f2 = bRam0000000100e095c2 + (bRam0000000100e095c2 & 0x1a) * -2 + '\x1a';
    cRam0000000100e095f3 = bRam0000000100e095c3 + (bRam0000000100e095c3 & 0xf) * -2 + '\x0f';
    bRam0000000100e095f4 = bRam0000000100e095c4 ^ 0x9b;
    bRam0000000100e095f5 = bRam0000000100e095c5 ^ 0xfd;
    cRam0000000100e095f6 = bRam0000000100e095c6 + (bRam0000000100e095c6 & 0x26) * -2 + -0x5a;
    bRam0000000100e095f7 = bRam0000000100e095c7 ^ 0x71;
    bRam0000000100e095f8 = bRam0000000100e095c8 ^ 0x90;
    cRam0000000100e095f9 = bRam0000000100e095c9 + (bRam0000000100e095c9 & 0x48) * -2 + 'H';
    bRam0000000100e095fa = bRam0000000100e095ca ^ 0x82;
    bRam0000000100e095fb = bRam0000000100e095cb ^ 0xcf;
    bRam0000000100e095fc = bRam0000000100e095cc ^ 0x58;
    cRam0000000100e095fd = bRam0000000100e095cd + (bRam0000000100e095cd & 1) * -2 + '\x01';
    uRam0000000100e095fe =
         CONCAT17((byte)((ulong)uRam0000000100e095ce >> 0x38) ^
                  (byte)((ulong)_UNK_10099b618 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e095ce >> 0x30) ^
                           (byte)((ulong)_UNK_10099b618 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e095ce >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b618 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e095ce >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b618 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e095ce >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b618 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e095ce >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b618 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e095ce >> 8) ^
                                                  (byte)((ulong)_UNK_10099b618 >> 8),
                                                  (byte)uRam0000000100e095ce ^ (byte)_UNK_10099b618)
                                                  ))))));
    bRam0000000100e09606 = bRam0000000100e095d6 ^ 0x98;
    cRam0000000100e09607 = bRam0000000100e095d7 + (bRam0000000100e095d7 & 0x49) * -2 + -0x37;
    bRam0000000100e09608 = bRam0000000100e095d8 ^ 0x93;
    bRam0000000100e09609 = bRam0000000100e095d9 ^ 0xfb;
    bRam0000000100e0960a = bRam0000000100e095da ^ 9;
    bRam0000000100e0960b = bRam0000000100e095db ^ 0xcb;
    bRam0000000100e0960c = bRam0000000100e095dc ^ 0x5c;
    bRam0000000100e0960d = bRam0000000100e095dd ^ 0x74;
    bRam0000000100e0960e = bRam0000000100e095de ^ 0xa1;
    cRam0000000100e0960f = bRam0000000100e095df + (bRam0000000100e095df & 0x44) * -2 + -0x3c;
    bRam0000000100e09610 = bRam0000000100e095e0 ^ 0x9e;
    bRam0000000100e09611 = bRam0000000100e095e1 ^ 0x4e;
    bRam0000000100e09612 = bRam0000000100e095e2 ^ 0x43;
    bRam0000000100e09613 = bRam0000000100e095e3 ^ 0xb2;
    bRam0000000100e096d0 = bRam0000000100e096a0 ^ 0xee;
    bRam0000000100e096d1 = bRam0000000100e096a1 ^ 0xf;
    cRam0000000100e096d2 = bRam0000000100e096a2 + (bRam0000000100e096a2 & 0xdd) * -2 + ']';
    uRam0000000100e096d3 =
         CONCAT17((byte)((ulong)uRam0000000100e096a3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b660 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e096a3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b660 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e096a3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b660 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e096a3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b660 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e096a3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b660 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e096a3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b660 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e096a3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b660 >> 8),
                                                  (byte)uRam0000000100e096a3 ^ (byte)_UNK_10099b660)
                                                  ))))));
    uRam0000000100e096db =
         CONCAT17((byte)((ulong)uRam0000000100e096ab >> 0x38) ^
                  (byte)((ulong)_UNK_10099b668 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e096ab >> 0x30) ^
                           (byte)((ulong)_UNK_10099b668 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e096ab >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b668 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e096ab >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b668 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e096ab >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b668 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e096ab >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b668 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e096ab >> 8) ^
                                                  (byte)((ulong)_UNK_10099b668 >> 8),
                                                  (byte)uRam0000000100e096ab ^ (byte)_UNK_10099b668)
                                                  ))))));
    bRam0000000100e096e3 = bRam0000000100e096b3 ^ 0x20;
    bRam0000000100e096e4 = bRam0000000100e096b4 ^ 0x4a;
    bRam0000000100e096e5 = bRam0000000100e096b5 ^ 0xa4;
    bRam0000000100e096e6 = bRam0000000100e096b6 ^ 0xda;
    cRam0000000100e096e7 = bRam0000000100e096b7 + (bRam0000000100e096b7 & 0x34) * -2 + -0x4c;
    bRam0000000100e096e8 = bRam0000000100e096b8 ^ 0x60;
    bRam0000000100e096e9 = bRam0000000100e096b9 ^ 0xe9;
    bRam0000000100e096ea = bRam0000000100e096ba ^ 0xfe;
    cRam0000000100e096eb = cRam0000000100e096bb - (cRam0000000100e096bb << 1 | 2U);
    bRam0000000100e096ec = bRam0000000100e096bc ^ 0xb4;
    bRam0000000100e096ed = bRam0000000100e096bd ^ 0xed;
    cRam0000000100e096ee = bRam0000000100e096be + (bRam0000000100e096be & 0xee) * -2 + 'n';
    bRam0000000100e096ef = bRam0000000100e096bf ^ 0x79;
    bRam0000000100e096f0 = bRam0000000100e096c0 ^ 0xda;
    bRam0000000100e096f1 = bRam0000000100e096c1 ^ 0xdd;
    bRam0000000100e096f2 = bRam0000000100e096c2 ^ 0xe8;
    cRam0000000100e096f3 = bRam0000000100e096c3 + (bRam0000000100e096c3 & 0x17) * -2 + -0x69;
    bRam0000000100e096f4 = bRam0000000100e096c4 ^ 0xfa;
    bRam0000000100e096f5 = bRam0000000100e096c5 ^ 0x75;
    bRam0000000100e096f6 = bRam0000000100e096c6 ^ 0x46;
    cRam0000000100e096f7 = bRam0000000100e096c7 + (bRam0000000100e096c7 & 0xcf) * -2 + -0x31;
    cRam0000000100e096f8 = bRam0000000100e096c8 + (bRam0000000100e096c8 & 0x25) * -2 + -0x5b;
    bRam0000000100e096f9 = bRam0000000100e096c9 ^ 0xfc;
    bRam0000000100e096fa = bRam0000000100e096ca ^ 6;
    bRam0000000100e096fb = bRam0000000100e096cb ^ 0xf4;
    bRam0000000100e096fc = bRam0000000100e096cc ^ 0x21;
    bRam0000000100e096fd = bRam0000000100e096cd ^ 0x4d;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95d6c = 1;
                    /* WARNING: Switch is manually overridden */
  uStack_78 = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010094ee40(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010076138c(uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = func_0x000100950b20(uVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 == 0) {
  case false:
    uVar1 = extraout_x1;
    lVar4 = lVar3;
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uStack_e0 = 0x100e097e0;
    uStack_d8 = 0x100e09820;
    uStack_c0 = 0x100e09800;
    uStack_b8 = 0x100e09840;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uStack_b0 = *(undefined8 *)PTR__kCFBooleanTrue_100afc858;
    uStack_d0 = 0x100e09860;
    uStack_c8 = 0x100e09880;
                    /* WARNING: Switch is manually overridden */
    uStack_f0 = 0x100e09800;
    uStack_e8 = 0x100e098a0;
    func_0x000100939140(uRam0000000100c713e8,extraout_x1,&uStack_f0,2);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    uStack_a8 = auVar6._0_8_;
    func_0x000100940a20(uRam0000000100c71458,auVar6._8_8_,&uStack_c0,&uStack_e0,4);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar4 = func_0x000100950b20(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
    _objc_release(auVar6._0_8_);
    uVar1 = extraout_x1_00;
  }
                    /* WARNING: Switch is manually overridden */
  lStack_98 = lVar4;
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lStack_98 = func_0x000100951360(uRam0000000100c71440);
    _objc_release(lVar4);
                    /* WARNING: Switch is manually overridden */
    uVar1 = extraout_x1_02;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  func_0x000100951cc0(lStack_98,uVar1,0x100e098c0);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  lStack_a0 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lStack_a0 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lStack_a0 != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      auVar6 = func_0x00010093c700(uRam0000000100c71448);
                    /* WARNING: Switch is manually overridden */
      uVar5 = func_0x00010094ba40(lStack_a0,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010070f524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e0a430))(1);
      return;
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100951cc0(lStack_98,auVar6._8_8_,0x100e098e0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    lVar3 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x000100951cc0(lStack_98,auVar6._8_8_,0x100e09900);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      lVar4 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar4 != 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        auVar6 = func_0x00010093c700(uRam0000000100c71410);
                    /* WARNING: Switch is manually overridden */
        uVar5 = func_0x00010094ba40(lVar4,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010070f730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e0a5d0))(0);
        return;
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      auVar6 = func_0x00010093c700(uRam0000000100c71410);
                    /* WARNING: Switch is manually overridden */
      uVar5 = func_0x00010094ba40(lVar3,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010070f660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e0a500))();
      return;
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    auVar6 = func_0x00010093c700(uRam0000000100c71410);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar5 = func_0x00010094ba40(lStack_a0,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010070f4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e0a350))();
    return;
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100968700(lStack_98,auVar6._8_8_,0x100e097c0,0x100e098c0);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100962b60(uStack_78,extraout_x1_03,lStack_98);
                    /* WARNING: Switch is manually overridden */
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100938f00(uStack_78);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar6._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_70 = func_0x00010093e380(uVar1,auVar6._8_8_,&uStack_130,auStack_1b0,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_90 = auStack_1b0;
  uStack_80 = uVar1;
                    /* WARNING: Switch is manually overridden */
  switch(uStack_70 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
    lStack_88 = *plStack_120;
    break;
  case true:
override_jmp_10070f990_case_1:
    lVar3 = lStack_a0;
    _objc_release(uStack_80);
    _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
    _objc_release(lStack_98);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    while (*(long *)PTR____stack_chk_guard_100afc6e8 != lStack_68) {
      uVar1 = ___stack_chk_fail();
      _objc_release(uVar1);
      _objc_end_catch();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    return;
  }
override_jmp_10070fa84_case_0:
  do {
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_120 == lStack_88) * 8 + 0x100e0a7e0)) {
    case 0x10070f9ec:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uStack_80);
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar1 = *(undefined8 *)(lStack_128 + uVar5 * 8);
    func_0x00010093fe00(uStack_78);
    auVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100962b60(uVar1,auVar6._8_8_,auVar6._0_8_);
    _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar5 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 < uStack_70) {
    case true:
      goto override_jmp_10070fa84_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    uStack_70 = func_0x00010093e380(uStack_80,extraout_x1_01,&uStack_130,puStack_90,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(uStack_70 == 0) {
    case true:
      goto override_jmp_10070f990_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setupArcho]
 * Entry: 0x10071075c; original ABI: B16@0:8
 * Original instructions in modeled body: 741; unresolved jumps: 2
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007107b0 */
/* WARNING: Switch with 1 destination removed at 0x000100710810 */
/* WARNING: Switch with 1 destination removed at 0x00010071081c */
/* WARNING: Switch with 1 destination removed at 0x00010071082c */
/* WARNING: Switch with 1 destination removed at 0x000100710838 */
/* WARNING: Switch with 1 destination removed at 0x000100710864 */
/* WARNING: Switch with 1 destination removed at 0x000100710870 */
/* WARNING: Switch with 1 destination removed at 0x0001007108d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007108f4 */
/* WARNING: Switch with 1 destination removed at 0x000100710918 */
/* WARNING: Switch with 1 destination removed at 0x000100710924 */
/* WARNING: Switch with 1 destination removed at 0x000100710930 */
/* WARNING: Switch with 1 destination removed at 0x000100710940 */
/* WARNING: Switch with 1 destination removed at 0x000100710954 */
/* WARNING: Switch with 1 destination removed at 0x000100710978 */
/* WARNING: Switch with 1 destination removed at 0x0001007109a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007109b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007109cc */
/* WARNING: Switch with 1 destination removed at 0x0001007109d8 */
/* WARNING: Switch with 1 destination removed at 0x000100710a08 */
/* WARNING: Switch with 1 destination removed at 0x000100710a14 */
/* WARNING: Switch with 1 destination removed at 0x000100711068 */
/* WARNING: Switch with 1 destination removed at 0x000100711094 */
/* WARNING: Switch with 1 destination removed at 0x0001007110a0 */
/* WARNING: Switch with 1 destination removed at 0x000100711114 */
/* WARNING: Switch with 1 destination removed at 0x000100711140 */
/* WARNING: Switch with 1 destination removed at 0x000100711168 */
/* WARNING: Switch with 1 destination removed at 0x000100711890 */
/* WARNING: Switch with 1 destination removed at 0x0001007118ac */
/* WARNING: Switch with 1 destination removed at 0x0001007118cc */
/* WARNING: Switch with 1 destination removed at 0x0001007118e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007118f4 */
/* WARNING: Switch with 1 destination removed at 0x000100711904 */
/* WARNING: Switch with 1 destination removed at 0x000100711910 */
/* WARNING: Switch with 1 destination removed at 0x00010071191c */
/* WARNING: Switch with 1 destination removed at 0x000100711938 */
/* WARNING: Switch with 1 destination removed at 0x000100711944 */
/* WARNING: Switch with 1 destination removed at 0x000100711954 */
/* WARNING: Switch with 1 destination removed at 0x000100711964 */
/* WARNING: Switch with 1 destination removed at 0x000100711970 */
/* WARNING: Switch with 1 destination removed at 0x000100711984 */
/* WARNING: Switch with 1 destination removed at 0x000100711a74 */
/* WARNING: Switch with 1 destination removed at 0x000100711a84 */
/* WARNING: Switch with 1 destination removed at 0x000100711a94 */
/* WARNING: Switch with 1 destination removed at 0x000100711ac0 */
/* WARNING: Switch with 1 destination removed at 0x000100711adc */
/* WARNING: Switch with 1 destination removed at 0x000100711aec */
/* WARNING: Switch with 1 destination removed at 0x000100711b08 */
/* WARNING: Switch with 1 destination removed at 0x000100711b30 */
/* WARNING: Switch with 1 destination removed at 0x000100711b5c */
/* WARNING: Switch with 1 destination removed at 0x000100711b6c */
/* WARNING: Switch with 1 destination removed at 0x000100711b78 */
/* WARNING: Switch with 1 destination removed at 0x000100711bac */
/* WARNING: Switch with 1 destination removed at 0x000100711bd8 */
/* WARNING: Switch with 1 destination removed at 0x000100711be8 */
/* WARNING: Switch with 1 destination removed at 0x000100711c04 */
/* WARNING: Switch with 1 destination removed at 0x000100711c10 */
/* WARNING: Switch with 1 destination removed at 0x000100711c44 */
/* WARNING: Switch with 1 destination removed at 0x000100711c50 */
/* WARNING: Switch with 1 destination removed at 0x000100711c8c */
/* WARNING: Switch with 1 destination removed at 0x000100711cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100711cc8 */
/* WARNING: Switch with 1 destination removed at 0x000100711cd4 */
/* WARNING: Switch with 1 destination removed at 0x000100711d04 */
/* WARNING: Switch with 1 destination removed at 0x000100711d10 */
/* WARNING: Switch with 1 destination removed at 0x000100711d2c */
/* WARNING: Switch with 1 destination removed at 0x000100711d38 */
/* WARNING: Switch with 1 destination removed at 0x000100711d44 */
/* WARNING: Switch with 1 destination removed at 0x000100711d64 */
/* WARNING: Switch with 1 destination removed at 0x000100711d80 */
/* WARNING: Switch with 1 destination removed at 0x000100711d8c */
/* WARNING: Switch with 1 destination removed at 0x000100711da8 */
/* WARNING: Switch with 1 destination removed at 0x000100711dbc */
/* WARNING: Switch with 1 destination removed at 0x000100711dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100711dfc */
/* WARNING: Switch with 1 destination removed at 0x000100711e08 */
/* WARNING: Switch with 1 destination removed at 0x000100711fb4 */
/* WARNING: Switch with 1 destination removed at 0x000100711fec */
/* WARNING: Switch with 1 destination removed at 0x000100711ff8 */
/* WARNING: Switch with 1 destination removed at 0x000100712014 */
/* WARNING: Switch with 1 destination removed at 0x000100712078 */
/* WARNING: Switch with 1 destination removed at 0x0001007120cc */
/* WARNING: Switch with 1 destination removed at 0x00010071214c */
/* WARNING: Switch with 1 destination removed at 0x0001007121e8 */
/* WARNING: Switch with 1 destination removed at 0x000100712204 */
/* WARNING: Switch with 1 destination removed at 0x000100712230 */
/* WARNING: Switch with 1 destination removed at 0x00010071224c */
/* WARNING: Switch with 1 destination removed at 0x000100712268 */

undefined8 Recovered_YYYMachO_m03041(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong unaff_x26;
  long lVar14;
  undefined1 auVar15 [16];
  undefined8 auStack_1a0 [2];
  long alStack_190 [2];
  undefined1 auStack_180 [192];
  long *plStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar8 = auStack_180;
                    /* WARNING: Switch is manually overridden */
  puVar12 = auStack_1a0;
  uVar3 = func_0x000100959fa0(param_1,param_2,0);
  lVar5 = lRam0000000100c73070;
  uVar13 = (ulong)(uVar3 == 0xbebafeca);
  uStack_80 = param_1;
                    /* WARNING: Switch is manually overridden */
  switch(uVar3 == 0xcafebabe || uVar3 == 0xbebafeca) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch((uVar3 & 0xfeffffff) == 0xcefaedfe) {
    case false:
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      uVar13 = 1;
                    /* WARNING: Switch is manually overridden */
    }
    func_0x00010094ee20(param_1);
    auVar15 = _objc_retainAutoreleasedReturnValue();
    lVar5 = func_0x00010097acc0(auVar15._0_8_,auVar15._8_8_,0,8);
    _objc_release(auVar15._0_8_);
    uStack_98 = uVar13;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar13) {
    case 1:
                    /* WARNING: Switch is manually overridden */
      _swap_fat_header(lVar5,1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    func_0x000100939020(uRam0000000100c71378);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x000100939020(uRam0000000100c71378);
    auVar15 = _objc_retainAutoreleasedReturnValue();
    puStack_b8 = auVar15._0_8_;
    plStack_c0 = alStack_190;
    lStack_88 = lVar7;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100964180(param_1,auVar15._8_8_,lVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lStack_90 = lVar5;
                    /* WARNING: Switch is manually overridden */
    switch(10 < *(uint *)(lVar5 + 4)) {
    case false:
      unaff_x26 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(int *)(lVar5 + 4) != 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x00010094ee20(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uStack_78 = 8;
        func_0x00010097acc0(auVar15._0_8_,auVar15._8_8_,8,0x14);
        _objc_release(auVar15._0_8_);
                    /* WARNING: Could not recover jumptable at 0x000100710a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(uStack_98 * 8 + 0x100e0aba0))();
        return uVar11;
      }
      iVar4 = 2;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uRam0000000100e0af28) {
      case 0x1007110c0:
        func_0x000100964140(param_1,extraout_x1,lStack_88);
        func_0x0001009601c0(param_1,extraout_x1_00,puStack_b8);
        uVar13 = func_0x0001009765c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001007110ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)((uVar13 & 0xffffffff) * 8 + 0x100e0af30))();
        return uVar11;
      }
      break;
    case true:
      iVar4 = 1;
                    /* WARNING: Switch is manually overridden */
    }
    uVar11 = 0;
    lVar7 = lStack_88;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_100711114_case_0;
  }
  auVar15 = func_0x000100951360(lRam0000000100c73070);
  uVar11 = auVar15._0_8_;
  func_0x000100945600(param_1,auVar15._8_8_,0);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  func_0x000100966e40(uVar11,auVar15._8_8_,auVar15._0_8_);
  _objc_release(auVar15._0_8_);
  func_0x00010094ed20(uVar11);
  lVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
  lVar9 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar7 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010094ed20(uVar11);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    iVar4 = func_0x000100943be0(lVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    unaff_x26 = 0;
    lVar14 = 0;
    lVar9 = 0;
    uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(iVar4 != 2) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x00010094ed20(uVar11);
      lVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      iVar4 = func_0x000100943be0(lVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      lVar14 = 0;
      lVar9 = 0;
      uVar10 = 0;
      unaff_x26 = 1;
                    /* WARNING: Switch is manually overridden */
      switch(iVar4 != 6) {
      case true:
        func_0x00010094ed20(uVar11);
        puVar8 = (undefined1 *)_objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        iVar4 = func_0x000100943be0();
        lVar9 = 0;
        uVar10 = 0;
        unaff_x26 = 1;
        lVar14 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(iVar4 != 7) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x00010094ed20(uVar11);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          iVar4 = func_0x000100943be0(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          uVar10 = (ulong)(iVar4 != 8);
          unaff_x26 = 1;
          lVar14 = 1;
          lVar9 = 1;
                    /* WARNING: Switch is manually overridden */
        }
      }
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar9 * 8 + 0x100e0b5f0)) {
    case 0x100711cfc:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    uVar13 = uStack_80;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar14 * 8 + 0x100e0b650)) {
    case 0x100711d5c:
                    /* WARNING: Switch is manually overridden */
      _objc_release(puVar8);
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(unaff_x26 * 8 + 0x100e0b690)) {
    case 0x100711da0:
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar7);
    }
    _objc_release(lVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(uVar10 * 8 + 0x100e0b6d0)) {
    case 0x100711dd0:
                    /* WARNING: Switch is manually overridden */
      func_0x000100968740(uVar11,extraout_x1_04,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010094ee20(uVar13);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x000100966e80(uVar11,auVar15._8_8_,auVar15._0_8_);
      _objc_release(auVar15._0_8_);
      func_0x00010093ff20(uRam0000000100c71648);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x00010094ee40(uVar13);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x000100939580(uVar6,auVar15._8_8_,auVar15._0_8_,0);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar15._0_8_);
      _objc_release(uVar6);
      auVar15 = func_0x000100943a00(lVar5);
      func_0x000100966700(uVar11,auVar15._8_8_,auVar15._0_8_);
      auVar15 = func_0x00010094d6e0(uVar11);
      func_0x000100961c00(uVar11,auVar15._8_8_,auVar15._0_8_);
      func_0x0001009707c0(uVar11);
      auStack_1a0[0] = uVar11;
      func_0x000100939140(puRam0000000100c713e8,extraout_x1_03,puVar12,1);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      lVar7 = auVar15._0_8_;
                    /* WARNING: Switch is manually overridden */
      func_0x0001009601c0(uVar13,auVar15._8_8_,lVar7);
      _objc_release(lVar7);
      _objc_release(lVar5);
      lVar9 = 1;
      break;
    case 0x100711fe0:
      lVar9 = 0;
                    /* WARNING: Switch is manually overridden */
    }
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
  uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar9 * 8 + 0x100e0b750)) {
  case 0x100711160:
    goto override_jmp_100711158_case_1;
  }
override_jmp_100711158_case_0:
  uVar11 = 1;
  goto override_jmp_100711158_case_1;
override_jmp_100711114_case_0:
  do {
    puVar12 = puStack_b8;
    _objc_release(puStack_b8);
    _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(iVar4 == 0) * 8 + 0x100e0b440)) {
    case 0x10071115c:
      goto override_jmp_100711158_case_0;
    case 0x100711160:
override_jmp_100711158_case_1:
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return uVar11;
      }
      iVar4 = ___stack_chk_fail();
      lVar9 = 0;
      bVar2 = false;
                    /* WARNING: Switch is manually overridden */
      switch(iVar4 != 7) {
      case true:
        func_0x00010094ed20(lVar5);
        unaff_x26 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        iVar4 = func_0x000100943be0(unaff_x26);
                    /* WARNING: Switch is manually overridden */
        bVar2 = iVar4 != 8;
        lVar9 = 1;
      }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)(lVar9 * 8 + 0x100e0b2e0)) {
      case 0x1007118e0:
        _objc_release(unaff_x26);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(puVar8);
      plVar1 = plStack_c0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar7);
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar11);
      unaff_x26 = uStack_80;
                    /* WARNING: Switch is manually overridden */
      switch(bVar2) {
      case false:
        func_0x000100968740(lVar5,extraout_x1_01,0);
        func_0x00010094ee20(unaff_x26);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100966e80(lVar5,auVar15._8_8_,auVar15._0_8_);
        _objc_release(auVar15._0_8_);
        func_0x00010093ff20(uRam0000000100c71648);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        func_0x00010094ee40(unaff_x26);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100939580(uVar11,auVar15._8_8_,auVar15._0_8_,0);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        _objc_release(uVar11);
        auVar15 = func_0x000100943a00(uVar6);
        func_0x000100966700(lVar5,auVar15._8_8_,auVar15._0_8_);
        auVar15 = func_0x00010094d6e0(lVar5);
        func_0x000100961c00(lVar5,auVar15._8_8_,auVar15._0_8_);
        func_0x0001009707c0(lVar5);
        puVar8 = puRam0000000100c713e8;
        *plVar1 = lVar5;
        uVar11 = 1;
        func_0x000100939140(puRam0000000100c713e8,extraout_x1_02,plVar1,1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x0001009601c0(unaff_x26,auVar15._8_8_,auVar15._0_8_);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
      }
      lVar7 = lStack_88;
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar5);
      _objc_release(puVar12);
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar13);
      iVar4 = 1;
                    /* WARNING: Switch is manually overridden */
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO readMagicWithOffset:]
 * Entry: 0x10071226c; original ABI: I24@0:8Q16
 * Original instructions in modeled body: 42; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071229c */
/* WARNING: Switch with 1 destination removed at 0x0001007122ac */
/* WARNING: Switch with 1 destination removed at 0x0001007122dc */
/* WARNING: Switch with 1 destination removed at 0x000100712344 */

undefined8 Recovered_YYYMachO_m03042(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  func_0x00010094ee20();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095e5c0(auVar3._0_8_,auVar3._8_8_,param_3);
  _objc_release(auVar3._0_8_);
  func_0x00010094ee20(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010097ad00(uVar2);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar1;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO getMachHeaderInFatArch:]
 * Entry: 0x100712348; original ABI: @24@0:8@16
 * Original instructions in modeled body: 317; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100712374 */
/* WARNING: Switch with 1 destination removed at 0x000100712390 */
/* WARNING: Switch with 1 destination removed at 0x0001007123bc */
/* WARNING: Switch with 1 destination removed at 0x0001007123c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007123d4 */
/* WARNING: Switch with 1 destination removed at 0x000100712408 */
/* WARNING: Switch with 1 destination removed at 0x000100712414 */
/* WARNING: Switch with 1 destination removed at 0x0001007124a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007124c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007124e4 */
/* WARNING: Switch with 1 destination removed at 0x0001007124f4 */
/* WARNING: Switch with 1 destination removed at 0x000100712500 */
/* WARNING: Switch with 1 destination removed at 0x00010071252c */
/* WARNING: Switch with 1 destination removed at 0x000100712554 */
/* WARNING: Switch with 1 destination removed at 0x000100712560 */
/* WARNING: Switch with 1 destination removed at 0x0001007125a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007125d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007125f4 */
/* WARNING: Switch with 1 destination removed at 0x000100712618 */
/* WARNING: Switch with 1 destination removed at 0x000100712624 */
/* WARNING: Switch with 1 destination removed at 0x000100712630 */
/* WARNING: Switch with 1 destination removed at 0x00010071263c */
/* WARNING: Switch with 1 destination removed at 0x00010071264c */
/* WARNING: Switch with 1 destination removed at 0x00010071269c */
/* WARNING: Switch with 1 destination removed at 0x0001007126ac */
/* WARNING: Switch with 1 destination removed at 0x0001007126b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007126c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007126d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007126f4 */
/* WARNING: Switch with 1 destination removed at 0x000100712704 */
/* WARNING: Switch with 1 destination removed at 0x000100712710 */
/* WARNING: Switch with 1 destination removed at 0x000100712734 */
/* WARNING: Switch with 1 destination removed at 0x000100712740 */
/* WARNING: Switch with 1 destination removed at 0x000100712760 */
/* WARNING: Switch with 1 destination removed at 0x000100712780 */
/* WARNING: Switch with 1 destination removed at 0x00010071278c */
/* WARNING: Switch with 1 destination removed at 0x000100712798 */
/* WARNING: Switch with 1 destination removed at 0x0001007127a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007127d0 */
/* WARNING: Switch with 1 destination removed at 0x000100712808 */
/* WARNING: Switch with 1 destination removed at 0x00010071284c */
/* WARNING: Switch with 1 destination removed at 0x000100712878 */
/* WARNING: Switch with 1 destination removed at 0x00010071289c */
/* WARNING: Switch with 1 destination removed at 0x0001007128c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007128dc */

void Recovered_YYYMachO_m03043(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar8 = _objc_retain(param_3);
  uVar4 = auVar8._8_8_;
  lVar2 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
  uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    auVar8 = func_0x0001009434e0(lVar2);
    uVar4 = auVar8._8_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar8._0_8_ != 0) {
    case true:
      auVar8 = func_0x0001009434e0(lVar2);
      uVar4 = auVar8._8_8_;
      uVar6 = *(undefined4 *)(auVar8._0_8_ + 8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
  }
  uVar1 = func_0x000100959fa0(param_1,uVar4,uVar6);
                    /* WARNING: Switch is manually overridden */
  switch(((uVar1 >> 1 == 0x7f76fd67 || (uVar1 == 0xcafebabe || uVar1 == 0xbebafeca)) ||
         uVar1 == 0xcefaedfe) || uVar1 == 0xcffaedfe) {
  case false:
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_1007124a0_case_0;
  case true:
                    /* WARNING: Switch is manually overridden */
    _objc_alloc(uRam0000000100c73078);
    auVar8 = func_0x000100948020();
    uVar4 = auVar8._0_8_;
    func_0x000100968740(uVar4,auVar8._8_8_,uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bVar7 = true;
                    /* WARNING: Switch is manually overridden */
    switch((uVar1 & 0xfeffffff) == 0xcefaedfe) {
    case false:
      bVar7 = uVar1 == 0xbebafeca;
                    /* WARNING: Switch is manually overridden */
    }
  }
  func_0x00010096ce40(uVar4,extraout_x1_02,bVar7);
                    /* WARNING: Switch is manually overridden */
  switch(uVar1 == 0xfeedfacf || uVar1 == 0xcffaedfe) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010094ee20(param_1);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    lVar3 = func_0x00010097acc0(auVar8._0_8_,auVar8._8_8_,uVar6,0x1c);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 == 0) {
    case false:
      uVar5 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(bVar7) {
      case true:
                    /* WARNING: Switch is manually overridden */
        _swap_mach_header(lVar3,0);
        uVar5 = extraout_x1_00;
                    /* WARNING: Switch is manually overridden */
      }
      func_0x000100966e40(uVar4,uVar5,lVar3);
      lVar3 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      lVar3 = 0;
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar3 * 8 + 0x100e0bab0)) {
    case 0x100712758:
override_jmp_100712724_case_0:
                    /* WARNING: Switch is manually overridden */
      uVar5 = _objc_retain(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    func_0x00010094ee20(param_1);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    lVar3 = func_0x00010097acc0(auVar8._0_8_,auVar8._8_8_,uVar6,0x20);
    _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 == 0) {
    case false:
      uVar5 = extraout_x1_01;
                    /* WARNING: Switch is manually overridden */
      switch(bVar7) {
      case true:
        _swap_mach_header_64(lVar3,0);
                    /* WARNING: Switch is manually overridden */
        uVar5 = extraout_x1_03;
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100966e20(uVar4,uVar5,lVar3);
                    /* WARNING: Switch is manually overridden */
      lVar3 = 1;
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      lVar3 = 0;
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar3 * 8 + 0x100e0b9d0)) {
    case 0x100712758:
      goto override_jmp_100712724_case_0;
    }
  }
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
override_jmp_1007124a0_case_0:
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar2);
  _objc_autoreleaseReturnValue(uVar5);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO addCodeSignSpaceLength:]
 * Entry: 0x1007128e0; original ABI: B20@0:8I16
 * Original instructions in modeled body: 888; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100712910 */
/* WARNING: Switch with 1 destination removed at 0x000100712924 */
/* WARNING: Switch with 1 destination removed at 0x000100712938 */
/* WARNING: Switch with 1 destination removed at 0x0001007129fc */
/* WARNING: Switch with 1 destination removed at 0x000100712a24 */
/* WARNING: Switch with 1 destination removed at 0x000100712b0c */
/* WARNING: Switch with 1 destination removed at 0x000100712b1c */
/* WARNING: Switch with 1 destination removed at 0x000100712b2c */
/* WARNING: Switch with 1 destination removed at 0x000100712b88 */
/* WARNING: Switch with 1 destination removed at 0x000100712b94 */
/* WARNING: Switch with 1 destination removed at 0x000100712be4 */
/* WARNING: Switch with 1 destination removed at 0x000100712c1c */
/* WARNING: Switch with 1 destination removed at 0x000100712c28 */
/* WARNING: Switch with 1 destination removed at 0x000100712c40 */
/* WARNING: Switch with 1 destination removed at 0x000100712c50 */
/* WARNING: Switch with 1 destination removed at 0x000100712c8c */
/* WARNING: Switch with 1 destination removed at 0x000100712d4c */
/* WARNING: Switch with 1 destination removed at 0x000100712e10 */
/* WARNING: Switch with 1 destination removed at 0x000100712e1c */
/* WARNING: Switch with 1 destination removed at 0x000100712e38 */
/* WARNING: Switch with 1 destination removed at 0x000100712e44 */
/* WARNING: Switch with 1 destination removed at 0x000100712e94 */
/* WARNING: Switch with 1 destination removed at 0x000100712eb8 */
/* WARNING: Switch with 1 destination removed at 0x000100712ec8 */
/* WARNING: Switch with 1 destination removed at 0x000100712ed4 */
/* WARNING: Switch with 1 destination removed at 0x000100712f00 */
/* WARNING: Switch with 1 destination removed at 0x000100712f10 */
/* WARNING: Switch with 1 destination removed at 0x000100712f44 */
/* WARNING: Switch with 1 destination removed at 0x000100712f78 */
/* WARNING: Switch with 1 destination removed at 0x000100712f84 */
/* WARNING: Switch with 1 destination removed at 0x000100712f9c */
/* WARNING: Switch with 1 destination removed at 0x000100712fc0 */
/* WARNING: Switch with 1 destination removed at 0x000100712fd0 */
/* WARNING: Switch with 1 destination removed at 0x000100712fe4 */
/* WARNING: Switch with 1 destination removed at 0x0001007130e4 */
/* WARNING: Switch with 1 destination removed at 0x0001007130f8 */
/* WARNING: Switch with 1 destination removed at 0x000100713138 */
/* WARNING: Switch with 1 destination removed at 0x00010071316c */
/* WARNING: Switch with 1 destination removed at 0x000100713178 */
/* WARNING: Switch with 1 destination removed at 0x0001007131b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007131dc */
/* WARNING: Switch with 1 destination removed at 0x000100713208 */
/* WARNING: Switch with 1 destination removed at 0x00010071321c */
/* WARNING: Switch with 1 destination removed at 0x000100713278 */
/* WARNING: Switch with 1 destination removed at 0x000100713284 */
/* WARNING: Switch with 1 destination removed at 0x0001007132b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007132c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007132d0 */
/* WARNING: Switch with 1 destination removed at 0x000100713328 */
/* WARNING: Switch with 1 destination removed at 0x000100713338 */
/* WARNING: Switch with 1 destination removed at 0x0001007133a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007133cc */
/* WARNING: Switch with 1 destination removed at 0x000100713400 */
/* WARNING: Switch with 1 destination removed at 0x00010071340c */
/* WARNING: Switch with 1 destination removed at 0x000100713418 */
/* WARNING: Switch with 1 destination removed at 0x000100713444 */
/* WARNING: Switch with 1 destination removed at 0x000100713458 */
/* WARNING: Switch with 1 destination removed at 0x00010071346c */
/* WARNING: Switch with 1 destination removed at 0x000100713478 */
/* WARNING: Switch with 1 destination removed at 0x000100713494 */
/* WARNING: Switch with 1 destination removed at 0x0001007134c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007134d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007134ec */
/* WARNING: Switch with 1 destination removed at 0x000100713578 */
/* WARNING: Switch with 1 destination removed at 0x0001007135e4 */
/* WARNING: Switch with 1 destination removed at 0x000100713600 */
/* WARNING: Switch with 1 destination removed at 0x000100713620 */
/* WARNING: Switch with 1 destination removed at 0x000100713630 */
/* WARNING: Switch with 1 destination removed at 0x000100713680 */
/* WARNING: Switch with 1 destination removed at 0x0001007136a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007136d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007136e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071370c */
/* WARNING: Switch with 1 destination removed at 0x00010071372c */
/* WARNING: Switch with 1 destination removed at 0x000100713738 */
/* WARNING: Switch with 1 destination removed at 0x0001007137a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007137c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007137d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007137e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007137f4 */
/* WARNING: Switch with 1 destination removed at 0x000100713800 */
/* WARNING: Switch with 1 destination removed at 0x00010071391c */
/* WARNING: Switch with 1 destination removed at 0x0001007139a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007139d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007139ec */
/* WARNING: Switch with 1 destination removed at 0x000100713a1c */
/* WARNING: Switch with 1 destination removed at 0x000100713a48 */
/* WARNING: Switch with 1 destination removed at 0x000100713a74 */
/* WARNING: Switch with 1 destination removed at 0x000100713ab4 */

undefined8 Recovered_YYYMachO_m03044(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d70 == 0) {
  case true:
    bRam0000000100e09940 = bRam0000000100e09920 ^ 0x8d;
    bRam0000000100e09941 = bRam0000000100e09921 ^ 199;
    bRam0000000100e09942 = bRam0000000100e09922 ^ 0x1a;
    bRam0000000100e09943 = bRam0000000100e09923 ^ 0xb7;
    cRam0000000100e09944 = bRam0000000100e09924 + (bRam0000000100e09924 & 0x6c) * -2 + -0x14;
    bRam0000000100e09945 = bRam0000000100e09925 ^ 0x3c;
    bRam0000000100e09946 = bRam0000000100e09926 ^ 0xeb;
    bRam0000000100e09947 = bRam0000000100e09927 ^ 0x71;
    bRam0000000100e09948 = bRam0000000100e09928 ^ 0xa4;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e09949 = bRam0000000100e09929 ^ 0x38;
    bRam0000000100e0994a = bRam0000000100e0992a ^ 0xe7;
    bRam0000000100e0994b = bRam0000000100e0992b ^ 0x82;
    cRam0000000100e0994c = bRam0000000100e0992c + (bRam0000000100e0992c & 0x75) * -2 + -0xb;
    bRam0000000100e0994d = bRam0000000100e0992d ^ 0xc0;
    bRam0000000100e0994e = bRam0000000100e0992e ^ 0x81;
    bRam0000000100e0994f = bRam0000000100e0992f ^ 0xc4;
    bRam0000000100e09950 = bRam0000000100e09930 ^ 0x15;
    bRam0000000100e09951 = bRam0000000100e09931 ^ 0x16;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e09952 = bRam0000000100e09932 ^ 0xd8;
    cRam0000000100e09953 = bRam0000000100e09933 + (bRam0000000100e09933 & 0x6d) * -2 + 'm';
    cRam0000000100e09954 = bRam0000000100e09934 + (bRam0000000100e09934 & 1) * -2 + '\x01';
    bRam0000000100e09955 = bRam0000000100e09935 ^ 0xc0;
    bRam0000000100e09956 = bRam0000000100e09936 ^ 0x8f;
    bRam0000000100e09957 = bRam0000000100e09937 ^ 0xfe;
    cRam0000000100e09958 = bRam0000000100e09938 + (bRam0000000100e09938 & 0x10) * -2 + '\x10';
    bRam0000000100e09959 = bRam0000000100e09939 ^ 0xec;
    bRam0000000100e0995a = bRam0000000100e0993a ^ 0x98;
    bRam0000000100e0995b = bRam0000000100e0993b ^ 0xb7;
    bRam0000000100e0995c = bRam0000000100e0993c ^ 0xc5;
    bRam0000000100e0995d = bRam0000000100e0993d ^ 0xad;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95d70 = 1;
  func_0x00010094ee40(param_1);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d160();
  auVar15 = _objc_retainAutoreleasedReturnValue();
  func_0x000100951b00(uRam0000000100c71410,auVar15._8_8_,param_3);
  uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _NSLog(0x100e09960);
  _objc_release(uVar12);
  _objc_release(auVar15._0_8_);
  _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100938f00(param_1);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  uVar5 = func_0x00010093e360();
  _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(1 < uVar5) {
  case false:
    func_0x000100938f00(param_1);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    lVar13 = func_0x00010093e360(uVar11);
    _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar13 == 1) {
    case false:
      uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      func_0x000100938f00(param_1);
      uVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100944120(uVar11);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      iVar4 = func_0x000100934b80(auVar15._0_8_,auVar15._8_8_,param_3);
      _objc_release(auVar15._0_8_);
      _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
      uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(iVar4 == 0) {
      case false:
        func_0x000100938f00(param_1);
        uVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x000100944120(uVar11);
        uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x0001009707c0(uVar12);
        _objc_release(uVar12);
        _objc_release(uVar11);
        uVar11 = 1;
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    return uVar11;
  case true:
    func_0x000100939020(uRam0000000100c71378);
    uVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  do {
                    /* WARNING: Switch is manually overridden */
    func_0x000100938f00(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    uVar8 = func_0x00010093e360();
    _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 < uVar8) {
    case false:
      goto override_jmp_100712eb8_case_0;
    case true:
      func_0x000100938f00(param_1);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar5);
      uVar12 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar15._0_8_);
                    /* WARNING: Switch is manually overridden */
      func_0x0001009434e0(uVar12);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      lVar13 = func_0x0001009434e0();
      uVar2 = *(uint *)(lVar13 + 0xc);
      func_0x0001009434e0(uVar12);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      lVar13 = func_0x0001009434e0();
      uVar3 = *(uint *)(lVar13 + 8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      func_0x000100938f00(param_1);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      uVar8 = func_0x00010093e360();
                    /* WARNING: Switch is manually overridden */
      uVar5 = uVar5 + 1;
      _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
      switch(uVar5 < uVar8) {
      case true:
        func_0x000100938f00(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar5);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        func_0x0001009434e0(uVar6);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        lVar13 = func_0x0001009434e0();
        iVar4 = *(int *)(lVar13 + 8);
        _objc_release(uVar7);
        func_0x000100951b00(uRam0000000100c71410,extraout_x1,
                            iVar4 - ((uVar3 ^ uVar2) + (uVar3 & uVar2) * 2));
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100937000(uVar11,auVar15._8_8_,auVar15._0_8_);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar6);
      }
      _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
  } while( true );
override_jmp_100712eb8_case_0:
                    /* WARNING: Switch is manually overridden */
  uVar5 = 0;
  uVar8 = param_3;
                    /* WARNING: Switch is manually overridden */
  do {
                    /* WARNING: Switch is manually overridden */
    func_0x000100938f00(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    uVar10 = func_0x00010093e360();
    _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
    iVar4 = 5;
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 < uVar10) {
    case false:
override_jmp_1007134b4_case_1:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(iVar4 == 5) * 8 + 0x100e0c070)) {
      case 0x1007136c8:
        uVar12 = 0;
                    /* WARNING: Switch is manually overridden */
        break;
      case 0x1007136d8:
        uVar12 = 1;
                    /* WARNING: Switch is manually overridden */
      }
      _objc_release(uVar11);
      return uVar12;
                    /* WARNING: Switch is manually overridden */
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100938f00(param_1);
      auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar5);
      uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      _objc_release(auVar15._0_8_);
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(uVar5 == 0) * 8 + 0x100e0bd70)) {
      case 0x100712f6c:
        lVar13 = (uVar5 ^ 0xfffffffffffffffe) + (uVar5 & 0x7ffffffffffffffe) * 2 + 1;
        func_0x000100951c40(uVar11,extraout_x1_00,lVar13);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar3 = func_0x000100977c40();
        _objc_release(uVar6);
        func_0x000100938f00(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,lVar13);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        func_0x0001009434e0(uVar7);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        lVar13 = func_0x0001009434e0();
        iVar1 = *(int *)(lVar13 + 0xc);
        func_0x0001009434e0(uVar7);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        lVar13 = func_0x0001009434e0();
        iVar4 = *(int *)(lVar13 + 8);
        _objc_release(uVar9);
        _objc_release(uVar6);
        func_0x0001009434e0(uVar7);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        lVar13 = func_0x0001009434e0();
                    /* WARNING: Switch is manually overridden */
        iVar4 = iVar4 + iVar1;
                    /* WARNING: Switch is manually overridden */
        uVar2 = func_0x000100713ab8(&UNK_100b26e88,*(undefined4 *)(lVar13 + 0xc));
        _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
        iVar1 = (uVar2 & (uVar3 ^ 0xffffffff)) * 2 - (uVar2 ^ uVar3);
                    /* WARNING: Switch is manually overridden */
        uVar6 = extraout_x1_01;
                    /* WARNING: Switch is manually overridden */
        switch(iVar1 != 0) {
        case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(0 < iVar1) {
          case false:
            func_0x00010094ee20(param_1);
            auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
            func_0x00010097ac80(auVar15._0_8_,auVar15._8_8_,iVar4,(long)-iVar1);
            _objc_release(auVar15._0_8_);
            uVar6 = extraout_x1_02;
            break;
          case true:
                    /* WARNING: Switch is manually overridden */
            func_0x00010094ee20(param_1);
            auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            func_0x00010093f540(uRam0000000100c71778,auVar15._8_8_,(long)iVar1);
            auVar14 = _objc_retainAutoreleasedReturnValue();
            func_0x00010097aca0(auVar15._0_8_,auVar14._8_8_,iVar4,auVar14._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            _objc_release(auVar14._0_8_);
            _objc_release(auVar15._0_8_);
            uVar6 = extraout_x1_03;
                    /* WARNING: Switch is manually overridden */
          }
        }
        func_0x000100968740(uVar12,uVar6,uVar2 + iVar4);
        func_0x0001009434e0(uVar12);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        lVar13 = func_0x0001009434e0();
        *(uint *)(lVar13 + 8) = uVar2 + iVar4;
        _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
        uVar8 = param_3 & 0xffffffff;
                    /* WARNING: Switch is manually overridden */
        func_0x0001009434e0(uVar12);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100945600(param_1,auVar15._8_8_,auVar15._0_8_);
        auVar14 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100966e40(uVar12,auVar14._8_8_,auVar14._0_8_);
        _objc_release(auVar14._0_8_);
        _objc_release(auVar15._0_8_);
        func_0x00010094ed20(uVar12);
        lVar13 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar13 == 0) {
        case false:
                    /* WARNING: Switch is manually overridden */
          func_0x0001009707c0(uVar12);
          iVar4 = func_0x000100934b80(uVar12,extraout_x1_04,uVar8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(iVar4 == 0) {
          case false:
            iVar4 = 0;
            lVar13 = 1;
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
            lVar13 = 0;
            iVar4 = 1;
                    /* WARNING: Switch is manually overridden */
          }
          break;
        case true:
          lVar13 = 0;
          iVar4 = 1;
                    /* WARNING: Switch is manually overridden */
        }
        _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)(lVar13 * 8 + 0x100e0c000)) {
        case 0x10071348c:
override_jmp_100713488_case_0:
          func_0x0001009707c0(uVar12);
          iVar4 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case 0x100712f7c:
                    /* WARNING: Switch is manually overridden */
        iVar4 = func_0x000100934b80(uVar12,extraout_x1_00,uVar8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(iVar4 == 0) {
        case false:
          func_0x0001009707c0(uVar12);
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_100713488_case_0;
        case true:
          iVar4 = 1;
                    /* WARNING: Switch is manually overridden */
        }
      }
    }
    _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(iVar4 == 0) * 8 + 0x100e0c030)) {
    case 0x1007134b8:
      uVar5 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      break;
    case 0x1007136a0:
      goto override_jmp_1007134b4_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO reallocCodeSignSpace]
 * Entry: 0x100713aec; original ABI: B16@0:8
 * Original instructions in modeled body: 821; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100713b18 */
/* WARNING: Switch with 1 destination removed at 0x000100713b2c */
/* WARNING: Switch with 1 destination removed at 0x000100713b40 */
/* WARNING: Switch with 1 destination removed at 0x000100713b4c */
/* WARNING: Switch with 1 destination removed at 0x000100713b88 */
/* WARNING: Switch with 1 destination removed at 0x000100713bb8 */
/* WARNING: Switch with 1 destination removed at 0x000100713c94 */
/* WARNING: Switch with 1 destination removed at 0x000100713cc0 */
/* WARNING: Switch with 1 destination removed at 0x000100713ccc */
/* WARNING: Switch with 1 destination removed at 0x000100713cdc */
/* WARNING: Switch with 1 destination removed at 0x000100713d48 */
/* WARNING: Switch with 1 destination removed at 0x000100713d98 */
/* WARNING: Switch with 1 destination removed at 0x000100713da8 */
/* WARNING: Switch with 1 destination removed at 0x000100713dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100713de4 */
/* WARNING: Switch with 1 destination removed at 0x000100713df4 */
/* WARNING: Switch with 1 destination removed at 0x000100713e00 */
/* WARNING: Switch with 1 destination removed at 0x000100713e10 */
/* WARNING: Switch with 1 destination removed at 0x000100713e20 */
/* WARNING: Switch with 1 destination removed at 0x000100713e70 */
/* WARNING: Switch with 1 destination removed at 0x000100713e98 */
/* WARNING: Switch with 1 destination removed at 0x000100713f24 */
/* WARNING: Switch with 1 destination removed at 0x000100713f34 */
/* WARNING: Switch with 1 destination removed at 0x000100713f48 */
/* WARNING: Switch with 1 destination removed at 0x000100713f54 */
/* WARNING: Switch with 1 destination removed at 0x000100713f70 */
/* WARNING: Switch with 1 destination removed at 0x000100713f7c */
/* WARNING: Switch with 1 destination removed at 0x000100713f88 */
/* WARNING: Switch with 1 destination removed at 0x000100713fd8 */
/* WARNING: Switch with 1 destination removed at 0x000100714070 */
/* WARNING: Switch with 1 destination removed at 0x0001007140d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007140ec */
/* WARNING: Switch with 1 destination removed at 0x00010071418c */
/* WARNING: Switch with 1 destination removed at 0x000100714198 */
/* WARNING: Switch with 1 destination removed at 0x0001007141bc */
/* WARNING: Switch with 1 destination removed at 0x0001007141c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007141d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007141e4 */
/* WARNING: Switch with 1 destination removed at 0x000100714210 */
/* WARNING: Switch with 1 destination removed at 0x000100714220 */
/* WARNING: Switch with 1 destination removed at 0x000100714268 */
/* WARNING: Switch with 1 destination removed at 0x000100714274 */
/* WARNING: Switch with 1 destination removed at 0x000100714298 */
/* WARNING: Switch with 1 destination removed at 0x0001007142c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007142d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007142f0 */
/* WARNING: Switch with 1 destination removed at 0x0001007142fc */
/* WARNING: Switch with 1 destination removed at 0x000100714364 */
/* WARNING: Switch with 1 destination removed at 0x000100714388 */
/* WARNING: Switch with 1 destination removed at 0x0001007143ac */
/* WARNING: Switch with 1 destination removed at 0x0001007143d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007143ec */
/* WARNING: Switch with 1 destination removed at 0x0001007143f8 */
/* WARNING: Switch with 1 destination removed at 0x000100714404 */
/* WARNING: Switch with 1 destination removed at 0x000100714418 */
/* WARNING: Switch with 1 destination removed at 0x000100714498 */
/* WARNING: Switch with 1 destination removed at 0x0001007144a8 */
/* WARNING: Switch with 1 destination removed at 0x00010071457c */
/* WARNING: Switch with 1 destination removed at 0x000100714590 */
/* WARNING: Switch with 1 destination removed at 0x0001007145d8 */
/* WARNING: Switch with 1 destination removed at 0x000100714608 */
/* WARNING: Switch with 1 destination removed at 0x000100714614 */
/* WARNING: Switch with 1 destination removed at 0x000100714640 */
/* WARNING: Switch with 1 destination removed at 0x000100714654 */
/* WARNING: Switch with 1 destination removed at 0x000100714660 */
/* WARNING: Switch with 1 destination removed at 0x00010071467c */
/* WARNING: Switch with 1 destination removed at 0x000100714698 */
/* WARNING: Switch with 1 destination removed at 0x0001007146c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007146d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007146e0 */
/* WARNING: Switch with 1 destination removed at 0x000100714794 */
/* WARNING: Switch with 1 destination removed at 0x000100714808 */
/* WARNING: Switch with 1 destination removed at 0x000100714838 */
/* WARNING: Switch with 1 destination removed at 0x000100714878 */
/* WARNING: Switch with 1 destination removed at 0x000100714894 */
/* WARNING: Switch with 1 destination removed at 0x0001007148b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007148d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007148e0 */
/* WARNING: Switch with 1 destination removed at 0x000100714930 */
/* WARNING: Switch with 1 destination removed at 0x000100714958 */
/* WARNING: Switch with 1 destination removed at 0x000100714984 */
/* WARNING: Switch with 1 destination removed at 0x000100714990 */
/* WARNING: Switch with 1 destination removed at 0x0001007149ac */
/* WARNING: Switch with 1 destination removed at 0x0001007149b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007149e0 */
/* WARNING: Switch with 1 destination removed at 0x0001007149ec */
/* WARNING: Switch with 1 destination removed at 0x000100714a18 */
/* WARNING: Switch with 1 destination removed at 0x000100714a28 */
/* WARNING: Switch with 1 destination removed at 0x000100714a78 */
/* WARNING: Switch with 1 destination removed at 0x000100714a84 */
/* WARNING: Switch with 1 destination removed at 0x000100714aac */
/* WARNING: Switch with 1 destination removed at 0x000100714af4 */
/* WARNING: Switch with 1 destination removed at 0x000100714b04 */
/* WARNING: Switch with 1 destination removed at 0x000100714b10 */
/* WARNING: Switch with 1 destination removed at 0x000100714c38 */
/* WARNING: Switch with 1 destination removed at 0x000100714c90 */
/* WARNING: Switch with 1 destination removed at 0x000100714cac */
/* WARNING: Switch with 1 destination removed at 0x000100714cc8 */
/* WARNING: Switch with 1 destination removed at 0x000100714d08 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Recovered_YYYMachO_m03045(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d74 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e099a0 =
         CONCAT17((byte)((ulong)uRam0000000100e09980 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b620 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09980 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b620 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09980 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b620 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09980 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b620 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09980 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b620 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09980 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b620 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09980 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b620 >> 8),
                                                  (byte)uRam0000000100e09980 ^ (byte)_UNK_10099b620)
                                                  ))))));
    bRam0000000100e099a8 = bRam0000000100e09988 ^ 0xd7;
    bRam0000000100e099a9 = bRam0000000100e09989 ^ 0x7f;
    uRam0000000100e099aa =
         CONCAT17((byte)((ulong)uRam0000000100e0998a >> 0x38) ^
                  (byte)((ulong)_UNK_10099b628 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0998a >> 0x30) ^
                           (byte)((ulong)_UNK_10099b628 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0998a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b628 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0998a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b628 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0998a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b628 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0998a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b628 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0998a >> 8) ^
                                                  (byte)((ulong)_UNK_10099b628 >> 8),
                                                  (byte)uRam0000000100e0998a ^ (byte)_UNK_10099b628)
                                                  ))))));
    bRam0000000100e099b2 = bRam0000000100e09992 ^ 0xaa;
    bRam0000000100e099b3 = bRam0000000100e09993 ^ 0xcd;
    bRam0000000100e099b4 = ~bRam0000000100e09994;
    bRam0000000100e099b5 = bRam0000000100e09995 ^ 0xa3;
    bRam0000000100e099b6 = bRam0000000100e09996 ^ 0x71;
    bRam0000000100e099b7 = bRam0000000100e09997 ^ 0xb0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e099b8 = bRam0000000100e09998 + (bRam0000000100e09998 & 0x45) * -2 + -0x3b;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95d74 = 1;
  func_0x00010094ee40(param_1);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094d160();
  uVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _NSLog(0x100e099c0);
  _objc_release(uVar13);
  _objc_release(uVar12);
  func_0x000100938f00(param_1);
  uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  uVar6 = func_0x00010093e360();
  _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(1 < uVar6) {
  case false:
    func_0x000100938f00(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    lVar7 = func_0x00010093e360();
    _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar7 == 1) {
    case false:
      return 0;
    }
                    /* WARNING: Switch is manually overridden */
    func_0x000100938f00(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100944120(uVar12);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    iVar5 = func_0x00010095a2a0();
    _objc_release(uVar13);
    _objc_release(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar12 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(iVar5 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x000100938f00(param_1);
      uVar12 = _objc_retainAutoreleasedReturnValue();
      func_0x000100944120();
      uVar13 = _objc_retainAutoreleasedReturnValue();
      func_0x0001009707c0(uVar13);
      _objc_release(uVar13);
      _objc_release(uVar12);
      uVar12 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    return uVar12;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100939020(uRam0000000100c71378);
    uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
  }
  do {
    func_0x000100938f00(param_1);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    uVar8 = func_0x00010093e360();
    _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 < uVar8) {
    case false:
      goto override_jmp_1007141c8_case_0;
    case true:
      func_0x000100938f00(param_1);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar6);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar15._0_8_);
      func_0x0001009434e0(uVar9);
      uVar13 = _objc_retainAutoreleasedReturnValue();
      lVar7 = func_0x0001009434e0();
                    /* WARNING: Switch is manually overridden */
      iVar5 = *(int *)(lVar7 + 0xc);
                    /* WARNING: Switch is manually overridden */
      func_0x0001009434e0(uVar9);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      lVar7 = func_0x0001009434e0();
      iVar3 = *(int *)(lVar7 + 8);
      _objc_release(uVar10);
      _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
      uVar1 = iVar3 + iVar5;
                    /* WARNING: Switch is manually overridden */
      func_0x000100938f00(param_1);
      uVar13 = _objc_retainAutoreleasedReturnValue();
      uVar8 = func_0x00010093e360();
      _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
      uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uVar6 < uVar8) {
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x000100938f00(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar6);
        uVar13 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        func_0x0001009434e0(uVar13);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x0001009434e0(uVar10);
                    /* WARNING: Switch is manually overridden */
        uVar2 = *(uint *)(lVar7 + 8);
        _objc_release(uVar10);
        func_0x000100951b00(uRam0000000100c71410,extraout_x1,
                            (uVar2 & (uVar1 ^ 0xffffffff)) * 2 - (uVar2 ^ uVar1));
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100937000(uVar12,auVar15._8_8_,auVar15._0_8_);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar9);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
  } while( true );
override_jmp_1007141c8_case_0:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
  do {
                    /* WARNING: Switch is manually overridden */
    func_0x000100938f00(param_1);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    uVar8 = func_0x00010093e360();
    _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 < uVar8) {
    case false:
      iVar3 = 5;
                    /* WARNING: Switch is manually overridden */
override_jmp_1007146b8_case_1:
      uVar13 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(iVar3 == 5) * 8 + 0x100e0c7c0)) {
      case 0x100714978:
        uVar13 = 1;
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar12);
      return uVar13;
                    /* WARNING: Switch is manually overridden */
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100938f00(param_1);
      auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,uVar6);
      uVar13 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar15._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(uVar6 == 0) * 8 + 0x100e0c510)) {
      case 0x100714290:
        lVar7 = (uVar6 ^ 0xfffffffffffffffe) + (uVar6 & 0x7ffffffffffffffe) * 2 + 1;
        func_0x000100951c40(uVar12,extraout_x1_00,lVar7);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        iVar3 = func_0x000100977c40();
        _objc_release(uVar9);
        func_0x000100938f00(param_1);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100951c40(auVar15._0_8_,auVar15._8_8_,lVar7);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar15._0_8_);
        func_0x0001009434e0(uVar11);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x0001009434e0();
        iVar5 = *(int *)(lVar7 + 0xc);
        func_0x0001009434e0(uVar11);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x0001009434e0();
        iVar5 = *(int *)(lVar7 + 8) + iVar5;
        _objc_release(uVar10);
        _objc_release(uVar9);
                    /* WARNING: Switch is manually overridden */
        func_0x0001009434e0(uVar11);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x0001009434e0();
        iVar4 = func_0x000100714d0c(&UNK_100b26ea8,*(undefined4 *)(lVar7 + 0xc));
        _objc_release(uVar9);
        iVar3 = iVar4 - iVar3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar9 = extraout_x1_02;
                    /* WARNING: Switch is manually overridden */
        switch(iVar3 != 0) {
        case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(0 < iVar3) {
          case false:
                    /* WARNING: Switch is manually overridden */
            func_0x00010094ee20(param_1);
            auVar15 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
            func_0x00010097ac80(auVar15._0_8_,auVar15._8_8_,iVar5,(long)-iVar3);
            _objc_release(auVar15._0_8_);
            uVar9 = extraout_x1_03;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
            func_0x00010094ee20(param_1);
            auVar16 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            func_0x00010093f540(uRam0000000100c71778,auVar16._8_8_,(long)iVar3);
            auVar15 = _objc_retainAutoreleasedReturnValue();
            func_0x00010097aca0(auVar16._0_8_,auVar15._8_8_,iVar5,auVar15._0_8_);
            _objc_release(auVar15._0_8_);
            _objc_release(auVar16._0_8_);
                    /* WARNING: Switch is manually overridden */
            uVar9 = extraout_x1_01;
                    /* WARNING: Switch is manually overridden */
          }
        }
                    /* WARNING: Switch is manually overridden */
        func_0x000100968740(uVar13,uVar9,iVar4 + iVar5);
        func_0x0001009434e0(uVar13);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        lVar7 = func_0x0001009434e0();
        *(int *)(lVar7 + 8) = iVar4 + iVar5;
        _objc_release(uVar9);
        func_0x0001009434e0(uVar13);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        func_0x000100945600(param_1,auVar15._8_8_,auVar15._0_8_);
        auVar16 = _objc_retainAutoreleasedReturnValue();
        func_0x000100966e40(uVar13,auVar16._8_8_,auVar16._0_8_);
                    /* WARNING: Switch is manually overridden */
        _objc_release(auVar16._0_8_);
                    /* WARNING: Switch is manually overridden */
        _objc_release(auVar15._0_8_);
        func_0x00010094ed20(uVar13);
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
        lVar14 = 0;
        iVar3 = 1;
                    /* WARNING: Switch is manually overridden */
        switch(lVar7 == 0) {
        case false:
          func_0x0001009707c0(uVar13);
                    /* WARNING: Switch is manually overridden */
          iVar5 = func_0x00010095a2a0(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(iVar5 == 0) {
          case false:
            iVar3 = 0;
            lVar14 = 1;
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
            lVar14 = 0;
            iVar3 = 1;
                    /* WARNING: Switch is manually overridden */
          }
        }
                    /* WARNING: Switch is manually overridden */
        _objc_release(uVar11);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)(lVar14 * 8 + 0x100e0c750)) {
        case 0x100714690:
override_jmp_1007142fc_case_0:
          func_0x0001009707c0(uVar13);
          iVar3 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case 0x10071429c:
        iVar5 = func_0x00010095a2a0(uVar13);
        iVar3 = 1;
                    /* WARNING: Switch is manually overridden */
        switch(iVar5 == 0) {
        case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          func_0x0001009707c0(uVar13);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_1007142fc_case_0;
        }
      }
    }
    _objc_release(uVar13);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(iVar3 == 0) * 8 + 0x100e0c780)) {
    case 0x1007146bc:
      uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      break;
    case 0x10071495c:
      goto override_jmp_1007146b8_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO removeLinkedDylib:]
 * Entry: 0x100714d28; original ABI: v24@0:8@16
 * Original instructions in modeled body: 146; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100714d74 */
/* WARNING: Switch with 1 destination removed at 0x000100714d80 */
/* WARNING: Switch with 1 destination removed at 0x000100714dbc */
/* WARNING: Switch with 1 destination removed at 0x000100714dd0 */
/* WARNING: Switch with 1 destination removed at 0x000100714de0 */
/* WARNING: Switch with 1 destination removed at 0x000100714e14 */
/* WARNING: Switch with 1 destination removed at 0x000100714e48 */
/* WARNING: Switch with 1 destination removed at 0x000100714e5c */
/* WARNING: Switch with 1 destination removed at 0x000100714e68 */
/* WARNING: Switch with 1 destination removed at 0x000100714e8c */
/* WARNING: Switch with 1 destination removed at 0x000100714eb4 */
/* WARNING: Switch with 1 destination removed at 0x000100714ec0 */
/* WARNING: Switch with 1 destination removed at 0x000100714efc */
/* WARNING: Switch with 1 destination removed at 0x000100714f8c */

void Recovered_YYYMachO_m03046(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uVar2;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    uVar1 = _objc_retain(param_3);
    lStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    plStack_90 = (long *)0x0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x000100938f00(param_1);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    uVar2 = auVar7._0_8_;
    auVar7 = func_0x00010093e380(uVar2,auVar7._8_8_,&uStack_a0,auStack_120,0x10);
    param_3 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(param_3 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar5 = *plStack_90;
                    /* WARNING: Switch is manually overridden */
      uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100714de0_case_0:
      do {
        uVar3 = auVar7._8_8_;
        uVar4 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_90 == lVar5) * 8 + 0x100e0c990)) {
        case 0x100714e38:
          _objc_enumerationMutation(uVar2);
          uVar3 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
        }
        param_1 = *(undefined8 *)(lStack_98 + uVar6 * 8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010095b340(param_1,uVar3,uVar1);
        auVar7._8_8_ = extraout_x1_00;
        auVar7._0_8_ = uVar4;
                    /* WARNING: Switch is manually overridden */
        uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 < uVar4) {
        case true:
          goto override_jmp_100714de0_case_0;
        }
        auVar7 = func_0x00010093e380(uVar2,extraout_x1_00,&uStack_a0,auStack_120,0x10);
        param_3 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(param_3 == 0) {
        case true:
          goto override_jmp_100714db0_case_1;
        }
      } while( true );
    case true:
override_jmp_100714db0_case_1:
      _objc_release(uVar2);
      _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_58) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(param_3);
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      plStack_90 = (long *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      func_0x000100938f00(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO addDylibLink:weakInject:error:]
 * Entry: 0x100714f90; original ABI: B36@0:8@16B24^@28
 * Original instructions in modeled body: 136; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100715014 */
/* WARNING: Switch with 1 destination removed at 0x00010071503c */
/* WARNING: Switch with 1 destination removed at 0x000100715054 */
/* WARNING: Switch with 1 destination removed at 0x0001007150fc */
/* WARNING: Switch with 1 destination removed at 0x00010071513c */
/* WARNING: Switch with 1 destination removed at 0x000100715168 */
/* WARNING: Switch with 1 destination removed at 0x000100715184 */
/* WARNING: Switch with 1 destination removed at 0x000100715190 */
/* WARNING: Switch with 1 destination removed at 0x00010071519c */
/* WARNING: Switch with 1 destination removed at 0x0001007151b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007151bc */
/* WARNING: Switch with 1 destination removed at 0x000100715218 */
/* WARNING: Switch with 1 destination removed at 0x000100715244 */
/* WARNING: Switch with 1 destination removed at 0x0001007152a8 */

undefined8
Recovered_YYYMachO_m03047
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_130;
  undefined8 *puStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  uVar1 = _objc_retain(param_3);
  puStack_128 = (undefined8 *)0x0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000100938f00(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar5._0_8_;
  auVar5 = func_0x00010093e380(uVar2,auVar5._8_8_,&uStack_130,auStack_e8,0x10);
  uVar4 = auVar5._8_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(auVar5._0_8_ == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_120 == *plStack_120) * 8 + 0x100e0ca90)) {
    case 0x100715160:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uVar2);
      uVar4 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x000100936b00(*puStack_128,uVar4,uVar1,param_4,param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001007151d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e0cb10))(0);
    return uVar4;
                    /* WARNING: Switch is manually overridden */
  case true:
                    /* WARNING: Switch is manually overridden */
  }
  while( true ) {
    _objc_release(uVar2);
    uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uRam0000000100e0cbe8) {
    case 0x100715238:
      uVar4 = 1;
                    /* WARNING: Switch is manually overridden */
    }
    _objc_release(uVar1);
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    _objc_release(uVar2);
  }
  return uVar4;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO changeDylibLink:toLink:error:]
 * Entry: 0x1007152ac; original ABI: B40@0:8@16@24^@32
 * Original instructions in modeled body: 34; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100715308 */
/* WARNING: Switch with 1 destination removed at 0x000100715690 */

void Recovered_YYYMachO_m03048
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _objc_retain(param_3);
  auVar3 = _objc_retain(param_4);
  uVar2 = func_0x00010094b580(uVar1,auVar3._8_8_,auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100715318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100e0cc20))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO getDylibLinks]
 * Entry: 0x100715694; original ABI: @16@0:8
 * Original instructions in modeled body: 302; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007156dc */
/* WARNING: Switch with 1 destination removed at 0x0001007156e8 */
/* WARNING: Switch with 1 destination removed at 0x000100715704 */
/* WARNING: Switch with 1 destination removed at 0x000100715740 */
/* WARNING: Switch with 1 destination removed at 0x000100715764 */
/* WARNING: Switch with 1 destination removed at 0x000100715770 */
/* WARNING: Switch with 1 destination removed at 0x000100715790 */
/* WARNING: Switch with 1 destination removed at 0x00010071580c */
/* WARNING: Switch with 1 destination removed at 0x000100715838 */
/* WARNING: Switch with 1 destination removed at 0x000100715850 */
/* WARNING: Switch with 1 destination removed at 0x000100715860 */
/* WARNING: Switch with 1 destination removed at 0x00010071587c */
/* WARNING: Switch with 1 destination removed at 0x000100715898 */
/* WARNING: Switch with 1 destination removed at 0x0001007158cc */
/* WARNING: Switch with 1 destination removed at 0x0001007158d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007158e4 */
/* WARNING: Switch with 1 destination removed at 0x0001007158fc */
/* WARNING: Switch with 1 destination removed at 0x00010071596c */
/* WARNING: Switch with 1 destination removed at 0x000100715994 */
/* WARNING: Switch with 1 destination removed at 0x0001007159ac */
/* WARNING: Switch with 1 destination removed at 0x0001007159d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007159f4 */
/* WARNING: Switch with 1 destination removed at 0x000100715a00 */
/* WARNING: Switch with 1 destination removed at 0x000100715a0c */
/* WARNING: Switch with 1 destination removed at 0x000100715a60 */
/* WARNING: Switch with 1 destination removed at 0x000100715a70 */
/* WARNING: Switch with 1 destination removed at 0x000100715a7c */
/* WARNING: Switch with 1 destination removed at 0x000100715b78 */
/* WARNING: Switch with 1 destination removed at 0x000100715bc0 */
/* WARNING: Switch with 1 destination removed at 0x000100715c00 */
/* WARNING: Switch with 1 destination removed at 0x000100715c28 */
/* WARNING: Switch with 1 destination removed at 0x000100715c54 */
/* WARNING: Switch with 1 destination removed at 0x000100715c64 */
/* WARNING: Switch with 1 destination removed at 0x000100715c70 */
/* WARNING: Switch with 1 destination removed at 0x000100715ce0 */
/* WARNING: Switch with 1 destination removed at 0x000100715cfc */
/* WARNING: Switch with 1 destination removed at 0x000100715d18 */

void Recovered_YYYMachO_m03049(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined4 *extraout_x8;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 *puStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar7 = (undefined4 *)0x100e95d78;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d78 == 0) {
  case true:
    bRam0000000100e099e2 = bRam0000000100e099e0 ^ 0x57;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e099e3 = bRam0000000100e099e1 ^ 0xfa;
                    /* WARNING: Switch is manually overridden */
  }
  puVar2 = auStack_a0;
                    /* WARNING: Switch is manually overridden */
  do {
    *puVar7 = 1;
    puVar8 = (undefined8 *)(puVar2 + -0x40);
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x000100950b20(*(undefined8 *)PTR____NSArray0___100afc6c0);
    *(undefined8 *)(puVar2 + -0x38) = 0;
    *puVar8 = 0;
    *(undefined8 *)(puVar2 + -0x28) = 0;
    *(undefined8 *)(puVar2 + -0x30) = 0;
    *(undefined8 *)(puVar2 + -0x18) = 0;
    *(undefined8 *)(puVar2 + -0x20) = 0;
    *(undefined8 *)(puVar2 + -8) = 0;
    *(undefined8 *)(puVar2 + -0x10) = 0;
    func_0x000100938f00(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    uVar6 = auVar10._0_8_;
    uVar4 = func_0x00010093e380(uVar6,auVar10._8_8_,puVar8,puVar2 + -0xc0,0x10);
                    /* WARNING: Switch is manually overridden */
    puStack_90 = puVar2 + -0xc0;
    puStack_88 = puVar8;
    uStack_98 = uVar6;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar4 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lStack_80 = **(long **)(puVar2 + -0x30);
                    /* WARNING: Switch is manually overridden */
      uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100715860_case_0:
      do {
        uStack_70 = uVar4;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*(long *)puVar8[2] == lStack_80) * 8 + 0x100e0cf40)) {
        case 0x1007158c4:
          _objc_enumerationMutation(uVar6);
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uStack_78 = uVar9;
                    /* WARNING: Switch is manually overridden */
        func_0x000100945280(*(undefined8 *)(puVar8[1] + uVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        *(undefined8 *)(puVar2 + -0xf8) = 0;
        *(undefined8 *)(puVar2 + -0x100) = 0;
        *(undefined8 *)(puVar2 + -0xe8) = 0;
        *(undefined8 *)(puVar2 + -0xf0) = 0;
        *(undefined8 *)(puVar2 + -0xd8) = 0;
        *(undefined8 *)(puVar2 + -0xe0) = 0;
        *(undefined8 *)(puVar2 + -200) = 0;
        *(undefined8 *)(puVar2 + -0xd0) = 0;
        auVar10 = _objc_retain();
        param_1 = auVar10._0_8_;
        lVar5 = func_0x00010093e380(param_1,auVar10._8_8_,puVar2 + -0x100,puVar2 + -0x180,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar5 == 0) {
        case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(**(long **)(puVar2 + -0xf0) == **(long **)(puVar2 + -0xf0)) {
          case false:
                    /* WARNING: Switch is manually overridden */
            _objc_enumerationMutation(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          }
                    /* WARNING: Switch is manually overridden */
          func_0x00010094d960(**(undefined8 **)(puVar2 + -0xf8));
          auVar10 = _objc_retainAutoreleasedReturnValue();
          uVar4 = func_0x0001009461a0(auVar10._0_8_,auVar10._8_8_,0x100e099f0);
          _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100715a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e0d070))();
          return;
                    /* WARNING: Switch is manually overridden */
        }
        _objc_release(param_1);
        puVar8 = puStack_88;
        puVar1 = puStack_90;
        uVar6 = uStack_98;
        _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
        uVar9 = uStack_78 + 1;
        uVar4 = uStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar9 < uStack_70) {
        case true:
          goto override_jmp_100715860_case_0;
        }
        uVar4 = func_0x00010093e380(uVar6,extraout_x1,puVar8,puVar1,0x10);
                    /* WARNING: Switch is manually overridden */
        uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar4 == 0) {
        case true:
          goto override_jmp_10071582c_case_1;
        }
      } while( true );
    case true:
override_jmp_10071582c_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar6);
      uVar6 = func_0x00010093e220(uVar3);
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
      _objc_autoreleaseReturnValue(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      *extraout_x8 = 1;
      puVar2 = puVar2 + -0x180;
      puVar7 = extraout_x8;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO getAllDylibLinks]
 * Entry: 0x100715d1c; original ABI: @16@0:8
 * Original instructions in modeled body: 306; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100715d74 */
/* WARNING: Switch with 1 destination removed at 0x000100715e00 */
/* WARNING: Switch with 1 destination removed at 0x000100715e2c */
/* WARNING: Switch with 1 destination removed at 0x000100715e48 */
/* WARNING: Switch with 1 destination removed at 0x000100715e7c */
/* WARNING: Switch with 1 destination removed at 0x000100715e98 */
/* WARNING: Switch with 1 destination removed at 0x000100715ea4 */
/* WARNING: Switch with 1 destination removed at 0x000100715eb0 */
/* WARNING: Switch with 1 destination removed at 0x000100715ec4 */
/* WARNING: Switch with 1 destination removed at 0x000100715f10 */
/* WARNING: Switch with 1 destination removed at 0x000100715f4c */
/* WARNING: Switch with 1 destination removed at 0x000100715f5c */
/* WARNING: Switch with 1 destination removed at 0x000100715f70 */
/* WARNING: Switch with 1 destination removed at 0x000100715fa8 */
/* WARNING: Switch with 1 destination removed at 0x000100715fb4 */
/* WARNING: Switch with 1 destination removed at 0x000100715fe0 */
/* WARNING: Switch with 1 destination removed at 0x000100715ffc */
/* WARNING: Switch with 1 destination removed at 0x000100716008 */
/* WARNING: Switch with 1 destination removed at 0x00010071601c */
/* WARNING: Switch with 1 destination removed at 0x000100716054 */
/* WARNING: Switch with 1 destination removed at 0x000100716078 */
/* WARNING: Switch with 1 destination removed at 0x0001007160a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007160cc */
/* WARNING: Switch with 1 destination removed at 0x0001007160d8 */
/* WARNING: Switch with 1 destination removed at 0x000100716100 */
/* WARNING: Switch with 1 destination removed at 0x00010071610c */
/* WARNING: Switch with 1 destination removed at 0x000100716118 */
/* WARNING: Switch with 1 destination removed at 0x000100716140 */
/* WARNING: Switch with 1 destination removed at 0x00010071616c */
/* WARNING: Switch with 1 destination removed at 0x00010071617c */
/* WARNING: Switch with 1 destination removed at 0x000100716188 */
/* WARNING: Switch with 1 destination removed at 0x0001007161ec */
/* WARNING: Switch with 1 destination removed at 0x0001007161f8 */
/* WARNING: Switch with 1 destination removed at 0x000100716294 */

void Recovered_YYYMachO_m03050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_210 [128];
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [128];
  undefined1 *puStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
  func_0x000100952200(uRam0000000100c71bf0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  func_0x000100938f00(param_1);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar10._0_8_;
  uVar3 = func_0x00010093e380(uVar2,auVar10._8_8_,&uStack_b0,auStack_150,0x10);
                    /* WARNING: Switch is manually overridden */
  puStack_d0 = auStack_150;
  uStack_b8 = uVar1;
                    /* WARNING: Switch is manually overridden */
  switch(uVar3 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar7 = 0;
    lStack_c8 = *plStack_a0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_100715e20_case_1:
    uVar1 = uStack_b8;
                    /* WARNING: Switch is manually overridden */
    while( true ) {
      _objc_release(uVar2);
      func_0x000100939020(uVar1);
      uVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar5 = func_0x00010093e220(uVar6);
      _objc_release(uVar6);
      _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
      ___stack_chk_fail();
      _objc_release(uVar2);
      func_0x000100939020(uVar1);
      _objc_retainAutoreleasedReturnValue();
    }
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar5);
    return;
  }
override_jmp_100715e48_case_0:
  do {
    uStack_c0 = uVar3;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_a0 == lStack_c8) * 8 + 0x100e0d220)) {
    case 0x100715e74:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100945280(*(undefined8 *)(lStack_a8 + uVar7 * 8));
    _objc_retainAutoreleasedReturnValue();
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    auVar10 = _objc_retain();
    uVar1 = auVar10._0_8_;
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x00010093e380(uVar1,auVar10._8_8_,&uStack_190,auStack_210,0x10);
                    /* WARNING: Switch is manually overridden */
    switch(uVar3 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar8 = 0;
      lVar9 = *plStack_180;
                    /* WARNING: Switch is manually overridden */
override_jmp_100715f70_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_180 == lVar9) * 8 + 0x100e0d2e0)) {
        case 0x100715fd8:
                    /* WARNING: Switch is manually overridden */
          _objc_enumerationMutation(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        uVar6 = *(undefined8 *)(lStack_188 + uVar8 * 8);
                    /* WARNING: Switch is manually overridden */
        func_0x00010094d960(uVar6);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
        uVar5 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
        switch(lVar4 != 0) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x00010094d960(uVar6);
          auVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
          func_0x000100937000(uStack_b8,auVar10._8_8_,auVar10._0_8_);
          _objc_release(auVar10._0_8_);
          uVar5 = extraout_x1_00;
        }
        uVar8 = uVar8 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar8 < uVar3) {
        case true:
          goto override_jmp_100715f70_case_0;
        }
        uVar3 = func_0x00010093e380(uVar1,uVar5,&uStack_190,auStack_210,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar3 == 0) {
        case true:
          goto override_jmp_100715f40_case_1;
        }
      } while( true );
    }
override_jmp_100715f40_case_1:
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    uVar7 = uVar7 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar3 = uStack_c0;
                    /* WARNING: Switch is manually overridden */
    switch(uVar7 < uStack_c0) {
    case true:
      goto override_jmp_100715e48_case_0;
    }
    uVar3 = func_0x00010093e380(uVar2,extraout_x1_01,&uStack_b0,puStack_d0,0x10);
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(uVar3 == 0) {
    case true:
      goto override_jmp_100715e20_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO getRPaths]
 * Entry: 0x100716298; original ABI: @16@0:8
 * Original instructions in modeled body: 340; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007162f4 */
/* WARNING: Switch with 1 destination removed at 0x000100716308 */
/* WARNING: Switch with 1 destination removed at 0x000100716324 */
/* WARNING: Switch with 1 destination removed at 0x000100716334 */
/* WARNING: Switch with 1 destination removed at 0x00010071639c */
/* WARNING: Switch with 1 destination removed at 0x0001007163c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007163e4 */
/* WARNING: Switch with 1 destination removed at 0x000100716418 */
/* WARNING: Switch with 1 destination removed at 0x000100716434 */
/* WARNING: Switch with 1 destination removed at 0x000100716444 */
/* WARNING: Switch with 1 destination removed at 0x000100716474 */
/* WARNING: Switch with 1 destination removed at 0x000100716490 */
/* WARNING: Switch with 1 destination removed at 0x00010071649c */
/* WARNING: Switch with 1 destination removed at 0x0001007164d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007164e0 */
/* WARNING: Switch with 1 destination removed at 0x000100716514 */
/* WARNING: Switch with 1 destination removed at 0x000100716524 */
/* WARNING: Switch with 1 destination removed at 0x00010071654c */
/* WARNING: Switch with 1 destination removed at 0x000100716560 */
/* WARNING: Switch with 1 destination removed at 0x000100716570 */
/* WARNING: Switch with 1 destination removed at 0x00010071658c */
/* WARNING: Switch with 1 destination removed at 0x0001007165c0 */
/* WARNING: Switch with 1 destination removed at 0x0001007165cc */
/* WARNING: Switch with 1 destination removed at 0x0001007165f8 */
/* WARNING: Switch with 1 destination removed at 0x000100716604 */
/* WARNING: Switch with 1 destination removed at 0x000100716610 */
/* WARNING: Switch with 1 destination removed at 0x00010071663c */
/* WARNING: Switch with 1 destination removed at 0x000100716660 */
/* WARNING: Switch with 1 destination removed at 0x00010071668c */
/* WARNING: Switch with 1 destination removed at 0x00010071669c */
/* WARNING: Switch with 1 destination removed at 0x0001007166a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007166b4 */
/* WARNING: Switch with 1 destination removed at 0x0001007166c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007166d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007166f4 */
/* WARNING: Switch with 1 destination removed at 0x00010071672c */
/* WARNING: Switch with 1 destination removed at 0x000100716738 */
/* WARNING: Switch with 1 destination removed at 0x000100716744 */
/* WARNING: Switch with 1 destination removed at 0x00010071676c */
/* WARNING: Switch with 1 destination removed at 0x00010071677c */
/* WARNING: Switch with 1 destination removed at 0x000100716798 */
/* WARNING: Switch with 1 destination removed at 0x0001007167d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007167e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071680c */
/* WARNING: Switch with 1 destination removed at 0x000100716838 */
/* WARNING: Switch with 1 destination removed at 0x000100716848 */
/* WARNING: Switch with 1 destination removed at 0x000100716854 */
/* WARNING: Switch with 1 destination removed at 0x0001007168bc */

void Recovered_YYYMachO_m03051(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_210 [128];
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [128];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar7 = &uStack_d0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100950b20(*(undefined8 *)PTR____NSArray0___100afc6c0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  plStack_c0 = (long *)0x0;
  func_0x000100938f00(param_1);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar11._0_8_;
  uVar2 = func_0x00010093e380(uVar5,auVar11._8_8_,puVar7,auStack_150,0x10);
                    /* WARNING: Switch is manually overridden */
  puStack_90 = auStack_150;
                    /* WARNING: Switch is manually overridden */
  switch(uVar2 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lStack_88 = *plStack_c0;
    uStack_80 = uVar5;
    puStack_78 = puVar7;
    uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_1007163b8_case_1:
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar5);
    uVar5 = func_0x00010093e220(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    while( true ) {
      _objc_release(uVar1);
      _objc_autoreleaseReturnValue(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
      ___stack_chk_fail();
      _objc_release(uVar1);
      _objc_autoreleaseReturnValue(uVar5);
    }
    return;
  }
override_jmp_1007163e4_case_0:
  do {
    uStack_70 = uVar2;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*(long *)puVar7[2] == lStack_88) * 8 + 0x100e0d510)) {
    case 0x10071646c:
                    /* WARNING: Switch is manually overridden */
      _objc_enumerationMutation(uVar5);
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    func_0x000100945740(*(undefined8 *)(puVar7[1] + uVar9 * 8));
    uVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    auVar11 = _objc_retain(uVar5);
    uVar3 = auVar11._0_8_;
    uVar2 = func_0x00010093e380(uVar3,auVar11._8_8_,&uStack_190,auStack_210,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar2 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar8 = *plStack_180;
                    /* WARNING: Switch is manually overridden */
      uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_100716570_case_0:
      do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_180 == lVar8) * 8 + 0x100e0d5f0)) {
        case 0x1007165f0:
          _objc_enumerationMutation(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        uVar10 = *(undefined8 *)(lStack_188 + uVar6 * 8);
        func_0x000100952d80(uVar10);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
                    /* WARNING: Switch is manually overridden */
        uVar5 = extraout_x1_00;
                    /* WARNING: Switch is manually overridden */
        switch(lVar4 != 0) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x000100952d80(uVar10);
          auVar11 = _objc_retainAutoreleasedReturnValue();
          func_0x000100937000(uVar1,auVar11._8_8_,auVar11._0_8_);
          _objc_release(auVar11._0_8_);
          uVar5 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
                    /* WARNING: Switch is manually overridden */
        uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 < uVar2) {
        case true:
          goto override_jmp_100716570_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        uVar2 = func_0x00010093e380(uVar3,uVar5,&uStack_190,auStack_210,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar2 == 0) {
        case true:
          goto override_jmp_100716540_case_1;
        }
      } while( true );
    }
override_jmp_100716540_case_1:
    _objc_release(uVar3);
    puVar7 = puStack_78;
    uVar5 = uStack_80;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    uVar9 = uVar9 + 1;
    uVar2 = uStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar9 < uStack_70) {
    case true:
      goto override_jmp_1007163e4_case_0;
    }
    uVar2 = func_0x00010093e380(uVar5,extraout_x1_01,puVar7,puStack_90,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(uVar2 == 0) {
    case true:
      goto override_jmp_1007163b8_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:]
 * Entry: 0x1007168c0; original ABI: B56@0:8@16@24@32@40^@48
 * Original instructions in modeled body: 612; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100716918 */
/* WARNING: Switch with 1 destination removed at 0x000100716924 */
/* WARNING: Switch with 1 destination removed at 0x000100716940 */
/* WARNING: Switch with 1 destination removed at 0x00010071694c */
/* WARNING: Switch with 1 destination removed at 0x000100716bac */
/* WARNING: Switch with 1 destination removed at 0x000100716bec */
/* WARNING: Switch with 1 destination removed at 0x000100716c10 */
/* WARNING: Switch with 1 destination removed at 0x000100716c80 */
/* WARNING: Switch with 1 destination removed at 0x000100716cac */
/* WARNING: Switch with 1 destination removed at 0x000100716cbc */
/* WARNING: Switch with 1 destination removed at 0x000100716cec */
/* WARNING: Switch with 1 destination removed at 0x000100716d10 */
/* WARNING: Switch with 1 destination removed at 0x000100716d1c */
/* WARNING: Switch with 1 destination removed at 0x000100716d2c */
/* WARNING: Switch with 1 destination removed at 0x000100716d60 */
/* WARNING: Switch with 1 destination removed at 0x000100716d70 */
/* WARNING: Switch with 1 destination removed at 0x000100716d7c */
/* WARNING: Switch with 1 destination removed at 0x000100716da0 */
/* WARNING: Switch with 1 destination removed at 0x000100717a88 */
/* WARNING: Switch with 1 destination removed at 0x000100717ad4 */
/* WARNING: Switch with 1 destination removed at 0x000100717d78 */
/* WARNING: Switch with 1 destination removed at 0x0001007181f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071820c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYMachO_m03052
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  undefined4 *extraout_x8;
  undefined4 *puVar7;
  byte *extraout_x9;
  byte *pbVar8;
  byte *extraout_x10;
  byte *pbVar9;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_b0;
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar7 = (undefined4 *)0x100e95d7c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  ppuVar1 = &puStack_b0;
  uVar3 = param_6;
  uStack_88 = param_7;
  uStack_70 = param_1;
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d7c == 0) {
  case true:
    bRam0000000100e09a30 = bRam0000000100e09a10 ^ 0xdb;
    bRam0000000100e09a31 = bRam0000000100e09a11 ^ 0x3b;
    bRam0000000100e09a32 = bRam0000000100e09a12 ^ 0x3b;
    cRam0000000100e09a33 = bRam0000000100e09a13 + (bRam0000000100e09a13 & 0x57) * -2 + 'W';
    bRam0000000100e09a34 = bRam0000000100e09a14 ^ 0xf4;
    cRam0000000100e09a35 = bRam0000000100e09a15 + (bRam0000000100e09a15 & 0x31) * -2 + -0x4f;
    bRam0000000100e09a36 = bRam0000000100e09a16 ^ 0xcf;
    bRam0000000100e09a37 = ~((bRam0000000100e09a17 | 0x90) & (bRam0000000100e09a17 ^ 0xff | 0x6f));
    uRam0000000100e09a38 =
         CONCAT17((byte)((ulong)uRam0000000100e09a18 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b638 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09a18 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b638 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09a18 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b638 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09a18 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b638 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09a18 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b638 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09a18 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b638 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09a18 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b638 >> 8),
                                                  (byte)uRam0000000100e09a18 ^ (byte)_UNK_10099b638)
                                                  ))))));
    bRam0000000100e09a40 = bRam0000000100e09a20 ^ 0x56;
    bRam0000000100e09a41 = bRam0000000100e09a21 ^ 0x53;
    cRam0000000100e09a42 = bRam0000000100e09a22 + (bRam0000000100e09a22 & 0x11) * -2 + '\x11';
    uRam0000000100e09a70 =
         CONCAT17((byte)((ulong)uRam0000000100e09a50 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b670 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09a50 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b670 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09a50 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b670 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09a50 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b670 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09a50 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b670 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09a50 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b670 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09a50 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b670 >> 8),
                                                  (byte)uRam0000000100e09a50 ^ (byte)_UNK_10099b670)
                                                  ))))));
    uRam0000000100e09a78 =
         CONCAT17((byte)((ulong)uRam0000000100e09a58 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b678 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09a58 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b678 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09a58 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b678 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09a58 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b678 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09a58 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b678 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09a58 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b678 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09a58 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b678 >> 8),
                                                  (byte)uRam0000000100e09a58 ^ (byte)_UNK_10099b678)
                                                  ))))));
    cRam0000000100e09a80 = bRam0000000100e09a60 + (bRam0000000100e09a60 & 0x2c) * -2 + -0x54;
    bRam0000000100e09a81 = bRam0000000100e09a61 ^ 0x17;
    bRam0000000100e09a88 = bRam0000000100e09a82 ^ 0xd;
    bRam0000000100e09a89 = bRam0000000100e09a83 ^ 0x52;
    bRam0000000100e09a8a = bRam0000000100e09a84 ^ 0x61;
    bRam0000000100e09a8b = bRam0000000100e09a85 ^ 0x91;
    bRam0000000100e09a8c = bRam0000000100e09a86 ^ 0x87;
    bRam0000000100e09a8d = bRam0000000100e09a87 ^ 0x5f;
    bRam0000000100e09ab0 = bRam0000000100e09a90 ^ 0xbd;
    bRam0000000100e09ab1 = ~((bRam0000000100e09a91 | 0xc9) & (bRam0000000100e09a91 ^ 0xff | 0x36));
    bRam0000000100e09ab2 = bRam0000000100e09a92 ^ 0x14;
    bRam0000000100e09ab3 = bRam0000000100e09a93 ^ 0x7e;
    bRam0000000100e09ab4 = bRam0000000100e09a94 ^ 0xf1;
    cRam0000000100e09ab5 = bRam0000000100e09a95 + (bRam0000000100e09a95 & 0x26) * -2 + -0x5a;
    pbVar8 = (byte *)0x100e09a96;
    pbVar9 = (byte *)0x100e09ab6;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_100716bac_case_0;
  }
  while( true ) {
    *puVar7 = 1;
                    /* WARNING: Switch is manually overridden */
    puStack_a8 = (undefined1 *)((long)ppuVar1 + -0x100);
    ppuVar6 = (undefined1 **)((long)ppuVar1 + -0x180);
    puStack_b0 = (undefined1 *)ppuVar6;
    lVar2 = _objc_retain(param_3);
    param_4 = _objc_retain(param_4);
    param_5 = _objc_retain(param_5);
    uStack_90 = _objc_retain(uVar3);
    param_6 = uStack_70;
    lStack_98 = lVar2;
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x000100938f00(uStack_70);
      uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      lVar4 = func_0x00010093e360(uVar3);
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar4 == 0) {
      case false:
        uVar5 = func_0x00010094fc20(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000100716db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100e0d990))(0);
        return uVar3;
                    /* WARNING: Switch is manually overridden */
      case true:
                    /* WARNING: Switch is manually overridden */
        param_3 = 0x100e09bf0;
        func_0x000100718378(uStack_88,0x3e9);
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      param_3 = 0x100e09bd0;
      func_0x000100718378(uStack_88,0x3e9);
      param_6 = uVar3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    lVar2 = lStack_98;
                    /* WARNING: Switch is manually overridden */
    _objc_release(uStack_90);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    *extraout_x10 = *extraout_x9 + (*extraout_x9 & 0x55) * -2 + 0x55;
    extraout_x10[1] = extraout_x9[1] ^ 0xec;
    extraout_x10[2] = ~((extraout_x9[2] | 0xdb) & (extraout_x9[2] ^ 0xff | 0x24));
    extraout_x10[3] = extraout_x9[3] ^ 99;
    extraout_x10[4] = extraout_x9[4] + (extraout_x9[4] & 9) * -2 + 9;
    extraout_x10[5] = extraout_x9[5] ^ 199;
    extraout_x10[6] = extraout_x9[6] + (extraout_x9[6] & 0x25) * -2 + 0x25;
    extraout_x10[7] = extraout_x9[7] ^ 0xf5;
    extraout_x10[8] = extraout_x9[8] ^ 0xf3;
    extraout_x10[9] = extraout_x9[9] + (extraout_x9[9] & 0x16) * -2 + 0x96;
    extraout_x10[10] = extraout_x9[10] ^ 0x3b;
    extraout_x10[0xb] = extraout_x9[0xb] ^ 0x55;
    extraout_x10[0xc] = extraout_x9[0xc] + (extraout_x9[0xc] & 0xe) * -2 + 0x8e;
    extraout_x10[0xd] = extraout_x9[0xd] ^ 0x5d;
    extraout_x10[0xe] = extraout_x9[0xe] + (extraout_x9[0xe] & 0xfb) * -2 + 0x7b;
    extraout_x10[0xf] = extraout_x9[0xf] ^ 0x8d;
    puVar7 = extraout_x8;
    pbVar8 = extraout_x9;
    pbVar9 = extraout_x10;
override_jmp_100716bac_case_0:
    *pbVar9 = *pbVar8 ^ 0x55;
    pbVar9[1] = (pbVar8[1] + (pbVar8[1] & 0x6c) * -2) - 0x14;
    pbVar9[2] = pbVar8[2] ^ 0x24;
    pbVar9[3] = pbVar8[3] + (pbVar8[3] & 0xe3) * -2 + 99;
    pbVar9[4] = pbVar8[4] ^ 9;
    pbVar9[5] = (pbVar8[5] + (pbVar8[5] & 199) * -2) - 0x39;
    pbVar9[6] = pbVar8[6] ^ 0x25;
    pbVar9[7] = pbVar8[7] ^ 0xf5;
    pbVar9[8] = pbVar8[8] ^ 0xf3;
    pbVar9[9] = pbVar8[9] ^ 0x96;
    pbVar9[10] = pbVar8[10] + (pbVar8[10] & 0xbb) * -2 + 0x3b;
    pbVar9[0xb] = pbVar8[0xb] ^ 0x55;
    pbVar9[0xc] = pbVar8[0xc] + (pbVar8[0xc] & 0xe) * -2 + 0x8e;
    pbVar9[0xd] = pbVar8[0xd] + (pbVar8[0xd] & 0xdd) * -2 + 0x5d;
    pbVar9[0xe] = pbVar8[0xe] ^ 0x7b;
    pbVar9[0xf] = pbVar8[0xf] ^ 0x8d;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e09ac6 = pbVar8[0x10] ^ 0x9b;
    bRam0000000100e09ac7 = bRam0000000100e09aa7 ^ 0x8a;
    bRam0000000100e09ac8 = bRam0000000100e09aa8 ^ 0x7d;
    bRam0000000100e09ac9 = bRam0000000100e09aa9 ^ 0x73;
    cRam0000000100e09aca = bRam0000000100e09aaa + (bRam0000000100e09aaa & 0xc3) * -2 + 'C';
    cRam0000000100e09acb = bRam0000000100e09aab + (bRam0000000100e09aab & 0x16) * -2 + '\x16';
    sRam0000000100e09af0 = uRam0000000100e09ad0 + (uRam0000000100e09ad0 & 0x55dd) * -2 + 0x55dd;
    uRam0000000100e09af2 = uRam0000000100e09ad2 ^ 0x7fba;
    uRam0000000100e09af4 = uRam0000000100e09ad4 ^ 0x32a5;
    uRam0000000100e09af6 = uRam0000000100e09ad6 ^ 0x4ef8;
    sRam0000000100e09af8 = uRam0000000100e09ad8 + (uRam0000000100e09ad8 & 0x3695) * -2 + 0x3695;
    uRam0000000100e09afa = uRam0000000100e09ada ^ 0x94ed;
    uRam0000000100e09afc = uRam0000000100e09adc ^ 0x9607;
    sRam0000000100e09afe = uRam0000000100e09ade + (uRam0000000100e09ade & 0x101) * -2 + -0x7eff;
    uRam0000000100e09b00 =
         CONCAT17((byte)((ulong)uRam0000000100e09ae0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b680 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09ae0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b680 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09ae0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b680 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09ae0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b680 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09ae0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b680 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09ae0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b680 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09ae0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b680 >> 8),
                                                  (byte)uRam0000000100e09ae0 ^ (byte)_UNK_10099b680)
                                                  ))))));
    uRam0000000100e09b08 =
         CONCAT17((byte)((ulong)uRam0000000100e09ae8 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b688 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09ae8 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b688 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09ae8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b688 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09ae8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b688 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09ae8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b688 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09ae8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b688 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09ae8 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b688 >> 8),
                                                  (byte)uRam0000000100e09ae8 ^ (byte)_UNK_10099b688)
                                                  ))))));
    bRam0000000100e09b30 = bRam0000000100e09b10 ^ 0xd2;
    bRam0000000100e09b31 = bRam0000000100e09b11 ^ 2;
    bRam0000000100e09b32 = bRam0000000100e09b12 ^ 0xa3;
    bRam0000000100e09b33 = bRam0000000100e09b13 ^ 0xaa;
    bRam0000000100e09b34 = bRam0000000100e09b14 ^ 0x6f;
    bRam0000000100e09b35 = bRam0000000100e09b15 ^ 0x56;
    cRam0000000100e09b36 = bRam0000000100e09b16 + (bRam0000000100e09b16 & 0x56) * -2 + 'V';
    cRam0000000100e09b37 = bRam0000000100e09b17 + (bRam0000000100e09b17 & 0x57) * -2 + 'W';
    uRam0000000100e09b38 =
         CONCAT17((byte)((ulong)uRam0000000100e09b18 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b648 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e09b18 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b648 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e09b18 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b648 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e09b18 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b648 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e09b18 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b648 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e09b18 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b648 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e09b18 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b648 >> 8),
                                                  (byte)uRam0000000100e09b18 ^ (byte)_UNK_10099b648)
                                                  ))))));
    cRam0000000100e09b40 = bRam0000000100e09b20 + (bRam0000000100e09b20 & 6) * -2 + '\x06';
    ppuVar1 = ppuVar6;
    uVar3 = param_6;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO reload]
 * Entry: 0x1007187a0; original ABI: v16@0:8
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007187c0 */
/* WARNING: Switch with 1 destination removed at 0x000100718800 */
/* WARNING: Switch with 1 destination removed at 0x00010071880c */
/* WARNING: Switch with 1 destination removed at 0x000100718838 */

void Recovered_YYYMachO_m03053(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
  func_0x000100938f00(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010094efe0(auVar1._0_8_,auVar1._8_8_,PTR_s_setup_100c6dc78);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO removeSourceVersion]
 * Entry: 0x10071883c; original ABI: v16@0:8
 * Original instructions in modeled body: 146; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718884 */
/* WARNING: Switch with 1 destination removed at 0x000100718890 */
/* WARNING: Switch with 1 destination removed at 0x00010071889c */
/* WARNING: Switch with 1 destination removed at 0x000100718904 */
/* WARNING: Switch with 1 destination removed at 0x000100718930 */
/* WARNING: Switch with 1 destination removed at 0x000100718944 */
/* WARNING: Switch with 1 destination removed at 0x00010071898c */
/* WARNING: Switch with 1 destination removed at 0x0001007189c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007189f8 */
/* WARNING: Switch with 1 destination removed at 0x000100718a08 */
/* WARNING: Switch with 1 destination removed at 0x000100718a14 */
/* WARNING: Switch with 1 destination removed at 0x000100718a3c */
/* WARNING: Switch with 1 destination removed at 0x000100718a48 */
/* WARNING: Switch with 1 destination removed at 0x000100718a54 */
/* WARNING: Switch with 1 destination removed at 0x000100718a7c */
/* WARNING: Switch with 1 destination removed at 0x000100718a88 */
/* WARNING: Switch with 1 destination removed at 0x000100718adc */

void Recovered_YYYMachO_m03054(undefined8 param_1)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 extraout_x1_01;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  undefined8 uVar1;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
  func_0x000100938f00(param_1);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar7._0_8_;
  auVar7 = func_0x00010093e380(uVar1,auVar7._8_8_,&uStack_a0,auStack_120,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(auVar7._0_8_ == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar6 = 0;
    lVar5 = *plStack_90;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_100718920_case_1:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    while (_objc_release(uVar1), *(long *)PTR____stack_chk_guard_100afc6e8 != lStack_58) {
      ___stack_chk_fail();
      _objc_release(uVar1);
    }
    return;
  }
override_jmp_100718944_case_0:
  do {
    uVar2 = auVar7._8_8_;
    uVar3 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_90 == lVar5) * 8 + 0x100e0e490)) {
    case 0x1007189e8:
      _objc_enumerationMutation(uVar1);
      uVar2 = extraout_x1_01;
                    /* WARNING: Switch is manually overridden */
    }
    uVar4 = *(undefined8 *)(lStack_98 + uVar6 * 8);
    func_0x00010095b360(uVar4,uVar2,0x2a);
    func_0x00010095b360(uVar4,extraout_x1,0x32);
    auVar7._8_8_ = extraout_x1_00;
    auVar7._0_8_ = uVar3;
    uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 < uVar3) {
    case true:
      goto override_jmp_100718944_case_0;
    }
    auVar7 = func_0x00010093e380(uVar1,extraout_x1_00,&uStack_a0,auStack_120,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar7._0_8_ == 0) {
    case true:
      goto override_jmp_100718920_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO isEncryption]
 * Entry: 0x100718ae0; original ABI: B16@0:8
 * Original instructions in modeled body: 122; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718b38 */
/* WARNING: Switch with 1 destination removed at 0x000100718b44 */
/* WARNING: Switch with 1 destination removed at 0x000100718b70 */
/* WARNING: Switch with 1 destination removed at 0x000100718b80 */
/* WARNING: Switch with 1 destination removed at 0x000100718bb4 */
/* WARNING: Switch with 1 destination removed at 0x000100718bdc */
/* WARNING: Switch with 1 destination removed at 0x000100718bf4 */
/* WARNING: Switch with 1 destination removed at 0x000100718cbc */
/* WARNING: Switch with 1 destination removed at 0x000100718cc8 */
/* WARNING: Switch with 1 destination removed at 0x000100718cfc */
/* WARNING: Switch with 1 destination removed at 0x000100718d0c */
/* WARNING: Switch with 1 destination removed at 0x000100718d3c */
/* WARNING: Switch with 1 destination removed at 0x000100718d58 */
/* WARNING: Switch with 1 destination removed at 0x000100718d68 */
/* WARNING: Switch with 1 destination removed at 0x000100718d74 */

void Recovered_YYYMachO_m03055(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  puStack_98 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_88 = 0;
  plStack_90 = (long *)0x0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100938f00(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar2 = func_0x00010093e380(uVar1,auVar4._8_8_,&uStack_a0,auStack_120,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_90 == *plStack_90) * 8 + 0x100e0e600)) {
    case 0x100718cec:
      _objc_enumerationMutation(uVar1);
                    /* WARNING: Switch is manually overridden */
    }
    uVar3 = func_0x00010094b460(*puStack_98);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100718d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e0e640))();
    return;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  if (*(long *)PTR____stack_chk_guard_100afc6e8 != lStack_58) {
    lVar2 = ___stack_chk_fail(0);
                    /* WARNING: Could not recover jumptable at 0x000100718dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100e0e718)(*(undefined8 *)(lVar2 + 0x10));
    return;
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO machoPath]
 * Entry: 0x100718db0; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718dbc */
/* WARNING: Switch with 1 destination removed at 0x000100718dc8 */

undefined8 Recovered_YYYMachO_m03056(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setMachoPath:]
 * Entry: 0x100718dd0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718df4 */
/* WARNING: Switch with 1 destination removed at 0x000100718e00 */
/* WARNING: Switch with 1 destination removed at 0x000100718e34 */

void Recovered_YYYMachO_m03057(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO machoFileHandle]
 * Entry: 0x100718e48; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718e50 */

undefined8 Recovered_YYYMachO_m03058(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setMachoFileHandle:]
 * Entry: 0x100718e5c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718e74 */
/* WARNING: Switch with 1 destination removed at 0x000100718e84 */
/* WARNING: Switch with 1 destination removed at 0x000100718eb4 */

void Recovered_YYYMachO_m03059(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO archOs]
 * Entry: 0x100718eb8; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718ec0 */
/* WARNING: Switch with 1 destination removed at 0x000100718ecc */

undefined8 Recovered_YYYMachO_m03060(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setArchOs:]
 * Entry: 0x100718ed8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 32; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718ef8 */
/* WARNING: Switch with 1 destination removed at 0x000100718f04 */
/* WARNING: Switch with 1 destination removed at 0x000100718f14 */
/* WARNING: Switch with 1 destination removed at 0x000100718f38 */
/* WARNING: Switch with 1 destination removed at 0x000100718f68 */

void Recovered_YYYMachO_m03061(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO fat_header]
 * Entry: 0x100718f6c; original ABI: ^{fat_header=II}16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718f74 */
/* WARNING: Switch with 1 destination removed at 0x000100718f80 */

undefined8 Recovered_YYYMachO_m03062(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setFat_header:]
 * Entry: 0x100718f8c; original ABI: v24@0:8^{fat_header=II}16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718f94 */
/* WARNING: Switch with 1 destination removed at 0x000100718fa0 */

void Recovered_YYYMachO_m03063(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO fatArchs]
 * Entry: 0x100718fac; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718fb8 */
/* WARNING: Switch with 1 destination removed at 0x000100718fc4 */

undefined8 Recovered_YYYMachO_m03064(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setFatArchs:]
 * Entry: 0x100718fcc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100718fe4 */
/* WARNING: Switch with 1 destination removed at 0x000100718ff4 */
/* WARNING: Switch with 1 destination removed at 0x000100719024 */

void Recovered_YYYMachO_m03065(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x30,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO defaultEntitlements]
 * Entry: 0x100719028; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100719030 */

undefined8 Recovered_YYYMachO_m03066(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setDefaultEntitlements:]
 * Entry: 0x10071903c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100719054 */
/* WARNING: Switch with 1 destination removed at 0x000100719064 */
/* WARNING: Switch with 1 destination removed at 0x000100719070 */
/* WARNING: Switch with 1 destination removed at 0x0001007190a0 */

void Recovered_YYYMachO_m03067(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x38,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO thin]
 * Entry: 0x1007190a4; original ABI: B16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007190ac */

undefined1 Recovered_YYYMachO_m03068(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO setThin:]
 * Entry: 0x1007190b8; original ABI: v20@0:8B16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007190c0 */

void Recovered_YYYMachO_m03069(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMachO .cxx_destruct]
 * Entry: 0x1007190cc; original ABI: v16@0:8
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007190e4 */
/* WARNING: Switch with 1 destination removed at 0x000100719108 */

void Recovered_YYYMachO_m03070(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x10,0);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYMachO machOWithMachOPath:readOnly:]
 * Entry: 0x10070e6b8; original ABI: @28@0:8@16B24
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070e6d8 */
/* WARNING: Switch with 1 destination removed at 0x00010070e6e4 */
/* WARNING: Switch with 1 destination removed at 0x00010070e740 */

void Recovered_YYYMachO_m03071
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar3 = _objc_alloc(uRam0000000100c73080);
  uVar1 = func_0x000100949680(auVar3._0_8_,auVar3._8_8_,uVar2,param_4,0);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar1);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYMachO machOWithMachOPath:thinToArm64:]
 * Entry: 0x10070e744; original ABI: @28@0:8@16B24
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010070e768 */

void Recovered_YYYMachO_m03072
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  auVar3 = _objc_alloc(uRam0000000100c73080);
  uVar2 = func_0x000100949680(auVar3._0_8_,auVar3._8_8_,uVar1,0,param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



