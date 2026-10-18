/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController judgeIsHaveVideoAuthority:]
 * Entry: 0x100386e04; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 129; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100386e34 */
/* WARNING: Switch with 1 destination removed at 0x000100386e40 */
/* WARNING: Switch with 1 destination removed at 0x000100386e58 */
/* WARNING: Switch with 1 destination removed at 0x000100386e94 */
/* WARNING: Switch with 1 destination removed at 0x000100386ee8 */
/* WARNING: Switch with 1 destination removed at 0x000100386ef8 */
/* WARNING: Switch with 1 destination removed at 0x000100386f04 */
/* WARNING: Switch with 1 destination removed at 0x000100386f18 */
/* WARNING: Switch with 1 destination removed at 0x000100386f3c */
/* WARNING: Switch with 1 destination removed at 0x000100386f7c */
/* WARNING: Switch with 1 destination removed at 0x000100386fc4 */
/* WARNING: Switch with 1 destination removed at 0x000100386fd0 */
/* WARNING: Switch with 1 destination removed at 0x000100386fdc */
/* WARNING: Switch with 1 destination removed at 0x000100386ff0 */
/* WARNING: Switch with 1 destination removed at 0x00010038704c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYQRScanViewController_m02674
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR__AVMediaTypeVideo_100afc038;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar6 = _objc_retain(param_3);
  lVar2 = auVar6._0_8_;
  uVar5 = *(undefined8 *)puVar1;
  lVar3 = func_0x000100939660(uRam0000000100c71ec0,auVar6._8_8_,uVar5);
  uVar4 = uRam0000000100c71ec0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 < 1) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 < 3) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(lVar3 == 3) {
      case false:
        goto override_jmp_100386f3c_case_0;
      case true:
                    /* WARNING: Switch is manually overridden */
        uVar4 = 1;
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    switch(lVar3 == 0) {
    case true:
                    /* WARNING: Switch is manually overridden */
      puStack_90 = PTR___NSConcreteStackBlock_100afc560;
      uStack_88 = _UNK_10097b060;
      puStack_80 = &DAT_100387050;
      puStack_78 = &UNK_100b00628;
      auVar6 = _objc_retain(lVar2);
      uStack_70 = auVar6._0_8_;
      func_0x00010095bc60(uVar4,auVar6._8_8_,uVar5,&puStack_90);
      _objc_release(uStack_70);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10038704c_case_0;
    }
override_jmp_100386f3c_case_0:
                    /* WARNING: Switch is manually overridden */
    uVar4 = 0;
  }
  (**(code **)(lVar2 + 0x10))(lVar2,uVar4);
override_jmp_10038704c_case_0:
  _objc_release(lVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController viewDidLoad]
 * Entry: 0x100387220; original ABI: v16@0:8
 * Original instructions in modeled body: 123; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038724c */
/* WARNING: Switch with 1 destination removed at 0x000100387258 */
/* WARNING: Switch with 1 destination removed at 0x000100387274 */
/* WARNING: Switch with 1 destination removed at 0x0001003872a8 */
/* WARNING: Switch with 1 destination removed at 0x0001003872cc */
/* WARNING: Switch with 1 destination removed at 0x00010038733c */
/* WARNING: Switch with 1 destination removed at 0x000100387360 */
/* WARNING: Switch with 1 destination removed at 0x000100387374 */
/* WARNING: Switch with 1 destination removed at 0x000100387394 */
/* WARNING: Switch with 1 destination removed at 0x0001003873d0 */
/* WARNING: Switch with 1 destination removed at 0x0001003873e4 */
/* WARNING: Switch with 1 destination removed at 0x00010038749c */
/* WARNING: Switch with 1 destination removed at 0x0001003874c8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYQRScanViewController_m02675(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 extraout_x1;
  undefined1 auVar2 [16];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923f0 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd0808 = uRam0000000100dd0800 ^ 0xc0a9;
    uRam0000000100dd080a = uRam0000000100dd0802 ^ 0x7c94;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd080c = uRam0000000100dd0804 ^ 0x756;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd080e = uRam0000000100dd0806 ^ 0x5b69;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e923f0 = 1;
  uStack_48 = uRam0000000100c73c00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidLoad_100c70870);
  func_0x00010097a8a0(0x100dd0810);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096f0e0(param_1,auVar2._8_8_,auVar2._0_8_);
  puVar1 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar2._0_8_);
  puStack_80 = puVar1;
  uStack_78 = _UNK_10097b060;
  puStack_70 = &DAT_1003874cc;
                    /* WARNING: Switch is manually overridden */
  puStack_68 = &UNK_100aff148;
  uStack_60 = param_1;
  func_0x00010094cbe0(param_1,extraout_x1,&puStack_80);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController viewDidLayoutSubviews]
 * Entry: 0x100387b34; original ABI: v16@0:8
 * Original instructions in modeled body: 85; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100387b70 */
