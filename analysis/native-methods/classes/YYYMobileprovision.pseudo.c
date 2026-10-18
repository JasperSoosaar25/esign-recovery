/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision initWithData:]
 * Entry: 0x100719144; original ABI: @24@0:8@16
 * Original instructions in modeled body: 96; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100719164 */
/* WARNING: Switch with 1 destination removed at 0x000100719180 */
/* WARNING: Switch with 1 destination removed at 0x0001007191ac */
/* WARNING: Switch with 1 destination removed at 0x0001007191b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007191d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007191e0 */
/* WARNING: Switch with 1 destination removed at 0x000100719218 */
/* WARNING: Switch with 1 destination removed at 0x000100719234 */
/* WARNING: Switch with 1 destination removed at 0x00010071926c */
/* WARNING: Switch with 1 destination removed at 0x00010071928c */
/* WARNING: Switch with 1 destination removed at 0x0001007192ac */
/* WARNING: Switch with 1 destination removed at 0x0001007192bc */

undefined8
Recovered_YYYMobileprovision_m03073(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar2 = func_0x00010094d6e0(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 0) {
    case false:
      func_0x000100948020(param_1);
      lVar2 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 != 0) {
      case false:
                    /* WARNING: Switch is manually overridden */
        param_1 = _objc_retain(lVar2);
        uVar4 = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        func_0x0001009628a0(lVar2,extraout_x1,lVar1);
        uVar3 = func_0x0001009707c0(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100719280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e0ee18))();
        return uVar4;
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  return uVar4;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setup]
 * Entry: 0x1007192e4; original ABI: B16@0:8
 * Original instructions in modeled body: 1879; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100719328 */
