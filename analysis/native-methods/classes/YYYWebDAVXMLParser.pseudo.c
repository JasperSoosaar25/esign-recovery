/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parse]
 * Entry: 0x100057f60; original ABI: @16@0:8
 * Original instructions in modeled body: 217; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100057fa0 */
/* WARNING: Switch with 1 destination removed at 0x000100057fac */
/* WARNING: Switch with 1 destination removed at 0x000100057fc8 */
/* WARNING: Switch with 1 destination removed at 0x000100058020 */
/* WARNING: Switch with 1 destination removed at 0x000100058040 */
/* WARNING: Switch with 1 destination removed at 0x00010005807c */
/* WARNING: Switch with 1 destination removed at 0x000100058118 */
/* WARNING: Switch with 1 destination removed at 0x000100058134 */
/* WARNING: Switch with 1 destination removed at 0x000100058140 */
/* WARNING: Switch with 1 destination removed at 0x000100058168 */
/* WARNING: Switch with 1 destination removed at 0x000100058178 */
/* WARNING: Switch with 1 destination removed at 0x000100058234 */
/* WARNING: Switch with 1 destination removed at 0x00010005824c */
/* WARNING: Switch with 1 destination removed at 0x000100058258 */
/* WARNING: Switch with 1 destination removed at 0x0001000582bc */
/* WARNING: Switch with 1 destination removed at 0x0001000582d8 */
/* WARNING: Switch with 1 destination removed at 0x0001000582e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000582f0 */
/* WARNING: Switch with 1 destination removed at 0x00010005830c */
/* WARNING: Switch with 1 destination removed at 0x00010005835c */