/* WARNING: Switch with 1 destination removed at 0x000100387b84 */
/* WARNING: Switch with 1 destination removed at 0x000100387b90 */
/* WARNING: Switch with 1 destination removed at 0x000100387bc0 */
/* WARNING: Switch with 1 destination removed at 0x000100387bf8 */
/* WARNING: Switch with 1 destination removed at 0x000100387c14 */
/* WARNING: Switch with 1 destination removed at 0x000100387c70 */
/* WARNING: Switch with 1 destination removed at 0x000100387f74 */
/* WARNING: Switch with 1 destination removed at 0x000100387fb4 */

void Recovered_YYYQRScanViewController_m02676
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_60;
  undefined8 uStack_58;
  
  uStack_58 = uRam0000000100c73c00;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidLayoutSubviews_100c70868);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75f40;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_5 + lVar3) != 0) {
  case false:
                    /* WARNING: Switch is manually overridden */
    return;
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100979160(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar4 = func_0x00010093a760();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100964900(uVar4,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar3));
    _objc_release(uVar1);
    uVar2 = func_0x00010038ad4c(*(undefined8 *)(param_5 + lVar3));
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100387c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100dd0fc8))();
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController gotoSetting]
 * Entry: 0x100388070; original ABI: v16@0:8
 * Original instructions in modeled body: 52; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038808c */
/* WARNING: Switch with 1 destination removed at 0x0001003880b4 */
/* WARNING: Switch with 1 destination removed at 0x00010038813c */
/* WARNING: Switch with 1 destination removed at 0x000100388148 */
/* WARNING: Switch with 1 destination removed at 0x000100388174 */

void Recovered_YYYQRScanViewController_m02677(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  puVar2 = PTR____NSDictionary0___100afc6c8;
  puVar1 = PTR__UIApplicationOpenSettingsURLString_100afc368;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010038ad7c(uRam0000000100c71490);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100935260(uRam0000000100c715a8,auVar3._8_8_,*(undefined8 *)puVar1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100952060(auVar3._0_8_,auVar4._8_8_,auVar4._0_8_,*(undefined8 *)puVar2,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController viewDidAppear:]
 * Entry: 0x10038818c; original ABI: v20@0:8B16
 * Original instructions in modeled body: 86; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003881b4 */
/* WARNING: Switch with 1 destination removed at 0x0001003881cc */
/* WARNING: Switch with 1 destination removed at 0x000100388200 */
/* WARNING: Switch with 1 destination removed at 0x00010038823c */
/* WARNING: Switch with 1 destination removed at 0x000100388248 */
/* WARNING: Switch with 1 destination removed at 0x000100388258 */
/* WARNING: Switch with 1 destination removed at 0x000100388274 */
/* WARNING: Switch with 1 destination removed at 0x000100388288 */
/* WARNING: Switch with 1 destination removed at 0x0001003882a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003882b0 */
/* WARNING: Switch with 1 destination removed at 0x0001003882bc */
/* WARNING: Switch with 1 destination removed at 0x000100388344 */
/* WARNING: Switch with 1 destination removed at 0x000100388360 */

void Recovered_YYYQRScanViewController_m02678(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lStack_40;
  undefined8 uStack_38;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_38 = uRam0000000100c73c00;
  lStack_40 = param_1;
  func_0x00010038ad80(&lStack_40,PTR_s_viewDidAppear__100c70858,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + iRam0000000100c75f44) != 0) {
  case false:
    lVar2 = 0;
    uVar3 = 0;
    break;
  case true:
    func_0x00010095ef80(param_1);
    param_3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uVar1 = func_0x00010094c140(param_3);
                    /* WARNING: Switch is manually overridden */
    uVar3 = (ulong)(uVar1 ^ 1);
    lVar2 = 1;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined8 *)(lVar2 * 8 + 0x100dd1268)) {
  case 0x10038829c:
    _objc_release(param_3);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001003882cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uVar3 * 8 + 0x100dd12b8))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController viewDidDisappear:]
 * Entry: 0x100388364; original ABI: v20@0:8B16
 * Original instructions in modeled body: 38; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003883a0 */
