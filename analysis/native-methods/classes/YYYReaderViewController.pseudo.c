/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController viewDidLoad]
 * Entry: 0x100212ffc; original ABI: v16@0:8
 * Original instructions in modeled body: 153; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021302c */
/* WARNING: Switch with 1 destination removed at 0x000100213040 */
/* WARNING: Switch with 1 destination removed at 0x00010021304c */
/* WARNING: Switch with 1 destination removed at 0x000100213088 */
/* WARNING: Switch with 1 destination removed at 0x0001002130c4 */
/* WARNING: Switch with 1 destination removed at 0x00010021312c */
/* WARNING: Switch with 1 destination removed at 0x000100213144 */
/* WARNING: Switch with 1 destination removed at 0x000100213278 */
/* WARNING: Switch with 1 destination removed at 0x000100213290 */
/* WARNING: Switch with 1 destination removed at 0x00010021329c */
/* WARNING: Switch with 1 destination removed at 0x0001002132b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002132d4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderViewController_m01663(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91a94 == 0) {
  case true:
    uRam0000000100d5504e = uRam0000000100d55040 ^ 0x953b;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100d55050 = uRam0000000100d55042 ^ 0x550f;
    uRam0000000100d55052 = uRam0000000100d55044 ^ 0xbb9f;
                    /* WARNING: Switch is manually overridden */
    uRam0000000100d55054 = uRam0000000100d55046 ^ 0x9fab;
    uRam0000000100d55056 = uRam0000000100d55048 ^ 0x50d9;
    sRam0000000100d55058 = uRam0000000100d5504a + (uRam0000000100d5504a & 0x55ec) * -2 + -0x2a14;
    uRam0000000100d5505a = uRam0000000100d5504c ^ 0x48a0;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91a94 = 1;
  uStack_68 = uRam0000000100c73ab0;
  uStack_70 = param_1;
  func_0x000100219394(&uStack_70,PTR_s_viewDidLoad_100c70870);
  uVar1 = uRam0000000100c71380;
  func_0x00010097a8a0(0x100d55060);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979160(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100972000(uVar1,auVar3._8_8_,uVar2,auVar3._0_8_);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  _objc_release(uVar2);
  puStack_a0 = PTR___NSConcreteStackBlock_100afc560;
  uStack_98 = _UNK_10097b060;
  puStack_90 = &DAT_10021337c;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  puStack_88 = &UNK_100afea38;
  uStack_80 = param_1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100219398(&puStack_a0);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController gestureRecognizer:shouldReceiveTouch:]
 * Entry: 0x100214340; original ABI: B32@0:8@16@24
 * Original instructions in modeled body: 65; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100214388 */
/* WARNING: Switch with 1 destination removed at 0x0001002143a4 */
/* WARNING: Switch with 1 destination removed at 0x0001002143fc */
/* WARNING: Switch with 1 destination removed at 0x0001002145d0 */

void Recovered_YYYReaderViewController_m01664
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  _objc_retain(param_7);
  uVar1 = _objc_retain(param_8);
  func_0x000100979160(param_5);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  uVar4 = func_0x00010094e300(uVar1,auVar6._8_8_,auVar6._0_8_);
  uVar1 = param_2;
  _objc_release(auVar6._0_8_);
  func_0x00010093a680(param_5);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar5 = func_0x000100944960();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = _CGRectContainsPoint(uVar5,uVar1,param_3,param_4,uVar4,param_2);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100214410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100d559d8))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController styleChange]
 * Entry: 0x1002145d4; original ABI: v16@0:8
 * Original instructions in modeled body: 16; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002145ec */
/* WARNING: Switch with 1 destination removed at 0x0001002145f8 */

void Recovered_YYYReaderViewController_m01665(undefined8 param_1)

{
  ulong uVar1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100219410(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100214610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d55a88))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController fontChange]
 * Entry: 0x100214654; original ABI: v16@0:8
 * Original instructions in modeled body: 291; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021468c */
/* WARNING: Switch with 1 destination removed at 0x000100214698 */
/* WARNING: Switch with 1 destination removed at 0x000100214704 */
/* WARNING: Switch with 1 destination removed at 0x000100214764 */
/* WARNING: Switch with 1 destination removed at 0x000100214774 */
/* WARNING: Switch with 1 destination removed at 0x000100214788 */
/* WARNING: Switch with 1 destination removed at 0x000100214794 */
/* WARNING: Switch with 1 destination removed at 0x0001002147a0 */
/* WARNING: Switch with 1 destination removed at 0x0001002147ac */
/* WARNING: Switch with 1 destination removed at 0x0001002147d4 */
/* WARNING: Switch with 1 destination removed at 0x0001002147e0 */
/* WARNING: Switch with 1 destination removed at 0x00010021480c */
/* WARNING: Switch with 1 destination removed at 0x000100214824 */
/* WARNING: Switch with 1 destination removed at 0x000100214840 */
/* WARNING: Switch with 1 destination removed at 0x000100214854 */
/* WARNING: Switch with 1 destination removed at 0x000100214878 */
/* WARNING: Switch with 1 destination removed at 0x000100214888 */
/* WARNING: Switch with 1 destination removed at 0x0001002148a4 */
/* WARNING: Switch with 1 destination removed at 0x0001002148ec */
/* WARNING: Switch with 1 destination removed at 0x000100214910 */
/* WARNING: Switch with 1 destination removed at 0x00010021491c */
/* WARNING: Switch with 1 destination removed at 0x000100214940 */
/* WARNING: Switch with 1 destination removed at 0x00010021494c */
/* WARNING: Switch with 1 destination removed at 0x0001002149ec */
/* WARNING: Switch with 1 destination removed at 0x000100214a18 */
/* WARNING: Switch with 1 destination removed at 0x000100214b40 */
/* WARNING: Switch with 1 destination removed at 0x000100214c94 */