void Recovered_YYYWebDAVXMLParser_m00372(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  long *plVar3;
  undefined **unaff_x23;
  undefined1 auVar4 [16];
  undefined8 auStack_70 [2];
  long alStack_60 [3];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ff8 == 0) {
  case true:
    bRam0000000100cbde65 = bRam0000000100cbde60 ^ 0x9b;
    cRam0000000100cbde66 = bRam0000000100cbde61 + (bRam0000000100cbde61 & 0x1f) * -2 + '\x1f';
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    cRam0000000100cbde67 = bRam0000000100cbde62 + (bRam0000000100cbde62 & 0x22) * -2 + -0x5e;
    bRam0000000100cbde68 = bRam0000000100cbde63 ^ 0xcc;
    bRam0000000100cbde69 = bRam0000000100cbde64 ^ 0x71;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90ff8 = 1;
  plVar3 = alStack_60;
  func_0x00010093f1c0(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
    unaff_x23 = &PTR_s_y_fileName_100c71000;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    param_1 = 0;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_100058178_case_0;
  }
  while( true ) {
    uVar2 = func_0x0001000595f8(unaff_x23[0xd9]);
    func_0x0001000595fc(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    unaff_x23 = auVar4._0_8_;
    auVar4 = func_0x000100948d80(uVar2,auVar4._8_8_,unaff_x23);
    func_0x000100059600(param_1,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    _objc_release(unaff_x23);
    func_0x000100952ca0(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100059604(auVar4._0_8_,auVar4._8_8_,param_1);
    _objc_release(auVar4._0_8_);
    func_0x000100059608(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x00010005960c();
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(long *)(param_1 + 0x30) != 0) {
    case false:
      lVar1 = 0;
      plVar3 = (long *)0x0;
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      auStack_70[0] = 0x100cbde70;
                    /* WARNING: Switch is manually overridden */
      *plVar3 = *(long *)(param_1 + 0x30);
      lVar1 = 1;
      func_0x000100059610(uRam0000000100c71458,extraout_x1,plVar3,auStack_70,1);
      plVar3 = (long *)_objc_retainAutoreleasedReturnValue();
    }
    param_1 = _objc_retain(plVar3);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar1 * 8 + 0x100cbe1d8)) {
    case 0x1000582b4:
                    /* WARNING: Switch is manually overridden */
      _objc_release(plVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
override_jmp_100058178_case_0:
                    /* WARNING: Switch is manually overridden */
    _objc_autoreleaseReturnValue(param_1);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_48) break;
    ___stack_chk_fail();
    _objc_alloc(unaff_x23[0xd9]);
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parserDidStartDocument:]
 * Entry: 0x100058360; original ABI: v24@0:8@16
 * Original instructions in modeled body: 1; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYWebDAVXMLParser_m00373(void)

{
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parserDidEndDocument:]
 * Entry: 0x100058364; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010005837c */
/* WARNING: Switch with 1 destination removed at 0x000100058388 */
/* WARNING: Switch with 1 destination removed at 0x0001000583a4 */
/* WARNING: Switch with 1 destination removed at 0x0001000583b4 */
/* WARNING: Switch with 1 destination removed at 0x0001000583dc */

void Recovered_YYYWebDAVXMLParser_m00374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parser:validationErrorOccurred:]
 * Entry: 0x1000583e0; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000583f8 */
/* WARNING: Switch with 1 destination removed at 0x000100058404 */
/* WARNING: Switch with 1 destination removed at 0x000100058414 */
/* WARNING: Switch with 1 destination removed at 0x000100058430 */
/* WARNING: Switch with 1 destination removed at 0x000100058458 */

void Recovered_YYYWebDAVXMLParser_m00375(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parser:didStartElement:namespaceURI:qualifiedName:attributes:]
 * Entry: 0x10005845c; original ABI: v56@0:8@16@24@32@40@48
 * Original instructions in modeled body: 174; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100058498 */
/* WARNING: Switch with 1 destination removed at 0x0001000584ac */
/* WARNING: Switch with 1 destination removed at 0x0001000584c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000585bc */
/* WARNING: Switch with 1 destination removed at 0x0001000585c8 */
/* WARNING: Switch with 1 destination removed at 0x0001000585d8 */
/* WARNING: Switch with 1 destination removed at 0x000100058610 */
/* WARNING: Switch with 1 destination removed at 0x000100058624 */
/* WARNING: Switch with 1 destination removed at 0x00010005865c */
/* WARNING: Switch with 1 destination removed at 0x000100058668 */
/* WARNING: Switch with 1 destination removed at 0x000100058674 */
/* WARNING: Switch with 1 destination removed at 0x000100058684 */
/* WARNING: Switch with 1 destination removed at 0x000100058690 */
/* WARNING: Switch with 1 destination removed at 0x000100058740 */
/* WARNING: Switch with 1 destination removed at 0x000100058784 */
/* WARNING: Switch with 1 destination removed at 0x0001000587a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000587ec */

void Recovered_YYYWebDAVXMLParser_m00376
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar4;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e90ffc == 0) {
  case true:
    bRam0000000100cbde9b = bRam0000000100cbde90 ^ 0x43;
    bRam0000000100cbde9c = bRam0000000100cbde91 ^ 0xa5;
    bRam0000000100cbde9d = bRam0000000100cbde92 ^ 0x22;
    bRam0000000100cbde9e = bRam0000000100cbde93 ^ 0x78;
    bRam0000000100cbde9f = bRam0000000100cbde94 ^ 0x4a;
    bRam0000000100cbdea0 = bRam0000000100cbde95 ^ 0xb0;
    cRam0000000100cbdea1 = bRam0000000100cbde96 + (bRam0000000100cbde96 & 5) * -2 + '\x05';
    bRam0000000100cbdea2 = bRam0000000100cbde97 ^ 0xdf;
    cRam0000000100cbdea3 = bRam0000000100cbde98 + (bRam0000000100cbde98 & 0x6a) * -2 + -0x16;
    cRam0000000100cbdea4 = bRam0000000100cbde99 + (bRam0000000100cbde99 & 0x35) * -2 + '5';
    bRam0000000100cbdea5 = bRam0000000100cbde9a ^ 0x77;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e90ffc = 1;
  _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_7);
                    /* WARNING: Switch is manually overridden */
  uVar1 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 8) != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100973da0(uRam0000000100c715d8);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar1;
    _objc_release(uVar4);
    uVar1 = extraout_x1_00;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  func_0x00010096d8e0(*(undefined8 *)(param_1 + 8),uVar1,0x100b391a8);
  uVar3 = func_0x00010094b580(uVar2,extraout_x1_01,0x100cbdeb0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001000586a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100cbe408))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parser:didEndElement:namespaceURI:qualifiedName:]
 * Entry: 0x10005883c; original ABI: v48@0:8@16@24@32@40
 * Original instructions in modeled body: 373; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100058870 */
