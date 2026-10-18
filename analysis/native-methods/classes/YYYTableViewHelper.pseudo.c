/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper initWithTableView:]
 * Entry: 0x10037c950; original ABI: @24@0:8@16
 * Original instructions in modeled body: 95; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037c974 */
/* WARNING: Switch with 1 destination removed at 0x00010037c98c */
/* WARNING: Switch with 1 destination removed at 0x00010037c9bc */
/* WARNING: Switch with 1 destination removed at 0x00010037c9c8 */
/* WARNING: Switch with 1 destination removed at 0x00010037ca10 */
/* WARNING: Switch with 1 destination removed at 0x00010037ca24 */
/* WARNING: Switch with 1 destination removed at 0x00010037ca30 */
/* WARNING: Switch with 1 destination removed at 0x00010037ca7c */
/* WARNING: Switch with 1 destination removed at 0x00010037cad0 */
/* WARNING: Switch with 1 destination removed at 0x00010037cb00 */
/* WARNING: Switch with 1 destination removed at 0x00010037cb1c */

undefined8
Recovered_YYYTableViewHelper_m02613(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73bf0;
  uStack_50 = param_1;
  lVar1 = _objc_msgSendSuper2(&uStack_50,PTR_s_init_100c60da0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    _objc_storeWeak(lVar1 + 0x10,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001003817c4(uVar2,extraout_x1,lVar1);
    _objc_release(uVar2);
    auVar4 = _objc_loadWeakRetained(lVar1 + 0x10);
    func_0x000100962920(auVar4._0_8_,auVar4._8_8_,lVar1);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
    *(undefined1 *)(lVar1 + 8) = 1;
                    /* WARNING: Switch is manually overridden */
  }
  uVar3 = _objc_retain(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper addSectionHandle:]
 * Entry: 0x10037cbbc; original ABI: @24@0:8@?16
 * Original instructions in modeled body: 109; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037cc2c */
/* WARNING: Switch with 1 destination removed at 0x00010037cc48 */
/* WARNING: Switch with 1 destination removed at 0x00010037cc54 */
/* WARNING: Switch with 1 destination removed at 0x00010037ccb8 */
/* WARNING: Switch with 1 destination removed at 0x00010037ccdc */
/* WARNING: Switch with 1 destination removed at 0x00010037cce8 */
/* WARNING: Switch with 1 destination removed at 0x00010037ccf4 */
/* WARNING: Switch with 1 destination removed at 0x00010037cd00 */
/* WARNING: Switch with 1 destination removed at 0x00010037cd2c */
/* WARNING: Switch with 1 destination removed at 0x00010037cd3c */
/* WARNING: Switch with 1 destination removed at 0x00010037cd80 */
/* WARNING: Switch with 1 destination removed at 0x00010037cd8c */
/* WARNING: Switch with 1 destination removed at 0x00010037cda8 */
/* WARNING: Switch with 1 destination removed at 0x00010037cde4 */

void Recovered_YYYTableViewHelper_m02614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  lVar1 = _objc_retain(param_3);
  _objc_alloc(uRam0000000100c71ea8);
  uVar2 = func_0x000100948020();
  auVar4 = func_0x0001003817cc(param_1);
  func_0x000100960420(uVar2,auVar4._8_8_,auVar4._0_8_);
  func_0x0001003817d0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096dfe0(uVar2,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010095e520(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  auVar4 = func_0x0001003817d4();
  func_0x00010096bf20(uVar2,auVar4._8_8_,auVar4._0_8_);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  func_0x00010095e520(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x0001003817d8(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper reloadData]
 * Entry: 0x10037cde8; original ABI: v16@0:8
 * Original instructions in modeled body: 28; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037ce00 */
/* WARNING: Switch with 1 destination removed at 0x00010037ce10 */
/* WARNING: Switch with 1 destination removed at 0x00010037ce48 */
/* WARNING: Switch with 1 destination removed at 0x00010037ce74 */

void Recovered_YYYTableViewHelper_m02615(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000100975120(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010095aa80(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper reloadSectionWithIdentifier:]
 * Entry: 0x10037ce78; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037ce98 */
/* WARNING: Switch with 1 destination removed at 0x00010037cea4 */
/* WARNING: Switch with 1 destination removed at 0x00010037cec0 */

void Recovered_YYYTableViewHelper_m02616(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  func_0x0001003817ec(param_1,auVar1._8_8_,auVar1._0_8_,100);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(auVar1._0_8_);
  return;
}



/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037ceec: Decompiler process died  */


/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper reloadSectionWithIdentifiers:]
 * Entry: 0x10037d420; original ABI: v24@0:8@16
 * Original instructions in modeled body: 25; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037d438 */
/* WARNING: Switch with 1 destination removed at 0x00010037d450 */
/* WARNING: Switch with 1 destination removed at 0x00010037d48c */

void Recovered_YYYTableViewHelper_m02618(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  func_0x00010095ab80(param_1,auVar1._8_8_,auVar1._0_8_,100);
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037d49c: Decompiler process died  */


/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037d97c: Decompiler process died  */


/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper clearData]
 * Entry: 0x10037de1c; original ABI: v16@0:8
 * Original instructions in modeled body: 34; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037de34 */
/* WARNING: Switch with 1 destination removed at 0x00010037de44 */
/* WARNING: Switch with 1 destination removed at 0x00010037de50 */
/* WARNING: Switch with 1 destination removed at 0x00010037de88 */
/* WARNING: Switch with 1 destination removed at 0x00010037dea4 */
/* WARNING: Switch with 1 destination removed at 0x00010037dec0 */

void Recovered_YYYTableViewHelper_m02621(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010095e520(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100381818(uVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper sectionHelperWithSection:]
 * Entry: 0x10037dec4; original ABI: @24@0:8q16
 * Original instructions in modeled body: 77; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037def4 */
/* WARNING: Switch with 1 destination removed at 0x00010037df04 */
/* WARNING: Switch with 1 destination removed at 0x00010037df28 */
/* WARNING: Switch with 1 destination removed at 0x00010037df38 */
/* WARNING: Switch with 1 destination removed at 0x00010037df48 */
/* WARNING: Switch with 1 destination removed at 0x00010037df54 */
/* WARNING: Switch with 1 destination removed at 0x00010037df60 */
/* WARNING: Switch with 1 destination removed at 0x00010037df7c */
/* WARNING: Switch with 1 destination removed at 0x00010037dfa8 */
/* WARNING: Switch with 1 destination removed at 0x00010037dfc4 */
/* WARNING: Switch with 1 destination removed at 0x00010037dff0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e038 */

void Recovered_YYYTableViewHelper_m02622(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  func_0x000100381824();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x00010093e360(uVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar2 <= param_3) {
  case false:
    func_0x00010095e520(param_1);
    auVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100951c40(auVar3._0_8_,auVar3._8_8_,param_3);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    uVar1 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper cellHelperForIndexPath:]
 * Entry: 0x10037e03c; original ABI: @24@0:8@16
 * Original instructions in modeled body: 69; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037e05c */
/* WARNING: Switch with 1 destination removed at 0x00010037e068 */
/* WARNING: Switch with 1 destination removed at 0x00010037e0b8 */
/* WARNING: Switch with 1 destination removed at 0x00010037e0e4 */
/* WARNING: Switch with 1 destination removed at 0x00010037e0f0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e0fc */
/* WARNING: Switch with 1 destination removed at 0x00010037e134 */
/* WARNING: Switch with 1 destination removed at 0x00010037e140 */
/* WARNING: Switch with 1 destination removed at 0x00010037e14c */
/* WARNING: Switch with 1 destination removed at 0x00010037e188 */

void Recovered_YYYTableViewHelper_m02623(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar4 = func_0x00010095e380();
  func_0x000100381828(param_1,auVar4._8_8_,auVar4._0_8_);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  lVar2 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case false:
    uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010093be80(lVar2,auVar4._8_8_,uVar1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar2);
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper numberOfSectionsInTableView:]
 * Entry: 0x10037e19c; original ABI: q24@0:8@16
 * Original instructions in modeled body: 39; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037e1c0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e224 */
/* WARNING: Switch with 1 destination removed at 0x00010037e230 */
/* WARNING: Switch with 1 destination removed at 0x00010037e264 */

undefined8
Recovered_YYYTableViewHelper_m02624(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  func_0x000100381830(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = func_0x000100381834();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:numberOfRowsInSection:]
 * Entry: 0x10037e268; original ABI: q32@0:8@16q24
 * Original instructions in modeled body: 45; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037e290 */
/* WARNING: Switch with 1 destination removed at 0x00010037e29c */
/* WARNING: Switch with 1 destination removed at 0x00010037e2e4 */
/* WARNING: Switch with 1 destination removed at 0x00010037e2f4 */
/* WARNING: Switch with 1 destination removed at 0x00010037e34c */

undefined8
Recovered_YYYTableViewHelper_m02625
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar3 = _objc_retain(param_3);
  func_0x00010095e400(param_1,auVar3._8_8_,param_4);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x00010038183c(uVar1);
  _objc_release(uVar1);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:heightForRowAtIndexPath:]
 * Entry: 0x10037e350; original ABI: d32@0:8@16@24
 * Original instructions in modeled body: 47; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037e37c */
/* WARNING: Switch with 1 destination removed at 0x00010037e398 */
/* WARNING: Switch with 1 destination removed at 0x00010037e3a8 */
/* WARNING: Switch with 1 destination removed at 0x00010037e3b8 */
/* WARNING: Switch with 1 destination removed at 0x00010037e4d0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e4ec */

void Recovered_YYYTableViewHelper_m02626
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_3);
  _objc_retain(param_4);
  auVar3 = func_0x000100381848();
  func_0x00010095e400(param_1,auVar3._8_8_,auVar3._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  uVar2 = func_0x00010038184c(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010037e3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100dcd350))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:cellForRowAtIndexPath:]
 * Entry: 0x10037e50c; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 208; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037e534 */
/* WARNING: Switch with 1 destination removed at 0x00010037e54c */
/* WARNING: Switch with 1 destination removed at 0x00010037e558 */
/* WARNING: Switch with 1 destination removed at 0x00010037e574 */
/* WARNING: Switch with 1 destination removed at 0x00010037e634 */
/* WARNING: Switch with 1 destination removed at 0x00010037e6c0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e6dc */
/* WARNING: Switch with 1 destination removed at 0x00010037e6f4 */
/* WARNING: Switch with 1 destination removed at 0x00010037e724 */
/* WARNING: Switch with 1 destination removed at 0x00010037e740 */
/* WARNING: Switch with 1 destination removed at 0x00010037e750 */
/* WARNING: Switch with 1 destination removed at 0x00010037e778 */
/* WARNING: Switch with 1 destination removed at 0x00010037e794 */
/* WARNING: Switch with 1 destination removed at 0x00010037e7a0 */
/* WARNING: Switch with 1 destination removed at 0x00010037e9a0 */
/* WARNING: Switch with 1 destination removed at 0x00010037ea30 */
/* WARNING: Switch with 1 destination removed at 0x00010037ea64 */
/* WARNING: Switch with 1 destination removed at 0x00010037eac0 */

void Recovered_YYYTableViewHelper_m02627
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923cc == 0) {
  case true:
    bRam0000000100dcc480 = bRam0000000100dcc470 ^ 0xab;
    cRam0000000100dcc481 = bRam0000000100dcc471 + (bRam0000000100dcc471 & 0x1e) * -2 + -0x62;
    bRam0000000100dcc482 = bRam0000000100dcc472 ^ 1;
    bRam0000000100dcc483 = bRam0000000100dcc473 ^ 0xfe;
    bRam0000000100dcc484 = bRam0000000100dcc474 ^ 0x85;
    cRam0000000100dcc485 = bRam0000000100dcc475 + (bRam0000000100dcc475 & 0x16) * -2 + '\x16';
    bRam0000000100dcc486 = bRam0000000100dcc476 ^ 0x33;
    bRam0000000100dcc487 = bRam0000000100dcc477 ^ 0x99;
    bRam0000000100dcc488 = bRam0000000100dcc478 ^ 0xf3;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100dcc489 = bRam0000000100dcc479 ^ 0xee;
    bRam0000000100dcc48a = ~bRam0000000100dcc47a;
    cRam0000000100dcc48b = bRam0000000100dcc47b + (bRam0000000100dcc47b & 0x16) * -2 + '\x16';
    bRam0000000100dcc48c = bRam0000000100dcc47c ^ 0xf5;
    bRam0000000100dcc48d = bRam0000000100dcc47d ^ 0xb7;
    bRam0000000100dcc48e = bRam0000000100dcc47e ^ 0x4a;
    bRam0000000100dcc48f = bRam0000000100dcc47f ^ 0x43;
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e923cc = 1;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  auVar7 = func_0x00010095e380();
  func_0x00010095e400(param_1,auVar7._8_8_,auVar7._0_8_);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar4 = auVar7._0_8_;
  func_0x00010093be80(uVar4,auVar7._8_8_,uVar3);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  lVar5 = auVar7._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar5 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    auVar7 = _objc_alloc(uRam0000000100c713a0);
    uVar6 = func_0x000100949ee0(auVar7._0_8_,auVar7._8_8_,0,0x100dcc490);
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_autoreleaseReturnValue(uVar6);
                    /* WARNING: Switch is manually overridden */
    return;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  case true:
    func_0x000100381854(lVar5,auVar7._8_8_,uVar1,uVar3);
    _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar2 = func_0x00010094b820(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010037e7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100dcd4e0))();
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:didSelectRowAtIndexPath:]
 * Entry: 0x10037eac4; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 59; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037eae8 */
/* WARNING: Switch with 1 destination removed at 0x00010037eb3c */
/* WARNING: Switch with 1 destination removed at 0x00010037eb48 */
/* WARNING: Switch with 1 destination removed at 0x00010037eb54 */
/* WARNING: Switch with 1 destination removed at 0x00010037ec2c */
/* WARNING: Switch with 1 destination removed at 0x00010037ec70 */

void Recovered_YYYTableViewHelper_m02628
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar4 = _objc_retain(param_4);
  func_0x00010093be80(param_1,auVar4._8_8_,auVar4._0_8_);
  lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    _objc_release(lVar2);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_100afe320)(uVar1);
    return;
  case true:
    uVar3 = func_0x00010038186c(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010037eb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar3 & 0xffffffff) * 8 + 0x100dcd680))();
    return;
                    /* WARNING: Switch is manually overridden */
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:didDeselectRowAtIndexPath:]
 * Entry: 0x10037eca0; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 112; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037ecc8 */
/* WARNING: Switch with 1 destination removed at 0x00010037ed24 */
/* WARNING: Switch with 1 destination removed at 0x00010037ed34 */
/* WARNING: Switch with 1 destination removed at 0x00010037ed40 */
/* WARNING: Switch with 1 destination removed at 0x00010037ed6c */
/* WARNING: Switch with 1 destination removed at 0x00010037ed98 */
/* WARNING: Switch with 1 destination removed at 0x00010037edb4 */
/* WARNING: Switch with 1 destination removed at 0x00010037edd0 */
/* WARNING: Switch with 1 destination removed at 0x00010037edec */
/* WARNING: Switch with 1 destination removed at 0x00010037edf8 */
/* WARNING: Switch with 1 destination removed at 0x00010037ee04 */
/* WARNING: Switch with 1 destination removed at 0x00010037ee20 */

void Recovered_YYYTableViewHelper_m02629
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar7 = _objc_retain(param_4);
  uVar2 = auVar7._0_8_;
  func_0x00010093be80(param_1,auVar7._8_8_,uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar5 = 0;
  uVar6 = 1;
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100940c00(lVar3);
    param_4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    uVar6 = (ulong)(param_4 == 0);
    lVar5 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar5 * 8 + 0x100dcd780)) {
  case 0x10037edc8:
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(uVar6 * 8 + 0x100dcd7d0)) {
  case 0x10037ee18:
                    /* WARNING: Switch is manually overridden */
    func_0x000100940c00(lVar3);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    lVar5 = auVar7._0_8_;
    func_0x00010038187c(uVar1,auVar7._8_8_,uVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar4,uVar2);
    _objc_release(uVar4);
    _objc_release(lVar5);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar1);
  return;
}



