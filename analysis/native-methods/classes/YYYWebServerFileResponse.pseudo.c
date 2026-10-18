/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse initWithFile:byteRange:isAttachment:mimeTypeOverrides:]
 * Entry: 0x1000acccc; original ABI: @52@0:8@16{_NSRange=QQ}24B40@44
 * Original instructions in modeled body: 97; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acd20 */
/* WARNING: Switch with 1 destination removed at 0x0001000acd38 */
/* WARNING: Switch with 1 destination removed at 0x0001000acd60 */
/* WARNING: Switch with 1 destination removed at 0x0001000acd6c */
/* WARNING: Switch with 1 destination removed at 0x0001000acd90 */
/* WARNING: Switch with 1 destination removed at 0x0001000acd9c */
/* WARNING: Switch with 1 destination removed at 0x0001000acda8 */
/* WARNING: Switch with 1 destination removed at 0x0001000acdb8 */
/* WARNING: Switch with 1 destination removed at 0x0001000acdc4 */
/* WARNING: Switch with 1 destination removed at 0x0001000ace38 */
/* WARNING: Switch with 1 destination removed at 0x0001000ace54 */
/* WARNING: Switch with 1 destination removed at 0x0001000ace70 */
/* WARNING: Switch with 1 destination removed at 0x0001000ace9c */

undefined8
Recovered_YYYWebServerFileResponse_m00580
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_7);
  uStack_58 = uRam0000000100c73948;
  uStack_60 = param_1;
  auVar5 = func_0x0001000ad56c(&uStack_60,PTR_s_initWithFile_byteRange_isAttachm_100c612e8,uVar1,
                               param_4,param_5,param_6,uVar2);
  lVar3 = auVar5._0_8_;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar3 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    func_0x000100964360(lVar3,auVar5._8_8_,uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  uVar4 = _objc_retain(lVar3);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar2);
                    /* WARNING: Switch is manually overridden */
  _objc_release(uVar1);
  _objc_release(uVar4);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return uVar4;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse readData:]
 * Entry: 0x1000acea0; original ABI: @24@0:8^@16
 * Original instructions in modeled body: 168; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000acecc */
/* WARNING: Switch with 1 destination removed at 0x0001000aced8 */
/* WARNING: Switch with 1 destination removed at 0x0001000acf0c */
/* WARNING: Switch with 1 destination removed at 0x0001000acf38 */
/* WARNING: Switch with 1 destination removed at 0x0001000acfa4 */
/* WARNING: Switch with 1 destination removed at 0x0001000acfc4 */
/* WARNING: Switch with 1 destination removed at 0x0001000acfe0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad034 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad094 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad0a0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad0b8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad0c4 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad0d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad0dc */
/* WARNING: Switch with 1 destination removed at 0x0001000ad158 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad18c */
/* WARNING: Switch with 1 destination removed at 0x0001000ad1a8 */

void Recovered_YYYWebServerFileResponse_m00581(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e911c8 == 0) {
  case true:
    bRam0000000100cdb856 = bRam0000000100cdb850 ^ 0x67;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cdb857 = bRam0000000100cdb851 ^ 0x2c;
                    /* WARNING: Switch is manually overridden */
    bRam0000000100cdb858 = bRam0000000100cdb852 ^ 0x8b;
    cRam0000000100cdb859 = bRam0000000100cdb853 + (bRam0000000100cdb853 & 0xdf) * -2 + '_';
    cRam0000000100cdb85a = bRam0000000100cdb854 + (bRam0000000100cdb854 & 0xc0) * '\x02' + -0x40;
    bRam0000000100cdb85b = bRam0000000100cdb855 ^ 0xc0;
                    /* WARNING: Switch is manually overridden */
  }
  iRam0000000100e911c8 = 1;
                    /* WARNING: Switch is manually overridden */
  uStack_48 = uRam0000000100c73948;
  uStack_50 = param_1;
                    /* WARNING: Switch is manually overridden */
  _objc_msgSendSuper2(&uStack_50,PTR_s_readData__100c66c98);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x0001000ad570(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Switch is manually overridden */
  switch(lVar2 != 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
    func_0x000100958a60(param_1,extraout_x1,0x100cdb860);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar2 = func_0x000100977c80();
    _objc_release(uVar3);
    lVar4 = func_0x0001000ad574(param_1);
    uVar5 = func_0x00010093dbe0(param_1);
    func_0x000100954a60(param_1);
    lVar6 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar6 + 0x10))(((double)(ulong)(lVar4 - lVar2) / (double)uVar5) * 100.0,lVar6);
    _objc_release(lVar6);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
  _objc_autoreleaseReturnValue(uVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse close]
 * Entry: 0x1000ad1ac; original ABI: v16@0:8
 * Original instructions in modeled body: 75; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad1d0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad1dc */
/* WARNING: Switch with 1 destination removed at 0x0001000ad1e8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad204 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad228 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad234 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad240 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad274 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad280 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad2fc */
/* WARNING: Switch with 1 destination removed at 0x0001000ad32c */

void Recovered_YYYWebServerFileResponse_m00582(undefined8 param_1)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = uRam0000000100c73948;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_close_100c5cc20);
  func_0x0001000ad580(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(lVar1 != 0) {
  case true:
    func_0x000100943e20(param_1);
    lVar1 = _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    (**(code **)(lVar1 + 0x10))(lVar1);
    _objc_release(lVar1);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse filePath]
 * Entry: 0x1000ad330; original ABI: @16@0:8
 * Original instructions in modeled body: 10; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad338 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad34c */

undefined8 Recovered_YYYWebServerFileResponse_m00583(long param_1)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c7551c);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse setFilePath:]
 * Entry: 0x1000ad358; original ABI: v24@0:8@16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad378 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad38c */
/* WARNING: Switch with 1 destination removed at 0x0001000ad398 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad3cc */

void Recovered_YYYWebServerFileResponse_m00584(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c7551c,param_3);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse progressBlock]
 * Entry: 0x1000ad3d0; original ABI: @?16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad3e0 */

undefined8 Recovered_YYYWebServerFileResponse_m00585(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75520);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse setProgressBlock:]
 * Entry: 0x1000ad3ec; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 27; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad418 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad424 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad468 */

void Recovered_YYYWebServerFileResponse_m00586
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,(long)iRam0000000100c75520);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse finishBlock]
 * Entry: 0x1000ad46c; original ABI: @?16@0:8
 * Original instructions in modeled body: 7; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad474 */

undefined8 Recovered_YYYWebServerFileResponse_m00587(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  return *(undefined8 *)(param_1 + iRam0000000100c75524);
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse setFinishBlock:]
 * Entry: 0x1000ad488; original ABI: v24@0:8@?16
 * Original instructions in modeled body: 6; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad490 */

void Recovered_YYYWebServerFileResponse_m00588(void)

{
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Could not recover jumptable at 0x0001009314e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_100afe370)();
  return;
}



/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: -[YYYWebServerFileResponse .cxx_destruct]
 * Entry: 0x1000ad4a0; original ABI: v16@0:8
 * Original instructions in modeled body: 40; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001000ad4c0 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad4f8 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad504 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad514 */
/* WARNING: Switch with 1 destination removed at 0x0001000ad568 */

void Recovered_YYYWebServerFileResponse_m00589(long param_1)

{
                    /* WARNING: Switch is manually overridden */
  _objc_storeStrong(param_1 + iRam0000000100c75524,0);
  _objc_storeStrong(param_1 + iRam0000000100c75520,0);
  _objc_storeStrong(param_1 + iRam0000000100c7551c,0);
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  return;
                    /* WARNING: Switch is manually overridden */
}



