/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo initWithMethod:]
 * Entry: 0x10003b6e0; original ABI: @24@0:8^{objc_method=}16
 * Original instructions in modeled body: 375; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b718 */
/* WARNING: Switch with 1 destination removed at 0x00010003b724 */
/* WARNING: Switch with 1 destination removed at 0x00010003b750 */
/* WARNING: Switch with 1 destination removed at 0x00010003b76c */
/* WARNING: Switch with 1 destination removed at 0x00010003b7cc */
/* WARNING: Switch with 1 destination removed at 0x00010003b7dc */
/* WARNING: Switch with 1 destination removed at 0x00010003b7e8 */
/* WARNING: Switch with 1 destination removed at 0x00010003b7f4 */
/* WARNING: Switch with 1 destination removed at 0x00010003b814 */
/* WARNING: Switch with 1 destination removed at 0x00010003b820 */
/* WARNING: Switch with 1 destination removed at 0x00010003b82c */
/* WARNING: Switch with 1 destination removed at 0x00010003b850 */
/* WARNING: Switch with 1 destination removed at 0x00010003b884 */
/* WARNING: Switch with 1 destination removed at 0x00010003b8a0 */
/* WARNING: Switch with 1 destination removed at 0x00010003b8ac */
/* WARNING: Switch with 1 destination removed at 0x00010003b8e0 */
/* WARNING: Switch with 1 destination removed at 0x00010003b8ec */
/* WARNING: Switch with 1 destination removed at 0x00010003b8f8 */
/* WARNING: Switch with 1 destination removed at 0x00010003b904 */
/* WARNING: Switch with 1 destination removed at 0x00010003b910 */
/* WARNING: Switch with 1 destination removed at 0x00010003b934 */
/* WARNING: Switch with 1 destination removed at 0x00010003b948 */
/* WARNING: Switch with 1 destination removed at 0x00010003b964 */
/* WARNING: Switch with 1 destination removed at 0x00010003b97c */
/* WARNING: Switch with 1 destination removed at 0x00010003b9a0 */
/* WARNING: Switch with 1 destination removed at 0x00010003b9ac */
/* WARNING: Switch with 1 destination removed at 0x00010003b9b8 */
/* WARNING: Switch with 1 destination removed at 0x00010003b9e4 */
/* WARNING: Switch with 1 destination removed at 0x00010003b9f0 */
/* WARNING: Switch with 1 destination removed at 0x00010003ba18 */
/* WARNING: Switch with 1 destination removed at 0x00010003ba2c */
/* WARNING: Switch with 1 destination removed at 0x00010003ba48 */
/* WARNING: Switch with 1 destination removed at 0x00010003ba68 */
/* WARNING: Switch with 1 destination removed at 0x00010003ba7c */
/* WARNING: Switch with 1 destination removed at 0x00010003ba88 */
/* WARNING: Switch with 1 destination removed at 0x00010003baa0 */
/* WARNING: Switch with 1 destination removed at 0x00010003badc */
/* WARNING: Switch with 1 destination removed at 0x00010003baf8 */
/* WARNING: Switch with 1 destination removed at 0x00010003bb04 */
/* WARNING: Switch with 1 destination removed at 0x00010003bb18 */
/* WARNING: Switch with 1 destination removed at 0x00010003bb2c */
/* WARNING: Switch with 1 destination removed at 0x00010003bb54 */
/* WARNING: Switch with 1 destination removed at 0x00010003bb90 */
/* WARNING: Switch with 1 destination removed at 0x00010003bbb4 */
/* WARNING: Switch with 1 destination removed at 0x00010003bbd0 */
/* WARNING: Switch with 1 destination removed at 0x00010003bbe0 */
/* WARNING: Switch with 1 destination removed at 0x00010003bc04 */
/* WARNING: Switch with 1 destination removed at 0x00010003bc10 */
/* WARNING: Switch with 1 destination removed at 0x00010003bc2c */
/* WARNING: Switch with 1 destination removed at 0x00010003bc38 */
/* WARNING: Switch with 1 destination removed at 0x00010003bc54 */
/* WARNING: Switch with 1 destination removed at 0x00010003bccc */
/* WARNING: Switch with 1 destination removed at 0x00010003bcec */
/* WARNING: Switch with 1 destination removed at 0x00010003bd40 */
/* WARNING: Switch with 1 destination removed at 0x00010003bd5c */
/* WARNING: Switch with 1 destination removed at 0x00010003bd7c */
/* WARNING: Switch with 1 destination removed at 0x00010003bdb0 */