/* WARNING: Switch with 1 destination removed at 0x000100388408 */

void Recovered_YYYQRScanViewController_m02679
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = uRam0000000100c73c00;
  uStack_50 = param_1;
                    /* WARNING: Switch is manually overridden */
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewDidDisappear__100c70860,param_3);
  func_0x00010038ad8c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100979260();
  auVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x00010093d980(auVar2._0_8_,auVar2._8_8_,param_1);
                    /* WARNING: Could not recover jumptable at 0x000100388424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100dd1308))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController gotoPhotoViewController]
 * Entry: 0x100388618; original ABI: v16@0:8
 * Original instructions in modeled body: 55; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038865c */
/* WARNING: Switch with 1 destination removed at 0x000100388668 */
/* WARNING: Switch with 1 destination removed at 0x0001003886fc */
/* WARNING: Switch with 1 destination removed at 0x000100388720 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYQRScanViewController_m02680(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR___NSConcreteStackBlock_100afc560;
  uVar1 = _UNK_10097b060;
  puStack_90 = PTR___NSConcreteStackBlock_100afc560;
  uStack_88 = _UNK_10097b060;
  puStack_80 = &DAT_100388724;
  puStack_78 = &UNK_100afea38;
  uStack_70 = param_1;
  func_0x0001003870fc();
  puStack_c0 = puVar2;
  uStack_b8 = uVar1;
  puStack_b0 = &DAT_100388b58;
                    /* WARNING: Switch is manually overridden */
  puStack_a8 = &UNK_100afea38;
  uStack_a0 = param_1;
  func_0x00010038ada0(&puStack_c0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController captureOutput:didOutputMetadataObjects:fromConnection:]
 * Entry: 0x100388c14; original ABI: v40@0:8@16@24@32
 * Original instructions in modeled body: 102; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100388c44 */
/* WARNING: Switch with 1 destination removed at 0x000100388c80 */
/* WARNING: Switch with 1 destination removed at 0x000100388c8c */
/* WARNING: Switch with 1 destination removed at 0x000100388c98 */
/* WARNING: Switch with 1 destination removed at 0x000100388cbc */
/* WARNING: Switch with 1 destination removed at 0x000100388ce8 */
/* WARNING: Switch with 1 destination removed at 0x000100388d04 */
/* WARNING: Switch with 1 destination removed at 0x000100388d48 */
/* WARNING: Switch with 1 destination removed at 0x000100388d84 */
/* WARNING: Switch with 1 destination removed at 0x000100388db0 */
/* WARNING: Switch with 1 destination removed at 0x000100388e04 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYQRScanViewController_m02681
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
                    /* WARNING: Switch is manually overridden */
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar5 = _objc_retain(param_5);
  lVar6 = func_0x00010093e360(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar6 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x00010038adc0(param_1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100973c00(uVar4);
    _objc_release(uVar4);
    puStack_80 = puVar1;
    uStack_78 = _UNK_10097b060;
                    /* WARNING: Switch is manually overridden */
    puStack_70 = &DAT_100388e08;
    puStack_68 = &UNK_100afea68;
    uStack_60 = _objc_retain(uVar3);
    uStack_58 = param_1;
    func_0x0001003870fc(&puStack_80);
    _objc_release(uStack_60);
  }
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController imagePickerControllerDidCancel:]
 * Entry: 0x100389918; original ABI: v24@0:8@16
 * Original instructions in modeled body: 31; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100389938 */
/* WARNING: Switch with 1 destination removed at 0x000100389970 */

void Recovered_YYYQRScanViewController_m02682
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar2 = _objc_retain(param_3);
  func_0x000100941640(auVar2._0_8_,auVar2._8_8_,1,0);
                    /* WARNING: Switch is manually overridden */
  func_0x00010095ef80(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009736a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(auVar2._0_8_);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController imagePickerController:didFinishPickingMediaWithInfo:]
 * Entry: 0x1003899a8; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 496; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003899f4 */