/* WARNING: Switch with 1 destination removed at 0x00010071933c */
/* WARNING: Switch with 1 destination removed at 0x000100719348 */
/* WARNING: Switch with 1 destination removed at 0x0001007197dc */
/* WARNING: Switch with 1 destination removed at 0x00010071984c */
/* WARNING: Switch with 1 destination removed at 0x000100719f4c */
/* WARNING: Switch with 1 destination removed at 0x000100719f58 */
/* WARNING: Switch with 1 destination removed at 0x000100719f94 */
/* WARNING: Switch with 1 destination removed at 0x000100719fb0 */
/* WARNING: Switch with 1 destination removed at 0x000100719fd4 */
/* WARNING: Switch with 1 destination removed at 0x000100719ffc */
/* WARNING: Switch with 1 destination removed at 0x00010071a008 */
/* WARNING: Switch with 1 destination removed at 0x00010071a014 */
/* WARNING: Switch with 1 destination removed at 0x00010071a03c */
/* WARNING: Switch with 1 destination removed at 0x00010071a04c */
/* WARNING: Switch with 1 destination removed at 0x00010071a058 */
/* WARNING: Switch with 1 destination removed at 0x00010071a064 */
/* WARNING: Switch with 1 destination removed at 0x00010071a08c */
/* WARNING: Switch with 1 destination removed at 0x00010071a09c */
/* WARNING: Switch with 1 destination removed at 0x00010071a0a8 */
/* WARNING: Switch with 1 destination removed at 0x00010071a0d0 */
/* WARNING: Switch with 1 destination removed at 0x00010071a0e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071a0f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071a104 */
/* WARNING: Switch with 1 destination removed at 0x00010071a140 */
/* WARNING: Switch with 1 destination removed at 0x00010071a168 */
/* WARNING: Switch with 1 destination removed at 0x00010071a174 */
/* WARNING: Switch with 1 destination removed at 0x00010071a19c */
/* WARNING: Switch with 1 destination removed at 0x00010071a1ac */
/* WARNING: Switch with 1 destination removed at 0x00010071a1cc */
/* WARNING: Switch with 1 destination removed at 0x00010071a1f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071a200 */
/* WARNING: Switch with 1 destination removed at 0x00010071a214 */
/* WARNING: Switch with 1 destination removed at 0x00010071a26c */
/* WARNING: Switch with 1 destination removed at 0x00010071a288 */
/* WARNING: Switch with 1 destination removed at 0x00010071a298 */
/* WARNING: Switch with 1 destination removed at 0x00010071a2bc */
/* WARNING: Switch with 1 destination removed at 0x00010071a2c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071a30c */
/* WARNING: Switch with 1 destination removed at 0x00010071a328 */
/* WARNING: Switch with 1 destination removed at 0x00010071a360 */
/* WARNING: Switch with 1 destination removed at 0x00010071a36c */
/* WARNING: Switch with 1 destination removed at 0x00010071a3a8 */
/* WARNING: Switch with 1 destination removed at 0x00010071a3bc */
/* WARNING: Switch with 1 destination removed at 0x00010071a3d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071a400 */
/* WARNING: Switch with 1 destination removed at 0x00010071a430 */
/* WARNING: Switch with 1 destination removed at 0x00010071a43c */
/* WARNING: Switch with 1 destination removed at 0x00010071a448 */
/* WARNING: Switch with 1 destination removed at 0x00010071a45c */
/* WARNING: Switch with 1 destination removed at 0x00010071a468 */
/* WARNING: Switch with 1 destination removed at 0x00010071a48c */
/* WARNING: Switch with 1 destination removed at 0x00010071a4b4 */
/* WARNING: Switch with 1 destination removed at 0x00010071a59c */
/* WARNING: Switch with 1 destination removed at 0x00010071a5a8 */
/* WARNING: Switch with 1 destination removed at 0x00010071a5d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071a5e0 */
/* WARNING: Switch with 1 destination removed at 0x00010071a5fc */
/* WARNING: Switch with 1 destination removed at 0x00010071a608 */
/* WARNING: Switch with 1 destination removed at 0x00010071a624 */
/* WARNING: Switch with 1 destination removed at 0x00010071a630 */
/* WARNING: Switch with 1 destination removed at 0x00010071af94 */
/* WARNING: Switch with 1 destination removed at 0x00010071afd0 */
/* WARNING: Switch with 1 destination removed at 0x00010071afec */
/* WARNING: Switch with 1 destination removed at 0x00010071b008 */
/* WARNING: Switch with 1 destination removed at 0x00010071b054 */
/* WARNING: Switch with 1 destination removed at 0x00010071b090 */
/* WARNING: Switch with 1 destination removed at 0x00010071b0bc */
/* WARNING: Switch with 1 destination removed at 0x00010071b0d8 */
/* WARNING: Switch with 1 destination removed at 0x00010071b77c */
/* WARNING: Switch with 1 destination removed at 0x00010071b7fc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Recovered_YYYMobileprovision_m03074
          (long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined8 extraout_x1;
  char *pcVar14;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int *piVar15;
  byte *extraout_x8;
  char *extraout_x9;
  char *pcVar16;
  byte *extraout_x10;
  byte *extraout_x11;
  byte *extraout_x12;
  byte *extraout_x13;
  byte *pbVar17;
  byte *extraout_x14;
  byte *pbVar18;
  byte *extraout_x15;
  byte *pbVar19;
  byte *extraout_x16;
  byte *pbVar20;
  byte *extraout_x17;
  byte *pbVar21;
  undefined4 *puVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long lStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long lStack_68;
  
  pbVar25 = (byte *)&lStack_80;
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar22 = (undefined4 *)0x100e95d84;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  pbVar13 = (byte *)&lStack_80;
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d84 == 0) {
  case true:
    bRam0000000100e0eb50 = bRam0000000100e0eb30 ^ 0x22;
    bRam0000000100e0eb51 = bRam0000000100e0eb31 ^ 0xd2;
    bRam0000000100e0eb52 = bRam0000000100e0eb32 ^ 0xa9;
    bRam0000000100e0eb53 = bRam0000000100e0eb33 ^ 0xa0;
    bRam0000000100e0eb54 = bRam0000000100e0eb34 ^ 0x90;
    cRam0000000100e0eb55 = bRam0000000100e0eb35 + (bRam0000000100e0eb35 & 9) * -2 + '\t';
    bRam0000000100e0eb56 = bRam0000000100e0eb36 ^ 0xb8;
    bRam0000000100e0eb57 = bRam0000000100e0eb37 ^ 0x38;
    bRam0000000100e0eb58 = bRam0000000100e0eb38 ^ 0xcc;
    bRam0000000100e0eb59 = bRam0000000100e0eb39 ^ 0x22;
    bRam0000000100e0eb5a = bRam0000000100e0eb3a ^ 0x1f;
    cRam0000000100e0eb5b = bRam0000000100e0eb3b + (bRam0000000100e0eb3b & 0x42) * -2 + 'B';
    bRam0000000100e0eb5c = bRam0000000100e0eb3c ^ 0x82;
    bRam0000000100e0eb5d = bRam0000000100e0eb3d ^ 0x93;
    bRam0000000100e0eb5e = ~((bRam0000000100e0eb3e | 0x10) & (~bRam0000000100e0eb3e | 0xef));
    bRam0000000100e0eb5f = bRam0000000100e0eb3f ^ 0xb3;
    bRam0000000100e0eb60 = bRam0000000100e0eb40 ^ 0xd3;
    cRam0000000100e0eb61 = bRam0000000100e0eb41 + (bRam0000000100e0eb41 & 0x30) * -2 + '0';
    bRam0000000100e0eb62 = bRam0000000100e0eb42 ^ 0xb1;
    bRam0000000100e0eb63 = bRam0000000100e0eb43 ^ 0x73;
    bRam0000000100e0eb64 = bRam0000000100e0eb44 ^ 0x96;
    bRam0000000100e0eb65 = bRam0000000100e0eb45 ^ 0xdb;
    cRam0000000100e0e98a = bRam0000000100e0e985 + (bRam0000000100e0e985 & 0x14) * -2 + '\x14';
    bRam0000000100e0e98b = bRam0000000100e0e986 ^ 0xdb;
    bRam0000000100e0e98c = bRam0000000100e0e987 ^ 0xc6;
    bRam0000000100e0e98d = bRam0000000100e0e988 ^ 0x1d;
    bRam0000000100e0e98e = bRam0000000100e0e989 ^ 0xe0;
    bRam0000000100e0eb10 = bRam0000000100e0eaf0 ^ 0xd7;
    cRam0000000100e0eb11 = bRam0000000100e0eaf1 + (bRam0000000100e0eaf1 & 0x48) * -2 + -0x38;
    bRam0000000100e0eb12 = bRam0000000100e0eaf2 ^ 0xa4;
    bRam0000000100e0eb13 = bRam0000000100e0eaf3 ^ 0xea;
    bRam0000000100e0eb14 = bRam0000000100e0eaf4 ^ 0x13;
    cRam0000000100e0eb15 = bRam0000000100e0eaf5 + (bRam0000000100e0eaf5 & 0x4e) * -2 + -0x32;
    bRam0000000100e0eb16 = bRam0000000100e0eaf6 ^ 0xcd;
    bRam0000000100e0eb17 = bRam0000000100e0eaf7 ^ 0x34;
    bRam0000000100e0eb18 = bRam0000000100e0eaf8 ^ 0xf;
    cRam0000000100e0eb19 = bRam0000000100e0eaf9 + (bRam0000000100e0eaf9 & 0xb) * -2 + -0x75;
    bRam0000000100e0eb1a = ~((bRam0000000100e0eafa | 0xd9) & (bRam0000000100e0eafa ^ 0xff | 0x26));
    uRam0000000100e0eb1b =
         CONCAT17((byte)((ulong)uRam0000000100e0eafb >> 0x38) ^
                  (byte)((ulong)_UNK_10099b690 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0eafb >> 0x30) ^
                           (byte)((ulong)_UNK_10099b690 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0eafb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b690 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0eafb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b690 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0eafb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b690 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0eafb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b690 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0eafb >> 8) ^
                                                  (byte)((ulong)_UNK_10099b690 >> 8),
                                                  (byte)uRam0000000100e0eafb ^ (byte)_UNK_10099b690)
                                                  ))))));
    bRam0000000100e0ead0 = bRam0000000100e0eab0 ^ 0x21;
    bRam0000000100e0ead1 = bRam0000000100e0eab1 ^ 0x28;
    bRam0000000100e0ead2 = bRam0000000100e0eab2 ^ 0x7a;
    cRam0000000100e0ead3 = bRam0000000100e0eab3 + (bRam0000000100e0eab3 & 0x44) * -2 + 'D';
    bRam0000000100e0ead4 = bRam0000000100e0eab4 ^ 0x56;
    cRam0000000100e0ead5 = bRam0000000100e0eab5 + (bRam0000000100e0eab5 & 0x45) * -2 + -0x3b;
    bRam0000000100e0ead6 = bRam0000000100e0eab6 ^ 0x70;
    bRam0000000100e0ead7 = bRam0000000100e0eab7 ^ 0x16;
    bRam0000000100e0ead8 = bRam0000000100e0eab8 ^ 0xb0;
    bRam0000000100e0ead9 = bRam0000000100e0eab9 ^ 0xbd;
    bRam0000000100e0eada = bRam0000000100e0eaba ^ 0x2c;
    bRam0000000100e0eadb = bRam0000000100e0eabb ^ 0xd8;
    bRam0000000100e0eadc = bRam0000000100e0eabc ^ 0x5f;
    cRam0000000100e0eadd = bRam0000000100e0eabd + (bRam0000000100e0eabd & 4) * -2 + -0x7c;
    bRam0000000100e0eade = bRam0000000100e0eabe ^ 0x32;
    bRam0000000100e0eadf = bRam0000000100e0eabf ^ 0x6f;
    bRam0000000100e0eae0 = bRam0000000100e0eac0 ^ 0xa5;
    pbVar13 = (byte *)0x100e0eac1;
    pcVar16 = (char *)0x100e0eae1;
    pbVar24 = (byte *)0x100e0ea8f;
    pbVar6 = (byte *)0x100e0ea9e;
    pbVar8 = (byte *)0x100e0ea75;
    pbVar17 = (byte *)0x100e0ea82;
    pbVar18 = (byte *)0x100e0ea40;
    pbVar19 = (byte *)0x100e0ea60;
    pbVar20 = (byte *)0x100e0ea17;
    pbVar21 = (byte *)0x100e0ea20;
    auVar27._8_8_ = 0x100e0ea08;
    auVar27._0_8_ = 0x100e0e9f9;
    pbVar3 = (byte *)0x100e0e930;
    param_4 = (byte *)0x100e0e950;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_1007197dc_case_0;
  }
  do {
    *puVar22 = 1;
    pbVar24 = pbVar13 + -0x40;
    pbVar25 = pbVar13 + -0xc0;
    func_0x0001005ffa5c();
    uVar10 = func_0x0001005fedf0();
                    /* WARNING: Switch is manually overridden */
    uVar26 = func_0x00010093ad60(*(undefined8 *)(param_1 + 0x88));
    pbVar3 = (byte *)func_0x00010094d6e0(*(undefined8 *)(param_1 + 0x88));
    iVar2 = func_0x0001005ff090(uVar10,uVar26);
    puVar22 = *(undefined4 **)(param_1 + 0x88);
                    /* WARNING: Switch is manually overridden */
    lVar4 = func_0x00010094d6e0(puVar22);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 != iVar2) {
    case false:
                    /* WARNING: Switch is manually overridden */
      puVar5 = (undefined4 *)func_0x00010062fb30(uVar10,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar26 = 0;
      puVar22 = puVar5;
                    /* WARNING: Switch is manually overridden */
      switch(puVar5 != (undefined4 *)0x0) {
      case true:
        puVar11 = (undefined8 *)func_0x00010062edd8(puVar5);
        puVar22 = puRam0000000100c71460;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(puVar11 != (undefined8 *)0x0) {
        case false:
          uVar26 = 0;
          puVar22 = puVar5;
                    /* WARNING: Switch is manually overridden */
          break;
        case true:
          piVar15 = (int *)*puVar11;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(piVar15 != (int *)0x0) {
          case false:
            uVar26 = 0;
            puVar22 = puVar5;
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            pbVar3 = *(byte **)(piVar15 + 2);
            param_4 = (byte *)(long)*piVar15;
                    /* WARNING: Switch is manually overridden */
            func_0x00010093f3e0(puRam0000000100c71460);
            pbVar6 = (byte *)_objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            switch(pbVar6 == (byte *)0x0) {
            case false:
              lVar4 = func_0x00010094d6e0(pbVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
              switch(lVar4 == 0) {
              case false:
                param_4 = (byte *)0x0;
                pbVar3 = pbVar6;
                func_0x000100954be0(uRam0000000100c71a60);
                uVar26 = _objc_retainAutoreleasedReturnValue();
                puVar22 = (undefined4 *)func_0x000100950b20();
                _objc_release(uVar26);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                switch(puVar22 == (undefined4 *)0x0) {
                case false:
                  func_0x000100951cc0(puVar22,extraout_x1,0x100e0ed30);
                  uVar26 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                  func_0x000100939020(uRam0000000100c71378);
                  uVar12 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                  *(undefined8 *)(pbVar13 + -0x18) = 0;
                  *(undefined8 *)(pbVar13 + -0x20) = 0;
                  *(undefined8 *)(pbVar13 + -8) = 0;
                  *(undefined8 *)(pbVar13 + -0x10) = 0;
                  *(undefined8 *)(pbVar13 + -0x38) = 0;
                  pbVar24[0] = 0;
                  pbVar24[1] = 0;
                  pbVar24[2] = 0;
                  pbVar24[3] = 0;
                  pbVar24[4] = 0;
                  pbVar24[5] = 0;
                  pbVar24[6] = 0;
                  pbVar24[7] = 0;
                  *(undefined8 *)(pbVar13 + -0x28) = 0;
                  *(undefined8 *)(pbVar13 + -0x30) = 0;
                  uVar10 = _objc_retain(uVar26);
                  pbVar3 = pbVar24;
                  param_4 = pbVar25;
                  uVar7 = func_0x00010093e380();
                  bVar1 = false;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                  switch(uVar7 == 0) {
                  case false:
                    /* WARNING: Switch is manually overridden */
                    lStack_80 = **(long **)(pbVar13 + -0x30);
                    uStack_78 = uVar10;
                    uVar23 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10071a288_case_0:
                    do {
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      switch(**(long **)(pbVar13 + -0x30) == lStack_80) {
                      case false:
                        _objc_enumerationMutation(uVar10);
                      }
                      uStack_70 = uVar7;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      pbVar3 = *(byte **)(*(long *)(pbVar13 + -0x38) + uVar23 * 8);
                    /* WARNING: Switch is manually overridden */
                      _objc_alloc(uRam0000000100c73090);
                      pbVar8 = (byte *)func_0x000100948ac0();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      switch(pbVar8 != (byte *)0x0) {
                      case false:
                        lVar4 = 0;
                        bVar1 = true;
                    /* WARNING: Switch is manually overridden */
                        break;
                      case true:
                        pbVar3 = pbVar8;
                        func_0x000100937000(uVar12);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                        bVar1 = false;
                        lVar4 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      }
                      _objc_release(pbVar8);
                      uVar10 = uStack_78;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined8 *)(lVar4 * 8 + 0x100e0f268)) {
                      case 0x10071a484:
                        goto override_jmp_10071a25c_case_1;
                      }
                      uVar23 = uVar23 + 1;
                    /* WARNING: Switch is manually overridden */
                      uVar7 = uStack_70;
                    /* WARNING: Switch is manually overridden */
                      switch(uVar23 < uStack_70) {
                      case true:
                        goto override_jmp_10071a288_case_0;
                      }
                      pbVar3 = pbVar24;
                      param_4 = pbVar25;
                      uVar7 = func_0x00010093e380(uStack_78);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      uVar23 = 0;
                      bVar1 = false;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      switch(uVar7 == 0) {
                      case true:
                        goto override_jmp_10071a25c_case_1;
                      }
                    } while( true );
                  case true:
override_jmp_10071a25c_case_1:
                    _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    uVar26 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined8 *)((ulong)!bVar1 * 8 + 0x100e0f2f8)) {
                    case 0x10071a4ac:
                      param_4 = (byte *)0x100e0eb70;
                      func_0x000100968700(puVar22,extraout_x1_00,uVar12);
                      func_0x0001009655e0(param_1,extraout_x1_01,puVar22);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0eb90);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100963c00(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ebb0);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100967cc0(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ebd0);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100960020(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x0001009429a0(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ebf0);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100960000(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ec10);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x00010096e980(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ec30);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x00010096e960(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ec50);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100968f60(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ec70);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x00010096f9c0(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ec90);
                      uVar26 = _objc_retainAutoreleasedReturnValue();
                      auVar28 = func_0x00010093a560();
                      func_0x000100969720(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(uVar26);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ecb0);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x0001009623c0(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ecd0);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100963e60(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                      func_0x000100951cc0(auVar28._0_8_,auVar28._8_8_,0x100e0ecf0);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100960140(param_1,auVar27._8_8_,auVar27._0_8_);
                      _objc_release(auVar27._0_8_);
                      _objc_release(auVar28._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ed10);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100969700(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0ed30);
                      auVar28 = _objc_retainAutoreleasedReturnValue();
                      func_0x000100962fa0(param_1,auVar28._8_8_,auVar28._0_8_);
                      _objc_release(auVar28._0_8_);
                      _objc_release(auVar27._0_8_);
                      func_0x000100947f20(param_1);
                      auVar27 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                      func_0x000100951cc0(auVar27._0_8_,auVar27._8_8_,0x100e0eb70);
                      pbVar13 = (byte *)_objc_retainAutoreleasedReturnValue();
                      pbVar3 = pbVar13;
                      func_0x000100962fc0(param_1);
                      _objc_release(pbVar13);
                      _objc_release(auVar27._0_8_);
                      uVar26 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    }
                    /* WARNING: Switch is manually overridden */
                    _objc_release(uVar12);
                    _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                  }
                  break;
                case true:
                  uVar26 = 0;
                    /* WARNING: Switch is manually overridden */
                }
                    /* WARNING: Switch is manually overridden */
                _objc_release(puVar22);
                    /* WARNING: Switch is manually overridden */
                break;
              case true:
                goto override_jmp_10071a15c_case_1;
              }
              break;
            case true:
override_jmp_10071a15c_case_1:
              uVar26 = 0;
                    /* WARNING: Switch is manually overridden */
            }
                    /* WARNING: Switch is manually overridden */
            _objc_release(pbVar6);
                    /* WARNING: Switch is manually overridden */
          }
        }
      }
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      uVar26 = 0;
                    /* WARNING: Switch is manually overridden */
    }
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
      return uVar26;
    }
    auVar27 = ___stack_chk_fail();
    pbVar24 = auVar27._8_8_;
    pbVar13 = auVar27._0_8_;
    *extraout_x9 = *extraout_x8 + (*extraout_x8 & 0x17) * -2 + -0x69;
    extraout_x9[1] = extraout_x8[1] ^ 0x72;
    extraout_x9[2] = extraout_x8[2] + (extraout_x8[2] & 7) * -2 + -0x79;
    uVar26 = *(undefined8 *)(extraout_x8 + 3);
    *(ulong *)(extraout_x9 + 3) =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b6b8 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b6b8 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b6b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b6b8 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b6b8)))))));
    *extraout_x11 = *extraout_x10 ^ 0xdb;
    extraout_x11[1] = extraout_x10[1] ^ 0xaf;
    extraout_x11[2] = extraout_x10[2] ^ 0xf7;
    extraout_x11[3] = extraout_x10[3] ^ 0x38;
    extraout_x11[4] = extraout_x10[4] ^ 0x48;
    extraout_x11[5] = extraout_x10[5] ^ 0xf1;
    extraout_x11[6] = extraout_x10[6] + (extraout_x10[6] & 0x18) * -2 + 0x18;
    extraout_x11[7] = extraout_x10[7] ^ 0xea;
    extraout_x11[8] = (extraout_x10[8] + (extraout_x10[8] & 0x5a) * -2) - 0x26;
    extraout_x11[9] = extraout_x10[9] ^ 0x23;
    extraout_x11[10] = extraout_x10[10] ^ 0x88;
    extraout_x11[0xb] = extraout_x10[0xb] ^ 0xe;
    extraout_x11[0xc] = extraout_x10[0xc] ^ 0xf1;
    extraout_x11[0xd] = extraout_x10[0xd] ^ 0x9f;
    extraout_x11[0xe] = extraout_x10[0xe] ^ 0xfe;
    *extraout_x13 = *extraout_x12 ^ 0x46;
    extraout_x13[1] = extraout_x12[1] ^ 0x12;
    extraout_x13[2] = extraout_x12[2] + (extraout_x12[2] & 3) * -2 + 3;
    extraout_x13[3] = extraout_x12[3] ^ 0x11;
    extraout_x13[4] = extraout_x12[4] ^ 0xaa;
    extraout_x13[5] = extraout_x12[5] ^ 0xdc;
    extraout_x13[6] = extraout_x12[6] ^ 0x20;
    extraout_x13[7] = extraout_x12[7] ^ 0xdd;
    extraout_x13[8] = extraout_x12[8] ^ 0xd6;
    extraout_x13[9] = extraout_x12[9] + (extraout_x12[9] & 0x4e) * -2 + 0x4e;
    extraout_x13[10] = extraout_x12[10] ^ 0x99;
    extraout_x13[0xb] = extraout_x12[0xb] + (extraout_x12[0xb] & 0x18) * -2 + 0x98;
    extraout_x13[0xc] = extraout_x12[0xc] ^ 0x9e;
    *extraout_x15 = *extraout_x14 ^ 0xa5;
    extraout_x15[1] = ~((extraout_x14[1] | 0xb9) & (extraout_x14[1] ^ 0xff | 0x46));
    extraout_x15[2] = (extraout_x14[2] + (extraout_x14[2] & 0x7c) * -2) - 4;
    extraout_x15[3] = extraout_x14[3] ^ 0xbf;
    extraout_x15[4] = extraout_x14[4] ^ 0x80;
    extraout_x15[5] = extraout_x14[5] + (extraout_x14[5] & 0xef) * -2 + 0x6f;
    extraout_x15[6] = extraout_x14[6] ^ 0x27;
    extraout_x15[7] = extraout_x14[7] ^ 0x7f;
    extraout_x15[8] = extraout_x14[8] ^ 0xb1;
    extraout_x15[9] = extraout_x14[9] ^ 0xb2;
    extraout_x15[10] = extraout_x14[10] + (extraout_x14[10] & 0xdd) * -2 + 0x5d;
    uVar26 = *(undefined8 *)(extraout_x14 + 0xb);
    *(ulong *)(extraout_x15 + 0xb) =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b6c0 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b6c0 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6c0 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6c0 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6c0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b6c0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b6c0 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b6c0)))))));
    extraout_x15[0x13] = extraout_x14[0x13] + (extraout_x14[0x13] & 1) * -2 + 1;
    extraout_x15[0x14] = extraout_x14[0x14] + (extraout_x14[0x14] & 0x56) * -2 + 0x56;
    *extraout_x17 = *extraout_x16 ^ 0x9f;
    extraout_x17[1] = extraout_x16[1] ^ 0x78;
    extraout_x17[2] = extraout_x16[2] + (extraout_x16[2] & 0x3e) * -2 + 0x3e;
    extraout_x17[3] = extraout_x16[3] ^ 0xf1;
    extraout_x17[4] = extraout_x16[4] ^ 0xe5;
    extraout_x17[5] = (extraout_x16[5] + (extraout_x16[5] & 0x45) * -2) - 0x3b;
    extraout_x17[6] = extraout_x16[6] ^ 0x2b;
    extraout_x17[7] = extraout_x16[7] ^ 0xb8;
    extraout_x17[8] = extraout_x16[8] ^ 0x53;
    *pbVar24 = *pbVar13 ^ 0x4f;
    pbVar24[1] = pbVar13[1] ^ 0xc6;
    pbVar24[2] = pbVar13[2] ^ 0x41;
    pbVar24[3] = pbVar13[3] ^ 0xfc;
    pbVar24[4] = pbVar13[4] ^ 0x77;
    pbVar24[5] = pbVar13[5] ^ 0x37;
    pbVar24[6] = pbVar13[6] ^ 0x7d;
    pbVar24[7] = pbVar13[7] + (pbVar13[7] & 0xf1) * -2 + 0x71;
    pbVar24[8] = pbVar13[8] ^ 0x7c;
    pbVar24[9] = pbVar13[9] ^ 0xe7;
    pbVar24[10] = pbVar13[10] ^ 0xbf;
    pbVar24[0xb] = pbVar13[0xb] ^ 0x1e;
    pbVar24[0xc] = pbVar13[0xc] ^ 0x45;
    pbVar24[0xd] = pbVar13[0xd] ^ 0x48;
    pbVar24[0xe] = pbVar13[0xe] ^ 0x7c;
    *param_4 = (*pbVar3 + (*pbVar3 & 199) * -2) - 0x39;
    param_4[1] = pbVar3[1] ^ 2;
    param_4[2] = pbVar3[2] ^ 0x1e;
    param_4[3] = pbVar3[3] ^ 0x7b;
    param_4[4] = pbVar3[4] + (pbVar3[4] & 0x6a) * -2 + 0x6a;
    param_4[5] = pbVar3[5] ^ 0xc5;
    param_4[6] = pbVar3[6] ^ 0xc2;
    pbVar13 = extraout_x8;
    pcVar16 = extraout_x9;
    pbVar24 = extraout_x10;
    pbVar6 = extraout_x11;
    pbVar8 = extraout_x12;
    pbVar17 = extraout_x13;
    pbVar18 = extraout_x14;
    pbVar19 = extraout_x15;
    pbVar20 = extraout_x16;
    pbVar21 = extraout_x17;