/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037ee9c: Decompiler process died  */


/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037f2bc: Decompiler process died  */


/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 10037fd44: Decompiler process died  */


/* DECOMPILATION FAILED: java.lang.IllegalStateException: Exception while decompiling 1003800b8: Decompiler process died  */


/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:canEditRowAtIndexPath:]
 * Entry: 0x100380a4c; original ABI: B32@0:8@16@24
 * Original instructions in modeled body: 202; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100380a74 */
/* WARNING: Switch with 1 destination removed at 0x000100380a84 */
/* WARNING: Switch with 1 destination removed at 0x000100380abc */
/* WARNING: Switch with 1 destination removed at 0x000100380ac8 */
/* WARNING: Switch with 1 destination removed at 0x000100380af8 */
/* WARNING: Switch with 1 destination removed at 0x000100380b04 */
/* WARNING: Switch with 1 destination removed at 0x000100380b30 */
/* WARNING: Switch with 1 destination removed at 0x000100380b4c */
/* WARNING: Switch with 1 destination removed at 0x000100380b68 */
/* WARNING: Switch with 1 destination removed at 0x000100380b74 */
/* WARNING: Switch with 1 destination removed at 0x000100380b90 */
/* WARNING: Switch with 1 destination removed at 0x000100380b9c */
/* WARNING: Switch with 1 destination removed at 0x000100380ba8 */
/* WARNING: Switch with 1 destination removed at 0x000100380bc4 */
/* WARNING: Switch with 1 destination removed at 0x000100380bd0 */
/* WARNING: Switch with 1 destination removed at 0x000100380bdc */
/* WARNING: Switch with 1 destination removed at 0x000100380c14 */
/* WARNING: Switch with 1 destination removed at 0x000100380c38 */
/* WARNING: Switch with 1 destination removed at 0x000100380c70 */
/* WARNING: Switch with 1 destination removed at 0x000100380c7c */
/* WARNING: Switch with 1 destination removed at 0x000100380c88 */
/* WARNING: Switch with 1 destination removed at 0x000100380cb4 */
/* WARNING: Switch with 1 destination removed at 0x000100380cc4 */
/* WARNING: Switch with 1 destination removed at 0x000100380cd0 */
/* WARNING: Switch with 1 destination removed at 0x000100380d0c */
/* WARNING: Switch with 1 destination removed at 0x000100380d30 */
/* WARNING: Switch with 1 destination removed at 0x000100380d5c */
/* WARNING: Switch with 1 destination removed at 0x000100380d6c */
/* WARNING: Switch with 1 destination removed at 0x000100380dac */
/* WARNING: Switch with 1 destination removed at 0x000100380dd4 */
/* WARNING: Switch with 1 destination removed at 0x000100380de4 */
/* WARNING: Switch with 1 destination removed at 0x000100380e14 */

