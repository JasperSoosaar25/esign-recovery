/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderContentView setAttributeString:]
 * Entry: 0x1003cf760; original ABI: v24@0:8@16
 * Original instructions in modeled body: 41; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cf780 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf7a4 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf7bc */
/* WARNING: Switch with 1 destination removed at 0x0001003cf7e0 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf7ec */
/* WARNING: Switch with 1 destination removed at 0x0001003cf828 */

void Recovered_YYYReaderContentView_m02860(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
                    /* WARNING: Switch is manually overridden */
  _objc_retain(param_3);
  uVar1 = _objc_retain();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uVar2 = *(undefined8 *)(param_1 + iRam0000000100c76008);
  *(undefined8 *)(param_1 + iRam0000000100c76008) = uVar1;
  _objc_release(uVar2);
  func_0x000100968280(param_1);
  _objc_release(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderContentView drawRect:]
 * Entry: 0x1003cf82c; original ABI: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
 * Original instructions in modeled body: 108; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cf850 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf860 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf87c */
/* WARNING: Switch with 1 destination removed at 0x0001003cf8a0 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf8d8 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf900 */
/* WARNING: Switch with 1 destination removed at 0x0001003cf90c */
/* WARNING: Switch with 1 destination removed at 0x0001003cf950 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfaac */

void Recovered_YYYReaderContentView_m02861(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_d3;
  undefined1 auVar6 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100939420(param_1);
  lVar3 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100939420(param_1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _CTFramesetterCreateWithAttributedString();
                    /* WARNING: Switch is manually overridden */
    _objc_release(uVar1);
    uVar1 = _UIGraphicsGetCurrentContext();
    uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100afc058 + 8);
    uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_100afc058;
    uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100afc058 + 0x18);
    uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100afc058 + 0x10);
    uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100afc058 + 0x28);
    uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_100afc058 + 0x20);
    _CGContextSetTextMatrix(uVar1,&uStack_70);
    func_0x00010093a760(param_1);
    _CGContextTranslateCTM(0,in_d3,uVar1);
    func_0x0001003cfb68(0x3ff0000000000000,0xbff0000000000000,uVar1);
    func_0x00010093a760(param_1);
    uVar4 = _CGPathCreateWithRect(0);
    auVar6 = func_0x0001003cfab0(0,0);
    uVar5 = func_0x0001003cfb6c(uVar2,auVar6._0_8_,auVar6._8_8_,uVar4,0);
    _CTFrameDraw(uVar5,uVar1);
    _CFRelease(uVar5);
    _CGPathRelease(uVar4);
    func_0x0001003cfb70(uVar2);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderContentView attributeString]
 * Entry: 0x1003cfad4; original ABI: @16@0:8
 * Original instructions in modeled body: 13; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cfadc */
/* WARNING: Switch with 1 destination removed at 0x0001003cfaf0 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfafc */

undefined8 Recovered_YYYReaderContentView_m02862(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c76008);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYReaderContentView .cxx_destruct]
 * Entry: 0x1003cfb08; original ABI: v16@0:8
 * Original instructions in modeled body: 21; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001003cfb24 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfb34 */
/* WARNING: Switch with 1 destination removed at 0x0001003cfb64 */

void Recovered_YYYReaderContentView_m02863(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c76008,0);
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