/* WARNING: Switch with 1 destination removed at 0x000100389b98 */
/* WARNING: Switch with 1 destination removed at 0x000100389bcc */
/* WARNING: Switch with 1 destination removed at 0x000100389c64 */
/* WARNING: Switch with 1 destination removed at 0x000100389db4 */
/* WARNING: Switch with 1 destination removed at 0x000100389dd8 */
/* WARNING: Switch with 1 destination removed at 0x000100389df4 */
/* WARNING: Switch with 1 destination removed at 0x000100389e24 */
/* WARNING: Switch with 1 destination removed at 0x000100389e34 */
/* WARNING: Switch with 1 destination removed at 0x00010038a090 */
/* WARNING: Switch with 1 destination removed at 0x00010038a0b8 */
/* WARNING: Switch with 1 destination removed at 0x00010038a0c4 */
/* WARNING: Switch with 1 destination removed at 0x00010038a0d4 */
/* WARNING: Switch with 1 destination removed at 0x00010038a108 */
/* WARNING: Switch with 1 destination removed at 0x00010038a1d8 */
/* WARNING: Switch with 1 destination removed at 0x00010038a1e4 */
/* WARNING: Switch with 1 destination removed at 0x00010038a200 */
/* WARNING: Switch with 1 destination removed at 0x00010038a22c */
/* WARNING: Switch with 1 destination removed at 0x00010038a23c */
/* WARNING: Switch with 1 destination removed at 0x00010038a258 */
/* WARNING: Switch with 1 destination removed at 0x00010038a264 */
/* WARNING: Switch with 1 destination removed at 0x00010038a2b0 */
/* WARNING: Switch with 1 destination removed at 0x00010038a328 */
/* WARNING: Switch with 1 destination removed at 0x00010038a364 */
/* WARNING: Switch with 1 destination removed at 0x00010038a3d4 */
/* WARNING: Switch with 1 destination removed at 0x00010038a40c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYQRScanViewController_m02683
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar11 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e923fc == 0) {
  case true:
    bRam0000000100dd0a6c = bRam0000000100dd0a6a ^ 0xba;
    bRam0000000100dd0a6d = bRam0000000100dd0a6b ^ 0xdb;
    uRam0000000100dd0a74 = uRam0000000100dd0a6e ^ 0xbab4;
    uRam0000000100dd0a76 = uRam0000000100dd0a70 ^ 0xdd52;
    uRam0000000100dd0a78 = uRam0000000100dd0a72 ^ 0x7afd;
    uRam0000000100dd0a40 =
         CONCAT17((byte)((ulong)uRam0000000100dd0a20 >> 0x38) ^
                  (byte)((ulong)_UNK_100980390 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd0a20 >> 0x30) ^
                           (byte)((ulong)_UNK_100980390 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd0a20 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980390 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd0a20 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980390 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd0a20 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980390 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd0a20 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980390 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd0a20 >> 8) ^
                                                  (byte)((ulong)_UNK_100980390 >> 8),
                                                  (byte)uRam0000000100dd0a20 ^ (byte)_UNK_100980390)
                                                  ))))));
    uRam0000000100dd0a48 = uRam0000000100dd0a28 ^ 0x66b6;
    uRam0000000100dd0a4a = uRam0000000100dd0a2a ^ 0x2649;
    uRam0000000100dd0a4c = uRam0000000100dd0a2c ^ 0xcf09;
    sRam0000000100dd0a4e = uRam0000000100dd0a2e + (uRam0000000100dd0a2e & 0x6bc7) * -2 + 0x6bc7;
    uRam0000000100dd0a50 = uRam0000000100dd0a30 ^ 0xb269;
    sRam0000000100dd0a52 = uRam0000000100dd0a32 + (uRam0000000100dd0a32 & 0x3652) * -2 + 0x3652;
    uRam0000000100dd0a54 = uRam0000000100dd0a34 ^ 0x77c7;
    uRam0000000100dd0a0a = uRam0000000100dd0a00 ^ 0x78dc;
    sRam0000000100dd0a0c = uRam0000000100dd0a02 + (uRam0000000100dd0a02 & 0x417d) * -2 + 0x417d;
    uRam0000000100dd0a0e = uRam0000000100dd0a04 ^ 0x6e54;
    uRam0000000100dd0a10 = uRam0000000100dd0a06 ^ 0x6f83;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd0a12 = uRam0000000100dd0a08 ^ 0xef69;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100dd0a60 = uRam0000000100dd0a56 ^ 0xbffe;
    uRam0000000100dd0a62 =
         CONCAT17((byte)((ulong)uRam0000000100dd0a58 >> 0x38) ^
                  (byte)((ulong)_UNK_100980398 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100dd0a58 >> 0x30) ^
                           (byte)((ulong)_UNK_100980398 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100dd0a58 >> 0x28) ^
                                    (byte)((ulong)_UNK_100980398 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100dd0a58 >> 0x20) ^
                                             (byte)((ulong)_UNK_100980398 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100dd0a58 >> 0x18) ^
                                                      (byte)((ulong)_UNK_100980398 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100dd0a58 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_100980398 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100dd0a58 >> 8) ^
                                                  (byte)((ulong)_UNK_100980398 >> 8),
                                                  (byte)uRam0000000100dd0a58 ^ (byte)_UNK_100980398)
                                                  ))))));
    cRam0000000100dd0944 = bRam0000000100dd0940 + (bRam0000000100dd0940 & 5) * -2 + -0x7b;
    bRam0000000100dd0945 = bRam0000000100dd0941 ^ 0xb8;
    bRam0000000100dd0946 = bRam0000000100dd0942 ^ 0xdf;
    bRam0000000100dd0947 = bRam0000000100dd0943 ^ 0xde;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e923fc = 1;
  uVar2 = _objc_retain(param_3);
  auVar12 = _objc_retain(param_4);
  func_0x000100941640(uVar2,auVar12._8_8_,1,0);
  func_0x00010038adf8(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009736a0();
  _objc_release(uVar3);
  func_0x00010038adfc(auVar12._0_8_,extraout_x1,
                      *(undefined8 *)PTR__UIImagePickerControllerOriginalImage_100afc458);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093dec0(uRam0000000100c71590,auVar13._8_8_,0);
  auVar14 = _objc_retainAutoreleasedReturnValue();
  func_0x00010038ae00(uRam0000000100c71458,auVar14._8_8_,
                      *(undefined8 *)PTR__CIDetectorAccuracyHigh_100afc088,
                      *(undefined8 *)PTR__CIDetectorAccuracy_100afc080);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  func_0x00010038ae04(uRam0000000100c71ed0,auVar15._8_8_,
                      *(undefined8 *)PTR__CIDetectorTypeQRCode_100afc090,auVar14._0_8_,auVar15._0_8_
                     );
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = uRam0000000100c71ed8;
  uVar5 = _objc_retainAutorelease(auVar13._0_8_);
  auVar13 = func_0x000100934c20();
  func_0x0001009478c0(uVar3,auVar13._8_8_,auVar13._0_8_);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009435a0(uVar4,auVar13._8_8_,auVar13._0_8_);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar13._0_8_;
                    /* WARNING: Switch is manually overridden */
  do {
    _objc_release(uVar3);
    lVar9 = func_0x00010093e360(uVar6);
    uVar3 = uRam0000000100c71380;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar9 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x000100939020(uRam0000000100c71378);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      auVar13 = func_0x00010038ae10(uVar6);
      uVar3 = uRam0000000100c714b8;
      bVar1 = true;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(auVar13._0_8_ != 0) {
      case true:
        func_0x000100951c20(uVar6,auVar13._8_8_,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010094fd00();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = func_0x00010094c760();
                    /* WARNING: Could not recover jumptable at 0x000100389e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uVar7 & 0xffffffff) * 8 + 0x100dd1bf8))();
        return;
      }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(uRam0000000100dd1ce0) {
      case 0x10038a0b0:
        func_0x00010038ae1c(0x100dd0ac0);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        func_0x00010093d260(uVar10,auVar13._8_8_,0x100dd0ae0);
        auVar16 = _objc_retainAutoreleasedReturnValue();
        func_0x00010038ae20(uVar3,auVar16._8_8_,auVar13._0_8_,auVar16._0_8_,0);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar16._0_8_);
        _objc_release(auVar13._0_8_);
        uVar3 = uRam0000000100c71508;
        func_0x00010097a8a0(0x100dd0b00);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        func_0x000100936440(uVar3,auVar13._8_8_,auVar13._0_8_,0,0);
        auVar16 = _objc_retainAutoreleasedReturnValue();
        func_0x00010038ae24(uVar8,auVar16._8_8_,auVar16._0_8_);
        _objc_release(auVar16._0_8_);
        _objc_release(auVar13._0_8_);
                    /* WARNING: Switch is manually overridden */
        func_0x00010038ae28(uVar8,extraout_x1_00,1);
        _objc_release(uVar8);
        bVar1 = false;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case true:
      func_0x00010097a8a0(0x100dd0a80);
      uVar10 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      func_0x00010038ae08(0x100dd0aa0);
      auVar13 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      func_0x00010038ae0c(uVar3,auVar13._8_8_,uVar10,auVar13._0_8_);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(auVar13._0_8_);
      _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
override_jmp_10038a220_case_0:
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10038a220_case_1;
    }
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)((ulong)!bVar1 * 8 + 0x100dd1d48)) {
    case 0x10038a224:
      goto override_jmp_10038a220_case_0;
    case 0x10038a230:
override_jmp_10038a220_case_1:
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      _objc_release(uVar4);
      _objc_release(auVar15._0_8_);
      _objc_release(auVar14._0_8_);
      _objc_release(uVar5);
                    /* WARNING: Switch is manually overridden */
      _objc_release(auVar12._0_8_);
      _objc_release(uVar2);
      if (*(long *)PTR____stack_chk_guard_100afc6e8 == lVar11) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(uVar4);
      func_0x00010093e360(uVar6);
      uVar3 = uVar4;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController session]
 * Entry: 0x10038a410; original ABI: @16@0:8
 * Original instructions in modeled body: 145; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038a458 */