undefined8
Recovered_YYYTableViewHelper_m02634
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  uVar4 = _objc_retain(param_3);
  auVar8 = _objc_retain(param_4);
  uVar5 = auVar8._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093be80(param_1,auVar8._8_8_,uVar5);
  lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case false:
    lVar6 = 0;
    bVar1 = true;
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001009422c0(lVar2);
    param_1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    bVar1 = param_1 == 0;
    lVar6 = 1;
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar6 * 8 + 0x100dce9e0)) {
  case 0x100380b60:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(bVar1) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001009422c0(lVar2);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar6 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      func_0x00010038191c(lVar2);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(lVar6 != 0) {
      case true:
        uVar7 = 1;
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x0001009422c0(lVar2);
      lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      lVar3 = (**(code **)(lVar6 + 0x10))(lVar6,uVar5);
      _objc_release(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(lVar3 != 0) {
      case false:
        uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        uVar7 = 1;
                    /* WARNING: Switch is manually overridden */
      }
    }
    break;
  case true:
    uVar7 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
  return uVar7;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:editingStyleForRowAtIndexPath:]
 * Entry: 0x100380e18; original ABI: q32@0:8@16@24
 * Original instructions in modeled body: 131; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100380e40 */
/* WARNING: Switch with 1 destination removed at 0x000100380e5c */
/* WARNING: Switch with 1 destination removed at 0x000100380ed0 */
/* WARNING: Switch with 1 destination removed at 0x000100380ef0 */
/* WARNING: Switch with 1 destination removed at 0x000100380efc */
/* WARNING: Switch with 1 destination removed at 0x000100380f18 */
/* WARNING: Switch with 1 destination removed at 0x000100380f3c */
/* WARNING: Switch with 1 destination removed at 0x000100380f64 */
/* WARNING: Switch with 1 destination removed at 0x000100380f74 */
/* WARNING: Switch with 1 destination removed at 0x000100380f80 */
/* WARNING: Switch with 1 destination removed at 0x000100380fb0 */
/* WARNING: Switch with 1 destination removed at 0x000100380fbc */
/* WARNING: Switch with 1 destination removed at 0x000100380fcc */
/* WARNING: Switch with 1 destination removed at 0x000100380fd8 */
/* WARNING: Switch with 1 destination removed at 0x000100381014 */
/* WARNING: Switch with 1 destination removed at 0x000100381064 */

undefined8
Recovered_YYYTableViewHelper_m02635
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  auVar7 = _objc_retain(param_4);
  uVar3 = auVar7._0_8_;
  func_0x00010093be80(param_1,auVar7._8_8_,uVar3);
  lVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case false:
    uVar6 = 0;
    bVar1 = true;
    break;
  case true:
    func_0x0001009422c0(lVar4);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 == 0;
    uVar6 = 1;
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar6) {
  case 1:
    _objc_release();
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(bVar1) {
  case false:
                    /* WARNING: Switch is manually overridden */
    func_0x000100381924(lVar4);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar5 != 0) {
    case false:
      uVar6 = 1;
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      func_0x0001009422c0(lVar4);
      lVar5 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar6 = (**(code **)(lVar5 + 0x10))(lVar5,uVar3);
      _objc_release(lVar5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar6;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
 * Entry: 0x100381068; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 86; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381084 */
/* WARNING: Switch with 1 destination removed at 0x000100381090 */
/* WARNING: Switch with 1 destination removed at 0x0001003810a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003810b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003810f4 */
/* WARNING: Switch with 1 destination removed at 0x00010038110c */
/* WARNING: Switch with 1 destination removed at 0x000100381160 */
/* WARNING: Switch with 1 destination removed at 0x000100381184 */
/* WARNING: Switch with 1 destination removed at 0x000100381190 */
/* WARNING: Switch with 1 destination removed at 0x0001003811ac */
/* WARNING: Switch with 1 destination removed at 0x0001003811d8 */

void Recovered_YYYTableViewHelper_m02636(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923d0 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dcc4b6 = uRam0000000100dcc4b0 ^ 0xb02e;
                    /* WARNING: Switch is manually overridden */
    sRam0000000100dcc4b8 = uRam0000000100dcc4b2 + (uRam0000000100dcc4b2 & 0x4d96) * -2 + 0x4d96;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dcc4ba = uRam0000000100dcc4b4 ^ 0x8b33;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e923d0 = 1;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  func_0x00010097a8a0(0x100dcc4c0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView:commitEditingStyle:forRowAtIndexPath:]
 * Entry: 0x100381214; original ABI: v40@0:8@16q24@32
 * Original instructions in modeled body: 143; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381240 */
/* WARNING: Switch with 1 destination removed at 0x00010038124c */
/* WARNING: Switch with 1 destination removed at 0x000100381268 */
/* WARNING: Switch with 1 destination removed at 0x000100381278 */
/* WARNING: Switch with 1 destination removed at 0x0001003812b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003812e4 */
/* WARNING: Switch with 1 destination removed at 0x0001003812f0 */
/* WARNING: Switch with 1 destination removed at 0x00010038130c */
/* WARNING: Switch with 1 destination removed at 0x000100381318 */
/* WARNING: Switch with 1 destination removed at 0x000100381324 */
/* WARNING: Switch with 1 destination removed at 0x000100381330 */
/* WARNING: Switch with 1 destination removed at 0x00010038134c */
/* WARNING: Switch with 1 destination removed at 0x000100381358 */
/* WARNING: Switch with 1 destination removed at 0x000100381364 */
/* WARNING: Switch with 1 destination removed at 0x000100381378 */
/* WARNING: Switch with 1 destination removed at 0x000100381384 */
/* WARNING: Switch with 1 destination removed at 0x000100381390 */
/* WARNING: Switch with 1 destination removed at 0x00010038139c */
/* WARNING: Switch with 1 destination removed at 0x0001003813f8 */
/* WARNING: Switch with 1 destination removed at 0x000100381414 */
/* WARNING: Switch with 1 destination removed at 0x000100381440 */
/* WARNING: Switch with 1 destination removed at 0x000100381484 */
/* WARNING: Switch with 1 destination removed at 0x0001003814b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003814cc */

void Recovered_YYYTableViewHelper_m02637
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar5 = _objc_retain(param_5);
  uVar3 = auVar5._0_8_;
  func_0x00010093be80(param_1,auVar5._8_8_,uVar3);
  lVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar4 != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001003812a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100dcee30)();
    return;
  }
                    /* WARNING: Switch is manually overridden */
  func_0x00010093d040(lVar4);
  lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 == 0) {
  case false:
    func_0x00010093d040(lVar4);
    lVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,param_4,uVar3);
    _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper sections]
 * Entry: 0x1003814d0; original ABI: @16@0:8
 * Original instructions in modeled body: 64; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003814ec */