/* WARNING: Switch with 1 destination removed at 0x000100058910 */
/* WARNING: Switch with 1 destination removed at 0x000100058d20 */
/* WARNING: Switch with 1 destination removed at 0x000100058d2c */
/* WARNING: Switch with 1 destination removed at 0x000100058d38 */
/* WARNING: Switch with 1 destination removed at 0x000100058d44 */
/* WARNING: Switch with 1 destination removed at 0x000100058da4 */
/* WARNING: Switch with 1 destination removed at 0x000100059240 */
/* WARNING: Switch with 1 destination removed at 0x000100059284 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYWebDAVXMLParser_m00377
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91000 == 0) {
  case true:
    bRam0000000100cbdf96 = bRam0000000100cbdf91 ^ 0x1d;
    bRam0000000100cbdf97 = bRam0000000100cbdf92 ^ 0xf5;
    bRam0000000100cbdf98 = bRam0000000100cbdf93 ^ 0x1d;
    bRam0000000100cbdf99 = bRam0000000100cbdf94 ^ 0x55;
    bRam0000000100cbdf9a = bRam0000000100cbdf95 ^ 0x54;
    bRam0000000100cbdef5 = bRam0000000100cbdef1 ^ 99;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100cbdef6 = bRam0000000100cbdef2 + (bRam0000000100cbdef2 & 1) * -2 + -0x7f;
    bRam0000000100cbdef7 = bRam0000000100cbdef3 ^ 0xec;
    bRam0000000100cbdef8 = bRam0000000100cbdef4 ^ 0x59;
    bRam0000000100cbdf07 = bRam0000000100cbdef9 ^ 0x46;
    bRam0000000100cbdf08 = bRam0000000100cbdefa ^ 0xd5;
    bRam0000000100cbdf09 = ~((bRam0000000100cbdefb | 0xf5) & (bRam0000000100cbdefb ^ 0xff | 10));
    bRam0000000100cbdf0a = bRam0000000100cbdefc ^ 0x84;
    bRam0000000100cbdf0b = bRam0000000100cbdefd ^ 0xc3;
    bRam0000000100cbdf0c = bRam0000000100cbdefe ^ 0x8d;
    bRam0000000100cbdf0d = bRam0000000100cbdeff ^ 0xfd;
    bRam0000000100cbdf0e = bRam0000000100cbdf00 ^ 0x4a;
    bRam0000000100cbdf0f = ~((bRam0000000100cbdf01 | 0x8a) & (bRam0000000100cbdf01 ^ 0xff | 0x75));
    cRam0000000100cbdf10 = bRam0000000100cbdf02 + (bRam0000000100cbdf02 & 0x59) * -2 + -0x27;
    bRam0000000100cbdf11 = bRam0000000100cbdf03 ^ 0xf8;
    bRam0000000100cbdf12 = bRam0000000100cbdf04 ^ 0x4c;
    bRam0000000100cbdf13 = bRam0000000100cbdf05 ^ 0x6b;
    bRam0000000100cbdf14 = bRam0000000100cbdf06 ^ 0x50;
    cRam0000000100cbdf80 = bRam0000000100cbdf60 + (bRam0000000100cbdf60 & 0xe7) * -2 + 'g';
    bRam0000000100cbdf81 = bRam0000000100cbdf61 ^ 9;
    bRam0000000100cbdf82 = bRam0000000100cbdf62 ^ 0xed;
    bRam0000000100cbdf83 = bRam0000000100cbdf63 ^ 0xf1;
    bRam0000000100cbdf84 = bRam0000000100cbdf64 ^ 0xf6;
    bRam0000000100cbdf85 = bRam0000000100cbdf65 ^ 0xd2;
    bRam0000000100cbdf86 = bRam0000000100cbdf66 ^ 0x82;
    bRam0000000100cbdf87 = bRam0000000100cbdf67 ^ 0x42;
    bRam0000000100cbdf88 = ~((bRam0000000100cbdf68 | 0xf7) & (~bRam0000000100cbdf68 | 8));
    bRam0000000100cbdf89 = bRam0000000100cbdf69 ^ 0xeb;
    bRam0000000100cbdf8a = bRam0000000100cbdf6a ^ 0xa6;
    bRam0000000100cbdf8b = bRam0000000100cbdf6b ^ 0xf7;
    bRam0000000100cbdf8c = bRam0000000100cbdf6c ^ 0x43;
    bRam0000000100cbdf8d = bRam0000000100cbdf6d ^ 0xba;
    bRam0000000100cbdf8e = bRam0000000100cbdf6e ^ 0x58;
    cRam0000000100cbdf8f = bRam0000000100cbdf6f + (bRam0000000100cbdf6f & 0xc3) * -2 + -0x3d;
    bRam0000000100cbdf90 = bRam0000000100cbdf70 ^ 0x20;
    bRam0000000100cbdf40 = bRam0000000100cbdf20 ^ 0xfb;
    bRam0000000100cbdf41 = bRam0000000100cbdf21 ^ 0x7d;
    bRam0000000100cbdf42 = bRam0000000100cbdf22 ^ 0xa5;
    bRam0000000100cbdf43 = bRam0000000100cbdf23 ^ 0x1f;
    bRam0000000100cbdf44 = bRam0000000100cbdf24 ^ 0x13;
    cRam0000000100cbdf45 = bRam0000000100cbdf25 + (bRam0000000100cbdf25 & 0xf1) * -2 + -0xf;
    bRam0000000100cbdf46 = bRam0000000100cbdf26 ^ 0xa2;
    bRam0000000100cbdf47 = bRam0000000100cbdf27 ^ 0x46;
    bRam0000000100cbdf48 = bRam0000000100cbdf28 ^ 0x73;
    bRam0000000100cbdf49 = bRam0000000100cbdf29 ^ 0x3d;
    bRam0000000100cbdf4a = bRam0000000100cbdf2a ^ 0xaf;
    cRam0000000100cbdf4b = bRam0000000100cbdf2b + (bRam0000000100cbdf2b & 0x23) * -2 + '#';
    bRam0000000100cbdf4c = bRam0000000100cbdf2c ^ 0x1f;
    bRam0000000100cbdf4d = bRam0000000100cbdf2d ^ 0x51;
    bRam0000000100cbdf4e = bRam0000000100cbdf2e ^ 0x69;
    cRam0000000100cbdf4f = bRam0000000100cbdf2f + (bRam0000000100cbdf2f & 0x72) * -2 + 'r';
    bRam0000000100cbdf50 = bRam0000000100cbdf30 ^ 0x13;
    bRam0000000100cbdf51 = bRam0000000100cbdf31 ^ 0xf6;
    uRam0000000100cbdee0 =
         CONCAT17((byte)((ulong)uRam0000000100cbded0 >> 0x38) ^
                  (byte)((ulong)_UNK_10097b538 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100cbded0 >> 0x30) ^
                           (byte)((ulong)_UNK_10097b538 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100cbded0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097b538 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100cbded0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097b538 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100cbded0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097b538 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100cbded0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097b538 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100cbded0 >> 8) ^
                                                  (byte)((ulong)_UNK_10097b538 >> 8),
                                                  (byte)uRam0000000100cbded0 ^ (byte)_UNK_10097b538)
                                                  ))))));
    bRam0000000100cbdee8 = bRam0000000100cbded8 ^ 0x21;
    bRam0000000100cbdee9 = bRam0000000100cbded9 ^ 0xad;
    cRam0000000100cbdeea = bRam0000000100cbdeda + (bRam0000000100cbdeda & 0xf1) * -2 + 'q';
    bRam0000000100cbdeee = bRam0000000100cbdeeb ^ 0xbb;
    bRam0000000100cbdeef = bRam0000000100cbdeec ^ 0x11;
    bRam0000000100cbdef0 = bRam0000000100cbdeed ^ 0xc3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e91000 = 1;
  _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_5);
  _objc_retain(param_6);
  auVar3 = _objc_retain(uVar2);
  uVar1 = func_0x00010005961c(auVar3._0_8_,auVar3._8_8_,0x100cbdfc0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100058db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100cbe4f8))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parser:foundCharacters:]
 * Entry: 0x10005934c; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010005936c */