override_jmp_1007197dc_case_0:
    pcVar14 = auVar27._8_8_;
    pbVar9 = auVar27._0_8_;
    uVar26 = *(undefined8 *)pbVar13;
    *(ulong *)pcVar16 =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b698 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b698 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b698 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b698 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b698 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b698 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b698 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b698)))))));
    pcVar16[8] = pbVar13[8] ^ 0x38;
    pcVar16[9] = pbVar13[9] ^ 0x15;
    pcVar16[10] = pbVar13[10] ^ 0x7c;
    *pbVar6 = *pbVar24 ^ 0xdb;
    pbVar6[1] = pbVar24[1] ^ 0xaf;
    pbVar6[2] = pbVar24[2] ^ 0xf7;
    pbVar6[3] = pbVar24[3] ^ 0x38;
    pbVar6[4] = pbVar24[4] ^ 0x48;
    pbVar6[5] = pbVar24[5] ^ 0xf1;
    pbVar6[6] = ~((pbVar24[6] | 0xe7) & (~pbVar24[6] | 0x18));
    uVar26 = *(undefined8 *)(pbVar24 + 7);
    *(ulong *)(pbVar6 + 7) =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b6a0 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b6a0 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b6a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b6a0 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b6a0)))))));
    *pbVar17 = *pbVar8 + (*pbVar8 & 0x46) * -2 + 0x46;
    uVar26 = *(undefined8 *)(pbVar8 + 1);
    *(ulong *)(pbVar17 + 1) =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b6a8 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b6a8 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b6a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b6a8 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b6a8)))))));
    pbVar17[9] = pbVar8[9] ^ 0x4e;
    pbVar17[10] = pbVar8[10] ^ 0x99;
    pbVar17[0xb] = pbVar8[0xb] ^ 0x98;
    pbVar17[0xc] = pbVar8[0xc] + (pbVar8[0xc] & 0x1e) * -2 + 0x9e;
    *pbVar19 = *pbVar18 ^ 0xa5;
    pbVar19[1] = pbVar18[1] ^ 0x46;
    pbVar19[2] = pbVar18[2] ^ 0xfc;
    pbVar19[3] = pbVar18[3] + (pbVar18[3] & 0x3f) * -2 + 0xbf;
    uVar26 = *(undefined8 *)(pbVar18 + 4);
    *(ulong *)(pbVar19 + 4) =
         CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)_UNK_10099b6b0 >> 0x38),
                  CONCAT16((byte)((ulong)uVar26 >> 0x30) ^ (byte)((ulong)_UNK_10099b6b0 >> 0x30),
                           CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar26 >> 0x10) ^
                                                               (byte)((ulong)_UNK_10099b6b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)uVar26 >> 8)
                                                                         ^ (byte)((ulong)
                                                  _UNK_10099b6b0 >> 8),
                                                  (byte)uVar26 ^ (byte)_UNK_10099b6b0)))))));
    pbVar19[0xc] = pbVar18[0xc] ^ 0x17;
    pbVar19[0xd] = pbVar18[0xd] ^ 2;
    pbVar19[0xe] = pbVar18[0xe] ^ 0xab;
    pbVar19[0xf] = pbVar18[0xf] ^ 0x6d;
    pbVar19[0x10] = pbVar18[0x10] ^ 0x48;
    pbVar19[0x11] = (pbVar18[0x11] + (pbVar18[0x11] & 0x6b) * -2) - 0x15;
    pbVar19[0x12] = pbVar18[0x12] + (pbVar18[0x12] & 0x6b) * -2 + 0x6b;
    pbVar19[0x13] = pbVar18[0x13] ^ 1;
    pbVar19[0x14] = pbVar18[0x14] ^ 0x56;
    *pbVar21 = *pbVar20 + (*pbVar20 & 0x1f) * -2 + 0x9f;
    pbVar21[1] = pbVar20[1] ^ 0x78;
    pbVar21[2] = pbVar20[2] ^ 0x3e;
    pbVar21[3] = (pbVar20[3] + (pbVar20[3] & 0xf1) * -2) - 0xf;
    pbVar21[4] = pbVar20[4] ^ 0xe5;
    pbVar21[5] = pbVar20[5] ^ 0xc5;
    pbVar21[6] = pbVar20[6] ^ 0x2b;
    pbVar21[7] = pbVar20[7] + (pbVar20[7] & 0x38) * -2 + 0xb8;
    pbVar21[8] = pbVar20[8] + (pbVar20[8] & 0x53) * -2 + 0x53;
    *pcVar14 = *pbVar9 + (*pbVar9 & 0xcf) * -2 + 'O';
    pcVar14[1] = pbVar9[1] ^ 0xc6;
    pcVar14[2] = pbVar9[2] ^ 0x41;
    pcVar14[3] = pbVar9[3] ^ 0xfc;
    pcVar14[4] = pbVar9[4] + (pbVar9[4] & 0xf7) * -2 + 'w';
    pcVar14[5] = pbVar9[5] ^ 0x37;
    pcVar14[6] = pbVar9[6] ^ 0x7d;
    pcVar14[7] = pbVar9[7] ^ 0x71;
    pcVar14[8] = pbVar9[8] ^ 0x7c;
    pcVar14[9] = pbVar9[9] ^ 0xe7;
    pcVar14[10] = pbVar9[10] ^ 0xbf;
    pcVar14[0xb] = pbVar9[0xb] ^ 0x1e;
    pcVar14[0xc] = pbVar9[0xc] + (pbVar9[0xc] & 0x45) * -2 + 'E';
    pcVar14[0xd] = pbVar9[0xd] ^ 0x48;
    pcVar14[0xe] = pbVar9[0xe] + (pbVar9[0xe] & 0x7c) * -2 + '|';
    *param_4 = *pbVar3 ^ 199;
    param_4[1] = pbVar3[1] ^ 2;
    param_4[2] = pbVar3[2] + (pbVar3[2] & 0x1e) * -2 + 0x1e;
    param_4[3] = pbVar3[3] ^ 0x7b;
    param_4[4] = pbVar3[4] ^ 0x6a;
    param_4[5] = pbVar3[5] ^ 0xc5;
    param_4[6] = (pbVar3[6] + (pbVar3[6] & 0x42) * -2) - 0x3e;
    bRam0000000100e0e957 = pbVar3[7] ^ 0x4b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0e958 = bRam0000000100e0e938 ^ 0xf4;
    cRam0000000100e0e959 = bRam0000000100e0e939 + (bRam0000000100e0e939 & 0x7a) * -2 + 'z';
    bRam0000000100e0e95a = bRam0000000100e0e93a ^ 3;
    bRam0000000100e0e95b = bRam0000000100e0e93b ^ 0xbf;
    bRam0000000100e0e95c = bRam0000000100e0e93c ^ 0x9e;
    bRam0000000100e0e95d = bRam0000000100e0e93d ^ 0xa6;
    cRam0000000100e0e95e = bRam0000000100e0e93e + (bRam0000000100e0e93e & 0x36) * -2 + -0x4a;
    bRam0000000100e0e95f = bRam0000000100e0e93f ^ 0x30;
    bRam0000000100e0e960 = bRam0000000100e0e940 ^ 0x4d;
    cRam0000000100e0e961 = bRam0000000100e0e941 + (bRam0000000100e0e941 & 0x76) * -2 + 'v';
    cRam0000000100e0e962 = bRam0000000100e0e942 + (bRam0000000100e0e942 & 0x18) * -2 + '\x18';
    bRam0000000100e0e963 = bRam0000000100e0e943 ^ 0x27;
    bRam0000000100e0e964 = bRam0000000100e0e944 ^ 0x3d;
    cRam0000000100e0e965 = bRam0000000100e0e945 + (bRam0000000100e0e945 & 0xf7) * -2 + -9;
    bRam0000000100e0e966 = bRam0000000100e0e946 ^ 0xba;
    bRam0000000100e0e967 = bRam0000000100e0e947 ^ 0x42;
    uRam0000000100e0e978 =
         CONCAT17((byte)((ulong)uRam0000000100e0e968 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b6e8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0e968 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b6e8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0e968 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6e8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0e968 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6e8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0e968 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6e8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0e968 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b6e8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0e968 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b6e8 >> 8),
                                                  (byte)uRam0000000100e0e968 ^ (byte)_UNK_10099b6e8)
                                                  ))))));
    bRam0000000100e0e980 = bRam0000000100e0e970 ^ 0x8c;
    bRam0000000100e0e981 = bRam0000000100e0e971 ^ 0xb0;
    bRam0000000100e0e982 = bRam0000000100e0e972 ^ 0xe6;
    bRam0000000100e0e983 = bRam0000000100e0e973 ^ 0x5b;
    bRam0000000100e0e984 = bRam0000000100e0e974 ^ 0x86;
    uRam0000000100e0e9d0 =
         CONCAT17((byte)((ulong)uRam0000000100e0e9b0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b6f0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0e9b0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b6f0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0e9b0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6f0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0e9b0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6f0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0e9b0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6f0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0e9b0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b6f0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0e9b0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b6f0 >> 8),
                                                  (byte)uRam0000000100e0e9b0 ^ (byte)_UNK_10099b6f0)
                                                  ))))));
    cRam0000000100e0e9d8 = bRam0000000100e0e9b8 + (bRam0000000100e0e9b8 & 199) * -2 + 'G';
    uRam0000000100e0e9d9 =
         CONCAT17((byte)((ulong)uRam0000000100e0e9b9 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b6f8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0e9b9 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b6f8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0e9b9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b6f8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0e9b9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b6f8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0e9b9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b6f8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0e9b9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b6f8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0e9b9 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b6f8 >> 8),
                                                  (byte)uRam0000000100e0e9b9 ^ (byte)_UNK_10099b6f8)
                                                  ))))));
    bRam0000000100e0e9e1 = bRam0000000100e0e9c1 ^ 0x1b;
    cRam0000000100e0e9e2 = bRam0000000100e0e9c2 + (bRam0000000100e0e9c2 & 0xf3) * -2 + 's';
    bRam0000000100e0e9e3 = bRam0000000100e0e9c3 ^ 0xea;
    bRam0000000100e0e9e4 = bRam0000000100e0e9c4 ^ 0x1f;
    cRam0000000100e0e9e5 = bRam0000000100e0e9c5 + (bRam0000000100e0e9c5 & 0x4d) * -2 + 'M';
    cRam0000000100e0e9e6 = bRam0000000100e0e9c6 + (bRam0000000100e0e9c6 & 0x38) * -2 + '8';
    bRam0000000100e0ea2e = bRam0000000100e0ea29 ^ 0x43;
    bRam0000000100e0ea2f = bRam0000000100e0ea2a ^ 0x71;
    bRam0000000100e0ea30 = bRam0000000100e0ea2b ^ 0x17;
    bRam0000000100e0ea31 = bRam0000000100e0ea2c ^ 0x37;
    bRam0000000100e0ea32 = bRam0000000100e0ea2d ^ 0x10;
    bRam0000000100e0e9f0 = bRam0000000100e0e9e7 ^ 0x61;
    bRam0000000100e0e9f1 = ~((bRam0000000100e0e9e8 | 0xfa) & (bRam0000000100e0e9e8 ^ 0xff | 5));
    bRam0000000100e0e9f2 = bRam0000000100e0e9e9 ^ 0xdc;
    bRam0000000100e0e9f3 = bRam0000000100e0e9ea ^ 0x7b;
    bRam0000000100e0e9f4 = bRam0000000100e0e9eb ^ 0x89;
    bRam0000000100e0e9f5 = bRam0000000100e0e9ec ^ 0xee;
    bRam0000000100e0e9f6 = bRam0000000100e0e9ed ^ 0xe3;
    bRam0000000100e0e9f7 = bRam0000000100e0e9ee ^ 4;
    bRam0000000100e0e9f8 = bRam0000000100e0e9ef ^ 0xe1;
    bRam0000000100e0e999 = bRam0000000100e0e98f ^ 0xf5;
    bRam0000000100e0e99a = bRam0000000100e0e990 ^ 0xab;
    bRam0000000100e0e99b = bRam0000000100e0e991 ^ 0x73;
    bRam0000000100e0e99c = bRam0000000100e0e992 ^ 0x38;
    bRam0000000100e0e99d = bRam0000000100e0e993 ^ 0xfc;
    bRam0000000100e0e99e = bRam0000000100e0e994 ^ 0x2f;
    bRam0000000100e0e99f = bRam0000000100e0e995 ^ 0x34;
    cRam0000000100e0e9a0 = bRam0000000100e0e996 + (bRam0000000100e0e996 & 0x69) * -2 + -0x17;
    bRam0000000100e0e9a1 = bRam0000000100e0e997 ^ 0xf5;
    cRam0000000100e0e9a2 = bRam0000000100e0e998 + (bRam0000000100e0e998 & 0x36) * -2 + '6';
                    /* WARNING: Switch is manually overridden */
    pbVar13 = pbVar25;
    param_4 = pbRam0000000100e0eec8;
                    /* WARNING: Switch is manually overridden */
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision containsCertificate:]
 * Entry: 0x10071b800; original ABI: B24@0:8@16
 * Original instructions in modeled body: 196; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071b844 */
