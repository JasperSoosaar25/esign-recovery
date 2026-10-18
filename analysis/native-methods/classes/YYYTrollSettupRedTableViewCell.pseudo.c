/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYTrollSettupRedTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x10019f504; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 108; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010019f52c */
/* WARNING: Switch with 1 destination removed at 0x00010019f550 */
/* WARNING: Switch with 1 destination removed at 0x00010019f564 */
/* WARNING: Switch with 1 destination removed at 0x00010019f580 */
/* WARNING: Switch with 1 destination removed at 0x00010019f590 */
/* WARNING: Switch with 1 destination removed at 0x00010019f5bc */
/* WARNING: Switch with 1 destination removed at 0x00010019f648 */
/* WARNING: Switch with 1 destination removed at 0x00010019f654 */
/* WARNING: Switch with 1 destination removed at 0x00010019f680 */
/* WARNING: Switch with 1 destination removed at 0x00010019f6a0 */
/* WARNING: Switch with 1 destination removed at 0x00010019f6d0 */
/* WARNING: Switch with 1 destination removed at 0x00010019f6e4 */
/* WARNING: Switch with 1 destination removed at 0x00010019f734 */

undefined8
Recovered_YYYTrollSettupRedTableViewCell_m01243
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73a20;
  uStack_50 = param_1;
  lVar3 = func_0x00010019f760(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                              uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010095a440(uRam0000000100c71438);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976100(lVar3);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar2);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100976100(lVar3);
    auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010096ea20(auVar4._0_8_,auVar4._8_8_,1);
    _objc_release(auVar4._0_8_);
  }
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(lVar3);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