/* WARNING: Switch with 1 destination removed at 0x00010038a490 */
/* WARNING: Switch with 1 destination removed at 0x00010038a4a0 */
/* WARNING: Switch with 1 destination removed at 0x00010038a4cc */
/* WARNING: Switch with 1 destination removed at 0x00010038a5f8 */
/* WARNING: Switch with 1 destination removed at 0x00010038a614 */
/* WARNING: Switch with 1 destination removed at 0x00010038a624 */
/* WARNING: Switch with 1 destination removed at 0x00010038a630 */
/* WARNING: Switch with 1 destination removed at 0x00010038a744 */
/* WARNING: Switch with 1 destination removed at 0x00010038a7e4 */

void Recovered_YYYQRScanViewController_m02684(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined **unaff_x25;
  undefined8 *unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)PTR____stack_chk_guard_100afc6e8;
  lVar6 = (long)iRam0000000100c75f44;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar6) != 0) {
  case false:
    unaff_x25 = &PTR_s_y_fileName_100c71000;
    unaff_x27 = &PTR_s_y_fileName_100c71000;
    unaff_x28 = &PTR_s_y_fileName_100c71000;
    unaff_x26 = (undefined8 *)PTR__AVMediaTypeVideo_100afc038;
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
                    /* WARNING: Switch is manually overridden */
    uVar2 = _objc_retain(*(undefined8 *)(param_1 + lVar6));
    _objc_autoreleaseReturnValue(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lVar4) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010093fd80(unaff_x25[0x1d8],extraout_x1_00,*unaff_x26);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x00010038ae44(unaff_x27[0x1dc],auVar7._8_8_,auVar7._0_8_,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc(unaff_x28[0x1dd]);
    uVar2 = func_0x00010038ae48();
    _dispatch_get_global_queue(0,0);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    func_0x00010038ae4c(uVar2,auVar7._8_8_,param_1,auVar7._0_8_);
    param_2 = extraout_x1_01;
  }
  func_0x00010038ae34(unaff_x25[0x1d8],param_2,*unaff_x26);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x000100940880(unaff_x27[0x1dc],auVar7._8_8_,auVar7._0_8_,0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x00010038ae38(unaff_x28[0x1dd]);
  uVar2 = func_0x00010038ae3c();
  _dispatch_get_global_queue(0,0);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009674c0(uVar2,auVar7._8_8_,param_1,auVar7._0_8_);
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar7._0_8_);
  _objc_alloc(uRam0000000100c71ef0);
                    /* WARNING: Switch is manually overridden */
  uVar2 = func_0x000100948020();
  uVar5 = *(undefined8 *)(param_1 + lVar6);
  *(undefined8 *)(param_1 + lVar6) = uVar2;
  _objc_release(uVar5);
  uVar1 = func_0x00010093b480(*(undefined8 *)(param_1 + lVar6),extraout_x1,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010038a4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100dd1e08))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController previewLayer]
 * Entry: 0x10038a7e8; original ABI: @16@0:8
 * Original instructions in modeled body: 78; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038a808 */