/* WARNING: Switch with 1 destination removed at 0x00010071b864 */
/* WARNING: Switch with 1 destination removed at 0x00010071b88c */
/* WARNING: Switch with 1 destination removed at 0x00010071b898 */
/* WARNING: Switch with 1 destination removed at 0x00010071b8bc */
/* WARNING: Switch with 1 destination removed at 0x00010071b8c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071b8f4 */
/* WARNING: Switch with 1 destination removed at 0x00010071b904 */
/* WARNING: Switch with 1 destination removed at 0x00010071b92c */
/* WARNING: Switch with 1 destination removed at 0x00010071b948 */
/* WARNING: Switch with 1 destination removed at 0x00010071b964 */
/* WARNING: Switch with 1 destination removed at 0x00010071b970 */
/* WARNING: Switch with 1 destination removed at 0x00010071b9a0 */
/* WARNING: Switch with 1 destination removed at 0x00010071b9ac */
/* WARNING: Switch with 1 destination removed at 0x00010071b9b8 */
/* WARNING: Switch with 1 destination removed at 0x00010071b9c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071ba38 */
/* WARNING: Switch with 1 destination removed at 0x00010071ba48 */
/* WARNING: Switch with 1 destination removed at 0x00010071ba74 */
/* WARNING: Switch with 1 destination removed at 0x00010071bb0c */
/* WARNING: Switch with 1 destination removed at 0x00010071bb18 */
/* WARNING: Switch with 1 destination removed at 0x00010071bb2c */
/* WARNING: Switch with 1 destination removed at 0x00010071bb3c */
/* WARNING: Switch with 1 destination removed at 0x00010071bb48 */
/* WARNING: Switch with 1 destination removed at 0x00010071bb64 */
/* WARNING: Switch with 1 destination removed at 0x00010071bbd8 */
/* WARNING: Switch with 1 destination removed at 0x00010071bbf4 */