void Recovered_YYYWebDAVXMLParser_m00378
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010005963c(*(undefined8 *)(param_1 + 8),param_2,param_4);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser data]
 * Entry: 0x100059374; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010005937c */
/* WARNING: Switch with 1 destination removed at 0x000100059388 */
/* WARNING: Switch with 1 destination removed at 0x000100059398 */

undefined8 Recovered_YYYWebDAVXMLParser_m00379(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x18);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser setData:]
 * Entry: 0x1000593a0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000593bc */
/* WARNING: Switch with 1 destination removed at 0x0001000593c8 */
/* WARNING: Switch with 1 destination removed at 0x0001000593e4 */

void Recovered_YYYWebDAVXMLParser_m00380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser uriLength]
 * Entry: 0x100059400; original ABI: Q16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059408 */
/* WARNING: Switch with 1 destination removed at 0x000100059414 */

undefined8 Recovered_YYYWebDAVXMLParser_m00381(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser setUriLength:]
 * Entry: 0x100059420; original ABI: v24@0:8Q16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059428 */
/* WARNING: Switch with 1 destination removed at 0x000100059438 */

void Recovered_YYYWebDAVXMLParser_m00382(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser parser]
 * Entry: 0x100059440; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059448 */

undefined8 Recovered_YYYWebDAVXMLParser_m00383(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser setParser:]
 * Entry: 0x100059454; original ABI: v24@0:8@16
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059468 */
/* WARNING: Switch with 1 destination removed at 0x00010005947c */

