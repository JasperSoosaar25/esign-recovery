/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSignDefaultTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1001bcecc; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 120; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001bcef8 */
/* WARNING: Switch with 1 destination removed at 0x0001001bcf04 */
/* WARNING: Switch with 1 destination removed at 0x0001001bcf58 */
/* WARNING: Switch with 1 destination removed at 0x0001001bd094 */
/* WARNING: Switch with 1 destination removed at 0x0001001bd0c4 */
/* WARNING: Switch with 1 destination removed at 0x0001001bd0e0 */
/* WARNING: Switch with 1 destination removed at 0x0001001bd0ec */
/* WARNING: Switch with 1 destination removed at 0x0001001bd134 */
/* WARNING: Switch with 1 destination removed at 0x0001001bd164 */

undefined8
Recovered_YYYSignDefaultTableViewCell_m01370
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73a58;
  uStack_50 = param_1;
  auVar4 = func_0x0001001bd168(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,0,uVar3);
  lVar1 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010095f140(lVar1,auVar4._8_8_,1);
    func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976100(lVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964720(auVar4._0_8_,auVar4._8_8_,uVar2);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
    func_0x0001001bd16c(lVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009667c0(auVar4._0_8_,auVar4._8_8_,1);
    _objc_release(auVar4._0_8_);
    func_0x000100976100(lVar1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100968560(auVar4._0_8_,auVar4._8_8_,0);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x000100955080(uRam0000000100c71438);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x000100960820(lVar1,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar1);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