undefined8
Recovered_YYYMobileprovision_m03075(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar5;
  undefined8 unaff_x22;
  undefined1 auVar6 [16];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
  puVar5 = &uStack_b0;
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100940820(param_1);
    auVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_10071b904_case_0;
  }
  while( true ) {
    puVar5 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
    ___stack_chk_fail();
    func_0x00010093e380(unaff_x22,extraout_x1,0,auStack_130,0x10);
    auVar6._8_8_ = extraout_x1_00;
    auVar6._0_8_ = unaff_x22;
override_jmp_10071b904_case_0:
    unaff_x22 = auVar6._0_8_;
    lVar4 = func_0x00010093e380(unaff_x22,auVar6._8_8_,puVar5,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lStack_70 = *(long *)puVar5[2];
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(long *)puVar5[2] == *(long *)puVar5[2]) {
      case false:
        _objc_enumerationMutation(unaff_x22);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010095ee80(*(undefined8 *)puVar5[1]);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x00010095ee80(lVar1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      uVar3 = func_0x00010094b580(uVar2,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(auVar6._0_8_);
      _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010071ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100e0f528))();
      return uVar2;
    case true:
      _objc_release(unaff_x22);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision name]
 * Entry: 0x10071bbf8; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bc00 */
/* WARNING: Switch with 1 destination removed at 0x00010071bc10 */
/* WARNING: Switch with 1 destination removed at 0x00010071bc1c */

undefined8 Recovered_YYYMobileprovision_m03076(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setName:]
 * Entry: 0x10071bc24; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bc2c */

void Recovered_YYYMobileprovision_m03077(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision appIDName]
 * Entry: 0x10071bc38; original ABI: @16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bc40 */
/* WARNING: Switch with 1 destination removed at 0x00010071bc50 */
/* WARNING: Switch with 1 destination removed at 0x00010071bc5c */

undefined8 Recovered_YYYMobileprovision_m03078(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setAppIDName:]
 * Entry: 0x10071bc68; original ABI: v24@0:8@16
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYMobileprovision_m03079(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision appID]
 * Entry: 0x10071bc70; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bc78 */
/* WARNING: Switch with 1 destination removed at 0x00010071bc84 */

undefined8 Recovered_YYYMobileprovision_m03080(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setAppID:]
 * Entry: 0x10071bc90; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bcb4 */
/* WARNING: Switch with 1 destination removed at 0x00010071bcc0 */
/* WARNING: Switch with 1 destination removed at 0x00010071bd04 */

void Recovered_YYYMobileprovision_m03081(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x20);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision teamName]
 * Entry: 0x10071bd08; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bd10 */