/* WARNING: Switch with 1 destination removed at 0x00010038a81c */
/* WARNING: Switch with 1 destination removed at 0x00010038a848 */
/* WARNING: Switch with 1 destination removed at 0x00010038a8a8 */
/* WARNING: Switch with 1 destination removed at 0x00010038a8b8 */
/* WARNING: Switch with 1 destination removed at 0x00010038a960 */

void Recovered_YYYQRScanViewController_m02685(long param_1)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75f40;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_1 + lVar3) != 0) {
  case false:
    uVar1 = _objc_alloc(uRam0000000100c71ef8);
    func_0x00010095ef80(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    uVar1 = func_0x000100949da0(uVar1,auVar4._8_8_,auVar4._0_8_);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    _objc_release(auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
    func_0x000100970020(*(undefined8 *)(param_1 + lVar3),extraout_x1,
                        *(undefined8 *)PTR__AVLayerVideoGravityResizeAspectFill_100afc030);
    func_0x000100979160(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094d2e0();
    auVar4 = _objc_retainAutoreleasedReturnValue();
    func_0x00010038ae50(auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_1 + lVar3),0);
    _objc_release(auVar4._0_8_);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x00010093148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_100afe338)(*(undefined8 *)(param_1 + lVar3));
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController output]
 * Entry: 0x10038a964; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038a96c */
/* WARNING: Switch with 1 destination removed at 0x00010038a978 */

undefined8 Recovered_YYYQRScanViewController_m02686(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75f48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController setOutput:]
 * Entry: 0x10038a98c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038a9a0 */
/* WARNING: Switch with 1 destination removed at 0x00010038a9ac */

void Recovered_YYYQRScanViewController_m02687(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75f48,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController setSession:]
 * Entry: 0x10038a9b8; original ABI: v24@0:8@16
 * Original instructions in modeled body: 23; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038a9e8 */
/* WARNING: Switch with 1 destination removed at 0x00010038aa0c */

void Recovered_YYYQRScanViewController_m02688(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75f44;
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController setPreviewLayer:]
 * Entry: 0x10038aa20; original ABI: v24@0:8@16
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038aa40 */
/* WARNING: Switch with 1 destination removed at 0x00010038aa50 */
/* WARNING: Switch with 1 destination removed at 0x00010038aa80 */

void Recovered_YYYQRScanViewController_m02689(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75f40,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController isGoToWebVC]
 * Entry: 0x10038aa84; original ABI: B16@0:8
 * Original instructions in modeled body: 12; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038aa98 */
/* WARNING: Switch with 1 destination removed at 0x00010038aaa4 */

bool Recovered_YYYQRScanViewController_m02690(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + iRam0000000100c75f4c) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController setIsGoToWebVC:]
 * Entry: 0x10038aab4; original ABI: v20@0:8B16
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038aac8 */
/* WARNING: Switch with 1 destination removed at 0x00010038aad4 */