void Recovered_YYYWebDAVXMLParser_m00384(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x28,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser directoryBucket]
 * Entry: 0x100059488; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059490 */
/* WARNING: Switch with 1 destination removed at 0x00010005949c */

undefined8 Recovered_YYYWebDAVXMLParser_m00385(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser setDirectoryBucket:]
 * Entry: 0x1000594a8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000594c8 */
/* WARNING: Switch with 1 destination removed at 0x0001000594e4 */
/* WARNING: Switch with 1 destination removed at 0x0001000594f8 */
/* WARNING: Switch with 1 destination removed at 0x00010005952c */

void Recovered_YYYWebDAVXMLParser_m00386(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVXMLParser .cxx_destruct]
 * Entry: 0x100059530; original ABI: v16@0:8
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100059548 */
/* WARNING: Switch with 1 destination removed at 0x000100059554 */
/* WARNING: Switch with 1 destination removed at 0x0001000595a8 */
/* WARNING: Switch with 1 destination removed at 0x0001000595f4 */

void Recovered_YYYWebDAVXMLParser_m00387(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
  _objc_storeStrong(param_1 + 8,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYWebDAVXMLParser parserWithData:]
 * Entry: 0x100057eb0; original ABI: @24@0:8@16
 * Original instructions in modeled body: 42; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100057ecc */
/* WARNING: Switch with 1 destination removed at 0x000100057eec */
/* WARNING: Switch with 1 destination removed at 0x000100057ef8 */

void Recovered_YYYWebDAVXMLParser_m00388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = func_0x000100951360(uRam0000000100c716c0);
  func_0x000100939020(uRam0000000100c71378);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963280(uVar2,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  func_0x0001009628a0(uVar2,extraout_x1,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