/* WARNING: Switch with 1 destination removed at 0x00010071bd20 */

undefined8 Recovered_YYYMobileprovision_m03082(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setTeamName:]
 * Entry: 0x10071bd28; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bd4c */
/* WARNING: Switch with 1 destination removed at 0x00010071bd58 */
/* WARNING: Switch with 1 destination removed at 0x00010071bd64 */
/* WARNING: Switch with 1 destination removed at 0x00010071bda8 */

void Recovered_YYYMobileprovision_m03083(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x28);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision teamIdentifier]
 * Entry: 0x10071bdac; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bdb4 */

undefined8 Recovered_YYYMobileprovision_m03084(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setTeamIdentifier:]
 * Entry: 0x10071bdc0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bddc */
/* WARNING: Switch with 1 destination removed at 0x00010071bde8 */
/* WARNING: Switch with 1 destination removed at 0x00010071bdf4 */
/* WARNING: Switch with 1 destination removed at 0x00010071be18 */

void Recovered_YYYMobileprovision_m03085(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x30,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision platform]
 * Entry: 0x10071be28; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071be30 */
/* WARNING: Switch with 1 destination removed at 0x00010071be3c */

undefined8 Recovered_YYYMobileprovision_m03086(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setPlatform:]
 * Entry: 0x10071be48; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071be68 */