void Recovered_YYYReaderViewController_m01666(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91a9c == 0) {
  case true:
    cRam0000000100d55146 = bRam0000000100d55140 + (bRam0000000100d55140 & 0x38) * -2 + '8';
    bRam0000000100d55147 = bRam0000000100d55141 ^ 0x19;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d55148 = bRam0000000100d55142 ^ 0x21;
    bRam0000000100d55149 = bRam0000000100d55143 ^ 0x38;
    bRam0000000100d5514a = bRam0000000100d55144 ^ 0x52;
    bRam0000000100d5514b = bRam0000000100d55145 ^ 0xc9;
  }
  iRam0000000100e91a9c = 1;
  func_0x00010093ebc0(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093c220();
  uVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100219418(uVar4);
  uVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x00010021941c(uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar6);
  uVar6 = uRam0000000100c71448;
  func_0x000100976940(uVar5);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093da60(uVar5);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  func_0x000100974200(uVar6,auVar13._8_8_,0x100d55150);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar13._0_8_);
  _objc_release(uVar8);
  uVar9 = func_0x000100219420(uVar6,extraout_x1,uVar7);
  func_0x00010093dc80(param_1);
  func_0x000100219424(uVar5);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  uVar11 = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  do {
    auVar13 = func_0x00010093e360(uVar8);
                    /* WARNING: Switch is manually overridden */
    uVar1 = uVar4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(uVar11 < auVar13._0_8_) {
    case false:
                    /* WARNING: Switch is manually overridden */
override_jmp_10021486c_case_1:
      func_0x00010021942c(param_1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      func_0x000100219430();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      func_0x000100944120();
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar4);
      func_0x000100967a40(uVar10,extraout_x1_00,uVar1);
      uVar4 = func_0x000100219434(uVar1);
      auVar13 = func_0x00010093e360(uVar8);
      func_0x000100965540(uVar10,auVar13._8_8_,uVar4,auVar13._0_8_);
      _objc_release(uVar10);
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
      return;
                    /* WARNING: Switch is manually overridden */
    case true:
      func_0x000100951c40(uVar8,auVar13._8_8_,uVar11);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      auVar13 = func_0x000100219428();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(auVar13._0_8_ <= uVar9) {
      case false:
override_jmp_1002147c8_case_1:
        lVar12 = 1;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        uVar3 = func_0x000100214320(auVar13._0_8_,auVar13._8_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
        switch(uVar9 < uVar3) {
        case false:
          goto override_jmp_1002147c8_case_1;
        case true:
          uVar1 = _objc_retain(uVar2);
                    /* WARNING: Switch is manually overridden */
          _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
          lVar12 = 0;
                    /* WARNING: Switch is manually overridden */
        }
      }
    }
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined8 *)(lVar12 * 8 + 0x100d55c78)) {
    case 0x100214870:
                    /* WARNING: Switch is manually overridden */
      uVar11 = uVar11 + 1;
      uVar4 = uVar1;
                    /* WARNING: Switch is manually overridden */
      break;
    case 0x100214944:
      goto override_jmp_10021486c_case_1;
    }
  } while( true );
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController scrollToChapter:]
 * Entry: 0x100214c98; original ABI: v24@0:8@16
 * Original instructions in modeled body: 81; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100214cc0 */
/* WARNING: Switch with 1 destination removed at 0x000100214ccc */
/* WARNING: Switch with 1 destination removed at 0x000100214ce8 */
/* WARNING: Switch with 1 destination removed at 0x000100214cf8 */
/* WARNING: Switch with 1 destination removed at 0x000100214d64 */
/* WARNING: Switch with 1 destination removed at 0x000100214e94 */

