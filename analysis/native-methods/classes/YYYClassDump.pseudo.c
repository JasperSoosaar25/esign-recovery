/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYClassDump classDumpWithFile:]
 * Entry: 0x10028c01c; original ABI: B24@0:8@16
 * Original instructions in modeled body: 221; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010028c068 */
/* WARNING: Switch with 1 destination removed at 0x00010028c104 */
/* WARNING: Switch with 1 destination removed at 0x00010028c12c */
/* WARNING: Switch with 1 destination removed at 0x00010028c178 */
/* WARNING: Switch with 1 destination removed at 0x00010028c198 */
/* WARNING: Switch with 1 destination removed at 0x00010028c1c8 */
/* WARNING: Switch with 1 destination removed at 0x00010028c1d8 */
/* WARNING: Switch with 1 destination removed at 0x00010028c220 */
/* WARNING: Switch with 1 destination removed at 0x00010028c250 */
/* WARNING: Switch with 1 destination removed at 0x00010028c280 */
/* WARNING: Switch with 1 destination removed at 0x00010028c294 */
/* WARNING: Switch with 1 destination removed at 0x00010028c2a4 */
/* WARNING: Switch with 1 destination removed at 0x00010028c2c0 */
/* WARNING: Switch with 1 destination removed at 0x00010028c2cc */
/* WARNING: Switch with 1 destination removed at 0x00010028c2d8 */
/* WARNING: Switch with 1 destination removed at 0x00010028c2e4 */
/* WARNING: Switch with 1 destination removed at 0x00010028c300 */
/* WARNING: Switch with 1 destination removed at 0x00010028c314 */
/* WARNING: Switch with 1 destination removed at 0x00010028c348 */
/* WARNING: Switch with 1 destination removed at 0x00010028c4d4 */
/* WARNING: Switch with 1 destination removed at 0x00010028c4e0 */
/* WARNING: Switch with 1 destination removed at 0x00010028c8b8 */
/* WARNING: Switch with 1 destination removed at 0x00010028c914 */

undefined8 Recovered_YYYClassDump_m02996(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91d18 == 0) {
  case true:
    bRam0000000100d7c79a = bRam0000000100d7c790 ^ 0x20;
    bRam0000000100d7c79b = bRam0000000100d7c791 ^ 0xaf;
    cRam0000000100d7c79c = bRam0000000100d7c792 + (bRam0000000100d7c792 & 0x4b) * -2 + 'K';
    cRam0000000100d7c79d = bRam0000000100d7c793 + (bRam0000000100d7c793 & 9) * -2 + '\t';
    bRam0000000100d7c79e = bRam0000000100d7c794 ^ 0x76;
    bRam0000000100d7c79f = bRam0000000100d7c795 ^ 0xd;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d7c7a0 = bRam0000000100d7c796 ^ 0xee;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d7c7a1 = bRam0000000100d7c797 ^ 5;
    bRam0000000100d7c7a2 = bRam0000000100d7c798 ^ 0xac;
    bRam0000000100d7c7a3 = bRam0000000100d7c799 ^ 0x66;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91d18 = 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar6 = _objc_retain(param_3);
  func_0x00010093aaa0(uRam0000000100c71368,auVar6._8_8_,auVar6._0_8_);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  lVar4 = 0;
  uVar5 = 1;
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100942ec0(lVar1);
    param_3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar5 = (ulong)(param_3 == 0);
                    /* WARNING: Switch is manually overridden */
    lVar4 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar4 * 8 + 0x100d7c8b8)) {
  case 0x10028c2b8:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case 0x10028c2dc:
    goto override_jmp_10028c2b4_case_1;
  }
  while( true ) {
    _objc_release(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
override_jmp_10028c2b4_case_1:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(uVar5 * 8 + 0x100d7c918)) {
    case 0x10028c2f8:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      auVar6 = func_0x00010028ca88(uRam0000000100c71360);
      uVar5 = func_0x00010094ba40(lVar1,auVar6._8_8_,auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010028c35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uVar5 & 0xffffffff) * 8 + 0x100d7c968))();
      return uVar2;
    }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar1);
    _objc_release(auVar6._0_8_);
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lVar3) break;
    ___stack_chk_fail();
    _objc_release(param_3);
  }
  return 0;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYClassDump classDumpWithExecutablePath:toDic:]
 * Entry: 0x1006f6868; original ABI: B32@0:8@16@24
 * Original instructions in modeled body: 157; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

ulong Recovered_YYYClassDump_m02997
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = _objc_retain(param_4);
  uVar4 = uRam0000000100c72ee0;
  uVar2 = _objc_retain(param_3);
  _objc_alloc(uVar4);
  uVar3 = func_0x000100948020();
  func_0x000100973f00(uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095e040(uVar3);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963da0(auVar8._0_8_,auVar8._8_8_,uVar4);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar4);
  uVar4 = uRam0000000100c72f38;
  func_0x00010095e040(uVar3);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943b40(uVar4,auVar8._8_8_,uVar2,auVar8._0_8_);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar8._0_8_);
  func_0x000100973f00(uVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010095e040(uVar3);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963da0(auVar8._0_8_,auVar8._8_8_,uVar5);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar5);
  auVar8 = func_0x00010093a1a0(uVar4,extraout_x1,&uStack_58);
  if ((auVar8._0_8_ & 1) == 0) {
    _fwrite("Error: Couldn\'t get local architecture\n",0x27,1,
            *(undefined8 *)PTR____stderrp_100afc6f0);
    uVar6 = 0;
  }
  else {
    func_0x00010096e8c0(uVar3,auVar8._8_8_,uStack_58);
    uStack_60 = 0;
    uVar6 = func_0x00010094dc20(uVar3,extraout_x1_00,uVar4,&uStack_60);
    uVar2 = _objc_retain(uStack_60);
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)PTR____stderrp_100afc6f0;
      func_0x00010094e220(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      func_0x0001009352c0();
      _fprintf(uVar7,"Error: %s\n");
    }
    else {
      func_0x0001009548c0(uVar3);
      func_0x00010095a8e0(uVar3);
      _objc_alloc(uRam0000000100c72ee8);
      auVar8 = func_0x000100948020();
      uVar5 = auVar8._0_8_;
      func_0x000100961aa0(uVar5,auVar8._8_8_,uVar3);
      func_0x000100977660(uVar3);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      func_0x000100962c60(auVar8._0_8_,auVar8._8_8_,uVar5);
      _objc_release(auVar8._0_8_);
      func_0x0001009689a0(uVar5,extraout_x1_01,uVar1);
      func_0x00010095a420(uVar3,extraout_x1_02,uVar5);
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return uVar6;
}