/* WARNING: Switch with 1 destination removed at 0x00010071be74 */
/* WARNING: Switch with 1 destination removed at 0x00010071be80 */
/* WARNING: Switch with 1 destination removed at 0x00010071be9c */
/* WARNING: Switch with 1 destination removed at 0x00010071bed4 */

void Recovered_YYYMobileprovision_m03087(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision UUID]
 * Entry: 0x10071bed8; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bee0 */
/* WARNING: Switch with 1 destination removed at 0x00010071beec */
/* WARNING: Switch with 1 destination removed at 0x00010071bef8 */

undefined8 Recovered_YYYMobileprovision_m03088(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setUUID:]
 * Entry: 0x10071bf04; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bf28 */
/* WARNING: Switch with 1 destination removed at 0x00010071bf34 */
/* WARNING: Switch with 1 destination removed at 0x00010071bf68 */
/* WARNING: Switch with 1 destination removed at 0x00010071bf74 */

void Recovered_YYYMobileprovision_m03089(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x40);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision provisionsAllDevices]
 * Entry: 0x10071bf88; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bf90 */
/* WARNING: Switch with 1 destination removed at 0x00010071bf9c */
/* WARNING: Switch with 1 destination removed at 0x00010071bfa8 */

undefined1 Recovered_YYYMobileprovision_m03090(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setProvisionsAllDevices:]
 * Entry: 0x10071bfb4; original ABI: v20@0:8B16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bfbc */
