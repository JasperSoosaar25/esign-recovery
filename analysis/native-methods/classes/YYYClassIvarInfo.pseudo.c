/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo initWithIvar:]
 * Entry: 0x10003aa7c; original ABI: @24@0:8^{objc_ivar=}16
 * Original instructions in modeled body: 128; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003aaa8 */
/* WARNING: Switch with 1 destination removed at 0x00010003aab4 */
/* WARNING: Switch with 1 destination removed at 0x00010003aad8 */
/* WARNING: Switch with 1 destination removed at 0x00010003aae8 */
/* WARNING: Switch with 1 destination removed at 0x00010003ab04 */
/* WARNING: Switch with 1 destination removed at 0x00010003ab3c */
/* WARNING: Switch with 1 destination removed at 0x00010003aba4 */
/* WARNING: Switch with 1 destination removed at 0x00010003abd8 */
/* WARNING: Switch with 1 destination removed at 0x00010003ac18 */
/* WARNING: Switch with 1 destination removed at 0x00010003ac24 */
/* WARNING: Switch with 1 destination removed at 0x00010003ac50 */
/* WARNING: Switch with 1 destination removed at 0x00010003ac60 */
/* WARNING: Switch with 1 destination removed at 0x00010003ac6c */
/* WARNING: Switch with 1 destination removed at 0x00010003ac98 */
/* WARNING: Switch with 1 destination removed at 0x00010003acb4 */

undefined8 Recovered_YYYClassIvarInfo_m00222(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uStack_48 = uRam0000000100c73890;
    uStack_50 = param_1;
    _objc_msgSendSuper2(&uStack_50,PTR_s_init_100c60da0);
    lVar1 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
    _objc_release();
    *(long *)(lVar1 + 8) = param_3;
    auVar5 = func_0x000100042014(param_3);
                    /* WARNING: Switch is manually overridden */
    switch(auVar5._0_8_ != 0) {
    case true:
      func_0x000100974240(uRam0000000100c71448,auVar5._8_8_,auVar5._0_8_);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      _objc_release(uVar3);
    }
    uVar2 = _ivar_getOffset(param_3);
                    /* WARNING: Switch is manually overridden */
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
    auVar5 = _ivar_getTypeEncoding(param_3);
    lVar4 = auVar5._0_8_;
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100042018(uRam0000000100c71448,auVar5._8_8_,lVar4);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar3);
      uVar2 = func_0x000100037144(lVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      *(undefined8 *)(lVar1 + 0x28) = uVar2;
                    /* WARNING: Switch is manually overridden */
    }
    param_1 = _objc_retain(lVar1);
    uVar2 = param_1;
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo description]
 * Entry: 0x10003acd4; original ABI: @16@0:8
 * Original instructions in modeled body: 177; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003ad04 */
/* WARNING: Switch with 1 destination removed at 0x00010003ad18 */
/* WARNING: Switch with 1 destination removed at 0x00010003ad24 */
/* WARNING: Switch with 1 destination removed at 0x00010003ae58 */
/* WARNING: Switch with 1 destination removed at 0x00010003aeb0 */
/* WARNING: Switch with 1 destination removed at 0x00010003af20 */
/* WARNING: Switch with 1 destination removed at 0x00010003af3c */
/* WARNING: Switch with 1 destination removed at 0x00010003af68 */

void Recovered_YYYClassIvarInfo_m00223(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90f48 == 0) {
  case true:
    cRam0000000100cb1895 = bRam0000000100cb1890 + (bRam0000000100cb1890 & 0x1e) * -2 + -0x62;
    cRam0000000100cb1896 = bRam0000000100cb1891 + (bRam0000000100cb1891 & 0x2d) * -2 + '-';
    bRam0000000100cb1897 = bRam0000000100cb1892 ^ 0x82;
    cRam0000000100cb1898 = bRam0000000100cb1893 + (bRam0000000100cb1893 & 0x4a) * -2 + -0x36;
    bRam0000000100cb1899 = bRam0000000100cb1894 ^ 0x61;
    bRam0000000100cb189c = bRam0000000100cb189a ^ 0x9a;
    cRam0000000100cb189d = bRam0000000100cb189b + (bRam0000000100cb189b & 0x3d) * -2 + -0x43;
    bRam0000000100cb18a3 = bRam0000000100cb189e ^ 0xbc;
    bRam0000000100cb18a4 = bRam0000000100cb189f ^ 0x56;
    bRam0000000100cb18a5 = bRam0000000100cb18a0 ^ 0x82;
    bRam0000000100cb18a6 = bRam0000000100cb18a1 ^ 0x25;
    cRam0000000100cb18a7 = bRam0000000100cb18a2 + (bRam0000000100cb18a2 & 0x1c) * -2 + -100;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb18aa = bRam0000000100cb18a8 ^ 0x42;
    bRam0000000100cb18ab = bRam0000000100cb18a9 ^ 0x4b;
    bRam0000000100cb18af = bRam0000000100cb18ac ^ 0x8f;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cb18b0 = bRam0000000100cb18ad ^ 0xf2;
    cRam0000000100cb18b1 = bRam0000000100cb18ae + (bRam0000000100cb18ae & 0x74) * -2 + -0xc;
    bRam0000000100cb18b4 = bRam0000000100cb18b2 ^ 0x36;
    bRam0000000100cb18b5 = bRam0000000100cb18b3 ^ 0xe1;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90f48 = 1;
                    /* WARNING: Switch is manually overridden */
  func_0x000100973da0(uRam0000000100c715d8);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x0001009776c0(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = func_0x000100042020(auVar2._0_8_,auVar2._8_8_,0x100cb1940);
  _objc_release(auVar2._0_8_);
                    /* WARNING: Could not recover jumptable at 0x00010003afa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100cb36e8))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo ivar]
 * Entry: 0x10003b37c; original ABI: ^{objc_ivar=}16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b384 */

undefined8 Recovered_YYYClassIvarInfo_m00224(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 8);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo name]
 * Entry: 0x10003b390; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b398 */
/* WARNING: Switch with 1 destination removed at 0x00010003b3a4 */

undefined8 Recovered_YYYClassIvarInfo_m00225(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x10);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo offset]
 * Entry: 0x10003b3b0; original ABI: q16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b3b8 */

undefined8 Recovered_YYYClassIvarInfo_m00226(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo typeEncoding]
 * Entry: 0x10003b3c4; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b3cc */
/* WARNING: Switch with 1 destination removed at 0x00010003b3d8 */

undefined8 Recovered_YYYClassIvarInfo_m00227(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo type]
 * Entry: 0x10003b3e4; original ABI: Q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b3ec */
/* WARNING: Switch with 1 destination removed at 0x00010003b3f8 */

undefined8 Recovered_YYYClassIvarInfo_m00228(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYClassIvarInfo .cxx_destruct]
 * Entry: 0x10003b404; original ABI: v16@0:8
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010003b41c */
/* WARNING: Switch with 1 destination removed at 0x00010003b428 */
/* WARNING: Switch with 1 destination removed at 0x00010003b434 */
/* WARNING: Switch with 1 destination removed at 0x00010003b47c */

void Recovered_YYYClassIvarInfo_m00229(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



