/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 initWithP12Data:password:]
 * Entry: 0x10071c64c; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 131; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c678 */
/* WARNING: Switch with 1 destination removed at 0x00010071c698 */
/* WARNING: Switch with 1 destination removed at 0x00010071c6a4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c6cc */
/* WARNING: Switch with 1 destination removed at 0x00010071c6e8 */
/* WARNING: Switch with 1 destination removed at 0x00010071c6f4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c71c */
/* WARNING: Switch with 1 destination removed at 0x00010071c728 */
/* WARNING: Switch with 1 destination removed at 0x00010071c750 */
/* WARNING: Switch with 1 destination removed at 0x00010071c764 */
/* WARNING: Switch with 1 destination removed at 0x00010071c780 */
/* WARNING: Switch with 1 destination removed at 0x00010071c7a4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c7c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071c7d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c7f8 */
/* WARNING: Switch with 1 destination removed at 0x00010071c804 */
/* WARNING: Switch with 1 destination removed at 0x00010071c838 */
/* WARNING: Switch with 1 destination removed at 0x00010071c864 */
/* WARNING: Switch with 1 destination removed at 0x00010071c874 */
/* WARNING: Switch with 1 destination removed at 0x00010071c8c0 */

undefined8
Recovered_YYYP12_m03111(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x00010094d6e0(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100948020(param_1);
      lVar3 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar3 != 0) {
      case false:
        param_1 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
        uVar5 = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x0001009628a0(lVar3,extraout_x1,lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100968d00(lVar3,extraout_x1_00,uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100965d20(lVar3,extraout_x1_01,1);
        uVar4 = func_0x0001009707c0(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010071c848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e12530))();
        return uVar5;
      }
    }
  }
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  return uVar5;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 initWithCertificateData:]
 * Entry: 0x10071c8c4; original ABI: @24@0:8@16
 * Original instructions in modeled body: 106; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071c8e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071c8f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c8fc */
/* WARNING: Switch with 1 destination removed at 0x00010071c918 */
/* WARNING: Switch with 1 destination removed at 0x00010071c944 */
/* WARNING: Switch with 1 destination removed at 0x00010071c960 */
/* WARNING: Switch with 1 destination removed at 0x00010071c96c */
/* WARNING: Switch with 1 destination removed at 0x00010071c994 */
/* WARNING: Switch with 1 destination removed at 0x00010071c9b0 */
/* WARNING: Switch with 1 destination removed at 0x00010071c9d8 */
/* WARNING: Switch with 1 destination removed at 0x00010071c9e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ca18 */
/* WARNING: Switch with 1 destination removed at 0x00010071ca24 */
/* WARNING: Switch with 1 destination removed at 0x00010071ca50 */
/* WARNING: Switch with 1 destination removed at 0x00010071ca88 */
/* WARNING: Switch with 1 destination removed at 0x00010071caa4 */

undefined8 Recovered_YYYP12_m03112(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lVar2 = func_0x00010094d6e0(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(lVar2 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      auVar5 = func_0x000100948020(param_1);
      lVar2 = auVar5._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 != 0) {
      case false:
        param_1 = _objc_retain(lVar2);
        uVar3 = param_1;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        func_0x0001009628a0(lVar2,auVar5._8_8_,lVar1);
                    /* WARNING: Switch is manually overridden */
        uVar4 = func_0x0001009707c0(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010071c9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)((uVar4 & 0xffffffff) * 8 + 0x100e12680))();
        return uVar3;
                    /* WARNING: Switch is manually overridden */
      }
    }
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setup]
 * Entry: 0x10071caa8; original ABI: B16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071cacc */
/* WARNING: Switch with 1 destination removed at 0x00010071cae8 */
/* WARNING: Switch with 1 destination removed at 0x00010071caf4 */

void Recovered_YYYP12_m03113(undefined8 param_1)

{
  ulong uVar1;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010094bde0(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010071cb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100e126f0))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setupProperty]
 * Entry: 0x10071d0a8; original ABI: v16@0:8
 * Original instructions in modeled body: 476; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071d0d0 */
/* WARNING: Switch with 1 destination removed at 0x00010071d0e8 */
/* WARNING: Switch with 1 destination removed at 0x00010071d0f4 */
/* WARNING: Switch with 1 destination removed at 0x00010071d110 */
/* WARNING: Switch with 1 destination removed at 0x00010071d37c */
/* WARNING: Switch with 1 destination removed at 0x00010071d3c0 */
/* WARNING: Switch with 1 destination removed at 0x00010071d45c */
/* WARNING: Switch with 1 destination removed at 0x00010071d468 */
/* WARNING: Switch with 1 destination removed at 0x00010071d484 */
/* WARNING: Switch with 1 destination removed at 0x00010071d4ac */
/* WARNING: Switch with 1 destination removed at 0x00010071d4f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071d528 */
/* WARNING: Switch with 1 destination removed at 0x00010071d550 */
/* WARNING: Switch with 1 destination removed at 0x00010071d578 */
/* WARNING: Switch with 1 destination removed at 0x00010071d584 */
/* WARNING: Switch with 1 destination removed at 0x00010071d590 */
/* WARNING: Switch with 1 destination removed at 0x00010071d5b4 */
/* WARNING: Switch with 1 destination removed at 0x00010071d5d8 */
/* WARNING: Switch with 1 destination removed at 0x00010071d5e8 */
/* WARNING: Switch with 1 destination removed at 0x00010071d654 */
/* WARNING: Switch with 1 destination removed at 0x00010071d660 */
/* WARNING: Switch with 1 destination removed at 0x00010071d66c */
/* WARNING: Switch with 1 destination removed at 0x00010071d678 */
/* WARNING: Switch with 1 destination removed at 0x00010071d6a0 */
/* WARNING: Switch with 1 destination removed at 0x00010071d6b0 */
/* WARNING: Switch with 1 destination removed at 0x00010071d78c */
/* WARNING: Switch with 1 destination removed at 0x00010071d888 */
/* WARNING: Switch with 1 destination removed at 0x00010071d894 */
/* WARNING: Switch with 1 destination removed at 0x00010071d9ec */
/* WARNING: Switch with 1 destination removed at 0x00010071da14 */
/* WARNING: Switch with 1 destination removed at 0x00010071da50 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYP12_m03114(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d88 == 0) {
  case true:
    bRam0000000100e0fc2a = bRam0000000100e0fc27 ^ 0xf;
    bRam0000000100e0fc2b = bRam0000000100e0fc28 ^ 0x94;
    bRam0000000100e0fc2c = bRam0000000100e0fc29 ^ 0x76;
    cRam0000000100e0fc30 = bRam0000000100e0fc2d + (bRam0000000100e0fc2d & 0x65) * -2 + 'e';
    cRam0000000100e0fc31 = '\x7f' - cRam0000000100e0fc2e;
    bRam0000000100e0fc32 = bRam0000000100e0fc2f ^ 0xac;
    uRam0000000100e0fc10 =
         CONCAT17((byte)((ulong)uRam0000000100e0fbf0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b700 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fbf0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b700 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fbf0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b700 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fbf0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b700 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fbf0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b700 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fbf0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b700 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fbf0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b700 >> 8),
                                                  (byte)uRam0000000100e0fbf0 ^ (byte)_UNK_10099b700)
                                                  ))))));
    bRam0000000100e0fc18 = bRam0000000100e0fbf8 ^ 0xfd;
    bRam0000000100e0fc19 = bRam0000000100e0fbf9 ^ 0x90;
    cRam0000000100e0fc1a = bRam0000000100e0fbfa + (bRam0000000100e0fbfa & 0xe) * -2 + -0x72;
    bRam0000000100e0fc1b = bRam0000000100e0fbfb ^ 0x7f;
    bRam0000000100e0fc1c = bRam0000000100e0fbfc ^ 0x59;
    cRam0000000100e0fc1d = bRam0000000100e0fbfd + (bRam0000000100e0fbfd & 0x58) * -2 + 'X';
    bRam0000000100e0fc1e = ~((bRam0000000100e0fbfe | 0xc) & (~bRam0000000100e0fbfe | 0xf3));
    cRam0000000100e0fc1f = bRam0000000100e0fbff + (bRam0000000100e0fbff & 0xc) * -2 + '\f';
    bRam0000000100e0fc20 = bRam0000000100e0fc00 ^ 0xcc;
    bRam0000000100e0fc21 = bRam0000000100e0fc01 ^ 0xef;
    bRam0000000100e0fc22 = bRam0000000100e0fc02 ^ 0xf8;
    bRam0000000100e0fc23 = bRam0000000100e0fc03 ^ 0xe2;
    bRam0000000100e0fc24 = bRam0000000100e0fc04 ^ 0x76;
    bRam0000000100e0fc25 = bRam0000000100e0fc05 ^ 0xe7;
    bRam0000000100e0fc26 = bRam0000000100e0fc06 ^ 0x3e;
    cRam0000000100e0fbdc = bRam0000000100e0fbd0 + (bRam0000000100e0fbd0 & 0x45) * -2 + 'E';
    bRam0000000100e0fbdd = bRam0000000100e0fbd1 ^ 0x21;
    bRam0000000100e0fbde = bRam0000000100e0fbd2 ^ 0x37;
    bRam0000000100e0fbdf = bRam0000000100e0fbd3 ^ 0x98;
    bRam0000000100e0fbe0 = bRam0000000100e0fbd4 ^ 0xd4;
    bRam0000000100e0fbe1 = bRam0000000100e0fbd5 ^ 0xd7;
    bRam0000000100e0fbe2 = bRam0000000100e0fbd6 ^ 0x68;
    bRam0000000100e0fbe3 = bRam0000000100e0fbd7 ^ 0x9e;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fbe4 = bRam0000000100e0fbd8 ^ 0x2f;
    bRam0000000100e0fbe5 = bRam0000000100e0fbd9 ^ 0xf9;
    bRam0000000100e0fbe6 = bRam0000000100e0fbda ^ 0x3b;
    bRam0000000100e0fbe7 = bRam0000000100e0fbdb ^ 0xed;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95d88 = 1;
                    /* WARNING: Switch is manually overridden */
  plVar5 = *(long **)(param_1 + 8);
                    /* WARNING: Switch is manually overridden */
  switch(plVar5 == (long *)0x0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x00010097ac60(param_1,param_2,**(undefined8 **)(*plVar5 + 0x20));
    auVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010097ac60(param_1,auVar6._8_8_,*(undefined8 *)(*(long *)(*plVar5 + 0x20) + 8));
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x000100951360(uRam0000000100c71530);
    auVar8 = _objc_alloc(uRam0000000100c71538);
    auVar8 = func_0x0001009495c0(auVar8._0_8_,auVar8._8_8_,0x100e0fc40);
    func_0x000100966ba0(uVar3,auVar8._8_8_,auVar8._0_8_);
    _objc_release(auVar8._0_8_);
    func_0x0001009629a0(uVar3,extraout_x1,0x100e0fc60);
    func_0x00010093f640(uVar3,extraout_x1_00,auVar6._0_8_);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x00010093f640(uVar3,auVar8._8_8_,uVar2);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009684e0(param_1,auVar9._8_8_,auVar8._0_8_);
    func_0x0001009684c0(param_1,extraout_x1_01,auVar9._0_8_);
    lVar4 = func_0x00010061f28c(plVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 != 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      lVar4 = func_0x000100612cac(lVar4,0);
      uVar1 = uRam0000000100c71448;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar4 != 0) {
      case true:
                    /* WARNING: Switch is manually overridden */
        auVar10 = func_0x0001005d490c(lVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x000100974140(uVar1,auVar10._8_8_,auVar10._0_8_,4);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        func_0x00010096c640(param_1,auVar10._8_8_,auVar10._0_8_);
        _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    }
    func_0x000100616600(plVar5);
    auVar10 = func_0x0001005b305c();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar10._0_8_ != 0) {
    case true:
      func_0x000100974140(uRam0000000100c71448,auVar10._8_8_,auVar10._0_8_,4);
      auVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010096d1e0(param_1,auVar10._8_8_,auVar10._0_8_);
      _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
    }
    func_0x000100952b60(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096dac0(param_1,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    func_0x000100974580(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100951cc0(auVar10._0_8_,auVar10._8_8_,0x100e0fc80);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009688a0(param_1,auVar7._8_8_,auVar7._0_8_);
    _objc_release(auVar7._0_8_);
    _objc_release(auVar10._0_8_);
    func_0x000100974580(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100951cc0(auVar10._0_8_,auVar10._8_8_,0x100e0fca0);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096dae0(param_1,auVar7._8_8_,auVar7._0_8_);
    _objc_release(auVar7._0_8_);
    _objc_release(auVar10._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x0001009529a0(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x000100965fa0(param_1,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    func_0x0001009451c0(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009603a0(param_1,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    _objc_release(auVar9._0_8_);
    _objc_release(auVar8._0_8_);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 yyy_ASN1_TIMEtoNSString:]
 * Entry: 0x10071da54; original ABI: @24@0:8^{asn1_string_st=ii*q}16
 * Original instructions in modeled body: 142; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071da7c */
/* WARNING: Switch with 1 destination removed at 0x00010071da88 */
/* WARNING: Switch with 1 destination removed at 0x00010071da94 */
/* WARNING: Switch with 1 destination removed at 0x00010071dab8 */
/* WARNING: Switch with 1 destination removed at 0x00010071dad4 */
/* WARNING: Switch with 1 destination removed at 0x00010071db04 */
/* WARNING: Switch with 1 destination removed at 0x00010071db14 */
/* WARNING: Switch with 1 destination removed at 0x00010071db20 */
/* WARNING: Switch with 1 destination removed at 0x00010071db44 */
/* WARNING: Switch with 1 destination removed at 0x00010071db54 */
/* WARNING: Switch with 1 destination removed at 0x00010071db5c */
/* WARNING: Switch with 1 destination removed at 0x00010071db70 */
/* WARNING: Switch with 1 destination removed at 0x00010071dbac */
/* WARNING: Switch with 1 destination removed at 0x00010071dbd4 */
/* WARNING: Switch with 1 destination removed at 0x00010071dbe0 */
/* WARNING: Switch with 1 destination removed at 0x00010071dbf8 */
/* WARNING: Switch with 1 destination removed at 0x00010071dc10 */
/* WARNING: Switch with 1 destination removed at 0x00010071dc20 */
/* WARNING: Switch with 1 destination removed at 0x00010071dc2c */
/* WARNING: Switch with 1 destination removed at 0x00010071dc38 */
/* WARNING: Switch with 1 destination removed at 0x00010071dc54 */
/* WARNING: Switch with 1 destination removed at 0x00010071dcb0 */
/* WARNING: Switch with 1 destination removed at 0x00010071dcf8 */

void Recovered_YYYP12_m03115(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 *apuStack_50 [2];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x0001005ffa5c();
    lVar1 = func_0x0001005fedf0();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 != 0) {
    case false:
      uVar3 = 0x100b391a8;
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x000100617120(lVar1,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      apuStack_50[0] = (undefined8 *)0x0;
      func_0x0001005ff4e0(lVar1,0x73,0,apuStack_50);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(apuStack_50[0] != (undefined8 *)0x0) {
      case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar3 = 0x100b391a8;
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        func_0x00010093f3e0(uRam0000000100c71460,extraout_x1,apuStack_50[0][1],*apuStack_50[0]);
        uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        auVar4 = _objc_alloc(uRam0000000100c71448);
        uVar3 = func_0x000100948de0(auVar4._0_8_,auVar4._8_8_,uVar2,4);
        _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    }
    break;
  case true:
    uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 getAuthorityInfoAccessURI]
 * Entry: 0x10071dcfc; original ABI: @16@0:8
 * Original instructions in modeled body: 854; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071dd2c */
/* WARNING: Switch with 1 destination removed at 0x00010071dd38 */
/* WARNING: Switch with 1 destination removed at 0x00010071dd54 */
/* WARNING: Switch with 1 destination removed at 0x00010071dd60 */
/* WARNING: Switch with 1 destination removed at 0x00010071ddc4 */
/* WARNING: Switch with 1 destination removed at 0x00010071e3a4 */
/* WARNING: Switch with 1 destination removed at 0x00010071e3cc */
/* WARNING: Switch with 1 destination removed at 0x00010071e678 */
/* WARNING: Switch with 1 destination removed at 0x00010071e724 */
/* WARNING: Switch with 1 destination removed at 0x00010071e764 */
/* WARNING: Switch with 1 destination removed at 0x00010071e778 */
/* WARNING: Switch with 1 destination removed at 0x00010071e784 */
/* WARNING: Switch with 1 destination removed at 0x00010071e794 */
/* WARNING: Switch with 1 destination removed at 0x00010071e7b0 */
/* WARNING: Switch with 1 destination removed at 0x00010071e7dc */
/* WARNING: Switch with 1 destination removed at 0x00010071e7e8 */
/* WARNING: Switch with 1 destination removed at 0x00010071e810 */
/* WARNING: Switch with 1 destination removed at 0x00010071e81c */
/* WARNING: Switch with 1 destination removed at 0x00010071e830 */
/* WARNING: Switch with 1 destination removed at 0x00010071e854 */
/* WARNING: Switch with 1 destination removed at 0x00010071e864 */
/* WARNING: Switch with 1 destination removed at 0x00010071e888 */
/* WARNING: Switch with 1 destination removed at 0x00010071e898 */
/* WARNING: Switch with 1 destination removed at 0x00010071e8c0 */
/* WARNING: Switch with 1 destination removed at 0x00010071e8d0 */
/* WARNING: Switch with 1 destination removed at 0x00010071e8e0 */
/* WARNING: Switch with 1 destination removed at 0x00010071e8ec */
/* WARNING: Switch with 1 destination removed at 0x00010071e924 */
/* WARNING: Switch with 1 destination removed at 0x00010071e930 */
/* WARNING: Switch with 1 destination removed at 0x00010071e954 */
/* WARNING: Switch with 1 destination removed at 0x00010071e960 */
/* WARNING: Switch with 1 destination removed at 0x00010071e984 */
/* WARNING: Switch with 1 destination removed at 0x00010071e99c */
/* WARNING: Switch with 1 destination removed at 0x00010071e9a8 */
/* WARNING: Switch with 1 destination removed at 0x00010071e9b4 */
/* WARNING: Switch with 1 destination removed at 0x00010071e9d8 */
/* WARNING: Switch with 1 destination removed at 0x00010071ea0c */
/* WARNING: Switch with 1 destination removed at 0x00010071ea1c */
/* WARNING: Switch with 1 destination removed at 0x00010071ea54 */
/* WARNING: Switch with 1 destination removed at 0x00010071ea60 */
/* WARNING: Switch with 1 destination removed at 0x00010071ea84 */
/* WARNING: Switch with 1 destination removed at 0x00010071ea94 */
/* WARNING: Switch with 1 destination removed at 0x00010071eaa0 */
/* WARNING: Switch with 1 destination removed at 0x00010071eaac */
/* WARNING: Switch with 1 destination removed at 0x00010071ead8 */
/* WARNING: Switch with 1 destination removed at 0x00010071eaf4 */
/* WARNING: Switch with 1 destination removed at 0x00010071eb08 */
/* WARNING: Switch with 1 destination removed at 0x00010071eb18 */
/* WARNING: Switch with 1 destination removed at 0x00010071eb34 */
/* WARNING: Switch with 1 destination removed at 0x00010071eb58 */
/* WARNING: Switch with 1 destination removed at 0x00010071eb80 */
/* WARNING: Switch with 1 destination removed at 0x00010071eba4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ebb0 */
/* WARNING: Switch with 1 destination removed at 0x00010071ebd4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec00 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec14 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec24 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec34 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec58 */
/* WARNING: Switch with 1 destination removed at 0x00010071ec7c */
/* WARNING: Switch with 1 destination removed at 0x00010071ec90 */
/* WARNING: Switch with 1 destination removed at 0x00010071eca4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ecd0 */
/* WARNING: Switch with 1 destination removed at 0x00010071ece4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ed08 */
/* WARNING: Switch with 1 destination removed at 0x00010071ed14 */
/* WARNING: Switch with 1 destination removed at 0x00010071ed20 */
/* WARNING: Switch with 1 destination removed at 0x00010071ed8c */
/* WARNING: Switch with 1 destination removed at 0x00010071edb0 */
/* WARNING: Switch with 1 destination removed at 0x00010071edbc */
/* WARNING: Switch with 1 destination removed at 0x00010071edd0 */
/* WARNING: Switch with 1 destination removed at 0x00010071edfc */
/* WARNING: Switch with 1 destination removed at 0x00010071ee5c */
/* WARNING: Switch with 1 destination removed at 0x00010071eea8 */
/* WARNING: Switch with 1 destination removed at 0x00010071eee4 */
/* WARNING: Switch with 1 destination removed at 0x00010071ef94 */
/* WARNING: Switch with 1 destination removed at 0x00010071f008 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYP12_m03116(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  int aiStack_a0 [4];
  undefined8 auStack_90 [2];
  undefined8 auStack_80 [2];
  undefined8 auStack_70 [2];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d8c == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fd8a = bRam0000000100e0fd88 ^ 0x6a;
    bRam0000000100e0fd8b = bRam0000000100e0fd89 ^ 2;
    bRam0000000100e0fcc9 = bRam0000000100e0fcc0 ^ 10;
    cRam0000000100e0fcca = bRam0000000100e0fcc1 + (bRam0000000100e0fcc1 & 0x1e) * -2 + '\x1e';
    bRam0000000100e0fccb = bRam0000000100e0fcc2 ^ 0xec;
    bRam0000000100e0fccc = bRam0000000100e0fcc3 ^ 99;
    cRam0000000100e0fccd = bRam0000000100e0fcc4 + (bRam0000000100e0fcc4 & 9) * -2 + '\t';
    bRam0000000100e0fcce = bRam0000000100e0fcc5 ^ 0xbb;
    bRam0000000100e0fccf = bRam0000000100e0fcc6 ^ 0xf6;
    bRam0000000100e0fcd0 = bRam0000000100e0fcc7 ^ 0x2e;
    bRam0000000100e0fcd1 = bRam0000000100e0fcc8 ^ 0xd0;
    bRam0000000100e0fcda = bRam0000000100e0fcd2 ^ 0xea;
    bRam0000000100e0fcdb = bRam0000000100e0fcd3 ^ 6;
    cRam0000000100e0fcdc = bRam0000000100e0fcd4 + (bRam0000000100e0fcd4 & 0x7a) * -2 + -6;
    bRam0000000100e0fcdd = bRam0000000100e0fcd5 ^ 0x8d;
    bRam0000000100e0fcde = bRam0000000100e0fcd6 ^ 0x3d;
    cRam0000000100e0fcdf = bRam0000000100e0fcd7 + (bRam0000000100e0fcd7 & 0xc1) * -2 + -0x3f;
    bRam0000000100e0fce0 = bRam0000000100e0fcd8 ^ 0x46;
    bRam0000000100e0fce1 = bRam0000000100e0fcd9 ^ 0x66;
    bRam0000000100e0fd40 = bRam0000000100e0fcf0 ^ 0x72;
    bRam0000000100e0fd41 = bRam0000000100e0fcf1 ^ 0xae;
    cRam0000000100e0fd42 = bRam0000000100e0fcf2 + (bRam0000000100e0fcf2 & 0x78) * -2 + -8;
    cRam0000000100e0fd43 = bRam0000000100e0fcf3 + (bRam0000000100e0fcf3 & 0x70) * -2 + 'p';
    cRam0000000100e0fd44 = bRam0000000100e0fcf4 + (bRam0000000100e0fcf4 & 0xe3) * -2 + 'c';
    uRam0000000100e0fd45 =
         CONCAT17((byte)((ulong)uRam0000000100e0fcf5 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b710 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fcf5 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b710 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fcf5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b710 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fcf5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b710 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fcf5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b710 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fcf5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b710 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fcf5 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b710 >> 8),
                                                  (byte)uRam0000000100e0fcf5 ^ (byte)_UNK_10099b710)
                                                  ))))));
    bRam0000000100e0fd4d = ~((bRam0000000100e0fcfd | 0xad) & (bRam0000000100e0fcfd ^ 0xff | 0x52));
    bRam0000000100e0fd4e = bRam0000000100e0fcfe ^ 0xcf;
    bRam0000000100e0fd4f = bRam0000000100e0fcff ^ 0xae;
    bRam0000000100e0fd50 = bRam0000000100e0fd00 ^ 0xa0;
    bRam0000000100e0fd51 = bRam0000000100e0fd01 ^ 0xc5;
    bRam0000000100e0fd52 = bRam0000000100e0fd02 ^ 0xc0;
    bRam0000000100e0fd53 = bRam0000000100e0fd03 ^ 0xc6;
    bRam0000000100e0fd54 = ~((bRam0000000100e0fd04 | 9) & (bRam0000000100e0fd04 ^ 0xff | 0xf6));
    uRam0000000100e0fd55 =
         CONCAT17((byte)((ulong)uRam0000000100e0fd05 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b718 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fd05 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b718 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fd05 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b718 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fd05 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b718 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fd05 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b718 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fd05 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b718 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fd05 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b718 >> 8),
                                                  (byte)uRam0000000100e0fd05 ^ (byte)_UNK_10099b718)
                                                  ))))));
    bRam0000000100e0fd5d = bRam0000000100e0fd0d ^ 0xe3;
    cRam0000000100e0fd5e = bRam0000000100e0fd0e + (bRam0000000100e0fd0e & 0xe7) * -2 + -0x19;
    cRam0000000100e0fd5f = bRam0000000100e0fd0f + (bRam0000000100e0fd0f & 0x6b) * -2 + -0x15;
    bRam0000000100e0fd60 = bRam0000000100e0fd10 ^ 0x33;
    cRam0000000100e0fd61 = bRam0000000100e0fd11 + (bRam0000000100e0fd11 & 0x68) * -2 + 'h';
    cRam0000000100e0fd62 = bRam0000000100e0fd12 + (bRam0000000100e0fd12 & 0xe3) * -2 + 'c';
    bRam0000000100e0fd63 = bRam0000000100e0fd13 ^ 0x98;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fd64 = bRam0000000100e0fd14 ^ 0xe1;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fd65 = bRam0000000100e0fd15 ^ 0xaa;
    bRam0000000100e0fd66 = bRam0000000100e0fd16 ^ 0x3d;
    bRam0000000100e0fd67 = bRam0000000100e0fd17 ^ 0x90;
    bRam0000000100e0fd68 = bRam0000000100e0fd18 ^ 0x8b;
    cRam0000000100e0fd69 = bRam0000000100e0fd19 + (bRam0000000100e0fd19 & 0x49) * -2 + -0x37;
    bRam0000000100e0fd6a = bRam0000000100e0fd1a ^ 0x3e;
    cRam0000000100e0fd6b = bRam0000000100e0fd1b + (bRam0000000100e0fd1b & 0x24) * -2 + '$';
    bRam0000000100e0fd6c = bRam0000000100e0fd1c ^ 0xc1;
    bRam0000000100e0fd6d = bRam0000000100e0fd1d ^ 0x2f;
    bRam0000000100e0fd6e = bRam0000000100e0fd1e ^ 0xd;
    cRam0000000100e0fd6f = bRam0000000100e0fd1f + (bRam0000000100e0fd1f & 0x5a) * -2 + 'Z';
    bRam0000000100e0fd70 = bRam0000000100e0fd20 ^ 0x45;
    bRam0000000100e0fd71 = bRam0000000100e0fd21 ^ 0xe5;
    bRam0000000100e0fd72 = bRam0000000100e0fd22 ^ 0xd1;
    cRam0000000100e0fd73 = bRam0000000100e0fd23 + (bRam0000000100e0fd23 & 0xef) * -2 + -0x11;
    bRam0000000100e0fd74 = bRam0000000100e0fd24 ^ 0xf3;
    cRam0000000100e0fd75 = bRam0000000100e0fd25 + (bRam0000000100e0fd25 & 0x22) * -2 + '\"';
    bRam0000000100e0fd76 = bRam0000000100e0fd26 ^ 0x55;
    bRam0000000100e0fd77 = bRam0000000100e0fd27 ^ 0x33;
    bRam0000000100e0fd78 = bRam0000000100e0fd28 ^ 0x76;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fd79 = bRam0000000100e0fd29 ^ 0x6d;
    bRam0000000100e0fd7a = bRam0000000100e0fd2a ^ 0x95;
    bRam0000000100e0fd7b = bRam0000000100e0fd2b ^ 0x7e;
    cRam0000000100e0fd7c = bRam0000000100e0fd2c + (bRam0000000100e0fd2c & 0x46) * -2 + 'F';
    uRam0000000100e0fd7d =
         CONCAT17((byte)((ulong)uRam0000000100e0fd2d >> 0x38) ^
                  (byte)((ulong)_UNK_10099b720 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fd2d >> 0x30) ^
                           (byte)((ulong)_UNK_10099b720 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fd2d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b720 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fd2d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b720 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fd2d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b720 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fd2d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b720 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fd2d >> 8) ^
                                                  (byte)((ulong)_UNK_10099b720 >> 8),
                                                  (byte)uRam0000000100e0fd2d ^ (byte)_UNK_10099b720)
                                                  ))))));
    cRam0000000100e0fd85 = bRam0000000100e0fd35 + (bRam0000000100e0fd35 & 0x54) * -2 + 'T';
    bRam0000000100e0fd86 = bRam0000000100e0fd36 ^ 0xa6;
    bRam0000000100e0fd87 = bRam0000000100e0fd37 ^ 0xae;
  }
  iRam0000000100e95d8c = 1;
                    /* WARNING: Switch is manually overridden */
  lVar2 = func_0x000100620180(*(undefined8 *)(param_1 + 8),0xb1,0,0);
  uVar9 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar8 = 0;
    lVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    do {
      iVar1 = func_0x000100602610(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch((int)uVar8 < iVar1) {
      case false:
        goto override_jmp_10071ebc8_case_1;
      case true:
        puVar4 = (undefined8 *)func_0x000100602624(lVar2,uVar8);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        iVar1 = func_0x0001005b3138(*puVar4);
                    /* WARNING: Switch is manually overridden */
        uVar6 = 4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(iVar1 != 0xb2) {
        case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(*(int *)puVar4[1] != 6) {
          case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            piVar10 = *(int **)((int *)puVar4[1] + 2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            switch(piVar10[1] != 0x16) {
            case true:
              uVar6 = 4;
                    /* WARNING: Switch is manually overridden */
              goto override_jmp_10071e8c0_case_0;
            }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            switch(*(long *)(piVar10 + 2) != 0) {
            case false:
override_jmp_10071e87c_case_1:
              uVar6 = 4;
                    /* WARNING: Switch is manually overridden */
              break;
            case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
              switch(*piVar10 != 0) {
              case false:
                goto override_jmp_10071e87c_case_1;
              case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined8 *)((ulong)(lVar7 == 0) * 8 + 0x100e130d0)) {
                case 0x10071e94c:
                  lVar7 = func_0x000100602084(&DAT_10071f00c);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined8 *)((ulong)(lVar7 == 0) * 8 + 0x100e13120)) {
                case 0x10071e9d0:
                    /* WARNING: Switch is manually overridden */
                  iVar1 = func_0x0001006023c4(lVar7,*(undefined8 *)(piVar10 + 2));
                  uVar6 = 4;
                    /* WARNING: Switch is manually overridden */
                  switch(iVar1 != -1) {
                  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    lVar3 = func_0x0001005b1298(*(undefined8 *)(piVar10 + 2),0x100e0fd40,0x112);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    switch(lVar3 == 0) {
                    case false:
                      iVar1 = func_0x000100602494(lVar7,lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                      switch(iVar1 != 0) {
                      case true:
                        uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
                        goto override_jmp_10071e8c0_case_0;
                      }
                    }
                    func_0x0001005b1658(lVar3);
                    /* WARNING: Switch is manually overridden */
                    func_0x000100622118(lVar7);
                    /* WARNING: Switch is manually overridden */
                    lVar7 = 0;
                    uVar6 = 2;
                    /* WARNING: Switch is manually overridden */
                  }
                  break;
                case 0x10071ea88:
                  uVar6 = 2;
                    /* WARNING: Switch is manually overridden */
                }
              }
            }
override_jmp_10071e8c0_case_0:
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
            uVar6 = 4;
                    /* WARNING: Switch is manually overridden */
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(uVar6 < 4) * 8 + 0x100e13250)) {
        case 0x10071e908:
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined8 *)((ulong)(uVar6 == 4) * 8 + 0x100e13260)) {
          case 0x10071ebd8:
            goto override_jmp_10071e918_case_1;
          }
          break;
        case 0x10071e964:
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined8 *)((ulong)(uVar6 == 0) * 8 + 0x100e13270)) {
          case 0x10071ebd8:
            goto override_jmp_10071e918_case_1;
          }
        }
                    /* WARNING: Switch is manually overridden */
        uVar8 = (uVar8 & 1) * 2 + (uVar8 ^ 1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
    } while( true );
  }
override_jmp_10071e758_case_1:
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar9);
  return;
override_jmp_10071ebc8_case_1:
                    /* WARNING: Switch is manually overridden */
override_jmp_10071e918_case_1:
  func_0x000100627358(lVar2);
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)((ulong)(lVar7 != 0) * 8 + 0x100e132b0)) {
  case 0x10071ebf8:
                    /* WARNING: Switch is manually overridden */
    auStack_70[0] = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    auStack_80[0] = 0;
    auStack_90[0] = 0;
    uVar9 = func_0x000100602624(lVar7,0);
    iVar1 = func_0x00010062d7d8(uVar9,auStack_70,auStack_80,auStack_90,aiStack_a0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(iVar1 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010093f1c0(uRam0000000100c71778);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      uVar5 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(aiStack_a0[0] != 0) {
      case false:
        func_0x00010093f3a0(0x100e0fdb0,auVar11._8_8_,4);
        auVar11 = _objc_retainAutoreleasedReturnValue();
        func_0x000100938b20(uVar5,auVar11._8_8_,auVar11._0_8_);
        _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        func_0x00010093f3a0(0x100e0fd90,auVar11._8_8_,4);
        auVar11 = _objc_retainAutoreleasedReturnValue();
        func_0x000100938b20(uVar5,auVar11._8_8_,auVar11._0_8_);
        _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
      }
      uVar9 = auStack_70[0];
      auVar11 = _strlen(auStack_70[0]);
      func_0x000100938ac0(uVar5,auVar11._8_8_,uVar9,auVar11._0_8_);
      func_0x00010093f3a0(0x100e0fdd0,extraout_x1,4);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      func_0x000100938b20(uVar5,auVar11._8_8_,auVar11._0_8_);
      _objc_release(auVar11._0_8_);
      uVar9 = auStack_80[0];
      auVar11 = _strlen(auStack_80[0]);
                    /* WARNING: Switch is manually overridden */
      func_0x000100938ac0(uVar5,auVar11._8_8_,uVar9,auVar11._0_8_);
      uVar9 = auStack_90[0];
      auVar11 = _strlen(auStack_90[0]);
      func_0x000100938ac0(uVar5,auVar11._8_8_,uVar9,auVar11._0_8_);
      auVar11 = _objc_alloc(uRam0000000100c71448);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar9 = func_0x000100948de0(auVar11._0_8_,auVar11._8_8_,uVar5,4);
      func_0x000100602124(lVar7);
      _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10071e758_case_1;
    }
  }
  uVar9 = 0;
  goto override_jmp_10071e758_case_1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 parseIssuer]
 * Entry: 0x10071f030; original ABI: @16@0:8
 * Original instructions in modeled body: 285; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071f074 */
/* WARNING: Switch with 1 destination removed at 0x00010071f080 */
/* WARNING: Switch with 1 destination removed at 0x00010071f108 */
/* WARNING: Switch with 1 destination removed at 0x00010071f118 */
/* WARNING: Switch with 1 destination removed at 0x00010071f138 */
/* WARNING: Switch with 1 destination removed at 0x00010071f1e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071f1f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071f200 */
/* WARNING: Switch with 1 destination removed at 0x00010071f228 */
/* WARNING: Switch with 1 destination removed at 0x00010071f240 */
/* WARNING: Switch with 1 destination removed at 0x00010071f27c */
/* WARNING: Switch with 1 destination removed at 0x00010071f298 */
/* WARNING: Switch with 1 destination removed at 0x00010071f2d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071f300 */
/* WARNING: Switch with 1 destination removed at 0x00010071f360 */
/* WARNING: Switch with 1 destination removed at 0x00010071f370 */
/* WARNING: Switch with 1 destination removed at 0x00010071f3bc */
/* WARNING: Switch with 1 destination removed at 0x00010071f3c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071f3d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071f3e0 */
/* WARNING: Switch with 1 destination removed at 0x00010071f408 */
/* WARNING: Switch with 1 destination removed at 0x00010071f42c */
/* WARNING: Switch with 1 destination removed at 0x00010071f45c */
/* WARNING: Switch with 1 destination removed at 0x00010071f470 */
/* WARNING: Switch with 1 destination removed at 0x00010071f48c */
/* WARNING: Switch with 1 destination removed at 0x00010071f520 */
/* WARNING: Switch with 1 destination removed at 0x00010071f53c */

void Recovered_YYYP12_m03117(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined8 extraout_x1_00;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x25;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
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
  switch(iRam0000000100e95d90 == 0) {
  case true:
    bRam0000000100e0fdf6 = bRam0000000100e0fdf4 ^ 0xab;
    cRam0000000100e0fdf7 = bRam0000000100e0fdf5 + (bRam0000000100e0fdf5 & 0x4b) * -2 + -0x35;
    bRam0000000100e0fdf2 = bRam0000000100e0fdf0 ^ 0x1f;
    bRam0000000100e0fdf3 = bRam0000000100e0fdf1 ^ 0x8e;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95d90 = 1;
                    /* WARNING: Switch is manually overridden */
  lVar1 = func_0x00010061f1c8(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case false:
    auVar7 = func_0x00010061f458(lVar1,0,0);
    func_0x000100974140(uRam0000000100c71448,auVar7._8_8_,auVar7._0_8_,4);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    uStack_70 = auVar7._0_8_;
    func_0x00010093d2a0(uStack_70,auVar7._8_8_,0x100e0fe20);
    unaff_x25 = _objc_retainAutoreleasedReturnValue();
    func_0x000100940920(uRam0000000100c71440);
    uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_10071f200_case_0;
  }
  do {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    plStack_a0 = (long *)0x0;
    auVar7 = _objc_retain(unaff_x25);
    uVar3 = auVar7._0_8_;
    auVar7 = func_0x00010093e380(uVar3,auVar7._8_8_,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar7._0_8_ == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      lVar1 = *plStack_a0;
      uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_10071f240_case_0:
      do {
        uVar4 = auVar7._8_8_;
        uVar6 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined8 *)((ulong)(*plStack_a0 == lVar1) * 8 + 0x100e13530)) {
        case 0x10071f2bc:
          _objc_enumerationMutation(uVar3);
          uVar4 = extraout_x1_00;
        }
        func_0x00010093d2a0(*(undefined8 *)(lStack_a8 + uVar5 * 8),uVar4,0x100e0fe00);
        unaff_x25 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
        auVar7 = func_0x00010093e360();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(auVar7._0_8_ == 2) {
        case true:
                    /* WARNING: Switch is manually overridden */
          func_0x000100951c40(unaff_x25,auVar7._8_8_,1);
          auVar7 = _objc_retainAutoreleasedReturnValue();
          func_0x000100951c40(unaff_x25,auVar7._8_8_,0);
          auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          func_0x000100968700(uVar2,auVar8._8_8_,auVar7._0_8_,auVar8._0_8_);
          _objc_release(auVar8._0_8_);
          _objc_release(auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        }
        _objc_release(unaff_x25);
        auVar7._8_8_ = extraout_x1;
        auVar7._0_8_ = uVar6;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        uVar5 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar5 < uVar6) {
        case true:
          goto override_jmp_10071f240_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        auVar7 = func_0x00010093e380(uVar3,extraout_x1,&uStack_b0,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
        uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(auVar7._0_8_ == 0) {
        case true:
          goto override_jmp_10071f21c_case_1;
        }
      } while( true );
    case true:
override_jmp_10071f21c_case_1:
      _objc_release(uVar3);
      _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
      _objc_release(uStack_70);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
override_jmp_10071f200_case_0:
      _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      plStack_a0 = (long *)0x0;
      auVar7 = _objc_retain(unaff_x25);
      func_0x00010093e380(auVar7._0_8_,auVar7._8_8_,&uStack_b0,auStack_130,0x10);
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 parseSubject]
 * Entry: 0x10071f540; original ABI: @16@0:8
 * Original instructions in modeled body: 313; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071f580 */
/* WARNING: Switch with 1 destination removed at 0x00010071f594 */
/* WARNING: Switch with 1 destination removed at 0x00010071f5c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071f5ec */
/* WARNING: Switch with 1 destination removed at 0x00010071f64c */
/* WARNING: Switch with 1 destination removed at 0x00010071f678 */
/* WARNING: Switch with 1 destination removed at 0x00010071f6ec */
/* WARNING: Switch with 1 destination removed at 0x00010071f728 */
/* WARNING: Switch with 1 destination removed at 0x00010071f73c */
/* WARNING: Switch with 1 destination removed at 0x00010071f7f0 */
/* WARNING: Switch with 1 destination removed at 0x00010071f81c */
/* WARNING: Switch with 1 destination removed at 0x00010071f834 */
/* WARNING: Switch with 1 destination removed at 0x00010071f844 */
/* WARNING: Switch with 1 destination removed at 0x00010071f850 */
/* WARNING: Switch with 1 destination removed at 0x00010071f874 */
/* WARNING: Switch with 1 destination removed at 0x00010071f890 */
/* WARNING: Switch with 1 destination removed at 0x00010071f89c */
/* WARNING: Switch with 1 destination removed at 0x00010071f8c8 */
/* WARNING: Switch with 1 destination removed at 0x00010071f8d4 */
/* WARNING: Switch with 1 destination removed at 0x00010071f8e4 */
/* WARNING: Switch with 1 destination removed at 0x00010071f92c */
/* WARNING: Switch with 1 destination removed at 0x00010071f938 */
/* WARNING: Switch with 1 destination removed at 0x00010071f97c */
/* WARNING: Switch with 1 destination removed at 0x00010071f9e8 */
/* WARNING: Switch with 1 destination removed at 0x00010071f9fc */
/* WARNING: Switch with 1 destination removed at 0x00010071fa10 */
/* WARNING: Switch with 1 destination removed at 0x00010071fa20 */
/* WARNING: Switch with 1 destination removed at 0x00010071fa5c */
/* WARNING: Switch with 1 destination removed at 0x00010071fa90 */
/* WARNING: Switch with 1 destination removed at 0x00010071faa4 */
/* WARNING: Switch with 1 destination removed at 0x00010071fab0 */
/* WARNING: Switch with 1 destination removed at 0x00010071fb08 */
/* WARNING: Switch with 1 destination removed at 0x00010071fb24 */

void Recovered_YYYP12_m03118(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x23;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_130 [128];
  undefined8 uStack_b0;
  long lStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d94 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fe46 = bRam0000000100e0fe44 ^ 0x8d;
    bRam0000000100e0fe47 = bRam0000000100e0fe45 ^ 0xd5;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e0fe42 = bRam0000000100e0fe40 ^ 0x85;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e0fe43 = bRam0000000100e0fe41 + (bRam0000000100e0fe41 & 0x1b) * -2 + '\x1b';
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e95d94 = 1;
  puVar4 = &uStack_b0;
  lVar1 = func_0x00010061f280(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 == 0) {
  case true:
    uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_10071f844_case_0;
  }
  auVar8 = func_0x00010061f458(lVar1,0,0);
                    /* WARNING: Switch is manually overridden */
  switch(auVar8._0_8_ == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar5 = 0;
    goto override_jmp_10071f844_case_0;
  }
                    /* WARNING: Switch is manually overridden */
  func_0x000100974140(uRam0000000100c71448,auVar8._8_8_,auVar8._0_8_,4);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  puVar2 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093d2a0(puVar2,auVar8._8_8_,0x100e0fe70);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100940920(uRam0000000100c71440);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  auVar8 = _objc_retain(uVar3);
  unaff_x23 = auVar8._0_8_;
  auVar8 = func_0x00010093e380(unaff_x23,auVar8._8_8_,puVar4,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
  puStack_70 = puVar2;
                    /* WARNING: Switch is manually overridden */
  switch(auVar8._0_8_ == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    lVar1 = *plStack_a0;
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
override_jmp_10071f810_case_1:
    _objc_release(unaff_x23);
    puVar4 = puStack_70;
                    /* WARNING: Switch is manually overridden */
    while( true ) {
      _objc_release(unaff_x23);
      _objc_release(puVar4);
                    /* WARNING: Switch is manually overridden */
override_jmp_10071f844_case_0:
      _objc_autoreleaseReturnValue(uVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_68) break;
      ___stack_chk_fail();
      _objc_release(unaff_x23);
    }
    return;
  }
override_jmp_10071f834_case_0:
  do {
    uVar3 = auVar8._8_8_;
    uVar6 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)(*plStack_a0 == lVar1) * 8 + 0x100e137a0)) {
    case 0x10071f8c0:
      _objc_enumerationMutation(unaff_x23);
                    /* WARNING: Switch is manually overridden */
      uVar3 = extraout_x1;
                    /* WARNING: Switch is manually overridden */
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010093d2a0(*(undefined8 *)(lStack_a8 + uVar7 * 8),uVar3,0x100e0fe50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    auVar8 = func_0x00010093e360();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(auVar8._0_8_ == 2) {
    case true:
      func_0x000100951c40(uVar3,auVar8._8_8_,1);
      auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x000100951c40(uVar3,auVar8._8_8_,0);
      auVar9 = _objc_retainAutoreleasedReturnValue();
      func_0x000100968700(uVar5,auVar9._8_8_,auVar8._0_8_,auVar9._0_8_);
      _objc_release(auVar9._0_8_);
      _objc_release(auVar8._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    _objc_release(uVar3);
    auVar8._8_8_ = extraout_x1_00;
    auVar8._0_8_ = uVar6;
                    /* WARNING: Switch is manually overridden */
    uVar7 = uVar7 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar7 < uVar6) {
    case true:
      goto override_jmp_10071f834_case_0;
    }
    auVar8 = func_0x00010093e380(unaff_x23,extraout_x1_00,puVar4,auStack_130,0x10);
                    /* WARNING: Switch is manually overridden */
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(auVar8._0_8_ == 0) {
    case true:
      goto override_jmp_10071f810_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 getSubjectNameWithNID:]
 * Entry: 0x10071fb28; original ABI: @20@0:8i16
 * Original instructions in modeled body: 32; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071fb48 */
/* WARNING: Switch with 1 destination removed at 0x00010071fb54 */
/* WARNING: Switch with 1 destination removed at 0x00010071fb64 */
/* WARNING: Switch with 1 destination removed at 0x00010071fccc */

void Recovered_YYYP12_m03119(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010061f280(*(undefined8 *)(param_1 + 8));
  uVar2 = func_0x00010061fb58(uVar1,param_3,0xffffffff);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar2 >> 0x1f & 1) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x00010071fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100e13950)();
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(0);
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 getDevCACertBio]
 * Entry: 0x10071fd3c; original ABI: ^{bio_st=^{bio_method_st}^?*iiiii^v^{bio_st}^{bio_st}iQQ{crypto_ex_data_st=^{stack_st_void}i}}16@0:8
 * Original instructions in modeled body: 9336; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010071fd9c */
/* WARNING: Switch with 1 destination removed at 0x000100720034 */
/* WARNING: Switch with 1 destination removed at 0x000100720054 */
/* WARNING: Switch with 1 destination removed at 0x000100720f8c */
/* WARNING: Switch with 1 destination removed at 0x000100720fd0 */
/* WARNING: Switch with 1 destination removed at 0x000100720fe4 */
/* WARNING: Switch with 1 destination removed at 0x000100721000 */
/* WARNING: Switch with 1 destination removed at 0x00010072100c */
/* WARNING: Switch with 1 destination removed at 0x000100721018 */
/* WARNING: Switch with 1 destination removed at 0x000100721044 */
/* WARNING: Switch with 1 destination removed at 0x000100721050 */
/* WARNING: Switch with 1 destination removed at 0x00010072106c */
/* WARNING: Switch with 1 destination removed at 0x000100721078 */
/* WARNING: Switch with 1 destination removed at 0x0001007210a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007210b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007210e0 */
/* WARNING: Switch with 1 destination removed at 0x0001007210f0 */
/* WARNING: Switch with 1 destination removed at 0x0001007210fc */
/* WARNING: Switch with 1 destination removed at 0x000100721118 */
/* WARNING: Switch with 1 destination removed at 0x000100721144 */
/* WARNING: Switch with 1 destination removed at 0x000100721150 */
/* WARNING: Switch with 1 destination removed at 0x00010072116c */
/* WARNING: Switch with 1 destination removed at 0x000100721178 */
/* WARNING: Switch with 1 destination removed at 0x000100721184 */
/* WARNING: Switch with 1 destination removed at 0x0001007327d4 */
/* WARNING: Switch with 1 destination removed at 0x000100732800 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 Recovered_YYYP12_m03120(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d98 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e10470 = bRam0000000100e0fe90 ^ 0x6b;
    bRam0000000100e10471 = bRam0000000100e0fe91 ^ 0xbc;
    bRam0000000100e10472 = bRam0000000100e0fe92 ^ 0xfd;
    bRam0000000100e10473 = bRam0000000100e0fe93 ^ 0x3a;
    bRam0000000100e10474 = bRam0000000100e0fe94 ^ 0x3c;
    bRam0000000100e10475 = bRam0000000100e0fe95 ^ 0xb6;
    bRam0000000100e10476 = bRam0000000100e0fe96 ^ 0xa3;
    cRam0000000100e10477 = bRam0000000100e0fe97 + (bRam0000000100e0fe97 & 0x28) * -2 + -0x58;
    bRam0000000100e10478 = bRam0000000100e0fe98 ^ 0xf;
    bRam0000000100e10479 = bRam0000000100e0fe99 ^ 0x71;
    cRam0000000100e1047a = bRam0000000100e0fe9a + (bRam0000000100e0fe9a & 0x1f) * -2 + -0x61;
    bRam0000000100e1047b = bRam0000000100e0fe9b ^ 0xfb;
    bRam0000000100e1047c = bRam0000000100e0fe9c ^ 0xfc;
    bRam0000000100e1047d = bRam0000000100e0fe9d ^ 0x8a;
    cRam0000000100e1047e = bRam0000000100e0fe9e + (bRam0000000100e0fe9e & 0x31) * -2 + -0x4f;
    bRam0000000100e1047f = bRam0000000100e0fe9f ^ 0x93;
    bRam0000000100e10480 = bRam0000000100e0fea0 ^ 6;
    bRam0000000100e10481 = bRam0000000100e0fea1 ^ 0x88;
    bRam0000000100e10482 = ~((bRam0000000100e0fea2 | 0x94) & (bRam0000000100e0fea2 ^ 0xff | 0x6b));
    bRam0000000100e10483 = bRam0000000100e0fea3 ^ 0x3a;
    bRam0000000100e10484 = bRam0000000100e0fea4 ^ 0xe9;
    bRam0000000100e10485 = bRam0000000100e0fea5 ^ 0x29;
    bRam0000000100e10486 = bRam0000000100e0fea6 ^ 0xab;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100e10487 =
         CONCAT17((byte)((ulong)uRam0000000100e0fea7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b730 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fea7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b730 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fea7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b730 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fea7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b730 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fea7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b730 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fea7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b730 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fea7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b730 >> 8),
                                                  (byte)uRam0000000100e0fea7 ^ (byte)_UNK_10099b730)
                                                  ))))));
    bRam0000000100e1048f = bRam0000000100e0feaf ^ 0xdc;
    bRam0000000100e10490 = bRam0000000100e0feb0 ^ 0x95;
    cRam0000000100e10491 = bRam0000000100e0feb1 + (bRam0000000100e0feb1 & 4) * -2 + '\x04';
    bRam0000000100e10492 = bRam0000000100e0feb2 ^ 0xb7;
    bRam0000000100e10493 = bRam0000000100e0feb3 ^ 0x5a;
    bRam0000000100e10494 = bRam0000000100e0feb4 ^ 0xc;
    bRam0000000100e10495 = bRam0000000100e0feb5 ^ 0x1c;
    bRam0000000100e10496 = bRam0000000100e0feb6 ^ 0xe7;
    bRam0000000100e10497 = bRam0000000100e0feb7 ^ 0x4e;
    bRam0000000100e10498 = ~((bRam0000000100e0feb8 | 0xaa) & (~bRam0000000100e0feb8 | 0x55));
    bRam0000000100e10499 = bRam0000000100e0feb9 ^ 100;
    cRam0000000100e1049a = bRam0000000100e0feba + (bRam0000000100e0feba & 0x37) * -2 + '7';
    bRam0000000100e1049b = bRam0000000100e0febb ^ 99;
    cRam0000000100e1049c = bRam0000000100e0febc + (bRam0000000100e0febc & 0x36) * -2 + -0x4a;
    bRam0000000100e1049d = bRam0000000100e0febd ^ 0xcd;
    bRam0000000100e1049e = bRam0000000100e0febe ^ 0xaa;
    bRam0000000100e1049f = bRam0000000100e0febf ^ 0x4a;
    bRam0000000100e104a0 = bRam0000000100e0fec0 ^ 0x6f;
    bRam0000000100e104a1 = bRam0000000100e0fec1 ^ 0xce;
    bRam0000000100e104a2 = bRam0000000100e0fec2 ^ 0xa7;
    cRam0000000100e104a3 = bRam0000000100e0fec3 + (bRam0000000100e0fec3 & 0x4b) * -2 + 'K';
    bRam0000000100e104a4 = bRam0000000100e0fec4 ^ 0x93;
    cRam0000000100e104a5 = bRam0000000100e0fec5 + (bRam0000000100e0fec5 & 0x32) * -2 + '2';
    uRam0000000100e104a6 =
         CONCAT17((byte)((ulong)uRam0000000100e0fec6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fec6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fec6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fec6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fec6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fec6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fec6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf20 >> 8),
                                                  (byte)uRam0000000100e0fec6 ^ (byte)_UNK_10099bf20)
                                                  ))))));
    uRam0000000100e104ae =
         CONCAT17((byte)((ulong)uRam0000000100e0fece >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fece >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fece >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fece >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fece >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fece >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fece >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf28 >> 8),
                                                  (byte)uRam0000000100e0fece ^ (byte)_UNK_10099bf28)
                                                  ))))));
    bRam0000000100e104b6 = bRam0000000100e0fed6 ^ 0x28;
    bRam0000000100e104b7 = bRam0000000100e0fed7 ^ 0x7c;
    cRam0000000100e104b8 = bRam0000000100e0fed8 + (bRam0000000100e0fed8 & 0x7c) * -2 + '|';
    uRam0000000100e104b9 =
         CONCAT17((byte)((ulong)uRam0000000100e0fed9 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b760 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fed9 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b760 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fed9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b760 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fed9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b760 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fed9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b760 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fed9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b760 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fed9 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b760 >> 8),
                                                  (byte)uRam0000000100e0fed9 ^ (byte)_UNK_10099b760)
                                                  ))))));
    bRam0000000100e104c1 = bRam0000000100e0fee1 ^ 0x7e;
    bRam0000000100e104c2 = bRam0000000100e0fee2 ^ 0x9c;
    bRam0000000100e104c3 = ~((bRam0000000100e0fee3 | 0x65) & (bRam0000000100e0fee3 ^ 0xff | 0x9a));
    bRam0000000100e104c4 = bRam0000000100e0fee4 ^ 0xe7;
    cRam0000000100e104c5 = bRam0000000100e0fee5 + (bRam0000000100e0fee5 & 0x10) * -2 + -0x70;
    uRam0000000100e104c6 =
         CONCAT17((byte)((ulong)uRam0000000100e0fee6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b768 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fee6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b768 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fee6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b768 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fee6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b768 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fee6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b768 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fee6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b768 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fee6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b768 >> 8),
                                                  (byte)uRam0000000100e0fee6 ^ (byte)_UNK_10099b768)
                                                  ))))));
    bRam0000000100e104ce = bRam0000000100e0feee ^ 0x35;
    bRam0000000100e104cf = bRam0000000100e0feef ^ 0xbc;
    cRam0000000100e104d0 = bRam0000000100e0fef0 + (bRam0000000100e0fef0 & 0x1a) * -2 + '\x1a';
    bRam0000000100e104d1 = bRam0000000100e0fef1 ^ 0xe2;
    bRam0000000100e104d2 = bRam0000000100e0fef2 ^ 0xd5;
    bRam0000000100e104d3 = bRam0000000100e0fef3 ^ 0x36;
    bRam0000000100e104d4 = bRam0000000100e0fef4 ^ 0x5a;
    bRam0000000100e104d5 = bRam0000000100e0fef5 ^ 0x39;
    cRam0000000100e104d6 = bRam0000000100e0fef6 + (bRam0000000100e0fef6 & 0x44) * -2 + -0x3c;
    uRam0000000100e104d7 =
         CONCAT17((byte)((ulong)uRam0000000100e0fef7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b770 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0fef7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b770 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0fef7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b770 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0fef7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b770 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0fef7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b770 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0fef7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b770 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0fef7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b770 >> 8),
                                                  (byte)uRam0000000100e0fef7 ^ (byte)_UNK_10099b770)
                                                  ))))));
    bRam0000000100e104df = bRam0000000100e0feff ^ 0x3b;
    bRam0000000100e104e0 = bRam0000000100e0ff00 ^ 0x72;
    bRam0000000100e104e1 = bRam0000000100e0ff01 ^ 0x89;
    bRam0000000100e104e2 = bRam0000000100e0ff02 ^ 0xf2;
    cRam0000000100e104e3 = bRam0000000100e0ff03 + (bRam0000000100e0ff03 & 0xee) * -2 + -0x12;
    uRam0000000100e104e4 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff04 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b778 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff04 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b778 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff04 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b778 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff04 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b778 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff04 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b778 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff04 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b778 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff04 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b778 >> 8),
                                                  (byte)uRam0000000100e0ff04 ^ (byte)_UNK_10099b778)
                                                  ))))));
    bRam0000000100e104ec = bRam0000000100e0ff0c ^ 0xa4;
    bRam0000000100e104ed = bRam0000000100e0ff0d ^ 0x25;
    bRam0000000100e104ee = bRam0000000100e0ff0e ^ 0x5d;
    bRam0000000100e104ef = bRam0000000100e0ff0f ^ 0x49;
    bRam0000000100e104f0 = bRam0000000100e0ff10 ^ 0xc3;
    bRam0000000100e104f1 = bRam0000000100e0ff11 ^ 0x89;
    cRam0000000100e104f2 = bRam0000000100e0ff12 + (bRam0000000100e0ff12 & 0x3e) * -2 + -0x42;
    uRam0000000100e104f3 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff13 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff13 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff13 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff13 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff13 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff13 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff13 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf30 >> 8),
                                                  (byte)uRam0000000100e0ff13 ^ (byte)_UNK_10099bf30)
                                                  ))))));
    uRam0000000100e104fb =
         CONCAT17((byte)((ulong)uRam0000000100e0ff1b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff1b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff1b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff1b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff1b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff1b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff1b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf38 >> 8),
                                                  (byte)uRam0000000100e0ff1b ^ (byte)_UNK_10099bf38)
                                                  ))))));
    cRam0000000100e10503 = bRam0000000100e0ff23 + (bRam0000000100e0ff23 & 0x14) * -2 + -0x6c;
    bRam0000000100e10504 = bRam0000000100e0ff24 ^ 0xb7;
    bRam0000000100e10505 = ~((bRam0000000100e0ff25 | 0xc0) & (~bRam0000000100e0ff25 | 0x3f));
    bRam0000000100e10506 = bRam0000000100e0ff26 ^ 0xb6;
    bRam0000000100e10507 = bRam0000000100e0ff27 ^ 0x18;
    cRam0000000100e10508 = bRam0000000100e0ff28 + (bRam0000000100e0ff28 & 0xb) * -2 + -0x75;
    bRam0000000100e10509 = bRam0000000100e0ff29 ^ 0x27;
    cRam0000000100e1050a = bRam0000000100e0ff2a + (bRam0000000100e0ff2a & 0x6c) * -2 + -0x14;
    bRam0000000100e1050b = bRam0000000100e0ff2b ^ 0x2c;
    bRam0000000100e1050c = bRam0000000100e0ff2c ^ 0x73;
    bRam0000000100e1050d = bRam0000000100e0ff2d ^ 0xe8;
    bRam0000000100e1050e = bRam0000000100e0ff2e ^ 0x5e;
    bRam0000000100e1050f = bRam0000000100e0ff2f ^ 0x97;
    bRam0000000100e10510 = bRam0000000100e0ff30 ^ 0x48;
    bRam0000000100e10511 = bRam0000000100e0ff31 ^ 0xdd;
    cRam0000000100e10512 = bRam0000000100e0ff32 + (bRam0000000100e0ff32 & 0x17) * -2 + '\x17';
    uRam0000000100e10513 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff33 >> 0x38) ^
                  (byte)((ulong)_UNK_10099b780 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff33 >> 0x30) ^
                           (byte)((ulong)_UNK_10099b780 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff33 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099b780 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff33 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099b780 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff33 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099b780 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff33 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099b780 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff33 >> 8) ^
                                                  (byte)((ulong)_UNK_10099b780 >> 8),
                                                  (byte)uRam0000000100e0ff33 ^ (byte)_UNK_10099b780)
                                                  ))))));
    bRam0000000100e1051b = bRam0000000100e0ff3b ^ 0x2d;
    cRam0000000100e1051c = bRam0000000100e0ff3c + (bRam0000000100e0ff3c & 0x23) * -2 + -0x5d;
    bRam0000000100e1051d = bRam0000000100e0ff3d ^ 0x42;
    bRam0000000100e1051e = bRam0000000100e0ff3e ^ 0x51;
    bRam0000000100e1051f = bRam0000000100e0ff3f ^ 0x26;
    bRam0000000100e10520 = bRam0000000100e0ff40 ^ 0x2f;
    bRam0000000100e10521 = bRam0000000100e0ff41 ^ 0x88;
    cRam0000000100e10522 = bRam0000000100e0ff42 + (bRam0000000100e0ff42 & 0x32) * -2 + -0x4e;
    bRam0000000100e10523 = bRam0000000100e0ff43 ^ 0xde;
    bRam0000000100e10524 = bRam0000000100e0ff44 ^ 0xe4;
    cRam0000000100e10525 = bRam0000000100e0ff45 + (bRam0000000100e0ff45 & 0x3f) * -2 + '?';
    bRam0000000100e10526 = bRam0000000100e0ff46 ^ 0x3f;
    bRam0000000100e10527 = bRam0000000100e0ff47 ^ 0xb9;
    bRam0000000100e10528 = bRam0000000100e0ff48 ^ 0x55;
    cRam0000000100e10529 = bRam0000000100e0ff49 + (bRam0000000100e0ff49 & 0x60) * -2 + -0x20;
    bRam0000000100e1052a = bRam0000000100e0ff4a ^ 0x94;
    bRam0000000100e1052b = bRam0000000100e0ff4b ^ 0x6f;
    bRam0000000100e1052c = bRam0000000100e0ff4c ^ 10;
    bRam0000000100e1052d = bRam0000000100e0ff4d ^ 0xb0;
                    /* WARNING: Switch is manually overridden */
    cRam0000000100e1052e = bRam0000000100e0ff4e + (bRam0000000100e0ff4e & 0x14) * -2 + '\x14';
    bRam0000000100e1052f = bRam0000000100e0ff4f ^ 0x6c;
    bRam0000000100e10530 = bRam0000000100e0ff50 ^ 0x4f;
    bRam0000000100e10531 = bRam0000000100e0ff51 ^ 0x4f;
    bRam0000000100e10532 = bRam0000000100e0ff52 ^ 0xa3;
    bRam0000000100e10533 = bRam0000000100e0ff53 ^ 0xd3;
    cRam0000000100e10534 = bRam0000000100e0ff54 + (bRam0000000100e0ff54 & 0x37) * -2 + '7';
    bRam0000000100e1053d = bRam0000000100e0ff5d ^ 0x13;
    bRam0000000100e1053e = bRam0000000100e0ff5e ^ 0x1d;
    cRam0000000100e1053f = bRam0000000100e0ff5f + (bRam0000000100e0ff5f & 10) * -2 + '\n';
    cRam0000000100e10548 = bRam0000000100e0ff68 + (bRam0000000100e0ff68 & 5) * -2 + '\x05';
    bRam0000000100e10549 = bRam0000000100e0ff69 ^ 0xc0;
    bRam0000000100e1054a = bRam0000000100e0ff6a ^ 0xae;
    cRam0000000100e1054b = bRam0000000100e0ff6b + (bRam0000000100e0ff6b & 0x42) * -2 + -0x3e;
    bRam0000000100e10554 = bRam0000000100e0ff74 ^ 0x9a;
    cRam0000000100e10555 = bRam0000000100e0ff75 + (bRam0000000100e0ff75 & 0xe3) * -2 + -0x1d;
    bRam0000000100e10556 = bRam0000000100e0ff76 ^ 0x38;
    bRam0000000100e10557 = bRam0000000100e0ff77 ^ 0xcb;
    bRam0000000100e10558 = bRam0000000100e0ff78 ^ 0xbc;
    cRam0000000100e10559 = bRam0000000100e0ff79 + (bRam0000000100e0ff79 & 0x31) * -2 + '1';
    bRam0000000100e1055a = bRam0000000100e0ff7a ^ 0x9d;
    bRam0000000100e1055b = bRam0000000100e0ff7b ^ 0xb4;
    bRam0000000100e1055c = bRam0000000100e0ff7c ^ 0x6f;
    bRam0000000100e1055d = bRam0000000100e0ff7d ^ 0xf4;
    bRam0000000100e1055e = bRam0000000100e0ff7e ^ 6;
    bRam0000000100e1055f = bRam0000000100e0ff7f ^ 0xee;
    bRam0000000100e10560 = bRam0000000100e0ff80 ^ 0x56;
    cRam0000000100e10561 = bRam0000000100e0ff81 + (bRam0000000100e0ff81 & 0x7a) * -2 + -6;
    bRam0000000100e10562 = bRam0000000100e0ff82 ^ 0xb4;
    bRam0000000100e10563 = bRam0000000100e0ff83 ^ 9;
    bRam0000000100e10564 = bRam0000000100e0ff84 ^ 0x21;
    cRam0000000100e10565 = bRam0000000100e0ff85 + (bRam0000000100e0ff85 & 0x3d) * -2 + -0x43;
    bRam0000000100e10566 = bRam0000000100e0ff86 ^ 0xb1;
    bRam0000000100e10567 = bRam0000000100e0ff87 ^ 0x96;
    bRam0000000100e10568 = ~((bRam0000000100e0ff88 | 0xde) & (bRam0000000100e0ff88 ^ 0xff | 0x21));
    cRam0000000100e10571 = bRam0000000100e0ff91 + (bRam0000000100e0ff91 & 0x7c) * -2 + '|';
    bRam0000000100e10572 = bRam0000000100e0ff92 ^ 0x54;
    cRam0000000100e10573 = bRam0000000100e0ff93 + (bRam0000000100e0ff93 & 0xf) * -2 + -0x71;
    bRam0000000100e1057c = bRam0000000100e0ff9c ^ 0x13;
    bRam0000000100e1057d = bRam0000000100e0ff9d ^ 0x4d;
    cRam0000000100e1057e = bRam0000000100e0ff9e + (bRam0000000100e0ff9e & 0x49) * -2 + 'I';
    bRam0000000100e1057f = bRam0000000100e0ff9f ^ 0x2b;
    bRam0000000100e10580 = bRam0000000100e0ffa0 ^ 0xba;
    cRam0000000100e10581 = bRam0000000100e0ffa1 + (bRam0000000100e0ffa1 & 0x68) * -2 + -0x18;
    cRam0000000100e1058a = bRam0000000100e0ffaa + (bRam0000000100e0ffaa & 0xf7) * -2 + 'w';
    bRam0000000100e1059b = bRam0000000100e0ffbb ^ 0x6a;
    bRam0000000100e1059c = bRam0000000100e0ffbc ^ 0x6b;
    bRam0000000100e1059d = bRam0000000100e0ffbd ^ 0x12;
    bRam0000000100e1059e = bRam0000000100e0ffbe ^ 0xa4;
    cRam0000000100e1059f = bRam0000000100e0ffbf + (bRam0000000100e0ffbf & 0x3a) * -2 + -0x46;
    bRam0000000100e105a8 = bRam0000000100e0ffc8 ^ 0xe9;
    bRam0000000100e105a9 = bRam0000000100e0ffc9 ^ 0x87;
    bRam0000000100e105aa = bRam0000000100e0ffca ^ 0x5b;
    cRam0000000100e105ab = bRam0000000100e0ffcb + (bRam0000000100e0ffcb & 0x14) * -2 + -0x6c;
    bRam0000000100e105b4 = bRam0000000100e0ffd4 ^ 0x7a;
    cRam0000000100e105b5 = bRam0000000100e0ffd5 + (bRam0000000100e0ffd5 & 0x17) * -2 + -0x69;
    bRam0000000100e105b6 = bRam0000000100e0ffd6 ^ 0x91;
    bRam0000000100e105b7 = bRam0000000100e0ffd7 ^ 0xa9;
    bRam0000000100e105b8 = bRam0000000100e0ffd8 ^ 1;
    cRam0000000100e105b9 = bRam0000000100e0ffd9 + (bRam0000000100e0ffd9 & 0x68) * -2 + 'h';
    bRam0000000100e105ba = bRam0000000100e0ffda ^ 0x7f;
    bRam0000000100e105bb = bRam0000000100e0ffdb ^ 0x8d;
    bRam0000000100e105bc = bRam0000000100e0ffdc ^ 0x23;
    bRam0000000100e105bd = bRam0000000100e0ffdd ^ 0xe7;
    bRam0000000100e105be = bRam0000000100e0ffde ^ 0x2f;
    bRam0000000100e105bf = bRam0000000100e0ffdf ^ 0xfb;
    bRam0000000100e105c0 = bRam0000000100e0ffe0 ^ 0x92;
    cRam0000000100e105c1 = bRam0000000100e0ffe1 + (bRam0000000100e0ffe1 & 0x4d) * -2 + 'M';
    bRam0000000100e105c2 = bRam0000000100e0ffe2 ^ 0x4b;
    bRam0000000100e105c3 = ~((bRam0000000100e0ffe3 | 0xd) & (bRam0000000100e0ffe3 ^ 0xff | 0xf2));
    bRam0000000100e105c4 = bRam0000000100e0ffe4 ^ 7;
    bRam0000000100e105c5 = bRam0000000100e0ffe5 ^ 0x51;
    bRam0000000100e105c6 = bRam0000000100e0ffe6 ^ 0xb1;
    bRam0000000100e105c7 = bRam0000000100e0ffe7 ^ 0x67;
    bRam0000000100e105c8 = ~((bRam0000000100e0ffe8 | 0x40) & (~bRam0000000100e0ffe8 | 0xbf));
    cRam0000000100e105c9 = bRam0000000100e0ffe9 + (bRam0000000100e0ffe9 & 0x51) * -2 + 'Q';
    bRam0000000100e105ca = bRam0000000100e0ffea ^ 0xf6;
    cRam0000000100e105cb = bRam0000000100e0ffeb + (bRam0000000100e0ffeb & 0x7e) * -2 + '~';
    bRam0000000100e105cc = bRam0000000100e0ffec ^ 0xf4;
    bRam0000000100e105cd = bRam0000000100e0ffed ^ 0xf4;
    bRam0000000100e105ce = bRam0000000100e0ffee ^ 0xa6;
    bRam0000000100e105cf = bRam0000000100e0ffef ^ 0x76;
    cRam0000000100e105d0 = bRam0000000100e0fff0 + (bRam0000000100e0fff0 & 0xcf) * -2 + 'O';
    bRam0000000100e105d1 = bRam0000000100e0fff1 ^ 0xb1;
    bRam0000000100e105d2 = bRam0000000100e0fff2 ^ 0x57;
    bRam0000000100e105d3 = bRam0000000100e0fff3 ^ 1;
    bRam0000000100e105d4 = bRam0000000100e0fff4 ^ 0x92;
    bRam0000000100e105d5 = bRam0000000100e0fff5 ^ 0xa0;
    bRam0000000100e105d6 = bRam0000000100e0fff6 ^ 0xad;
    bRam0000000100e105d7 = bRam0000000100e0fff7 ^ 0xe8;
    cRam0000000100e105d8 = bRam0000000100e0fff8 + (bRam0000000100e0fff8 & 100) * -2 + 'd';
    bRam0000000100e105d9 = bRam0000000100e0fff9 ^ 0xe3;
    bRam0000000100e105da = bRam0000000100e0fffa ^ 0xb3;
    bRam0000000100e105db = bRam0000000100e0fffb ^ 0xb0;
    bRam0000000100e105dc = ~((bRam0000000100e0fffc | 0xc1) & (~bRam0000000100e0fffc | 0x3e));
    bRam0000000100e105dd = bRam0000000100e0fffd ^ 0xd3;
    bRam0000000100e105de = ~((bRam0000000100e0fffe | 0x78) & (~bRam0000000100e0fffe | 0x87));
    bRam0000000100e105df = bRam0000000100e0ffff ^ 0x10;
    cRam0000000100e105e0 = bRam0000000100e10000 + (bRam0000000100e10000 & 0x20) * -2 + -0x60;
    cRam0000000100e105e1 = bRam0000000100e10001 + (bRam0000000100e10001 & 0x40) * '\x02' + '@';
    cRam0000000100e105ea = bRam0000000100e1000a + (bRam0000000100e1000a & 0xd) * -2 + -0x73;
    cRam0000000100e105eb = bRam0000000100e1000b + (bRam0000000100e1000b & 9) * -2 + '\t';
    bRam0000000100e105ec = bRam0000000100e1000c ^ 0xa6;
    bRam0000000100e105ed = bRam0000000100e1000d ^ 0xc5;
    bRam0000000100e105ee = bRam0000000100e1000e ^ 0xc1;
    bRam0000000100e105ef = bRam0000000100e1000f ^ 0xb7;
    bRam0000000100e105f0 = bRam0000000100e10010 ^ 0x1e;
    cRam0000000100e105f1 = bRam0000000100e10011 + (bRam0000000100e10011 & 0x31) * -2 + '1';
    bRam0000000100e105f2 = bRam0000000100e10012 ^ 0xbb;
    bRam0000000100e105f3 = bRam0000000100e10013 ^ 0x19;
    bRam0000000100e105f4 = bRam0000000100e10014 ^ 0x17;
    cRam0000000100e105f5 = bRam0000000100e10015 + (bRam0000000100e10015 & 0xe) * -2 + '\x0e';
    bRam0000000100e105f6 = bRam0000000100e10016 ^ 0x42;
    bRam0000000100e105f7 = bRam0000000100e10017 ^ 0x9d;
    bRam0000000100e105f8 = bRam0000000100e10018 ^ 0xf9;
    bRam0000000100e105f9 = bRam0000000100e10019 ^ 0x5c;
    cRam0000000100e105fa = bRam0000000100e1001a + (bRam0000000100e1001a & 6) * -2 + '\x06';
    bRam0000000100e10603 = bRam0000000100e10023 ^ 0x72;
    bRam0000000100e10604 = bRam0000000100e10024 ^ 0x21;
    bRam0000000100e10605 = bRam0000000100e10025 ^ 0x22;
    bRam0000000100e10606 = bRam0000000100e10026 ^ 0xa1;
    bRam0000000100e10607 = bRam0000000100e10027 ^ 0xa8;
    cRam0000000100e10608 = bRam0000000100e10028 + (bRam0000000100e10028 & 0x7c) * -2 + '|';
    cRam0000000100e10609 = bRam0000000100e10029 + (bRam0000000100e10029 & 0x3f) * -2 + '?';
    bRam0000000100e1060a = bRam0000000100e1002a ^ 0x83;
    bRam0000000100e1060b = bRam0000000100e1002b ^ 0x93;
    bRam0000000100e1060c = bRam0000000100e1002c ^ 0x82;
    cRam0000000100e1060d = bRam0000000100e1002d + (bRam0000000100e1002d & 0xf1) * -2 + 'q';
    bRam0000000100e1060e = bRam0000000100e1002e ^ 0x56;
    cRam0000000100e1060f = bRam0000000100e1002f + (bRam0000000100e1002f & 2) * -2 + -0x7e;
    bRam0000000100e10618 = bRam0000000100e10038 ^ 0xf3;
    bRam0000000100e10619 = bRam0000000100e10039 ^ 0x2d;
    bRam0000000100e1061a = ~((bRam0000000100e1003a | 0x95) & (bRam0000000100e1003a ^ 0xff | 0x6a));
    bRam0000000100e1061b = bRam0000000100e1003b ^ 0xcc;
    bRam0000000100e1061c = bRam0000000100e1003c ^ 0xd1;
    bRam0000000100e1061d = bRam0000000100e1003d ^ 0xfc;
    bRam0000000100e1061e = bRam0000000100e1003e ^ 0x94;
    bRam0000000100e1061f = bRam0000000100e1003f ^ 0x3f;
    cRam0000000100e10620 = bRam0000000100e10040 + (bRam0000000100e10040 & 0xe1) * -2 + -0x1f;
    bRam0000000100e10621 = bRam0000000100e10041 ^ 0xf1;
    bRam0000000100e10622 = bRam0000000100e10042 ^ 0x25;
    bRam0000000100e10623 = bRam0000000100e10043 ^ 0x6d;
    cRam0000000100e10624 = bRam0000000100e10044 + (bRam0000000100e10044 & 0x23) * -2 + '#';
    cRam0000000100e10625 = bRam0000000100e10045 + (bRam0000000100e10045 & 6) * -2 + '\x06';
    bRam0000000100e10626 = bRam0000000100e10046 ^ 0x7d;
    cRam0000000100e10627 = bRam0000000100e10047 + (bRam0000000100e10047 & 0x54) * -2 + 'T';
    cRam0000000100e10628 = bRam0000000100e10048 + (bRam0000000100e10048 & 0x4b) * -2 + 'K';
    bRam0000000100e10629 = bRam0000000100e10049 ^ 0x5c;
    bRam0000000100e1062a = bRam0000000100e1004a ^ 0xaa;
    bRam0000000100e1062b = bRam0000000100e1004b ^ 0x89;
    cRam0000000100e1062c = bRam0000000100e1004c + (bRam0000000100e1004c & 0x3f) * -2 + '?';
    bRam0000000100e10635 = bRam0000000100e10055 ^ 0x37;
    bRam0000000100e10636 = bRam0000000100e10056 ^ 0xc2;
    cRam0000000100e10637 = bRam0000000100e10057 + (bRam0000000100e10057 & 0x31) * -2 + '1';
    uRam0000000100e10638 =
         CONCAT17((byte)((ulong)uRam0000000100e10058 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba80 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10058 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba80 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10058 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba80 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10058 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba80 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10058 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba80 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10058 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba80 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10058 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba80 >> 8),
                                                  (byte)uRam0000000100e10058 ^ (byte)_UNK_10099ba80)
                                                  ))))));
    bRam0000000100e10640 = bRam0000000100e10060 ^ 0x81;
    cRam0000000100e10641 = bRam0000000100e10061 + (bRam0000000100e10061 & 0xf) * -2 + -0x71;
    bRam0000000100e10642 = bRam0000000100e10062 ^ 0xc1;
    bRam0000000100e10643 = bRam0000000100e10063 ^ 0x61;
    bRam0000000100e10644 = bRam0000000100e10064 ^ 0x6b;
    bRam0000000100e10645 = bRam0000000100e10065 ^ 0xc1;
    bRam0000000100e10646 = ~((bRam0000000100e10066 | 0xa2) & (bRam0000000100e10066 ^ 0xff | 0x5d));
    uRam0000000100e10647 =
         CONCAT17((byte)((ulong)uRam0000000100e10067 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba88 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10067 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba88 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10067 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba88 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10067 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba88 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10067 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba88 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10067 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba88 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10067 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba88 >> 8),
                                                  (byte)uRam0000000100e10067 ^ (byte)_UNK_10099ba88)
                                                  ))))));
    bRam0000000100e1064f = bRam0000000100e1006f ^ 0x1c;
    bRam0000000100e10650 = bRam0000000100e10070 ^ 0x23;
    bRam0000000100e10651 = ~((bRam0000000100e10071 | 0xc2) & (bRam0000000100e10071 ^ 0xff | 0x3d));
    bRam0000000100e10652 = bRam0000000100e10072 ^ 0x44;
    bRam0000000100e10653 = bRam0000000100e10073 ^ 0x3b;
    bRam0000000100e10654 = bRam0000000100e10074 ^ 0x31;
    cRam0000000100e10655 = bRam0000000100e10075 + (bRam0000000100e10075 & 0x53) * -2 + 'S';
    bRam0000000100e10656 = bRam0000000100e10076 ^ 9;
    uRam0000000100e10657 = uRam0000000100e10077;
    bRam0000000100e10658 = bRam0000000100e10078 ^ 0x5b;
    bRam0000000100e10659 = bRam0000000100e10079 ^ 0xd6;
    bRam0000000100e1065a = bRam0000000100e1007a ^ 0xbb;
    bRam0000000100e1065b = bRam0000000100e1007b ^ 0xdb;
    bRam0000000100e1065c = ~((bRam0000000100e1007c | 8) & (~bRam0000000100e1007c | 0xf7));
    bRam0000000100e1065d = bRam0000000100e1007d ^ 0x66;
    bRam0000000100e1065e = bRam0000000100e1007e ^ 0x93;
    bRam0000000100e1065f = bRam0000000100e1007f ^ 0x26;
    cRam0000000100e10660 = bRam0000000100e10080 + (bRam0000000100e10080 & 0x28) * -2 + -0x58;
    cRam0000000100e10661 = bRam0000000100e10081 + (bRam0000000100e10081 & 0x20) * -2 + -0x60;
    bRam0000000100e10662 = bRam0000000100e10082 ^ 0xe6;
    bRam0000000100e10663 = bRam0000000100e10083 ^ 0x58;
    bRam0000000100e10664 = bRam0000000100e10084 ^ 0xcd;
    bRam0000000100e10665 = bRam0000000100e10085 ^ 0x8f;
    bRam0000000100e10666 = bRam0000000100e10086 ^ 0x1a;
    bRam0000000100e10667 = bRam0000000100e10087 ^ 0x90;
    cRam0000000100e10668 = bRam0000000100e10088 + (bRam0000000100e10088 & 0xf) * -2 + -0x71;
    bRam0000000100e10669 = bRam0000000100e10089 ^ 0xba;
    bRam0000000100e1066a = bRam0000000100e1008a ^ 0xbc;
    bRam0000000100e1066b = bRam0000000100e1008b ^ 0x46;
    bRam0000000100e1066c = bRam0000000100e1008c ^ 0xd0;
    cRam0000000100e1066d = bRam0000000100e1008d + (bRam0000000100e1008d & 0x13) * -2 + -0x6d;
    bRam0000000100e1066e = bRam0000000100e1008e ^ 0x1b;
    bRam0000000100e1066f = bRam0000000100e1008f ^ 0xc0;
    bRam0000000100e10670 = bRam0000000100e10090 ^ 0x6f;
    cRam0000000100e10671 = bRam0000000100e10091 + (bRam0000000100e10091 & 0xc) * -2 + '\f';
    cRam0000000100e10672 = bRam0000000100e10092 + (bRam0000000100e10092 & 0x18) * -2 + -0x68;
    bRam0000000100e10673 = bRam0000000100e10093 ^ 5;
    bRam0000000100e10674 = bRam0000000100e10094 ^ 0x1f;
    bRam0000000100e10675 = bRam0000000100e10095 ^ 0x34;
    bRam0000000100e10676 = bRam0000000100e10096 ^ 0x40;
    bRam0000000100e10677 = bRam0000000100e10097 ^ 0x22;
    bRam0000000100e10678 = bRam0000000100e10098 ^ 0xfb;
    cRam0000000100e10679 = bRam0000000100e10099 + (bRam0000000100e10099 & 0xe1) * -2 + -0x1f;
    bRam0000000100e1067a = bRam0000000100e1009a ^ 0xd8;
    bRam0000000100e1067b = bRam0000000100e1009b ^ 0x42;
    cRam0000000100e1067c = bRam0000000100e1009c + (bRam0000000100e1009c & 0x70) * -2 + -0x10;
    cRam0000000100e1067d = bRam0000000100e1009d + (bRam0000000100e1009d & 0x6d) * -2 + 'm';
    cRam0000000100e1067e = bRam0000000100e1009e + (bRam0000000100e1009e & 0xe3) * -2 + -0x1d;
    uRam0000000100e1067f =
         CONCAT17((byte)((ulong)uRam0000000100e1009f >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1009f >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1009f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1009f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1009f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1009f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1009f >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba90 >> 8),
                                                  (byte)uRam0000000100e1009f ^ (byte)_UNK_10099ba90)
                                                  ))))));
    bRam0000000100e10687 = bRam0000000100e100a7 ^ 0x6b;
    cRam0000000100e10688 = bRam0000000100e100a8 + (bRam0000000100e100a8 & 0x1c) * -2 + '\x1c';
    bRam0000000100e10689 = bRam0000000100e100a9 ^ 0xc2;
    bRam0000000100e1068a = bRam0000000100e100aa ^ 0xce;
    bRam0000000100e1068b = bRam0000000100e100ab ^ 0x1c;
    bRam0000000100e1068c = bRam0000000100e100ac ^ 0x3d;
    bRam0000000100e1068d = bRam0000000100e100ad ^ 0x9a;
    cRam0000000100e1068e = bRam0000000100e100ae + (bRam0000000100e100ae & 0x45) * -2 + -0x3b;
    bRam0000000100e1068f = bRam0000000100e100af ^ 0xf4;
    bRam0000000100e10690 = bRam0000000100e100b0 ^ 0xcb;
    bRam0000000100e10691 = bRam0000000100e100b1 ^ 0x59;
    cRam0000000100e10692 = bRam0000000100e100b2 + (bRam0000000100e100b2 & 0x1c) * -2 + '\x1c';
    bRam0000000100e10693 = bRam0000000100e100b3 ^ 0xcf;
    bRam0000000100e10694 = bRam0000000100e100b4 ^ 0xac;
    bRam0000000100e10695 = bRam0000000100e100b5 ^ 0xc2;
    cRam0000000100e10696 = bRam0000000100e100b6 + (bRam0000000100e100b6 & 0x50) * -2 + 'P';
    uRam0000000100e10697 = uRam0000000100e100b7;
    bRam0000000100e10698 = ~((bRam0000000100e100b8 | 0x77) & (~bRam0000000100e100b8 | 0x88));
    bRam0000000100e10699 = bRam0000000100e100b9 ^ 0x1a;
    cRam0000000100e1069a = bRam0000000100e100ba + (bRam0000000100e100ba & 0xf) * -2 + '\x0f';
    bRam0000000100e1069b = bRam0000000100e100bb ^ 0xce;
    bRam0000000100e1069c = bRam0000000100e100bc ^ 0xb9;
    cRam0000000100e1069d = bRam0000000100e100bd + (bRam0000000100e100bd & 0x25) * -2 + '%';
    bRam0000000100e1069e = bRam0000000100e100be ^ 0xd9;
    bRam0000000100e1069f = bRam0000000100e100bf ^ 0xdf;
    cRam0000000100e106a0 = bRam0000000100e100c0 + (bRam0000000100e100c0 & 0x1d) * -2 + -99;
    bRam0000000100e106a1 = bRam0000000100e100c1 ^ 0x40;
    bRam0000000100e106a2 = bRam0000000100e100c2 ^ 0x77;
    bRam0000000100e106a3 = bRam0000000100e100c3 ^ 0x7c;
    bRam0000000100e106a4 = bRam0000000100e100c4 ^ 0x5c;
    bRam0000000100e106a5 = bRam0000000100e100c5 ^ 0x5a;
    bRam0000000100e106a6 = bRam0000000100e100c6 ^ 0xb;
    cRam0000000100e106a7 = bRam0000000100e100c7 + (bRam0000000100e100c7 & 6) * -2 + '\x06';
    bRam0000000100e106a8 = bRam0000000100e100c8 ^ 0xcf;
    cRam0000000100e106a9 = bRam0000000100e100c9 + (bRam0000000100e100c9 & 0xf1) * -2 + 'q';
    bRam0000000100e106aa = bRam0000000100e100ca ^ 0xd6;
    bRam0000000100e106ab = bRam0000000100e100cb ^ 0x75;
    bRam0000000100e106ac = bRam0000000100e100cc ^ 0xf4;
    bRam0000000100e106ad = bRam0000000100e100cd ^ 0xc3;
    cRam0000000100e106ae = bRam0000000100e100ce + (bRam0000000100e100ce & 0x3d) * -2 + -0x43;
    cRam0000000100e106af = bRam0000000100e100cf + (bRam0000000100e100cf & 0x62) * -2 + 'b';
    bRam0000000100e106b0 = bRam0000000100e100d0 ^ 0x71;
    bRam0000000100e106b1 = bRam0000000100e100d1 ^ 0x98;
    cRam0000000100e106b2 = bRam0000000100e100d2 + (bRam0000000100e100d2 & 0x29) * -2 + -0x57;
    cRam0000000100e106b3 = bRam0000000100e100d3 + (bRam0000000100e100d3 & 0x58) * -2 + -0x28;
    bRam0000000100e106b4 = bRam0000000100e100d4 ^ 99;
    cRam0000000100e106b5 = bRam0000000100e100d5 + (bRam0000000100e100d5 & 0x35) * -2 + -0x4b;
    bRam0000000100e106b6 = bRam0000000100e100d6 ^ 0x8d;
    bRam0000000100e106b7 = bRam0000000100e100d7 ^ 0x96;
    bRam0000000100e106b8 = bRam0000000100e100d8 ^ 0xb0;
    bRam0000000100e106b9 = bRam0000000100e100d9 ^ 0xba;
    bRam0000000100e106ba = bRam0000000100e100da ^ 0x12;
    bRam0000000100e106bb = bRam0000000100e100db ^ 0xf6;
    cRam0000000100e106bc = bRam0000000100e100dc + (bRam0000000100e100dc & 0x54) * -2 + 'T';
    bRam0000000100e106bd = bRam0000000100e100dd ^ 0xa3;
    bRam0000000100e106be = bRam0000000100e100de ^ 6;
    bRam0000000100e106bf = bRam0000000100e100df ^ 0x86;
    bRam0000000100e106c0 = bRam0000000100e100e0 ^ 0x18;
    cRam0000000100e106c1 = bRam0000000100e100e1 + (bRam0000000100e100e1 & 0xef) * -2 + 'o';
    bRam0000000100e106c2 = bRam0000000100e100e2 ^ 0x52;
    bRam0000000100e106c3 = bRam0000000100e100e3 ^ 0x24;
    bRam0000000100e106c4 = bRam0000000100e100e4 ^ 0xe1;
    bRam0000000100e106c5 = bRam0000000100e100e5 ^ 0x6a;
    bRam0000000100e106c6 = bRam0000000100e100e6 ^ 0x5f;
    bRam0000000100e106c7 = bRam0000000100e100e7 ^ 0xfa;
    bRam0000000100e106c8 = bRam0000000100e100e8 ^ 0xdf;
    cRam0000000100e106c9 = bRam0000000100e100e9 + (bRam0000000100e100e9 & 0x40) * '\x02' + '@';
    bRam0000000100e106ca = bRam0000000100e100ea ^ 0xbd;
    bRam0000000100e106cb = bRam0000000100e100eb ^ 1;
    bRam0000000100e106cc = bRam0000000100e100ec ^ 0xe8;
    bRam0000000100e106cd = bRam0000000100e100ed ^ 100;
    bRam0000000100e106ce = bRam0000000100e100ee ^ 0xee;
    bRam0000000100e106cf = bRam0000000100e100ef ^ 6;
    bRam0000000100e106d0 = ~((bRam0000000100e100f0 | 0x28) & (bRam0000000100e100f0 ^ 0xff | 0xd7));
    cRam0000000100e106d1 = bRam0000000100e100f1 + (bRam0000000100e100f1 & 4) * -2 + -0x7c;
    bRam0000000100e106d2 = bRam0000000100e100f2 ^ 0xd8;
    bRam0000000100e106d3 = bRam0000000100e100f3 ^ 0xa0;
    bRam0000000100e106d4 = bRam0000000100e100f4 ^ 0x22;
    bRam0000000100e106d5 = bRam0000000100e100f5 ^ 0xd9;
    bRam0000000100e106d6 = bRam0000000100e100f6 ^ 0x72;
    bRam0000000100e106d7 = bRam0000000100e100f7 ^ 4;
    bRam0000000100e106d8 = bRam0000000100e100f8 ^ 0x6e;
    bRam0000000100e106d9 = ~((bRam0000000100e100f9 | 0x9b) & (bRam0000000100e100f9 ^ 0xff | 100));
    bRam0000000100e106da = bRam0000000100e100fa ^ 0x23;
    bRam0000000100e106db = bRam0000000100e100fb ^ 0xd9;
    cRam0000000100e106dc = bRam0000000100e100fc + (bRam0000000100e100fc & 0x50) * -2 + 'P';
    bRam0000000100e106dd = bRam0000000100e100fd ^ 0xdc;
    bRam0000000100e106de = bRam0000000100e100fe ^ 0x9a;
    bRam0000000100e106df = bRam0000000100e100ff ^ 0xe0;
    bRam0000000100e106e0 = bRam0000000100e10100 ^ 0x3b;
    bRam0000000100e106e1 = bRam0000000100e10101 ^ 0x7d;
    bRam0000000100e106e2 = bRam0000000100e10102 ^ 0xeb;
    cRam0000000100e106e3 = bRam0000000100e10103 + (bRam0000000100e10103 & 0x3e) * -2 + '>';
    bRam0000000100e106e4 = bRam0000000100e10104 ^ 0x7d;
    bRam0000000100e106e5 = bRam0000000100e10105 ^ 199;
    bRam0000000100e106e6 = bRam0000000100e10106 ^ 0x1f;
    bRam0000000100e106e7 = bRam0000000100e10107 ^ 0x1c;
    bRam0000000100e106e8 = bRam0000000100e10108 ^ 0xa5;
    cRam0000000100e106e9 = bRam0000000100e10109 + (bRam0000000100e10109 & 0xbb) * -2 + ';';
    bRam0000000100e106ea = bRam0000000100e1010a ^ 0x59;
    bRam0000000100e106eb = bRam0000000100e1010b ^ 5;
    cRam0000000100e106ec = bRam0000000100e1010c + (bRam0000000100e1010c & 0xcc) * -2 + -0x34;
    bRam0000000100e106ed = bRam0000000100e1010d ^ 0xc2;
    cRam0000000100e106ee = bRam0000000100e1010e + (bRam0000000100e1010e & 0x2c) * -2 + -0x54;
    bRam0000000100e106ef = bRam0000000100e1010f ^ 0x1a;
    cRam0000000100e106f0 = bRam0000000100e10110 + (bRam0000000100e10110 & 0x48) * -2 + 'H';
    bRam0000000100e106f1 = bRam0000000100e10111 ^ 0x35;
    uRam0000000100e1062d =
         CONCAT17((byte)((ulong)uRam0000000100e1004d >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba78 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1004d >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba78 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1004d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba78 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1004d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba78 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1004d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba78 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1004d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba78 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1004d >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba78 >> 8),
                                                  (byte)uRam0000000100e1004d ^ (byte)_UNK_10099ba78)
                                                  ))))));
    cRam0000000100e106f2 = bRam0000000100e10112 + (bRam0000000100e10112 & 0x7e) * -2 + '~';
    uRam0000000100e106f3 =
         CONCAT17((byte)((ulong)uRam0000000100e10113 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10113 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10113 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10113 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10113 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10113 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10113 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba98 >> 8),
                                                  (byte)uRam0000000100e10113 ^ (byte)_UNK_10099ba98)
                                                  ))))));
    bRam0000000100e106fb = bRam0000000100e1011b ^ 0xe7;
    bRam0000000100e106fc = bRam0000000100e1011c ^ 0x3a;
    bRam0000000100e106fd = bRam0000000100e1011d ^ 0x91;
    bRam0000000100e106fe = bRam0000000100e1011e ^ 0x72;
    bRam0000000100e106ff = bRam0000000100e1011f ^ 0x56;
    bRam0000000100e10700 = bRam0000000100e10120 ^ 0x84;
    cRam0000000100e10701 = bRam0000000100e10121 + (bRam0000000100e10121 & 0x5a) * -2 + -0x26;
    bRam0000000100e10702 = bRam0000000100e10122 ^ 0x2c;
    bRam0000000100e10703 = bRam0000000100e10123 ^ 0xcc;
    bRam0000000100e10704 = bRam0000000100e10124 ^ 0x86;
    cRam0000000100e10705 = bRam0000000100e10125 + (bRam0000000100e10125 & 0x49) * -2 + 'I';
    cRam0000000100e10706 = bRam0000000100e10126 + (bRam0000000100e10126 & 0x70) * -2 + -0x10;
    bRam0000000100e10707 = bRam0000000100e10127 ^ 200;
    bRam0000000100e10708 = bRam0000000100e10128 ^ 0x60;
    bRam0000000100e10709 = bRam0000000100e10129 ^ 0x77;
    cRam0000000100e1070a = bRam0000000100e1012a + (bRam0000000100e1012a & 0x35) * -2 + '5';
    bRam0000000100e1070b = bRam0000000100e1012b ^ 0x3a;
    bRam0000000100e1070c = bRam0000000100e1012c ^ 0xb5;
    bRam0000000100e1070d = bRam0000000100e1012d ^ 0xe6;
    bRam0000000100e1070e = bRam0000000100e1012e ^ 0x67;
    bRam0000000100e1070f = bRam0000000100e1012f ^ 0xe7;
    uRam0000000100e10610 =
         CONCAT17((byte)((ulong)uRam0000000100e10030 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba70 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10030 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba70 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10030 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba70 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10030 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba70 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10030 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10030 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba70 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10030 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba70 >> 8),
                                                  (byte)uRam0000000100e10030 ^ (byte)_UNK_10099ba70)
                                                  ))))));
    cRam0000000100e10710 = bRam0000000100e10130 + (bRam0000000100e10130 & 0x36) * -2 + -0x4a;
    uRam0000000100e10711 =
         CONCAT17((byte)((ulong)uRam0000000100e10131 >> 0x38) ^
                  (byte)((ulong)_UNK_10099baa0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10131 >> 0x30) ^
                           (byte)((ulong)_UNK_10099baa0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10131 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099baa0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10131 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099baa0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10131 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099baa0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10131 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099baa0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10131 >> 8) ^
                                                  (byte)((ulong)_UNK_10099baa0 >> 8),
                                                  (byte)uRam0000000100e10131 ^ (byte)_UNK_10099baa0)
                                                  ))))));
    bRam0000000100e10719 = bRam0000000100e10139 ^ 0x1e;
    bRam0000000100e1071a = bRam0000000100e1013a ^ 0x56;
    cRam0000000100e1071b = bRam0000000100e1013b + (bRam0000000100e1013b & 0x38) * -2 + '8';
    bRam0000000100e1071c = bRam0000000100e1013c ^ 0xe1;
    bRam0000000100e1071d = bRam0000000100e1013d ^ 0x9c;
    bRam0000000100e1071e = bRam0000000100e1013e ^ 0xb1;
    bRam0000000100e1071f = bRam0000000100e1013f ^ 0x39;
    cRam0000000100e10720 = bRam0000000100e10140 + (bRam0000000100e10140 & 0x6a) * -2 + -0x16;
    bRam0000000100e10721 = bRam0000000100e10141 ^ 0x67;
    bRam0000000100e10722 = bRam0000000100e10142 ^ 199;
    bRam0000000100e10723 = bRam0000000100e10143 ^ 0xfe;
    uRam0000000100e105fb =
         CONCAT17((byte)((ulong)uRam0000000100e1001b >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba68 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1001b >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba68 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1001b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba68 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1001b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba68 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1001b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1001b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba68 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1001b >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba68 >> 8),
                                                  (byte)uRam0000000100e1001b ^ (byte)_UNK_10099ba68)
                                                  ))))));
    bRam0000000100e10724 = bRam0000000100e10144 ^ 0x25;
    bRam0000000100e10725 = ~((bRam0000000100e10145 | 0x3c) & (~bRam0000000100e10145 | 0xc3));
    bRam0000000100e10726 = bRam0000000100e10146 ^ 0x56;
    cRam0000000100e10727 = bRam0000000100e10147 + (bRam0000000100e10147 & 0x34) * -2 + '4';
    bRam0000000100e10728 = bRam0000000100e10148 ^ 0xc0;
    bRam0000000100e10729 = bRam0000000100e10149 ^ 10;
    bRam0000000100e1072a = bRam0000000100e1014a ^ 0x25;
    cRam0000000100e1072b = bRam0000000100e1014b + (bRam0000000100e1014b & 0x15) * -2 + -0x6b;
    bRam0000000100e1072c = bRam0000000100e1014c ^ 2;
    bRam0000000100e1072d = bRam0000000100e1014d ^ 0x8b;
    bRam0000000100e1072e = bRam0000000100e1014e ^ 0x8d;
    bRam0000000100e1072f = bRam0000000100e1014f ^ 0xb5;
    cRam0000000100e10730 = bRam0000000100e10150 + (bRam0000000100e10150 & 199) * -2 + -0x39;
    bRam0000000100e10731 = bRam0000000100e10151 ^ 0x54;
    bRam0000000100e10732 = bRam0000000100e10152 ^ 0xe9;
    bRam0000000100e10733 = bRam0000000100e10153 ^ 0x33;
    bRam0000000100e10734 = bRam0000000100e10154 ^ 0xec;
    bRam0000000100e10735 = ~((bRam0000000100e10155 | 0xe7) & (~bRam0000000100e10155 | 0x18));
    cRam0000000100e10736 = bRam0000000100e10156 + (bRam0000000100e10156 & 0xef) * -2 + -0x11;
    bRam0000000100e10737 = bRam0000000100e10157 ^ 3;
    uRam0000000100e105e2 =
         CONCAT17((byte)((ulong)uRam0000000100e10002 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10002 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10002 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10002 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10002 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10002 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10002 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba60 >> 8),
                                                  (byte)uRam0000000100e10002 ^ (byte)_UNK_10099ba60)
                                                  ))))));
    bRam0000000100e10738 = bRam0000000100e10158 ^ 0x5c;
    bRam0000000100e10739 = bRam0000000100e10159 ^ 0xe6;
    bRam0000000100e1073a = bRam0000000100e1015a ^ 0x38;
    cRam0000000100e1073b = bRam0000000100e1015b + (bRam0000000100e1015b & 0x1d) * -2 + '\x1d';
    bRam0000000100e1073c = bRam0000000100e1015c ^ 0x59;
    bRam0000000100e1073d = bRam0000000100e1015d ^ 0x2d;
    cRam0000000100e1073e = bRam0000000100e1015e + (bRam0000000100e1015e & 0xc) * -2 + '\f';
    bRam0000000100e1073f = bRam0000000100e1015f ^ 4;
    bRam0000000100e10740 = bRam0000000100e10160 ^ 0x5e;
    cRam0000000100e10741 = bRam0000000100e10161 + (bRam0000000100e10161 & 0x65) * -2 + -0x1b;
    bRam0000000100e10742 = bRam0000000100e10162 ^ 0x80;
    bRam0000000100e10743 = bRam0000000100e10163 ^ 0xf7;
    bRam0000000100e10744 = bRam0000000100e10164 ^ 0x28;
    bRam0000000100e10745 = bRam0000000100e10165 ^ 0x26;
    bRam0000000100e10746 = bRam0000000100e10166 ^ 0xde;
    bRam0000000100e10747 = bRam0000000100e10167 ^ 0x3d;
    cRam0000000100e10748 = bRam0000000100e10168 + (bRam0000000100e10168 & 0x3d) * -2 + -0x43;
    bRam0000000100e10749 = bRam0000000100e10169 ^ 0x83;
    bRam0000000100e1074a = bRam0000000100e1016a ^ 199;
    bRam0000000100e1074b = bRam0000000100e1016b ^ 0xc5;
    bRam0000000100e1074c = bRam0000000100e1016c ^ 0xa7;
    bRam0000000100e1074d = ~((bRam0000000100e1016d | 0x94) & (bRam0000000100e1016d ^ 0xff | 0x6b));
    cRam0000000100e10756 = bRam0000000100e10176 + (bRam0000000100e10176 & 1) * -2 + '\x01';
    bRam0000000100e10757 = bRam0000000100e10177 ^ 0x15;
    bRam0000000100e10758 = bRam0000000100e10178 ^ 0x80;
    bRam0000000100e10759 = ~((bRam0000000100e10179 | 0x5c) & (bRam0000000100e10179 ^ 0xff | 0xa3));
    cRam0000000100e1075a = bRam0000000100e1017a + (bRam0000000100e1017a & 0x60) * -2 + '`';
    bRam0000000100e1075b = bRam0000000100e1017b ^ 10;
    cRam0000000100e1075c = bRam0000000100e1017c + (bRam0000000100e1017c & 0x40) * '\x02' + -0x40;
    bRam0000000100e1075d = bRam0000000100e1017d ^ 0xb0;
    bRam0000000100e1075e = bRam0000000100e1017e ^ 0x4f;
    bRam0000000100e1075f = bRam0000000100e1017f ^ 0xbe;
    bRam0000000100e10760 = bRam0000000100e10180 ^ 0x80;
    cRam0000000100e10761 = bRam0000000100e10181 + (bRam0000000100e10181 & 0x20) * -2 + ' ';
    cRam0000000100e10762 = bRam0000000100e10182 + (bRam0000000100e10182 & 0x2e) * -2 + '.';
    bRam0000000100e10763 = bRam0000000100e10183 ^ 0xdc;
    bRam0000000100e10764 = bRam0000000100e10184 ^ 0xbc;
    bRam0000000100e10765 = bRam0000000100e10185 ^ 0xe0;
    bRam0000000100e10766 = bRam0000000100e10186 ^ 0xb2;
    bRam0000000100e10767 = bRam0000000100e10187 ^ 0xe4;
    bRam0000000100e10768 = bRam0000000100e10188 ^ 0xf1;
    bRam0000000100e10769 = bRam0000000100e10189 ^ 0x50;
    cRam0000000100e1076a = bRam0000000100e1018a + (bRam0000000100e1018a & 199) * -2 + 'G';
    bRam0000000100e1076b = bRam0000000100e1018b ^ 0xd8;
    bRam0000000100e1076c = bRam0000000100e1018c ^ 0x30;
    uRam0000000100e105ac =
         CONCAT17((byte)((ulong)uRam0000000100e0ffcc >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ffcc >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ffcc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ffcc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ffcc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ffcc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ffcc >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba58 >> 8),
                                                  (byte)uRam0000000100e0ffcc ^ (byte)_UNK_10099ba58)
                                                  ))))));
    bRam0000000100e1076d = bRam0000000100e1018d ^ 0x1e;
    bRam0000000100e1076e = bRam0000000100e1018e ^ 0x37;
    cRam0000000100e1076f = bRam0000000100e1018f + (bRam0000000100e1018f & 0x3e) * -2 + -0x42;
    bRam0000000100e10770 = bRam0000000100e10190 ^ 0xc5;
    uRam0000000100e105a0 =
         CONCAT17((byte)((ulong)uRam0000000100e0ffc0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba50 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ffc0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba50 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ffc0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba50 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ffc0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba50 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ffc0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ffc0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba50 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ffc0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba50 >> 8),
                                                  (byte)uRam0000000100e0ffc0 ^ (byte)_UNK_10099ba50)
                                                  ))))));
    cRam0000000100e10771 = bRam0000000100e10191 + (bRam0000000100e10191 & 0x68) * -2 + -0x18;
    bRam0000000100e10772 = bRam0000000100e10192 ^ 0x6b;
    bRam0000000100e10773 = bRam0000000100e10193 ^ 0xd5;
    bRam0000000100e10774 = bRam0000000100e10194 ^ 0x70;
    bRam0000000100e10775 = bRam0000000100e10195 ^ 0xf2;
    bRam0000000100e10776 = bRam0000000100e10196 ^ 0x29;
    uRam0000000100e1058b =
         CONCAT17((byte)((ulong)uRam0000000100e0ffab >> 0x38) ^
                  (byte)((ulong)_UNK_10099bff0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ffab >> 0x30) ^
                           (byte)((ulong)_UNK_10099bff0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ffab >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bff0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ffab >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bff0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ffab >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bff0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ffab >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bff0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ffab >> 8) ^
                                                  (byte)((ulong)_UNK_10099bff0 >> 8),
                                                  (byte)uRam0000000100e0ffab ^ (byte)_UNK_10099bff0)
                                                  ))))));
    uRam0000000100e10593 =
         CONCAT17((byte)((ulong)uRam0000000100e0ffb3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bff8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ffb3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bff8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ffb3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bff8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ffb3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bff8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ffb3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bff8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ffb3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bff8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ffb3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bff8 >> 8),
                                                  (byte)uRam0000000100e0ffb3 ^ (byte)_UNK_10099bff8)
                                                  ))))));
    cRam0000000100e10777 = bRam0000000100e10197 + (bRam0000000100e10197 & 0x68) * -2 + -0x18;
    uRam0000000100e10582 =
         CONCAT17((byte)((ulong)uRam0000000100e0ffa2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ffa2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ffa2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ffa2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ffa2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ffa2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ffa2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba48 >> 8),
                                                  (byte)uRam0000000100e0ffa2 ^ (byte)_UNK_10099ba48)
                                                  ))))));
    bRam0000000100e10778 = bRam0000000100e10198 ^ 0x27;
    bRam0000000100e10779 = bRam0000000100e10199 ^ 0xa3;
    cRam0000000100e1077a = bRam0000000100e1019a + (bRam0000000100e1019a & 0x7e) * -2 + '~';
    uRam0000000100e1077b =
         CONCAT17((byte)((ulong)uRam0000000100e1019b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bab0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1019b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bab0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1019b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bab0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1019b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bab0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1019b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bab0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1019b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bab0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1019b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bab0 >> 8),
                                                  (byte)uRam0000000100e1019b ^ (byte)_UNK_10099bab0)
                                                  ))))));
    bRam0000000100e10783 = bRam0000000100e101a3 ^ 0xd7;
    bRam0000000100e10784 = bRam0000000100e101a4 ^ 0x4b;
    cRam0000000100e10785 = bRam0000000100e101a5 + (bRam0000000100e101a5 & 9) * -2 + '\t';
    bRam0000000100e10786 = bRam0000000100e101a6 ^ 200;
    uRam0000000100e10574 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff94 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba40 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff94 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba40 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff94 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba40 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff94 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba40 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff94 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba40 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff94 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba40 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff94 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba40 >> 8),
                                                  (byte)uRam0000000100e0ff94 ^ (byte)_UNK_10099ba40)
                                                  ))))));
    bRam0000000100e10787 = bRam0000000100e101a7 ^ 0x33;
    bRam0000000100e10788 = bRam0000000100e101a8 ^ 0x62;
    bRam0000000100e10789 = bRam0000000100e101a9 ^ 0xd1;
    bRam0000000100e1078a = ~((bRam0000000100e101aa | 0x87) & (~bRam0000000100e101aa | 0x78));
    uRam0000000100e10569 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff89 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff89 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff89 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff89 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff89 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff89 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff89 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba38 >> 8),
                                                  (byte)uRam0000000100e0ff89 ^ (byte)_UNK_10099ba38)
                                                  ))))));
    cRam0000000100e1078b = bRam0000000100e101ab + (bRam0000000100e101ab & 0x33) * -2 + -0x4d;
    bRam0000000100e1078c = bRam0000000100e101ac ^ 0x5f;
    bRam0000000100e1078d = bRam0000000100e101ad ^ 0x69;
    bRam0000000100e1078e = bRam0000000100e101ae ^ 0x8d;
    bRam0000000100e1078f = bRam0000000100e101af ^ 0x5e;
    cRam0000000100e10790 = bRam0000000100e101b0 + (bRam0000000100e101b0 & 0xf9) * -2 + -7;
    bRam0000000100e10791 = bRam0000000100e101b1 ^ 0x58;
    bRam0000000100e10792 = bRam0000000100e101b2 ^ 0x9a;
    bRam0000000100e10793 = bRam0000000100e101b3 ^ 0xb6;
    cRam0000000100e10794 = bRam0000000100e101b4 + (bRam0000000100e101b4 & 0xfd) * -2 + -3;
    bRam0000000100e10795 = bRam0000000100e101b5 ^ 0x23;
    bRam0000000100e10796 = bRam0000000100e101b6 ^ 0xae;
    cRam0000000100e10797 = bRam0000000100e101b7 + (bRam0000000100e101b7 & 0x58) * -2 + -0x28;
    cRam0000000100e10798 = bRam0000000100e101b8 + (bRam0000000100e101b8 & 0x2d) * -2 + -0x53;
    bRam0000000100e10799 = bRam0000000100e101b9 ^ 0xcf;
    cRam0000000100e1079a = bRam0000000100e101ba + (bRam0000000100e101ba & 3) * -2 + '\x03';
    bRam0000000100e1079b = bRam0000000100e101bb ^ 0x11;
    bRam0000000100e1079c = ~((bRam0000000100e101bc | 0xb3) & (bRam0000000100e101bc ^ 0xff | 0x4c));
    bRam0000000100e1079d = bRam0000000100e101bd ^ 0x10;
    bRam0000000100e1079e = bRam0000000100e101be ^ 0x26;
    bRam0000000100e1079f = bRam0000000100e101bf ^ 0x85;
    bRam0000000100e107a0 = bRam0000000100e101c0 ^ 0xb5;
    uRam0000000100e1054c =
         CONCAT17((byte)((ulong)uRam0000000100e0ff6c >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff6c >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff6c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff6c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff6c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff6c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff6c >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba30 >> 8),
                                                  (byte)uRam0000000100e0ff6c ^ (byte)_UNK_10099ba30)
                                                  ))))));
    cRam0000000100e107a1 = bRam0000000100e101c1 + (bRam0000000100e101c1 & 0x62) * -2 + -0x1e;
    uRam0000000100e107a2 =
         CONCAT17((byte)((ulong)uRam0000000100e101c2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bab8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e101c2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bab8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e101c2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bab8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e101c2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bab8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e101c2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bab8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e101c2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bab8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e101c2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bab8 >> 8),
                                                  (byte)uRam0000000100e101c2 ^ (byte)_UNK_10099bab8)
                                                  ))))));
    bRam0000000100e107aa = bRam0000000100e101ca ^ 0xf0;
    bRam0000000100e107ab = bRam0000000100e101cb ^ 0x40;
    uRam0000000100e10540 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff60 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff60 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff60 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff60 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff60 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff60 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff60 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba28 >> 8),
                                                  (byte)uRam0000000100e0ff60 ^ (byte)_UNK_10099ba28)
                                                  ))))));
    cRam0000000100e107ac = bRam0000000100e101cc + (bRam0000000100e101cc & 0x99) * -2 + -0x67;
    bRam0000000100e107ad = bRam0000000100e101cd ^ 0xbb;
    cRam0000000100e107ae = bRam0000000100e101ce + (bRam0000000100e101ce & 0x28) * -2 + -0x58;
    uRam0000000100e107af =
         CONCAT17((byte)((ulong)uRam0000000100e101cf >> 0x38) ^
                  (byte)((ulong)_UNK_10099bac0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e101cf >> 0x30) ^
                           (byte)((ulong)_UNK_10099bac0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e101cf >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bac0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e101cf >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bac0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e101cf >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bac0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e101cf >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bac0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e101cf >> 8) ^
                                                  (byte)((ulong)_UNK_10099bac0 >> 8),
                                                  (byte)uRam0000000100e101cf ^ (byte)_UNK_10099bac0)
                                                  ))))));
    uRam0000000100e10535 =
         CONCAT17((byte)((ulong)uRam0000000100e0ff55 >> 0x38) ^
                  (byte)((ulong)_UNK_10099ba20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e0ff55 >> 0x30) ^
                           (byte)((ulong)_UNK_10099ba20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e0ff55 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099ba20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e0ff55 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099ba20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e0ff55 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099ba20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e0ff55 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099ba20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e0ff55 >> 8) ^
                                                  (byte)((ulong)_UNK_10099ba20 >> 8),
                                                  (byte)uRam0000000100e0ff55 ^ (byte)_UNK_10099ba20)
                                                  ))))));
    cRam0000000100e107b7 = bRam0000000100e101d7 + (bRam0000000100e101d7 & 2) * -2 + '\x02';
    bRam0000000100e107b8 = bRam0000000100e101d8 ^ 0x84;
    bRam0000000100e107b9 = bRam0000000100e101d9 ^ 0x26;
    bRam0000000100e107ba = bRam0000000100e101da ^ 0xda;
    bRam0000000100e107bb = bRam0000000100e101db ^ 0x5d;
    bRam0000000100e107bc = bRam0000000100e101dc ^ 0x1d;
    bRam0000000100e107bd = bRam0000000100e101dd ^ 0x4a;
    cRam0000000100e107be = bRam0000000100e101de + (bRam0000000100e101de & 0x62) * -2 + 'b';
    uRam0000000100e107bf =
         CONCAT17((byte)((ulong)uRam0000000100e101df >> 0x38) ^
                  (byte)((ulong)_UNK_10099bac8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e101df >> 0x30) ^
                           (byte)((ulong)_UNK_10099bac8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e101df >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bac8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e101df >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bac8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e101df >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bac8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e101df >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bac8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e101df >> 8) ^
                                                  (byte)((ulong)_UNK_10099bac8 >> 8),
                                                  (byte)uRam0000000100e101df ^ (byte)_UNK_10099bac8)
                                                  ))))));
    bRam0000000100e107c7 = bRam0000000100e101e7 ^ 0x39;
    bRam0000000100e107c8 = bRam0000000100e101e8 ^ 0xe2;
    bRam0000000100e107c9 = bRam0000000100e101e9 ^ 0x61;
    cRam0000000100e107ca = bRam0000000100e101ea + (bRam0000000100e101ea & 0xd) * -2 + -0x73;
    bRam0000000100e107cb = bRam0000000100e101eb ^ 0xfd;
    cRam0000000100e107cc = bRam0000000100e101ec + (bRam0000000100e101ec & 0x2f) * -2 + '/';
    uRam0000000100e107cd =
         CONCAT17((byte)((ulong)uRam0000000100e101ed >> 0x38) ^
                  (byte)((ulong)_UNK_10099bad0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e101ed >> 0x30) ^
                           (byte)((ulong)_UNK_10099bad0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e101ed >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bad0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e101ed >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bad0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e101ed >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bad0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e101ed >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bad0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e101ed >> 8) ^
                                                  (byte)((ulong)_UNK_10099bad0 >> 8),
                                                  (byte)uRam0000000100e101ed ^ (byte)_UNK_10099bad0)
                                                  ))))));
    cRam0000000100e107d5 = bRam0000000100e101f5 + (bRam0000000100e101f5 & 0x69) * -2 + 'i';
    bRam0000000100e107d6 = bRam0000000100e101f6 ^ 3;
    bRam0000000100e107d7 = bRam0000000100e101f7 ^ 10;
    bRam0000000100e107d8 = bRam0000000100e101f8 ^ 0x56;
    bRam0000000100e107d9 = bRam0000000100e101f9 ^ 0x87;
    cRam0000000100e107da = bRam0000000100e101fa + (bRam0000000100e101fa & 0x57) * -2 + 'W';
    uRam0000000100e107db =
         CONCAT17((byte)((ulong)uRam0000000100e101fb >> 0x38) ^
                  (byte)((ulong)_UNK_10099c000 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e101fb >> 0x30) ^
                           (byte)((ulong)_UNK_10099c000 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e101fb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c000 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e101fb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c000 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e101fb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c000 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e101fb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c000 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e101fb >> 8) ^
                                                  (byte)((ulong)_UNK_10099c000 >> 8),
                                                  (byte)uRam0000000100e101fb ^ (byte)_UNK_10099c000)
                                                  ))))));
    uRam0000000100e107e3 =
         CONCAT17((byte)((ulong)uRam0000000100e10203 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c008 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10203 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c008 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10203 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c008 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10203 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c008 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10203 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c008 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10203 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c008 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10203 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c008 >> 8),
                                                  (byte)uRam0000000100e10203 ^ (byte)_UNK_10099c008)
                                                  ))))));
    bRam0000000100e107eb = bRam0000000100e1020b ^ 0xa8;
    cRam0000000100e107ec = bRam0000000100e1020c + (bRam0000000100e1020c & 0x72) * -2 + 'r';
    cRam0000000100e107ed = bRam0000000100e1020d + (bRam0000000100e1020d & 0x30) * -2 + '0';
    bRam0000000100e107ee = bRam0000000100e1020e ^ 0x58;
    bRam0000000100e107ef = bRam0000000100e1020f ^ 0xfa;
    bRam0000000100e107f0 = bRam0000000100e10210 ^ 0x81;
    bRam0000000100e107f1 = bRam0000000100e10211 ^ 0xcd;
    cRam0000000100e107f2 = bRam0000000100e10212 + (bRam0000000100e10212 & 0x1a) * -2 + '\x1a';
    cRam0000000100e107f3 = bRam0000000100e10213 + (bRam0000000100e10213 & 0x78) * -2 + -8;
    uRam0000000100e107f4 = uRam0000000100e10214;
    bRam0000000100e107f5 = bRam0000000100e10215 ^ 0x72;
    bRam0000000100e107f6 = bRam0000000100e10216 ^ 0x4c;
    cRam0000000100e107f7 = bRam0000000100e10217 + (bRam0000000100e10217 & 0x38) * -2 + -0x48;
    bRam0000000100e107f8 = bRam0000000100e10218 ^ 0x35;
    bRam0000000100e107f9 = bRam0000000100e10219 ^ 0x6f;
    bRam0000000100e107fa = bRam0000000100e1021a ^ 0x47;
    bRam0000000100e107fb = bRam0000000100e1021b ^ 0xda;
    bRam0000000100e107fc = bRam0000000100e1021c ^ 0x3b;
    cRam0000000100e107fd = bRam0000000100e1021d + (bRam0000000100e1021d & 0x6a) * -2 + 'j';
    cRam0000000100e107fe = bRam0000000100e1021e + (bRam0000000100e1021e & 0x4a) * -2 + 'J';
    bRam0000000100e107ff = bRam0000000100e1021f ^ 0x2a;
    bRam0000000100e10800 = bRam0000000100e10220 ^ 0xc4;
    bRam0000000100e10801 = bRam0000000100e10221 ^ 0x23;
    cRam0000000100e10802 = bRam0000000100e10222 + (bRam0000000100e10222 & 0x2c) * -2 + ',';
    cRam0000000100e10803 = bRam0000000100e10223 + (bRam0000000100e10223 & 0xfd) * -2 + '}';
    cRam0000000100e10804 = bRam0000000100e10224 + (bRam0000000100e10224 & 0xf) * -2 + '\x0f';
    uRam0000000100e10805 =
         CONCAT17((byte)((ulong)uRam0000000100e10225 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bad8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10225 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bad8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10225 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bad8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10225 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bad8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10225 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bad8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10225 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bad8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10225 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bad8 >> 8),
                                                  (byte)uRam0000000100e10225 ^ (byte)_UNK_10099bad8)
                                                  ))))));
    cRam0000000100e1080d = bRam0000000100e1022d + (bRam0000000100e1022d & 0x7a) * -2 + -6;
    bRam0000000100e1080e = bRam0000000100e1022e ^ 0x7d;
    bRam0000000100e1080f = bRam0000000100e1022f ^ 0xd5;
    cRam0000000100e10810 = bRam0000000100e10230 + (bRam0000000100e10230 & 0xc1) * -2 + 'A';
    bRam0000000100e10811 = bRam0000000100e10231 ^ 0xec;
    bRam0000000100e10812 = bRam0000000100e10232 ^ 0x19;
    bRam0000000100e10813 = bRam0000000100e10233 ^ 0xe0;
    bRam0000000100e10814 = ~((bRam0000000100e10234 | 0xdc) & (bRam0000000100e10234 ^ 0xff | 0x23));
    bRam0000000100e10815 = ~((bRam0000000100e10235 | 0x53) & (bRam0000000100e10235 ^ 0xff | 0xac));
    bRam0000000100e10816 = bRam0000000100e10236 ^ 0xc1;
    bRam0000000100e10817 = bRam0000000100e10237 ^ 0x91;
    bRam0000000100e10818 = ~((bRam0000000100e10238 | 0x41) & (bRam0000000100e10238 ^ 0xff | 0xbe));
    bRam0000000100e10819 = bRam0000000100e10239 ^ 0xe8;
    bRam0000000100e1081a = bRam0000000100e1023a ^ 0x82;
    bRam0000000100e1081b = bRam0000000100e1023b ^ 0x2d;
    cRam0000000100e1081c = bRam0000000100e1023c + (bRam0000000100e1023c & 1) * -2 + -0x7f;
    bRam0000000100e1081d = bRam0000000100e1023d ^ 0x44;
    bRam0000000100e1081e = bRam0000000100e1023e ^ 0x9a;
    bRam0000000100e1081f = bRam0000000100e1023f ^ 0x3f;
    bRam0000000100e10820 = bRam0000000100e10240 ^ 0x91;
    cRam0000000100e10821 = bRam0000000100e10241 + (bRam0000000100e10241 & 0xc) * -2 + -0x74;
    bRam0000000100e10822 = bRam0000000100e10242 ^ 0xd8;
    bRam0000000100e10823 = bRam0000000100e10243 ^ 4;
    bRam0000000100e10824 = bRam0000000100e10244 ^ 0x8b;
    bRam0000000100e10825 = bRam0000000100e10245 ^ 0xc5;
    bRam0000000100e10826 = bRam0000000100e10246 ^ 0xb5;
    bRam0000000100e10827 = bRam0000000100e10247 ^ 0x1b;
    bRam0000000100e10828 = bRam0000000100e10248 ^ 0x2d;
    cRam0000000100e10829 = bRam0000000100e10249 + (bRam0000000100e10249 & 0x45) * -2 + -0x3b;
    bRam0000000100e1082a = bRam0000000100e1024a ^ 0xf2;
    bRam0000000100e1082b = bRam0000000100e1024b ^ 0x6a;
    bRam0000000100e1082c = bRam0000000100e1024c ^ 0xbc;
    bRam0000000100e1082d = bRam0000000100e1024d ^ 0xe4;
    cRam0000000100e1082e = bRam0000000100e1024e + (bRam0000000100e1024e & 0x42) * -2 + 'B';
    uRam0000000100e1082f =
         CONCAT17((byte)((ulong)uRam0000000100e1024f >> 0x38) ^
                  (byte)((ulong)_UNK_10099bae0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1024f >> 0x30) ^
                           (byte)((ulong)_UNK_10099bae0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1024f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bae0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1024f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bae0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1024f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bae0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1024f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bae0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1024f >> 8) ^
                                                  (byte)((ulong)_UNK_10099bae0 >> 8),
                                                  (byte)uRam0000000100e1024f ^ (byte)_UNK_10099bae0)
                                                  ))))));
    bRam0000000100e10837 = bRam0000000100e10257 ^ 0xdc;
    bRam0000000100e10838 = ~((bRam0000000100e10258 | 0x83) & (~bRam0000000100e10258 | 0x7c));
    cRam0000000100e10839 = bRam0000000100e10259 + (bRam0000000100e10259 & 0x7a) * -2 + 'z';
    cRam0000000100e1083a = bRam0000000100e1025a + (bRam0000000100e1025a & 0xaa) * -2 + -0x56;
    bRam0000000100e1083b = bRam0000000100e1025b ^ 0xdd;
    bRam0000000100e1083c = bRam0000000100e1025c ^ 2;
    bRam0000000100e1083d = bRam0000000100e1025d ^ 0xc4;
    bRam0000000100e1083e = bRam0000000100e1025e ^ 0xdc;
    bRam0000000100e1083f = bRam0000000100e1025f ^ 0xc4;
    uRam0000000100e1074e =
         CONCAT17((byte)((ulong)uRam0000000100e1016e >> 0x38) ^
                  (byte)((ulong)_UNK_10099baa8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1016e >> 0x30) ^
                           (byte)((ulong)_UNK_10099baa8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1016e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099baa8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1016e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099baa8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1016e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099baa8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1016e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099baa8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1016e >> 8) ^
                                                  (byte)((ulong)_UNK_10099baa8 >> 8),
                                                  (byte)uRam0000000100e1016e ^ (byte)_UNK_10099baa8)
                                                  ))))));
    bRam0000000100e10840 = bRam0000000100e10260 ^ 0x43;
    bRam0000000100e10841 = bRam0000000100e10261 ^ 0x60;
    cRam0000000100e10842 = bRam0000000100e10262 + (bRam0000000100e10262 & 199) * -2 + 'G';
    bRam0000000100e10843 = bRam0000000100e10263 ^ 0x97;
    bRam0000000100e10844 = bRam0000000100e10264 ^ 0x49;
    bRam0000000100e10845 = bRam0000000100e10265 ^ 0xa7;
    uRam0000000100e10846 = uRam0000000100e10266;
    bRam0000000100e10847 = ~((bRam0000000100e10267 | 0x57) & (bRam0000000100e10267 ^ 0xff | 0xa8));
    bRam0000000100e10848 = bRam0000000100e10268 ^ 0x15;
    bRam0000000100e10849 = bRam0000000100e10269 ^ 0xd6;
    bRam0000000100e1084a = bRam0000000100e1026a ^ 1;
    cRam0000000100e1084b = bRam0000000100e1026b + (bRam0000000100e1026b & 0x49) * -2 + -0x37;
    uRam0000000100e1084c = uRam0000000100e1026c;
    uRam0000000100e1084d =
         CONCAT17((byte)((ulong)uRam0000000100e1026d >> 0x38) ^
                  (byte)((ulong)_UNK_10099bae8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1026d >> 0x30) ^
                           (byte)((ulong)_UNK_10099bae8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1026d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bae8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1026d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bae8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1026d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bae8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1026d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bae8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1026d >> 8) ^
                                                  (byte)((ulong)_UNK_10099bae8 >> 8),
                                                  (byte)uRam0000000100e1026d ^ (byte)_UNK_10099bae8)
                                                  ))))));
    cRam0000000100e10855 = bRam0000000100e10275 + (bRam0000000100e10275 & 0x22) * -2 + -0x5e;
    uRam0000000100e10856 =
         CONCAT17((byte)((ulong)uRam0000000100e10276 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c010 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10276 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c010 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10276 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c010 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10276 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c010 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10276 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c010 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10276 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c010 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10276 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c010 >> 8),
                                                  (byte)uRam0000000100e10276 ^ (byte)_UNK_10099c010)
                                                  ))))));
    uRam0000000100e1085e =
         CONCAT17((byte)((ulong)uRam0000000100e1027e >> 0x38) ^
                  (byte)((ulong)_UNK_10099c018 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1027e >> 0x30) ^
                           (byte)((ulong)_UNK_10099c018 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1027e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c018 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1027e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c018 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1027e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c018 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1027e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c018 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1027e >> 8) ^
                                                  (byte)((ulong)_UNK_10099c018 >> 8),
                                                  (byte)uRam0000000100e1027e ^ (byte)_UNK_10099c018)
                                                  ))))));
    bRam0000000100e1086e = bRam0000000100e1028e ^ 0xbc;
    bRam0000000100e1086f = bRam0000000100e1028f ^ 0x1f;
    bRam0000000100e10870 = bRam0000000100e10290 ^ 0x6d;
    bRam0000000100e10871 = bRam0000000100e10291 ^ 0xe7;
    bRam0000000100e10872 = bRam0000000100e10292 ^ 0xb6;
    bRam0000000100e10873 = bRam0000000100e10293 ^ 0x15;
    bRam0000000100e10874 = bRam0000000100e10294 ^ 0x6c;
    cRam0000000100e10875 = bRam0000000100e10295 + (bRam0000000100e10295 & 0x51) * -2 + -0x2f;
    cRam0000000100e10876 = bRam0000000100e10296 + (bRam0000000100e10296 & 0x15) * -2 + -0x6b;
    bRam0000000100e10877 = bRam0000000100e10297 ^ 0x9e;
    bRam0000000100e10878 = bRam0000000100e10298 ^ 0x47;
    bRam0000000100e10879 = bRam0000000100e10299 ^ 0x1e;
    bRam0000000100e1087a = bRam0000000100e1029a ^ 0xa5;
    bRam0000000100e1087b = ~((bRam0000000100e1029b | 0xfc) & (~bRam0000000100e1029b | 3));
    bRam0000000100e1087c = bRam0000000100e1029c ^ 0x46;
    cRam0000000100e1087d = bRam0000000100e1029d + (bRam0000000100e1029d & 0x16) * -2 + -0x6a;
    bRam0000000100e1087e = bRam0000000100e1029e ^ 0x3d;
    bRam0000000100e1087f = bRam0000000100e1029f ^ 0x22;
    bRam0000000100e10880 = bRam0000000100e102a0 ^ 0x13;
    cRam0000000100e10881 = bRam0000000100e102a1 + (bRam0000000100e102a1 & 0x1a) * -2 + '\x1a';
    bRam0000000100e10882 = bRam0000000100e102a2 ^ 0xd6;
    bRam0000000100e10883 = bRam0000000100e102a3 ^ 0xcd;
    bRam0000000100e10884 = bRam0000000100e102a4 ^ 0xba;
    bRam0000000100e10885 = bRam0000000100e102a5 ^ 0xfd;
    bRam0000000100e10886 = bRam0000000100e102a6 ^ 0xbe;
    bRam0000000100e10887 = bRam0000000100e102a7 ^ 0xef;
    cRam0000000100e10888 = bRam0000000100e102a8 + (bRam0000000100e102a8 & 0x22) * -2 + -0x5e;
    cRam0000000100e10889 = bRam0000000100e102a9 + (bRam0000000100e102a9 & 0x12) * -2 + '\x12';
    cRam0000000100e1088a = bRam0000000100e102aa + (bRam0000000100e102aa & 9) * -2 + '\t';
    uRam0000000100e1088b =
         CONCAT17((byte)((ulong)uRam0000000100e102ab >> 0x38) ^
                  (byte)((ulong)_UNK_10099c020 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e102ab >> 0x30) ^
                           (byte)((ulong)_UNK_10099c020 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e102ab >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c020 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e102ab >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c020 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e102ab >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c020 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e102ab >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c020 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e102ab >> 8) ^
                                                  (byte)((ulong)_UNK_10099c020 >> 8),
                                                  (byte)uRam0000000100e102ab ^ (byte)_UNK_10099c020)
                                                  ))))));
    uRam0000000100e10893 =
         CONCAT17((byte)((ulong)uRam0000000100e102b3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c028 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e102b3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c028 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e102b3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c028 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e102b3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c028 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e102b3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c028 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e102b3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c028 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e102b3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c028 >> 8),
                                                  (byte)uRam0000000100e102b3 ^ (byte)_UNK_10099c028)
                                                  ))))));
    bRam0000000100e1089b = bRam0000000100e102bb ^ 0x2b;
    cRam0000000100e1089c = bRam0000000100e102bc + (bRam0000000100e102bc & 0x16) * -2 + '\x16';
    bRam0000000100e1089d = bRam0000000100e102bd ^ 0x9d;
    cRam0000000100e1089e = bRam0000000100e102be + (bRam0000000100e102be & 0x4e) * -2 + -0x32;
    bRam0000000100e1089f = bRam0000000100e102bf ^ 0xea;
    bRam0000000100e108a0 = bRam0000000100e102c0 ^ 0xf0;
    bRam0000000100e108a1 = bRam0000000100e102c1 ^ 0xc9;
    bRam0000000100e108a2 = bRam0000000100e102c2 ^ 0x9e;
    bRam0000000100e108a3 = bRam0000000100e102c3 ^ 0x39;
    bRam0000000100e108a4 = bRam0000000100e102c4 ^ 0x25;
    cRam0000000100e108a5 = bRam0000000100e102c5 + (bRam0000000100e102c5 & 0x60) * -2 + '`';
    bRam0000000100e108a6 = bRam0000000100e102c6 ^ 0x8d;
    bRam0000000100e108a7 = bRam0000000100e102c7 ^ 0x11;
    bRam0000000100e108a8 = bRam0000000100e102c8 ^ 0x19;
    bRam0000000100e108a9 = ~((bRam0000000100e102c9 | 0xe0) & (~bRam0000000100e102c9 | 0x1f));
    cRam0000000100e108aa = bRam0000000100e102ca + (bRam0000000100e102ca & 0x6a) * -2 + -0x16;
    bRam0000000100e108ab = bRam0000000100e102cb ^ 0xca;
    bRam0000000100e108ac = bRam0000000100e102cc ^ 0xb8;
    bRam0000000100e108ad = bRam0000000100e102cd ^ 0x19;
    bRam0000000100e108ae = bRam0000000100e102ce ^ 0x3a;
    bRam0000000100e108af = bRam0000000100e102cf ^ 0xa4;
    bRam0000000100e108b0 = bRam0000000100e102d0 ^ 0x9f;
    bRam0000000100e108b1 = ~((bRam0000000100e102d1 | 0xb) & (bRam0000000100e102d1 ^ 0xff | 0xf4));
    bRam0000000100e108b2 = bRam0000000100e102d2 ^ 0x36;
    bRam0000000100e108b3 = bRam0000000100e102d3 ^ 0xda;
    bRam0000000100e108b4 = bRam0000000100e102d4 ^ 0x95;
    bRam0000000100e108b5 = bRam0000000100e102d5 ^ 0x6f;
    bRam0000000100e108b6 = bRam0000000100e102d6 ^ 0xc4;
    bRam0000000100e108b7 = bRam0000000100e102d7 ^ 0x24;
    bRam0000000100e108b8 = bRam0000000100e102d8 ^ 0xc0;
    cRam0000000100e108b9 = bRam0000000100e102d9 + (bRam0000000100e102d9 & 0x14) * -2 + -0x6c;
    bRam0000000100e108ba = bRam0000000100e102da ^ 0x85;
    bRam0000000100e108bb = bRam0000000100e102db ^ 0xd9;
    cRam0000000100e108bc = bRam0000000100e102dc + (bRam0000000100e102dc & 0x40) * '\x02' + -0x40;
    bRam0000000100e108bd = bRam0000000100e102dd ^ 0x19;
    cRam0000000100e108be = bRam0000000100e102de + (bRam0000000100e102de & 0xe7) * -2 + 'g';
    uRam0000000100e108bf =
         CONCAT17((byte)((ulong)uRam0000000100e102df >> 0x38) ^
                  (byte)((ulong)_UNK_10099baf8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e102df >> 0x30) ^
                           (byte)((ulong)_UNK_10099baf8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e102df >> 0x28) ^
                                    (byte)((ulong)_UNK_10099baf8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e102df >> 0x20) ^
                                             (byte)((ulong)_UNK_10099baf8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e102df >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099baf8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e102df >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099baf8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e102df >> 8) ^
                                                  (byte)((ulong)_UNK_10099baf8 >> 8),
                                                  (byte)uRam0000000100e102df ^ (byte)_UNK_10099baf8)
                                                  ))))));
    bRam0000000100e108c7 = bRam0000000100e102e7 ^ 0x13;
    bRam0000000100e108c8 = bRam0000000100e102e8 ^ 0xe9;
    bRam0000000100e108c9 = bRam0000000100e102e9 ^ 0x16;
    bRam0000000100e108ca = bRam0000000100e102ea ^ 9;
    cRam0000000100e108cb = bRam0000000100e102eb + (bRam0000000100e102eb & 0x33) * -2 + -0x4d;
    bRam0000000100e108cc = bRam0000000100e102ec ^ 0xb8;
    bRam0000000100e108cd = bRam0000000100e102ed ^ 0x17;
    bRam0000000100e108ce = bRam0000000100e102ee ^ 0xc6;
    cRam0000000100e108cf = bRam0000000100e102ef + (bRam0000000100e102ef & 0x22) * -2 + '\"';
    bRam0000000100e108d0 = bRam0000000100e102f0 ^ 0xaa;
    cRam0000000100e108d1 = bRam0000000100e102f1 + (bRam0000000100e102f1 & 0x54) * -2 + 'T';
    cRam0000000100e108d2 = bRam0000000100e102f2 + (bRam0000000100e102f2 & 0xe1) * -2 + -0x1f;
    bRam0000000100e108d3 = bRam0000000100e102f3 ^ 0xc4;
    bRam0000000100e108d4 = bRam0000000100e102f4 ^ 0x2d;
    bRam0000000100e108d5 = bRam0000000100e102f5 ^ 0xfc;
    bRam0000000100e108d6 = bRam0000000100e102f6 ^ 0x1b;
    cRam0000000100e108d7 = bRam0000000100e102f7 + (bRam0000000100e102f7 & 0x58) * -2 + -0x28;
    bRam0000000100e108d8 = bRam0000000100e102f8 ^ 0x97;
    cRam0000000100e108d9 = bRam0000000100e102f9 + (bRam0000000100e102f9 & 0x1f) * -2 + '\x1f';
    cRam0000000100e108da = bRam0000000100e102fa + (bRam0000000100e102fa & 0x1d) * -2 + -99;
    uRam0000000100e108db =
         CONCAT17((byte)((ulong)uRam0000000100e102fb >> 0x38) ^
                  (byte)((ulong)_UNK_10099c030 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e102fb >> 0x30) ^
                           (byte)((ulong)_UNK_10099c030 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e102fb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c030 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e102fb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c030 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e102fb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c030 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e102fb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c030 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e102fb >> 8) ^
                                                  (byte)((ulong)_UNK_10099c030 >> 8),
                                                  (byte)uRam0000000100e102fb ^ (byte)_UNK_10099c030)
                                                  ))))));
    uRam0000000100e108e3 =
         CONCAT17((byte)((ulong)uRam0000000100e10303 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c038 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10303 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c038 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10303 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c038 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10303 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c038 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10303 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c038 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10303 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c038 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10303 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c038 >> 8),
                                                  (byte)uRam0000000100e10303 ^ (byte)_UNK_10099c038)
                                                  ))))));
    bRam0000000100e108eb = bRam0000000100e1030b ^ 0xf9;
    cRam0000000100e108ec = bRam0000000100e1030c + (bRam0000000100e1030c & 0x37) * -2 + -0x49;
    cRam0000000100e108ed = bRam0000000100e1030d + (bRam0000000100e1030d & 0x60) * -2 + -0x20;
    bRam0000000100e108ee = bRam0000000100e1030e ^ 0x6a;
    bRam0000000100e108ef = bRam0000000100e1030f ^ 0x12;
    bRam0000000100e108f0 = bRam0000000100e10310 ^ 0x2b;
    cRam0000000100e108f1 = bRam0000000100e10311 + (bRam0000000100e10311 & 0x2b) * -2 + -0x55;
    cRam0000000100e108f2 = bRam0000000100e10312 + (bRam0000000100e10312 & 0x53) * -2 + -0x2d;
    cRam0000000100e108f3 = bRam0000000100e10313 + (bRam0000000100e10313 & 0x76) * -2 + -10;
    bRam0000000100e108f4 = bRam0000000100e10314 ^ 0xfa;
    bRam0000000100e108f5 = bRam0000000100e10315 ^ 0x78;
    bRam0000000100e108f6 = bRam0000000100e10316 ^ 0x3a;
    bRam0000000100e108f7 = bRam0000000100e10317 ^ 0x70;
    cRam0000000100e108f8 = bRam0000000100e10318 + (bRam0000000100e10318 & 0xcc) * -2 + -0x34;
    bRam0000000100e108f9 = bRam0000000100e10319 ^ 0xd6;
    bRam0000000100e108fa = bRam0000000100e1031a ^ 0x3a;
    bRam0000000100e108fb = bRam0000000100e1031b ^ 0x22;
    bRam0000000100e108fc = bRam0000000100e1031c ^ 0x49;
    cRam0000000100e108fd = bRam0000000100e1031d + (bRam0000000100e1031d & 0x16) * -2 + '\x16';
    bRam0000000100e108fe = ~((bRam0000000100e1031e | 0xb4) & (bRam0000000100e1031e ^ 0xff | 0x4b));
    uRam0000000100e108ff =
         CONCAT17((byte)((ulong)uRam0000000100e1031f >> 0x38) ^
                  (byte)((ulong)_UNK_10099c040 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1031f >> 0x30) ^
                           (byte)((ulong)_UNK_10099c040 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1031f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c040 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1031f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c040 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1031f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c040 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1031f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c040 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1031f >> 8) ^
                                                  (byte)((ulong)_UNK_10099c040 >> 8),
                                                  (byte)uRam0000000100e1031f ^ (byte)_UNK_10099c040)
                                                  ))))));
    uRam0000000100e10907 =
         CONCAT17((byte)((ulong)uRam0000000100e10327 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c048 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10327 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c048 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10327 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c048 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10327 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c048 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10327 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c048 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10327 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c048 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10327 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c048 >> 8),
                                                  (byte)uRam0000000100e10327 ^ (byte)_UNK_10099c048)
                                                  ))))));
    bRam0000000100e1090f = bRam0000000100e1032f ^ 0xc4;
    bRam0000000100e10910 = bRam0000000100e10330 ^ 0xca;
    bRam0000000100e10911 = bRam0000000100e10331 ^ 0x48;
    cRam0000000100e10912 = bRam0000000100e10332 + (bRam0000000100e10332 & 0x6d) * -2 + 'm';
    bRam0000000100e10913 = bRam0000000100e10333 ^ 0xee;
    bRam0000000100e10914 = bRam0000000100e10334 ^ 0x4c;
    bRam0000000100e10915 = bRam0000000100e10335 ^ 0xf8;
    bRam0000000100e10916 = bRam0000000100e10336 ^ 0xda;
    bRam0000000100e10917 = bRam0000000100e10337 ^ 0x52;
    cRam0000000100e10918 = bRam0000000100e10338 + (bRam0000000100e10338 & 0x39) * -2 + -0x47;
    uRam0000000100e10919 =
         CONCAT17((byte)((ulong)uRam0000000100e10339 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10339 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10339 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10339 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10339 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10339 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10339 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb00 >> 8),
                                                  (byte)uRam0000000100e10339 ^ (byte)_UNK_10099bb00)
                                                  ))))));
    bRam0000000100e10921 = bRam0000000100e10341 ^ 3;
    bRam0000000100e10922 = bRam0000000100e10342 ^ 0x8a;
    cRam0000000100e10923 = bRam0000000100e10343 + (bRam0000000100e10343 & 0xf9) * -2 + -7;
    bRam0000000100e10924 = bRam0000000100e10344 ^ 0x7f;
    bRam0000000100e10925 = bRam0000000100e10345 ^ 0x33;
    bRam0000000100e10926 = bRam0000000100e10346 ^ 0xaa;
    cRam0000000100e10927 = bRam0000000100e10347 + (bRam0000000100e10347 & 0x66) * -2 + -0x1a;
    bRam0000000100e10928 = bRam0000000100e10348 ^ 0x26;
    bRam0000000100e10929 = bRam0000000100e10349 ^ 0xde;
    bRam0000000100e1092a = bRam0000000100e1034a ^ 0xe0;
    bRam0000000100e1092b = bRam0000000100e1034b ^ 0x7d;
    bRam0000000100e1092c = bRam0000000100e1034c ^ 0x65;
    bRam0000000100e1092d = bRam0000000100e1034d ^ 0x9d;
    cRam0000000100e1092e = bRam0000000100e1034e + (bRam0000000100e1034e & 3) * -2 + -0x7d;
    bRam0000000100e1092f = bRam0000000100e1034f ^ 200;
    bRam0000000100e10930 = bRam0000000100e10350 ^ 0x69;
    bRam0000000100e10931 = bRam0000000100e10351 ^ 0xe8;
    bRam0000000100e10932 = bRam0000000100e10352 ^ 0xd1;
    cRam0000000100e10933 = '\x7f' - cRam0000000100e10353;
    cRam0000000100e10934 = bRam0000000100e10354 + (bRam0000000100e10354 & 0xe7) * -2 + 'g';
    bRam0000000100e10935 = bRam0000000100e10355 ^ 0xeb;
    bRam0000000100e10936 = bRam0000000100e10356 ^ 0xd4;
    bRam0000000100e10937 = bRam0000000100e10357 ^ 0x23;
    bRam0000000100e10938 = bRam0000000100e10358 ^ 0xa3;
    bRam0000000100e10939 = bRam0000000100e10359 ^ 0x93;
    bRam0000000100e1093a = bRam0000000100e1035a ^ 0xb0;
    bRam0000000100e1093b = bRam0000000100e1035b ^ 0x14;
    cRam0000000100e1093c = bRam0000000100e1035c + (bRam0000000100e1035c & 0x33) * -2 + '3';
    cRam0000000100e1093d = bRam0000000100e1035d + (bRam0000000100e1035d & 0xf) * -2 + -0x71;
    bRam0000000100e1093e = bRam0000000100e1035e ^ 0x6a;
    bRam0000000100e1093f = bRam0000000100e1035f ^ 0x2b;
    bRam0000000100e10940 = bRam0000000100e10360 ^ 0xa2;
    bRam0000000100e10941 = bRam0000000100e10361 ^ 0x22;
    bRam0000000100e10942 = bRam0000000100e10362 ^ 0xef;
    bRam0000000100e10943 = bRam0000000100e10363 ^ 0x1d;
    bRam0000000100e10944 = ~((bRam0000000100e10364 | 0xad) & (bRam0000000100e10364 ^ 0xff | 0x52));
    bRam0000000100e10945 = bRam0000000100e10365 ^ 0x23;
    bRam0000000100e10946 = bRam0000000100e10366 ^ 1;
    bRam0000000100e10947 = bRam0000000100e10367 ^ 0xcb;
    bRam0000000100e10948 = bRam0000000100e10368 ^ 0x70;
    cRam0000000100e10949 = bRam0000000100e10369 + (bRam0000000100e10369 & 10) * -2 + -0x76;
    uRam0000000100e1094a =
         CONCAT17((byte)((ulong)uRam0000000100e1036a >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1036a >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1036a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1036a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1036a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1036a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1036a >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb08 >> 8),
                                                  (byte)uRam0000000100e1036a ^ (byte)_UNK_10099bb08)
                                                  ))))));
    bRam0000000100e10952 = bRam0000000100e10372 ^ 0xe1;
    bRam0000000100e10953 = bRam0000000100e10373 ^ 6;
    bRam0000000100e10954 = bRam0000000100e10374 ^ 0x97;
    bRam0000000100e10955 = bRam0000000100e10375 ^ 0x49;
    bRam0000000100e10956 = bRam0000000100e10376 ^ 0x4d;
    bRam0000000100e10957 = ~((bRam0000000100e10377 | 0x5f) & (bRam0000000100e10377 ^ 0xff | 0xa0));
    bRam0000000100e10958 = bRam0000000100e10378 ^ 0x8a;
    bRam0000000100e10959 = bRam0000000100e10379 ^ 0x6a;
    bRam0000000100e1095a = bRam0000000100e1037a ^ 0xd9;
    cRam0000000100e1095b = bRam0000000100e1037b + (bRam0000000100e1037b & 0xc) * -2 + -0x74;
    bRam0000000100e1095c = bRam0000000100e1037c ^ 0x7b;
    bRam0000000100e1095d = bRam0000000100e1037d ^ 0x9f;
    bRam0000000100e1095e = bRam0000000100e1037e ^ 0x65;
    bRam0000000100e1095f = bRam0000000100e1037f ^ 0xe2;
    bRam0000000100e10960 = bRam0000000100e10380 ^ 0x30;
    cRam0000000100e10961 = bRam0000000100e10381 + (bRam0000000100e10381 & 0x53) * -2 + -0x2d;
    bRam0000000100e10962 = bRam0000000100e10382 ^ 0x17;
    bRam0000000100e10963 = bRam0000000100e10383 ^ 0xac;
    bRam0000000100e10964 = bRam0000000100e10384 ^ 2;
    bRam0000000100e10965 = bRam0000000100e10385 ^ 0xdf;
    cRam0000000100e10966 = bRam0000000100e10386 + (bRam0000000100e10386 & 0x4d) * -2 + 'M';
    bRam0000000100e10967 = bRam0000000100e10387 ^ 0x11;
    bRam0000000100e10968 = bRam0000000100e10388 ^ 0xa8;
    bRam0000000100e10969 = bRam0000000100e10389 ^ 0xd6;
    cRam0000000100e1096a = bRam0000000100e1038a + (bRam0000000100e1038a & 0x3e) * -2 + '>';
    uRam0000000100e1096b =
         CONCAT17((byte)((ulong)uRam0000000100e1038b >> 0x38) ^
                  (byte)((ulong)_UNK_10099c050 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1038b >> 0x30) ^
                           (byte)((ulong)_UNK_10099c050 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1038b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c050 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1038b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c050 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1038b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c050 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1038b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c050 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1038b >> 8) ^
                                                  (byte)((ulong)_UNK_10099c050 >> 8),
                                                  (byte)uRam0000000100e1038b ^ (byte)_UNK_10099c050)
                                                  ))))));
    uRam0000000100e10973 =
         CONCAT17((byte)((ulong)uRam0000000100e10393 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c058 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10393 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c058 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10393 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c058 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10393 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c058 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10393 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c058 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10393 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c058 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10393 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c058 >> 8),
                                                  (byte)uRam0000000100e10393 ^ (byte)_UNK_10099c058)
                                                  ))))));
    uRam0000000100e1097b =
         CONCAT17((byte)((ulong)uRam0000000100e1039b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1039b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1039b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1039b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1039b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1039b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1039b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb10 >> 8),
                                                  (byte)uRam0000000100e1039b ^ (byte)_UNK_10099bb10)
                                                  ))))));
    bRam0000000100e10983 = bRam0000000100e103a3 ^ 0x37;
    bRam0000000100e10984 = bRam0000000100e103a4 ^ 0xba;
    cRam0000000100e10985 = bRam0000000100e103a5 + (bRam0000000100e103a5 & 0x75) * -2 + -0xb;
    bRam0000000100e1098e = bRam0000000100e103ae ^ 0x6d;
    bRam0000000100e1098f = bRam0000000100e103af ^ 0xf7;
    bRam0000000100e10990 = bRam0000000100e103b0 ^ 0xd2;
    bRam0000000100e10991 = bRam0000000100e103b1 ^ 0x47;
    bRam0000000100e10992 = bRam0000000100e103b2 ^ 0x9e;
    bRam0000000100e10993 = bRam0000000100e103b3 ^ 0x5a;
    bRam0000000100e10994 = bRam0000000100e103b4 ^ 0xd;
    cRam0000000100e10995 = bRam0000000100e103b5 + (bRam0000000100e103b5 & 0x51) * -2 + 'Q';
    bRam0000000100e10996 = bRam0000000100e103b6 ^ 0xfe;
    bRam0000000100e10997 = bRam0000000100e103b7 ^ 0x5b;
    cRam0000000100e10998 = bRam0000000100e103b8 + (bRam0000000100e103b8 & 0x55) * -2 + 'U';
    bRam0000000100e10999 = bRam0000000100e103b9 ^ 0xaf;
    bRam0000000100e1099a = bRam0000000100e103ba ^ 0x2c;
    cRam0000000100e1099b = bRam0000000100e103bb + (bRam0000000100e103bb & 3) * -2 + '\x03';
    cRam0000000100e1099c = bRam0000000100e103bc + (bRam0000000100e103bc & 8) * -2 + '\b';
    bRam0000000100e1099d = bRam0000000100e103bd ^ 0xbd;
    bRam0000000100e1099e = bRam0000000100e103be ^ 0x73;
    bRam0000000100e1099f = bRam0000000100e103bf ^ 0x85;
    bRam0000000100e109a0 = bRam0000000100e103c0 ^ 0x4b;
    bRam0000000100e109a1 = bRam0000000100e103c1 ^ 0xc5;
    cRam0000000100e109a2 = bRam0000000100e103c2 + (bRam0000000100e103c2 & 0x25) * -2 + '%';
    bRam0000000100e109a3 = bRam0000000100e103c3 ^ 5;
    bRam0000000100e109a4 = bRam0000000100e103c4 ^ 0x3b;
    cRam0000000100e109a5 = bRam0000000100e103c5 + (bRam0000000100e103c5 & 0x65) * -2 + 'e';
    bRam0000000100e109ae = bRam0000000100e103ce ^ 0x67;
    cRam0000000100e109af = bRam0000000100e103cf + (bRam0000000100e103cf & 0xaa) * -2 + -0x56;
    bRam0000000100e109b0 = bRam0000000100e103d0 ^ 0x82;
    bRam0000000100e109b1 = bRam0000000100e103d1 ^ 0x32;
    bRam0000000100e109b2 = bRam0000000100e103d2 ^ 0xe8;
    cRam0000000100e109b3 = bRam0000000100e103d3 + (bRam0000000100e103d3 & 0xcc) * -2 + -0x34;
    bRam0000000100e109b4 = bRam0000000100e103d4 ^ 0xfd;
    bRam0000000100e109b5 = bRam0000000100e103d5 ^ 0xa9;
    cRam0000000100e109b6 = bRam0000000100e103d6 + (bRam0000000100e103d6 & 0x4d) * -2 + -0x33;
    bRam0000000100e109b7 = bRam0000000100e103d7 ^ 0xe3;
    bRam0000000100e109b8 = bRam0000000100e103d8 ^ 0x3d;
    bRam0000000100e109b9 = bRam0000000100e103d9 ^ 0x2d;
    cRam0000000100e109ba = bRam0000000100e103da + (bRam0000000100e103da & 0x56) * -2 + 'V';
    cRam0000000100e109bb = bRam0000000100e103db + (bRam0000000100e103db & 6) * -2 + '\x06';
    uRam0000000100e109bc =
         CONCAT17((byte)((ulong)uRam0000000100e103dc >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e103dc >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e103dc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e103dc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e103dc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e103dc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e103dc >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb28 >> 8),
                                                  (byte)uRam0000000100e103dc ^ (byte)_UNK_10099bb28)
                                                  ))))));
    bRam0000000100e109c4 = bRam0000000100e103e4 ^ 0x1d;
    bRam0000000100e109c5 = bRam0000000100e103e5 ^ 0x1a;
    bRam0000000100e109c6 = bRam0000000100e103e6 ^ 0xd0;
    cRam0000000100e109c7 = bRam0000000100e103e7 + (bRam0000000100e103e7 & 0x45) * -2 + -0x3b;
    bRam0000000100e109c8 = bRam0000000100e103e8 ^ 7;
    bRam0000000100e109c9 = bRam0000000100e103e9 ^ 0x88;
    bRam0000000100e109ca = bRam0000000100e103ea ^ 0x6e;
    bRam0000000100e109cb = bRam0000000100e103eb ^ 0xdc;
    bRam0000000100e109cc = bRam0000000100e103ec ^ 0xf5;
    cRam0000000100e109cd = bRam0000000100e103ed + (bRam0000000100e103ed & 0xfd) * -2 + '}';
    bRam0000000100e109ce = bRam0000000100e103ee ^ 0x9f;
    bRam0000000100e109cf = bRam0000000100e103ef ^ 0xf7;
    bRam0000000100e109d0 = bRam0000000100e103f0 ^ 0x28;
    cRam0000000100e109d1 = bRam0000000100e103f1 + (bRam0000000100e103f1 & 0x28) * -2 + '(';
    cRam0000000100e109d2 = bRam0000000100e103f2 + (bRam0000000100e103f2 & 4) * -2 + '\x04';
    bRam0000000100e109d3 = bRam0000000100e103f3 ^ 0xe0;
    bRam0000000100e109d4 = bRam0000000100e103f4 ^ 0x54;
    bRam0000000100e109d5 = bRam0000000100e103f5 ^ 0x6d;
    cRam0000000100e109d6 = bRam0000000100e103f6 + (bRam0000000100e103f6 & 0x38) * -2 + -0x48;
    uRam0000000100e109d7 =
         CONCAT17((byte)((ulong)uRam0000000100e103f7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c060 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e103f7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c060 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e103f7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c060 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e103f7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c060 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e103f7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c060 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e103f7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c060 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e103f7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c060 >> 8),
                                                  (byte)uRam0000000100e103f7 ^ (byte)_UNK_10099c060)
                                                  ))))));
    uRam0000000100e109df =
         CONCAT17((byte)((ulong)uRam0000000100e103ff >> 0x38) ^
                  (byte)((ulong)_UNK_10099c068 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e103ff >> 0x30) ^
                           (byte)((ulong)_UNK_10099c068 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e103ff >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c068 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e103ff >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c068 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e103ff >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c068 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e103ff >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c068 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e103ff >> 8) ^
                                                  (byte)((ulong)_UNK_10099c068 >> 8),
                                                  (byte)uRam0000000100e103ff ^ (byte)_UNK_10099c068)
                                                  ))))));
    bRam0000000100e109e7 = bRam0000000100e10407 ^ 0x15;
    bRam0000000100e109e8 = bRam0000000100e10408 ^ 0x4a;
    bRam0000000100e109e9 = bRam0000000100e10409 ^ 0xf4;
    bRam0000000100e109ea = bRam0000000100e1040a ^ 0xcb;
    cRam0000000100e109eb = bRam0000000100e1040b + (bRam0000000100e1040b & 0x49) * -2 + -0x37;
    bRam0000000100e109ec = bRam0000000100e1040c ^ 0xe2;
    bRam0000000100e109ed = bRam0000000100e1040d ^ 0x8e;
    bRam0000000100e109ee = bRam0000000100e1040e ^ 0xad;
    cRam0000000100e109ef = bRam0000000100e1040f + (bRam0000000100e1040f & 0x36) * -2 + -0x4a;
    uRam0000000100e109f0 =
         CONCAT17((byte)((ulong)uRam0000000100e10410 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10410 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10410 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10410 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10410 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10410 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10410 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb30 >> 8),
                                                  (byte)uRam0000000100e10410 ^ (byte)_UNK_10099bb30)
                                                  ))))));
    bRam0000000100e109f8 = bRam0000000100e10418 ^ 0x2d;
    bRam0000000100e109f9 = bRam0000000100e10419 ^ 0x70;
    bRam0000000100e109fa = bRam0000000100e1041a ^ 0x70;
    bRam0000000100e109fb = bRam0000000100e1041b ^ 0x83;
    bRam0000000100e109fc = bRam0000000100e1041c ^ 0xb4;
    cRam0000000100e109fd = bRam0000000100e1041d + (bRam0000000100e1041d & 0xfd) * -2 + '}';
    bRam0000000100e10a06 = bRam0000000100e10426 ^ 0x59;
    bRam0000000100e10a07 = bRam0000000100e10427 ^ 0x75;
    bRam0000000100e10a08 = bRam0000000100e10428 ^ 0x99;
    bRam0000000100e10a09 = bRam0000000100e10429 ^ 0xd2;
    cRam0000000100e10a0a = bRam0000000100e1042a + (bRam0000000100e1042a & 0xe7) * -2 + 'g';
    bRam0000000100e10a0b = bRam0000000100e1042b ^ 0x45;
    bRam0000000100e10a0c = bRam0000000100e1042c ^ 0xf2;
    bRam0000000100e10a0d = bRam0000000100e1042d ^ 0x2c;
    cRam0000000100e10a0e = bRam0000000100e1042e + (bRam0000000100e1042e & 0x33) * -2 + '3';
    bRam0000000100e10a0f = bRam0000000100e1042f ^ 0x8e;
    bRam0000000100e10a10 = bRam0000000100e10430 ^ 0x3f;
    bRam0000000100e10a11 = bRam0000000100e10431 ^ 0x3e;
    bRam0000000100e10a12 = bRam0000000100e10432 ^ 0x32;
    bRam0000000100e10a13 = bRam0000000100e10433 ^ 0xc4;
    bRam0000000100e10a14 = bRam0000000100e10434 ^ 0x54;
    bRam0000000100e10a15 = bRam0000000100e10435 ^ 8;
    cRam0000000100e10a16 = bRam0000000100e10436 + (bRam0000000100e10436 & 0x16) * -2 + -0x6a;
    bRam0000000100e10a17 = bRam0000000100e10437 ^ 0xac;
    bRam0000000100e10a18 = bRam0000000100e10438 ^ 0xc1;
    cRam0000000100e10a19 = bRam0000000100e10439 + (bRam0000000100e10439 & 0x3e) * -2 + '>';
    bRam0000000100e10a1a = bRam0000000100e1043a ^ 0x92;
    cRam0000000100e10a1b = bRam0000000100e1043b + (bRam0000000100e1043b & 0x50) * -2 + 'P';
    bRam0000000100e10a1c = bRam0000000100e1043c ^ 0xc0;
    bRam0000000100e10a1d = bRam0000000100e1043d ^ 0x6d;
    bRam0000000100e10a1e = bRam0000000100e1043e ^ 0x40;
    bRam0000000100e10a1f = bRam0000000100e1043f ^ 0x61;
    uRam0000000100e10866 =
         CONCAT17((byte)((ulong)uRam0000000100e10286 >> 0x38) ^
                  (byte)((ulong)_UNK_10099baf0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10286 >> 0x30) ^
                           (byte)((ulong)_UNK_10099baf0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10286 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099baf0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10286 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099baf0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10286 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099baf0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10286 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099baf0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10286 >> 8) ^
                                                  (byte)((ulong)_UNK_10099baf0 >> 8),
                                                  (byte)uRam0000000100e10286 ^ (byte)_UNK_10099baf0)
                                                  ))))));
    cRam0000000100e10a20 = bRam0000000100e10440 + (bRam0000000100e10440 & 0x50) * -2 + 'P';
    uRam0000000100e10a21 =
         CONCAT17((byte)((ulong)uRam0000000100e10441 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb40 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10441 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb40 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10441 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb40 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10441 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb40 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10441 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb40 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10441 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb40 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10441 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb40 >> 8),
                                                  (byte)uRam0000000100e10441 ^ (byte)_UNK_10099bb40)
                                                  ))))));
    bRam0000000100e10a29 = bRam0000000100e10449 ^ 0x82;
    bRam0000000100e10a2a = bRam0000000100e1044a ^ 0x3e;
    bRam0000000100e10a2b = bRam0000000100e1044b ^ 0xf9;
    cRam0000000100e10a2c = bRam0000000100e1044c + (bRam0000000100e1044c & 0x1b) * -2 + '\x1b';
    bRam0000000100e10a2d = bRam0000000100e1044d ^ 0x95;
    bRam0000000100e10a2e = bRam0000000100e1044e ^ 0xaf;
    bRam0000000100e10a2f = bRam0000000100e1044f ^ 0xab;
    bRam0000000100e10a30 = bRam0000000100e10450 ^ 10;
    cRam0000000100e10a31 = bRam0000000100e10451 + (bRam0000000100e10451 & 0x68) * -2 + 'h';
    bRam0000000100e10a32 = bRam0000000100e10452 ^ 0x60;
    bRam0000000100e10a33 = bRam0000000100e10453 ^ 0xf6;
    bRam0000000100e10a34 = bRam0000000100e10454 ^ 2;
    cRam0000000100e10a35 = bRam0000000100e10455 + (bRam0000000100e10455 & 0xe) * -2 + '\x0e';
    cRam0000000100e10a36 = bRam0000000100e10456 + (bRam0000000100e10456 & 1) * -2 + -0x7f;
    uRam0000000100e10a37 =
         CONCAT17((byte)((ulong)uRam0000000100e10457 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10457 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10457 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10457 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10457 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10457 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10457 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb48 >> 8),
                                                  (byte)uRam0000000100e10457 ^ (byte)_UNK_10099bb48)
                                                  ))))));
    cRam0000000100e10a3f = bRam0000000100e1045f + (bRam0000000100e1045f & 0x54) * -2 + -0x2c;
    bRam0000000100e10a40 = bRam0000000100e10460 ^ 0x97;
    bRam0000000100e10a41 = bRam0000000100e10461 ^ 0xe1;
    bRam0000000100e10a42 = bRam0000000100e10462 ^ 0x78;
    bRam0000000100e10a43 = bRam0000000100e10463 ^ 0xaf;
    cRam0000000100e10a44 = bRam0000000100e10464 + (bRam0000000100e10464 & 0x28) * -2 + '(';
    bRam0000000100e10a45 = bRam0000000100e10465 ^ 0x17;
    cRam0000000100e11070 = bRam0000000100e10a50 + (bRam0000000100e10a50 & 0x75) * -2 + -0xb;
    cRam0000000100e11071 = bRam0000000100e10a51 + (bRam0000000100e10a51 & 0x30) * -2 + -0x50;
    bRam0000000100e11072 = bRam0000000100e10a52 ^ 0x48;
    bRam0000000100e11073 = bRam0000000100e10a53 ^ 0x3a;
    bRam0000000100e11074 = bRam0000000100e10a54 ^ 0x4f;
    cRam0000000100e11075 = bRam0000000100e10a55 + (bRam0000000100e10a55 & 0x20) * -2 + ' ';
    bRam0000000100e11076 = bRam0000000100e10a56 ^ 0xda;
    bRam0000000100e11077 = bRam0000000100e10a57 ^ 0xa7;
    cRam0000000100e11078 = bRam0000000100e10a58 + (bRam0000000100e10a58 & 0x4d) * -2 + -0x33;
    bRam0000000100e11079 = bRam0000000100e10a59 ^ 0x8e;
    bRam0000000100e1107a = bRam0000000100e10a5a ^ 0x99;
    cRam0000000100e1107b = bRam0000000100e10a5b + (bRam0000000100e10a5b & 0xfb) * -2 + '{';
    cRam0000000100e1107c = bRam0000000100e10a5c + (bRam0000000100e10a5c & 0x14) * -2 + -0x6c;
    bRam0000000100e1107d = bRam0000000100e10a5d ^ 0x68;
    cRam0000000100e1107e = bRam0000000100e10a5e + (bRam0000000100e10a5e & 0xcc) * -2 + -0x34;
    bRam0000000100e1107f = bRam0000000100e10a5f ^ 0x4d;
    cRam0000000100e11080 = bRam0000000100e10a60 + (bRam0000000100e10a60 & 0x6a) * -2 + -0x16;
    bRam0000000100e11081 = bRam0000000100e10a61 ^ 0x5d;
    bRam0000000100e11082 = bRam0000000100e10a62 ^ 0x53;
    cRam0000000100e11083 = bRam0000000100e10a63 + (bRam0000000100e10a63 & 0x4b) * -2 + 'K';
    bRam0000000100e1108c = bRam0000000100e10a6c ^ 0x66;
    bRam0000000100e1108d = bRam0000000100e10a6d ^ 0xc1;
    bRam0000000100e1108e = bRam0000000100e10a6e ^ 0x5e;
    bRam0000000100e1108f = bRam0000000100e10a6f ^ 0x94;
    bRam0000000100e11090 = bRam0000000100e10a70 ^ 0xa9;
    bRam0000000100e11091 = bRam0000000100e10a71 ^ 0x49;
    bRam0000000100e11092 = bRam0000000100e10a72 ^ 0x78;
    cRam0000000100e11093 = bRam0000000100e10a73 + (bRam0000000100e10a73 & 0x53) * -2 + -0x2d;
    bRam0000000100e11094 = bRam0000000100e10a74 ^ 0x86;
    cRam0000000100e11095 = bRam0000000100e10a75 + (bRam0000000100e10a75 & 0x78) * -2 + 'x';
    bRam0000000100e1109e = bRam0000000100e10a7e ^ 0xfd;
    bRam0000000100e1109f = bRam0000000100e10a7f ^ 0x7b;
    bRam0000000100e110a0 = bRam0000000100e10a80 ^ 0x1a;
    bRam0000000100e110a1 = bRam0000000100e10a81 ^ 0x19;
    bRam0000000100e110a2 = bRam0000000100e10a82 ^ 0xf9;
    bRam0000000100e110a3 = bRam0000000100e10a83 ^ 0x36;
    bRam0000000100e110a4 = bRam0000000100e10a84 ^ 0x28;
    bRam0000000100e110a5 = ~((bRam0000000100e10a85 | 0x6e) & (bRam0000000100e10a85 ^ 0xff | 0x91));
    bRam0000000100e110a6 = bRam0000000100e10a86 ^ 0xa9;
    bRam0000000100e110a7 = bRam0000000100e10a87 ^ 0x98;
    cRam0000000100e110a8 = bRam0000000100e10a88 + (bRam0000000100e10a88 & 0xaa) * -2 + -0x56;
    bRam0000000100e110a9 = bRam0000000100e10a89 ^ 0x9b;
    cRam0000000100e110aa = bRam0000000100e10a8a + (bRam0000000100e10a8a & 199) * -2 + 'G';
    bRam0000000100e110ab = bRam0000000100e10a8b ^ 0x19;
    bRam0000000100e110ac = bRam0000000100e10a8c ^ 0x92;
    bRam0000000100e110ad = ~bRam0000000100e10a8d;
    bRam0000000100e110ae = bRam0000000100e10a8e ^ 0x27;
    bRam0000000100e110af = bRam0000000100e10a8f ^ 0x9c;
    bRam0000000100e110b0 = bRam0000000100e10a90 ^ 0xc5;
    bRam0000000100e110b1 = bRam0000000100e10a91 ^ 0x56;
    cRam0000000100e110b2 = bRam0000000100e10a92 + (bRam0000000100e10a92 & 0xe7) * -2 + -0x19;
    bRam0000000100e110b3 = bRam0000000100e10a93 ^ 0xd6;
    bRam0000000100e110b4 = bRam0000000100e10a94 ^ 0x3b;
    cRam0000000100e110b5 = bRam0000000100e10a95 + (bRam0000000100e10a95 & 0x99) * -2 + -0x67;
    bRam0000000100e110b6 = bRam0000000100e10a96 ^ 0x96;
    cRam0000000100e110b7 = bRam0000000100e10a97 + (bRam0000000100e10a97 & 0xbb) * -2 + -0x45;
    bRam0000000100e110b8 = bRam0000000100e10a98 ^ 0xbf;
    bRam0000000100e110b9 = bRam0000000100e10a99 ^ 0x4c;
    bRam0000000100e110ba = bRam0000000100e10a9a ^ 0xeb;
    cRam0000000100e110bb = bRam0000000100e10a9b + (bRam0000000100e10a9b & 0x1b) * -2 + '\x1b';
    bRam0000000100e110bc = bRam0000000100e10a9c ^ 0xca;
    bRam0000000100e110bd = bRam0000000100e10a9d ^ 0x70;
    bRam0000000100e110be = bRam0000000100e10a9e ^ 0x3f;
    bRam0000000100e110bf = bRam0000000100e10a9f ^ 0x10;
    bRam0000000100e110c0 = bRam0000000100e10aa0 ^ 0x3a;
    bRam0000000100e110c1 = bRam0000000100e10aa1 ^ 0x16;
    bRam0000000100e110c2 = ~((bRam0000000100e10aa2 | 0x7c) & (~bRam0000000100e10aa2 | 0x83));
    bRam0000000100e110c3 = bRam0000000100e10aa3 ^ 0xb9;
    bRam0000000100e110c4 = bRam0000000100e10aa4 ^ 0xa5;
    bRam0000000100e110c5 = ~((bRam0000000100e10aa5 | 0x49) & (bRam0000000100e10aa5 ^ 0xff | 0xb6));
    cRam0000000100e110c6 = bRam0000000100e10aa6 + (bRam0000000100e10aa6 & 5) * -2 + '\x05';
    bRam0000000100e110c7 = bRam0000000100e10aa7 ^ 0xf5;
    bRam0000000100e110c8 = bRam0000000100e10aa8 ^ 99;
    bRam0000000100e110c9 = bRam0000000100e10aa9 ^ 0xa0;
    bRam0000000100e110ca = bRam0000000100e10aaa ^ 0x95;
    bRam0000000100e110cb = bRam0000000100e10aab ^ 0xd1;
    bRam0000000100e110cc = bRam0000000100e10aac ^ 0xf6;
    bRam0000000100e110cd = bRam0000000100e10aad ^ 0x84;
    cRam0000000100e110ce = bRam0000000100e10aae + (bRam0000000100e10aae & 0x5e) * -2 + -0x22;
    cRam0000000100e110cf = bRam0000000100e10aaf + (bRam0000000100e10aaf & 0x70) * -2 + -0x10;
    bRam0000000100e110d0 = bRam0000000100e10ab0 ^ 0xaa;
    bRam0000000100e110d1 = bRam0000000100e10ab1 ^ 0x1e;
    bRam0000000100e110d2 = bRam0000000100e10ab2 ^ 0xd0;
    bRam0000000100e110d3 = bRam0000000100e10ab3 ^ 0x74;
    bRam0000000100e110d4 = bRam0000000100e10ab4 ^ 200;
    cRam0000000100e110d5 = bRam0000000100e10ab5 + (bRam0000000100e10ab5 & 0x1d) * -2 + '\x1d';
    bRam0000000100e110d6 = bRam0000000100e10ab6 ^ 0x51;
    bRam0000000100e110d7 = bRam0000000100e10ab7 ^ 0x93;
    cRam0000000100e110d8 = bRam0000000100e10ab8 + (bRam0000000100e10ab8 & 0x20) * -2 + -0x60;
    cRam0000000100e110d9 = bRam0000000100e10ab9 + (bRam0000000100e10ab9 & 0x99) * -2 + -0x67;
    bRam0000000100e110da = bRam0000000100e10aba ^ 0x8b;
    bRam0000000100e110db = bRam0000000100e10abb ^ 0xa2;
    cRam0000000100e110dc = bRam0000000100e10abc + (bRam0000000100e10abc & 0x50) * -2 + 'P';
    bRam0000000100e110e5 = bRam0000000100e10ac5 ^ 0x38;
    bRam0000000100e110e6 = bRam0000000100e10ac6 ^ 0x31;
    bRam0000000100e110e7 = bRam0000000100e10ac7 ^ 0x56;
    bRam0000000100e110e8 = bRam0000000100e10ac8 ^ 0x8c;
    bRam0000000100e110e9 = bRam0000000100e10ac9 ^ 0x4c;
    bRam0000000100e110ea = ~((bRam0000000100e10aca | 0xcc) & (~bRam0000000100e10aca | 0x33));
    bRam0000000100e110eb = bRam0000000100e10acb ^ 0x77;
    bRam0000000100e110ec = bRam0000000100e10acc ^ 0x7b;
    bRam0000000100e110ed = bRam0000000100e10acd ^ 0x31;
    cRam0000000100e110ee = bRam0000000100e10ace + (bRam0000000100e10ace & 0x1f) * -2 + '\x1f';
    bRam0000000100e110ef = bRam0000000100e10acf ^ 0xc0;
    cRam0000000100e110f0 = bRam0000000100e10ad0 + (bRam0000000100e10ad0 & 8) * -2 + '\b';
    bRam0000000100e110f1 = bRam0000000100e10ad1 ^ 0x11;
    bRam0000000100e110f2 = bRam0000000100e10ad2 ^ 0x6f;
    bRam0000000100e110f3 = bRam0000000100e10ad3 ^ 0x7a;
    bRam0000000100e110f4 = bRam0000000100e10ad4 ^ 0x51;
    bRam0000000100e110f5 = bRam0000000100e10ad5 ^ 0xd6;
    bRam0000000100e110f6 = bRam0000000100e10ad6 ^ 0xed;
    bRam0000000100e110f7 = bRam0000000100e10ad7 ^ 0xb7;
    cRam0000000100e110f8 = bRam0000000100e10ad8 + (bRam0000000100e10ad8 & 0x52) * -2 + 'R';
    bRam0000000100e110f9 = bRam0000000100e10ad9 ^ 0x9c;
    bRam0000000100e110fa = bRam0000000100e10ada ^ 0x5a;
    bRam0000000100e110fb = bRam0000000100e10adb ^ 0x41;
    bRam0000000100e110fc = bRam0000000100e10adc ^ 0x4b;
    bRam0000000100e110fd = bRam0000000100e10add ^ 0xfa;
    uRam0000000100e11096 =
         CONCAT17((byte)((ulong)uRam0000000100e10a76 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10a76 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10a76 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10a76 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10a76 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10a76 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10a76 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb58 >> 8),
                                                  (byte)uRam0000000100e10a76 ^ (byte)_UNK_10099bb58)
                                                  ))))));
    bRam0000000100e110fe = bRam0000000100e10ade ^ 0x90;
    bRam0000000100e110ff = bRam0000000100e10adf ^ 0x97;
    cRam0000000100e11100 = bRam0000000100e10ae0 + (bRam0000000100e10ae0 & 0xb) * -2 + '\v';
    cRam0000000100e11101 = bRam0000000100e10ae1 + (bRam0000000100e10ae1 & 0x29) * -2 + ')';
    bRam0000000100e11102 = bRam0000000100e10ae2 ^ 0x8d;
    bRam0000000100e11103 = bRam0000000100e10ae3 ^ 0xc1;
    bRam0000000100e11104 = bRam0000000100e10ae4 ^ 0x89;
    bRam0000000100e11105 = bRam0000000100e10ae5 ^ 0x31;
    bRam0000000100e11106 = bRam0000000100e10ae6 ^ 0x67;
    bRam0000000100e11107 = bRam0000000100e10ae7 ^ 0x66;
    bRam0000000100e11108 = ~((bRam0000000100e10ae8 | 0x76) & (bRam0000000100e10ae8 ^ 0xff | 0x89));
    uRam0000000100e11084 =
         CONCAT17((byte)((ulong)uRam0000000100e10a64 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb50 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10a64 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb50 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10a64 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb50 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10a64 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb50 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10a64 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10a64 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb50 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10a64 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb50 >> 8),
                                                  (byte)uRam0000000100e10a64 ^ (byte)_UNK_10099bb50)
                                                  ))))));
    bRam0000000100e11109 = bRam0000000100e10ae9 ^ 0xea;
    bRam0000000100e1110a = bRam0000000100e10aea ^ 0xa2;
    bRam0000000100e1110b = bRam0000000100e10aeb ^ 0x78;
    bRam0000000100e1110c = bRam0000000100e10aec ^ 0xb6;
    bRam0000000100e1110d = bRam0000000100e10aed ^ 0xcf;
    bRam0000000100e1110e = bRam0000000100e10aee ^ 0xba;
    cRam0000000100e1110f = bRam0000000100e10aef + (bRam0000000100e10aef & 0xf) * -2 + -0x71;
    bRam0000000100e11110 = bRam0000000100e10af0 ^ 0x39;
    bRam0000000100e11111 = bRam0000000100e10af1 ^ 0x68;
    cRam0000000100e11112 = bRam0000000100e10af2 + (bRam0000000100e10af2 & 0x5b) * -2 + -0x25;
    cRam0000000100e11113 = bRam0000000100e10af3 + (bRam0000000100e10af3 & 0x55) * -2 + -0x2b;
    bRam0000000100e11114 = bRam0000000100e10af4 ^ 0x1a;
    bRam0000000100e11115 = bRam0000000100e10af5 ^ 0x6c;
    cRam0000000100e11116 = bRam0000000100e10af6 + (bRam0000000100e10af6 & 0xe) * -2 + -0x72;
    bRam0000000100e11117 = bRam0000000100e10af7 ^ 0x46;
    bRam0000000100e11118 = bRam0000000100e10af8 ^ 0xef;
    bRam0000000100e11119 = bRam0000000100e10af9 ^ 0x6f;
    bRam0000000100e1111a = bRam0000000100e10afa ^ 0x27;
    bRam0000000100e1111b = bRam0000000100e10afb ^ 0x42;
    cRam0000000100e1111c = bRam0000000100e10afc + (bRam0000000100e10afc & 4) * -2 + '\x04';
    bRam0000000100e1111d = bRam0000000100e10afd ^ 0x50;
    cRam0000000100e1111e = bRam0000000100e10afe + (bRam0000000100e10afe & 0x1b) * -2 + '\x1b';
    bRam0000000100e1111f = bRam0000000100e10aff ^ 0x5f;
    bRam0000000100e11120 = bRam0000000100e10b00 ^ 0xf6;
    cRam0000000100e11121 = bRam0000000100e10b01 + (bRam0000000100e10b01 & 0x17) * -2 + '\x17';
    bRam0000000100e11122 = bRam0000000100e10b02 ^ 0x3c;
    bRam0000000100e11123 = bRam0000000100e10b03 ^ 0xc9;
    bRam0000000100e11124 = bRam0000000100e10b04 ^ 0x92;
    bRam0000000100e11125 = bRam0000000100e10b05 ^ 6;
    cRam0000000100e11126 = bRam0000000100e10b06 + (bRam0000000100e10b06 & 0x32) * -2 + -0x4e;
    bRam0000000100e11127 = bRam0000000100e10b07 ^ 0xc9;
    bRam0000000100e11128 = bRam0000000100e10b08 ^ 0xf2;
    bRam0000000100e11129 = bRam0000000100e10b09 ^ 0xad;
    bRam0000000100e1112a = bRam0000000100e10b0a ^ 0xd;
    bRam0000000100e1112b = bRam0000000100e10b0b ^ 0xdf;
    bRam0000000100e1112c = bRam0000000100e10b0c ^ 0xce;
    cRam0000000100e1112d = bRam0000000100e10b0d + (bRam0000000100e10b0d & 0xcf) * -2 + 'O';
    bRam0000000100e1112e = bRam0000000100e10b0e ^ 0x4a;
    bRam0000000100e1112f = bRam0000000100e10b0f ^ 0xf7;
    bRam0000000100e11130 = bRam0000000100e10b10 ^ 0xeb;
    bRam0000000100e11131 = bRam0000000100e10b11 ^ 0xdb;
    bRam0000000100e11132 = bRam0000000100e10b12 ^ 0x74;
    bRam0000000100e11133 = bRam0000000100e10b13 ^ 0x5c;
    cRam0000000100e11134 = bRam0000000100e10b14 + (bRam0000000100e10b14 & 0xc3) * -2 + 'C';
    bRam0000000100e11135 = bRam0000000100e10b15 ^ 0xbf;
    bRam0000000100e11136 = bRam0000000100e10b16 ^ 0x3c;
    bRam0000000100e11137 = bRam0000000100e10b17 ^ 0x65;
    bRam0000000100e11138 = ~((bRam0000000100e10b18 | 0x43) & (bRam0000000100e10b18 ^ 0xff | 0xbc));
    bRam0000000100e11141 = bRam0000000100e10b21 ^ 0x98;
    bRam0000000100e11142 = bRam0000000100e10b22 ^ 0x7c;
    bRam0000000100e11143 = bRam0000000100e10b23 ^ 0x86;
    bRam0000000100e11144 = bRam0000000100e10b24 ^ 0x1f;
    bRam0000000100e11145 = bRam0000000100e10b25 ^ 0xdb;
    bRam0000000100e11146 = bRam0000000100e10b26 ^ 0xac;
    cRam0000000100e11147 = bRam0000000100e10b27 + (bRam0000000100e10b27 & 1) * -2 + -0x7f;
    bRam0000000100e11148 = bRam0000000100e10b28 ^ 0x45;
    cRam0000000100e11149 = bRam0000000100e10b29 + (bRam0000000100e10b29 & 0x1c) * -2 + '\x1c';
    bRam0000000100e1114a = bRam0000000100e10b2a ^ 0xd8;
    bRam0000000100e1114b = bRam0000000100e10b2b ^ 0x5a;
    cRam0000000100e1114c = bRam0000000100e10b2c + (bRam0000000100e10b2c & 0x29) * -2 + ')';
    bRam0000000100e11155 = bRam0000000100e10b35 ^ 0x4a;
    bRam0000000100e11156 = bRam0000000100e10b36 ^ 0xa9;
    bRam0000000100e11157 = bRam0000000100e10b37 ^ 0x94;
    bRam0000000100e11158 = bRam0000000100e10b38 ^ 0x8e;
    bRam0000000100e11159 = bRam0000000100e10b39 ^ 0x7f;
    bRam0000000100e1115a = bRam0000000100e10b3a ^ 0xe7;
    cRam0000000100e1115b = bRam0000000100e10b3b + (bRam0000000100e10b3b & 0x48) * -2 + 'H';
    bRam0000000100e1115c = bRam0000000100e10b3c ^ 0xec;
    bRam0000000100e1115d = bRam0000000100e10b3d ^ 0xba;
    cRam0000000100e1115e = bRam0000000100e10b3e + (bRam0000000100e10b3e & 0x52) * -2 + 'R';
    bRam0000000100e1115f = bRam0000000100e10b3f ^ 0x2d;
    uRam0000000100e109fe =
         CONCAT17((byte)((ulong)uRam0000000100e1041e >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1041e >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1041e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1041e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1041e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1041e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1041e >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb38 >> 8),
                                                  (byte)uRam0000000100e1041e ^ (byte)_UNK_10099bb38)
                                                  ))))));
    bRam0000000100e11160 = bRam0000000100e10b40 ^ 0x82;
    bRam0000000100e11161 = bRam0000000100e10b41 ^ 200;
    bRam0000000100e11162 = bRam0000000100e10b42 ^ 0xed;
    cRam0000000100e11163 = bRam0000000100e10b43 + (bRam0000000100e10b43 & 0x57) * -2 + 'W';
    bRam0000000100e1116c = bRam0000000100e10b4c ^ 0x43;
    bRam0000000100e1116d = bRam0000000100e10b4d ^ 200;
    bRam0000000100e1116e = bRam0000000100e10b4e ^ 0xdf;
    bRam0000000100e1116f = bRam0000000100e10b4f ^ 0xe4;
    bRam0000000100e11170 = bRam0000000100e10b50 ^ 0x56;
    cRam0000000100e11171 = bRam0000000100e10b51 + (bRam0000000100e10b51 & 7) * -2 + '\a';
    cRam0000000100e11172 = bRam0000000100e10b52 + (bRam0000000100e10b52 & 0xf9) * -2 + 'y';
    uRam0000000100e11173 =
         CONCAT17((byte)((ulong)uRam0000000100e10b53 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb80 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b53 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb80 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b53 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb80 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b53 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb80 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b53 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb80 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b53 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb80 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b53 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb80 >> 8),
                                                  (byte)uRam0000000100e10b53 ^ (byte)_UNK_10099bb80)
                                                  ))))));
    bRam0000000100e1117b = bRam0000000100e10b5b ^ 0x2c;
    bRam0000000100e1117c = bRam0000000100e10b5c ^ 0x81;
    bRam0000000100e1117d = bRam0000000100e10b5d ^ 0xd4;
    cRam0000000100e1117e = bRam0000000100e10b5e + (bRam0000000100e10b5e & 10) * -2 + '\n';
    bRam0000000100e1117f = bRam0000000100e10b5f ^ 0x83;
    bRam0000000100e11180 = bRam0000000100e10b60 ^ 0x14;
    bRam0000000100e11181 = bRam0000000100e10b61 ^ 0xf;
    cRam0000000100e11182 = bRam0000000100e10b62 + (bRam0000000100e10b62 & 0x30) * -2 + -0x50;
    cRam0000000100e11183 = bRam0000000100e10b63 + (bRam0000000100e10b63 & 3) * -2 + -0x7d;
    bRam0000000100e11184 = bRam0000000100e10b64 ^ 0xc2;
    bRam0000000100e11185 = bRam0000000100e10b65 ^ 0x1f;
    bRam0000000100e11186 = bRam0000000100e10b66 ^ 0xb2;
    cRam0000000100e11187 = bRam0000000100e10b67 + (bRam0000000100e10b67 & 0x1f) * -2 + '\x1f';
    bRam0000000100e11190 = bRam0000000100e10b70 ^ 0x96;
    bRam0000000100e11191 = bRam0000000100e10b71 ^ 0x23;
    bRam0000000100e11192 = bRam0000000100e10b72 ^ 10;
    bRam0000000100e11193 = bRam0000000100e10b73 ^ 0xa1;
    bRam0000000100e11194 = bRam0000000100e10b74 ^ 0x89;
    cRam0000000100e11195 = bRam0000000100e10b75 + (bRam0000000100e10b75 & 0x74) * -2 + 't';
    bRam0000000100e11196 = bRam0000000100e10b76 ^ 0xba;
    bRam0000000100e11197 = bRam0000000100e10b77 ^ 0x7f;
    cRam0000000100e11198 = bRam0000000100e10b78 + (bRam0000000100e10b78 & 0x21) * -2 + -0x5f;
    bRam0000000100e11199 = bRam0000000100e10b79 ^ 0xbc;
    cRam0000000100e1119a = bRam0000000100e10b7a + (bRam0000000100e10b7a & 0x28) * -2 + '(';
    bRam0000000100e1119b = bRam0000000100e10b7b ^ 0x19;
    bRam0000000100e1119c = bRam0000000100e10b7c ^ 0xdc;
    bRam0000000100e1119d = bRam0000000100e10b7d ^ 0x99;
    bRam0000000100e1119e = bRam0000000100e10b7e ^ 0x8e;
    bRam0000000100e1119f = bRam0000000100e10b7f ^ 0x66;
    cRam0000000100e111a0 = bRam0000000100e10b80 + (bRam0000000100e10b80 & 0x42) * -2 + 'B';
    bRam0000000100e111a1 = bRam0000000100e10b81 ^ 0xd2;
    bRam0000000100e111a2 = bRam0000000100e10b82 ^ 0x10;
    bRam0000000100e111a3 = bRam0000000100e10b83 ^ 0x7d;
    bRam0000000100e111a4 = bRam0000000100e10b84 ^ 0x29;
    bRam0000000100e111a5 = bRam0000000100e10b85 ^ 0xf7;
    cRam0000000100e111a6 = bRam0000000100e10b86 + (bRam0000000100e10b86 & 0x12) * -2 + '\x12';
    bRam0000000100e111a7 = bRam0000000100e10b87 ^ 0xa0;
    bRam0000000100e111a8 = bRam0000000100e10b88 ^ 0x4d;
    uRam0000000100e109a6 =
         CONCAT17((byte)((ulong)uRam0000000100e103c6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e103c6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e103c6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e103c6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e103c6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e103c6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e103c6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb20 >> 8),
                                                  (byte)uRam0000000100e103c6 ^ (byte)_UNK_10099bb20)
                                                  ))))));
    bRam0000000100e111a9 = bRam0000000100e10b89 ^ 0xf6;
    bRam0000000100e111aa = bRam0000000100e10b8a ^ 0x7b;
    bRam0000000100e111ab = bRam0000000100e10b8b ^ 0xcd;
    cRam0000000100e111ac = bRam0000000100e10b8c + (bRam0000000100e10b8c & 0x5a) * -2 + -0x26;
    uRam0000000100e111ad =
         CONCAT17((byte)((ulong)uRam0000000100e10b8d >> 0x38) ^
                  (byte)((ulong)_UNK_10099c070 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b8d >> 0x30) ^
                           (byte)((ulong)_UNK_10099c070 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b8d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c070 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b8d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c070 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b8d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c070 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b8d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c070 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b8d >> 8) ^
                                                  (byte)((ulong)_UNK_10099c070 >> 8),
                                                  (byte)uRam0000000100e10b8d ^ (byte)_UNK_10099c070)
                                                  ))))));
    uRam0000000100e111b5 =
         CONCAT17((byte)((ulong)uRam0000000100e10b95 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c078 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b95 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c078 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b95 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c078 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b95 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c078 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b95 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c078 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b95 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c078 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b95 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c078 >> 8),
                                                  (byte)uRam0000000100e10b95 ^ (byte)_UNK_10099c078)
                                                  ))))));
    cRam0000000100e111bd = bRam0000000100e10b9d + (bRam0000000100e10b9d & 0xcf) * -2 + -0x31;
    cRam0000000100e111be = bRam0000000100e10b9e + (bRam0000000100e10b9e & 0x62) * -2 + 'b';
    cRam0000000100e111bf = bRam0000000100e10b9f + (bRam0000000100e10b9f & 0x44) * -2 + -0x3c;
    cRam0000000100e111c0 = bRam0000000100e10ba0 + (bRam0000000100e10ba0 & 0x72) * -2 + -0xe;
    bRam0000000100e111c1 = bRam0000000100e10ba1 ^ 0x48;
    bRam0000000100e111c2 = bRam0000000100e10ba2 ^ 0x9a;
    cRam0000000100e111c3 = bRam0000000100e10ba3 + (bRam0000000100e10ba3 & 0x26) * -2 + '&';
    cRam0000000100e111c4 = bRam0000000100e10ba4 + (bRam0000000100e10ba4 & 0x50) * -2 + 'P';
    bRam0000000100e111c5 = bRam0000000100e10ba5 ^ 0xe4;
    bRam0000000100e111c6 = bRam0000000100e10ba6 ^ 0xec;
    bRam0000000100e111c7 = bRam0000000100e10ba7 ^ 0x1a;
    bRam0000000100e111c8 = bRam0000000100e10ba8 ^ 0x72;
    bRam0000000100e111c9 = bRam0000000100e10ba9 ^ 0x7b;
    cRam0000000100e111ca = bRam0000000100e10baa + (bRam0000000100e10baa & 1) * -2 + -0x7f;
    bRam0000000100e111cb = bRam0000000100e10bab ^ 0x30;
    bRam0000000100e111cc = bRam0000000100e10bac ^ 0x85;
    bRam0000000100e111cd = bRam0000000100e10bad ^ 0x21;
    bRam0000000100e111ce = ~((bRam0000000100e10bae | 0x7a) & (bRam0000000100e10bae ^ 0xff | 0x85));
    cRam0000000100e111cf = bRam0000000100e10baf + (bRam0000000100e10baf & 0x99) * -2 + '\x19';
    bRam0000000100e111d0 = bRam0000000100e10bb0 ^ 199;
    bRam0000000100e111d1 = bRam0000000100e10bb1 ^ 0x10;
    uRam0000000100e10986 =
         CONCAT17((byte)((ulong)uRam0000000100e103a6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e103a6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e103a6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e103a6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e103a6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e103a6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e103a6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb18 >> 8),
                                                  (byte)uRam0000000100e103a6 ^ (byte)_UNK_10099bb18)
                                                  ))))));
    bRam0000000100e111d2 = bRam0000000100e10bb2 ^ 0xa2;
    bRam0000000100e111d3 = bRam0000000100e10bb3 ^ 2;
    cRam0000000100e111d4 = bRam0000000100e10bb4 + (bRam0000000100e10bb4 & 0x68) * -2 + -0x18;
    bRam0000000100e111d5 = bRam0000000100e10bb5 ^ 0x29;
    bRam0000000100e111d6 = bRam0000000100e10bb6 ^ 0x57;
    bRam0000000100e111d7 = ~((bRam0000000100e10bb7 | 0xc3) & (~bRam0000000100e10bb7 | 0x3c));
    cRam0000000100e111d8 = bRam0000000100e10bb8 + (bRam0000000100e10bb8 & 0x1b) * -2 + -0x65;
    bRam0000000100e111d9 = bRam0000000100e10bb9 ^ 0x7d;
    cRam0000000100e111da = bRam0000000100e10bba + (bRam0000000100e10bba & 0xe3) * -2 + -0x1d;
    bRam0000000100e111db = bRam0000000100e10bbb ^ 0x26;
    bRam0000000100e111dc = bRam0000000100e10bbc ^ 0x32;
    bRam0000000100e111dd = bRam0000000100e10bbd ^ 0xdd;
    bRam0000000100e111de = bRam0000000100e10bbe ^ 0x92;
    bRam0000000100e111df = bRam0000000100e10bbf ^ 0xc0;
    cRam0000000100e111e0 = bRam0000000100e10bc0 + (bRam0000000100e10bc0 & 0x5a) * -2 + 'Z';
    bRam0000000100e111e1 = bRam0000000100e10bc1 ^ 199;
    bRam0000000100e111e2 = bRam0000000100e10bc2 ^ 0xf7;
    cRam0000000100e111e3 = bRam0000000100e10bc3 + (bRam0000000100e10bc3 & 0xfb) * -2 + '{';
    uRam0000000100e111e4 =
         CONCAT17((byte)((ulong)uRam0000000100e10bc4 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c080 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10bc4 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c080 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10bc4 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c080 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10bc4 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c080 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10bc4 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c080 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10bc4 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c080 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10bc4 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c080 >> 8),
                                                  (byte)uRam0000000100e10bc4 ^ (byte)_UNK_10099c080)
                                                  ))))));
    uRam0000000100e111ec =
         CONCAT17((byte)((ulong)uRam0000000100e10bcc >> 0x38) ^
                  (byte)((ulong)_UNK_10099c088 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10bcc >> 0x30) ^
                           (byte)((ulong)_UNK_10099c088 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10bcc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c088 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10bcc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c088 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10bcc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c088 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10bcc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c088 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10bcc >> 8) ^
                                                  (byte)((ulong)_UNK_10099c088 >> 8),
                                                  (byte)uRam0000000100e10bcc ^ (byte)_UNK_10099c088)
                                                  ))))));
    bRam0000000100e111f4 = bRam0000000100e10bd4 ^ 0x8e;
    bRam0000000100e111f5 = bRam0000000100e10bd5 ^ 0x66;
    bRam0000000100e111f6 = bRam0000000100e10bd6 ^ 0x83;
    uRam0000000100e111f7 = uRam0000000100e10bd7;
    bRam0000000100e111f8 = bRam0000000100e10bd8 ^ 0x2c;
    cRam0000000100e111f9 = bRam0000000100e10bd9 + (bRam0000000100e10bd9 & 0xe) * -2 + -0x72;
    bRam0000000100e111fa = bRam0000000100e10bda ^ 0xaa;
    cRam0000000100e111fb = bRam0000000100e10bdb + (bRam0000000100e10bdb & 0x29) * -2 + -0x57;
    uRam0000000100e111fc =
         CONCAT17((byte)((ulong)uRam0000000100e10bdc >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10bdc >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10bdc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10bdc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10bdc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10bdc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10bdc >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb90 >> 8),
                                                  (byte)uRam0000000100e10bdc ^ (byte)_UNK_10099bb90)
                                                  ))))));
    cRam0000000100e11204 = bRam0000000100e10be4 + (bRam0000000100e10be4 & 0x4b) * -2 + 'K';
    bRam0000000100e11205 = bRam0000000100e10be5 ^ 0xf4;
    bRam0000000100e11206 = bRam0000000100e10be6 ^ 0x9d;
    bRam0000000100e11207 = bRam0000000100e10be7 ^ 0xe1;
    bRam0000000100e11208 = bRam0000000100e10be8 ^ 0xfc;
    bRam0000000100e11209 = bRam0000000100e10be9 ^ 7;
    bRam0000000100e1120a = bRam0000000100e10bea ^ 0x95;
    cRam0000000100e1120b = bRam0000000100e10beb + (bRam0000000100e10beb & 0xe3) * -2 + 'c';
    bRam0000000100e1120c = bRam0000000100e10bec ^ 0xaf;
    bRam0000000100e1120d = bRam0000000100e10bed ^ 0x50;
    bRam0000000100e1120e = bRam0000000100e10bee ^ 0xaa;
    bRam0000000100e1120f = bRam0000000100e10bef ^ 0xb4;
    bRam0000000100e11210 = bRam0000000100e10bf0 ^ 0xeb;
    cRam0000000100e11211 = bRam0000000100e10bf1 + (bRam0000000100e10bf1 & 0x3e) * -2 + '>';
    bRam0000000100e11212 = bRam0000000100e10bf2 ^ 0x68;
    bRam0000000100e11213 = bRam0000000100e10bf3 ^ 10;
    bRam0000000100e11214 = bRam0000000100e10bf4 ^ 0xe0;
    bRam0000000100e11215 = bRam0000000100e10bf5 ^ 0x17;
    cRam0000000100e11216 = bRam0000000100e10bf6 + (bRam0000000100e10bf6 & 0x25) * -2 + '%';
    bRam0000000100e11217 = bRam0000000100e10bf7 ^ 0xdb;
    bRam0000000100e11218 = bRam0000000100e10bf8 ^ 0x77;
    bRam0000000100e11219 = bRam0000000100e10bf9 ^ 0x29;
    bRam0000000100e1121a = bRam0000000100e10bfa ^ 0x2a;
    bRam0000000100e1121b = bRam0000000100e10bfb ^ 0x36;
    bRam0000000100e1121c = bRam0000000100e10bfc ^ 0xeb;
    cRam0000000100e1121d = bRam0000000100e10bfd + (bRam0000000100e10bfd & 0x48) * -2 + -0x38;
    bRam0000000100e1121e = bRam0000000100e10bfe ^ 0x5d;
    bRam0000000100e1121f = bRam0000000100e10bff ^ 0x6c;
    bRam0000000100e11220 = bRam0000000100e10c00 ^ 0x48;
    bRam0000000100e11221 = bRam0000000100e10c01 ^ 10;
    bRam0000000100e11222 = bRam0000000100e10c02 ^ 0x6e;
    cRam0000000100e11223 = bRam0000000100e10c03 + (bRam0000000100e10c03 & 0x46) * -2 + -0x3a;
    bRam0000000100e11224 = bRam0000000100e10c04 ^ 0x55;
    cRam0000000100e11225 = bRam0000000100e10c05 + (bRam0000000100e10c05 & 0x35) * -2 + '5';
    bRam0000000100e11226 = bRam0000000100e10c06 ^ 0x7c;
    bRam0000000100e11227 = bRam0000000100e10c07 ^ 0x31;
    bRam0000000100e11228 = bRam0000000100e10c08 ^ 0xee;
    bRam0000000100e11229 = bRam0000000100e10c09 ^ 0x5d;
    bRam0000000100e1122a = bRam0000000100e10c0a ^ 0xb5;
    bRam0000000100e1122b = bRam0000000100e10c0b ^ 0x3f;
    bRam0000000100e1122c = bRam0000000100e10c0c ^ 0xc2;
    cRam0000000100e1122d = bRam0000000100e10c0d + (bRam0000000100e10c0d & 0x52) * -2 + 'R';
    bRam0000000100e1122e = ~((bRam0000000100e10c0e | 0xc4) & (bRam0000000100e10c0e ^ 0xff | 0x3b));
    bRam0000000100e1122f = bRam0000000100e10c0f ^ 0xcd;
    bRam0000000100e11230 = bRam0000000100e10c10 ^ 0x5d;
    bRam0000000100e11231 = bRam0000000100e10c11 ^ 0x3e;
    bRam0000000100e11232 = bRam0000000100e10c12 ^ 0xd;
    bRam0000000100e11233 = bRam0000000100e10c13 ^ 0x38;
    bRam0000000100e11234 = bRam0000000100e10c14 ^ 0x1b;
    bRam0000000100e11235 = bRam0000000100e10c15 ^ 0xfe;
    cRam0000000100e11236 = bRam0000000100e10c16 + (bRam0000000100e10c16 & 0x46) * -2 + 'F';
    bRam0000000100e11237 = bRam0000000100e10c17 ^ 0xb;
    bRam0000000100e11238 = bRam0000000100e10c18 ^ 0x6d;
    bRam0000000100e11239 = bRam0000000100e10c19 ^ 0xa7;
    bRam0000000100e1123a = ~((bRam0000000100e10c1a | 0x6e) & (bRam0000000100e10c1a ^ 0xff | 0x91));
    bRam0000000100e1123b = bRam0000000100e10c1b ^ 0x84;
    bRam0000000100e1123c = bRam0000000100e10c1c ^ 0x87;
    bRam0000000100e1123d = bRam0000000100e10c1d ^ 0xdf;
    bRam0000000100e1123e = bRam0000000100e10c1e ^ 0x7f;
    bRam0000000100e1123f = bRam0000000100e10c1f ^ 0xeb;
    cRam0000000100e11240 = bRam0000000100e10c20 + (bRam0000000100e10c20 & 0x5e) * -2 + -0x22;
    bRam0000000100e11241 = bRam0000000100e10c21 ^ 0x9c;
    cRam0000000100e11242 = bRam0000000100e10c22 + (bRam0000000100e10c22 & 0x12) * -2 + '\x12';
    bRam0000000100e11243 = bRam0000000100e10c23 ^ 0xed;
    bRam0000000100e11244 = bRam0000000100e10c24 ^ 0xe9;
    bRam0000000100e11245 = bRam0000000100e10c25 ^ 0x7a;
    bRam0000000100e11246 = bRam0000000100e10c26 ^ 0xc2;
    bRam0000000100e11247 = bRam0000000100e10c27 ^ 0x8f;
    cRam0000000100e11248 = bRam0000000100e10c28 + (bRam0000000100e10c28 & 0x45) * -2 + -0x3b;
    uRam0000000100e11249 =
         CONCAT17((byte)((ulong)uRam0000000100e10c29 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10c29 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10c29 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10c29 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10c29 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10c29 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10c29 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb98 >> 8),
                                                  (byte)uRam0000000100e10c29 ^ (byte)_UNK_10099bb98)
                                                  ))))));
    cRam0000000100e11251 = bRam0000000100e10c31 + (bRam0000000100e10c31 & 0x99) * -2 + '\x19';
    bRam0000000100e11252 = bRam0000000100e10c32 ^ 0x93;
    bRam0000000100e11253 = bRam0000000100e10c33 ^ 0x15;
    bRam0000000100e11254 = bRam0000000100e10c34 ^ 0xd5;
    bRam0000000100e11255 = bRam0000000100e10c35 ^ 0xa5;
    cRam0000000100e11256 = bRam0000000100e10c36 + (bRam0000000100e10c36 & 100) * -2 + 'd';
    bRam0000000100e11257 = bRam0000000100e10c37 ^ 0x65;
    bRam0000000100e11258 = bRam0000000100e10c38 ^ 0x5f;
    bRam0000000100e11259 = bRam0000000100e10c39 ^ 0x90;
    bRam0000000100e1125a = bRam0000000100e10c3a ^ 0xd;
    cRam0000000100e1125b = bRam0000000100e10c3b + (bRam0000000100e10c3b & 0xc1) * -2 + 'A';
    bRam0000000100e1125c = bRam0000000100e10c3c ^ 0x5c;
    bRam0000000100e1125d = bRam0000000100e10c3d ^ 0xcb;
    bRam0000000100e1125e = bRam0000000100e10c3e ^ 0xa5;
    bRam0000000100e1125f = bRam0000000100e10c3f ^ 0xe;
    bRam0000000100e11260 = bRam0000000100e10c40 ^ 0x1d;
    bRam0000000100e11261 = bRam0000000100e10c41 ^ 0x21;
    cRam0000000100e11262 = bRam0000000100e10c42 + (bRam0000000100e10c42 & 0x49) * -2 + -0x37;
    uRam0000000100e11263 =
         CONCAT17((byte)((ulong)uRam0000000100e10c43 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bba0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10c43 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bba0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10c43 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bba0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10c43 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bba0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10c43 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bba0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10c43 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bba0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10c43 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bba0 >> 8),
                                                  (byte)uRam0000000100e10c43 ^ (byte)_UNK_10099bba0)
                                                  ))))));
    bRam0000000100e1126b = bRam0000000100e10c4b ^ 0x82;
    bRam0000000100e1126c = bRam0000000100e10c4c ^ 0x2d;
    bRam0000000100e1126d = bRam0000000100e10c4d ^ 0xfd;
    bRam0000000100e1126e = bRam0000000100e10c4e ^ 0x3e;
    cRam0000000100e1126f = bRam0000000100e10c4f + (bRam0000000100e10c4f & 1) * -2 + -0x7f;
    bRam0000000100e11278 = bRam0000000100e10c58 ^ 0x6d;
    bRam0000000100e11279 = ~((bRam0000000100e10c59 | 0xc6) & (bRam0000000100e10c59 ^ 0xff | 0x39));
    cRam0000000100e1127a = bRam0000000100e10c5a + (bRam0000000100e10c5a & 0x49) * -2 + -0x37;
    bRam0000000100e1127b = bRam0000000100e10c5b ^ 0x85;
    bRam0000000100e1127c = bRam0000000100e10c5c ^ 0x17;
    bRam0000000100e1127d = ~((bRam0000000100e10c5d | 0x6b) & (bRam0000000100e10c5d ^ 0xff | 0x94));
    bRam0000000100e1127e = bRam0000000100e10c5e ^ 0x9c;
    bRam0000000100e1127f = bRam0000000100e10c5f ^ 0x16;
    bRam0000000100e11280 = bRam0000000100e10c60 ^ 0xa9;
    cRam0000000100e11281 = bRam0000000100e10c61 + (bRam0000000100e10c61 & 0x3f) * -2 + '?';
    uRam0000000100e11282 =
         CONCAT17((byte)((ulong)uRam0000000100e10c62 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbb0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10c62 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbb0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10c62 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbb0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10c62 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbb0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10c62 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbb0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10c62 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbb0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10c62 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbb0 >> 8),
                                                  (byte)uRam0000000100e10c62 ^ (byte)_UNK_10099bbb0)
                                                  ))))));
    bRam0000000100e1128a = bRam0000000100e10c6a ^ 0xcc;
    bRam0000000100e1128b = bRam0000000100e10c6b ^ 0x61;
    bRam0000000100e1128c = bRam0000000100e10c6c ^ 0xa6;
    bRam0000000100e1128d = bRam0000000100e10c6d ^ 3;
    bRam0000000100e1128e = bRam0000000100e10c6e ^ 0xd;
    bRam0000000100e1128f = bRam0000000100e10c6f ^ 0x61;
    cRam0000000100e11290 = bRam0000000100e10c70 + (bRam0000000100e10c70 & 0x4d) * -2 + 'M';
    uRam0000000100e11188 =
         CONCAT17((byte)((ulong)uRam0000000100e10b68 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb88 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b68 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb88 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b68 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb88 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b68 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb88 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b68 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb88 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b68 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb88 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b68 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb88 >> 8),
                                                  (byte)uRam0000000100e10b68 ^ (byte)_UNK_10099bb88)
                                                  ))))));
    cRam0000000100e11291 = bRam0000000100e10c71 + (bRam0000000100e10c71 & 0xf1) * -2 + 'q';
    bRam0000000100e11292 = bRam0000000100e10c72 ^ 0x13;
    bRam0000000100e11293 = bRam0000000100e10c73 ^ 0x6b;
    bRam0000000100e11294 = bRam0000000100e10c74 ^ 0x2e;
    bRam0000000100e11295 = ~bRam0000000100e10c75;
    bRam0000000100e11296 = bRam0000000100e10c76 ^ 0x90;
    bRam0000000100e11297 = bRam0000000100e10c77 ^ 0x8b;
    bRam0000000100e11298 = bRam0000000100e10c78 ^ 0xa9;
    cRam0000000100e11299 = bRam0000000100e10c79 + (bRam0000000100e10c79 & 0xf1) * -2 + -0xf;
    bRam0000000100e1129a = bRam0000000100e10c7a ^ 0x76;
    cRam0000000100e1129b = bRam0000000100e10c7b + (bRam0000000100e10c7b & 0x28) * -2 + '(';
    uRam0000000100e1129c =
         CONCAT17((byte)((ulong)uRam0000000100e10c7c >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbb8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10c7c >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbb8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10c7c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbb8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10c7c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbb8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10c7c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbb8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10c7c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbb8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10c7c >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbb8 >> 8),
                                                  (byte)uRam0000000100e10c7c ^ (byte)_UNK_10099bbb8)
                                                  ))))));
    bRam0000000100e112a4 = bRam0000000100e10c84 ^ 0x12;
    bRam0000000100e112a5 = bRam0000000100e10c85 ^ 0xe2;
    uRam0000000100e112a6 = uRam0000000100e10c86;
    bRam0000000100e112a7 = bRam0000000100e10c87 ^ 0x32;
    bRam0000000100e112a8 = bRam0000000100e10c88 ^ 6;
    bRam0000000100e112a9 = bRam0000000100e10c89 ^ 0x10;
    bRam0000000100e112aa = bRam0000000100e10c8a ^ 0x4f;
    cRam0000000100e112ab = bRam0000000100e10c8b + (bRam0000000100e10c8b & 0x1a) * -2 + -0x66;
    bRam0000000100e112ac = bRam0000000100e10c8c ^ 0xad;
    bRam0000000100e112ad = bRam0000000100e10c8d ^ 0x2b;
    uRam0000000100e11164 =
         CONCAT17((byte)((ulong)uRam0000000100e10b44 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb78 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b44 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb78 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b44 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb78 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b44 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb78 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b44 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb78 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b44 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb78 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b44 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb78 >> 8),
                                                  (byte)uRam0000000100e10b44 ^ (byte)_UNK_10099bb78)
                                                  ))))));
    cRam0000000100e112ae = bRam0000000100e10c8e + (bRam0000000100e10c8e & 0x75) * -2 + -0xb;
    bRam0000000100e112af = bRam0000000100e10c8f ^ 0xd6;
    bRam0000000100e112b0 = bRam0000000100e10c90 ^ 0x89;
    bRam0000000100e112b1 = bRam0000000100e10c91 ^ 0x4d;
    bRam0000000100e112b2 = bRam0000000100e10c92 ^ 0xed;
    bRam0000000100e112b3 = ~((bRam0000000100e10c93 | 0x7b) & (bRam0000000100e10c93 ^ 0xff | 0x84));
    bRam0000000100e112b4 = bRam0000000100e10c94 ^ 0x96;
    bRam0000000100e112b5 = bRam0000000100e10c95 ^ 0x1a;
    bRam0000000100e112b6 = bRam0000000100e10c96 ^ 0x60;
    bRam0000000100e112b7 = bRam0000000100e10c97 ^ 0x22;
    cRam0000000100e112b8 = bRam0000000100e10c98 + (bRam0000000100e10c98 & 0x45) * -2 + -0x3b;
    bRam0000000100e112b9 = bRam0000000100e10c99 ^ 0xa6;
    bRam0000000100e112ba = bRam0000000100e10c9a ^ 0x54;
    bRam0000000100e112bb = bRam0000000100e10c9b ^ 0xc;
    cRam0000000100e112bc = bRam0000000100e10c9c + (bRam0000000100e10c9c & 0x7c) * -2 + '|';
    bRam0000000100e112bd = bRam0000000100e10c9d ^ 0x80;
    uRam0000000100e1114d =
         CONCAT17((byte)((ulong)uRam0000000100e10b2d >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb70 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b2d >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb70 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b2d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb70 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b2d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb70 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b2d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b2d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb70 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b2d >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb70 >> 8),
                                                  (byte)uRam0000000100e10b2d ^ (byte)_UNK_10099bb70)
                                                  ))))));
    bRam0000000100e112be = bRam0000000100e10c9e ^ 0x60;
    bRam0000000100e112bf = bRam0000000100e10c9f ^ 0x1c;
    cRam0000000100e112c0 = bRam0000000100e10ca0 + (bRam0000000100e10ca0 & 0x14) * -2 + '\x14';
    cRam0000000100e112c1 = bRam0000000100e10ca1 + (bRam0000000100e10ca1 & 10) * -2 + '\n';
    uRam0000000100e112c2 =
         CONCAT17((byte)((ulong)uRam0000000100e10ca2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbc0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ca2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbc0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ca2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbc0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ca2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbc0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ca2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbc0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ca2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbc0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ca2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbc0 >> 8),
                                                  (byte)uRam0000000100e10ca2 ^ (byte)_UNK_10099bbc0)
                                                  ))))));
    cRam0000000100e112ca = bRam0000000100e10caa + (bRam0000000100e10caa & 0x6d) * -2 + 'm';
    bRam0000000100e112cb = bRam0000000100e10cab ^ 0xb2;
    cRam0000000100e112cc = bRam0000000100e10cac + (bRam0000000100e10cac & 0x1d) * -2 + -99;
    bRam0000000100e112cd = bRam0000000100e10cad ^ 0x1b;
    bRam0000000100e112ce = bRam0000000100e10cae ^ 0xa0;
    bRam0000000100e112cf = bRam0000000100e10caf ^ 0x1e;
    bRam0000000100e112d0 = bRam0000000100e10cb0 ^ 0x69;
    bRam0000000100e112d1 = bRam0000000100e10cb1 ^ 0x49;
    uRam0000000100e11139 =
         CONCAT17((byte)((ulong)uRam0000000100e10b19 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb68 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10b19 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb68 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10b19 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb68 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10b19 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb68 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10b19 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10b19 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb68 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10b19 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb68 >> 8),
                                                  (byte)uRam0000000100e10b19 ^ (byte)_UNK_10099bb68)
                                                  ))))));
    cRam0000000100e112d2 = bRam0000000100e10cb2 + (bRam0000000100e10cb2 & 5) * -2 + -0x7b;
    uRam0000000100e112d3 =
         CONCAT17((byte)((ulong)uRam0000000100e10cb3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbc8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10cb3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbc8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10cb3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbc8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10cb3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbc8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10cb3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbc8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10cb3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbc8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10cb3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbc8 >> 8),
                                                  (byte)uRam0000000100e10cb3 ^ (byte)_UNK_10099bbc8)
                                                  ))))));
    bRam0000000100e112db = bRam0000000100e10cbb ^ 9;
    bRam0000000100e112dc = bRam0000000100e10cbc ^ 0xbe;
    bRam0000000100e112dd = bRam0000000100e10cbd ^ 0x19;
    cRam0000000100e112de = bRam0000000100e10cbe + (bRam0000000100e10cbe & 0x7c) * -2 + -4;
    bRam0000000100e112df = bRam0000000100e10cbf ^ 0x52;
    bRam0000000100e112e0 = bRam0000000100e10cc0 ^ 0xb8;
    bRam0000000100e112e1 = bRam0000000100e10cc1 ^ 0x9d;
    bRam0000000100e112e2 = bRam0000000100e10cc2 ^ 0x74;
    cRam0000000100e112e3 = bRam0000000100e10cc3 + (bRam0000000100e10cc3 & 0xbb) * -2 + ';';
    cRam0000000100e112e4 = bRam0000000100e10cc4 + (bRam0000000100e10cc4 & 0x1b) * -2 + '\x1b';
    bRam0000000100e112e5 = bRam0000000100e10cc5 ^ 0xb2;
    bRam0000000100e112e6 = bRam0000000100e10cc6 ^ 0x1c;
    bRam0000000100e112e7 = bRam0000000100e10cc7 ^ 0x75;
    cRam0000000100e112e8 = bRam0000000100e10cc8 + (bRam0000000100e10cc8 & 0x26) * -2 + '&';
    uRam0000000100e112e9 =
         CONCAT17((byte)((ulong)uRam0000000100e10cc9 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbd0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10cc9 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbd0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10cc9 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbd0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10cc9 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbd0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10cc9 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbd0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10cc9 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbd0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10cc9 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbd0 >> 8),
                                                  (byte)uRam0000000100e10cc9 ^ (byte)_UNK_10099bbd0)
                                                  ))))));
    bRam0000000100e112f1 = bRam0000000100e10cd1 ^ 0x4d;
    cRam0000000100e112f2 = bRam0000000100e10cd2 + (bRam0000000100e10cd2 & 0x16) * -2 + -0x6a;
    uRam0000000100e112f3 =
         CONCAT17((byte)((ulong)uRam0000000100e10cd3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbd8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10cd3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbd8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10cd3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbd8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10cd3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbd8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10cd3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbd8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10cd3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbd8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10cd3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbd8 >> 8),
                                                  (byte)uRam0000000100e10cd3 ^ (byte)_UNK_10099bbd8)
                                                  ))))));
    cRam0000000100e112fb = bRam0000000100e10cdb + (bRam0000000100e10cdb & 0x22) * -2 + -0x5e;
    bRam0000000100e112fc = bRam0000000100e10cdc ^ 0x78;
    bRam0000000100e112fd = bRam0000000100e10cdd ^ 0x2e;
    bRam0000000100e112fe = bRam0000000100e10cde ^ 0xad;
    bRam0000000100e112ff = bRam0000000100e10cdf ^ 0x47;
    cRam0000000100e11300 = bRam0000000100e10ce0 + (bRam0000000100e10ce0 & 0x58) * -2 + -0x28;
    bRam0000000100e11301 = bRam0000000100e10ce1 ^ 0xd3;
    cRam0000000100e11302 = bRam0000000100e10ce2 + (bRam0000000100e10ce2 & 0xfd) * -2 + -3;
    uRam0000000100e11303 =
         CONCAT17((byte)((ulong)uRam0000000100e10ce3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbe0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ce3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbe0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ce3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbe0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ce3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbe0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ce3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbe0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ce3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbe0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ce3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbe0 >> 8),
                                                  (byte)uRam0000000100e10ce3 ^ (byte)_UNK_10099bbe0)
                                                  ))))));
    bRam0000000100e1130b = bRam0000000100e10ceb ^ 0x3f;
    cRam0000000100e1130c = bRam0000000100e10cec + (bRam0000000100e10cec & 0x29) * -2 + -0x57;
    cRam0000000100e1130d = bRam0000000100e10ced + (bRam0000000100e10ced & 0x22) * -2 + '\"';
    uRam0000000100e1130e =
         CONCAT17((byte)((ulong)uRam0000000100e10cee >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbe8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10cee >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbe8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10cee >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbe8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10cee >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbe8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10cee >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbe8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10cee >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbe8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10cee >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbe8 >> 8),
                                                  (byte)uRam0000000100e10cee ^ (byte)_UNK_10099bbe8)
                                                  ))))));
    bRam0000000100e11316 = bRam0000000100e10cf6 ^ 0x38;
    bRam0000000100e11317 = bRam0000000100e10cf7 ^ 0x42;
    bRam0000000100e11318 = bRam0000000100e10cf8 ^ 0x6f;
    bRam0000000100e11319 = bRam0000000100e10cf9 ^ 0x3b;
    bRam0000000100e1131a = bRam0000000100e10cfa ^ 10;
    bRam0000000100e1131b = bRam0000000100e10cfb ^ 0x66;
    bRam0000000100e1131c = bRam0000000100e10cfc ^ 0x13;
    cRam0000000100e1131d = bRam0000000100e10cfd + (bRam0000000100e10cfd & 0x44) * -2 + -0x3c;
    bRam0000000100e1131e = bRam0000000100e10cfe ^ 0xd3;
    cRam0000000100e1131f = bRam0000000100e10cff + (bRam0000000100e10cff & 0x1a) * -2 + -0x66;
    bRam0000000100e11320 = ~((bRam0000000100e10d00 | 0x65) & (bRam0000000100e10d00 ^ 0xff | 0x9a));
    cRam0000000100e11321 = bRam0000000100e10d01 + (bRam0000000100e10d01 & 0xdd) * -2 + ']';
    cRam0000000100e11322 = bRam0000000100e10d02 + (bRam0000000100e10d02 & 0x1a) * -2 + '\x1a';
    uRam0000000100e11323 =
         CONCAT17((byte)((ulong)uRam0000000100e10d03 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbf0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d03 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbf0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d03 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbf0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d03 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbf0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d03 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbf0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d03 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbf0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d03 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbf0 >> 8),
                                                  (byte)uRam0000000100e10d03 ^ (byte)_UNK_10099bbf0)
                                                  ))))));
    bRam0000000100e1132b = bRam0000000100e10d0b ^ 0x18;
    cRam0000000100e1132c = bRam0000000100e10d0c + (bRam0000000100e10d0c & 10) * -2 + '\n';
    bRam0000000100e1132d = bRam0000000100e10d0d ^ 0x38;
    bRam0000000100e1132e = bRam0000000100e10d0e ^ 0xf3;
    cRam0000000100e1132f = bRam0000000100e10d0f + (bRam0000000100e10d0f & 0x4b) * -2 + -0x35;
    bRam0000000100e11330 = bRam0000000100e10d10 ^ 0xd;
    bRam0000000100e11331 = bRam0000000100e10d11 ^ 0x15;
    bRam0000000100e11332 = bRam0000000100e10d12 ^ 0x3f;
    bRam0000000100e11333 = bRam0000000100e10d13 ^ 0xb5;
    bRam0000000100e11334 = bRam0000000100e10d14 ^ 0xe6;
    bRam0000000100e11335 = bRam0000000100e10d15 ^ 0xaa;
    bRam0000000100e11336 = bRam0000000100e10d16 ^ 0x67;
    cRam0000000100e11337 = bRam0000000100e10d17 + (bRam0000000100e10d17 & 0x20) * -2 + -0x60;
    cRam0000000100e11338 = bRam0000000100e10d18 + (bRam0000000100e10d18 & 0x50) * -2 + -0x30;
    bRam0000000100e11339 = bRam0000000100e10d19 ^ 0xa1;
    bRam0000000100e1133a = bRam0000000100e10d1a ^ 0xcd;
    cRam0000000100e1133b = bRam0000000100e10d1b + (bRam0000000100e10d1b & 0xe1) * -2 + 'a';
    bRam0000000100e1133c = bRam0000000100e10d1c ^ 0x92;
    bRam0000000100e1133d = bRam0000000100e10d1d ^ 0xed;
    bRam0000000100e1133e = ~((bRam0000000100e10d1e | 0x4e) & (bRam0000000100e10d1e ^ 0xff | 0xb1));
    bRam0000000100e1133f = bRam0000000100e10d1f ^ 0x7a;
    bRam0000000100e11340 = bRam0000000100e10d20 ^ 0xd;
    bRam0000000100e11341 = bRam0000000100e10d21 ^ 0xe3;
    bRam0000000100e11342 = bRam0000000100e10d22 ^ 0x61;
    bRam0000000100e11343 = bRam0000000100e10d23 ^ 0xef;
    cRam0000000100e11344 = bRam0000000100e10d24 + (bRam0000000100e10d24 & 0x18) * -2 + -0x68;
    bRam0000000100e11345 = bRam0000000100e10d25 ^ 0xa4;
    cRam0000000100e11346 = bRam0000000100e10d26 + (bRam0000000100e10d26 & 0x66) * -2 + -0x1a;
    uRam0000000100e11347 =
         CONCAT17((byte)((ulong)uRam0000000100e10d27 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c090 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d27 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c090 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d27 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c090 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d27 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c090 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d27 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c090 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d27 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c090 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d27 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c090 >> 8),
                                                  (byte)uRam0000000100e10d27 ^ (byte)_UNK_10099c090)
                                                  ))))));
    uRam0000000100e1134f =
         CONCAT17((byte)((ulong)uRam0000000100e10d2f >> 0x38) ^
                  (byte)((ulong)_UNK_10099c098 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d2f >> 0x30) ^
                           (byte)((ulong)_UNK_10099c098 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d2f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c098 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d2f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c098 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d2f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c098 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d2f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c098 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d2f >> 8) ^
                                                  (byte)((ulong)_UNK_10099c098 >> 8),
                                                  (byte)uRam0000000100e10d2f ^ (byte)_UNK_10099c098)
                                                  ))))));
    bRam0000000100e11357 = bRam0000000100e10d37 ^ 0x51;
    bRam0000000100e11358 = bRam0000000100e10d38 ^ 0x88;
    bRam0000000100e11359 = bRam0000000100e10d39 ^ 0xe;
    bRam0000000100e1135a = bRam0000000100e10d3a ^ 0xb3;
    bRam0000000100e1135b = bRam0000000100e10d3b ^ 0x81;
    bRam0000000100e1135c = bRam0000000100e10d3c ^ 0x45;
    cRam0000000100e1135d = bRam0000000100e10d3d + (bRam0000000100e10d3d & 0x76) * -2 + -10;
    cRam0000000100e1135e = bRam0000000100e10d3e + (bRam0000000100e10d3e & 0x2d) * -2 + -0x53;
    uRam0000000100e110dd =
         CONCAT17((byte)((ulong)uRam0000000100e10abd >> 0x38) ^
                  (byte)((ulong)_UNK_10099bb60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10abd >> 0x30) ^
                           (byte)((ulong)_UNK_10099bb60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10abd >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bb60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10abd >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bb60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10abd >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bb60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10abd >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bb60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10abd >> 8) ^
                                                  (byte)((ulong)_UNK_10099bb60 >> 8),
                                                  (byte)uRam0000000100e10abd ^ (byte)_UNK_10099bb60)
                                                  ))))));
    bRam0000000100e1135f = bRam0000000100e10d3f ^ 0x43;
    bRam0000000100e11360 = bRam0000000100e10d40 ^ 9;
    bRam0000000100e11361 = bRam0000000100e10d41 ^ 0xce;
    bRam0000000100e11362 = bRam0000000100e10d42 ^ 0x71;
    bRam0000000100e11363 = bRam0000000100e10d43 ^ 0xf6;
    bRam0000000100e11364 = bRam0000000100e10d44 ^ 0x4e;
    cRam0000000100e11365 = bRam0000000100e10d45 + (bRam0000000100e10d45 & 0xf1) * -2 + 'q';
    bRam0000000100e11366 = bRam0000000100e10d46 ^ 0x92;
    bRam0000000100e11367 = ~((bRam0000000100e10d47 | 0xb6) & (bRam0000000100e10d47 ^ 0xff | 0x49));
    bRam0000000100e11368 = bRam0000000100e10d48 ^ 0x49;
    bRam0000000100e11369 = bRam0000000100e10d49 ^ 0xaf;
    bRam0000000100e1136a = bRam0000000100e10d4a ^ 0x38;
    bRam0000000100e1136b = bRam0000000100e10d4b ^ 0xbe;
    bRam0000000100e1136c = bRam0000000100e10d4c ^ 0x71;
    bRam0000000100e1136d = bRam0000000100e10d4d ^ 0x46;
    cRam0000000100e1136e = bRam0000000100e10d4e + (bRam0000000100e10d4e & 0x72) * -2 + 'r';
    bRam0000000100e1136f = bRam0000000100e10d4f ^ 0x2b;
    bRam0000000100e11370 = bRam0000000100e10d50 ^ 0xa8;
    bRam0000000100e11371 = bRam0000000100e10d51 ^ 0x53;
    bRam0000000100e11372 = bRam0000000100e10d52 ^ 0xe;
    bRam0000000100e11373 = bRam0000000100e10d53 ^ 0x5e;
    cRam0000000100e11374 = bRam0000000100e10d54 + (bRam0000000100e10d54 & 0xf9) * -2 + 'y';
    bRam0000000100e11375 = bRam0000000100e10d55 ^ 0x95;
    bRam0000000100e11376 = bRam0000000100e10d56 ^ 0x15;
    bRam0000000100e11377 = bRam0000000100e10d57 ^ 0xe0;
    bRam0000000100e11378 = bRam0000000100e10d58 ^ 0xef;
    bRam0000000100e11379 = bRam0000000100e10d59 ^ 0x1a;
    bRam0000000100e1137a = bRam0000000100e10d5a ^ 0x36;
    cRam0000000100e1137b = bRam0000000100e10d5b + (bRam0000000100e10d5b & 0x6a) * -2 + 'j';
    bRam0000000100e1137c = bRam0000000100e10d5c ^ 0x59;
    bRam0000000100e1137d = bRam0000000100e10d5d ^ 0xf8;
    bRam0000000100e1137e = bRam0000000100e10d5e ^ 0xec;
    cRam0000000100e1137f = bRam0000000100e10d5f + (bRam0000000100e10d5f & 8) * -2 + -0x78;
    bRam0000000100e11380 = bRam0000000100e10d60 ^ 0xc;
    bRam0000000100e11381 = bRam0000000100e10d61 ^ 0x8d;
    cRam0000000100e11382 = bRam0000000100e10d62 + (bRam0000000100e10d62 & 0x12) * -2 + -0x6e;
    uRam0000000100e11383 = uRam0000000100e10d63;
    bRam0000000100e11384 = ~((bRam0000000100e10d64 | 0x7f) & (~bRam0000000100e10d64 | 0x80));
    uRam0000000100e11385 = uRam0000000100e10d65;
    bRam0000000100e11386 = bRam0000000100e10d66 ^ 0x2c;
    bRam0000000100e11387 = bRam0000000100e10d67 ^ 0xb7;
    cRam0000000100e11388 = bRam0000000100e10d68 + (bRam0000000100e10d68 & 0xee) * -2 + 'n';
    bRam0000000100e11389 = bRam0000000100e10d69 ^ 0x68;
    cRam0000000100e1138a = bRam0000000100e10d6a + (bRam0000000100e10d6a & 0x25) * -2 + '%';
    uRam0000000100e1138b =
         CONCAT17((byte)((ulong)uRam0000000100e10d6b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bbf8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d6b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bbf8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d6b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bbf8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d6b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bbf8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d6b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bbf8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d6b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bbf8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d6b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bbf8 >> 8),
                                                  (byte)uRam0000000100e10d6b ^ (byte)_UNK_10099bbf8)
                                                  ))))));
    cRam0000000100e11393 = bRam0000000100e10d73 + (bRam0000000100e10d73 & 0x42) * -2 + -0x3e;
    uRam0000000100e11394 =
         CONCAT17((byte)((ulong)uRam0000000100e10d74 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d74 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d74 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d74 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d74 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d74 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d74 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc00 >> 8),
                                                  (byte)uRam0000000100e10d74 ^ (byte)_UNK_10099bc00)
                                                  ))))));
    bRam0000000100e1139c = bRam0000000100e10d7c ^ 0x2b;
    cRam0000000100e1139d = bRam0000000100e10d7d + (bRam0000000100e10d7d & 5) * -2 + -0x7b;
    bRam0000000100e1139e = bRam0000000100e10d7e ^ 0x98;
    bRam0000000100e1139f = bRam0000000100e10d7f ^ 0x9c;
    bRam0000000100e113a0 = bRam0000000100e10d80 ^ 0x88;
    bRam0000000100e113a1 = bRam0000000100e10d81 ^ 0x65;
    bRam0000000100e113a2 = bRam0000000100e10d82 ^ 0xdd;
    cRam0000000100e113a3 = bRam0000000100e10d83 + (bRam0000000100e10d83 & 0xfb) * -2 + '{';
    bRam0000000100e113a4 = bRam0000000100e10d84 ^ 0x52;
    bRam0000000100e113a5 = bRam0000000100e10d85 ^ 0x8a;
    bRam0000000100e113a6 = bRam0000000100e10d86 ^ 0xbe;
    bRam0000000100e113a7 = bRam0000000100e10d87 ^ 0xed;
    bRam0000000100e113a8 = ~((bRam0000000100e10d88 | 0x9d) & (bRam0000000100e10d88 ^ 0xff | 0x62));
    cRam0000000100e113a9 = bRam0000000100e10d89 + (bRam0000000100e10d89 & 0x32) * -2 + '2';
    uRam0000000100e113aa =
         CONCAT17((byte)((ulong)uRam0000000100e10d8a >> 0x38) ^
                  (byte)((ulong)_UNK_10099c0a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d8a >> 0x30) ^
                           (byte)((ulong)_UNK_10099c0a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d8a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c0a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d8a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c0a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d8a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c0a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d8a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c0a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d8a >> 8) ^
                                                  (byte)((ulong)_UNK_10099c0a0 >> 8),
                                                  (byte)uRam0000000100e10d8a ^ (byte)_UNK_10099c0a0)
                                                  ))))));
    uRam0000000100e113b2 =
         CONCAT17((byte)((ulong)uRam0000000100e10d92 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c0a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d92 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c0a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d92 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c0a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d92 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c0a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d92 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c0a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d92 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c0a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d92 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c0a8 >> 8),
                                                  (byte)uRam0000000100e10d92 ^ (byte)_UNK_10099c0a8)
                                                  ))))));
    uRam0000000100e113ba = uRam0000000100e10d9a;
    uRam0000000100e113bb =
         CONCAT17((byte)((ulong)uRam0000000100e10d9b >> 0x38) ^
                  (byte)((ulong)_UNK_10099c0b0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10d9b >> 0x30) ^
                           (byte)((ulong)_UNK_10099c0b0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10d9b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c0b0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10d9b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c0b0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10d9b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c0b0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10d9b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c0b0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10d9b >> 8) ^
                                                  (byte)((ulong)_UNK_10099c0b0 >> 8),
                                                  (byte)uRam0000000100e10d9b ^ (byte)_UNK_10099c0b0)
                                                  ))))));
    uRam0000000100e113c3 =
         CONCAT17((byte)((ulong)uRam0000000100e10da3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c0b8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10da3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c0b8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10da3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c0b8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10da3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c0b8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10da3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c0b8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10da3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c0b8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10da3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c0b8 >> 8),
                                                  (byte)uRam0000000100e10da3 ^ (byte)_UNK_10099c0b8)
                                                  ))))));
    bRam0000000100e113cb = bRam0000000100e10dab ^ 0x2a;
    cRam0000000100e113cc = bRam0000000100e10dac + (bRam0000000100e10dac & 0x52) * -2 + -0x2e;
    uRam0000000100e113cd =
         CONCAT17((byte)((ulong)uRam0000000100e10dad >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10dad >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10dad >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10dad >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10dad >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10dad >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10dad >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc08 >> 8),
                                                  (byte)uRam0000000100e10dad ^ (byte)_UNK_10099bc08)
                                                  ))))));
    cRam0000000100e113d5 = bRam0000000100e10db5 + (bRam0000000100e10db5 & 0xf3) * -2 + 's';
    uRam0000000100e113d6 =
         CONCAT17((byte)((ulong)uRam0000000100e10db6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10db6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10db6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10db6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10db6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10db6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10db6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc10 >> 8),
                                                  (byte)uRam0000000100e10db6 ^ (byte)_UNK_10099bc10)
                                                  ))))));
    bRam0000000100e113de = bRam0000000100e10dbe ^ 0xdb;
    bRam0000000100e113df = bRam0000000100e10dbf ^ 0xc2;
    bRam0000000100e113e0 = bRam0000000100e10dc0 ^ 0x73;
    bRam0000000100e113e1 = bRam0000000100e10dc1 ^ 0x6c;
    bRam0000000100e113e2 = ~((bRam0000000100e10dc2 | 0xb6) & (bRam0000000100e10dc2 ^ 0xff | 0x49));
    bRam0000000100e113e3 = bRam0000000100e10dc3 ^ 0x22;
    bRam0000000100e113e4 = bRam0000000100e10dc4 ^ 0xaf;
    cRam0000000100e113e5 = bRam0000000100e10dc5 + (bRam0000000100e10dc5 & 199) * -2 + -0x39;
    bRam0000000100e113e6 = bRam0000000100e10dc6 ^ 0xd6;
    bRam0000000100e113e7 = bRam0000000100e10dc7 ^ 0x79;
    bRam0000000100e113e8 = bRam0000000100e10dc8 ^ 0xee;
    bRam0000000100e113e9 = bRam0000000100e10dc9 ^ 0x60;
    cRam0000000100e113ea = bRam0000000100e10dca + (bRam0000000100e10dca & 0x11) * -2 + -0x6f;
    uRam0000000100e113eb =
         CONCAT17((byte)((ulong)uRam0000000100e10dcb >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10dcb >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10dcb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10dcb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10dcb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10dcb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10dcb >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc18 >> 8),
                                                  (byte)uRam0000000100e10dcb ^ (byte)_UNK_10099bc18)
                                                  ))))));
    bRam0000000100e113f3 = bRam0000000100e10dd3 ^ 0x40;
    bRam0000000100e113f4 = bRam0000000100e10dd4 ^ 0x57;
    bRam0000000100e113f5 = bRam0000000100e10dd5 ^ 0xad;
    bRam0000000100e113f6 = bRam0000000100e10dd6 ^ 0x6e;
    bRam0000000100e113f7 = bRam0000000100e10dd7 ^ 0x88;
    bRam0000000100e113f8 = bRam0000000100e10dd8 ^ 0xb9;
    bRam0000000100e113f9 = bRam0000000100e10dd9 ^ 0x32;
    cRam0000000100e113fa = bRam0000000100e10dda + (bRam0000000100e10dda & 0x60) * -2 + '`';
    bRam0000000100e113fb = bRam0000000100e10ddb ^ 0x61;
    bRam0000000100e113fc = bRam0000000100e10ddc ^ 0x49;
    bRam0000000100e113fd = bRam0000000100e10ddd ^ 0x81;
    cRam0000000100e113fe = bRam0000000100e10dde + (bRam0000000100e10dde & 0x58) * -2 + 'X';
    uRam0000000100e113ff =
         CONCAT17((byte)((ulong)uRam0000000100e10ddf >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ddf >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ddf >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ddf >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ddf >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ddf >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ddf >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc20 >> 8),
                                                  (byte)uRam0000000100e10ddf ^ (byte)_UNK_10099bc20)
                                                  ))))));
    bRam0000000100e11407 = bRam0000000100e10de7 ^ 0xba;
    bRam0000000100e11408 = bRam0000000100e10de8 ^ 7;
    bRam0000000100e11409 = bRam0000000100e10de9 ^ 0x90;
    bRam0000000100e1140a = bRam0000000100e10dea ^ 0x54;
    bRam0000000100e1140b = bRam0000000100e10deb ^ 0xa0;
    bRam0000000100e1140c = bRam0000000100e10dec ^ 0x14;
    cRam0000000100e1140d = bRam0000000100e10ded + (bRam0000000100e10ded & 0x58) * -2 + -0x28;
    cRam0000000100e1140e = bRam0000000100e10dee + (bRam0000000100e10dee & 0x46) * -2 + -0x3a;
    bRam0000000100e1140f = bRam0000000100e10def ^ 0x5e;
    cRam0000000100e11410 = bRam0000000100e10df0 + (bRam0000000100e10df0 & 0x29) * -2 + ')';
    bRam0000000100e11411 = bRam0000000100e10df1 ^ 0x69;
    bRam0000000100e11412 = bRam0000000100e10df2 ^ 0xb7;
    bRam0000000100e11413 = bRam0000000100e10df3 ^ 0xce;
    bRam0000000100e11414 = bRam0000000100e10df4 ^ 0x7b;
    bRam0000000100e11415 = bRam0000000100e10df5 ^ 0x5b;
    cRam0000000100e11416 = bRam0000000100e10df6 + (bRam0000000100e10df6 & 0x56) * -2 + 'V';
    cRam0000000100e11417 = bRam0000000100e10df7 + (bRam0000000100e10df7 & 0x7c) * -2 + -4;
    cRam0000000100e11418 = bRam0000000100e10df8 + (bRam0000000100e10df8 & 0x7e) * -2 + '~';
    bRam0000000100e11419 = bRam0000000100e10df9 ^ 0x14;
    cRam0000000100e1141a = bRam0000000100e10dfa + (bRam0000000100e10dfa & 0x21) * -2 + -0x5f;
    bRam0000000100e1141b = bRam0000000100e10dfb ^ 0xdf;
    bRam0000000100e1141c = bRam0000000100e10dfc ^ 0x80;
    bRam0000000100e1141d = bRam0000000100e10dfd ^ 0x21;
    cRam0000000100e1141e = bRam0000000100e10dfe + (bRam0000000100e10dfe & 0x4a) * -2 + 'J';
    bRam0000000100e1141f = bRam0000000100e10dff ^ 0xf4;
    cRam0000000100e11420 = bRam0000000100e10e00 + (bRam0000000100e10e00 & 0x7e) * -2 + '~';
    cRam0000000100e11421 = bRam0000000100e10e01 + (bRam0000000100e10e01 & 0x54) * -2 + -0x2c;
    uRam0000000100e11422 =
         CONCAT17((byte)((ulong)uRam0000000100e10e02 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e02 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e02 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e02 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e02 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e02 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e02 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc28 >> 8),
                                                  (byte)uRam0000000100e10e02 ^ (byte)_UNK_10099bc28)
                                                  ))))));
    uRam0000000100e1142a =
         CONCAT17((byte)((ulong)uRam0000000100e10e0a >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e0a >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e0a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e0a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e0a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e0a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e0a >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc30 >> 8),
                                                  (byte)uRam0000000100e10e0a ^ (byte)_UNK_10099bc30)
                                                  ))))));
    bRam0000000100e11432 = bRam0000000100e10e12 ^ 0x39;
    bRam0000000100e11433 = bRam0000000100e10e13 ^ 0xbd;
    cRam0000000100e11434 = bRam0000000100e10e14 + (bRam0000000100e10e14 & 0xe) * -2 + '\x0e';
    uRam0000000100e11435 =
         CONCAT17((byte)((ulong)uRam0000000100e10e15 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e15 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e15 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e15 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e15 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e15 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e15 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc38 >> 8),
                                                  (byte)uRam0000000100e10e15 ^ (byte)_UNK_10099bc38)
                                                  ))))));
    cRam0000000100e1143d = bRam0000000100e10e1d + (bRam0000000100e10e1d & 0xfb) * -2 + -5;
    bRam0000000100e1143e = bRam0000000100e10e1e ^ 0xe6;
    cRam0000000100e1143f = bRam0000000100e10e1f + (bRam0000000100e10e1f & 0x6b) * -2 + -0x15;
    bRam0000000100e11448 = bRam0000000100e10e28 ^ 0x86;
    bRam0000000100e11449 = bRam0000000100e10e29 ^ 0xf3;
    cRam0000000100e1144a = bRam0000000100e10e2a + (bRam0000000100e10e2a & 0x6a) * -2 + -0x16;
    uRam0000000100e1144b =
         CONCAT17((byte)((ulong)uRam0000000100e10e2b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e2b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e2b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e2b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e2b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e2b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e2b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc48 >> 8),
                                                  (byte)uRam0000000100e10e2b ^ (byte)_UNK_10099bc48)
                                                  ))))));
    cRam0000000100e11453 = bRam0000000100e10e33 + (bRam0000000100e10e33 & 9) * -2 + '\t';
    bRam0000000100e11454 = bRam0000000100e10e34 ^ 0x23;
    bRam0000000100e11455 = bRam0000000100e10e35 ^ 0xe6;
    cRam0000000100e11456 = bRam0000000100e10e36 + (bRam0000000100e10e36 & 0xe1) * -2 + 'a';
    cRam0000000100e11457 = bRam0000000100e10e37 + (bRam0000000100e10e37 & 0xef) * -2 + -0x11;
    bRam0000000100e11458 = bRam0000000100e10e38 ^ 0x11;
    bRam0000000100e11459 = bRam0000000100e10e39 ^ 0x86;
    cRam0000000100e1145a = bRam0000000100e10e3a + (bRam0000000100e10e3a & 0x6a) * -2 + -0x16;
    uRam0000000100e1145b =
         CONCAT17((byte)((ulong)uRam0000000100e10e3b >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc50 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e3b >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc50 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e3b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc50 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e3b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc50 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e3b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e3b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc50 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e3b >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc50 >> 8),
                                                  (byte)uRam0000000100e10e3b ^ (byte)_UNK_10099bc50)
                                                  ))))));
    bRam0000000100e11463 = bRam0000000100e10e43 ^ 0x50;
    bRam0000000100e11464 = bRam0000000100e10e44 ^ 0xb0;
    bRam0000000100e11465 = bRam0000000100e10e45 ^ 0x57;
    bRam0000000100e11466 = bRam0000000100e10e46 ^ 0xe;
    bRam0000000100e11467 = bRam0000000100e10e47 ^ 0x60;
    bRam0000000100e11468 = bRam0000000100e10e48 ^ 0x62;
    bRam0000000100e11469 = bRam0000000100e10e49 ^ 0xed;
    cRam0000000100e1146a = bRam0000000100e10e4a + (bRam0000000100e10e4a & 0x17) * -2 + -0x69;
    bRam0000000100e1146b = bRam0000000100e10e4b ^ 0xeb;
    bRam0000000100e1146c = bRam0000000100e10e4c ^ 0x28;
    bRam0000000100e1146d = bRam0000000100e10e4d ^ 2;
    bRam0000000100e1146e = bRam0000000100e10e4e ^ 0x8e;
    bRam0000000100e1146f = bRam0000000100e10e4f ^ 0x56;
    cRam0000000100e11470 = bRam0000000100e10e50 + (bRam0000000100e10e50 & 8) * -2 + '\b';
    bRam0000000100e11471 = bRam0000000100e10e51 ^ 0x4c;
    bRam0000000100e11472 = bRam0000000100e10e52 ^ 0x84;
    bRam0000000100e11473 = bRam0000000100e10e53 ^ 0x41;
    bRam0000000100e11474 = bRam0000000100e10e54 ^ 0x42;
    bRam0000000100e11475 = bRam0000000100e10e55 ^ 0xb3;
    bRam0000000100e11476 = bRam0000000100e10e56 ^ 0xca;
    bRam0000000100e11477 = bRam0000000100e10e57 ^ 0x71;
    cRam0000000100e11478 = bRam0000000100e10e58 + (bRam0000000100e10e58 & 0x2f) * -2 + -0x51;
    bRam0000000100e11479 = bRam0000000100e10e59 ^ 0x39;
    bRam0000000100e1147a = bRam0000000100e10e5a ^ 0xab;
    bRam0000000100e1147b = ~((bRam0000000100e10e5b | 0xa3) & (bRam0000000100e10e5b ^ 0xff | 0x5c));
    bRam0000000100e1147c = bRam0000000100e10e5c ^ 0xb2;
    bRam0000000100e1147d = bRam0000000100e10e5d ^ 0x8d;
    bRam0000000100e1147e = bRam0000000100e10e5e ^ 0xf3;
    bRam0000000100e1147f = bRam0000000100e10e5f ^ 0x9a;
    bRam0000000100e11480 = bRam0000000100e10e60 ^ 0xba;
    cRam0000000100e11481 = bRam0000000100e10e61 + (bRam0000000100e10e61 & 0x24) * -2 + '$';
    bRam0000000100e11482 = bRam0000000100e10e62 ^ 0x14;
    bRam0000000100e11483 = bRam0000000100e10e63 ^ 0x49;
    bRam0000000100e11484 = bRam0000000100e10e64 ^ 0xb9;
    bRam0000000100e11485 = bRam0000000100e10e65 ^ 0xf;
    bRam0000000100e11486 = bRam0000000100e10e66 ^ 0xda;
    cRam0000000100e11487 = bRam0000000100e10e67 + (bRam0000000100e10e67 & 0x68) * -2 + -0x18;
    bRam0000000100e11488 = bRam0000000100e10e68 ^ 0x16;
    bRam0000000100e11489 = bRam0000000100e10e69 ^ 0xb;
    bRam0000000100e1148a = bRam0000000100e10e6a ^ 0xe2;
    bRam0000000100e1148b = bRam0000000100e10e6b ^ 0xb3;
    bRam0000000100e1148c = bRam0000000100e10e6c ^ 0x58;
    cRam0000000100e1148d = bRam0000000100e10e6d + (bRam0000000100e10e6d & 0x36) * -2 + -0x4a;
    bRam0000000100e1148e = bRam0000000100e10e6e ^ 0x57;
    bRam0000000100e1148f = bRam0000000100e10e6f ^ 0xa0;
    uRam0000000100e11270 =
         CONCAT17((byte)((ulong)uRam0000000100e10c50 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bba8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10c50 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bba8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10c50 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bba8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10c50 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bba8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10c50 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bba8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10c50 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bba8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10c50 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bba8 >> 8),
                                                  (byte)uRam0000000100e10c50 ^ (byte)_UNK_10099bba8)
                                                  ))))));
    cRam0000000100e11490 = bRam0000000100e10e70 + (bRam0000000100e10e70 & 6) * -2 + '\x06';
    cRam0000000100e11491 = bRam0000000100e10e71 + (bRam0000000100e10e71 & 6) * -2 + '\x06';
    uRam0000000100e11492 =
         CONCAT17((byte)((ulong)uRam0000000100e10e72 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e72 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e72 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e72 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e72 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e72 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e72 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc58 >> 8),
                                                  (byte)uRam0000000100e10e72 ^ (byte)_UNK_10099bc58)
                                                  ))))));
    bRam0000000100e1149a = bRam0000000100e10e7a ^ 2;
    bRam0000000100e1149b = bRam0000000100e10e7b ^ 0xaa;
    cRam0000000100e1149c = bRam0000000100e10e7c + (bRam0000000100e10e7c & 0x18) * -2 + '\x18';
    cRam0000000100e1149d = bRam0000000100e10e7d + (bRam0000000100e10e7d & 0xcc) * -2 + -0x34;
    bRam0000000100e1149e = bRam0000000100e10e7e ^ 0x90;
    bRam0000000100e1149f = bRam0000000100e10e7f ^ 0x43;
    bRam0000000100e114a0 = bRam0000000100e10e80 ^ 0x52;
    cRam0000000100e114a1 = bRam0000000100e10e81 + (bRam0000000100e10e81 & 0x3c) * -2 + '<';
    bRam0000000100e114a2 = bRam0000000100e10e82 ^ 7;
    cRam0000000100e114a3 = bRam0000000100e10e83 + (bRam0000000100e10e83 & 0xe7) * -2 + -0x19;
    bRam0000000100e114a4 = bRam0000000100e10e84 ^ 0x23;
    bRam0000000100e114a5 = bRam0000000100e10e85 ^ 0x13;
    bRam0000000100e114a6 = ~((bRam0000000100e10e86 | 0x3e) & (~bRam0000000100e10e86 | 0xc1));
    uRam0000000100e114a7 =
         CONCAT17((byte)((ulong)uRam0000000100e10e87 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e87 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e87 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e87 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e87 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e87 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e87 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc60 >> 8),
                                                  (byte)uRam0000000100e10e87 ^ (byte)_UNK_10099bc60)
                                                  ))))));
    bRam0000000100e114af = bRam0000000100e10e8f ^ 0xf9;
    cRam0000000100e114b0 = bRam0000000100e10e90 + (bRam0000000100e10e90 & 0x48) * -2 + 'H';
    bRam0000000100e114b1 = bRam0000000100e10e91 ^ 0xfb;
    cRam0000000100e114b2 = bRam0000000100e10e92 + (bRam0000000100e10e92 & 0xaa) * -2 + -0x56;
    cRam0000000100e114b3 = bRam0000000100e10e93 + (bRam0000000100e10e93 & 0x20) * -2 + ' ';
    cRam0000000100e114b4 = bRam0000000100e10e94 + (bRam0000000100e10e94 & 0x57) * -2 + 'W';
    bRam0000000100e114b5 = bRam0000000100e10e95 ^ 0x3e;
    bRam0000000100e114b6 = bRam0000000100e10e96 ^ 0x40;
    bRam0000000100e114b7 = ~((bRam0000000100e10e97 | 0x10) & (~bRam0000000100e10e97 | 0xef));
    bRam0000000100e114c8 = bRam0000000100e10ea8 ^ 0x7b;
    bRam0000000100e114c9 = ~((bRam0000000100e10ea9 | 0xe7) & (~bRam0000000100e10ea9 | 0x18));
    bRam0000000100e114ca = bRam0000000100e10eaa ^ 0x24;
    bRam0000000100e114cb = bRam0000000100e10eab ^ 0x10;
    bRam0000000100e114cc = bRam0000000100e10eac ^ 0x15;
    bRam0000000100e114cd = bRam0000000100e10ead ^ 1;
    bRam0000000100e114ce = bRam0000000100e10eae ^ 0x14;
    bRam0000000100e114cf = bRam0000000100e10eaf ^ 0x66;
    bRam0000000100e114d0 = bRam0000000100e10eb0 ^ 0xf1;
    cRam0000000100e114d1 = bRam0000000100e10eb1 + (bRam0000000100e10eb1 & 0x6b) * -2 + 'k';
    uRam0000000100e114d2 =
         CONCAT17((byte)((ulong)uRam0000000100e10eb2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc78 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10eb2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc78 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10eb2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc78 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10eb2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc78 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10eb2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc78 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10eb2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc78 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10eb2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc78 >> 8),
                                                  (byte)uRam0000000100e10eb2 ^ (byte)_UNK_10099bc78)
                                                  ))))));
    bRam0000000100e114da = bRam0000000100e10eba ^ 0x25;
    bRam0000000100e114db = bRam0000000100e10ebb ^ 10;
    bRam0000000100e114dc = bRam0000000100e10ebc ^ 0xb5;
    bRam0000000100e114dd = bRam0000000100e10ebd ^ 0x3c;
    cRam0000000100e114de = bRam0000000100e10ebe + (bRam0000000100e10ebe & 0x23) * -2 + -0x5d;
    uRam0000000100e114df =
         CONCAT17((byte)((ulong)uRam0000000100e10ebf >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc80 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ebf >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc80 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ebf >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc80 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ebf >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc80 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ebf >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc80 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ebf >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc80 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ebf >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc80 >> 8),
                                                  (byte)uRam0000000100e10ebf ^ (byte)_UNK_10099bc80)
                                                  ))))));
    uRam0000000100e114e7 =
         CONCAT17((byte)((ulong)uRam0000000100e10ec7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc88 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ec7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc88 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ec7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc88 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ec7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc88 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ec7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc88 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ec7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc88 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ec7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc88 >> 8),
                                                  (byte)uRam0000000100e10ec7 ^ (byte)_UNK_10099bc88)
                                                  ))))));
    uRam0000000100e114ef =
         CONCAT17((byte)((ulong)uRam0000000100e10ecf >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ecf >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ecf >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ecf >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ecf >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ecf >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ecf >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc90 >> 8),
                                                  (byte)uRam0000000100e10ecf ^ (byte)_UNK_10099bc90)
                                                  ))))));
    uRam0000000100e114f7 =
         CONCAT17((byte)((ulong)uRam0000000100e10ed7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ed7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ed7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ed7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ed7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ed7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ed7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc98 >> 8),
                                                  (byte)uRam0000000100e10ed7 ^ (byte)_UNK_10099bc98)
                                                  ))))));
    bRam0000000100e114ff = bRam0000000100e10edf ^ 0xd7;
    cRam0000000100e11500 = bRam0000000100e10ee0 + (bRam0000000100e10ee0 & 0xaa) * -2 + -0x56;
    bRam0000000100e11501 = bRam0000000100e10ee1 ^ 0x67;
    bRam0000000100e11502 = ~((bRam0000000100e10ee2 | 100) & (bRam0000000100e10ee2 ^ 0xff | 0x9b));
    uRam0000000100e11503 =
         CONCAT17((byte)((ulong)uRam0000000100e10ee3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bca0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ee3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bca0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ee3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bca0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ee3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bca0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ee3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bca0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ee3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bca0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ee3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bca0 >> 8),
                                                  (byte)uRam0000000100e10ee3 ^ (byte)_UNK_10099bca0)
                                                  ))))));
    uRam0000000100e1150b =
         CONCAT17((byte)((ulong)uRam0000000100e10eeb >> 0x38) ^
                  (byte)((ulong)_UNK_10099bca8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10eeb >> 0x30) ^
                           (byte)((ulong)_UNK_10099bca8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10eeb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bca8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10eeb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bca8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10eeb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bca8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10eeb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bca8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10eeb >> 8) ^
                                                  (byte)((ulong)_UNK_10099bca8 >> 8),
                                                  (byte)uRam0000000100e10eeb ^ (byte)_UNK_10099bca8)
                                                  ))))));
    bRam0000000100e11513 = bRam0000000100e10ef3 ^ 0x6c;
    bRam0000000100e11514 = bRam0000000100e10ef4 ^ 4;
    bRam0000000100e11515 = bRam0000000100e10ef5 ^ 0xcc;
    bRam0000000100e11516 = bRam0000000100e10ef6 ^ 0xb9;
    cRam0000000100e11517 = bRam0000000100e10ef7 + (bRam0000000100e10ef7 & 0x13) * -2 + '\x13';
    bRam0000000100e11520 = bRam0000000100e10f00 ^ 0xd4;
    bRam0000000100e11521 = bRam0000000100e10f01 ^ 0x74;
    cRam0000000100e11522 = bRam0000000100e10f02 + (bRam0000000100e10f02 & 0xbb) * -2 + -0x45;
    cRam0000000100e11523 = bRam0000000100e10f03 + (bRam0000000100e10f03 & 0x6b) * -2 + -0x15;
    bRam0000000100e11524 = bRam0000000100e10f04 ^ 0x13;
    bRam0000000100e11525 = bRam0000000100e10f05 ^ 0x2b;
    cRam0000000100e11526 = bRam0000000100e10f06 + (bRam0000000100e10f06 & 0x33) * -2 + '3';
    bRam0000000100e11527 = bRam0000000100e10f07 ^ 0xe0;
    bRam0000000100e11528 = bRam0000000100e10f08 ^ 0xb9;
    bRam0000000100e11529 = bRam0000000100e10f09 ^ 0xd7;
    bRam0000000100e1152a = bRam0000000100e10f0a ^ 0xb2;
    bRam0000000100e1152b = bRam0000000100e10f0b ^ 0x87;
    cRam0000000100e1152c = bRam0000000100e10f0c + (bRam0000000100e10f0c & 0x1c) * -2 + '\x1c';
    bRam0000000100e1152d = ~bRam0000000100e10f0d;
    bRam0000000100e1152e = bRam0000000100e10f0e ^ 0x95;
    cRam0000000100e1152f = bRam0000000100e10f0f + (bRam0000000100e10f0f & 0xfb) * -2 + -5;
    bRam0000000100e11530 = bRam0000000100e10f10 ^ 0x79;
    bRam0000000100e11531 = ~((bRam0000000100e10f11 | 0x8b) & (bRam0000000100e10f11 ^ 0xff | 0x74));
    bRam0000000100e11532 = bRam0000000100e10f12 ^ 0xae;
    bRam0000000100e11533 = bRam0000000100e10f13 ^ 0x49;
    bRam0000000100e11534 = bRam0000000100e10f14 ^ 0x3d;
    cRam0000000100e11535 = bRam0000000100e10f15 + (bRam0000000100e10f15 & 0x31) * -2 + -0x4f;
    cRam0000000100e11536 = bRam0000000100e10f16 + (bRam0000000100e10f16 & 0x21) * -2 + '!';
    bRam0000000100e11537 = bRam0000000100e10f17 ^ 0x3c;
    bRam0000000100e11538 = bRam0000000100e10f18 ^ 0xb3;
    bRam0000000100e11539 = bRam0000000100e10f19 ^ 0x96;
    bRam0000000100e1153a = bRam0000000100e10f1a ^ 0xed;
    bRam0000000100e1153b = bRam0000000100e10f1b ^ 0x3d;
    bRam0000000100e1153c = bRam0000000100e10f1c ^ 0xeb;
    bRam0000000100e1153d = bRam0000000100e10f1d ^ 0x81;
    cRam0000000100e1153e = bRam0000000100e10f1e + (bRam0000000100e10f1e & 2) * -2 + '\x02';
    cRam0000000100e1153f = bRam0000000100e10f1f + (bRam0000000100e10f1f & 0xcf) * -2 + -0x31;
    bRam0000000100e11540 = bRam0000000100e10f20 ^ 0x29;
    bRam0000000100e11541 = bRam0000000100e10f21 ^ 0x9c;
    uRam0000000100e11518 =
         CONCAT17((byte)((ulong)uRam0000000100e10ef8 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcb0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ef8 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcb0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ef8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcb0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ef8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcb0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ef8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcb0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ef8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcb0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ef8 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcb0 >> 8),
                                                  (byte)uRam0000000100e10ef8 ^ (byte)_UNK_10099bcb0)
                                                  ))))));
    bRam0000000100e11542 = bRam0000000100e10f22 ^ 0xf2;
    bRam0000000100e11543 = bRam0000000100e10f23 ^ 0x40;
    bRam0000000100e11544 = bRam0000000100e10f24 ^ 0x4d;
    bRam0000000100e11545 = bRam0000000100e10f25 ^ 0xfb;
    cRam0000000100e11546 = bRam0000000100e10f26 + (bRam0000000100e10f26 & 0x57) * -2 + -0x29;
    bRam0000000100e11547 = bRam0000000100e10f27 ^ 1;
    cRam0000000100e11548 = bRam0000000100e10f28 + (bRam0000000100e10f28 & 0x20) * -2 + ' ';
    uRam0000000100e11549 =
         CONCAT17((byte)((ulong)uRam0000000100e10f29 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcb8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10f29 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcb8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10f29 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcb8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10f29 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcb8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10f29 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcb8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10f29 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcb8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10f29 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcb8 >> 8),
                                                  (byte)uRam0000000100e10f29 ^ (byte)_UNK_10099bcb8)
                                                  ))))));
    bRam0000000100e11551 = bRam0000000100e10f31 ^ 0x99;
    bRam0000000100e11552 = bRam0000000100e10f32 ^ 0x41;
    bRam0000000100e11553 = bRam0000000100e10f33 ^ 0x11;
    bRam0000000100e11554 = bRam0000000100e10f34 ^ 0x22;
    bRam0000000100e11555 = bRam0000000100e10f35 ^ 0x93;
    cRam0000000100e11556 = bRam0000000100e10f36 + (bRam0000000100e10f36 & 0x6a) * -2 + -0x16;
    cRam0000000100e11557 = bRam0000000100e10f37 + (bRam0000000100e10f37 & 0xef) * -2 + -0x11;
    bRam0000000100e11558 = bRam0000000100e10f38 ^ 0x1b;
    bRam0000000100e11559 = bRam0000000100e10f39 ^ 0x87;
    bRam0000000100e1155a = bRam0000000100e10f3a ^ 0xe6;
    cRam0000000100e1155b = bRam0000000100e10f3b + (bRam0000000100e10f3b & 0x13) * -2 + -0x6d;
    bRam0000000100e1155c = bRam0000000100e10f3c ^ 0xd3;
    bRam0000000100e1155d = bRam0000000100e10f3d ^ 0xaa;
    bRam0000000100e1155e = bRam0000000100e10f3e ^ 0xa5;
    cRam0000000100e1155f = bRam0000000100e10f3f + (bRam0000000100e10f3f & 0x48) * -2 + 'H';
    bRam0000000100e11560 = bRam0000000100e10f40 ^ 0x2d;
    bRam0000000100e11561 = bRam0000000100e10f41 ^ 0x2f;
    bRam0000000100e11562 = bRam0000000100e10f42 ^ 0xc9;
    bRam0000000100e11563 = bRam0000000100e10f43 ^ 0x8a;
    bRam0000000100e11564 = bRam0000000100e10f44 ^ 0xf8;
    cRam0000000100e11565 = bRam0000000100e10f45 + (bRam0000000100e10f45 & 0xee) * -2 + 'n';
    bRam0000000100e11566 = bRam0000000100e10f46 ^ 0x44;
    cRam0000000100e11567 = bRam0000000100e10f47 + (bRam0000000100e10f47 & 0x2c) * -2 + -0x54;
    bRam0000000100e11570 = bRam0000000100e10f50 ^ 0x8c;
    uRam0000000100e114b8 =
         CONCAT17((byte)((ulong)uRam0000000100e10e98 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc68 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e98 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc68 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e98 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc68 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e98 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc68 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e98 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e98 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc68 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e98 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc68 >> 8),
                                                  (byte)uRam0000000100e10e98 ^ (byte)_UNK_10099bc68)
                                                  ))))));
    uRam0000000100e114c0 =
         CONCAT17((byte)((ulong)uRam0000000100e10ea0 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc70 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ea0 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc70 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ea0 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc70 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ea0 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc70 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ea0 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ea0 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc70 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ea0 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc70 >> 8),
                                                  (byte)uRam0000000100e10ea0 ^ (byte)_UNK_10099bc70)
                                                  ))))));
    bRam0000000100e11571 = bRam0000000100e10f51 ^ 0x19;
    bRam0000000100e11572 = bRam0000000100e10f52 ^ 0xde;
    cRam0000000100e11573 = bRam0000000100e10f53 + (bRam0000000100e10f53 & 0x3c) * -2 + '<';
    cRam0000000100e11574 = bRam0000000100e10f54 + (bRam0000000100e10f54 & 0xf7) * -2 + 'w';
    uRam0000000100e11575 =
         CONCAT17((byte)((ulong)uRam0000000100e10f55 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcc8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10f55 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcc8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10f55 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcc8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10f55 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcc8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10f55 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcc8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10f55 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcc8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10f55 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcc8 >> 8),
                                                  (byte)uRam0000000100e10f55 ^ (byte)_UNK_10099bcc8)
                                                  ))))));
    bRam0000000100e1157d = bRam0000000100e10f5d ^ 0x1c;
    bRam0000000100e1157e = bRam0000000100e10f5e ^ 0x99;
    bRam0000000100e1157f = bRam0000000100e10f5f ^ 0xf2;
    bRam0000000100e11580 = bRam0000000100e10f60 ^ 0x69;
    bRam0000000100e11581 = bRam0000000100e10f61 ^ 0xb7;
    cRam0000000100e11582 = bRam0000000100e10f62 + (bRam0000000100e10f62 & 0x2c) * -2 + -0x54;
    cRam0000000100e11583 = bRam0000000100e10f63 + (bRam0000000100e10f63 & 0x3c) * -2 + -0x44;
    bRam0000000100e11584 = bRam0000000100e10f64 ^ 0xa4;
    bRam0000000100e11585 = bRam0000000100e10f65 ^ 0xaf;
    bRam0000000100e11586 = ~((bRam0000000100e10f66 | 0x76) & (bRam0000000100e10f66 ^ 0xff | 0x89));
    cRam0000000100e11587 = bRam0000000100e10f67 + (bRam0000000100e10f67 & 0xbb) * -2 + -0x45;
    bRam0000000100e11588 = bRam0000000100e10f68 ^ 0x6e;
    cRam0000000100e11589 = bRam0000000100e10f69 + (bRam0000000100e10f69 & 0x3f) * -2 + -0x41;
    cRam0000000100e1158a = bRam0000000100e10f6a + (bRam0000000100e10f6a & 0x58) * -2 + 'X';
    bRam0000000100e1158b = bRam0000000100e10f6b ^ 0x6a;
    bRam0000000100e1158c = ~((bRam0000000100e10f6c | 0xe4) & (bRam0000000100e10f6c ^ 0xff | 0x1b));
    bRam0000000100e1158d = bRam0000000100e10f6d ^ 0x92;
    bRam0000000100e1158e = bRam0000000100e10f6e ^ 0x3e;
    bRam0000000100e1158f = bRam0000000100e10f6f ^ 0x97;
    bRam0000000100e11590 = bRam0000000100e10f70 ^ 7;
    bRam0000000100e11591 = bRam0000000100e10f71 ^ 0x74;
    cRam0000000100e11592 = bRam0000000100e10f72 + (bRam0000000100e10f72 & 0x16) * -2 + -0x6a;
    bRam0000000100e11593 = bRam0000000100e10f73 ^ 0x86;
    bRam0000000100e11594 = bRam0000000100e10f74 ^ 0x9a;
    bRam0000000100e11595 = bRam0000000100e10f75 ^ 0x41;
    bRam0000000100e11596 = bRam0000000100e10f76 ^ 0xe0;
    bRam0000000100e11597 = bRam0000000100e10f77 ^ 0xaf;
    bRam0000000100e11598 = bRam0000000100e10f78 ^ 0x71;
    bRam0000000100e11599 = bRam0000000100e10f79 ^ 0x9f;
    cRam0000000100e1159a = bRam0000000100e10f7a + (bRam0000000100e10f7a & 0x21) * -2 + -0x5f;
    bRam0000000100e1159b = bRam0000000100e10f7b ^ 0x3f;
    bRam0000000100e1159c = bRam0000000100e10f7c ^ 0x9a;
    bRam0000000100e1159d = bRam0000000100e10f7d ^ 0x89;
    bRam0000000100e1159e = bRam0000000100e10f7e ^ 0x19;
    cRam0000000100e1159f = bRam0000000100e10f7f + (bRam0000000100e10f7f & 0x31) * -2 + '1';
    bRam0000000100e115a0 = bRam0000000100e10f80 ^ 0xfd;
    cRam0000000100e115a1 = bRam0000000100e10f81 + (bRam0000000100e10f81 & 0xcf) * -2 + -0x31;
    bRam0000000100e115a2 = bRam0000000100e10f82 ^ 0xdd;
    bRam0000000100e115a3 = bRam0000000100e10f83 ^ 0xae;
    bRam0000000100e115a4 = bRam0000000100e10f84 ^ 0xf;
    bRam0000000100e115a5 = bRam0000000100e10f85 ^ 0x3b;
    bRam0000000100e115a6 = bRam0000000100e10f86 ^ 0x25;
    bRam0000000100e115a7 = bRam0000000100e10f87 ^ 0x5e;
    cRam0000000100e115a8 = bRam0000000100e10f88 + (bRam0000000100e10f88 & 0x5c) * -2 + '\\';
    uRam0000000100e115a9 = uRam0000000100e10f89;
    bRam0000000100e115aa = bRam0000000100e10f8a ^ 0xdd;
    cRam0000000100e115ab = cRam0000000100e10f8b - (cRam0000000100e10f8b << 1 | 2U);
    bRam0000000100e115ac = bRam0000000100e10f8c ^ 0x7a;
    cRam0000000100e115ad = bRam0000000100e10f8d + (bRam0000000100e10f8d & 6) * -2 + -0x7a;
    cRam0000000100e115ae = bRam0000000100e10f8e + (bRam0000000100e10f8e & 100) * -2 + -0x1c;
    bRam0000000100e115af = bRam0000000100e10f8f ^ 0x50;
    bRam0000000100e115b0 = bRam0000000100e10f90 ^ 0xef;
    bRam0000000100e115b1 = bRam0000000100e10f91 ^ 0x41;
    cRam0000000100e115b2 = bRam0000000100e10f92 + (bRam0000000100e10f92 & 0x2b) * -2 + -0x55;
    uRam0000000100e115b3 =
         CONCAT17((byte)((ulong)uRam0000000100e10f93 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcd0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10f93 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcd0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10f93 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcd0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10f93 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcd0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10f93 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcd0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10f93 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcd0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10f93 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcd0 >> 8),
                                                  (byte)uRam0000000100e10f93 ^ (byte)_UNK_10099bcd0)
                                                  ))))));
    bRam0000000100e115bb = bRam0000000100e10f9b ^ 0x41;
    bRam0000000100e115bc = bRam0000000100e10f9c ^ 0xb0;
    cRam0000000100e115bd = bRam0000000100e10f9d + (bRam0000000100e10f9d & 0xdd) * -2 + ']';
    bRam0000000100e115be = bRam0000000100e10f9e ^ 0x38;
    bRam0000000100e115bf = bRam0000000100e10f9f ^ 0x93;
    bRam0000000100e115c0 = bRam0000000100e10fa0 ^ 0x88;
    bRam0000000100e115c1 = bRam0000000100e10fa1 ^ 0xa4;
    bRam0000000100e115c2 = bRam0000000100e10fa2 ^ 0x77;
    bRam0000000100e115c3 = bRam0000000100e10fa3 ^ 2;
    bRam0000000100e115c4 = bRam0000000100e10fa4 ^ 0x3a;
    bRam0000000100e115c5 = ~((bRam0000000100e10fa5 | 0xbb) & (~bRam0000000100e10fa5 | 0x44));
    bRam0000000100e115c6 = bRam0000000100e10fa6 ^ 0x9f;
    bRam0000000100e115c7 = bRam0000000100e10fa7 ^ 0x81;
    bRam0000000100e115c8 = bRam0000000100e10fa8 ^ 0xc4;
    bRam0000000100e115c9 = bRam0000000100e10fa9 ^ 0x58;
    bRam0000000100e115ca = bRam0000000100e10faa ^ 0x48;
    bRam0000000100e115cb = bRam0000000100e10fab ^ 5;
    cRam0000000100e115cc = bRam0000000100e10fac + (bRam0000000100e10fac & 0x3f) * -2 + -0x41;
    bRam0000000100e115cd = bRam0000000100e10fad ^ 0xd8;
    bRam0000000100e115ce = bRam0000000100e10fae ^ 0x8d;
    bRam0000000100e115cf = bRam0000000100e10faf ^ 0x25;
    bRam0000000100e115d0 = bRam0000000100e10fb0 ^ 0x99;
    bRam0000000100e115d1 = ~((bRam0000000100e10fb1 | 8) & (~bRam0000000100e10fb1 | 0xf7));
    bRam0000000100e115d2 = bRam0000000100e10fb2 ^ 0x9b;
    bRam0000000100e115d3 = bRam0000000100e10fb3 ^ 0x59;
    bRam0000000100e115d4 = bRam0000000100e10fb4 ^ 0x67;
    uRam0000000100e11440 =
         CONCAT17((byte)((ulong)uRam0000000100e10e20 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bc40 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10e20 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bc40 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10e20 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bc40 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10e20 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bc40 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10e20 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bc40 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10e20 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bc40 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10e20 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bc40 >> 8),
                                                  (byte)uRam0000000100e10e20 ^ (byte)_UNK_10099bc40)
                                                  ))))));
    cRam0000000100e115d5 = bRam0000000100e10fb5 + (bRam0000000100e10fb5 & 0x62) * -2 + -0x1e;
    cRam0000000100e115d6 = bRam0000000100e10fb6 + (bRam0000000100e10fb6 & 0x46) * -2 + 'F';
    bRam0000000100e115d7 = bRam0000000100e10fb7 ^ 0x88;
    bRam0000000100e115d8 = bRam0000000100e10fb8 ^ 0x43;
    bRam0000000100e115d9 = bRam0000000100e10fb9 ^ 0x86;
    bRam0000000100e115da = bRam0000000100e10fba ^ 0x3e;
    bRam0000000100e115db = bRam0000000100e10fbb ^ 0xc3;
    bRam0000000100e115dc = bRam0000000100e10fbc ^ 0xc1;
    bRam0000000100e115dd = bRam0000000100e10fbd ^ 0xb0;
    cRam0000000100e115de = bRam0000000100e10fbe + (bRam0000000100e10fbe & 0x22) * -2 + -0x5e;
    uRam0000000100e115df =
         CONCAT17((byte)((ulong)uRam0000000100e10fbf >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcd8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10fbf >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcd8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10fbf >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcd8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10fbf >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcd8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10fbf >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcd8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10fbf >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcd8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10fbf >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcd8 >> 8),
                                                  (byte)uRam0000000100e10fbf ^ (byte)_UNK_10099bcd8)
                                                  ))))));
    bRam0000000100e115e7 = bRam0000000100e10fc7 ^ 0x68;
    cRam0000000100e115e8 = bRam0000000100e10fc8 + (bRam0000000100e10fc8 & 0x57) * -2 + 'W';
    bRam0000000100e115e9 = bRam0000000100e10fc9 ^ 0xf6;
    bRam0000000100e115ea = bRam0000000100e10fca ^ 0xd7;
    cRam0000000100e115eb = bRam0000000100e10fcb + (bRam0000000100e10fcb & 0xaa) * -2 + -0x56;
    cRam0000000100e115ec = bRam0000000100e10fcc + (bRam0000000100e10fcc & 0x7a) * -2 + -6;
    cRam0000000100e115ed = bRam0000000100e10fcd + (bRam0000000100e10fcd & 0x5b) * -2 + '[';
    bRam0000000100e115ee = bRam0000000100e10fce ^ 0x52;
    bRam0000000100e115ef = bRam0000000100e10fcf ^ 0x1e;
    bRam0000000100e115f0 = bRam0000000100e10fd0 ^ 0xed;
    cRam0000000100e115f1 = bRam0000000100e10fd1 + (bRam0000000100e10fd1 & 0x5e) * -2 + '^';
    uRam0000000100e115f2 =
         CONCAT17((byte)((ulong)uRam0000000100e10fd2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bce0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10fd2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bce0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10fd2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bce0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10fd2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bce0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10fd2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bce0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10fd2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bce0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10fd2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bce0 >> 8),
                                                  (byte)uRam0000000100e10fd2 ^ (byte)_UNK_10099bce0)
                                                  ))))));
    bRam0000000100e115fa = bRam0000000100e10fda ^ 0xa6;
    bRam0000000100e115fb = bRam0000000100e10fdb ^ 0x25;
    bRam0000000100e115fc = bRam0000000100e10fdc ^ 0x4c;
    bRam0000000100e115fd = bRam0000000100e10fdd ^ 0x18;
    cRam0000000100e115fe = bRam0000000100e10fde + (bRam0000000100e10fde & 0x23) * -2 + '#';
    bRam0000000100e115ff = bRam0000000100e10fdf ^ 0x87;
    bRam0000000100e11600 = bRam0000000100e10fe0 ^ 0xa4;
    bRam0000000100e11601 = bRam0000000100e10fe1 ^ 0x80;
    cRam0000000100e11602 = bRam0000000100e10fe2 + (bRam0000000100e10fe2 & 0x6a) * -2 + 'j';
    uRam0000000100e11603 =
         CONCAT17((byte)((ulong)uRam0000000100e10fe3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bce8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10fe3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bce8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10fe3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bce8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10fe3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bce8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10fe3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bce8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10fe3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bce8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10fe3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bce8 >> 8),
                                                  (byte)uRam0000000100e10fe3 ^ (byte)_UNK_10099bce8)
                                                  ))))));
    cRam0000000100e1160b = bRam0000000100e10feb + (bRam0000000100e10feb & 0x38) * -2 + '8';
    bRam0000000100e1160c = bRam0000000100e10fec ^ 0x7a;
    bRam0000000100e1160d = bRam0000000100e10fed ^ 0x4c;
    bRam0000000100e1160e = bRam0000000100e10fee ^ 0x27;
    bRam0000000100e1160f = bRam0000000100e10fef ^ 0xeb;
    bRam0000000100e11610 = bRam0000000100e10ff0 ^ 0x24;
    cRam0000000100e11611 = bRam0000000100e10ff1 + (bRam0000000100e10ff1 & 6) * -2 + '\x06';
    bRam0000000100e11612 = ~((bRam0000000100e10ff2 | 0x8a) & (bRam0000000100e10ff2 ^ 0xff | 0x75));
    uRam0000000100e11613 =
         CONCAT17((byte)((ulong)uRam0000000100e10ff3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcf0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10ff3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcf0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10ff3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcf0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10ff3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcf0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10ff3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcf0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10ff3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcf0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10ff3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcf0 >> 8),
                                                  (byte)uRam0000000100e10ff3 ^ (byte)_UNK_10099bcf0)
                                                  ))))));
    cRam0000000100e1161b = bRam0000000100e10ffb + (bRam0000000100e10ffb & 0x30) * -2 + '0';
    bRam0000000100e1161c = bRam0000000100e10ffc ^ 0x22;
    bRam0000000100e1161d = bRam0000000100e10ffd ^ 199;
    bRam0000000100e1161e = bRam0000000100e10ffe ^ 0xaf;
    bRam0000000100e1161f = bRam0000000100e10fff ^ 0x19;
    cRam0000000100e11620 = bRam0000000100e11000 + (bRam0000000100e11000 & 0x7a) * -2 + -6;
    cRam0000000100e11621 = bRam0000000100e11001 + (bRam0000000100e11001 & 0x44) * -2 + 'D';
    cRam0000000100e11622 = bRam0000000100e11002 + (bRam0000000100e11002 & 0x3d) * -2 + -0x43;
    bRam0000000100e11623 = bRam0000000100e11003 ^ 0x7b;
    cRam0000000100e11624 = bRam0000000100e11004 + (bRam0000000100e11004 & 0x1b) * -2 + '\x1b';
    bRam0000000100e11625 = bRam0000000100e11005 ^ 0x76;
    cRam0000000100e11626 = bRam0000000100e11006 + (bRam0000000100e11006 & 0x11) * -2 + -0x6f;
    bRam0000000100e11627 = bRam0000000100e11007 ^ 0x7f;
    bRam0000000100e11628 = bRam0000000100e11008 ^ 0x3c;
    bRam0000000100e11629 = bRam0000000100e11009 ^ 0x17;
    cRam0000000100e1162a = bRam0000000100e1100a + (bRam0000000100e1100a & 0x37) * -2 + -0x49;
    cRam0000000100e1162b = bRam0000000100e1100b + (bRam0000000100e1100b & 0xcf) * -2 + -0x31;
    cRam0000000100e1162c = bRam0000000100e1100c + (bRam0000000100e1100c & 0x15) * -2 + -0x6b;
    bRam0000000100e1162d = bRam0000000100e1100d ^ 0xfd;
    bRam0000000100e1162e = bRam0000000100e1100e ^ 0xf7;
    bRam0000000100e1162f = bRam0000000100e1100f ^ 0x1a;
    bRam0000000100e11630 = bRam0000000100e11010 ^ 0x71;
    bRam0000000100e11631 = bRam0000000100e11011 ^ 0xc9;
    cRam0000000100e11632 = bRam0000000100e11012 + (bRam0000000100e11012 & 0x34) * -2 + -0x4c;
    bRam0000000100e11633 = bRam0000000100e11013 ^ 0x3e;
    bRam0000000100e11634 = bRam0000000100e11014 ^ 0x8e;
    bRam0000000100e11635 = bRam0000000100e11015 ^ 0x96;
    cRam0000000100e11636 = bRam0000000100e11016 + (bRam0000000100e11016 & 0xf9) * -2 + -7;
    uRam0000000100e11637 =
         CONCAT17((byte)((ulong)uRam0000000100e11017 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcf8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11017 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcf8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11017 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcf8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11017 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcf8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11017 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcf8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11017 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcf8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11017 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcf8 >> 8),
                                                  (byte)uRam0000000100e11017 ^ (byte)_UNK_10099bcf8)
                                                  ))))));
    uRam0000000100e1163f =
         CONCAT17((byte)((ulong)uRam0000000100e1101f >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1101f >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1101f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1101f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1101f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1101f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1101f >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd00 >> 8),
                                                  (byte)uRam0000000100e1101f ^ (byte)_UNK_10099bd00)
                                                  ))))));
    bRam0000000100e11647 = bRam0000000100e11027 ^ 0x7f;
    bRam0000000100e11648 = bRam0000000100e11028 ^ 0xcf;
    bRam0000000100e11649 = bRam0000000100e11029 ^ 0xa5;
    bRam0000000100e1164a = bRam0000000100e1102a ^ 0x5f;
    bRam0000000100e1164b = bRam0000000100e1102b ^ 0x9c;
    cRam0000000100e1164c = bRam0000000100e1102c + (bRam0000000100e1102c & 8) * -2 + '\b';
    bRam0000000100e1164d = bRam0000000100e1102d ^ 0xb0;
    bRam0000000100e1164e = bRam0000000100e1102e ^ 0xb2;
    bRam0000000100e1164f = bRam0000000100e1102f ^ 0x70;
    cRam0000000100e11650 = bRam0000000100e11030 + (bRam0000000100e11030 & 0x3f) * -2 + '?';
    bRam0000000100e11651 = bRam0000000100e11031 ^ 0x7f;
    bRam0000000100e11652 = bRam0000000100e11032 ^ 0x5f;
    cRam0000000100e11653 = bRam0000000100e11033 + (bRam0000000100e11033 & 0x26) * -2 + -0x5a;
    bRam0000000100e11654 = bRam0000000100e11034 ^ 0x1c;
    bRam0000000100e11655 = bRam0000000100e11035 ^ 0x21;
    bRam0000000100e11656 = bRam0000000100e11036 ^ 0x7c;
    bRam0000000100e11657 = bRam0000000100e11037 ^ 0x55;
    bRam0000000100e11658 = ~((bRam0000000100e11038 | 199) & (~bRam0000000100e11038 | 0x38));
    uRam0000000100e11659 =
         CONCAT17((byte)((ulong)uRam0000000100e11039 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11039 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11039 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11039 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11039 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11039 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11039 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd08 >> 8),
                                                  (byte)uRam0000000100e11039 ^ (byte)_UNK_10099bd08)
                                                  ))))));
    cRam0000000100e11661 = bRam0000000100e11041 + (bRam0000000100e11041 & 0x57) * -2 + -0x29;
    bRam0000000100e11662 = bRam0000000100e11042 ^ 0xa2;
    cRam0000000100e11663 = bRam0000000100e11043 + (bRam0000000100e11043 & 0x24) * -2 + '$';
    cRam0000000100e11664 = bRam0000000100e11044 + (bRam0000000100e11044 & 0x11) * -2 + '\x11';
    uRam0000000100e11665 =
         CONCAT17((byte)((ulong)uRam0000000100e11045 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11045 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11045 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11045 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11045 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11045 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11045 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd10 >> 8),
                                                  (byte)uRam0000000100e11045 ^ (byte)_UNK_10099bd10)
                                                  ))))));
    uRam0000000100e1166e =
         CONCAT17((byte)((ulong)uRam0000000100e1104e >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1104e >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1104e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1104e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1104e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1104e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1104e >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd18 >> 8),
                                                  (byte)uRam0000000100e1104e ^ (byte)_UNK_10099bd18)
                                                  ))))));
    cRam0000000100e1166d = bRam0000000100e1104d + (bRam0000000100e1104d & 8) * -2 + '\b';
    bRam0000000100e11676 = bRam0000000100e11056 ^ 0x6f;
    cRam0000000100e11677 = bRam0000000100e11057 + (bRam0000000100e11057 & 0x36) * -2 + '6';
    bRam0000000100e11678 = bRam0000000100e11058 ^ 0x6b;
    bRam0000000100e11679 = bRam0000000100e11059 ^ 0xcb;
    cRam0000000100e1167a = bRam0000000100e1105a + (bRam0000000100e1105a & 0x2b) * -2 + -0x55;
    bRam0000000100e1167b = bRam0000000100e1105b ^ 0x1c;
    bRam0000000100e1167c = bRam0000000100e1105c ^ 0xd7;
    bRam0000000100e1167d = bRam0000000100e1105d ^ 0xb5;
    cRam0000000100e1167e = bRam0000000100e1105e + (bRam0000000100e1105e & 0x3f) * -2 + -0x41;
    bRam0000000100e1167f = bRam0000000100e1105f ^ 0xee;
    bRam0000000100e11680 = bRam0000000100e11060 ^ 0x8a;
    bRam0000000100e11681 = bRam0000000100e11061 ^ 0xe0;
    bRam0000000100e11682 = bRam0000000100e11062 ^ 0x91;
    bRam0000000100e11683 = bRam0000000100e11063 ^ 0x85;
    cRam0000000100e11684 = bRam0000000100e11064 + (bRam0000000100e11064 & 0x3c) * -2 + -0x44;
    bRam0000000100e11685 = bRam0000000100e11065 ^ 0xed;
    bRam0000000100e11686 = bRam0000000100e11066 ^ 0x40;
    uRam0000000100e11568 =
         CONCAT17((byte)((ulong)uRam0000000100e10f48 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bcc0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e10f48 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bcc0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e10f48 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bcc0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e10f48 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bcc0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e10f48 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bcc0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e10f48 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bcc0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e10f48 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bcc0 >> 8),
                                                  (byte)uRam0000000100e10f48 ^ (byte)_UNK_10099bcc0)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e95d98 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 8) == 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar1 = func_0x00010061f1d4(*(long *)(param_1 + 8));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar1 == 0x817d2f7a) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar1 == 0x9b16b75c) {
      case false:
        uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar2 = _strlen(0x100e11070);
                    /* WARNING: Switch is manually overridden */
        uVar2 = func_0x0001005ffa68(0x100e11070,uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
      uVar2 = _strlen(0x100e10470);
      uVar2 = func_0x0001005ffa68(0x100e10470,uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    uVar2 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 stack_certs]
 * Entry: 0x100732804; original ABI: ^v16@0:8
 * Original instructions in modeled body: 5256; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100732838 */
/* WARNING: Switch with 1 destination removed at 0x00010073284c */
/* WARNING: Switch with 1 destination removed at 0x000100732858 */
/* WARNING: Switch with 1 destination removed at 0x000100732890 */
/* WARNING: Switch with 1 destination removed at 0x000100735cb8 */
/* WARNING: Switch with 1 destination removed at 0x000100739184 */
/* WARNING: Switch with 1 destination removed at 0x0001007391a4 */
/* WARNING: Switch with 1 destination removed at 0x0001007391b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007391d4 */
/* WARNING: Switch with 1 destination removed at 0x0001007391e0 */
/* WARNING: Switch with 1 destination removed at 0x0001007391f4 */
/* WARNING: Switch with 1 destination removed at 0x00010073920c */
/* WARNING: Switch with 1 destination removed at 0x000100739218 */
/* WARNING: Switch with 1 destination removed at 0x000100739224 */
/* WARNING: Switch with 1 destination removed at 0x00010073924c */
/* WARNING: Switch with 1 destination removed at 0x000100739270 */
/* WARNING: Switch with 1 destination removed at 0x00010073927c */
/* WARNING: Switch with 1 destination removed at 0x0001007392a8 */
/* WARNING: Switch with 1 destination removed at 0x0001007392d0 */
/* WARNING: Switch with 1 destination removed at 0x0001007392dc */
/* WARNING: Switch with 1 destination removed at 0x000100739324 */
/* WARNING: Switch with 1 destination removed at 0x000100739330 */
/* WARNING: Switch with 1 destination removed at 0x00010073933c */
/* WARNING: Switch with 1 destination removed at 0x000100739364 */
/* WARNING: Switch with 1 destination removed at 0x000100739370 */
/* WARNING: Switch with 1 destination removed at 0x000100739394 */
/* WARNING: Switch with 1 destination removed at 0x0001007393a0 */
/* WARNING: Switch with 1 destination removed at 0x0001007393c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007393d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007393e4 */
/* WARNING: Switch with 1 destination removed at 0x0001007393f0 */
/* WARNING: Switch with 1 destination removed at 0x0001007393fc */
/* WARNING: Switch with 1 destination removed at 0x000100739408 */
/* WARNING: Switch with 1 destination removed at 0x000100739460 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Recovered_YYYP12_m03121(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e95d9c == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e11d40 = bRam0000000100e11690 ^ 0x1a;
    bRam0000000100e11d41 = bRam0000000100e11691 ^ 0xb4;
    bRam0000000100e11d42 = bRam0000000100e11692 ^ 0xeb;
    bRam0000000100e11d43 = bRam0000000100e11693 ^ 0x5e;
    bRam0000000100e11d44 = bRam0000000100e11694 ^ 0x53;
    cRam0000000100e11d45 = bRam0000000100e11695 + (bRam0000000100e11695 & 0x1a) * -2 + '\x1a';
    cRam0000000100e11d4e = bRam0000000100e1169e + (bRam0000000100e1169e & 0x69) * -2 + 'i';
    bRam0000000100e11d4f = bRam0000000100e1169f ^ 0x33;
    bRam0000000100e11d50 = bRam0000000100e116a0 ^ 199;
    bRam0000000100e11d51 = bRam0000000100e116a1 ^ 0xac;
    bRam0000000100e11d52 = bRam0000000100e116a2 ^ 0xaf;
    bRam0000000100e11d53 = bRam0000000100e116a3 ^ 0xf0;
    bRam0000000100e11d54 = bRam0000000100e116a4 ^ 0x4e;
    cRam0000000100e11d55 = bRam0000000100e116a5 + (bRam0000000100e116a5 & 0x54) * -2 + 'T';
    bRam0000000100e11d56 = bRam0000000100e116a6 ^ 0xbb;
    bRam0000000100e11d57 = bRam0000000100e116a7 ^ 0xb2;
    cRam0000000100e11d58 = bRam0000000100e116a8 + (bRam0000000100e116a8 & 0xbb) * -2 + ';';
    cRam0000000100e11d59 = bRam0000000100e116a9 + (bRam0000000100e116a9 & 0x6c) * -2 + -0x14;
    bRam0000000100e11d5a = bRam0000000100e116aa ^ 0xdd;
    bRam0000000100e11d5b = bRam0000000100e116ab ^ 0x14;
    bRam0000000100e11d5c = bRam0000000100e116ac ^ 0xb5;
    bRam0000000100e11d5d = bRam0000000100e116ad ^ 0x71;
    bRam0000000100e11d5e = bRam0000000100e116ae ^ 0x13;
    bRam0000000100e11d5f = bRam0000000100e116af ^ 0xe3;
    bRam0000000100e11d60 = bRam0000000100e116b0 ^ 0x87;
    bRam0000000100e11d61 = ~((bRam0000000100e116b1 | 0x19) & (bRam0000000100e116b1 ^ 0xff | 0xe6));
    bRam0000000100e11d6a = bRam0000000100e116ba ^ 0x5e;
    bRam0000000100e11d6b = bRam0000000100e116bb ^ 199;
    bRam0000000100e11d6c = bRam0000000100e116bc ^ 0x9e;
    bRam0000000100e11d6d = bRam0000000100e116bd ^ 0x5b;
    bRam0000000100e11d6e = bRam0000000100e116be ^ 0x41;
    bRam0000000100e11d6f = bRam0000000100e116bf ^ 0xe6;
    bRam0000000100e11d70 = bRam0000000100e116c0 ^ 0x4c;
    cRam0000000100e11d71 = bRam0000000100e116c1 + (bRam0000000100e116c1 & 0x3a) * -2 + ':';
    bRam0000000100e11d7a = bRam0000000100e116ca ^ 0xd9;
    bRam0000000100e11d7b = bRam0000000100e116cb ^ 0x7a;
    cRam0000000100e11d7c = bRam0000000100e116cc + (bRam0000000100e116cc & 0x34) * -2 + '4';
    bRam0000000100e11d7d = bRam0000000100e116cd ^ 0x38;
    bRam0000000100e11d7e = bRam0000000100e116ce ^ 0x87;
    bRam0000000100e11d7f = bRam0000000100e116cf ^ 0x9d;
    bRam0000000100e11d80 = bRam0000000100e116d0 ^ 0xce;
    bRam0000000100e11d81 = bRam0000000100e116d1 ^ 0x84;
    bRam0000000100e11d82 = bRam0000000100e116d2 ^ 0x2f;
    cRam0000000100e11d83 = bRam0000000100e116d3 + (bRam0000000100e116d3 & 0x49) * -2 + 'I';
    bRam0000000100e11d84 = bRam0000000100e116d4 ^ 0xfb;
    bRam0000000100e11d85 = bRam0000000100e116d5 ^ 0x41;
    bRam0000000100e11d86 = bRam0000000100e116d6 ^ 0x5d;
    bRam0000000100e11d87 = bRam0000000100e116d7 ^ 3;
    bRam0000000100e11d88 = bRam0000000100e116d8 ^ 0x25;
    cRam0000000100e11d89 = bRam0000000100e116d9 + (bRam0000000100e116d9 & 0x40) * '\x02' + -0x40;
    cRam0000000100e11d8a = bRam0000000100e116da + (bRam0000000100e116da & 0x34) * -2 + '4';
    bRam0000000100e11d8b = bRam0000000100e116db ^ 0xbf;
    cRam0000000100e11d8c = bRam0000000100e116dc + (bRam0000000100e116dc & 0x72) * -2 + -0xe;
    bRam0000000100e11d8d = bRam0000000100e116dd ^ 0xd6;
    bRam0000000100e11d8e = bRam0000000100e116de ^ 0x93;
    bRam0000000100e11d8f = bRam0000000100e116df ^ 4;
    cRam0000000100e11d90 = bRam0000000100e116e0 + (bRam0000000100e116e0 & 1) * -2 + '\x01';
    bRam0000000100e11d91 = bRam0000000100e116e1 ^ 0xed;
    cRam0000000100e11d92 = bRam0000000100e116e2 + (bRam0000000100e116e2 & 0xe3) * -2 + -0x1d;
    bRam0000000100e11da3 = bRam0000000100e116f3 ^ 0x27;
    bRam0000000100e11da4 = bRam0000000100e116f4 ^ 0xd0;
    cRam0000000100e11da5 = bRam0000000100e116f5 + (bRam0000000100e116f5 & 0xf9) * -2 + 'y';
    bRam0000000100e11da6 = bRam0000000100e116f6 ^ 0xd1;
    bRam0000000100e11da7 = bRam0000000100e116f7 ^ 0x10;
    bRam0000000100e11da8 = bRam0000000100e116f8 ^ 0x7a;
    bRam0000000100e11da9 = bRam0000000100e116f9 ^ 0x57;
    bRam0000000100e11daa = bRam0000000100e116fa ^ 0xd6;
    cRam0000000100e11dab = bRam0000000100e116fb + (bRam0000000100e116fb & 0xc3) * -2 + 'C';
    bRam0000000100e11dbc = bRam0000000100e1170c ^ 0xbe;
    bRam0000000100e11dbd = bRam0000000100e1170d ^ 0xd7;
    bRam0000000100e11dbe = bRam0000000100e1170e ^ 0xbd;
    bRam0000000100e11dbf = bRam0000000100e1170f ^ 0xbc;
    bRam0000000100e11dc0 = bRam0000000100e11710 ^ 0xe4;
    bRam0000000100e11dc1 = bRam0000000100e11711 ^ 0x36;
    cRam0000000100e11dc2 = bRam0000000100e11712 + (bRam0000000100e11712 & 0x75) * -2 + 'u';
    bRam0000000100e11dcb = bRam0000000100e1171b ^ 0xa5;
    bRam0000000100e11dcc = bRam0000000100e1171c ^ 0xd0;
    bRam0000000100e11dcd = bRam0000000100e1171d ^ 0xb7;
    bRam0000000100e11dce = bRam0000000100e1171e ^ 0x49;
    bRam0000000100e11dcf = bRam0000000100e1171f ^ 0x81;
    bRam0000000100e11dd0 = bRam0000000100e11720 ^ 200;
    cRam0000000100e11dd1 = bRam0000000100e11721 + (bRam0000000100e11721 & 0x54) * -2 + -0x2c;
    bRam0000000100e11dd2 = bRam0000000100e11722 ^ 0x55;
    bRam0000000100e11dd3 = bRam0000000100e11723 ^ 0xf;
    bRam0000000100e11dd4 = bRam0000000100e11724 ^ 7;
    cRam0000000100e11dd5 = bRam0000000100e11725 + (bRam0000000100e11725 & 0x29) * -2 + ')';
    bRam0000000100e11dd6 = bRam0000000100e11726 ^ 0x4f;
    bRam0000000100e11dd7 = bRam0000000100e11727 ^ 0x21;
    bRam0000000100e11dd8 = bRam0000000100e11728 ^ 0x69;
    bRam0000000100e11dd9 = bRam0000000100e11729 ^ 0x37;
    cRam0000000100e11dda = bRam0000000100e1172a + (bRam0000000100e1172a & 0xc3) * -2 + 'C';
    cRam0000000100e11ddb = bRam0000000100e1172b + (bRam0000000100e1172b & 0x4d) * -2 + 'M';
    cRam0000000100e11de4 = bRam0000000100e11734 + (bRam0000000100e11734 & 0x74) * -2 + -0xc;
    bRam0000000100e11de5 = bRam0000000100e11735 ^ 0x2e;
    bRam0000000100e11de6 = bRam0000000100e11736 ^ 0x57;
    cRam0000000100e11de7 = bRam0000000100e11737 + (bRam0000000100e11737 & 0x54) * -2 + -0x2c;
    cRam0000000100e11de8 = bRam0000000100e11738 + (bRam0000000100e11738 & 0xfd) * -2 + -3;
    bRam0000000100e11de9 = bRam0000000100e11739 ^ 0x95;
    bRam0000000100e11dea = bRam0000000100e1173a ^ 0x74;
    bRam0000000100e11deb = bRam0000000100e1173b ^ 0x97;
    bRam0000000100e11dec = bRam0000000100e1173c ^ 0xaf;
    cRam0000000100e11ded = bRam0000000100e1173d + (bRam0000000100e1173d & 0x49) * -2 + -0x37;
    bRam0000000100e11df6 = bRam0000000100e11746 ^ 200;
    bRam0000000100e11df7 = bRam0000000100e11747 ^ 0x72;
    cRam0000000100e11df8 = bRam0000000100e11748 + (bRam0000000100e11748 & 1) * -2 + -0x7f;
    bRam0000000100e11df9 = bRam0000000100e11749 ^ 0xd2;
    bRam0000000100e11dfa = bRam0000000100e1174a ^ 0x8e;
    bRam0000000100e11dfb = bRam0000000100e1174b ^ 0x9a;
    cRam0000000100e11dfc = bRam0000000100e1174c + (bRam0000000100e1174c & 0xdd) * -2 + -0x23;
    bRam0000000100e11dfd = bRam0000000100e1174d ^ 0x4c;
    cRam0000000100e11dfe = bRam0000000100e1174e + (bRam0000000100e1174e & 0x99) * -2 + -0x67;
    bRam0000000100e11dff = bRam0000000100e1174f ^ 0x7c;
    bRam0000000100e11e00 = bRam0000000100e11750 ^ 0xb6;
    bRam0000000100e11e01 = bRam0000000100e11751 ^ 0xd3;
    bRam0000000100e11e02 = bRam0000000100e11752 ^ 0xd0;
    bRam0000000100e11e03 = bRam0000000100e11753 ^ 0x84;
    bRam0000000100e11e04 = bRam0000000100e11754 ^ 0x53;
    cRam0000000100e11e05 = bRam0000000100e11755 + (bRam0000000100e11755 & 0x51) * -2 + 'Q';
    cRam0000000100e11e06 = bRam0000000100e11756 + (bRam0000000100e11756 & 0x46) * -2 + -0x3a;
    bRam0000000100e11e0f = bRam0000000100e1175f ^ 0x45;
    cRam0000000100e11e10 = bRam0000000100e11760 + (bRam0000000100e11760 & 0x15) * -2 + -0x6b;
    bRam0000000100e11e11 = bRam0000000100e11761 ^ 0xf5;
    bRam0000000100e11e12 = bRam0000000100e11762 ^ 0xa5;
    bRam0000000100e11e13 = bRam0000000100e11763 ^ 0x29;
    bRam0000000100e11e14 = bRam0000000100e11764 ^ 0x66;
    bRam0000000100e11e15 = bRam0000000100e11765 ^ 0x90;
    bRam0000000100e11e16 = bRam0000000100e11766 ^ 0x96;
    cRam0000000100e11e17 = bRam0000000100e11767 + (bRam0000000100e11767 & 0x31) * -2 + '1';
    bRam0000000100e11e18 = bRam0000000100e11768 ^ 0x68;
    bRam0000000100e11e19 = bRam0000000100e11769 ^ 0xf8;
    bRam0000000100e11e1a = bRam0000000100e1176a ^ 0xec;
    bRam0000000100e11e1b = bRam0000000100e1176b ^ 0x56;
    cRam0000000100e11e1c = bRam0000000100e1176c + (bRam0000000100e1176c & 0xd) * -2 + '\r';
    cRam0000000100e11e1d = bRam0000000100e1176d + (bRam0000000100e1176d & 0x29) * -2 + ')';
    bRam0000000100e11e1e = bRam0000000100e1176e ^ 0x57;
    bRam0000000100e11e1f = bRam0000000100e1176f ^ 0x5c;
    bRam0000000100e11e20 = bRam0000000100e11770 ^ 0x19;
    bRam0000000100e11e21 = bRam0000000100e11771 ^ 0x65;
    cRam0000000100e11e22 = bRam0000000100e11772 + (bRam0000000100e11772 & 0xbb) * -2 + ';';
    cRam0000000100e11e2b = bRam0000000100e1177b + (bRam0000000100e1177b & 0x37) * -2 + '7';
    cRam0000000100e11e2c = bRam0000000100e1177c + (bRam0000000100e1177c & 0x57) * -2 + -0x29;
    bRam0000000100e11e2d = bRam0000000100e1177d ^ 199;
    bRam0000000100e11e2e = bRam0000000100e1177e ^ 0xf9;
    bRam0000000100e11e2f = bRam0000000100e1177f ^ 0xd3;
    bRam0000000100e11e30 = bRam0000000100e11780 ^ 0x96;
    uRam0000000100e11e31 = uRam0000000100e11781;
    cRam0000000100e11e3a = bRam0000000100e1178a + (bRam0000000100e1178a & 0xc) * -2 + '\f';
    bRam0000000100e11e3b = bRam0000000100e1178b ^ 0x30;
    cRam0000000100e11e3c = bRam0000000100e1178c + (bRam0000000100e1178c & 0x5a) * -2 + 'Z';
    bRam0000000100e11e3d = bRam0000000100e1178d ^ 0x23;
    cRam0000000100e11e3e = bRam0000000100e1178e + (bRam0000000100e1178e & 0x4b) * -2 + 'K';
    cRam0000000100e11e3f = bRam0000000100e1178f + (bRam0000000100e1178f & 0x21) * -2 + -0x5f;
    cRam0000000100e11e48 = bRam0000000100e11798 + (bRam0000000100e11798 & 0x33) * -2 + '3';
    bRam0000000100e11e49 = ~((bRam0000000100e11799 | 0xa7) & (bRam0000000100e11799 ^ 0xff | 0x58));
    uRam0000000100e11e4a =
         CONCAT17((byte)((ulong)uRam0000000100e1179a >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdc8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1179a >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdc8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1179a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdc8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1179a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdc8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1179a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdc8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1179a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdc8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1179a >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdc8 >> 8),
                                                  (byte)uRam0000000100e1179a ^ (byte)_UNK_10099bdc8)
                                                  ))))));
    cRam0000000100e11e52 = bRam0000000100e117a2 + (bRam0000000100e117a2 & 0x62) * -2 + -0x1e;
    uRam0000000100e11e53 =
         CONCAT17((byte)((ulong)uRam0000000100e117a3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdd0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e117a3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdd0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e117a3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdd0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e117a3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdd0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e117a3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdd0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e117a3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdd0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e117a3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdd0 >> 8),
                                                  (byte)uRam0000000100e117a3 ^ (byte)_UNK_10099bdd0)
                                                  ))))));
    bRam0000000100e11e5b = bRam0000000100e117ab ^ 0xfc;
    cRam0000000100e11e5c = bRam0000000100e117ac + (bRam0000000100e117ac & 0x60) * -2 + '`';
    cRam0000000100e11e5d = bRam0000000100e117ad + (bRam0000000100e117ad & 0x52) * -2 + 'R';
    cRam0000000100e11e5e = bRam0000000100e117ae + (bRam0000000100e117ae & 1) * -2 + -0x7f;
    uRam0000000100e11e5f =
         CONCAT17((byte)((ulong)uRam0000000100e117af >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdd8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e117af >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdd8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e117af >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdd8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e117af >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdd8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e117af >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdd8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e117af >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdd8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e117af >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdd8 >> 8),
                                                  (byte)uRam0000000100e117af ^ (byte)_UNK_10099bdd8)
                                                  ))))));
    cRam0000000100e11e67 = bRam0000000100e117b7 + (bRam0000000100e117b7 & 0xe7) * -2 + -0x19;
    bRam0000000100e11e68 = bRam0000000100e117b8 ^ 0x48;
    bRam0000000100e11e69 = bRam0000000100e117b9 ^ 0x8a;
    bRam0000000100e11e6a = bRam0000000100e117ba ^ 0xef;
    cRam0000000100e11e6b = bRam0000000100e117bb + (bRam0000000100e117bb & 4) * -2 + '\x04';
    bRam0000000100e11e6c = bRam0000000100e117bc ^ 0xa9;
    bRam0000000100e11e6d = ~((bRam0000000100e117bd | 0x37) & (bRam0000000100e117bd ^ 0xff | 200));
    bRam0000000100e11e6e = bRam0000000100e117be ^ 0x8e;
    cRam0000000100e11e6f = bRam0000000100e117bf + (bRam0000000100e117bf & 0x54) * -2 + -0x2c;
    bRam0000000100e11e70 = bRam0000000100e117c0 ^ 0xd6;
    cRam0000000100e11e71 = bRam0000000100e117c1 + (bRam0000000100e117c1 & 0x40) * '\x02' + -0x40;
    bRam0000000100e11e72 = bRam0000000100e117c2 ^ 2;
    bRam0000000100e11e73 = bRam0000000100e117c3 ^ 0xd5;
    bRam0000000100e11e74 = bRam0000000100e117c4 ^ 0xf7;
    bRam0000000100e11e75 = bRam0000000100e117c5 ^ 0xc2;
    bRam0000000100e11e76 = bRam0000000100e117c6 ^ 0xb4;
    cRam0000000100e11e77 = bRam0000000100e117c7 + (bRam0000000100e117c7 & 0x70) * -2 + -0x10;
    bRam0000000100e11e78 = bRam0000000100e117c8 ^ 0xd6;
    bRam0000000100e11e79 = bRam0000000100e117c9 ^ 0xa6;
    bRam0000000100e11e7a = bRam0000000100e117ca ^ 0x40;
    bRam0000000100e11e7b = bRam0000000100e117cb ^ 0xcc;
    bRam0000000100e11e7c = bRam0000000100e117cc ^ 0x54;
    cRam0000000100e11e7d = bRam0000000100e117cd + (bRam0000000100e117cd & 0x17) * -2 + -0x69;
    bRam0000000100e11e7e = bRam0000000100e117ce ^ 0xb3;
    cRam0000000100e11e7f = bRam0000000100e117cf + (bRam0000000100e117cf & 0x29) * -2 + -0x57;
    bRam0000000100e11e80 = bRam0000000100e117d0 ^ 0x7a;
    bRam0000000100e11e81 = ~((bRam0000000100e117d1 | 0x94) & (bRam0000000100e117d1 ^ 0xff | 0x6b));
    bRam0000000100e11e82 = bRam0000000100e117d2 ^ 0xd1;
    bRam0000000100e11e83 = bRam0000000100e117d3 ^ 0x58;
    cRam0000000100e11e84 = bRam0000000100e117d4 + (bRam0000000100e117d4 & 0x45) * -2 + -0x3b;
    bRam0000000100e11e85 = bRam0000000100e117d5 ^ 0x7b;
    bRam0000000100e11e86 = bRam0000000100e117d6 ^ 0x30;
    bRam0000000100e11e87 = bRam0000000100e117d7 ^ 0xf0;
    cRam0000000100e11e88 = bRam0000000100e117d8 + (bRam0000000100e117d8 & 0x35) * -2 + '5';
    bRam0000000100e11e89 = bRam0000000100e117d9 ^ 0x17;
    bRam0000000100e11e8a = bRam0000000100e117da ^ 0x74;
    cRam0000000100e11e8b = bRam0000000100e117db + (bRam0000000100e117db & 0x27) * -2 + -0x59;
    uRam0000000100e11e8c =
         CONCAT17((byte)((ulong)uRam0000000100e117dc >> 0x38) ^
                  (byte)((ulong)_UNK_10099bde0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e117dc >> 0x30) ^
                           (byte)((ulong)_UNK_10099bde0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e117dc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bde0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e117dc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bde0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e117dc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bde0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e117dc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bde0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e117dc >> 8) ^
                                                  (byte)((ulong)_UNK_10099bde0 >> 8),
                                                  (byte)uRam0000000100e117dc ^ (byte)_UNK_10099bde0)
                                                  ))))));
    bRam0000000100e11e94 = bRam0000000100e117e4 ^ 0xb6;
    bRam0000000100e11e95 = bRam0000000100e117e5 ^ 0x29;
    bRam0000000100e11e96 = bRam0000000100e117e6 ^ 0xfa;
    cRam0000000100e11e97 = bRam0000000100e117e7 + (bRam0000000100e117e7 & 0x26) * -2 + -0x5a;
    bRam0000000100e11e98 = bRam0000000100e117e8 ^ 0xcf;
    cRam0000000100e11e99 = bRam0000000100e117e9 + (bRam0000000100e117e9 & 0xf7) * -2 + 'w';
    bRam0000000100e11e9a = bRam0000000100e117ea ^ 0x66;
    cRam0000000100e11e9b = bRam0000000100e117eb + (bRam0000000100e117eb & 0x1c) * -2 + -100;
    cRam0000000100e11e9c = bRam0000000100e117ec + (bRam0000000100e117ec & 0xaa) * -2 + '*';
    bRam0000000100e11e9d = bRam0000000100e117ed ^ 0xf5;
    bRam0000000100e11e9e = bRam0000000100e117ee ^ 0x67;
    bRam0000000100e11e9f = bRam0000000100e117ef ^ 0x31;
    cRam0000000100e11ea0 = bRam0000000100e117f0 + (bRam0000000100e117f0 & 0x53) * -2 + 'S';
    bRam0000000100e11ea1 = bRam0000000100e117f1 ^ 0x33;
    bRam0000000100e11ea2 = bRam0000000100e117f2 ^ 0x62;
    bRam0000000100e11ea3 = bRam0000000100e117f3 ^ 0x2b;
    bRam0000000100e11ea4 = bRam0000000100e117f4 ^ 0x58;
    bRam0000000100e11ea5 = bRam0000000100e117f5 ^ 0xb2;
    cRam0000000100e11ea6 = bRam0000000100e117f6 + (bRam0000000100e117f6 & 0x57) * -2 + -0x29;
    cRam0000000100e11ea7 = bRam0000000100e117f7 + (bRam0000000100e117f7 & 0x28) * -2 + '(';
    uRam0000000100e11ea8 =
         CONCAT17((byte)((ulong)uRam0000000100e117f8 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c130 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e117f8 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c130 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e117f8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c130 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e117f8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c130 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e117f8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c130 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e117f8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c130 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e117f8 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c130 >> 8),
                                                  (byte)uRam0000000100e117f8 ^ (byte)_UNK_10099c130)
                                                  ))))));
    uRam0000000100e11eb0 =
         CONCAT17((byte)((ulong)uRam0000000100e11800 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c138 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11800 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c138 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11800 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c138 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11800 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c138 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11800 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c138 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11800 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c138 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11800 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c138 >> 8),
                                                  (byte)uRam0000000100e11800 ^ (byte)_UNK_10099c138)
                                                  ))))));
    bRam0000000100e11eb8 = bRam0000000100e11808 ^ 0x20;
    bRam0000000100e11eb9 = bRam0000000100e11809 ^ 0x92;
    cRam0000000100e11eba = bRam0000000100e1180a + (bRam0000000100e1180a & 0x18) * -2 + -0x68;
    bRam0000000100e11ebb = bRam0000000100e1180b ^ 2;
    bRam0000000100e11ebc = bRam0000000100e1180c ^ 0xc5;
    bRam0000000100e11ebd = bRam0000000100e1180d ^ 0x45;
    bRam0000000100e11ebe = bRam0000000100e1180e ^ 0x9f;
    bRam0000000100e11ebf = bRam0000000100e1180f ^ 0x7a;
    bRam0000000100e11ec0 = bRam0000000100e11810 ^ 0xdc;
    cRam0000000100e11ec1 = bRam0000000100e11811 + (bRam0000000100e11811 & 0x39) * -2 + '9';
    bRam0000000100e11ec2 = bRam0000000100e11812 ^ 4;
    bRam0000000100e11ec3 = bRam0000000100e11813 ^ 0x84;
    cRam0000000100e11ec4 = bRam0000000100e11814 + (bRam0000000100e11814 & 0x26) * -2 + -0x5a;
    bRam0000000100e11ec5 = ~bRam0000000100e11815;
    cRam0000000100e11ec6 = bRam0000000100e11816 + (bRam0000000100e11816 & 0xef) * -2 + -0x11;
    bRam0000000100e11ec7 = bRam0000000100e11817 ^ 0x17;
    bRam0000000100e11ec8 = bRam0000000100e11818 ^ 0x4b;
    bRam0000000100e11ec9 = bRam0000000100e11819 ^ 0x50;
    bRam0000000100e11eca = bRam0000000100e1181a ^ 0x6d;
    bRam0000000100e11ecb = bRam0000000100e1181b ^ 0xee;
    bRam0000000100e11ecc = bRam0000000100e1181c ^ 0xdd;
    bRam0000000100e11ecd = ~((bRam0000000100e1181d | 0x5c) & (bRam0000000100e1181d ^ 0xff | 0xa3));
    bRam0000000100e11ece = bRam0000000100e1181e ^ 0x48;
    bRam0000000100e11ecf = bRam0000000100e1181f ^ 0x45;
    uRam0000000100e11ed0 = uRam0000000100e11820;
    bRam0000000100e11ed1 = bRam0000000100e11821 ^ 0x9c;
    bRam0000000100e11ed2 = bRam0000000100e11822 ^ 0xf2;
    bRam0000000100e11ed3 = bRam0000000100e11823 ^ 0xb5;
    cRam0000000100e11ed4 = bRam0000000100e11824 + (bRam0000000100e11824 & 0x32) * -2 + -0x4e;
    uRam0000000100e11e07 =
         CONCAT17((byte)((ulong)uRam0000000100e11757 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdb0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11757 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdb0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11757 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdb0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11757 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdb0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11757 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdb0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11757 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdb0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11757 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdb0 >> 8),
                                                  (byte)uRam0000000100e11757 ^ (byte)_UNK_10099bdb0)
                                                  ))))));
    bRam0000000100e11ed5 = bRam0000000100e11825 ^ 0xab;
    bRam0000000100e11ed6 = bRam0000000100e11826 ^ 0xf2;
    bRam0000000100e11ed7 = bRam0000000100e11827 ^ 0x67;
    bRam0000000100e11ed8 = bRam0000000100e11828 ^ 0x25;
    bRam0000000100e11ed9 = bRam0000000100e11829 ^ 0xac;
    cRam0000000100e11eda = bRam0000000100e1182a + (bRam0000000100e1182a & 0x62) * -2 + 'b';
    bRam0000000100e11edb = bRam0000000100e1182b ^ 0x8f;
    cRam0000000100e11edc = bRam0000000100e1182c + (bRam0000000100e1182c & 0x58) * -2 + -0x28;
    bRam0000000100e11edd = bRam0000000100e1182d ^ 0x20;
    bRam0000000100e11ede = ~((bRam0000000100e1182e | 0xa7) & (bRam0000000100e1182e ^ 0xff | 0x58));
    bRam0000000100e11edf = bRam0000000100e1182f ^ 0xd5;
    cRam0000000100e11ee0 = bRam0000000100e11830 + (bRam0000000100e11830 & 0x4d) * -2 + 'M';
    bRam0000000100e11ee1 = bRam0000000100e11831 ^ 0x1c;
    uRam0000000100e11ee5 =
         CONCAT17((byte)((ulong)uRam0000000100e11835 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bde8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11835 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bde8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11835 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bde8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11835 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bde8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11835 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bde8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11835 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bde8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11835 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bde8 >> 8),
                                                  (byte)uRam0000000100e11835 ^ (byte)_UNK_10099bde8)
                                                  ))))));
    bRam0000000100e11ee2 = bRam0000000100e11832 ^ 0x5c;
    bRam0000000100e11ee3 = bRam0000000100e11833 ^ 0x53;
    cRam0000000100e11ee4 = bRam0000000100e11834 + (bRam0000000100e11834 & 0x14) * -2 + '\x14';
    bRam0000000100e11eed = bRam0000000100e1183d ^ 0xf2;
    bRam0000000100e11eee = bRam0000000100e1183e ^ 0x71;
    uRam0000000100e11dee =
         CONCAT17((byte)((ulong)uRam0000000100e1173e >> 0x38) ^
                  (byte)((ulong)_UNK_10099bda8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1173e >> 0x30) ^
                           (byte)((ulong)_UNK_10099bda8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1173e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bda8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1173e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bda8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1173e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bda8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1173e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bda8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1173e >> 8) ^
                                                  (byte)((ulong)_UNK_10099bda8 >> 8),
                                                  (byte)uRam0000000100e1173e ^ (byte)_UNK_10099bda8)
                                                  ))))));
    bRam0000000100e11eef = bRam0000000100e1183f ^ 0xcf;
    bRam0000000100e11ef0 = bRam0000000100e11840 ^ 0x77;
    cRam0000000100e11ef1 = bRam0000000100e11841 + (bRam0000000100e11841 & 0xef) * -2 + 'o';
    bRam0000000100e11ef2 = bRam0000000100e11842 ^ 0x3f;
    bRam0000000100e11ef3 = bRam0000000100e11843 ^ 0x3b;
    bRam0000000100e11ef4 = bRam0000000100e11844 ^ 0x5a;
    cRam0000000100e11ef5 = bRam0000000100e11845 + (bRam0000000100e11845 & 0x4a) * -2 + 'J';
    bRam0000000100e11ef6 = bRam0000000100e11846 ^ 0x9c;
    bRam0000000100e11ef7 = bRam0000000100e11847 ^ 0x8d;
    bRam0000000100e11ef8 = bRam0000000100e11848 ^ 0x49;
    uRam0000000100e11ddc =
         CONCAT17((byte)((ulong)uRam0000000100e1172c >> 0x38) ^
                  (byte)((ulong)_UNK_10099bda0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1172c >> 0x30) ^
                           (byte)((ulong)_UNK_10099bda0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1172c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bda0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1172c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bda0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1172c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bda0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1172c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bda0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1172c >> 8) ^
                                                  (byte)((ulong)_UNK_10099bda0 >> 8),
                                                  (byte)uRam0000000100e1172c ^ (byte)_UNK_10099bda0)
                                                  ))))));
    cRam0000000100e11ef9 = bRam0000000100e11849 + (bRam0000000100e11849 & 0xfb) * -2 + '{';
    cRam0000000100e11efa = bRam0000000100e1184a + (bRam0000000100e1184a & 7) * -2 + -0x79;
    bRam0000000100e11efb = bRam0000000100e1184b ^ 0xf6;
    bRam0000000100e11efc = bRam0000000100e1184c ^ 0x4d;
    cRam0000000100e11efd = bRam0000000100e1184d + (bRam0000000100e1184d & 0x46) * -2 + 'F';
    bRam0000000100e11efe = bRam0000000100e1184e ^ 0x90;
    bRam0000000100e11eff = bRam0000000100e1184f ^ 0x87;
    bRam0000000100e11f00 = bRam0000000100e11850 ^ 199;
    cRam0000000100e11f01 = bRam0000000100e11851 + (bRam0000000100e11851 & 0x14) * -2 + '\x14';
    uRam0000000100e11f02 =
         CONCAT17((byte)((ulong)uRam0000000100e11852 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdf0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11852 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdf0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11852 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdf0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11852 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdf0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11852 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdf0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11852 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdf0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11852 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdf0 >> 8),
                                                  (byte)uRam0000000100e11852 ^ (byte)_UNK_10099bdf0)
                                                  ))))));
    cRam0000000100e11f0a = bRam0000000100e1185a + (bRam0000000100e1185a & 0x4d) * -2 + 'M';
    bRam0000000100e11f0b = bRam0000000100e1185b ^ 0xc3;
    cRam0000000100e11f0c = bRam0000000100e1185c + (bRam0000000100e1185c & 0xef) * -2 + 'o';
    bRam0000000100e11f0d = bRam0000000100e1185d ^ 0x4b;
    cRam0000000100e11f0e = bRam0000000100e1185e + (bRam0000000100e1185e & 0x76) * -2 + 'v';
    bRam0000000100e11f0f = bRam0000000100e1185f ^ 0x44;
    bRam0000000100e11f10 = bRam0000000100e11860 ^ 0x4e;
    bRam0000000100e11f11 = bRam0000000100e11861 ^ 0xc;
    uRam0000000100e11dc3 =
         CONCAT17((byte)((ulong)uRam0000000100e11713 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11713 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11713 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11713 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11713 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11713 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11713 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd98 >> 8),
                                                  (byte)uRam0000000100e11713 ^ (byte)_UNK_10099bd98)
                                                  ))))));
    bRam0000000100e11f12 = bRam0000000100e11862 ^ 0x6b;
    bRam0000000100e11f13 = bRam0000000100e11863 ^ 0x97;
    cRam0000000100e11f14 = bRam0000000100e11864 + (bRam0000000100e11864 & 0xfd) * -2 + -3;
    bRam0000000100e11f15 = bRam0000000100e11865 ^ 0x3f;
    bRam0000000100e11f16 = ~((bRam0000000100e11866 | 0x9b) & (bRam0000000100e11866 ^ 0xff | 100));
    bRam0000000100e11f17 = bRam0000000100e11867 ^ 0x4a;
    bRam0000000100e11f18 = bRam0000000100e11868 ^ 0x28;
    bRam0000000100e11f19 = bRam0000000100e11869 ^ 0x6b;
    uRam0000000100e11dac =
         CONCAT17((byte)((ulong)uRam0000000100e116fc >> 0x38) ^
                  (byte)((ulong)_UNK_10099c120 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e116fc >> 0x30) ^
                           (byte)((ulong)_UNK_10099c120 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e116fc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c120 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e116fc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c120 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e116fc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c120 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e116fc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c120 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e116fc >> 8) ^
                                                  (byte)((ulong)_UNK_10099c120 >> 8),
                                                  (byte)uRam0000000100e116fc ^ (byte)_UNK_10099c120)
                                                  ))))));
    uRam0000000100e11db4 =
         CONCAT17((byte)((ulong)uRam0000000100e11704 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c128 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11704 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c128 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11704 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c128 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11704 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c128 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11704 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c128 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11704 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c128 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11704 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c128 >> 8),
                                                  (byte)uRam0000000100e11704 ^ (byte)_UNK_10099c128)
                                                  ))))));
    bRam0000000100e11f1a = bRam0000000100e1186a ^ 0x30;
    cRam0000000100e11f1b = bRam0000000100e1186b + (bRam0000000100e1186b & 0xf) * -2 + -0x71;
    uRam0000000100e11f1c =
         CONCAT17((byte)((ulong)uRam0000000100e1186c >> 0x38) ^
                  (byte)((ulong)_UNK_10099c140 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1186c >> 0x30) ^
                           (byte)((ulong)_UNK_10099c140 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1186c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c140 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1186c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c140 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1186c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c140 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1186c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c140 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1186c >> 8) ^
                                                  (byte)((ulong)_UNK_10099c140 >> 8),
                                                  (byte)uRam0000000100e1186c ^ (byte)_UNK_10099c140)
                                                  ))))));
    uRam0000000100e11f24 =
         CONCAT17((byte)((ulong)uRam0000000100e11874 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c148 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11874 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c148 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11874 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c148 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11874 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c148 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11874 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c148 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11874 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c148 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11874 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c148 >> 8),
                                                  (byte)uRam0000000100e11874 ^ (byte)_UNK_10099c148)
                                                  ))))));
    bRam0000000100e11f2c = bRam0000000100e1187c ^ 0xe5;
    bRam0000000100e11f2d = bRam0000000100e1187d ^ 0x53;
    bRam0000000100e11f2e = bRam0000000100e1187e ^ 0x6c;
    bRam0000000100e11f2f = bRam0000000100e1187f ^ 0xc1;
    bRam0000000100e11f30 = bRam0000000100e11880 ^ 0xed;
    bRam0000000100e11f31 = bRam0000000100e11881 ^ 0xa4;
    uRam0000000100e11d93 =
         CONCAT17((byte)((ulong)uRam0000000100e116e3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c110 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e116e3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c110 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e116e3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c110 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e116e3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c110 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e116e3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c110 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e116e3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c110 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e116e3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c110 >> 8),
                                                  (byte)uRam0000000100e116e3 ^ (byte)_UNK_10099c110)
                                                  ))))));
    uRam0000000100e11d9b =
         CONCAT17((byte)((ulong)uRam0000000100e116eb >> 0x38) ^
                  (byte)((ulong)_UNK_10099c118 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e116eb >> 0x30) ^
                           (byte)((ulong)_UNK_10099c118 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e116eb >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c118 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e116eb >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c118 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e116eb >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c118 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e116eb >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c118 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e116eb >> 8) ^
                                                  (byte)((ulong)_UNK_10099c118 >> 8),
                                                  (byte)uRam0000000100e116eb ^ (byte)_UNK_10099c118)
                                                  ))))));
    cRam0000000100e11f32 = bRam0000000100e11882 + (bRam0000000100e11882 & 0x55) * -2 + 'U';
    bRam0000000100e11f33 = bRam0000000100e11883 ^ 0x19;
    bRam0000000100e11f34 = bRam0000000100e11884 ^ 0x13;
    bRam0000000100e11f35 = bRam0000000100e11885 ^ 0x6c;
    bRam0000000100e11f36 = bRam0000000100e11886 ^ 0x7a;
    bRam0000000100e11f37 = bRam0000000100e11887 ^ 0xd5;
    bRam0000000100e11f38 = bRam0000000100e11888 ^ 0xfa;
    cRam0000000100e11f39 = bRam0000000100e11889 + (bRam0000000100e11889 & 0xc1) * -2 + -0x3f;
    bRam0000000100e11f3a = bRam0000000100e1188a ^ 200;
    bRam0000000100e11f3b = bRam0000000100e1188b ^ 0x68;
    bRam0000000100e11f3c = bRam0000000100e1188c ^ 0x55;
    bRam0000000100e11f3d = bRam0000000100e1188d ^ 0x4c;
    bRam0000000100e11f3e = bRam0000000100e1188e ^ 0x66;
    bRam0000000100e11f3f = bRam0000000100e1188f ^ 0x7c;
    cRam0000000100e11f40 = bRam0000000100e11890 + (bRam0000000100e11890 & 0x6a) * -2 + -0x16;
    bRam0000000100e11f41 = bRam0000000100e11891 ^ 0xfd;
    bRam0000000100e11f42 = bRam0000000100e11892 ^ 0xaa;
    bRam0000000100e11f43 = bRam0000000100e11893 ^ 0xba;
    bRam0000000100e11f44 = bRam0000000100e11894 ^ 0xee;
    cRam0000000100e11f45 = bRam0000000100e11895 + (bRam0000000100e11895 & 2) * -2 + -0x7e;
    bRam0000000100e11f46 = bRam0000000100e11896 ^ 0xb9;
    bRam0000000100e11f47 = ~((bRam0000000100e11897 | 0xf4) & (bRam0000000100e11897 ^ 0xff | 0xb));
    bRam0000000100e11f48 = bRam0000000100e11898 ^ 0x1a;
    bRam0000000100e11f49 = bRam0000000100e11899 ^ 0x44;
    bRam0000000100e11f4a = bRam0000000100e1189a ^ 2;
    bRam0000000100e11f4b = bRam0000000100e1189b ^ 0xe4;
    cRam0000000100e11f4c = bRam0000000100e1189c + (bRam0000000100e1189c & 10) * -2 + '\n';
    uRam0000000100e11d72 =
         CONCAT17((byte)((ulong)uRam0000000100e116c2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e116c2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e116c2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e116c2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e116c2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e116c2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e116c2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd90 >> 8),
                                                  (byte)uRam0000000100e116c2 ^ (byte)_UNK_10099bd90)
                                                  ))))));
    uRam0000000100e11f4d =
         CONCAT17((byte)((ulong)uRam0000000100e1189d >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdf8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1189d >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdf8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1189d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdf8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1189d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdf8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1189d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdf8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1189d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdf8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1189d >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdf8 >> 8),
                                                  (byte)uRam0000000100e1189d ^ (byte)_UNK_10099bdf8)
                                                  ))))));
    bRam0000000100e11f55 = bRam0000000100e118a5 ^ 0xbc;
    bRam0000000100e11f56 = bRam0000000100e118a6 ^ 0x8b;
    bRam0000000100e11f57 = bRam0000000100e118a7 ^ 0x70;
    bRam0000000100e11f58 = bRam0000000100e118a8 ^ 0xf6;
    bRam0000000100e11f59 = bRam0000000100e118a9 ^ 0xcb;
    bRam0000000100e11f5a = bRam0000000100e118aa ^ 0xba;
    bRam0000000100e11f5b = bRam0000000100e118ab ^ 5;
    uRam0000000100e11d62 =
         CONCAT17((byte)((ulong)uRam0000000100e116b2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e116b2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e116b2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e116b2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e116b2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e116b2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e116b2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd28 >> 8),
                                                  (byte)uRam0000000100e116b2 ^ (byte)_UNK_10099bd28)
                                                  ))))));
    cRam0000000100e11f5c = bRam0000000100e118ac + (bRam0000000100e118ac & 0x45) * -2 + -0x3b;
    bRam0000000100e11f5d = bRam0000000100e118ad ^ 0xe6;
    cRam0000000100e11f5e = bRam0000000100e118ae + (bRam0000000100e118ae & 0xe) * -2 + '\x0e';
    cRam0000000100e11f5f = bRam0000000100e118af + (bRam0000000100e118af & 2) * -2 + '\x02';
    bRam0000000100e11f60 = bRam0000000100e118b0 ^ 99;
    bRam0000000100e11f61 = bRam0000000100e118b1 ^ 0xfa;
    cRam0000000100e11f62 = bRam0000000100e118b2 + (bRam0000000100e118b2 & 0x70) * -2 + -0x10;
    bRam0000000100e11f63 = bRam0000000100e118b3 ^ 0xa3;
    bRam0000000100e11f64 = bRam0000000100e118b4 ^ 0x48;
    bRam0000000100e11f65 = bRam0000000100e118b5 ^ 100;
    cRam0000000100e11f66 = bRam0000000100e118b6 + (bRam0000000100e118b6 & 0xe) * -2 + -0x72;
    bRam0000000100e11f67 = bRam0000000100e118b7 ^ 0x77;
    cRam0000000100e11f68 = bRam0000000100e118b8 + (bRam0000000100e118b8 & 0x30) * -2 + -0x50;
    bRam0000000100e11f69 = bRam0000000100e118b9 ^ 0x67;
    bRam0000000100e11f6a = bRam0000000100e118ba ^ 0xf4;
    cRam0000000100e11f6b = bRam0000000100e118bb + (bRam0000000100e118bb & 0x76) * -2 + -10;
    bRam0000000100e11f6c = bRam0000000100e118bc ^ 0x54;
    bRam0000000100e11f6d = bRam0000000100e118bd ^ 0x65;
    bRam0000000100e11f6e = bRam0000000100e118be ^ 0x8e;
    bRam0000000100e11f6f = bRam0000000100e118bf ^ 0x33;
    uRam0000000100e11d46 =
         CONCAT17((byte)((ulong)uRam0000000100e11696 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11696 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11696 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11696 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11696 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11696 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11696 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd20 >> 8),
                                                  (byte)uRam0000000100e11696 ^ (byte)_UNK_10099bd20)
                                                  ))))));
    cRam0000000100e11f70 = bRam0000000100e118c0 + (bRam0000000100e118c0 & 6) * -2 + '\x06';
    bRam0000000100e11f71 = bRam0000000100e118c1 ^ 0xa5;
    bRam0000000100e11f72 = bRam0000000100e118c2 ^ 0x7b;
    bRam0000000100e11f73 = bRam0000000100e118c3 ^ 0x53;
    bRam0000000100e11f74 = bRam0000000100e118c4 ^ 0x8f;
    bRam0000000100e11f75 = bRam0000000100e118c5 ^ 0x93;
    bRam0000000100e11f76 = bRam0000000100e118c6 ^ 0x55;
    bRam0000000100e11f77 = bRam0000000100e118c7 ^ 0x2b;
    uRam0000000100e11e23 =
         CONCAT17((byte)((ulong)uRam0000000100e11773 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdb8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11773 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdb8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11773 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdb8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11773 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdb8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11773 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdb8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11773 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdb8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11773 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdb8 >> 8),
                                                  (byte)uRam0000000100e11773 ^ (byte)_UNK_10099bdb8)
                                                  ))))));
    uRam0000000100e11e32 =
         CONCAT17((byte)((ulong)uRam0000000100e11782 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bd60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11782 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bd60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11782 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bd60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11782 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bd60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11782 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bd60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11782 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bd60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11782 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bd60 >> 8),
                                                  (byte)uRam0000000100e11782 ^ (byte)_UNK_10099bd60)
                                                  ))))));
    uRam0000000100e11e40 =
         CONCAT17((byte)((ulong)uRam0000000100e11790 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bdc0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11790 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bdc0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11790 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bdc0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11790 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bdc0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11790 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bdc0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11790 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bdc0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11790 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bdc0 >> 8),
                                                  (byte)uRam0000000100e11790 ^ (byte)_UNK_10099bdc0)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    bRam0000000100e11f78 = bRam0000000100e118c8 ^ 0x77;
    cRam0000000100e11f79 = bRam0000000100e118c9 + (bRam0000000100e118c9 & 0x2d) * -2 + -0x53;
    bRam0000000100e11f7a = bRam0000000100e118ca ^ 99;
    bRam0000000100e11f7b = bRam0000000100e118cb ^ 0x2b;
    bRam0000000100e11f7c = bRam0000000100e118cc ^ 0xa8;
    bRam0000000100e11f7d = bRam0000000100e118cd ^ 0xf3;
    bRam0000000100e11f7e = bRam0000000100e118ce ^ 0xd9;
    cRam0000000100e11f7f = bRam0000000100e118cf + (bRam0000000100e118cf & 0xcc) * -2 + 'L';
    bRam0000000100e11f80 = bRam0000000100e118d0 ^ 0x5f;
    cRam0000000100e11f81 = bRam0000000100e118d1 + (bRam0000000100e118d1 & 0xe3) * -2 + -0x1d;
    bRam0000000100e11f82 = bRam0000000100e118d2 ^ 0x76;
    bRam0000000100e11f83 = bRam0000000100e118d3 ^ 0x9e;
    bRam0000000100e11f84 = bRam0000000100e118d4 ^ 0x65;
    uRam0000000100e11f85 = uRam0000000100e118d5;
    cRam0000000100e11f8e = bRam0000000100e118de + (bRam0000000100e118de & 0x20) * -2 + -0x60;
    bRam0000000100e11f8f = bRam0000000100e118df ^ 0x44;
    bRam0000000100e11f90 = bRam0000000100e118e0 ^ 3;
    bRam0000000100e11f91 = bRam0000000100e118e1 ^ 0xde;
    bRam0000000100e11f92 = bRam0000000100e118e2 ^ 0xb5;
    bRam0000000100e11f93 = bRam0000000100e118e3 ^ 0x8c;
    bRam0000000100e11f94 = bRam0000000100e118e4 ^ 0x76;
    bRam0000000100e11f95 = bRam0000000100e118e5 ^ 0x43;
    cRam0000000100e11f96 = bRam0000000100e118e6 + (bRam0000000100e118e6 & 0x23) * -2 + -0x5d;
    bRam0000000100e11f97 = bRam0000000100e118e7 ^ 0xcc;
    bRam0000000100e11f98 = bRam0000000100e118e8 ^ 0x67;
    bRam0000000100e11f99 = bRam0000000100e118e9 ^ 0x43;
    bRam0000000100e11f9a = bRam0000000100e118ea ^ 0x3d;
    bRam0000000100e11f9b = bRam0000000100e118eb ^ 0x3b;
    cRam0000000100e11f9c = bRam0000000100e118ec + (bRam0000000100e118ec & 0x70) * -2 + -0x10;
    bRam0000000100e11f9d = bRam0000000100e118ed ^ 0xd0;
    bRam0000000100e11f9e = bRam0000000100e118ee ^ 0x99;
    bRam0000000100e11f9f = bRam0000000100e118ef ^ 0x69;
    bRam0000000100e11fa0 = bRam0000000100e118f0 ^ 0xaf;
    cRam0000000100e11fa1 = bRam0000000100e118f1 + (bRam0000000100e118f1 & 0x20) * -2 + ' ';
    bRam0000000100e11faa = bRam0000000100e118fa ^ 0xb0;
    bRam0000000100e11fab = bRam0000000100e118fb ^ 0xfb;
    cRam0000000100e11fac = bRam0000000100e118fc + (bRam0000000100e118fc & 0x7c) * -2 + -4;
    bRam0000000100e11fad = bRam0000000100e118fd ^ 0x99;
    bRam0000000100e11fae = bRam0000000100e118fe ^ 6;
    bRam0000000100e11faf = bRam0000000100e118ff ^ 7;
    bRam0000000100e11fb0 = bRam0000000100e11900 ^ 0xe1;
    bRam0000000100e11fb1 = bRam0000000100e11901 ^ 0x41;
    bRam0000000100e11fb2 = ~((bRam0000000100e11902 | 0x93) & (bRam0000000100e11902 ^ 0xff | 0x6c));
    cRam0000000100e11fb3 = bRam0000000100e11903 + (bRam0000000100e11903 & 0x4a) * -2 + 'J';
    bRam0000000100e11fb4 = bRam0000000100e11904 ^ 0x90;
    bRam0000000100e11fb5 = bRam0000000100e11905 ^ 0x26;
    bRam0000000100e11fb6 = bRam0000000100e11906 ^ 0x3c;
    bRam0000000100e11fb7 = ~((bRam0000000100e11907 | 0x4b) & (bRam0000000100e11907 ^ 0xff | 0xb4));
    bRam0000000100e11fb8 = bRam0000000100e11908 ^ 0x88;
    bRam0000000100e11fb9 = bRam0000000100e11909 ^ 9;
    cRam0000000100e11fba = bRam0000000100e1190a + (bRam0000000100e1190a & 0x3c) * -2 + '<';
    bRam0000000100e11fbb = bRam0000000100e1190b ^ 0xee;
    bRam0000000100e11fbc = bRam0000000100e1190c ^ 0x1c;
    bRam0000000100e11fbd = bRam0000000100e1190d ^ 0x88;
    bRam0000000100e11fbe = bRam0000000100e1190e ^ 0xc2;
    bRam0000000100e11fbf = bRam0000000100e1190f ^ 0x12;
    cRam0000000100e11fc0 = bRam0000000100e11910 + (bRam0000000100e11910 & 0x53) * -2 + 'S';
    bRam0000000100e11fc1 = bRam0000000100e11911 ^ 0x9a;
    cRam0000000100e11fc2 = bRam0000000100e11912 + (bRam0000000100e11912 & 0x59) * -2 + -0x27;
    cRam0000000100e11fcb = bRam0000000100e1191b + (bRam0000000100e1191b & 0xb) * -2 + '\v';
    bRam0000000100e11fcc = bRam0000000100e1191c ^ 0x79;
    bRam0000000100e11fcd = bRam0000000100e1191d ^ 0xd5;
    bRam0000000100e11fce = bRam0000000100e1191e ^ 0xdf;
    cRam0000000100e11fcf = bRam0000000100e1191f + (bRam0000000100e1191f & 0x4d) * -2 + -0x33;
    bRam0000000100e11fd0 = bRam0000000100e11920 ^ 0xcb;
    bRam0000000100e11fd1 = bRam0000000100e11921 ^ 0x8a;
    cRam0000000100e11fd2 = bRam0000000100e11922 + (bRam0000000100e11922 & 0xcc) * -2 + -0x34;
    cRam0000000100e11fe3 = bRam0000000100e11933 + (bRam0000000100e11933 & 1) * -2 + -0x7f;
    bRam0000000100e11fe4 = bRam0000000100e11934 ^ 0x26;
    bRam0000000100e11fe5 = bRam0000000100e11935 ^ 0xd0;
    bRam0000000100e11fe6 = bRam0000000100e11936 ^ 0xa9;
    bRam0000000100e11fe7 = bRam0000000100e11937 ^ 0xe6;
    cRam0000000100e11fe8 = bRam0000000100e11938 + (bRam0000000100e11938 & 0x1c) * -2 + '\x1c';
    bRam0000000100e11fe9 = bRam0000000100e11939 ^ 0xd8;
    cRam0000000100e11fea = bRam0000000100e1193a + (bRam0000000100e1193a & 0x42) * -2 + 'B';
    bRam0000000100e11feb = bRam0000000100e1193b ^ 0xcd;
    bRam0000000100e11fec = bRam0000000100e1193c ^ 0x4e;
    cRam0000000100e11fed = bRam0000000100e1193d + (bRam0000000100e1193d & 0x2e) * -2 + -0x52;
    bRam0000000100e11fee = bRam0000000100e1193e ^ 0x22;
    bRam0000000100e11fef = bRam0000000100e1193f ^ 0x3e;
    bRam0000000100e11ff0 = bRam0000000100e11940 ^ 0xf1;
    cRam0000000100e11ff1 = bRam0000000100e11941 + (bRam0000000100e11941 & 0x58) * -2 + -0x28;
    bRam0000000100e11ff2 = bRam0000000100e11942 ^ 0x3e;
    bRam0000000100e11ff3 = bRam0000000100e11943 ^ 0xd6;
    bRam0000000100e11ff4 = bRam0000000100e11944 ^ 0x3c;
    bRam0000000100e11ff5 = bRam0000000100e11945 ^ 0x5b;
    bRam0000000100e11ff6 = bRam0000000100e11946 ^ 2;
    bRam0000000100e11ff7 = bRam0000000100e11947 ^ 0xdf;
    cRam0000000100e11ff8 = bRam0000000100e11948 + (bRam0000000100e11948 & 0x17) * -2 + -0x69;
    bRam0000000100e11ff9 = bRam0000000100e11949 ^ 0x12;
    bRam0000000100e11ffa = bRam0000000100e1194a ^ 0xf7;
    cRam0000000100e11ffb = bRam0000000100e1194b + (bRam0000000100e1194b & 0x72) * -2 + -0xe;
    bRam0000000100e11ffc = bRam0000000100e1194c ^ 0x42;
    bRam0000000100e11ffd = bRam0000000100e1194d ^ 0x40;
    bRam0000000100e11ffe = bRam0000000100e1194e ^ 0x1a;
    cRam0000000100e11fff = bRam0000000100e1194f + (bRam0000000100e1194f & 100) * -2 + 'd';
    bRam0000000100e12008 = bRam0000000100e11958 ^ 0xb2;
    bRam0000000100e12009 = bRam0000000100e11959 ^ 0xea;
    bRam0000000100e1200a = bRam0000000100e1195a ^ 200;
    bRam0000000100e1200b = bRam0000000100e1195b ^ 0x9f;
    bRam0000000100e1200c = bRam0000000100e1195c ^ 0x2b;
    bRam0000000100e1200d = bRam0000000100e1195d ^ 0x41;
    cRam0000000100e1200e = bRam0000000100e1195e + (bRam0000000100e1195e & 0x46) * -2 + 'F';
    bRam0000000100e1200f = bRam0000000100e1195f ^ 0x40;
    bRam0000000100e12010 = bRam0000000100e11960 ^ 0x27;
    bRam0000000100e12011 = bRam0000000100e11961 ^ 0xcf;
    bRam0000000100e12012 = bRam0000000100e11962 ^ 0xa3;
    bRam0000000100e12013 = bRam0000000100e11963 ^ 0x35;
    bRam0000000100e12014 = bRam0000000100e11964 ^ 0x77;
    bRam0000000100e12015 = bRam0000000100e11965 ^ 0xec;
    cRam0000000100e12016 = bRam0000000100e11966 + (bRam0000000100e11966 & 0x1a) * -2 + -0x66;
    cRam0000000100e12017 = bRam0000000100e11967 + (bRam0000000100e11967 & 0xcf) * -2 + -0x31;
    bRam0000000100e12018 = bRam0000000100e11968 ^ 0x6a;
    bRam0000000100e12019 = bRam0000000100e11969 ^ 0x2a;
    bRam0000000100e1201a = bRam0000000100e1196a ^ 0x56;
    cRam0000000100e1201b = bRam0000000100e1196b + (bRam0000000100e1196b & 0xfb) * -2 + -5;
    bRam0000000100e1201c = bRam0000000100e1196c ^ 0xb2;
    bRam0000000100e1201d = bRam0000000100e1196d ^ 0x88;
    bRam0000000100e1201e = bRam0000000100e1196e ^ 0xd3;
    bRam0000000100e1201f = bRam0000000100e1196f ^ 0x1a;
    cRam0000000100e12020 = bRam0000000100e11970 + (bRam0000000100e11970 & 0xaa) * -2 + '*';
    bRam0000000100e12031 = bRam0000000100e11981 ^ 0x8e;
    bRam0000000100e12032 = bRam0000000100e11982 ^ 0x69;
    bRam0000000100e12033 = bRam0000000100e11983 ^ 0x32;
    bRam0000000100e12034 = bRam0000000100e11984 ^ 0xa1;
    bRam0000000100e12035 = bRam0000000100e11985 ^ 0xc4;
    cRam0000000100e12036 = bRam0000000100e11986 + (bRam0000000100e11986 & 0x2d) * -2 + -0x53;
    cRam0000000100e12037 = bRam0000000100e11987 + (bRam0000000100e11987 & 0x40) * '\x02' + '@';
    bRam0000000100e12038 = bRam0000000100e11988 ^ 7;
    bRam0000000100e12039 = bRam0000000100e11989 ^ 0xca;
    bRam0000000100e1203a = bRam0000000100e1198a ^ 0x1b;
    bRam0000000100e1203b = bRam0000000100e1198b ^ 0x7e;
    uRam0000000100e1203c = uRam0000000100e1198c;
    bRam0000000100e12045 = bRam0000000100e11995 ^ 0x81;
    cRam0000000100e12046 = bRam0000000100e11996 + (bRam0000000100e11996 & 0xe3) * -2 + 'c';
    bRam0000000100e12047 = bRam0000000100e11997 ^ 0xb3;
    bRam0000000100e12048 = bRam0000000100e11998 ^ 0xb1;
    bRam0000000100e12049 = bRam0000000100e11999 ^ 0x9f;
    bRam0000000100e1204a = bRam0000000100e1199a ^ 0x23;
    bRam0000000100e1204b = bRam0000000100e1199b ^ 0xc6;
    cRam0000000100e1204c = bRam0000000100e1199c + (bRam0000000100e1199c & 0xfd) * -2 + -3;
    cRam0000000100e1204d = bRam0000000100e1199d + (bRam0000000100e1199d & 0x58) * -2 + 'X';
    bRam0000000100e1204e = bRam0000000100e1199e ^ 0xef;
    bRam0000000100e1204f = bRam0000000100e1199f ^ 0xe4;
    cRam0000000100e12050 = bRam0000000100e119a0 + (bRam0000000100e119a0 & 0xc1) * -2 + 'A';
    bRam0000000100e12059 = bRam0000000100e119a9 ^ 0x66;
    bRam0000000100e1205a = bRam0000000100e119aa ^ 0xad;
    cRam0000000100e1205b = bRam0000000100e119ab + (bRam0000000100e119ab & 0xfb) * -2 + '{';
    bRam0000000100e1205c = bRam0000000100e119ac ^ 0xeb;
    cRam0000000100e1205d = bRam0000000100e119ad + (bRam0000000100e119ad & 0x29) * -2 + -0x57;
    bRam0000000100e1205e = bRam0000000100e119ae ^ 2;
    bRam0000000100e1205f = bRam0000000100e119af ^ 0xa7;
    bRam0000000100e12060 = bRam0000000100e119b0 ^ 0xd0;
    bRam0000000100e12061 = bRam0000000100e119b1 ^ 0x20;
    cRam0000000100e12062 = bRam0000000100e119b2 + (bRam0000000100e119b2 & 0xcc) * -2 + 'L';
    cRam0000000100e12063 = bRam0000000100e119b3 + (bRam0000000100e119b3 & 0x38) * -2 + -0x48;
    bRam0000000100e12064 = bRam0000000100e119b4 ^ 0x15;
    cRam0000000100e12065 = bRam0000000100e119b5 + (bRam0000000100e119b5 & 0x76) * -2 + 'v';
    bRam0000000100e12066 = bRam0000000100e119b6 ^ 0x9c;
    bRam0000000100e12067 = bRam0000000100e119b7 ^ 0x59;
    bRam0000000100e12068 = bRam0000000100e119b8 ^ 0xb5;
    bRam0000000100e12069 = bRam0000000100e119b9 ^ 0x9b;
    bRam0000000100e1206a = bRam0000000100e119ba ^ 0x50;
    bRam0000000100e1206b = bRam0000000100e119bb ^ 0xf3;
    cRam0000000100e1206c = bRam0000000100e119bc + (bRam0000000100e119bc & 0x3e) * -2 + -0x42;
    bRam0000000100e1206d = ~((bRam0000000100e119bd | 0x3f) & (~bRam0000000100e119bd | 0xc0));
    bRam0000000100e1206e = bRam0000000100e119be ^ 0x8e;
    bRam0000000100e1206f = bRam0000000100e119bf ^ 0x4f;
    cRam0000000100e12070 = bRam0000000100e119c0 + (bRam0000000100e119c0 & 0x50) * -2 + 'P';
    bRam0000000100e12071 = bRam0000000100e119c1 ^ 0xb7;
    bRam0000000100e12072 = bRam0000000100e119c2 ^ 0x1f;
    bRam0000000100e12073 = bRam0000000100e119c3 ^ 0x29;
    cRam0000000100e12074 = bRam0000000100e119c4 + (bRam0000000100e119c4 & 0x70) * -2 + 'p';
    bRam0000000100e12075 = ~((bRam0000000100e119c5 | 0x36) & (bRam0000000100e119c5 ^ 0xff | 0xc9));
    cRam0000000100e12076 = bRam0000000100e119c6 + (bRam0000000100e119c6 & 0x36) * -2 + '6';
    bRam0000000100e1207f = bRam0000000100e119cf ^ 0xf6;
    bRam0000000100e12080 = bRam0000000100e119d0 ^ 0x23;
    bRam0000000100e12081 = bRam0000000100e119d1 ^ 0x92;
    cRam0000000100e12082 = bRam0000000100e119d2 + (bRam0000000100e119d2 & 199) * -2 + -0x39;
    bRam0000000100e12083 = bRam0000000100e119d3 ^ 0x54;
    bRam0000000100e12084 = bRam0000000100e119d4 ^ 0xdb;
    bRam0000000100e12085 = bRam0000000100e119d5 ^ 0x9a;
    cRam0000000100e12086 = bRam0000000100e119d6 + (bRam0000000100e119d6 & 0x46) * -2 + 'F';
    uRam0000000100e12087 =
         CONCAT17((byte)((ulong)uRam0000000100e119d7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be38 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e119d7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be38 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e119d7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be38 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e119d7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be38 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e119d7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be38 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e119d7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be38 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e119d7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be38 >> 8),
                                                  (byte)uRam0000000100e119d7 ^ (byte)_UNK_10099be38)
                                                  ))))));
    bRam0000000100e1208f = bRam0000000100e119df ^ 0xc3;
    cRam0000000100e12090 = bRam0000000100e119e0 + (bRam0000000100e119e0 & 0x46) * -2 + 'F';
    bRam0000000100e12091 = bRam0000000100e119e1 ^ 0xa2;
    cRam0000000100e12092 = bRam0000000100e119e2 + (bRam0000000100e119e2 & 0x65) * -2 + -0x1b;
    cRam0000000100e12093 = bRam0000000100e119e3 + (bRam0000000100e119e3 & 0x1a) * -2 + '\x1a';
    bRam0000000100e12094 = bRam0000000100e119e4 ^ 0x9a;
    cRam0000000100e12095 = bRam0000000100e119e5 + (bRam0000000100e119e5 & 0x72) * -2 + -0xe;
    bRam0000000100e12096 = bRam0000000100e119e6 ^ 0xfe;
    bRam0000000100e12097 = bRam0000000100e119e7 ^ 0x1b;
    bRam0000000100e12098 = bRam0000000100e119e8 ^ 0xde;
    bRam0000000100e12099 = bRam0000000100e119e9 ^ 0xe0;
    cRam0000000100e1209a = bRam0000000100e119ea + (bRam0000000100e119ea & 0xaa) * -2 + '*';
    bRam0000000100e1209b = bRam0000000100e119eb ^ 0xd;
    cRam0000000100e1209c = bRam0000000100e119ec + (bRam0000000100e119ec & 2) * -2 + '\x02';
    bRam0000000100e1209d = bRam0000000100e119ed ^ 0xe4;
    bRam0000000100e1209e = bRam0000000100e119ee ^ 0x15;
    bRam0000000100e1209f = bRam0000000100e119ef ^ 0x20;
    bRam0000000100e120a0 = bRam0000000100e119f0 ^ 0x21;
    cRam0000000100e120a1 = bRam0000000100e119f1 + (bRam0000000100e119f1 & 0x14) * -2 + '\x14';
    bRam0000000100e120a2 = bRam0000000100e119f2 ^ 0x59;
    bRam0000000100e120a3 = bRam0000000100e119f3 ^ 0x6f;
    cRam0000000100e120a4 = bRam0000000100e119f4 + (bRam0000000100e119f4 & 0x76) * -2 + 'v';
    cRam0000000100e120ad = bRam0000000100e119fd + (bRam0000000100e119fd & 0x1b) * -2 + -0x65;
    bRam0000000100e120ae = bRam0000000100e119fe ^ 0x6d;
    bRam0000000100e120af = ~((bRam0000000100e119ff | 0x8b) & (bRam0000000100e119ff ^ 0xff | 0x74));
    bRam0000000100e120b0 = bRam0000000100e11a00 ^ 0x73;
    bRam0000000100e120b1 = bRam0000000100e11a01 ^ 0x69;
    bRam0000000100e120b2 = ~((bRam0000000100e11a02 | 0x6c) & (bRam0000000100e11a02 ^ 0xff | 0x93));
    bRam0000000100e120b3 = bRam0000000100e11a03 ^ 0x3e;
    bRam0000000100e120b4 = bRam0000000100e11a04 ^ 100;
    uRam0000000100e11f86 =
         CONCAT17((byte)((ulong)uRam0000000100e118d6 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e118d6 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e118d6 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e118d6 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e118d6 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e118d6 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e118d6 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be00 >> 8),
                                                  (byte)uRam0000000100e118d6 ^ (byte)_UNK_10099be00)
                                                  ))))));
    uRam0000000100e11fa2 =
         CONCAT17((byte)((ulong)uRam0000000100e118f2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e118f2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e118f2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e118f2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e118f2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e118f2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e118f2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be08 >> 8),
                                                  (byte)uRam0000000100e118f2 ^ (byte)_UNK_10099be08)
                                                  ))))));
    uRam0000000100e11fc3 =
         CONCAT17((byte)((ulong)uRam0000000100e11913 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11913 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11913 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11913 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11913 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11913 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11913 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be10 >> 8),
                                                  (byte)uRam0000000100e11913 ^ (byte)_UNK_10099be10)
                                                  ))))));
    uRam0000000100e11fd3 =
         CONCAT17((byte)((ulong)uRam0000000100e11923 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c150 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11923 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c150 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11923 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c150 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11923 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c150 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11923 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c150 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11923 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c150 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11923 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c150 >> 8),
                                                  (byte)uRam0000000100e11923 ^ (byte)_UNK_10099c150)
                                                  ))))));
    uRam0000000100e11fdb =
         CONCAT17((byte)((ulong)uRam0000000100e1192b >> 0x38) ^
                  (byte)((ulong)_UNK_10099c158 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1192b >> 0x30) ^
                           (byte)((ulong)_UNK_10099c158 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1192b >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c158 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1192b >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c158 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1192b >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c158 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1192b >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c158 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1192b >> 8) ^
                                                  (byte)((ulong)_UNK_10099c158 >> 8),
                                                  (byte)uRam0000000100e1192b ^ (byte)_UNK_10099c158)
                                                  ))))));
    uRam0000000100e12000 =
         CONCAT17((byte)((ulong)uRam0000000100e11950 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11950 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11950 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11950 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11950 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11950 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11950 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be18 >> 8),
                                                  (byte)uRam0000000100e11950 ^ (byte)_UNK_10099be18)
                                                  ))))));
    uRam0000000100e12021 =
         CONCAT17((byte)((ulong)uRam0000000100e11971 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c160 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11971 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c160 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11971 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c160 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11971 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c160 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11971 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c160 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11971 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c160 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11971 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c160 >> 8),
                                                  (byte)uRam0000000100e11971 ^ (byte)_UNK_10099c160)
                                                  ))))));
    uRam0000000100e12029 =
         CONCAT17((byte)((ulong)uRam0000000100e11979 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c168 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11979 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c168 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11979 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c168 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11979 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c168 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11979 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c168 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11979 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c168 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11979 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c168 >> 8),
                                                  (byte)uRam0000000100e11979 ^ (byte)_UNK_10099c168)
                                                  ))))));
    uRam0000000100e1203d =
         CONCAT17((byte)((ulong)uRam0000000100e1198d >> 0x38) ^
                  (byte)((ulong)_UNK_10099be20 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e1198d >> 0x30) ^
                           (byte)((ulong)_UNK_10099be20 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e1198d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be20 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e1198d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be20 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e1198d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be20 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e1198d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be20 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e1198d >> 8) ^
                                                  (byte)((ulong)_UNK_10099be20 >> 8),
                                                  (byte)uRam0000000100e1198d ^ (byte)_UNK_10099be20)
                                                  ))))));
    uRam0000000100e12051 =
         CONCAT17((byte)((ulong)uRam0000000100e119a1 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be28 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e119a1 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be28 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e119a1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be28 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e119a1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be28 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e119a1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be28 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e119a1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be28 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e119a1 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be28 >> 8),
                                                  (byte)uRam0000000100e119a1 ^ (byte)_UNK_10099be28)
                                                  ))))));
    uRam0000000100e12077 =
         CONCAT17((byte)((ulong)uRam0000000100e119c7 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be30 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e119c7 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be30 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e119c7 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be30 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e119c7 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be30 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e119c7 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be30 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e119c7 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be30 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e119c7 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be30 >> 8),
                                                  (byte)uRam0000000100e119c7 ^ (byte)_UNK_10099be30)
                                                  ))))));
    uRam0000000100e120a5 =
         CONCAT17((byte)((ulong)uRam0000000100e119f5 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be40 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e119f5 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be40 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e119f5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be40 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e119f5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be40 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e119f5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be40 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e119f5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be40 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e119f5 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be40 >> 8),
                                                  (byte)uRam0000000100e119f5 ^ (byte)_UNK_10099be40)
                                                  ))))));
    bRam0000000100e120bd = bRam0000000100e11a0d ^ 0xe1;
    cRam0000000100e120be = bRam0000000100e11a0e + (bRam0000000100e11a0e & 0x5b) * -2 + -0x25;
    bRam0000000100e120bf = bRam0000000100e11a0f ^ 0x19;
    cRam0000000100e120c0 = bRam0000000100e11a10 + (bRam0000000100e11a10 & 0x52) * -2 + -0x2e;
    bRam0000000100e120d9 = bRam0000000100e11a29 ^ 0xa6;
    bRam0000000100e120da = bRam0000000100e11a2a ^ 0x9d;
    bRam0000000100e120db = bRam0000000100e11a2b ^ 0xf6;
    bRam0000000100e120dc = bRam0000000100e11a2c ^ 0x36;
    uRam0000000100e120dd = uRam0000000100e11a2d;
    bRam0000000100e120de = bRam0000000100e11a2e ^ 0x1a;
    bRam0000000100e120df = bRam0000000100e11a2f ^ 0xa2;
    bRam0000000100e120e0 = bRam0000000100e11a30 ^ 0xfe;
    bRam0000000100e120e1 = bRam0000000100e11a31 ^ 0x80;
    bRam0000000100e120e2 = ~((bRam0000000100e11a32 | 0xb) & (bRam0000000100e11a32 ^ 0xff | 0xf4));
    bRam0000000100e120e3 = bRam0000000100e11a33 ^ 0x5b;
    bRam0000000100e120e4 = bRam0000000100e11a34 ^ 0x36;
    bRam0000000100e120e5 = bRam0000000100e11a35 ^ 0xe4;
    bRam0000000100e120e6 = bRam0000000100e11a36 ^ 0xe2;
    cRam0000000100e120e7 = bRam0000000100e11a37 + (bRam0000000100e11a37 & 0x2f) * -2 + -0x51;
    cRam0000000100e120e8 = bRam0000000100e11a38 + (bRam0000000100e11a38 & 0x4b) * -2 + 'K';
    bRam0000000100e120e9 = bRam0000000100e11a39 ^ 0xfa;
    cRam0000000100e120ea = bRam0000000100e11a3a + (bRam0000000100e11a3a & 0x2c) * -2 + ',';
    bRam0000000100e120eb = bRam0000000100e11a3b ^ 0x4f;
    bRam0000000100e120ec = bRam0000000100e11a3c ^ 0xcb;
    bRam0000000100e120ed = bRam0000000100e11a3d ^ 0xf7;
    bRam0000000100e120ee = bRam0000000100e11a3e ^ 0x9f;
    bRam0000000100e120ef = ~((bRam0000000100e11a3f | 0x71) & (bRam0000000100e11a3f ^ 0xff | 0x8e));
    bRam0000000100e120f0 = bRam0000000100e11a40 ^ 0x2a;
    cRam0000000100e120f1 = bRam0000000100e11a41 + (bRam0000000100e11a41 & 0xb) * -2 + '\v';
    bRam0000000100e120fa = bRam0000000100e11a4a ^ 0x7d;
    bRam0000000100e120fb = bRam0000000100e11a4b ^ 0xbd;
    bRam0000000100e120fc = ~((bRam0000000100e11a4c | 0xd3) & (bRam0000000100e11a4c ^ 0xff | 0x2c));
    bRam0000000100e120fd = bRam0000000100e11a4d ^ 0x89;
    cRam0000000100e120fe = bRam0000000100e11a4e + (bRam0000000100e11a4e & 0x6c) * -2 + 'l';
    cRam0000000100e120ff = bRam0000000100e11a4f + (bRam0000000100e11a4f & 0xc1) * -2 + 'A';
    cRam0000000100e12100 = bRam0000000100e11a50 + (bRam0000000100e11a50 & 0xf9) * -2 + -7;
    bRam0000000100e12101 = bRam0000000100e11a51 ^ 0xeb;
    bRam0000000100e12102 = bRam0000000100e11a52 ^ 0x9a;
    bRam0000000100e12103 = bRam0000000100e11a53 ^ 0xd;
    bRam0000000100e12104 = bRam0000000100e11a54 ^ 0x26;
    bRam0000000100e12105 = bRam0000000100e11a55 ^ 0x30;
    bRam0000000100e12106 = bRam0000000100e11a56 ^ 0x24;
    bRam0000000100e12107 = bRam0000000100e11a57 ^ 0x3f;
    cRam0000000100e12108 = bRam0000000100e11a58 + (bRam0000000100e11a58 & 0x1c) * -2 + '\x1c';
    bRam0000000100e12109 = bRam0000000100e11a59 ^ 0x91;
    bRam0000000100e1210a = bRam0000000100e11a5a ^ 0x15;
    bRam0000000100e1210b = bRam0000000100e11a5b ^ 0x20;
    bRam0000000100e1210c = bRam0000000100e11a5c ^ 0x8e;
    bRam0000000100e1210d = bRam0000000100e11a5d ^ 0x1f;
    bRam0000000100e1210e = bRam0000000100e11a5e ^ 0xa0;
    bRam0000000100e1210f = bRam0000000100e11a5f ^ 0xae;
    cRam0000000100e12110 = bRam0000000100e11a60 + (bRam0000000100e11a60 & 0x78) * -2 + -8;
    bRam0000000100e12111 = bRam0000000100e11a61 ^ 0xe7;
    cRam0000000100e12112 = bRam0000000100e11a62 + (bRam0000000100e11a62 & 199) * -2 + 'G';
    bRam0000000100e12113 = bRam0000000100e11a63 ^ 200;
    bRam0000000100e12114 = bRam0000000100e11a64 ^ 0x3f;
    bRam0000000100e12115 = bRam0000000100e11a65 ^ 0x44;
    bRam0000000100e12116 = bRam0000000100e11a66 ^ 3;
    bRam0000000100e12117 = bRam0000000100e11a67 ^ 0x2e;
    bRam0000000100e12118 = bRam0000000100e11a68 ^ 0xd6;
    cRam0000000100e12119 = bRam0000000100e11a69 + (bRam0000000100e11a69 & 0x3f) * -2 + '?';
    bRam0000000100e1211a = bRam0000000100e11a6a ^ 0x66;
    cRam0000000100e1211b = bRam0000000100e11a6b + (bRam0000000100e11a6b & 4) * -2 + '\x04';
    cRam0000000100e12124 = bRam0000000100e11a74 + (bRam0000000100e11a74 & 0x1f) * -2 + -0x61;
    cRam0000000100e12125 = bRam0000000100e11a75 + (bRam0000000100e11a75 & 0x2c) * -2 + ',';
    bRam0000000100e1212e = bRam0000000100e11a7e ^ 0xb8;
    bRam0000000100e1212f = bRam0000000100e11a7f ^ 0x98;
    bRam0000000100e12130 = bRam0000000100e11a80 ^ 0xf8;
    bRam0000000100e12131 = bRam0000000100e11a81 ^ 0x5c;
    bRam0000000100e12132 = bRam0000000100e11a82 ^ 0x68;
    cRam0000000100e12133 = bRam0000000100e11a83 + (bRam0000000100e11a83 & 0x7a) * -2 + 'z';
    bRam0000000100e12134 = bRam0000000100e11a84 ^ 0x53;
    bRam0000000100e12135 = bRam0000000100e11a85 ^ 0x19;
    bRam0000000100e12136 = bRam0000000100e11a86 ^ 199;
    cRam0000000100e12137 = bRam0000000100e11a87 + (bRam0000000100e11a87 & 0xe) * -2 + '\x0e';
    bRam0000000100e12138 = bRam0000000100e11a88 ^ 0x26;
    cRam0000000100e12139 = bRam0000000100e11a89 + (bRam0000000100e11a89 & 0x4b) * -2 + 'K';
    bRam0000000100e1213a = bRam0000000100e11a8a ^ 0x17;
    bRam0000000100e1213b = bRam0000000100e11a8b ^ 1;
    bRam0000000100e1213c = bRam0000000100e11a8c ^ 0xae;
    bRam0000000100e1213d = bRam0000000100e11a8d ^ 0x10;
    cRam0000000100e1213e = bRam0000000100e11a8e + (bRam0000000100e11a8e & 0x20) * -2 + ' ';
    bRam0000000100e12147 = bRam0000000100e11a97 ^ 0x93;
    bRam0000000100e12148 = bRam0000000100e11a98 ^ 0x57;
    bRam0000000100e12149 = bRam0000000100e11a99 ^ 0x66;
    bRam0000000100e1214a = bRam0000000100e11a9a ^ 0xa5;
    bRam0000000100e1214b = bRam0000000100e11a9b ^ 0xd8;
    cRam0000000100e1214c = bRam0000000100e11a9c + (bRam0000000100e11a9c & 0xbb) * -2 + -0x45;
    bRam0000000100e1214d = bRam0000000100e11a9d ^ 0x47;
    cRam0000000100e1214e = bRam0000000100e11a9e + (bRam0000000100e11a9e & 10) * -2 + -0x76;
    bRam0000000100e1214f = bRam0000000100e11a9f ^ 0x27;
    bRam0000000100e12150 = bRam0000000100e11aa0 ^ 0x84;
    cRam0000000100e12151 = bRam0000000100e11aa1 + (bRam0000000100e11aa1 & 0x60) * -2 + -0x20;
    bRam0000000100e12152 = bRam0000000100e11aa2 ^ 0x77;
    bRam0000000100e12153 = bRam0000000100e11aa3 ^ 0xe1;
    bRam0000000100e12154 = bRam0000000100e11aa4 ^ 0x42;
    bRam0000000100e12155 = bRam0000000100e11aa5 ^ 0x42;
    bRam0000000100e12156 = bRam0000000100e11aa6 ^ 0xbe;
    bRam0000000100e12157 = bRam0000000100e11aa7 ^ 0xfb;
    cRam0000000100e12158 = bRam0000000100e11aa8 + (bRam0000000100e11aa8 & 0x25) * -2 + '%';
    bRam0000000100e12159 = bRam0000000100e11aa9 ^ 0xb9;
    cRam0000000100e1215a = bRam0000000100e11aaa + (bRam0000000100e11aaa & 0xfb) * -2 + '{';
    bRam0000000100e1215b = bRam0000000100e11aab ^ 0x20;
    bRam0000000100e1215c = bRam0000000100e11aac ^ 0x25;
    bRam0000000100e1215d = bRam0000000100e11aad ^ 0xa1;
    bRam0000000100e1215e = bRam0000000100e11aae ^ 0x73;
    bRam0000000100e1215f = bRam0000000100e11aaf ^ 0xe1;
    cRam0000000100e12160 = bRam0000000100e11ab0 + (bRam0000000100e11ab0 & 0x6a) * -2 + 'j';
    bRam0000000100e12169 = bRam0000000100e11ab9 ^ 0x3c;
    bRam0000000100e1216a = bRam0000000100e11aba ^ 0x11;
    bRam0000000100e1216b = bRam0000000100e11abb ^ 0xbd;
    uRam0000000100e1216c = uRam0000000100e11abc;
    bRam0000000100e1216d = bRam0000000100e11abd ^ 0x23;
    bRam0000000100e1216e = bRam0000000100e11abe ^ 0x11;
    bRam0000000100e1216f = bRam0000000100e11abf ^ 0x26;
    bRam0000000100e12170 = bRam0000000100e11ac0 ^ 0x88;
    bRam0000000100e12171 = bRam0000000100e11ac1 ^ 4;
    cRam0000000100e12172 = bRam0000000100e11ac2 + (bRam0000000100e11ac2 & 0x2f) * -2 + '/';
    bRam0000000100e12173 = bRam0000000100e11ac3 ^ 0x1a;
    cRam0000000100e12174 = bRam0000000100e11ac4 + (bRam0000000100e11ac4 & 0x58) * -2 + -0x28;
    bRam0000000100e12175 = bRam0000000100e11ac5 ^ 0xd8;
    bRam0000000100e12176 = bRam0000000100e11ac6 ^ 199;
    bRam0000000100e12177 = bRam0000000100e11ac7 ^ 0x5d;
    bRam0000000100e12178 = bRam0000000100e11ac8 ^ 0x78;
    bRam0000000100e12179 = bRam0000000100e11ac9 ^ 0xfe;
    cRam0000000100e1217a = bRam0000000100e11aca + (bRam0000000100e11aca & 0xf3) * -2 + -0xd;
    cRam0000000100e1217b = bRam0000000100e11acb + (bRam0000000100e11acb & 0x59) * -2 + -0x27;
    bRam0000000100e1217c = bRam0000000100e11acc ^ 0x28;
    cRam0000000100e1217d = bRam0000000100e11acd + (bRam0000000100e11acd & 0xee) * -2 + -0x12;
    cRam0000000100e12186 = bRam0000000100e11ad6 + (bRam0000000100e11ad6 & 0x7a) * -2 + 'z';
    bRam0000000100e12187 = bRam0000000100e11ad7 ^ 6;
    bRam0000000100e12188 = bRam0000000100e11ad8 ^ 0xfd;
    cRam0000000100e12189 = bRam0000000100e11ad9 + (bRam0000000100e11ad9 & 0xb) * -2 + -0x75;
    bRam0000000100e12192 = bRam0000000100e11ae2 ^ 0xae;
    cRam0000000100e12193 = bRam0000000100e11ae3 + (bRam0000000100e11ae3 & 0x36) * -2 + -0x4a;
    bRam0000000100e12194 = bRam0000000100e11ae4 ^ 0xf3;
    bRam0000000100e12195 = bRam0000000100e11ae5 ^ 0x78;
    bRam0000000100e12196 = bRam0000000100e11ae6 ^ 0xfe;
    cRam0000000100e12197 = bRam0000000100e11ae7 + (bRam0000000100e11ae7 & 0x1d) * -2 + -99;
    bRam0000000100e12198 = bRam0000000100e11ae8 ^ 0xfa;
    bRam0000000100e12199 = bRam0000000100e11ae9 ^ 0x2b;
    bRam0000000100e1219a = bRam0000000100e11aea ^ 0xd7;
    bRam0000000100e1219b = ~((bRam0000000100e11aeb | 0x6b) & (bRam0000000100e11aeb ^ 0xff | 0x94));
    bRam0000000100e1219c = bRam0000000100e11aec ^ 0x22;
    bRam0000000100e1219d = bRam0000000100e11aed ^ 0xfb;
    cRam0000000100e1219e = bRam0000000100e11aee + (bRam0000000100e11aee & 0x50) * -2 + 'P';
    bRam0000000100e1219f = bRam0000000100e11aef ^ 0x1e;
    cRam0000000100e121a0 = bRam0000000100e11af0 + (bRam0000000100e11af0 & 0x56) * -2 + -0x2a;
    bRam0000000100e121a1 = bRam0000000100e11af1 ^ 0x82;
    cRam0000000100e121a2 = bRam0000000100e11af2 + (bRam0000000100e11af2 & 0x27) * -2 + '\'';
    bRam0000000100e121ab = bRam0000000100e11afb ^ 0x4a;
    bRam0000000100e121ac = ~bRam0000000100e11afc;
    bRam0000000100e121ad = bRam0000000100e11afd ^ 0x92;
    bRam0000000100e121ae = bRam0000000100e11afe ^ 0xe1;
    bRam0000000100e121af = bRam0000000100e11aff ^ 0x25;
    cRam0000000100e121b0 = bRam0000000100e11b00 + (bRam0000000100e11b00 & 0xc1) * -2 + 'A';
    bRam0000000100e121b1 = bRam0000000100e11b01 ^ 0x9b;
    cRam0000000100e121b2 = bRam0000000100e11b02 + (bRam0000000100e11b02 & 0x10) * -2 + -0x70;
    bRam0000000100e121b3 = bRam0000000100e11b03 ^ 100;
    bRam0000000100e121b4 = bRam0000000100e11b04 ^ 0xdf;
    bRam0000000100e121b5 = bRam0000000100e11b05 ^ 0x37;
    bRam0000000100e121b6 = ~((bRam0000000100e11b06 | 0xca) & (bRam0000000100e11b06 ^ 0xff | 0x35));
    cRam0000000100e121b7 = bRam0000000100e11b07 + (bRam0000000100e11b07 & 0x22) * -2 + '\"';
    bRam0000000100e121b8 = bRam0000000100e11b08 ^ 0xa0;
    cRam0000000100e121b9 = bRam0000000100e11b09 + (bRam0000000100e11b09 & 0xee) * -2 + -0x12;
    cRam0000000100e121ba = bRam0000000100e11b0a + (bRam0000000100e11b0a & 0xcc) * -2 + -0x34;
    bRam0000000100e121bb = bRam0000000100e11b0b ^ 0x5b;
    cRam0000000100e121bc = bRam0000000100e11b0c + (bRam0000000100e11b0c & 0x25) * -2 + '%';
    bRam0000000100e121bd = bRam0000000100e11b0d ^ 0x7b;
    bRam0000000100e121be = bRam0000000100e11b0e ^ 0x47;
    bRam0000000100e121bf = bRam0000000100e11b0f ^ 0x3d;
    bRam0000000100e121c0 = bRam0000000100e11b10 ^ 0xbc;
    cRam0000000100e121c1 = bRam0000000100e11b11 + (bRam0000000100e11b11 & 0x2f) * -2 + -0x51;
    bRam0000000100e121c2 = bRam0000000100e11b12 ^ 0x1c;
    bRam0000000100e121c3 = bRam0000000100e11b13 ^ 0xe4;
    bRam0000000100e121c4 = bRam0000000100e11b14 ^ 4;
    bRam0000000100e121c5 = bRam0000000100e11b15 ^ 0x5d;
    bRam0000000100e121c6 = bRam0000000100e11b16 ^ 0x41;
    bRam0000000100e121c7 = bRam0000000100e11b17 ^ 0xfc;
    bRam0000000100e121c8 = bRam0000000100e11b18 ^ 0xe2;
    cRam0000000100e121c9 = bRam0000000100e11b19 + (bRam0000000100e11b19 & 199) * -2 + -0x39;
    bRam0000000100e121ca = bRam0000000100e11b1a ^ 0x85;
    bRam0000000100e121cb = bRam0000000100e11b1b ^ 0x79;
    bRam0000000100e121cc = bRam0000000100e11b1c ^ 0x14;
    bRam0000000100e121cd = bRam0000000100e11b1d ^ 0xa4;
    bRam0000000100e121ce = bRam0000000100e11b1e ^ 0xd2;
    bRam0000000100e121cf = bRam0000000100e11b1f ^ 0xc3;
    cRam0000000100e121d0 = bRam0000000100e11b20 + (bRam0000000100e11b20 & 0x4d) * -2 + 'M';
    bRam0000000100e121d1 = bRam0000000100e11b21 ^ 0x67;
    bRam0000000100e121d2 = bRam0000000100e11b22 ^ 0xb6;
    cRam0000000100e121d3 = bRam0000000100e11b23 + (bRam0000000100e11b23 & 0x22) * -2 + -0x5e;
    cRam0000000100e121d4 = bRam0000000100e11b24 + (bRam0000000100e11b24 & 0x35) * -2 + -0x4b;
    bRam0000000100e121d5 = bRam0000000100e11b25 ^ 0x3b;
    bRam0000000100e121d6 = bRam0000000100e11b26 ^ 0x61;
    cRam0000000100e121d7 = bRam0000000100e11b27 + (bRam0000000100e11b27 & 0x7e) * -2 + '~';
    cRam0000000100e121d8 = bRam0000000100e11b28 + (bRam0000000100e11b28 & 0xaa) * -2 + '*';
    bRam0000000100e121d9 = bRam0000000100e11b29 ^ 0xa0;
    cRam0000000100e121da = bRam0000000100e11b2a + (bRam0000000100e11b2a & 0x28) * -2 + -0x58;
    cRam0000000100e121db = bRam0000000100e11b2b + (bRam0000000100e11b2b & 0x76) * -2 + 'v';
    bRam0000000100e121dc = bRam0000000100e11b2c ^ 0xf4;
    bRam0000000100e121dd = bRam0000000100e11b2d ^ 0xec;
    cRam0000000100e121de = '\x7f' - cRam0000000100e11b2e;
    uRam0000000100e121df =
         CONCAT17((byte)((ulong)uRam0000000100e11b2f >> 0x38) ^
                  (byte)((ulong)_UNK_10099be98 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b2f >> 0x30) ^
                           (byte)((ulong)_UNK_10099be98 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b2f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be98 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b2f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be98 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b2f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be98 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b2f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be98 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b2f >> 8) ^
                                                  (byte)((ulong)_UNK_10099be98 >> 8),
                                                  (byte)uRam0000000100e11b2f ^ (byte)_UNK_10099be98)
                                                  ))))));
    cRam0000000100e121e7 = bRam0000000100e11b37 + (bRam0000000100e11b37 & 0x76) * -2 + 'v';
    bRam0000000100e121e8 = bRam0000000100e11b38 ^ 0xda;
    bRam0000000100e121e9 = bRam0000000100e11b39 ^ 0x3a;
    bRam0000000100e121ea = bRam0000000100e11b3a ^ 0x7a;
    bRam0000000100e121eb = bRam0000000100e11b3b ^ 0xfe;
    cRam0000000100e121ec = bRam0000000100e11b3c + (bRam0000000100e11b3c & 100) * -2 + 'd';
    bRam0000000100e121ed = bRam0000000100e11b3d ^ 0xd3;
    bRam0000000100e121ee = bRam0000000100e11b3e ^ 0xaa;
    cRam0000000100e121ef = bRam0000000100e11b3f + (bRam0000000100e11b3f & 0x29) * -2 + -0x57;
    cRam0000000100e121f0 = bRam0000000100e11b40 + (bRam0000000100e11b40 & 0x42) * -2 + -0x3e;
    bRam0000000100e121f1 = bRam0000000100e11b41 ^ 0x24;
    bRam0000000100e121f2 = bRam0000000100e11b42 ^ 0xdf;
    bRam0000000100e121f3 = bRam0000000100e11b43 ^ 0xa2;
    cRam0000000100e121f4 = bRam0000000100e11b44 + (bRam0000000100e11b44 & 0x11) * -2 + '\x11';
    bRam0000000100e121f5 = bRam0000000100e11b45 ^ 100;
    bRam0000000100e121f6 = bRam0000000100e11b46 ^ 0xb8;
    bRam0000000100e121f7 = bRam0000000100e11b47 ^ 0xfb;
    bRam0000000100e121f8 = bRam0000000100e11b48 ^ 0xe;
    cRam0000000100e121f9 = bRam0000000100e11b49 + (bRam0000000100e11b49 & 0xf) * -2 + -0x71;
    bRam0000000100e121fa = bRam0000000100e11b4a ^ 0x99;
    cRam0000000100e121fb = bRam0000000100e11b4b + (bRam0000000100e11b4b & 0xdf) * -2 + -0x21;
    uRam0000000100e121fc =
         CONCAT17((byte)((ulong)uRam0000000100e11b4c >> 0x38) ^
                  (byte)((ulong)_UNK_10099bea0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b4c >> 0x30) ^
                           (byte)((ulong)_UNK_10099bea0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b4c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bea0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b4c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bea0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b4c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bea0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b4c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bea0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b4c >> 8) ^
                                                  (byte)((ulong)_UNK_10099bea0 >> 8),
                                                  (byte)uRam0000000100e11b4c ^ (byte)_UNK_10099bea0)
                                                  ))))));
    bRam0000000100e12204 = bRam0000000100e11b54 ^ 0x6b;
    bRam0000000100e12205 = bRam0000000100e11b55 ^ 0x72;
    cRam0000000100e12206 = bRam0000000100e11b56 + (bRam0000000100e11b56 & 0x62) * -2 + -0x1e;
    bRam0000000100e12207 = bRam0000000100e11b57 ^ 0x70;
    bRam0000000100e12208 = bRam0000000100e11b58 ^ 0xe4;
    bRam0000000100e12209 = bRam0000000100e11b59 ^ 0xed;
    cRam0000000100e1220a = bRam0000000100e11b5a + (bRam0000000100e11b5a & 0x20) * -2 + ' ';
    cRam0000000100e1220b = bRam0000000100e11b5b + (bRam0000000100e11b5b & 0xf) * -2 + -0x71;
    bRam0000000100e1220c = ~((bRam0000000100e11b5c | 0x1d) & (bRam0000000100e11b5c ^ 0xff | 0xe2));
    bRam0000000100e1220d = bRam0000000100e11b5d ^ 0xf8;
    bRam0000000100e1220e = bRam0000000100e11b5e ^ 0xb1;
    bRam0000000100e1220f = bRam0000000100e11b5f ^ 0xd2;
    cRam0000000100e12210 = bRam0000000100e11b60 + (bRam0000000100e11b60 & 0x22) * -2 + '\"';
    bRam0000000100e12211 = ~((bRam0000000100e11b61 | 0xce) & (bRam0000000100e11b61 ^ 0xff | 0x31));
    bRam0000000100e12212 = bRam0000000100e11b62 ^ 0xed;
    bRam0000000100e12213 = bRam0000000100e11b63 ^ 0x9c;
    cRam0000000100e12214 = bRam0000000100e11b64 + (bRam0000000100e11b64 & 0x76) * -2 + -10;
    bRam0000000100e12215 = bRam0000000100e11b65 ^ 0x51;
    cRam0000000100e12216 = bRam0000000100e11b66 + (bRam0000000100e11b66 & 0x66) * -2 + 'f';
    bRam0000000100e12217 = bRam0000000100e11b67 ^ 0xd6;
    bRam0000000100e12218 = bRam0000000100e11b68 ^ 0x86;
    cRam0000000100e12219 = bRam0000000100e11b69 + (bRam0000000100e11b69 & 0x48) * -2 + 'H';
    bRam0000000100e1221a = bRam0000000100e11b6a ^ 0xc1;
    bRam0000000100e1221b = bRam0000000100e11b6b ^ 0x7f;
    bRam0000000100e1221c = bRam0000000100e11b6c ^ 0x6a;
    bRam0000000100e1221d = bRam0000000100e11b6d ^ 0xbc;
    cRam0000000100e1221e = bRam0000000100e11b6e + (bRam0000000100e11b6e & 9) * -2 + -0x77;
    bRam0000000100e1221f = bRam0000000100e11b6f ^ 0xa3;
    bRam0000000100e12220 = bRam0000000100e11b70 ^ 0x30;
    bRam0000000100e12221 = bRam0000000100e11b71 ^ 0xde;
    bRam0000000100e12222 = bRam0000000100e11b72 ^ 0x84;
    cRam0000000100e12223 = bRam0000000100e11b73 + (bRam0000000100e11b73 & 0x78) * -2 + 'x';
    bRam0000000100e12224 = bRam0000000100e11b74 ^ 0xd2;
    cRam0000000100e12225 = bRam0000000100e11b75 + (bRam0000000100e11b75 & 0x70) * -2 + -0x10;
    bRam0000000100e12226 = bRam0000000100e11b76 ^ 0x9b;
    bRam0000000100e12227 = bRam0000000100e11b77 ^ 0x58;
    cRam0000000100e12228 = bRam0000000100e11b78 + (bRam0000000100e11b78 & 0x48) * -2 + 'H';
    uRam0000000100e12229 =
         CONCAT17((byte)((ulong)uRam0000000100e11b79 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c180 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b79 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c180 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b79 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c180 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b79 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c180 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b79 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c180 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b79 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c180 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b79 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c180 >> 8),
                                                  (byte)uRam0000000100e11b79 ^ (byte)_UNK_10099c180)
                                                  ))))));
    uRam0000000100e12231 =
         CONCAT17((byte)((ulong)uRam0000000100e11b81 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c188 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b81 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c188 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b81 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c188 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b81 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c188 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b81 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c188 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b81 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c188 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b81 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c188 >> 8),
                                                  (byte)uRam0000000100e11b81 ^ (byte)_UNK_10099c188)
                                                  ))))));
    bRam0000000100e12239 = bRam0000000100e11b89 ^ 0x65;
    bRam0000000100e1223a = bRam0000000100e11b8a ^ 0x57;
    bRam0000000100e1223b = bRam0000000100e11b8b ^ 0x71;
    cRam0000000100e1223c = bRam0000000100e11b8c + (bRam0000000100e11b8c & 0xf7) * -2 + 'w';
    bRam0000000100e12245 = bRam0000000100e11b95 ^ 0x7d;
    cRam0000000100e12246 = bRam0000000100e11b96 + (bRam0000000100e11b96 & 0x7e) * -2 + -2;
    bRam0000000100e12247 = bRam0000000100e11b97 ^ 0x7b;
    uRam0000000100e120f2 =
         CONCAT17((byte)((ulong)uRam0000000100e11a42 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be58 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a42 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be58 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a42 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be58 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a42 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be58 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a42 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be58 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a42 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be58 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a42 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be58 >> 8),
                                                  (byte)uRam0000000100e11a42 ^ (byte)_UNK_10099be58)
                                                  ))))));
    bRam0000000100e12248 = bRam0000000100e11b98 ^ 0x2d;
    cRam0000000100e12249 = bRam0000000100e11b99 + (bRam0000000100e11b99 & 0x45) * -2 + -0x3b;
    bRam0000000100e1224a = bRam0000000100e11b9a ^ 0x2c;
    bRam0000000100e1224b = bRam0000000100e11b9b ^ 0xc6;
    bRam0000000100e1224c = bRam0000000100e11b9c ^ 9;
    cRam0000000100e1224d = bRam0000000100e11b9d + (bRam0000000100e11b9d & 0x50) * -2 + -0x30;
    uRam0000000100e1224e =
         CONCAT17((byte)((ulong)uRam0000000100e11b9e >> 0x38) ^
                  (byte)((ulong)_UNK_10099beb0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b9e >> 0x30) ^
                           (byte)((ulong)_UNK_10099beb0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b9e >> 0x28) ^
                                    (byte)((ulong)_UNK_10099beb0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b9e >> 0x20) ^
                                             (byte)((ulong)_UNK_10099beb0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b9e >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099beb0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b9e >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099beb0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b9e >> 8) ^
                                                  (byte)((ulong)_UNK_10099beb0 >> 8),
                                                  (byte)uRam0000000100e11b9e ^ (byte)_UNK_10099beb0)
                                                  ))))));
    bRam0000000100e12256 = bRam0000000100e11ba6 ^ 0xfd;
    bRam0000000100e12257 = bRam0000000100e11ba7 ^ 0x99;
    bRam0000000100e12258 = bRam0000000100e11ba8 ^ 0xe6;
    bRam0000000100e12259 = bRam0000000100e11ba9 ^ 0xa4;
    bRam0000000100e1225a = bRam0000000100e11baa ^ 0xb8;
    bRam0000000100e1225b = bRam0000000100e11bab ^ 0x33;
    bRam0000000100e1225c = bRam0000000100e11bac ^ 0xf7;
    bRam0000000100e1225d = ~((bRam0000000100e11bad | 0xbd) & (bRam0000000100e11bad ^ 0xff | 0x42));
    bRam0000000100e1225e = bRam0000000100e11bae ^ 0x19;
    bRam0000000100e1225f = bRam0000000100e11baf ^ 0x5c;
    bRam0000000100e12260 = bRam0000000100e11bb0 ^ 0xb2;
    cRam0000000100e12261 = bRam0000000100e11bb1 + (bRam0000000100e11bb1 & 0xb) * -2 + '\v';
    bRam0000000100e12262 = bRam0000000100e11bb2 ^ 0xa4;
    bRam0000000100e12263 = bRam0000000100e11bb3 ^ 0x18;
    bRam0000000100e12264 = bRam0000000100e11bb4 ^ 0x80;
    bRam0000000100e12265 = ~((bRam0000000100e11bb5 | 0xbb) & (~bRam0000000100e11bb5 | 0x44));
    bRam0000000100e12266 = ~((bRam0000000100e11bb6 | 0xfb) & (~bRam0000000100e11bb6 | 4));
    bRam0000000100e12267 = bRam0000000100e11bb7 ^ 0x69;
    bRam0000000100e12268 = bRam0000000100e11bb8 ^ 0xa2;
    cRam0000000100e12269 = bRam0000000100e11bb9 + (bRam0000000100e11bb9 & 0x33) * -2 + '3';
    uRam0000000100e120d1 =
         CONCAT17((byte)((ulong)uRam0000000100e11a21 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be50 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a21 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be50 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a21 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be50 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a21 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be50 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a21 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be50 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a21 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be50 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a21 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be50 >> 8),
                                                  (byte)uRam0000000100e11a21 ^ (byte)_UNK_10099be50)
                                                  ))))));
    bRam0000000100e1226a = bRam0000000100e11bba ^ 0x6c;
    uRam0000000100e120c1 =
         CONCAT17((byte)((ulong)uRam0000000100e11a11 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c170 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a11 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c170 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a11 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c170 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a11 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c170 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a11 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c170 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a11 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c170 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a11 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c170 >> 8),
                                                  (byte)uRam0000000100e11a11 ^ (byte)_UNK_10099c170)
                                                  ))))));
    uRam0000000100e120c9 =
         CONCAT17((byte)((ulong)uRam0000000100e11a19 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c178 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a19 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c178 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a19 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c178 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a19 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c178 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a19 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c178 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a19 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c178 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a19 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c178 >> 8),
                                                  (byte)uRam0000000100e11a19 ^ (byte)_UNK_10099c178)
                                                  ))))));
    bRam0000000100e1226b = bRam0000000100e11bbb ^ 0xd7;
    bRam0000000100e1226c = bRam0000000100e11bbc ^ 0x66;
    bRam0000000100e1226d = bRam0000000100e11bbd ^ 0x8b;
    cRam0000000100e1226e = bRam0000000100e11bbe + (bRam0000000100e11bbe & 0x76) * -2 + 'v';
    uRam0000000100e120b5 =
         CONCAT17((byte)((ulong)uRam0000000100e11a05 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be48 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a05 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be48 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a05 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be48 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a05 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be48 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a05 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be48 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a05 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be48 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a05 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be48 >> 8),
                                                  (byte)uRam0000000100e11a05 ^ (byte)_UNK_10099be48)
                                                  ))))));
    bRam0000000100e1226f = bRam0000000100e11bbf ^ 0x77;
    bRam0000000100e12270 = bRam0000000100e11bc0 ^ 0x8e;
    bRam0000000100e12271 = bRam0000000100e11bc1 ^ 0xfa;
    cRam0000000100e12272 = bRam0000000100e11bc2 + (bRam0000000100e11bc2 & 0xbb) * -2 + -0x45;
    cRam0000000100e12273 = bRam0000000100e11bc3 + (bRam0000000100e11bc3 & 0x4a) * -2 + 'J';
    cRam0000000100e12274 = bRam0000000100e11bc4 + (bRam0000000100e11bc4 & 0x5a) * -2 + 'Z';
    bRam0000000100e1227d = bRam0000000100e11bcd ^ 0xd3;
    bRam0000000100e1227e = bRam0000000100e11bce ^ 3;
    bRam0000000100e1227f = bRam0000000100e11bcf ^ 0x11;
    bRam0000000100e12280 = bRam0000000100e11bd0 ^ 0xa9;
    bRam0000000100e12281 = bRam0000000100e11bd1 ^ 0x14;
    bRam0000000100e12282 = bRam0000000100e11bd2 ^ 0xbb;
    bRam0000000100e12283 = bRam0000000100e11bd3 ^ 0x34;
    bRam0000000100e12284 = ~((bRam0000000100e11bd4 | 0x3c) & (~bRam0000000100e11bd4 | 0xc3));
    bRam0000000100e12285 = bRam0000000100e11bd5 ^ 0xd6;
    bRam0000000100e12286 = bRam0000000100e11bd6 ^ 0x7d;
    cRam0000000100e12287 = bRam0000000100e11bd7 + (bRam0000000100e11bd7 & 0x53) * -2 + 'S';
    bRam0000000100e12288 = bRam0000000100e11bd8 ^ 0x4a;
    bRam0000000100e12289 = bRam0000000100e11bd9 ^ 0x5a;
    bRam0000000100e1228a = bRam0000000100e11bda ^ 0xcd;
    cRam0000000100e1228b = bRam0000000100e11bdb + (bRam0000000100e11bdb & 0xf3) * -2 + 's';
    uRam0000000100e1228c =
         CONCAT17((byte)((ulong)uRam0000000100e11bdc >> 0x38) ^
                  (byte)((ulong)_UNK_10099bec0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11bdc >> 0x30) ^
                           (byte)((ulong)_UNK_10099bec0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11bdc >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bec0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11bdc >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bec0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11bdc >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bec0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11bdc >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bec0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11bdc >> 8) ^
                                                  (byte)((ulong)_UNK_10099bec0 >> 8),
                                                  (byte)uRam0000000100e11bdc ^ (byte)_UNK_10099bec0)
                                                  ))))));
    bRam0000000100e12294 = bRam0000000100e11be4 ^ 0x3c;
    cRam0000000100e12295 = bRam0000000100e11be5 + (bRam0000000100e11be5 & 0x1d) * -2 + -99;
    bRam0000000100e12296 = bRam0000000100e11be6 ^ 0x26;
    bRam0000000100e12297 = bRam0000000100e11be7 ^ 0x9b;
    bRam0000000100e12298 = bRam0000000100e11be8 ^ 0x48;
    bRam0000000100e12299 = bRam0000000100e11be9 ^ 0x6e;
    bRam0000000100e1229a = bRam0000000100e11bea ^ 0x59;
    cRam0000000100e1229b = bRam0000000100e11beb + (bRam0000000100e11beb & 0x34) * -2 + -0x4c;
    bRam0000000100e1229c = bRam0000000100e11bec ^ 0xb9;
    bRam0000000100e1229d = ~((bRam0000000100e11bed | 0xb2) & (bRam0000000100e11bed ^ 0xff | 0x4d));
    cRam0000000100e1229e = bRam0000000100e11bee + (bRam0000000100e11bee & 0x31) * -2 + -0x4f;
    bRam0000000100e1229f = bRam0000000100e11bef ^ 0xcb;
    bRam0000000100e122a0 = bRam0000000100e11bf0 ^ 0xa0;
    bRam0000000100e122a1 = bRam0000000100e11bf1 ^ 0xce;
    cRam0000000100e122a2 = bRam0000000100e11bf2 + (bRam0000000100e11bf2 & 0x3a) * -2 + -0x46;
    uRam0000000100e1223d =
         CONCAT17((byte)((ulong)uRam0000000100e11b8d >> 0x38) ^
                  (byte)((ulong)_UNK_10099bea8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11b8d >> 0x30) ^
                           (byte)((ulong)_UNK_10099bea8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11b8d >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bea8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11b8d >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bea8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11b8d >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bea8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11b8d >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bea8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11b8d >> 8) ^
                                                  (byte)((ulong)_UNK_10099bea8 >> 8),
                                                  (byte)uRam0000000100e11b8d ^ (byte)_UNK_10099bea8)
                                                  ))))));
    bRam0000000100e122a3 = ~((bRam0000000100e11bf3 | 2) & (~bRam0000000100e11bf3 | 0xfd));
    bRam0000000100e122a4 = bRam0000000100e11bf4 ^ 0xfb;
    bRam0000000100e122a5 = bRam0000000100e11bf5 ^ 100;
    bRam0000000100e122a6 = bRam0000000100e11bf6 ^ 0x32;
    bRam0000000100e122a7 = bRam0000000100e11bf7 ^ 0x14;
    bRam0000000100e122a8 = bRam0000000100e11bf8 ^ 0x1e;
    cRam0000000100e122a9 = bRam0000000100e11bf9 + (bRam0000000100e11bf9 & 0x32) * -2 + '2';
    bRam0000000100e122aa = bRam0000000100e11bfa ^ 5;
    bRam0000000100e122ab = bRam0000000100e11bfb ^ 0x8e;
    bRam0000000100e122ac = bRam0000000100e11bfc ^ 0xef;
    bRam0000000100e122ad = bRam0000000100e11bfd ^ 0x17;
    bRam0000000100e122ae = bRam0000000100e11bfe ^ 0x69;
    bRam0000000100e122af = bRam0000000100e11bff ^ 0x9b;
    cRam0000000100e122b0 = bRam0000000100e11c00 + (bRam0000000100e11c00 & 0x33) * -2 + -0x4d;
    bRam0000000100e122b1 = bRam0000000100e11c01 ^ 0x3d;
    bRam0000000100e122b2 = bRam0000000100e11c02 ^ 0x84;
    bRam0000000100e122b3 = bRam0000000100e11c03 ^ 0x31;
    bRam0000000100e122b4 = bRam0000000100e11c04 ^ 0x55;
    bRam0000000100e122b5 = bRam0000000100e11c05 ^ 0xf7;
    bRam0000000100e122b6 = bRam0000000100e11c06 ^ 5;
    bRam0000000100e122b7 = bRam0000000100e11c07 ^ 0xae;
    cRam0000000100e122b8 = bRam0000000100e11c08 + (bRam0000000100e11c08 & 0xf1) * -2 + 'q';
    bRam0000000100e122b9 = bRam0000000100e11c09 ^ 0xa4;
    bRam0000000100e122ba = bRam0000000100e11c0a ^ 0x79;
    bRam0000000100e122bb = bRam0000000100e11c0b ^ 0x82;
    bRam0000000100e122bc = bRam0000000100e11c0c ^ 4;
    bRam0000000100e122bd = bRam0000000100e11c0d ^ 0x77;
    bRam0000000100e122be = bRam0000000100e11c0e ^ 0x61;
    cRam0000000100e122bf = bRam0000000100e11c0f + (bRam0000000100e11c0f & 6) * -2 + '\x06';
    bRam0000000100e122c0 = bRam0000000100e11c10 ^ 4;
    bRam0000000100e122c1 = bRam0000000100e11c11 ^ 0x90;
    bRam0000000100e122c2 = bRam0000000100e11c12 ^ 0x71;
    bRam0000000100e122c3 = bRam0000000100e11c13 ^ 0xbe;
    bRam0000000100e122c4 = bRam0000000100e11c14 ^ 0x5f;
    cRam0000000100e122c5 = bRam0000000100e11c15 + (bRam0000000100e11c15 & 0x65) * -2 + 'e';
    bRam0000000100e122c6 = bRam0000000100e11c16 ^ 0xb8;
    bRam0000000100e122c7 = bRam0000000100e11c17 ^ 8;
    bRam0000000100e122c8 = bRam0000000100e11c18 ^ 0x70;
    cRam0000000100e122c9 = bRam0000000100e11c19 + (bRam0000000100e11c19 & 0x30) * -2 + '0';
    uRam0000000100e122ca =
         CONCAT17((byte)((ulong)uRam0000000100e11c1a >> 0x38) ^
                  (byte)((ulong)_UNK_10099bec8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c1a >> 0x30) ^
                           (byte)((ulong)_UNK_10099bec8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c1a >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bec8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c1a >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bec8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c1a >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bec8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c1a >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bec8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c1a >> 8) ^
                                                  (byte)((ulong)_UNK_10099bec8 >> 8),
                                                  (byte)uRam0000000100e11c1a ^ (byte)_UNK_10099bec8)
                                                  ))))));
    bRam0000000100e122d2 = bRam0000000100e11c22 ^ 0x51;
    cRam0000000100e122d3 = bRam0000000100e11c23 + (bRam0000000100e11c23 & 0xc3) * -2 + 'C';
    bRam0000000100e122d4 = bRam0000000100e11c24 ^ 0xc2;
    bRam0000000100e122d5 = bRam0000000100e11c25 ^ 0x49;
    bRam0000000100e122d6 = bRam0000000100e11c26 ^ 0xa6;
    bRam0000000100e122d7 = bRam0000000100e11c27 ^ 0x49;
    cRam0000000100e122d8 = bRam0000000100e11c28 + (bRam0000000100e11c28 & 0xc3) * -2 + -0x3d;
    bRam0000000100e122d9 = bRam0000000100e11c29 ^ 0x2d;
    bRam0000000100e122da = bRam0000000100e11c2a ^ 1;
    bRam0000000100e122db = bRam0000000100e11c2b ^ 0xb2;
    bRam0000000100e122dc = bRam0000000100e11c2c ^ 0x7a;
    cRam0000000100e122dd = bRam0000000100e11c2d + (bRam0000000100e11c2d & 0x27) * -2 + -0x59;
    bRam0000000100e122de = bRam0000000100e11c2e ^ 0xd5;
    cRam0000000100e122df = bRam0000000100e11c2f + (bRam0000000100e11c2f & 0x4a) * -2 + 'J';
    bRam0000000100e122e0 = bRam0000000100e11c30 ^ 0x93;
    bRam0000000100e122e1 = bRam0000000100e11c31 ^ 0xdf;
    bRam0000000100e122e2 = bRam0000000100e11c32 ^ 0x9b;
    cRam0000000100e122e3 = bRam0000000100e11c33 + (bRam0000000100e11c33 & 0x66) * -2 + 'f';
    bRam0000000100e122e4 = bRam0000000100e11c34 ^ 0x1d;
    bRam0000000100e122e5 = bRam0000000100e11c35 ^ 4;
    bRam0000000100e122e6 = bRam0000000100e11c36 ^ 0x5e;
    bRam0000000100e122e7 = bRam0000000100e11c37 ^ 0x68;
    bRam0000000100e122e8 = bRam0000000100e11c38 ^ 0x39;
    bRam0000000100e122e9 = bRam0000000100e11c39 ^ 0x4b;
    bRam0000000100e122ea = bRam0000000100e11c3a ^ 2;
    cRam0000000100e122eb = bRam0000000100e11c3b + (bRam0000000100e11c3b & 0x2e) * -2 + -0x52;
    bRam0000000100e122ec = bRam0000000100e11c3c ^ 0x2b;
    bRam0000000100e122ed = bRam0000000100e11c3d ^ 0xcd;
    cRam0000000100e122ee = bRam0000000100e11c3e + (bRam0000000100e11c3e & 0x6b) * -2 + 'k';
    bRam0000000100e122ef = bRam0000000100e11c3f ^ 0x79;
    bRam0000000100e122f0 = bRam0000000100e11c40 ^ 0x79;
    bRam0000000100e122f1 = bRam0000000100e11c41 ^ 0x1f;
    bRam0000000100e122f2 = bRam0000000100e11c42 ^ 0x7d;
    bRam0000000100e122f3 = bRam0000000100e11c43 ^ 0x2e;
    bRam0000000100e122f4 = bRam0000000100e11c44 ^ 0xee;
    cRam0000000100e122f5 = bRam0000000100e11c45 + (bRam0000000100e11c45 & 0x60) * -2 + '`';
    bRam0000000100e122f6 = bRam0000000100e11c46 ^ 0xa5;
    cRam0000000100e122f7 = bRam0000000100e11c47 + (bRam0000000100e11c47 & 0x1b) * -2 + -0x65;
    uRam0000000100e122f8 =
         CONCAT17((byte)((ulong)uRam0000000100e11c48 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bed0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c48 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bed0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c48 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bed0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c48 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bed0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c48 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bed0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c48 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bed0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c48 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bed0 >> 8),
                                                  (byte)uRam0000000100e11c48 ^ (byte)_UNK_10099bed0)
                                                  ))))));
    bRam0000000100e12300 = bRam0000000100e11c50 ^ 0x9f;
    bRam0000000100e12301 = bRam0000000100e11c51 ^ 0xb9;
    bRam0000000100e12302 = bRam0000000100e11c52 ^ 0xc0;
    bRam0000000100e12303 = bRam0000000100e11c53 ^ 0xc3;
    bRam0000000100e12304 = bRam0000000100e11c54 ^ 0x5c;
    cRam0000000100e12305 = bRam0000000100e11c55 + (bRam0000000100e11c55 & 0xaa) * -2 + -0x56;
    bRam0000000100e12306 = bRam0000000100e11c56 ^ 0x41;
    cRam0000000100e12307 = bRam0000000100e11c57 + (bRam0000000100e11c57 & 0x59) * -2 + 'Y';
    uRam0000000100e12308 =
         CONCAT17((byte)((ulong)uRam0000000100e11c58 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bed8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c58 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bed8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c58 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bed8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c58 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bed8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c58 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bed8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c58 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bed8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c58 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bed8 >> 8),
                                                  (byte)uRam0000000100e11c58 ^ (byte)_UNK_10099bed8)
                                                  ))))));
    bRam0000000100e12310 = bRam0000000100e11c60 ^ 6;
    bRam0000000100e12311 = bRam0000000100e11c61 ^ 0xa2;
    bRam0000000100e12312 = bRam0000000100e11c62 ^ 0xc3;
    bRam0000000100e12313 = bRam0000000100e11c63 ^ 0x67;
    bRam0000000100e12314 = bRam0000000100e11c64 ^ 0x5a;
    bRam0000000100e12315 = bRam0000000100e11c65 ^ 0x7a;
    bRam0000000100e12316 = bRam0000000100e11c66 ^ 0x6b;
    uRam0000000100e12317 = uRam0000000100e11c67;
    bRam0000000100e12318 = bRam0000000100e11c68 ^ 0x85;
    bRam0000000100e12319 = bRam0000000100e11c69 ^ 0x2c;
    bRam0000000100e1231a = bRam0000000100e11c6a ^ 0xaa;
    bRam0000000100e1231b = bRam0000000100e11c6b ^ 0x1e;
    bRam0000000100e1231c = bRam0000000100e11c6c ^ 0x22;
    cRam0000000100e1231d = bRam0000000100e11c6d + (bRam0000000100e11c6d & 0x58) * -2 + -0x28;
    bRam0000000100e1231e = bRam0000000100e11c6e ^ 0xb4;
    bRam0000000100e1231f = bRam0000000100e11c6f ^ 0x78;
    bRam0000000100e12320 = bRam0000000100e11c70 ^ 0xaa;
    cRam0000000100e12321 = bRam0000000100e11c71 + (bRam0000000100e11c71 & 0x36) * -2 + -0x4a;
    uRam0000000100e12322 =
         CONCAT17((byte)((ulong)uRam0000000100e11c72 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bee0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c72 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bee0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c72 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bee0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c72 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bee0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c72 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bee0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c72 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bee0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c72 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bee0 >> 8),
                                                  (byte)uRam0000000100e11c72 ^ (byte)_UNK_10099bee0)
                                                  ))))));
    bRam0000000100e1232a = bRam0000000100e11c7a ^ 0x56;
    bRam0000000100e1232b = bRam0000000100e11c7b ^ 0x62;
    bRam0000000100e1232c = bRam0000000100e11c7c ^ 0x4b;
    bRam0000000100e1232d = bRam0000000100e11c7d ^ 0xdd;
    bRam0000000100e1232e = bRam0000000100e11c7e ^ 0x8d;
    bRam0000000100e1232f = bRam0000000100e11c7f ^ 0x98;
    bRam0000000100e12330 = bRam0000000100e11c80 ^ 0xf1;
    uRam0000000100e12331 = uRam0000000100e11c81;
    bRam0000000100e12332 = bRam0000000100e11c82 ^ 0xc3;
    bRam0000000100e12333 = bRam0000000100e11c83 ^ 0x36;
    cRam0000000100e12334 = bRam0000000100e11c84 + (bRam0000000100e11c84 & 199) * -2 + 'G';
    bRam0000000100e1233d = bRam0000000100e11c8d ^ 0x8b;
    uRam0000000100e121a3 =
         CONCAT17((byte)((ulong)uRam0000000100e11af3 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be90 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11af3 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be90 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11af3 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be90 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11af3 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be90 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11af3 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be90 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11af3 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be90 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11af3 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be90 >> 8),
                                                  (byte)uRam0000000100e11af3 ^ (byte)_UNK_10099be90)
                                                  ))))));
    bRam0000000100e1233e = bRam0000000100e11c8e ^ 0x15;
    bRam0000000100e1233f = bRam0000000100e11c8f ^ 0x66;
    bRam0000000100e12340 = bRam0000000100e11c90 ^ 0xce;
    bRam0000000100e12341 = bRam0000000100e11c91 ^ 0x51;
    cRam0000000100e12342 = bRam0000000100e11c92 + (bRam0000000100e11c92 & 0x37) * -2 + -0x49;
    bRam0000000100e12343 = bRam0000000100e11c93 ^ 0x1b;
    bRam0000000100e12344 = bRam0000000100e11c94 ^ 0x5d;
    bRam0000000100e12345 = bRam0000000100e11c95 ^ 0xc4;
    cRam0000000100e12346 = bRam0000000100e11c96 + (bRam0000000100e11c96 & 0x65) * -2 + 'e';
    uRam0000000100e12347 =
         CONCAT17((byte)((ulong)uRam0000000100e11c97 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bef0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c97 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bef0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c97 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bef0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c97 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bef0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c97 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bef0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c97 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bef0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c97 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bef0 >> 8),
                                                  (byte)uRam0000000100e11c97 ^ (byte)_UNK_10099bef0)
                                                  ))))));
    bRam0000000100e1234f = bRam0000000100e11c9f ^ 0x78;
    bRam0000000100e12350 = bRam0000000100e11ca0 ^ 0x49;
    bRam0000000100e12351 = bRam0000000100e11ca1 ^ 0x32;
    bRam0000000100e12352 = bRam0000000100e11ca2 ^ 0x42;
    bRam0000000100e12353 = ~((bRam0000000100e11ca3 | 0xc) & (~bRam0000000100e11ca3 | 0xf3));
    bRam0000000100e12354 = bRam0000000100e11ca4 ^ 0xbc;
    uRam0000000100e1218a =
         CONCAT17((byte)((ulong)uRam0000000100e11ada >> 0x38) ^
                  (byte)((ulong)_UNK_10099be88 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11ada >> 0x30) ^
                           (byte)((ulong)_UNK_10099be88 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11ada >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be88 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11ada >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be88 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11ada >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be88 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11ada >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be88 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11ada >> 8) ^
                                                  (byte)((ulong)_UNK_10099be88 >> 8),
                                                  (byte)uRam0000000100e11ada ^ (byte)_UNK_10099be88)
                                                  ))))));
    cRam0000000100e12355 = bRam0000000100e11ca5 + (bRam0000000100e11ca5 & 0x28) * -2 + -0x58;
    bRam0000000100e12356 = bRam0000000100e11ca6 ^ 0x4a;
    bRam0000000100e12357 = bRam0000000100e11ca7 ^ 0xa3;
    cRam0000000100e12358 = bRam0000000100e11ca8 + (bRam0000000100e11ca8 & 0x40) * '\x02' + -0x40;
    bRam0000000100e12359 = bRam0000000100e11ca9 ^ 0x5d;
    bRam0000000100e1235a = bRam0000000100e11caa ^ 0xcc;
    uRam0000000100e1217e =
         CONCAT17((byte)((ulong)uRam0000000100e11ace >> 0x38) ^
                  (byte)((ulong)_UNK_10099be80 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11ace >> 0x30) ^
                           (byte)((ulong)_UNK_10099be80 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11ace >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be80 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11ace >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be80 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11ace >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be80 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11ace >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be80 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11ace >> 8) ^
                                                  (byte)((ulong)_UNK_10099be80 >> 8),
                                                  (byte)uRam0000000100e11ace ^ (byte)_UNK_10099be80)
                                                  ))))));
    cRam0000000100e1235b = bRam0000000100e11cab + (bRam0000000100e11cab & 0x5a) * -2 + -0x26;
    bRam0000000100e1235c = bRam0000000100e11cac ^ 0x41;
    bRam0000000100e1235d = bRam0000000100e11cad ^ 0xe6;
    bRam0000000100e1235e = bRam0000000100e11cae ^ 0x7b;
    cRam0000000100e1235f = bRam0000000100e11caf + (bRam0000000100e11caf & 0x26) * -2 + '&';
    bRam0000000100e12360 = bRam0000000100e11cb0 ^ 0xbd;
    bRam0000000100e12361 = bRam0000000100e11cb1 ^ 0xba;
    bRam0000000100e12362 = bRam0000000100e11cb2 ^ 0xad;
    cRam0000000100e12363 = bRam0000000100e11cb3 + (bRam0000000100e11cb3 & 4) * -2 + '\x04';
    bRam0000000100e12364 = bRam0000000100e11cb4 ^ 0x43;
    bRam0000000100e12365 = bRam0000000100e11cb5 ^ 0x3c;
    bRam0000000100e12366 = bRam0000000100e11cb6 ^ 0x91;
    bRam0000000100e12367 = bRam0000000100e11cb7 ^ 0xf8;
    bRam0000000100e12368 = bRam0000000100e11cb8 ^ 0x16;
    bRam0000000100e12369 = bRam0000000100e11cb9 ^ 0x1c;
    bRam0000000100e1236a = ~((bRam0000000100e11cba | 0x6c) & (bRam0000000100e11cba ^ 0xff | 0x93));
    bRam0000000100e1236b = bRam0000000100e11cbb ^ 0xca;
    cRam0000000100e1236c = bRam0000000100e11cbc + (bRam0000000100e11cbc & 0x53) * -2 + 'S';
    bRam0000000100e1236d = bRam0000000100e11cbd ^ 0xb7;
    bRam0000000100e1236e = bRam0000000100e11cbe ^ 0x3f;
    uRam0000000100e12161 =
         CONCAT17((byte)((ulong)uRam0000000100e11ab1 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be78 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11ab1 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be78 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11ab1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be78 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11ab1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be78 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11ab1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be78 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11ab1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be78 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11ab1 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be78 >> 8),
                                                  (byte)uRam0000000100e11ab1 ^ (byte)_UNK_10099be78)
                                                  ))))));
    cRam0000000100e1236f = bRam0000000100e11cbf + (bRam0000000100e11cbf & 0x3e) * -2 + '>';
    cRam0000000100e12370 = bRam0000000100e11cc0 + (bRam0000000100e11cc0 & 0x2d) * -2 + '-';
    uRam0000000100e12371 =
         CONCAT17((byte)((ulong)uRam0000000100e11cc1 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bef8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cc1 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bef8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cc1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bef8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cc1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bef8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cc1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bef8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cc1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bef8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cc1 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bef8 >> 8),
                                                  (byte)uRam0000000100e11cc1 ^ (byte)_UNK_10099bef8)
                                                  ))))));
    bRam0000000100e12379 = ~((bRam0000000100e11cc9 | 0x16) & (bRam0000000100e11cc9 ^ 0xff | 0xe9));
    uRam0000000100e1237a =
         CONCAT17((byte)((ulong)uRam0000000100e11cca >> 0x38) ^
                  (byte)((ulong)_UNK_10099c190 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cca >> 0x30) ^
                           (byte)((ulong)_UNK_10099c190 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cca >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c190 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cca >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c190 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cca >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c190 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cca >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c190 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cca >> 8) ^
                                                  (byte)((ulong)_UNK_10099c190 >> 8),
                                                  (byte)uRam0000000100e11cca ^ (byte)_UNK_10099c190)
                                                  ))))));
    uRam0000000100e12382 =
         CONCAT17((byte)((ulong)uRam0000000100e11cd2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c198 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cd2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c198 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cd2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c198 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cd2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c198 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cd2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c198 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cd2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c198 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cd2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c198 >> 8),
                                                  (byte)uRam0000000100e11cd2 ^ (byte)_UNK_10099c198)
                                                  ))))));
    uRam0000000100e1238a =
         CONCAT17((byte)((ulong)uRam0000000100e11cda >> 0x38) ^
                  (byte)((ulong)_UNK_10099c1a0 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cda >> 0x30) ^
                           (byte)((ulong)_UNK_10099c1a0 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cda >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c1a0 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cda >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c1a0 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cda >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c1a0 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cda >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c1a0 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cda >> 8) ^
                                                  (byte)((ulong)_UNK_10099c1a0 >> 8),
                                                  (byte)uRam0000000100e11cda ^ (byte)_UNK_10099c1a0)
                                                  ))))));
    uRam0000000100e12392 =
         CONCAT17((byte)((ulong)uRam0000000100e11ce2 >> 0x38) ^
                  (byte)((ulong)_UNK_10099c1a8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11ce2 >> 0x30) ^
                           (byte)((ulong)_UNK_10099c1a8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11ce2 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099c1a8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11ce2 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099c1a8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11ce2 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099c1a8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11ce2 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099c1a8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11ce2 >> 8) ^
                                                  (byte)((ulong)_UNK_10099c1a8 >> 8),
                                                  (byte)uRam0000000100e11ce2 ^ (byte)_UNK_10099c1a8)
                                                  ))))));
    bRam0000000100e1239a = bRam0000000100e11cea ^ 0xc4;
    bRam0000000100e1239b = bRam0000000100e11ceb ^ 0x3e;
    cRam0000000100e1239c = bRam0000000100e11cec + (bRam0000000100e11cec & 0x1b) * -2 + -0x65;
    bRam0000000100e1239d = bRam0000000100e11ced ^ 0x7a;
    cRam0000000100e1239e = bRam0000000100e11cee + (bRam0000000100e11cee & 0x1b) * -2 + '\x1b';
    uRam0000000100e1239f =
         CONCAT17((byte)((ulong)uRam0000000100e11cef >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf00 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cef >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf00 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cef >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf00 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cef >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf00 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cef >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf00 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cef >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf00 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cef >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf00 >> 8),
                                                  (byte)uRam0000000100e11cef ^ (byte)_UNK_10099bf00)
                                                  ))))));
    cRam0000000100e123a7 = bRam0000000100e11cf7 + (bRam0000000100e11cf7 & 0x70) * -2 + 'p';
    uRam0000000100e123a8 =
         CONCAT17((byte)((ulong)uRam0000000100e11cf8 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf08 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11cf8 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf08 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11cf8 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf08 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11cf8 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf08 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11cf8 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf08 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11cf8 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf08 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11cf8 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf08 >> 8),
                                                  (byte)uRam0000000100e11cf8 ^ (byte)_UNK_10099bf08)
                                                  ))))));
    bRam0000000100e123b0 = bRam0000000100e11d00 ^ 0x39;
    bRam0000000100e123b1 = bRam0000000100e11d01 ^ 0xfb;
    bRam0000000100e123b2 = bRam0000000100e11d02 ^ 0x6a;
    bRam0000000100e123b3 = bRam0000000100e11d03 ^ 0xc4;
    bRam0000000100e123b4 = bRam0000000100e11d04 ^ 0xee;
    bRam0000000100e123b5 = bRam0000000100e11d05 ^ 0x92;
    bRam0000000100e123b6 = bRam0000000100e11d06 ^ 0xa5;
    cRam0000000100e123b7 = bRam0000000100e11d07 + (bRam0000000100e11d07 & 0x12) * -2 + -0x6e;
    bRam0000000100e123b8 = bRam0000000100e11d08 ^ 0x7a;
    cRam0000000100e123b9 = bRam0000000100e11d09 + (bRam0000000100e11d09 & 0x1c) * -2 + -100;
    bRam0000000100e123ba = bRam0000000100e11d0a ^ 0xdc;
    bRam0000000100e123bb = ~((bRam0000000100e11d0b | 0x53) & (bRam0000000100e11d0b ^ 0xff | 0xac));
    bRam0000000100e123bc = bRam0000000100e11d0c ^ 0xb;
    uRam0000000100e1213f =
         CONCAT17((byte)((ulong)uRam0000000100e11a8f >> 0x38) ^
                  (byte)((ulong)_UNK_10099be70 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a8f >> 0x30) ^
                           (byte)((ulong)_UNK_10099be70 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a8f >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be70 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a8f >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be70 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a8f >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be70 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a8f >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be70 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a8f >> 8) ^
                                                  (byte)((ulong)_UNK_10099be70 >> 8),
                                                  (byte)uRam0000000100e11a8f ^ (byte)_UNK_10099be70)
                                                  ))))));
    cRam0000000100e123bd = bRam0000000100e11d0d + (bRam0000000100e11d0d & 0xcf) * -2 + -0x31;
    cRam0000000100e123be = bRam0000000100e11d0e + (bRam0000000100e11d0e & 0x59) * -2 + -0x27;
    bRam0000000100e123bf = bRam0000000100e11d0f ^ 0x94;
    bRam0000000100e123c0 = bRam0000000100e11d10 ^ 0xf5;
    bRam0000000100e123c1 = bRam0000000100e11d11 ^ 10;
    cRam0000000100e123c2 = bRam0000000100e11d12 + (bRam0000000100e11d12 & 3) * -2 + '\x03';
    cRam0000000100e123cb = bRam0000000100e11d1b + (bRam0000000100e11d1b & 8) * -2 + -0x78;
    bRam0000000100e123cc = bRam0000000100e11d1c ^ 0xe9;
    cRam0000000100e123cd = bRam0000000100e11d1d + (bRam0000000100e11d1d & 0xe1) * -2 + 'a';
    bRam0000000100e123ce = bRam0000000100e11d1e ^ 0xc5;
    bRam0000000100e123cf = bRam0000000100e11d1f ^ 0xb8;
    bRam0000000100e123d0 = bRam0000000100e11d20 ^ 0x95;
    bRam0000000100e123d1 = bRam0000000100e11d21 ^ 0x90;
    cRam0000000100e123d2 = bRam0000000100e11d22 + (bRam0000000100e11d22 & 0x68) * -2 + -0x18;
    bRam0000000100e123d3 = bRam0000000100e11d23 ^ 0xdd;
    bRam0000000100e123d4 = bRam0000000100e11d24 ^ 0xe;
    cRam0000000100e123d5 = bRam0000000100e11d25 + (bRam0000000100e11d25 & 199) * -2 + 'G';
    uRam0000000100e12126 =
         CONCAT17((byte)((ulong)uRam0000000100e11a76 >> 0x38) ^
                  (byte)((ulong)_UNK_10099be68 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a76 >> 0x30) ^
                           (byte)((ulong)_UNK_10099be68 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a76 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be68 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a76 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be68 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a76 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be68 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a76 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be68 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a76 >> 8) ^
                                                  (byte)((ulong)_UNK_10099be68 >> 8),
                                                  (byte)uRam0000000100e11a76 ^ (byte)_UNK_10099be68)
                                                  ))))));
    bRam0000000100e123de = ~((bRam0000000100e11d2e | 0x3f) & (~bRam0000000100e11d2e | 0xc0));
    bRam0000000100e123df = bRam0000000100e11d2f ^ 0x2e;
    uRam0000000100e1211c =
         CONCAT17((byte)((ulong)uRam0000000100e11a6c >> 0x38) ^
                  (byte)((ulong)_UNK_10099be60 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11a6c >> 0x30) ^
                           (byte)((ulong)_UNK_10099be60 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11a6c >> 0x28) ^
                                    (byte)((ulong)_UNK_10099be60 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11a6c >> 0x20) ^
                                             (byte)((ulong)_UNK_10099be60 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11a6c >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099be60 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11a6c >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099be60 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11a6c >> 8) ^
                                                  (byte)((ulong)_UNK_10099be60 >> 8),
                                                  (byte)uRam0000000100e11a6c ^ (byte)_UNK_10099be60)
                                                  ))))));
    bRam0000000100e123e0 = bRam0000000100e11d30 ^ 0x8d;
    cRam0000000100e123e1 = bRam0000000100e11d31 + (bRam0000000100e11d31 & 0x6d) * -2 + 'm';
    cRam0000000100e123e2 = bRam0000000100e11d32 + (bRam0000000100e11d32 & 0x60) * -2 + '`';
    bRam0000000100e123e3 = bRam0000000100e11d33 ^ 0x5d;
    bRam0000000100e123e4 = bRam0000000100e11d34 ^ 0xf;
    uRam0000000100e12275 =
         CONCAT17((byte)((ulong)uRam0000000100e11bc5 >> 0x38) ^
                  (byte)((ulong)_UNK_10099beb8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11bc5 >> 0x30) ^
                           (byte)((ulong)_UNK_10099beb8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11bc5 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099beb8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11bc5 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099beb8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11bc5 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099beb8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11bc5 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099beb8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11bc5 >> 8) ^
                                                  (byte)((ulong)_UNK_10099beb8 >> 8),
                                                  (byte)uRam0000000100e11bc5 ^ (byte)_UNK_10099beb8)
                                                  ))))));
    uRam0000000100e12335 =
         CONCAT17((byte)((ulong)uRam0000000100e11c85 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bee8 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11c85 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bee8 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11c85 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bee8 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11c85 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bee8 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11c85 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bee8 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11c85 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bee8 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11c85 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bee8 >> 8),
                                                  (byte)uRam0000000100e11c85 ^ (byte)_UNK_10099bee8)
                                                  ))))));
    uRam0000000100e123c3 =
         CONCAT17((byte)((ulong)uRam0000000100e11d13 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf10 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11d13 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf10 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11d13 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf10 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11d13 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf10 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11d13 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf10 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11d13 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf10 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11d13 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf10 >> 8),
                                                  (byte)uRam0000000100e11d13 ^ (byte)_UNK_10099bf10)
                                                  ))))));
    uRam0000000100e123d6 =
         CONCAT17((byte)((ulong)uRam0000000100e11d26 >> 0x38) ^
                  (byte)((ulong)_UNK_10099bf18 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100e11d26 >> 0x30) ^
                           (byte)((ulong)_UNK_10099bf18 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100e11d26 >> 0x28) ^
                                    (byte)((ulong)_UNK_10099bf18 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100e11d26 >> 0x20) ^
                                             (byte)((ulong)_UNK_10099bf18 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100e11d26 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10099bf18 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100e11d26 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10099bf18 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100e11d26 >> 8) ^
                                                  (byte)((ulong)_UNK_10099bf18 >> 8),
                                                  (byte)uRam0000000100e11d26 ^ (byte)_UNK_10099bf18)
                                                  ))))));
  }
  iRam0000000100e95d9c = 1;
                    /* WARNING: Switch is manually overridden */
  lVar2 = func_0x000100945260(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    lVar2 = *(long *)(param_1 + 0x18);
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    lVar3 = func_0x000100602154();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 != 0) {
    case false:
      lVar2 = 0;
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      lVar2 = func_0x00010061ed90(lVar2,0,0,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar2 != 0) {
      case true:
        iVar1 = func_0x000100602494(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(iVar1 != 0) {
        case false:
          return 0;
        }
      }
                    /* WARNING: Switch is manually overridden */
      uVar4 = _strlen(0x100e11d40);
      lVar5 = func_0x0001005ffa68(0x100e11d40,uVar4);
      lVar2 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(lVar5 != 0) {
      case true:
        lVar2 = func_0x00010061ed90(lVar5,0,0,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(lVar2 != 0) {
        case false:
          lVar2 = 0;
                    /* WARNING: Switch is manually overridden */
          break;
        case true:
                    /* WARNING: Switch is manually overridden */
          iVar1 = func_0x000100602494(lVar3,lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
          switch(iVar1 != 0) {
          case false:
            lVar2 = 0;
                    /* WARNING: Switch is manually overridden */
            break;
          case true:
            lVar2 = lVar3;
                    /* WARNING: Switch is manually overridden */
          }
        }
      }
                    /* WARNING: Switch is manually overridden */
    }
  }
                    /* WARNING: Switch is manually overridden */
  return lVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 dealloc]
 * Entry: 0x100739464; original ABI: v16@0:8
 * Original instructions in modeled body: 102; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739488 */
/* WARNING: Switch with 1 destination removed at 0x000100739494 */
/* WARNING: Switch with 1 destination removed at 0x0001007394bc */
/* WARNING: Switch with 1 destination removed at 0x0001007394cc */
/* WARNING: Switch with 1 destination removed at 0x0001007394dc */
/* WARNING: Switch with 1 destination removed at 0x0001007394e8 */
/* WARNING: Switch with 1 destination removed at 0x00010073950c */
/* WARNING: Switch with 1 destination removed at 0x000100739518 */
/* WARNING: Switch with 1 destination removed at 0x000100739534 */
/* WARNING: Switch with 1 destination removed at 0x000100739540 */
/* WARNING: Switch with 1 destination removed at 0x00010073954c */
/* WARNING: Switch with 1 destination removed at 0x000100739558 */
/* WARNING: Switch with 1 destination removed at 0x000100739568 */
/* WARNING: Switch with 1 destination removed at 0x00010073958c */
/* WARNING: Switch with 1 destination removed at 0x00010073959c */
/* WARNING: Switch with 1 destination removed at 0x0001007395b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007395c8 */
/* WARNING: Switch with 1 destination removed at 0x0001007395f4 */
/* WARNING: Switch with 1 destination removed at 0x000100739600 */

void Recovered_YYYP12_m03122(long param_1)

{
  long lStack_40;
  undefined8 uStack_38;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 0x10) != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010060c954();
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 0x18) != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100602124(*(long *)(param_1 + 0x18));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 8) != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x0001006165f4();
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c74bd0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_dealloc_100c5db00);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 password]
 * Entry: 0x100739618; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739620 */
/* WARNING: Switch with 1 destination removed at 0x00010073962c */

undefined8 Recovered_YYYP12_m03123(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x28);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setPassword:]
 * Entry: 0x100739638; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010073965c */
/* WARNING: Switch with 1 destination removed at 0x000100739668 */
/* WARNING: Switch with 1 destination removed at 0x0001007396ac */

void Recovered_YYYP12_m03124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x28);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 data]
 * Entry: 0x1007396b0; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007396b8 */
/* WARNING: Switch with 1 destination removed at 0x0001007396c4 */
/* WARNING: Switch with 1 destination removed at 0x0001007396d0 */

undefined8 Recovered_YYYP12_m03125(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x30);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setData:]
 * Entry: 0x1007396dc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007396fc */
/* WARNING: Switch with 1 destination removed at 0x000100739718 */
/* WARNING: Switch with 1 destination removed at 0x000100739728 */
/* WARNING: Switch with 1 destination removed at 0x00010073974c */

void Recovered_YYYP12_m03126(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 isP12Data]
 * Entry: 0x100739760; original ABI: B16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739768 */

undefined1 Recovered_YYYP12_m03127(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined1 *)(param_1 + 0x20);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setIsP12Data:]
 * Entry: 0x100739774; original ABI: v20@0:8B16
 * Original instructions in modeled body: 2; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYP12_m03128(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 notBefore]
 * Entry: 0x10073977c; original ABI: @16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739784 */

undefined8 Recovered_YYYP12_m03129(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x38);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setNotBefore:]
 * Entry: 0x100739790; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007397b0 */
/* WARNING: Switch with 1 destination removed at 0x0001007397d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007397e4 */
/* WARNING: Switch with 1 destination removed at 0x000100739810 */

void Recovered_YYYP12_m03130(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 notAfter]
 * Entry: 0x100739814; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010073981c */
/* WARNING: Switch with 1 destination removed at 0x000100739828 */

undefined8 Recovered_YYYP12_m03131(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x40);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setNotAfter:]
 * Entry: 0x100739834; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739850 */
/* WARNING: Switch with 1 destination removed at 0x00010073985c */
/* WARNING: Switch with 1 destination removed at 0x000100739878 */

void Recovered_YYYP12_m03132(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 serialNumber]
 * Entry: 0x100739894; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010073989c */
/* WARNING: Switch with 1 destination removed at 0x0001007398a8 */

undefined8 Recovered_YYYP12_m03133(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setSerialNumber:]
 * Entry: 0x1007398b4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007398d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007398e4 */
/* WARNING: Switch with 1 destination removed at 0x000100739918 */

void Recovered_YYYP12_m03134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x48);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 signatureAlgorithm]
 * Entry: 0x10073992c; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739934 */
/* WARNING: Switch with 1 destination removed at 0x000100739940 */
/* WARNING: Switch with 1 destination removed at 0x00010073994c */

undefined8 Recovered_YYYP12_m03135(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setSignatureAlgorithm:]
 * Entry: 0x100739958; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010073997c */
/* WARNING: Switch with 1 destination removed at 0x000100739988 */
/* WARNING: Switch with 1 destination removed at 0x0001007399bc */

void Recovered_YYYP12_m03136(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x50);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 subjectCN]
 * Entry: 0x1007399d0; original ABI: @16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001007399d8 */
/* WARNING: Switch with 1 destination removed at 0x0001007399e8 */
/* WARNING: Switch with 1 destination removed at 0x0001007399f4 */

undefined8 Recovered_YYYP12_m03137(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x58);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setSubjectCN:]
 * Entry: 0x100739a00; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739a24 */
/* WARNING: Switch with 1 destination removed at 0x000100739a30 */
/* WARNING: Switch with 1 destination removed at 0x000100739a3c */
/* WARNING: Switch with 1 destination removed at 0x000100739a80 */

void Recovered_YYYP12_m03138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x58);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 authorityInfoAccessURI]
 * Entry: 0x100739a84; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739a90 */
/* WARNING: Switch with 1 destination removed at 0x000100739a9c */

undefined8 Recovered_YYYP12_m03139(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setAuthorityInfoAccessURI:]
 * Entry: 0x100739aa4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739aac */
/* WARNING: Switch with 1 destination removed at 0x000100739ab8 */

void Recovered_YYYP12_m03140(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 organizationalUnitName]
 * Entry: 0x100739ac4; original ABI: @16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739acc */
/* WARNING: Switch with 1 destination removed at 0x000100739ad8 */
/* WARNING: Switch with 1 destination removed at 0x000100739ae4 */

undefined8 Recovered_YYYP12_m03141(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x68);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setOrganizationalUnitName:]
 * Entry: 0x100739af0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739b14 */
/* WARNING: Switch with 1 destination removed at 0x000100739b20 */
/* WARNING: Switch with 1 destination removed at 0x000100739b2c */
/* WARNING: Switch with 1 destination removed at 0x000100739b70 */

void Recovered_YYYP12_m03142(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x68);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 issuer]
 * Entry: 0x100739b74; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739b7c */
/* WARNING: Switch with 1 destination removed at 0x000100739b8c */

undefined8 Recovered_YYYP12_m03143(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x70);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setIssuer:]
 * Entry: 0x100739b94; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739bac */
/* WARNING: Switch with 1 destination removed at 0x000100739bbc */
/* WARNING: Switch with 1 destination removed at 0x000100739be0 */

void Recovered_YYYP12_m03144(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x70,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 subject]
 * Entry: 0x100739bf0; original ABI: @16@0:8
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739bf8 */
/* WARNING: Switch with 1 destination removed at 0x000100739c04 */

undefined8 Recovered_YYYP12_m03145(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + 0x78);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 setSubject:]
 * Entry: 0x100739c10; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739c2c */
/* WARNING: Switch with 1 destination removed at 0x000100739c38 */
/* WARNING: Switch with 1 destination removed at 0x000100739c64 */

void Recovered_YYYP12_m03146(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYP12 .cxx_destruct]
 * Entry: 0x100739c74; original ABI: v16@0:8
 * Original instructions in modeled body: 46; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100739ccc */
/* WARNING: Switch with 1 destination removed at 0x000100739d4c */

void Recovered_YYYP12_m03147(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + 0x28,0);
  return;
}