undefined8 Recovered_YYYClassMethodInfo_m00235(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  uint uStack_64;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(param_3 != 0) {
  case false:
    goto override_jmp_10003b740_case_1;
  case true:
                    /* WARNING: Switch is manually overridden */
    uStack_78 = uRam0000000100c73898;
    uStack_80 = param_1;
                    /* WARNING: Switch is manually overridden */
    lVar2 = _objc_msgSendSuper2(&uStack_80,PTR_s_init_100c60da0);
    *(long *)(lVar2 + 8) = param_3;
    uVar3 = _method_getName(param_3);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    uVar3 = _method_getImplementation(param_3);
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    auVar10 = _sel_getName(*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Switch is manually overridden */
    switch(auVar10._0_8_ != 0) {
    case true:
      func_0x000100042054(uRam0000000100c71448,auVar10._8_8_,auVar10._0_8_);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + 0x10);
      *(undefined8 *)(lVar2 + 0x10) = uVar3;
      _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
    auVar10 = _method_getTypeEncoding(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar10._0_8_ != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100974240(uRam0000000100c71448,auVar10._8_8_,auVar10._0_8_);
      uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar7 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar2 + 0x28) = uVar3;
      _objc_release(uVar7);
    }
    lVar6 = _method_copyReturnType(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar6 != 0) {
    case true:
      auVar10 = func_0x000100042058(lVar6);
      *(long *)(lVar2 + 0x30) = auVar10._0_8_;
      func_0x000100974240(uRam0000000100c71448,auVar10._8_8_,lVar6);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(lVar2 + 0x38);
      *(undefined8 *)(lVar2 + 0x38) = uVar3;
      _objc_release(uVar7);
                    /* WARNING: Switch is manually overridden */
      _free(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    uVar1 = _method_getNumberOfArguments(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(2 < uVar1) {
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar3 = func_0x000100951360(uRam0000000100c71378);
      uStack_64 = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar7 = func_0x000100951360(uRam0000000100c71378);
      uVar9 = 2;
                    /* WARNING: Switch is manually overridden */
      do {
                    /* WARNING: Switch is manually overridden */
        switch(uVar9 < uVar1) {
        case false:
          goto override_jmp_10003bbb4_case_0;
        case true:
          auVar10 = _method_copyArgumentType(param_3,uVar9);
          lVar6 = auVar10._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(lVar6 != 0) {
          case false:
            uVar5 = 0;
            lVar8 = 0;
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
                    /* WARNING: Switch is manually overridden */
            func_0x000100974240(uRam0000000100c71448,auVar10._8_8_,lVar6);
            uVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
            lVar8 = 1;
            uStack_70 = uVar5;
                    /* WARNING: Switch is manually overridden */
          }
          auVar10 = _objc_retain(uVar5);
          uVar5 = auVar10._8_8_;
          lVar4 = auVar10._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined8 *)(lVar8 * 8 + 0x100cb3df8)) {
          case 0x10003ba60:
                    /* WARNING: Switch is manually overridden */
            _objc_release(uStack_70);
            uVar5 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
          }
                    /* WARNING: Switch is manually overridden */
          lVar8 = 0x100b391a8;
                    /* WARNING: Switch is manually overridden */
          if (lVar4 != 0) {
            lVar8 = lVar4;
          }
          func_0x000100937000(uVar3,uVar5,lVar8);
          auVar10 = _objc_alloc(uRam0000000100c715e0);
          auVar10 = func_0x000100948800(auVar10._0_8_,auVar10._8_8_,lVar6);
          func_0x00010004205c(uVar7,auVar10._8_8_,auVar10._0_8_);
          _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(lVar6 != 0) {
          case true:
                    /* WARNING: Switch is manually overridden */
            func_0x000100042060(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          }
          _objc_release(lVar4);
                    /* WARNING: Switch is manually overridden */
          uVar9 = uVar9 + 1;
          uVar1 = uStack_64;
                    /* WARNING: Switch is manually overridden */
        }
      } while( true );
    }
  }
  goto override_jmp_10003b928_case_1;
override_jmp_10003bbb4_case_0:
                    /* WARNING: Switch is manually overridden */
  uVar3 = _objc_retain(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar5 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined8 *)(lVar2 + 0x40) = uVar3;
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x48) = uVar7;
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
override_jmp_10003b928_case_1:
  param_1 = _objc_retain(lVar2);
  uVar3 = param_1;
                    /* WARNING: Switch is manually overridden */
override_jmp_10003b740_case_1:
                    /* WARNING: Switch is manually overridden */
  _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo description]
 * Entry: 0x10003bdb4; original ABI: @16@0:8
 * Original instructions in modeled body: 329; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003bde8 */
/* WARNING: Switch with 1 destination removed at 0x00010003bdfc */
/* WARNING: Switch with 1 destination removed at 0x00010003be08 */
/* WARNING: Switch with 1 destination removed at 0x00010003be5c */
/* WARNING: Switch with 1 destination removed at 0x00010003bf00 */
/* WARNING: Switch with 1 destination removed at 0x00010003bf1c */
/* WARNING: Switch with 1 destination removed at 0x00010003bf30 */
/* WARNING: Switch with 1 destination removed at 0x00010003bf40 */
/* WARNING: Switch with 1 destination removed at 0x00010003bfec */
/* WARNING: Switch with 1 destination removed at 0x00010003bff8 */
/* WARNING: Switch with 1 destination removed at 0x00010003c004 */
/* WARNING: Switch with 1 destination removed at 0x00010003c074 */
/* WARNING: Switch with 1 destination removed at 0x00010003c084 */
/* WARNING: Switch with 1 destination removed at 0x00010003c0b4 */
/* WARNING: Switch with 1 destination removed at 0x00010003c0dc */
/* WARNING: Switch with 1 destination removed at 0x00010003c0ec */
/* WARNING: Switch with 1 destination removed at 0x00010003c0f8 */
/* WARNING: Switch with 1 destination removed at 0x00010003c114 */
/* WARNING: Switch with 1 destination removed at 0x00010003c12c */
/* WARNING: Switch with 1 destination removed at 0x00010003c138 */
/* WARNING: Switch with 1 destination removed at 0x00010003c154 */
/* WARNING: Switch with 1 destination removed at 0x00010003c20c */
/* WARNING: Switch with 1 destination removed at 0x00010003c260 */
/* WARNING: Switch with 1 destination removed at 0x00010003c26c */
/* WARNING: Switch with 1 destination removed at 0x00010003c290 */
/* WARNING: Switch with 1 destination removed at 0x00010003c2a0 */
/* WARNING: Switch with 1 destination removed at 0x00010003c2cc */
/* WARNING: Switch with 1 destination removed at 0x00010003c2d8 */
/* WARNING: Switch with 1 destination removed at 0x00010003c44c */
/* WARNING: Switch with 1 destination removed at 0x00010003c4a4 */
/* WARNING: Switch with 1 destination removed at 0x00010003c4c0 */
/* WARNING: Switch with 1 destination removed at 0x00010003c4dc */

void Recovered_YYYClassMethodInfo_m00236(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f4c == 0) {
  case true:
    bRam0000000100cb1985 = bRam0000000100cb1980 ^ 0xfd;
    bRam0000000100cb1986 = bRam0000000100cb1981 ^ 0xb6;
    bRam0000000100cb1987 = bRam0000000100cb1982 ^ 0x21;
    bRam0000000100cb1988 = bRam0000000100cb1983 ^ 0x70;
    cRam0000000100cb1989 = bRam0000000100cb1984 + (bRam0000000100cb1984 & 0xfd) * -2 + '}';
    bRam0000000100cb198c = bRam0000000100cb198a ^ 0x56;
    bRam0000000100cb198d = bRam0000000100cb198b ^ 0x13;
    bRam0000000100cb199a = bRam0000000100cb198e ^ 0x1b;
    bRam0000000100cb199b = bRam0000000100cb198f ^ 0xc1;
    cRam0000000100cb199c = bRam0000000100cb1990 + (bRam0000000100cb1990 & 0x3a) * -2 + -0x46;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb199d = bRam0000000100cb1991 ^ 0xcc;
    cRam0000000100cb199e = '\x7f' - cRam0000000100cb1992;
    bRam0000000100cb199f = bRam0000000100cb1993 ^ 0x78;
    bRam0000000100cb19a0 = bRam0000000100cb1994 ^ 0xbf;
    bRam0000000100cb19a1 = bRam0000000100cb1995 ^ 0x89;
    bRam0000000100cb19a2 = bRam0000000100cb1996 ^ 0x16;
    bRam0000000100cb19a3 = bRam0000000100cb1997 ^ 0x47;
    bRam0000000100cb19a4 = bRam0000000100cb1998 ^ 0x99;
    bRam0000000100cb19a5 = bRam0000000100cb1999 ^ 0x5c;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e90f4c = 1;
  func_0x000100042070(uRam0000000100c715d8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100042074(param_1);
  func_0x0001000383f4();
  auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100938b40(uVar3,auVar8._8_8_,0x100cb19b0);
  _objc_release(auVar8._0_8_);
  func_0x000100950c20(param_1);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093d2a0(auVar8._0_8_,auVar8._8_8_,0x100cb19d0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    auVar8 = func_0x00010093e360(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 < auVar8._0_8_) {
    case false:
      uVar4 = func_0x00010093e220(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar1);
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
      _objc_autoreleaseReturnValue(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      return;
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100042078(uVar1,auVar8._8_8_,uVar5);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x000100938c00(uVar3,auVar8._8_8_,auVar8._0_8_);
    func_0x000100938fe0(param_1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar2 = func_0x00010093e360(uVar4);
    _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 < uVar2) {
    case true:
      func_0x000100938fe0(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x00010004207c(auVar6._0_8_,auVar6._8_8_,uVar5);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar6._0_8_);
      func_0x000100940540(uVar4);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      func_0x000100951a60(uRam0000000100c71410,auVar6._8_8_,uVar5);
      auVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x000100938b40(uVar3,auVar7._8_8_,0x100cb19f0);
      _objc_release(auVar7._0_8_);
      _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    _objc_release(auVar8._0_8_);
    uVar5 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo method]
 * Entry: 0x10003c4e0; original ABI: ^{objc_method=}16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c4e8 */
/* WARNING: Switch with 1 destination removed at 0x00010003c4f8 */
/* WARNING: Switch with 1 destination removed at 0x00010003c504 */

undefined8 Recovered_YYYClassMethodInfo_m00237(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo name]
 * Entry: 0x10003c510; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c518 */
/* WARNING: Switch with 1 destination removed at 0x00010003c524 */

undefined8 Recovered_YYYClassMethodInfo_m00238(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo sel]
 * Entry: 0x10003c530; original ABI: :16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c538 */
/* WARNING: Switch with 1 destination removed at 0x00010003c548 */
/* WARNING: Switch with 1 destination removed at 0x00010003c554 */

undefined8 Recovered_YYYClassMethodInfo_m00239(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo imp]
 * Entry: 0x10003c560; original ABI: ^?16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYClassMethodInfo_m00240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo typeEncoding]
 * Entry: 0x10003c568; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c570 */
/* WARNING: Switch with 1 destination removed at 0x00010003c57c */
/* WARNING: Switch with 1 destination removed at 0x00010003c588 */

undefined8 Recovered_YYYClassMethodInfo_m00241(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo returnType]
 * Entry: 0x10003c594; original ABI: Q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c59c */
/* WARNING: Switch with 1 destination removed at 0x00010003c5ac */

undefined8 Recovered_YYYClassMethodInfo_m00242(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo returnTypeEncoding]
 * Entry: 0x10003c5b4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c5bc */
/* WARNING: Switch with 1 destination removed at 0x00010003c5c8 */

undefined8 Recovered_YYYClassMethodInfo_m00243(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo argumentTypeEncodings]
 * Entry: 0x10003c5d4; original ABI: @16@0:8
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYClassMethodInfo_m00244(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo arguments]
 * Entry: 0x10003c5dc; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c5e4 */

undefined8 Recovered_YYYClassMethodInfo_m00245(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassMethodInfo .cxx_destruct]
 * Entry: 0x10003c5f0; original ABI: v16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003c608 */
/* WARNING: Switch with 1 destination removed at 0x00010003c618 */
/* WARNING: Switch with 1 destination removed at 0x00010003c684 */
/* WARNING: Switch with 1 destination removed at 0x00010003c6b4 */

void Recovered_YYYClassMethodInfo_m00246(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