/* WARNING: Switch with 1 destination removed at 0x000100381514 */
/* WARNING: Switch with 1 destination removed at 0x000100381528 */
/* WARNING: Switch with 1 destination removed at 0x000100381560 */
/* WARNING: Switch with 1 destination removed at 0x00010038156c */
/* WARNING: Switch with 1 destination removed at 0x000100381578 */
/* WARNING: Switch with 1 destination removed at 0x000100381594 */
/* WARNING: Switch with 1 destination removed at 0x0001003815a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003815c0 */
/* WARNING: Switch with 1 destination removed at 0x0001003815cc */
/* WARNING: Switch with 1 destination removed at 0x0001003815f8 */

void Recovered_YYYTableViewHelper_m02638(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + 0x18) != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100381928(uRam0000000100c71378);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper tableView]
 * Entry: 0x1003815fc; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038160c */
/* WARNING: Switch with 1 destination removed at 0x000100381624 */

void Recovered_YYYTableViewHelper_m02639(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_loadWeakRetained(param_1 + 0x10);
  _objc_autoreleaseReturnValue();
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper setTableView:]
 * Entry: 0x100381630; original ABI: v24@0:8@16
 * Original instructions in modeled body: 20; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381648 */
/* WARNING: Switch with 1 destination removed at 0x000100381658 */
/* WARNING: Switch with 1 destination removed at 0x000100381688 */

