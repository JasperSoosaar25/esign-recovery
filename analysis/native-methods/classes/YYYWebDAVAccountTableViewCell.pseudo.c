/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebDAVAccountTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1002fa158; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 142; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002fa1b4 */
/* WARNING: Switch with 1 destination removed at 0x0001002fa1e0 */
/* WARNING: Switch with 1 destination removed at 0x0001002fa2c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002fa3b4 */
/* WARNING: Switch with 1 destination removed at 0x0001002fa3ec */
/* WARNING: Switch with 1 destination removed at 0x0001002fa408 */

undefined8
Recovered_YYYWebDAVAccountTableViewCell_m02204
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = _objc_retain(param_4);
  uStack_48 = uRam0000000100c73b70;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,3,uVar1);
  lVar2 = _objc_retain();
  _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100955080(uRam0000000100c71438);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001002fa40c(lVar2,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
    func_0x0001002fa410(0x402e000000000000,uRam0000000100c713a8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976100(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001002fa414(auVar4._0_8_,auVar4._8_8_,uVar3);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
    func_0x0001009552e0(uRam0000000100c71438);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976100(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010096ea60(auVar4._0_8_,auVar4._8_8_,uVar3);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar3);
    func_0x0001002fa418(0x402e000000000000,uRam0000000100c713a8);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100940700(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001002fa41c(auVar4._0_8_,auVar4._8_8_,uVar3);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar3);
    func_0x0001002fa420(uRam0000000100c71438);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    func_0x000100940700(lVar2);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001002fa424(auVar4._0_8_,auVar4._8_8_,uVar3);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar3);
    func_0x00010095f140(lVar2,extraout_x1,1);
  }
  uVar3 = _objc_retain(lVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  return uVar3;
                    /* WARNING: Switch is manually overridden */
}



