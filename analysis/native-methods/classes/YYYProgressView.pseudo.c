/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView initWithFrame:]
 * Entry: 0x10027a678; original ABI: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 76; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027a6b8 */
/* WARNING: Switch with 1 destination removed at 0x00010027a6c4 */
/* WARNING: Switch with 1 destination removed at 0x00010027a6d8 */
/* WARNING: Switch with 1 destination removed at 0x00010027a70c */
/* WARNING: Switch with 1 destination removed at 0x00010027a718 */
/* WARNING: Switch with 1 destination removed at 0x00010027a728 */
/* WARNING: Switch with 1 destination removed at 0x00010027a7a0 */
/* WARNING: Switch with 1 destination removed at 0x00010027a7bc */
/* WARNING: Switch with 1 destination removed at 0x00010027a7d8 */

undefined8
Recovered_YYYProgressView_m01979
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack_68 = uRam0000000100c73b08;
  uStack_70 = param_5;
  auVar3 = _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_70,
                               PTR_s_initWithFrame__100c61370);
  lVar1 = auVar3._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x000100961b80(lVar1,auVar3._8_8_,1);
                    /* WARNING: Switch is manually overridden */
  }
  uVar2 = _objc_retain(lVar1);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar2;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView drawRect:]
 * Entry: 0x10027a7dc; original ABI: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 197; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027a830 */
/* WARNING: Switch with 1 destination removed at 0x00010027a854 */
/* WARNING: Switch with 1 destination removed at 0x00010027a96c */
/* WARNING: Switch with 1 destination removed at 0x00010027a980 */
/* WARNING: Switch with 1 destination removed at 0x00010027a990 */
/* WARNING: Switch with 1 destination removed at 0x00010027a99c */
/* WARNING: Switch with 1 destination removed at 0x00010027aab8 */
/* WARNING: Switch with 1 destination removed at 0x00010027aae8 */
/* WARNING: Switch with 1 destination removed at 0x00010027ab5c */
/* WARNING: Switch with 1 destination removed at 0x00010027abd8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Recovered_YYYProgressView_m01980
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uStack_98 = uRam0000000100c73b08;
  uStack_a0 = param_5;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_a0,PTR_s_drawRect__100c5e8a8);
  uVar2 = func_0x00010027ad48();
  dVar5 = (double)func_0x00010027ad4c(param_5);
  _CGContextSetLineWidth(dVar5 * 3.0,uVar2);
  _CGContextSetLineCap(uVar2,2);
  func_0x00010027ad50(0x3ff0000000000000,_UNK_10097eb38,_UNK_10097bed8,0x3ff0000000000000,
                      uRam0000000100c71438);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_retainAutorelease();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar1 = func_0x000100934be0();
  _CGContextSetStrokeColorWithColor(uVar2,uVar1);
  _objc_release(uVar3);
  _CGContextMoveToPoint(0,0,uVar2);
  dVar5 = (double)func_0x0001009433a0(param_5);
  dVar4 = (double)func_0x00010093efa0(param_5);
  func_0x00010027ad54(dVar5 * dVar4,0,uVar2);
  _CGContextStrokePath(uVar2);
  dVar5 = (double)func_0x00010027ad58(param_5);
  dVar4 = (double)func_0x00010093efa0(param_5);
  func_0x00010027ad5c(dVar5 * dVar4,0,uVar2);
  func_0x00010027ad60(_UNK_10097c858,_UNK_10097c858,_UNK_10097c858,0x3ff0000000000000,
                      uRam0000000100c71438);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_retainAutorelease();
  uVar3 = func_0x000100934be0();
  func_0x00010027ad64(uVar2,uVar3);
  _objc_release(uVar1);
  dVar5 = (double)func_0x0001009433a0(param_5);
  dVar4 = (double)func_0x00010027ad68(param_5);
  func_0x00010027ad6c(dVar5 * dVar4,0,uVar2);
  _CGContextStrokePath(uVar2);
  dVar5 = (double)func_0x000100943fc0(param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(dVar5 < 1.0) {
  case true:
    dVar5 = (double)func_0x0001009433a0(param_5);
    dVar4 = (double)func_0x000100943fc0(param_5);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    _CGContextMoveToPoint(dVar5 * dVar4,0,uVar2);
    func_0x00010027ad70(_UNK_10097bf48,_UNK_10097bf48,_UNK_10097bf48,0x3ff0000000000000,
                        uRam0000000100c71438);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = _objc_retainAutorelease();
                    /* WARNING: Switch is manually overridden */
    uVar3 = func_0x000100934be0(uVar1);
    func_0x00010027ad74(uVar2,uVar3);
    _objc_release(uVar1);
    uVar1 = func_0x00010027ad78(param_5);
    _CGContextAddLineToPoint(uVar1,0,uVar2);
    _CGContextStrokePath(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView setFinishValue:]
 * Entry: 0x10027abdc; original ABI: v24@0:8d16
 * Original instructions in modeled body: 21; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027ac04 */
/* WARNING: Switch with 1 destination removed at 0x00010027ac38 */

void Recovered_YYYProgressView_m01981(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + iRam0000000100c75c90) = param_1;
  func_0x000100968280(param_2);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView setCurrentValue:]
 * Entry: 0x10027ac3c; original ABI: v24@0:8d16
 * Original instructions in modeled body: 40; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027ac5c */
/* WARNING: Switch with 1 destination removed at 0x00010027ac68 */
/* WARNING: Switch with 1 destination removed at 0x00010027ac74 */
/* WARNING: Switch with 1 destination removed at 0x00010027ac9c */
/* WARNING: Switch with 1 destination removed at 0x00010027acac */
/* WARNING: Switch with 1 destination removed at 0x00010027ace8 */

void Recovered_YYYProgressView_m01982(double param_1,long param_2)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(NAN(param_1)) {
  case false:
                    /* WARNING: Switch is manually overridden */
    break;
  case true:
    param_1 = 0.0;
                    /* WARNING: Switch is manually overridden */
  }
  *(double *)(param_2 + iRam0000000100c75c94) = param_1;
  func_0x000100968280(param_2);
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView finishValue]
 * Entry: 0x10027acec; original ABI: d16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027acfc */
/* WARNING: Switch with 1 destination removed at 0x00010027ad08 */
/* WARNING: Switch with 1 destination removed at 0x00010027ad14 */

undefined1  [16] Recovered_YYYProgressView_m01983(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75c90);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYProgressView currentValue]
 * Entry: 0x10027ad20; original ABI: d16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x00010027ad30 */
/* WARNING: Switch with 1 destination removed at 0x00010027ad3c */

undefined1  [16] Recovered_YYYProgressView_m01984(long param_1)

{
  undefined1 auVar1 [16];
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  auVar1._0_8_ = *(ulong *)(param_1 + iRam0000000100c75c94);
  auVar1._8_8_ = 0;
  return auVar1;
}