void Recovered_YYYTableViewHelper_m02640(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeWeak(param_1 + 0x10,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper autoDeselectRow]
 * Entry: 0x10038168c; original ABI: B16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381694 */
/* WARNING: Switch with 1 destination removed at 0x0001003816a0 */
/* WARNING: Switch with 1 destination removed at 0x0001003816b0 */

bool Recovered_YYYTableViewHelper_m02641(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + 8) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper setAutoDeselectRow:]
 * Entry: 0x1003816c0; original ABI: v20@0:8B16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003816c8 */
/* WARNING: Switch with 1 destination removed at 0x0001003816d8 */
/* WARNING: Switch with 1 destination removed at 0x0001003816e4 */
/* WARNING: Switch with 1 destination removed at 0x000100381700 */

void Recovered_YYYTableViewHelper_m02642(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + 8) = param_3;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper setSections:]
 * Entry: 0x100381708; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100381728 */
/* WARNING: Switch with 1 destination removed at 0x000100381734 */
/* WARNING: Switch with 1 destination removed at 0x000100381744 */
/* WARNING: Switch with 1 destination removed at 0x000100381768 */
/* WARNING: Switch with 1 destination removed at 0x000100381794 */

void Recovered_YYYTableViewHelper_m02643(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTableViewHelper .cxx_destruct]
 * Entry: 0x100381798; original ABI: v16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYTableViewHelper_m02644(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010093139c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_100afe298)(param_1 + 0x10);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYTableViewHelper helperWithTableView:]
 * Entry: 0x10037cb20; original ABI: @24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010037cb40 */
/* WARNING: Switch with 1 destination removed at 0x00010037cb5c */
/* WARNING: Switch with 1 destination removed at 0x00010037cb6c */
/* WARNING: Switch with 1 destination removed at 0x00010037cbb8 */

void Recovered_YYYTableViewHelper_m02645(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  auVar3 = _objc_alloc(param_1);
  uVar2 = func_0x0001003817c8(auVar3._0_8_,auVar3._8_8_,uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(uVar2);
  return;
}



