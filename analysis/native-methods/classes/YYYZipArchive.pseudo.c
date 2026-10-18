/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYZipArchive createZipFileAtPath:withContentsOfDirectorys:compressionLevel:password:progressHandler:]
 * Entry: 0x1001e8c74; original ABI: B52@0:8@16@24i32@36@?44
 * Original instructions in modeled body: 120; unresolved jumps: 1
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Switch with 1 destination removed at 0x0001001e8cc4 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8cd0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8cec */
/* WARNING: Switch with 1 destination removed at 0x0001001e8d10 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8d34 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8d58 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8da0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8db0 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8e08 */
/* WARNING: Switch with 1 destination removed at 0x0001001e8e28 */
/* WARNING: Switch with 1 destination removed at 0x0001001e9908 */

void Recovered_YYYZipArchive_m01529
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_350 [16];
  undefined1 auStack_340 [128];
  undefined1 auStack_2c0 [64];
  undefined1 auStack_280 [192];
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [64];
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined1 *puStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_100afc6e8;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(iRam0000000100e91960 == 0) {
  case true:
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    bRam0000000100d44472 = bRam0000000100d44470 ^ 0xac;
    bRam0000000100d44473 = bRam0000000100d44471 ^ 0xc4;
                    /* WARNING: Switch is manually overridden */
  }
                    /* WARNING: Switch is manually overridden */
  iRam0000000100e91960 = 1;
                    /* WARNING: Switch is manually overridden */
  puStack_b0 = auStack_140;
  puStack_e0 = auStack_1c0;
  puStack_88 = auStack_280;
  puStack_d0 = auStack_2c0;
  puStack_d8 = auStack_340;
  puStack_90 = auStack_350;
  uStack_f4 = param_5;
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_retain(param_6);
  uVar4 = _objc_retain(param_7);
  auVar5 = _objc_alloc(uRam0000000100c717c8);
  uVar1 = func_0x000100949a60(auVar5._0_8_,auVar5._8_8_,uVar1);
  auVar5 = func_0x0001001e9d70();
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  uStack_f8 = auVar5._0_4_;
  uStack_100 = uVar2;
  uStack_f0 = uVar1;
  uStack_a8 = uVar3;
  uStack_80 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001001e8e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((auVar5._0_8_ & 0xffffffff) * 8 + 0x100d47150))(auVar5._0_8_,auVar5._8_8_,param_3);
  return;
                    /* WARNING: Switch is manually overridden */
}