void Recovered_YYYQRScanViewController_m02691(long param_1,undefined8 param_2,undefined1 param_3)

{
                    /* WARNING: Switch is manually overridden */
  *(undefined1 *)(param_1 + iRam0000000100c75f4c) = param_3;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController contentView]
 * Entry: 0x10038aaec; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038aafc */
/* WARNING: Switch with 1 destination removed at 0x00010038ab08 */
/* WARNING: Switch with 1 destination removed at 0x00010038ab14 */

undefined8 Recovered_YYYQRScanViewController_m02692(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75f50);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController setContentView:]
 * Entry: 0x10038ab20; original ABI: v24@0:8@16
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038ab48 */
/* WARNING: Switch with 1 destination removed at 0x00010038ab70 */
/* WARNING: Switch with 1 destination removed at 0x00010038ab7c */
/* WARNING: Switch with 1 destination removed at 0x00010038ab98 */

void Recovered_YYYQRScanViewController_m02693(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75f50;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYQRScanViewController .cxx_destruct]
 * Entry: 0x10038abac; original ABI: v16@0:8
 * Original instructions in modeled body: 45; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010038abc8 */
/* WARNING: Switch with 1 destination removed at 0x00010038abd8 */
/* WARNING: Switch with 1 destination removed at 0x00010038ac04 */
/* WARNING: Switch with 1 destination removed at 0x00010038ac24 */
/* WARNING: Switch with 1 destination removed at 0x00010038ac98 */

void Recovered_YYYQRScanViewController_m02694(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75f50,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75f40,0);
  _objc_storeStrong(param_1 + iRam0000000100c75f44,0);
  _objc_storeStrong(param_1 + iRam0000000100c75f48,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