void Recovered_YYYReaderViewController_m01667
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined1 auVar7 [16];
  
  uVar1 = _objc_retain(param_3);
  func_0x00010093dc80(param_1);
  func_0x000100219444(uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100219448();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009526a0(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979260();
  uVar5 = _objc_retainAutoreleasedReturnValue();
  func_0x000100944120();
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  func_0x000100967a40(uVar6,extraout_x1,uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar7 = func_0x00010021944c(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100219450(uVar6,auVar7._8_8_,0,auVar7._0_8_);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController tap:]
 * Entry: 0x100214e98; original ABI: v24@0:8@16
 * Original instructions in modeled body: 124; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100214ebc */
/* WARNING: Switch with 1 destination removed at 0x000100214ec8 */
/* WARNING: Switch with 1 destination removed at 0x000100214ed4 */
/* WARNING: Switch with 1 destination removed at 0x000100214f04 */
/* WARNING: Switch with 1 destination removed at 0x000100214f34 */
/* WARNING: Switch with 1 destination removed at 0x000100214f4c */
/* WARNING: Switch with 1 destination removed at 0x000100214f70 */
/* WARNING: Switch with 1 destination removed at 0x000100214f7c */
/* WARNING: Switch with 1 destination removed at 0x000100214f98 */
/* WARNING: Switch with 1 destination removed at 0x000100214fa8 */
/* WARNING: Switch with 1 destination removed at 0x000100214fb4 */
/* WARNING: Switch with 1 destination removed at 0x000100214fd0 */
/* WARNING: Switch with 1 destination removed at 0x000100214fdc */
/* WARNING: Switch with 1 destination removed at 0x000100215000 */
/* WARNING: Switch with 1 destination removed at 0x00010021500c */
/* WARNING: Switch with 1 destination removed at 0x000100215018 */
/* WARNING: Switch with 1 destination removed at 0x000100215034 */
/* WARNING: Switch with 1 destination removed at 0x0001002150e4 */
/* WARNING: Switch with 1 destination removed at 0x000100215108 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderViewController_m01668
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  uVar2 = _objc_retain(param_3);
  func_0x000100979160(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)func_0x000100219464(uVar2,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  func_0x000100219468(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  dVar4 = (double)func_0x0001009433a0(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < dVar4 * _UNK_10097b0c8) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(dVar4 * _UNK_10097d210 < dVar5) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      uVar1 = func_0x000100972320(param_1);
                    /* WARNING: Switch is manually overridden */
      func_0x00010096cfa0(param_1,extraout_x1,uVar1 ^ 1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_10021500c_case_0;
    }
  }
                    /* WARNING: Switch is manually overridden */
  func_0x00010021946c(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010096cfa0(param_1,extraout_x1_00,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
override_jmp_10021500c_case_0:
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController scrollToNextPage]
 * Entry: 0x10021510c; original ABI: v16@0:8
 * Original instructions in modeled body: 168; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021514c */
/* WARNING: Switch with 1 destination removed at 0x000100215158 */
/* WARNING: Switch with 1 destination removed at 0x000100215184 */
/* WARNING: Switch with 1 destination removed at 0x000100215194 */
/* WARNING: Switch with 1 destination removed at 0x0001002151b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002151c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002151d4 */
/* WARNING: Switch with 1 destination removed at 0x000100215238 */
/* WARNING: Switch with 1 destination removed at 0x000100215244 */
/* WARNING: Switch with 1 destination removed at 0x000100215250 */
/* WARNING: Switch with 1 destination removed at 0x000100215328 */
/* WARNING: Switch with 1 destination removed at 0x000100215354 */
/* WARNING: Switch with 1 destination removed at 0x0001002153f4 */
/* WARNING: Switch with 1 destination removed at 0x000100215420 */

void Recovered_YYYReaderViewController_m01669(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_70 [3];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_100afc6e8;
  plVar6 = alStack_70;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100219484(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    func_0x00010093c220(uVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x000100947c60();
    auVar7 = func_0x000100947c60(uVar1);
    func_0x0001009791c0(param_1,auVar7._8_8_,uVar3,auVar7._0_8_ + 1,0);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar4 != 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      func_0x000100219488(uVar1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
      uVar3 = func_0x00010021948c(uVar2);
      auVar7 = func_0x000100947c60(uVar1);
      func_0x0001009791c0(param_1,auVar7._8_8_,uVar3,auVar7._0_8_,1);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      func_0x000100219490(param_1);
      auVar8 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      *plVar6 = lVar4;
      plVar6[1] = lVar5;
      func_0x000100939140(uRam0000000100c713e8,auVar8._8_8_,plVar6,2);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      plVar6 = auVar7._0_8_;
      func_0x000100219494(auVar8._0_8_,auVar7._8_8_,plVar6,0,1,0);
      _objc_release(plVar6);
      _objc_release(auVar8._0_8_);
      _objc_release(lVar5);
                    /* WARNING: Switch is manually overridden */
    }
    _objc_release(lVar4);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_58) break;
    ___stack_chk_fail();
    func_0x00010093c220(uVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x000100219498();
    auVar7 = func_0x000100947c60(uVar1);
    func_0x0001009791c0(param_1,auVar7._8_8_,uVar3,auVar7._0_8_ + 1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController showCatalog]
 * Entry: 0x100215424; original ABI: v16@0:8
 * Original instructions in modeled body: 120; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100215444 */
/* WARNING: Switch with 1 destination removed at 0x000100215454 */
/* WARNING: Switch with 1 destination removed at 0x000100215464 */
/* WARNING: Switch with 1 destination removed at 0x000100215528 */
/* WARNING: Switch with 1 destination removed at 0x000100215568 */
/* WARNING: Switch with 1 destination removed at 0x00010021575c */

void Recovered_YYYReaderViewController_m01670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  func_0x0001002194a0(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100963ac0(auVar4._0_8_,auVar4._8_8_,0);
  _objc_release(auVar4._0_8_);
  func_0x00010093a4e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093c280();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093bc60(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962920(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001002194a4(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194a8();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093bc60(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194ac(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001002194b0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194b4();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093bc60(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100976a00(uVar3);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096ea00(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x0001002194b8(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100971be0();
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController hiddenCatalog]
 * Entry: 0x100215760; original ABI: v16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100215784 */

void Recovered_YYYReaderViewController_m01671(long param_1)

{
  func_0x000100941600(*(undefined8 *)(param_1 + iRam0000000100c75b40));
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController popViewController]
 * Entry: 0x10021578c; original ABI: v16@0:8
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002157a4 */
/* WARNING: Switch with 1 destination removed at 0x0001002157b0 */
/* WARNING: Switch with 1 destination removed at 0x000100215814 */

void Recovered_YYYReaderViewController_m01672(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x000100951080(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194d8(auVar1._0_8_,auVar1._8_8_,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar1._0_8_);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController saveIfNeed]
 * Entry: 0x100215824; original ABI: v16@0:8
 * Original instructions in modeled body: 29; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021585c */
/* WARNING: Switch with 1 destination removed at 0x000100215868 */
/* WARNING: Switch with 1 destination removed at 0x0001002158a8 */

void Recovered_YYYReaderViewController_m01673(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 extraout_x1;
  
  puVar1 = PTR_s_saveCurrentChapter_100c67f78;
  func_0x00010093bae0(uRam0000000100c71840,param_2,param_1,PTR_s_saveCurrentChapter_100c67f78,0);
  func_0x0001009531c0(0x3ff0000000000000,param_1,extraout_x1,puVar1,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController saveCurrentChapter]
 * Entry: 0x1002158ac; original ABI: v16@0:8
 * Original instructions in modeled body: 151; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002158cc */
/* WARNING: Switch with 1 destination removed at 0x0001002158e4 */
/* WARNING: Switch with 1 destination removed at 0x0001002158f0 */
/* WARNING: Switch with 1 destination removed at 0x00010021590c */
/* WARNING: Switch with 1 destination removed at 0x000100215948 */
/* WARNING: Switch with 1 destination removed at 0x0001002159bc */
/* WARNING: Switch with 1 destination removed at 0x0001002159f4 */
/* WARNING: Switch with 1 destination removed at 0x000100215a70 */
/* WARNING: Switch with 1 destination removed at 0x000100215a80 */
/* WARNING: Switch with 1 destination removed at 0x000100215aa4 */
/* WARNING: Switch with 1 destination removed at 0x000100215ab4 */
/* WARNING: Switch with 1 destination removed at 0x000100215b48 */
/* WARNING: Switch with 1 destination removed at 0x000100215c40 */

void Recovered_YYYReaderViewController_m01674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91aa0 == 0) {
  case true:
    bRam0000000100d55177 = bRam0000000100d55170 ^ 5;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d55178 = bRam0000000100d55171 ^ 0xce;
    bRam0000000100d55179 = ~((bRam0000000100d55172 | 0x52) & (bRam0000000100d55172 ^ 0xff | 0xad));
    cRam0000000100d5517a = bRam0000000100d55173 + (bRam0000000100d55173 & 0x34) * -2 + '4';
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d5517b = bRam0000000100d55174 ^ 0x74;
    bRam0000000100d5517c = bRam0000000100d55175 ^ 0x60;
    bRam0000000100d5517d = bRam0000000100d55176 ^ 0xc6;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91aa0 = 1;
  func_0x00010093ebc0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194dc(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100943880();
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x000100973ee0(auVar4._0_8_,auVar4._8_8_,0x100d55180);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  func_0x000100970d60(uRam0000000100c71390);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010093ade0(uVar2);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002194e0(auVar4._0_8_,auVar4._8_8_,uVar1,uVar3,0);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController pageViewController:viewControllerBeforeViewController:]
 * Entry: 0x100215c44; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 18; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYReaderViewController_m01675
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = func_0x00010094c380();
                    /* WARNING: Could not recover jumptable at 0x000100215c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar1 & 0xffffffff) * 8 + 0x100d56118))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController pageViewController:viewControllerAfterViewController:]
 * Entry: 0x100215e20; original ABI: @32@0:8@16@24
 * Original instructions in modeled body: 38; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100215e48 */
/* WARNING: Switch with 1 destination removed at 0x000100215e58 */
/* WARNING: Switch with 1 destination removed at 0x000100215e74 */
/* WARNING: Switch with 1 destination removed at 0x000100215e84 */
/* WARNING: Switch with 1 destination removed at 0x000100215f88 */
/* WARNING: Switch with 1 destination removed at 0x000100215fa4 */

void Recovered_YYYReaderViewController_m01676
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
  uVar2 = func_0x00010094c380(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100215e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100d56228))();
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController pageViewController:willTransitionToViewControllers:]
 * Entry: 0x10021603c; original ABI: v32@0:8@16@24
 * Original instructions in modeled body: 38; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100216064 */
/* WARNING: Switch with 1 destination removed at 0x000100216074 */
/* WARNING: Switch with 1 destination removed at 0x0001002160b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002160fc */

void Recovered_YYYReaderViewController_m01677
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = _objc_retain(param_3);
  auVar2 = _objc_retain(param_4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010021950c(param_1,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController pageViewController:didFinishAnimating:previousViewControllers:transitionCompleted:]
 * Entry: 0x100216100; original ABI: v40@0:8@16B24@28B36
 * Original instructions in modeled body: 32; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100216120 */
/* WARNING: Switch with 1 destination removed at 0x000100216140 */
/* WARNING: Switch with 1 destination removed at 0x00010021614c */
/* WARNING: Switch with 1 destination removed at 0x000100216158 */
/* WARNING: Switch with 1 destination removed at 0x000100216184 */

void Recovered_YYYReaderViewController_m01678
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  func_0x00010095cf40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController viewControllerAtChapterIndex:pageIndex:snapshop:]
 * Entry: 0x100216198; original ABI: @36@0:8q16q24B32
 * Original instructions in modeled body: 88; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002161d0 */
/* WARNING: Switch with 1 destination removed at 0x000100216228 */
/* WARNING: Switch with 1 destination removed at 0x000100216238 */
/* WARNING: Switch with 1 destination removed at 0x000100216278 */
/* WARNING: Switch with 1 destination removed at 0x0001002162a0 */
/* WARNING: Switch with 1 destination removed at 0x0001002162bc */
/* WARNING: Switch with 1 destination removed at 0x0001002162d0 */
/* WARNING: Switch with 1 destination removed at 0x0001002162e0 */
/* WARNING: Switch with 1 destination removed at 0x0001002164a4 */

void Recovered_YYYReaderViewController_m01679
               (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
                    /* WARNING: Switch is manually overridden */
  func_0x00010093a4e0(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093c280();
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar3 = func_0x000100219510(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch((long)param_3 < 0 || uVar3 <= param_3) {
  case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001002164bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((param_4 >> 0x3f) * -8 + 0x100d563f8))();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00010093136c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_100afe278)(0);
    return;
  }
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController initSubviews]
 * Entry: 0x1002167dc; original ABI: v16@0:8
 * Original instructions in modeled body: 821; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021682c */
/* WARNING: Switch with 1 destination removed at 0x00010021685c */
/* WARNING: Switch with 1 destination removed at 0x000100216874 */
/* WARNING: Switch with 1 destination removed at 0x0001002168c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002168f0 */
/* WARNING: Switch with 1 destination removed at 0x000100216c64 */
/* WARNING: Switch with 1 destination removed at 0x000100216df4 */
/* WARNING: Switch with 1 destination removed at 0x000100216e08 */
/* WARNING: Switch with 1 destination removed at 0x000100216e40 */
/* WARNING: Switch with 1 destination removed at 0x000100216e5c */
/* WARNING: Switch with 1 destination removed at 0x000100216e74 */
/* WARNING: Switch with 1 destination removed at 0x000100216eb8 */
/* WARNING: Switch with 1 destination removed at 0x000100216ed8 */
/* WARNING: Switch with 1 destination removed at 0x000100216ef8 */
/* WARNING: Switch with 1 destination removed at 0x000100216f04 */
/* WARNING: Switch with 1 destination removed at 0x000100216f1c */
/* WARNING: Switch with 1 destination removed at 0x000100216f30 */
/* WARNING: Switch with 1 destination removed at 0x000100216f48 */
/* WARNING: Switch with 1 destination removed at 0x000100216f5c */
/* WARNING: Switch with 1 destination removed at 0x000100216f68 */
/* WARNING: Switch with 1 destination removed at 0x000100216f80 */
/* WARNING: Switch with 1 destination removed at 0x000100216f98 */
/* WARNING: Switch with 1 destination removed at 0x000100216fa4 */
/* WARNING: Switch with 1 destination removed at 0x000100216fc4 */
/* WARNING: Switch with 1 destination removed at 0x000100216fd0 */
/* WARNING: Switch with 1 destination removed at 0x000100216fdc */
/* WARNING: Switch with 1 destination removed at 0x000100216ffc */
/* WARNING: Switch with 1 destination removed at 0x000100217008 */
/* WARNING: Switch with 1 destination removed at 0x000100217038 */
/* WARNING: Switch with 1 destination removed at 0x000100217054 */
/* WARNING: Switch with 1 destination removed at 0x000100217068 */
/* WARNING: Switch with 1 destination removed at 0x000100217090 */
/* WARNING: Switch with 1 destination removed at 0x00010021709c */
/* WARNING: Switch with 1 destination removed at 0x0001002170a8 */
/* WARNING: Switch with 1 destination removed at 0x0001002170c4 */
/* WARNING: Switch with 1 destination removed at 0x0001002170d0 */
/* WARNING: Switch with 1 destination removed at 0x0001002170f0 */
/* WARNING: Switch with 1 destination removed at 0x000100217114 */
/* WARNING: Switch with 1 destination removed at 0x000100217138 */
/* WARNING: Switch with 1 destination removed at 0x000100217158 */
/* WARNING: Switch with 1 destination removed at 0x000100217164 */
/* WARNING: Switch with 1 destination removed at 0x000100217184 */
/* WARNING: Switch with 1 destination removed at 0x000100217198 */
/* WARNING: Switch with 1 destination removed at 0x0001002171d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002171e8 */
/* WARNING: Switch with 1 destination removed at 0x0001002171f8 */
/* WARNING: Switch with 1 destination removed at 0x000100217204 */
/* WARNING: Switch with 1 destination removed at 0x000100217230 */
/* WARNING: Switch with 1 destination removed at 0x000100217244 */
/* WARNING: Switch with 1 destination removed at 0x000100217258 */
/* WARNING: Switch with 1 destination removed at 0x000100217270 */
/* WARNING: Switch with 1 destination removed at 0x000100217284 */
/* WARNING: Switch with 1 destination removed at 0x000100217348 */
/* WARNING: Switch with 1 destination removed at 0x000100217364 */
/* WARNING: Switch with 1 destination removed at 0x000100217388 */
/* WARNING: Switch with 1 destination removed at 0x000100217394 */
/* WARNING: Switch with 1 destination removed at 0x0001002173bc */
/* WARNING: Switch with 1 destination removed at 0x000100217404 */
/* WARNING: Switch with 1 destination removed at 0x000100217410 */
/* WARNING: Switch with 1 destination removed at 0x0001002175b0 */
/* WARNING: Switch with 1 destination removed at 0x0001002175e0 */
/* WARNING: Switch with 1 destination removed at 0x0001002175fc */
/* WARNING: Switch with 1 destination removed at 0x000100217618 */
/* WARNING: Switch with 1 destination removed at 0x000100217634 */
/* WARNING: Switch with 1 destination removed at 0x000100217654 */
/* WARNING: Switch with 1 destination removed at 0x000100217690 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderViewController_m01680
               (undefined1 param_1 [16],undefined8 param_2,double param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_1a0 [128];
  undefined8 auStack_120 [8];
  undefined8 auStack_e0 [6];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91aa4 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d551ab = bRam0000000100d551a0 ^ 0xeb;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    uRam0000000100d551ac =
         CONCAT17((byte)((ulong)uRam0000000100d551a1 >> 0x38) ^
                  (byte)((ulong)_UNK_10097e400 >> 0x38),
                  CONCAT16((byte)((ulong)uRam0000000100d551a1 >> 0x30) ^
                           (byte)((ulong)_UNK_10097e400 >> 0x30),
                           CONCAT15((byte)((ulong)uRam0000000100d551a1 >> 0x28) ^
                                    (byte)((ulong)_UNK_10097e400 >> 0x28),
                                    CONCAT14((byte)((ulong)uRam0000000100d551a1 >> 0x20) ^
                                             (byte)((ulong)_UNK_10097e400 >> 0x20),
                                             CONCAT13((byte)((ulong)uRam0000000100d551a1 >> 0x18) ^
                                                      (byte)((ulong)_UNK_10097e400 >> 0x18),
                                                      CONCAT12((byte)((ulong)uRam0000000100d551a1 >>
                                                                     0x10) ^
                                                               (byte)((ulong)_UNK_10097e400 >> 0x10)
                                                               ,CONCAT11((byte)((ulong)
                                                  uRam0000000100d551a1 >> 8) ^
                                                  (byte)((ulong)_UNK_10097e400 >> 8),
                                                  (byte)uRam0000000100d551a1 ^ (byte)_UNK_10097e400)
                                                  ))))));
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d551b4 = bRam0000000100d551a9 ^ 0x2d;
    bRam0000000100d551b5 = bRam0000000100d551aa ^ 0x90;
    param_2 = _UNK_10097e400;
  }
  iRam0000000100e91aa4 = 1;
  puVar5 = auStack_e0;
  puVar8 = auStack_120;
  puStack_90 = auStack_1a0;
  uStack_98 = uRam0000000100c73ab0;
  uStack_a0 = param_5;
  func_0x000100219548(&uStack_a0,PTR_s_initSubviews_100c60f00);
  func_0x0001009526a0(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010021954c(auVar11._0_8_,auVar11._8_8_,param_5);
  _objc_release(auVar11._0_8_);
  auVar11 = _objc_alloc(uRam0000000100c71cc0);
  auVar11 = func_0x00010094a0a0(auVar11._0_8_,auVar11._8_8_,0,0,0);
  func_0x000100968ae0(param_5,auVar11._8_8_,auVar11._0_8_);
  _objc_release(auVar11._0_8_);
  func_0x000100219550(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962c60(auVar11._0_8_,auVar11._8_8_,param_5);
  _objc_release(auVar11._0_8_);
  func_0x0001009526a0(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100962920(auVar11._0_8_,auVar11._8_8_,param_5);
  _objc_release(auVar11._0_8_);
  func_0x0001009526a0(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100963580(auVar11._0_8_,auVar11._8_8_,1);
  _objc_release(auVar11._0_8_);
  func_0x0001009526a0(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100219554(param_5,auVar11._8_8_,auVar11._0_8_);
  _objc_release(auVar11._0_8_);
  func_0x000100219558(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100940e40(auVar11._0_8_,auVar11._8_8_,param_5);
  _objc_release(auVar11._0_8_);
  func_0x000100979160(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009526a0(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979160();
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010021955c(uVar1,auVar11._8_8_,auVar11._0_8_);
  _objc_release(auVar11._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100219560(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar9 = func_0x000100219564();
  func_0x0001009526a0(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100979160();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  func_0x000100964900(uVar9,param_2,param_3,param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar11 = func_0x000100219568(uRam0000000100c71418);
  func_0x000100960fa0(param_5,auVar11._8_8_,auVar11._0_8_);
  _objc_release(auVar11._0_8_);
  func_0x00010093a2a0(uRam0000000100c71438);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093a840(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x000100960820(auVar11._0_8_,auVar11._8_8_,uVar1);
  _objc_release(auVar11._0_8_);
  _objc_release(uVar1);
  func_0x00010021956c(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar10 = (double)func_0x000100219570();
  dVar10 = (1.0 - dVar10) * _UNK_10097e408;
  func_0x000100219574(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095fc00(dVar10);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010093a840(param_5);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  func_0x00010096fcc0(auVar11._0_8_,auVar11._8_8_,0);
  _objc_release(auVar11._0_8_);
  func_0x000100979160(param_5);
  puVar4 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  while( true ) {
    func_0x00010093a840(param_5);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937540(puVar4,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(puVar4);
    dVar10 = (double)func_0x00010095cde0(uRam0000000100c714d0);
    uVar1 = _objc_alloc(uRam0000000100c71cc8);
    func_0x000100979160(param_5);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x0001009433a0();
    func_0x0001002176b0(0,-(dVar10 + 44.0),uVar3,dVar10 + 44.0);
    auVar11 = func_0x0001009492e0(uVar1);
    func_0x00010096f5a0(param_5,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(uVar2);
    func_0x000100219578(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x0001009399c0();
    auVar11 = _objc_retainAutoreleasedReturnValue();
    func_0x00010021957c(auVar11._0_8_,auVar11._8_8_,param_5,PTR_s_popViewController_100c65108,0x40);
    _objc_release(auVar11._0_8_);
    _objc_release(uVar1);
    func_0x000100979160(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    func_0x000100976f00(param_5);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    func_0x000100219580(uVar1,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(uVar1);
    uVar1 = _objc_alloc(uRam0000000100c71cd0);
    func_0x000100219584(param_5);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x0001009433a0();
    func_0x0001002176b0(0,0,uVar3,param_3 + 50.0 + 100.0);
    auVar11 = func_0x0001009492e0(uVar1);
    func_0x000100219588(param_5,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(uVar2);
    func_0x00010021958c(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar3 = func_0x000100219590();
    func_0x000100219594(param_5);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    func_0x000100964080(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_initWeak(auStack_b0,param_5);
    func_0x00010093a680(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    *puVar5 = PTR___NSConcreteStackBlock_100afc560;
    puVar5[1] = _UNK_10097b060;
                    /* WARNING: Switch is manually overridden */
    puVar5[2] = &DAT_1002176d8;
    puVar5[3] = &UNK_100b01cb8;
    puVar4 = puVar5 + 4;
    _objc_copyWeak(puVar4,auStack_b0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010096cfe0(uVar1,extraout_x1_00,puVar5);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100979160(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    func_0x00010093a680(param_5);
    auVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100937540(uVar1,auVar11._8_8_,auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    auVar11 = _objc_alloc(uRam0000000100c71c50);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    auVar11 = func_0x000100949f80(auVar11._0_8_,auVar11._8_8_,param_5,PTR_s_tap__100c6f5e0);
                    /* WARNING: Switch is manually overridden */
    func_0x000100219598(param_5,auVar11._8_8_,auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010021959c(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001002195a0(param_5);
    auVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100936c60(uVar1,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    func_0x00010093fce0(uRam0000000100c71400);
    auVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100937080(auVar11._0_8_,auVar11._8_8_,param_5,PTR_s_styleChange_100c6eef0,
                        _UNK_100b00d28,0);
                    /* WARNING: Switch is manually overridden */
    _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x00010093fce0(uRam0000000100c71400);
    auVar11 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x0001002195a4(auVar11._0_8_,auVar11._8_8_,param_5,PTR_s_fontChange_100c5f828,
                        _UNK_100b00d30,0);
    _objc_release(auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
                    /* WARNING: Switch is manually overridden */
    func_0x0001002195a8(param_5);
    uVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100945040(uVar1);
    puVar5 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
    lVar6 = func_0x00010093e380(puVar5,extraout_x1,puVar8,puStack_90,0x10);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    switch(lVar6 == 0) {
    case false:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined8 *)((ulong)(*(long *)puVar8[2] == *(long *)puVar8[2]) * 8 + 0x100d56978)) {
      case 0x100217228:
                    /* WARNING: Switch is manually overridden */
        func_0x0001002195ac(puVar5);
      }
                    /* WARNING: Switch is manually overridden */
      uVar1 = *(undefined8 *)puVar8[1];
                    /* WARNING: Switch is manually overridden */
      auVar11 = func_0x00010093c700(uRam0000000100c71c50);
                    /* WARNING: Switch is manually overridden */
      uVar7 = func_0x00010094ba40(uVar1,auVar11._8_8_,auVar11._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100217294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uVar7 & 0xffffffff) * 8 + 0x100d569d8))();
      return;
    }
                    /* WARNING: Switch is manually overridden */
    _objc_release(puVar5);
                    /* WARNING: Switch is manually overridden */
    func_0x000100970d60(uRam0000000100c71408);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    puVar8 = auVar11._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100937060(puVar8,auVar11._8_8_,param_5,0x100d551c0,1,0);
    _objc_release(puVar8);
    _objc_destroyWeak(puVar4);
    _objc_destroyWeak(auStack_b0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    if (*(long *)PTR____stack_chk_guard_100afc6e8 == lStack_88) break;
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_b0);
    __Unwind_Resume(param_5);
    func_0x00010093a840(param_5);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    func_0x000100937540(puVar4,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
    _objc_release(puVar4);
    dVar10 = (double)func_0x0001002195b4(uRam0000000100c714d0);
    uVar1 = _objc_alloc(uRam0000000100c71cc8);
    func_0x000100979160(param_5);
    _objc_retainAutoreleasedReturnValue();
    param_3 = (double)func_0x0001002195b8();
    func_0x0001002176b0(0,-(dVar10 + 44.0),param_3,dVar10 + 44.0);
    auVar11 = func_0x0001009492e0(uVar1);
    func_0x0001002195bc(param_5,auVar11._8_8_,auVar11._0_8_);
    _objc_release(auVar11._0_8_);
  }
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController dealloc]
 * Entry: 0x1002177ec; original ABI: v16@0:8
 * Original instructions in modeled body: 123; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100217818 */
/* WARNING: Switch with 1 destination removed at 0x000100217824 */
/* WARNING: Switch with 1 destination removed at 0x000100217840 */
/* WARNING: Switch with 1 destination removed at 0x00010021796c */
/* WARNING: Switch with 1 destination removed at 0x000100217978 */
/* WARNING: Switch with 1 destination removed at 0x000100217a2c */

void Recovered_YYYReaderViewController_m01681(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91aa8 == 0) {
  case true:
    bRam0000000100d551eb = ~((bRam0000000100d551e0 | 0xd4) & (bRam0000000100d551e0 ^ 0xff | 0x2b));
    cRam0000000100d551ec = bRam0000000100d551e1 + (bRam0000000100d551e1 & 0x32) * -2 + '2';
    bRam0000000100d551ed = bRam0000000100d551e2 ^ 0x3b;
    bRam0000000100d551ee = bRam0000000100d551e3 ^ 0xb5;
    bRam0000000100d551ef = bRam0000000100d551e4 ^ 0xd0;
    bRam0000000100d551f0 = bRam0000000100d551e5 ^ 0xfc;
    bRam0000000100d551f1 = bRam0000000100d551e6 ^ 0xdb;
    bRam0000000100d551f2 = bRam0000000100d551e7 ^ 0xfc;
    bRam0000000100d551f3 = bRam0000000100d551e8 ^ 0x3b;
    bRam0000000100d551f4 = bRam0000000100d551e9 ^ 0x66;
    bRam0000000100d551f5 = bRam0000000100d551ea ^ 0xe6;
  }
  iRam0000000100e91aa8 = 1;
  func_0x00010095cf20(param_1);
  func_0x0001002195c0(uRam0000000100c71408);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010095b5a0(auVar1._0_8_,auVar1._8_8_,param_1,0x100d55200);
  _objc_release(auVar1._0_8_);
  uStack_48 = uRam0000000100c73ab0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_dealloc_100c5db00);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController observeValueForKeyPath:ofObject:change:context:]
 * Entry: 0x100217a30; original ABI: v48@0:8@16@24@32^v40
 * Original instructions in modeled body: 134; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100217a70 */
/* WARNING: Switch with 1 destination removed at 0x000100217a7c */
/* WARNING: Switch with 1 destination removed at 0x000100217a98 */
/* WARNING: Switch with 1 destination removed at 0x000100217aa4 */
/* WARNING: Switch with 1 destination removed at 0x000100217ad8 */
/* WARNING: Switch with 1 destination removed at 0x000100217af8 */
/* WARNING: Switch with 1 destination removed at 0x000100217b18 */
/* WARNING: Switch with 1 destination removed at 0x000100217b28 */
/* WARNING: Switch with 1 destination removed at 0x000100217b38 */
/* WARNING: Switch with 1 destination removed at 0x000100217b74 */
/* WARNING: Switch with 1 destination removed at 0x000100217bc8 */
/* WARNING: Switch with 1 destination removed at 0x000100217d48 */
/* WARNING: Switch with 1 destination removed at 0x000100217e04 */

void Recovered_YYYReaderViewController_m01682
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91aac == 0) {
  case true:
    bRam0000000100d5522b = bRam0000000100d55220 ^ 0x1d;
    bRam0000000100d5522c = bRam0000000100d55221 ^ 0xac;
    cRam0000000100d5522d = bRam0000000100d55222 + (bRam0000000100d55222 & 0x5c) * -2 + -0x24;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d5522e = bRam0000000100d55223 ^ 0x4b;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d5522f = bRam0000000100d55224 ^ 0x80;
    bRam0000000100d55230 = bRam0000000100d55225 ^ 0x7e;
    bRam0000000100d55231 = bRam0000000100d55226 ^ 0x3a;
    bRam0000000100d55232 = bRam0000000100d55227 ^ 0x6b;
    bRam0000000100d55233 = bRam0000000100d55228 ^ 0x70;
    bRam0000000100d55234 = bRam0000000100d55229 ^ 0xce;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d55235 = bRam0000000100d5522a ^ 4;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91aac = 1;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = func_0x00010094b580(uVar1,extraout_x1,0x100d55240);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x000100217bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uVar2 & 0xffffffff) * 8 + 0x100d56db8))();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController shouldCustomizeNavigationBarTransitionIfHideable]
 * Entry: 0x100217f50; original ABI: B16@0:8
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100217f58 */
/* WARNING: Switch with 1 destination removed at 0x000100217f64 */
/* WARNING: Switch with 1 destination removed at 0x000100217f70 */

undefined8 Recovered_YYYReaderViewController_m01683(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return 1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController preferredNavigationBarHidden]
 * Entry: 0x100217f7c; original ABI: B16@0:8
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100217f84 */

undefined8 Recovered_YYYReaderViewController_m01684(void)

{
                    /* WARNING: Switch is manually overridden */
  return 1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController preferredStatusBarStyle]
 * Entry: 0x100217f90; original ABI: q16@0:8
 * Original instructions in modeled body: 30; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100217fa8 */
/* WARNING: Switch with 1 destination removed at 0x000100217fd4 */
/* WARNING: Switch with 1 destination removed at 0x000100217fe4 */
/* WARNING: Switch with 1 destination removed at 0x000100218024 */

undefined8 Recovered_YYYReaderViewController_m01685(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  func_0x0001002195d8(uRam0000000100c71408);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = func_0x000100954120(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController prefersStatusBarHidden]
 * Entry: 0x100218028; original ABI: B16@0:8
 * Original instructions in modeled body: 22; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218040 */
/* WARNING: Switch with 1 destination removed at 0x00010021804c */
/* WARNING: Switch with 1 destination removed at 0x000100218058 */
/* WARNING: Switch with 1 destination removed at 0x000100218074 */

uint Recovered_YYYReaderViewController_m01686(undefined8 param_1)

{
  uint uVar1;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x0001002195e4(param_1);
                    /* WARNING: Switch is manually overridden */
  return uVar1 ^ 1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController viewDidLayoutSubviews]
 * Entry: 0x100218088; original ABI: v16@0:8
 * Original instructions in modeled body: 85; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002180b8 */
/* WARNING: Switch with 1 destination removed at 0x0001002180c8 */
/* WARNING: Switch with 1 destination removed at 0x0001002181a0 */
/* WARNING: Switch with 1 destination removed at 0x00010021827c */

void Recovered_YYYReaderViewController_m01687
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = uRam0000000100c73ab0;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_viewDidLayoutSubviews_100c70868);
  func_0x000100979160(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar3 = func_0x00010093a760();
  func_0x00010093a840(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
  func_0x000100964900(uVar3,param_2,param_3,param_4,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100979160(param_5);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001009526a0(param_5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002195e8();
  auVar4 = _objc_retainAutoreleasedReturnValue();
  func_0x0001002195ec(uVar1,auVar4._8_8_,auVar4._0_8_);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(auVar4._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController catalogView]
 * Entry: 0x100218280; original ABI: @16@0:8
 * Original instructions in modeled body: 183; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002182b4 */
/* WARNING: Switch with 1 destination removed at 0x0001002182d8 */
/* WARNING: Switch with 1 destination removed at 0x0001002182e4 */
/* WARNING: Switch with 1 destination removed at 0x000100218364 */
/* WARNING: Switch with 1 destination removed at 0x000100218430 */
/* WARNING: Switch with 1 destination removed at 0x00010021844c */
/* WARNING: Switch with 1 destination removed at 0x00010021846c */
/* WARNING: Switch with 1 destination removed at 0x000100218480 */
/* WARNING: Switch with 1 destination removed at 0x0001002184ec */
/* WARNING: Switch with 1 destination removed at 0x000100218508 */
/* WARNING: Switch with 1 destination removed at 0x000100218514 */
/* WARNING: Switch with 1 destination removed at 0x000100218520 */
/* WARNING: Switch with 1 destination removed at 0x000100218534 */
/* WARNING: Switch with 1 destination removed at 0x00010021868c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderViewController_m01688
               (undefined1 param_1 [16],undefined1 param_2 [16],double param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [16];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  
                    /* WARNING: Switch is manually overridden */
  lVar5 = (long)iRam0000000100c75b40;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(long *)(param_4 + lVar5) != 0) {
  case false:
    uVar2 = func_0x0001002195fc(uRam0000000100c71cd8);
    func_0x000100979160(param_4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar6 = func_0x0001009433a0();
    func_0x000100979160(param_4);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar7 = (double)func_0x000100219600();
    func_0x00010095cde0(uRam0000000100c714d0);
                    /* WARNING: Switch is manually overridden */
    func_0x0001002176b0(0,0,uVar6,(dVar7 - param_3) + -50.0);
    uVar2 = func_0x000100219604(uVar2);
    uVar6 = *(undefined8 *)(param_4 + lVar5);
    *(undefined8 *)(param_4 + lVar5) = uVar2;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x000100964f40(*(undefined8 *)(param_4 + lVar5),extraout_x1,1);
    func_0x000100219608(param_4);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
    uVar3 = *(undefined8 *)(param_4 + lVar5);
    func_0x00010021960c(param_4);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    func_0x00010094a5a0(uVar2,auVar8._8_8_,uVar3,auVar8._0_8_);
    _objc_release(auVar8._0_8_);
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,param_4);
    uVar2 = *(undefined8 *)(param_4 + lVar5);
    puStack_b0 = puVar1;
    uStack_a8 = _UNK_10097b060;
    puStack_a0 = &DAT_1002186f4;
    puStack_98 = &UNK_100affbf8;
    _objc_copyWeak(auStack_90,auStack_80);
                    /* WARNING: Switch is manually overridden */
    func_0x000100963060(uVar2,extraout_x1_01,&puStack_b0);
                    /* WARNING: Switch is manually overridden */
    uVar2 = *(undefined8 *)(param_4 + lVar5);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
                    /* WARNING: Switch is manually overridden */
    uStack_d4 = 0;
    puStack_d0 = &DAT_100218888;
    puStack_c8 = &UNK_100b01d78;
    _objc_copyWeak(auStack_c0,auStack_80);
    func_0x00010096c180(uVar2,extraout_x1_00,&puStack_e0);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_90);
                    /* WARNING: Switch is manually overridden */
    _objc_destroyWeak(auStack_80);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_4 + lVar5));
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController currentDivisionModel]
 * Entry: 0x100218914; original ABI: @16@0:8
 * Original instructions in modeled body: 42; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218988 */
/* WARNING: Switch with 1 destination removed at 0x000100218994 */
/* WARNING: Switch with 1 destination removed at 0x0001002189c0 */

void Recovered_YYYReaderViewController_m01689(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x0001009526a0();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x000100219634();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  func_0x000100944120();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000100950560(uVar3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setShowTool:]
 * Entry: 0x1002189c4; original ABI: v20@0:8B16
 * Original instructions in modeled body: 65; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002189e4 */
/* WARNING: Switch with 1 destination removed at 0x0001002189f0 */
/* WARNING: Switch with 1 destination removed at 0x000100218a08 */
/* WARNING: Switch with 1 destination removed at 0x000100218a50 */
/* WARNING: Switch with 1 destination removed at 0x000100218a78 */
/* WARNING: Switch with 1 destination removed at 0x000100218adc */
/* WARNING: Switch with 1 destination removed at 0x000100218ae8 */
/* WARNING: Switch with 1 destination removed at 0x000100218af4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYReaderViewController_m01690(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  puStack_50 = PTR___NSConcreteStackBlock_100afc560;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(*(byte *)(param_1 + iRam0000000100c75b44) != param_3) {
  case true:
                    /* WARNING: Switch is manually overridden */
    uStack_28 = (undefined1)param_3;
    *(undefined1 *)(param_1 + iRam0000000100c75b44) = uStack_28;
    uStack_48 = _UNK_10097b060;
    puStack_40 = &DAT_100218b08;
    puStack_38 = &UNK_100b00a58;
    lStack_30 = param_1;
                    /* WARNING: Switch is manually overridden */
    func_0x000100219638(_UNK_10097b118,uRam0000000100c71418,param_2,&puStack_50);
    func_0x00010021963c(param_1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController filePath]
 * Entry: 0x100218d7c; original ABI: @16@0:8
 * Original instructions in modeled body: 4; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

undefined8 Recovered_YYYReaderViewController_m01691(long param_1)

{
  return *(undefined8 *)(param_1 + iRam0000000100c75b48);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setFilePath:]
 * Entry: 0x100218d8c; original ABI: v24@0:8@16
 * Original instructions in modeled body: 26; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218dac */
/* WARNING: Switch with 1 destination removed at 0x000100218dc0 */
/* WARNING: Switch with 1 destination removed at 0x000100218ddc */

void Recovered_YYYReaderViewController_m01692(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75b48;
                    /* WARNING: Switch is manually overridden */
  uVar1 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController pageViewController]
 * Entry: 0x100218dfc; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218e10 */
/* WARNING: Switch with 1 destination removed at 0x000100218e1c */

undefined8 Recovered_YYYReaderViewController_m01693(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b4c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setPageViewController:]
 * Entry: 0x100218e24; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218e44 */
/* WARNING: Switch with 1 destination removed at 0x000100218e58 */
/* WARNING: Switch with 1 destination removed at 0x000100218e64 */
/* WARNING: Switch with 1 destination removed at 0x000100218e80 */
/* WARNING: Switch with 1 destination removed at 0x000100218eb8 */

void Recovered_YYYReaderViewController_m01694(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
                    /* WARNING: Switch is manually overridden */
  lVar3 = (long)iRam0000000100c75b4c;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController contentSize]
 * Entry: 0x100218ebc; original ABI: {CGSize=dd}16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218ec4 */
/* WARNING: Switch with 1 destination removed at 0x000100218ee0 */
/* WARNING: Switch with 1 destination removed at 0x000100218eec */

undefined1  [16] Recovered_YYYReaderViewController_m01695(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75b50);
  auVar1._8_8_ = 0;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setContentSize:]
 * Entry: 0x100218ef4; original ABI: v32@0:8{CGSize=dd}16
 * Original instructions in modeled body: 17; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218efc */
/* WARNING: Switch with 1 destination removed at 0x000100218f10 */
/* WARNING: Switch with 1 destination removed at 0x000100218f24 */
/* WARNING: Switch with 1 destination removed at 0x000100218f30 */

void Recovered_YYYReaderViewController_m01696(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
                    /* WARNING: Switch is manually overridden */
  lVar1 = (long)iRam0000000100c75b50;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController book]
 * Entry: 0x100218f48; original ABI: @16@0:8
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218f50 */
/* WARNING: Switch with 1 destination removed at 0x000100218f68 */
/* WARNING: Switch with 1 destination removed at 0x000100218f74 */

undefined8 Recovered_YYYReaderViewController_m01697(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b54);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setBook:]
 * Entry: 0x100218f80; original ABI: v24@0:8@16
 * Original instructions in modeled body: 14; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYReaderViewController_m01698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)iRam0000000100c75b54;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100931468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100afe320)(uVar2);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController showTool]
 * Entry: 0x100218fb8; original ABI: B16@0:8
 * Original instructions in modeled body: 9; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218fcc */

bool Recovered_YYYReaderViewController_m01699(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(char *)(param_1 + iRam0000000100c75b44) != '\0';
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController topView]
 * Entry: 0x100218fdc; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100218fe4 */
/* WARNING: Switch with 1 destination removed at 0x000100218ff8 */
/* WARNING: Switch with 1 destination removed at 0x000100219004 */

undefined8 Recovered_YYYReaderViewController_m01700(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b58);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setTopView:]
 * Entry: 0x100219010; original ABI: v24@0:8@16
 * Original instructions in modeled body: 24; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100219038 */
/* WARNING: Switch with 1 destination removed at 0x000100219044 */
/* WARNING: Switch with 1 destination removed at 0x000100219068 */

void Recovered_YYYReaderViewController_m01701(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75b58,param_3);
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController bottomView]
 * Entry: 0x10021907c; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021908c */
/* WARNING: Switch with 1 destination removed at 0x000100219098 */

undefined8 Recovered_YYYReaderViewController_m01702(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b5c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setBottomView:]
 * Entry: 0x1002190a4; original ABI: v24@0:8@16
 * Original instructions in modeled body: 5; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

void Recovered_YYYReaderViewController_m01703(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75b5c,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController brightnessView]
 * Entry: 0x1002190b8; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002190c0 */
/* WARNING: Switch with 1 destination removed at 0x0001002190d4 */

undefined8 Recovered_YYYReaderViewController_m01704(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b60);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setBrightnessView:]
 * Entry: 0x1002190e0; original ABI: v24@0:8@16
 * Original instructions in modeled body: 33; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100219100 */
/* WARNING: Switch with 1 destination removed at 0x00010021910c */
/* WARNING: Switch with 1 destination removed at 0x000100219120 */
/* WARNING: Switch with 1 destination removed at 0x000100219144 */
/* WARNING: Switch with 1 destination removed at 0x000100219174 */

void Recovered_YYYReaderViewController_m01705(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_retain(param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = *(undefined8 *)(param_1 + iRam0000000100c75b60);
  *(undefined8 *)(param_1 + iRam0000000100c75b60) = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setCatalogView:]
 * Entry: 0x100219178; original ABI: v24@0:8@16
 * Original instructions in modeled body: 11; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x000100219184 */
/* WARNING: Switch with 1 destination removed at 0x000100219190 */

void Recovered_YYYReaderViewController_m01706(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75b40,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController tap]
 * Entry: 0x1002191a4; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002191b4 */
/* WARNING: Switch with 1 destination removed at 0x0001002191c0 */

undefined8 Recovered_YYYReaderViewController_m01707(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b64);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController setTap:]
 * Entry: 0x1002191cc; original ABI: v24@0:8@16
 * Original instructions in modeled body: 8; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002191d8 */

void Recovered_YYYReaderViewController_m01708(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_100afe378)(param_1 + iRam0000000100c75b64,param_3);
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController currentChapter]
 * Entry: 0x1002191ec; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001002191fc */
/* WARNING: Switch with 1 destination removed at 0x000100219208 */
/* WARNING: Switch with 1 destination removed at 0x000100219214 */

undefined8 Recovered_YYYReaderViewController_m01709(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75b68);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderViewController .cxx_destruct]
 * Entry: 0x100219220; original ABI: v16@0:8
 * Original instructions in modeled body: 65; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010021923c */
/* WARNING: Switch with 1 destination removed at 0x000100219268 */
/* WARNING: Switch with 1 destination removed at 0x00010021930c */
/* WARNING: Switch with 1 destination removed at 0x00010021933c */

void Recovered_YYYReaderViewController_m01710(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75b68,0);
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75b64,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b40,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b60,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b5c,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b58,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b54,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b4c,0);
  _objc_storeStrong(param_1 + iRam0000000100c75b48,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



