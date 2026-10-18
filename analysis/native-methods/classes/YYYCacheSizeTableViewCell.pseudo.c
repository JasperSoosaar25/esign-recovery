/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYCacheSizeTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x10000cc5c; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 85; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010000cc84 */
/* WARNING: Switch with 1 destination removed at 0x00010000cc90 */
/* WARNING: Switch with 1 destination removed at 0x00010000ccb4 */
/* WARNING: Switch with 1 destination removed at 0x00010000cd08 */
/* WARNING: Switch with 1 destination removed at 0x00010000cd18 */
/* WARNING: Switch with 1 destination removed at 0x00010000cd2c */
/* WARNING: Switch with 1 destination removed at 0x00010000cd3c */
/* WARNING: Switch with 1 destination removed at 0x00010000cd88 */
/* WARNING: Switch with 1 destination removed at 0x00010000cdac */
/* WARNING: Switch with 1 destination removed at 0x00010000cdc8 */
/* WARNING: Switch with 1 destination removed at 0x00010000cde4 */

undefined8
Recovered_YYYCacheSizeTableViewCell_m00038
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c73840;
  uStack_40 = param_1;
  lVar2 = _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__100c61930,1,uVar1);
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
    func_0x00010097a880(uRam0000000100c71438);
    auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100960820(lVar2,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
  }
  uVar3 = _objc_retain(lVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar3);
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