/* WARNING: Switch with 1 destination removed at 0x00010071bfcc */

void Recovered_YYYMobileprovision_m03091(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision createDate]
 * Entry: 0x10071bfd4; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071bfdc */
/* WARNING: Switch with 1 destination removed at 0x00010071bfe8 */
/* WARNING: Switch with 1 destination removed at 0x00010071bff4 */

undefined8 Recovered_YYYMobileprovision_m03092(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setCreateDate:]
 * Entry: 0x10071c000; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c024 */
/* WARNING: Switch with 1 destination removed at 0x00010071c030 */
/* WARNING: Switch with 1 destination removed at 0x00010071c03c */
/* WARNING: Switch with 1 destination removed at 0x00010071c070 */

void Recovered_YYYMobileprovision_m03093(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x48);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision expirationDate]
 * Entry: 0x10071c084; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c08c */
/* WARNING: Switch with 1 destination removed at 0x00010071c098 */
/* WARNING: Switch with 1 destination removed at 0x00010071c0a8 */

undefined8 Recovered_YYYMobileprovision_m03094(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setExpirationDate:]
 * Entry: 0x10071c0b0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c0d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c0e0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c0ec */
/* WARNING: Switch with 1 destination removed at 0x00010071c130 */

void Recovered_YYYMobileprovision_m03095(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x50);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision applicationIdentifierPrefix]
 * Entry: 0x10071c134; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c13c */
/* WARNING: Switch with 1 destination removed at 0x00010071c148 */

undefined8 Recovered_YYYMobileprovision_m03096(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x58);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setApplicationIdentifierPrefix:]
 * Entry: 0x10071c154; original ABI: v24@0:8@16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c160 */
/* WARNING: Switch with 1 destination removed at 0x00010071c16c */

void Recovered_YYYMobileprovision_m03097(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x58,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision provisionedDevices]
 * Entry: 0x10071c178; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c180 */

undefined8 Recovered_YYYMobileprovision_m03098(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setProvisionedDevices:]
 * Entry: 0x10071c18c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c19c */
/* WARNING: Switch with 1 destination removed at 0x00010071c1a8 */

void Recovered_YYYMobileprovision_m03099(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x60,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision developerCertificates]
 * Entry: 0x10071c1b0; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c1b8 */

undefined8 Recovered_YYYMobileprovision_m03100(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x68);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setDeveloperCertificates:]
 * Entry: 0x10071c1c4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c1e0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c1fc */
/* WARNING: Switch with 1 destination removed at 0x00010071c220 */

void Recovered_YYYMobileprovision_m03101(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision developerCertificatesFormatter]
 * Entry: 0x10071c234; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c23c */
/* WARNING: Switch with 1 destination removed at 0x00010071c24c */

undefined8 Recovered_YYYMobileprovision_m03102(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x70);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setDeveloperCertificatesFormatter:]
 * Entry: 0x10071c254; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c26c */
/* WARNING: Switch with 1 destination removed at 0x00010071c27c */
/* WARNING: Switch with 1 destination removed at 0x00010071c2ac */

void Recovered_YYYMobileprovision_m03103(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x70,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision entitlements]
 * Entry: 0x10071c2b0; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c2b8 */

undefined8 Recovered_YYYMobileprovision_m03104(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x78);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setEntitlements:]
 * Entry: 0x10071c2c4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c2e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c300 */
/* WARNING: Switch with 1 destination removed at 0x00010071c310 */
/* WARNING: Switch with 1 destination removed at 0x00010071c344 */

void Recovered_YYYMobileprovision_m03105(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision info]
 * Entry: 0x10071c348; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c350 */
/* WARNING: Switch with 1 destination removed at 0x00010071c35c */

undefined8 Recovered_YYYMobileprovision_m03106(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x80);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setInfo:]
 * Entry: 0x10071c368; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c380 */
/* WARNING: Switch with 1 destination removed at 0x00010071c398 */
/* WARNING: Switch with 1 destination removed at 0x00010071c3c8 */

void Recovered_YYYMobileprovision_m03107(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision data]
 * Entry: 0x10071c3cc; original ABI: @16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYMobileprovision_m03108(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision setData:]
 * Entry: 0x10071c3d4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c3f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c40c */
/* WARNING: Switch with 1 destination removed at 0x00010071c420 */
/* WARNING: Switch with 1 destination removed at 0x00010071c42c */
/* WARNING: Switch with 1 destination removed at 0x00010071c454 */

void Recovered_YYYMobileprovision_m03109(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYMobileprovision .cxx_destruct]
 * Entry: 0x10071c458; original ABI: v16@0:8
 * Original instructions in modeled body: 77; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c474 */
/* WARNING: Switch with 1 destination removed at 0x00010071c558 */
/* WARNING: Switch with 1 destination removed at 0x00010071c568 */
/* WARNING: Switch with 1 destination removed at 0x00010071c574 */
/* WARNING: Switch with 1 destination removed at 0x00010071c5b0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c648 */

void Recovered_YYYMobileprovision_m03110(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



