/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSettingTableViewCell initWithStyle:reuseIdentifier:]
 * Entry: 0x1001e9dbc; original ABI: @32@0:8q16@24
 * Original instructions in modeled body: 124; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e9e04 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9e2c */
/* WARNING: Switch with 1 destination removed at 0x0001001e9e3c */
/* WARNING: Switch with 1 destination removed at 0x0001001e9f70 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9f80 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9f98 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9fc4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9fd0 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea020 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea04c */
/* WARNING: Switch with 1 destination removed at 0x0001001ea080 */

undefined8
Recovered_YYYSettingTableViewCell_m01530
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = _objc_retain(param_4);
  uStack_48 = uRam0000000100c73a88;
  uStack_50 = param_1;
  auVar4 = _objc_msgSendSuper2(&uStack_50,PTR_s_initWithStyle_reuseIdentifier__100c61930,param_3,
                               uVar1);
  lVar3 = auVar4._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
    func_0x0001001ea1c0(lVar3,auVar4._8_8_,1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100974e00(0x402e000000000000,uRam0000000100c713a8);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976100(lVar3);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001ea1c4(auVar4._0_8_,auVar4._8_8_,uVar2);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
    func_0x0001001ea1c8(uRam0000000100c71438);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001ea1cc(lVar3);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x0001001ea1d0(auVar4._0_8_,auVar4._8_8_,uVar2);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar2);
    func_0x000100955080(uRam0000000100c71438);
    auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x000100960820(lVar3,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSettingTableViewCell awakeFromNib]
 * Entry: 0x1001ea084; original ABI: v16@0:8
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea0a4 */

void Recovered_YYYSettingTableViewCell_m01531(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
                    /* WARNING: Switch is manually overridden */
  uStack_18 = uRam0000000100c73a88;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_awakeFromNib_100c5bab8);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSettingTableViewCell setSelected:animated:]
 * Entry: 0x1001ea0c8; original ABI: v24@0:8B16B20
 * Original instructions in modeled body: 35; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea0fc */
/* WARNING: Switch with 1 destination removed at 0x0001001ea114 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea168 */

void Recovered_YYYSettingTableViewCell_m01532
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = uRam0000000100c73a88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_setSelected_animated__100c6c908,param_3,param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYSettingTableViewCell sizeThatFits:]
 * Entry: 0x1001ea16c; original ABI: {CGSize=dd}32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001ea174 */
/* WARNING: Switch with 1 destination removed at 0x0001001ea180 */

void Recovered_YYYSettingTableViewCell_m01533(undefined1 param_1 [16])

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001001ea198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100d47880)(param_1,0x4046000000000000);
  return;
}



