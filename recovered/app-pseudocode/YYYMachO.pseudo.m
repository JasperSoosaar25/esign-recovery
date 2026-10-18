/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMachO | class address: 0x100c99a98
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMachO initWithMachOPath:readOnly:thinToArm64:] | 0x10070de48 | ABI @32@0:8@16B24B28 */

/* Address: 0x10070de48 | YYYMachO::YYYMachO__instance__initWithMachOPath_readOnly_thinToArm64_ | bytes: 64 */

void YYYMachO__YYYMachO__instance__initWithMachOPath_readOnly_thinToArm64_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010070de84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e09c58)();
  return;
}



/* -[YYYMachO setupDefaultEntitlements] | 0x10070e7a4 | ABI v16@0:8 */

/* Address: 0x10070e7a4 | YYYMachO::YYYMachO__instance__setupDefaultEntitlements | bytes: 72 */

void YYYMachO__YYYMachO__instance__setupDefaultEntitlements(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010070e7e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0a068)(0x100e95d6c);
  return;
}



/* -[YYYMachO setupArcho] | 0x10071075c | ABI B16@0:8 */

/* Address: 0x10071075c | YYYMachO::YYYMachO__instance__setupArcho | bytes: 88 */

void YYYMachO__YYYMachO__instance__setupArcho(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007107b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0a9f8)();
  return;
}



/* -[YYYMachO readMagicWithOffset:] | 0x10071226c | ABI I24@0:8Q16 */

/* Address: 0x10071226c | YYYMachO::YYYMachO__instance__readMagicWithOffset_ | bytes: 52 */

void YYYMachO__YYYMachO__instance__readMagicWithOffset_(void)

{
  func_0x00010094ee20();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010071229c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0b778)();
  return;
}



/* -[YYYMachO getMachHeaderInFatArch:] | 0x100712348 | ABI @24@0:8@16 */

/* Address: 0x100712348 | YYYMachO::YYYMachO__instance__getMachHeaderInFatArch_ | bytes: 48 */

void YYYMachO__YYYMachO__instance__getMachHeaderInFatArch_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100712374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0b7b8)();
  return;
}



/* -[YYYMachO addCodeSignSpaceLength:] | 0x1007128e0 | ABI B20@0:8I16 */

/* Address: 0x1007128e0 | YYYMachO::YYYMachO__instance__addCodeSignSpaceLength_ | bytes: 52 */

void YYYMachO__YYYMachO__instance__addCodeSignSpaceLength_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100712910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0bb30)();
  return;
}



/* -[YYYMachO reallocCodeSignSpace] | 0x100713aec | ABI B16@0:8 */

/* Address: 0x100713aec | YYYMachO::YYYMachO__instance__reallocCodeSignSpace | bytes: 48 */

void YYYMachO__YYYMachO__instance__reallocCodeSignSpace(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100713b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0c1e0)();
  return;
}



/* -[YYYMachO removeLinkedDylib:] | 0x100714d28 | ABI v24@0:8@16 */

/* Address: 0x100714d28 | YYYMachO::YYYMachO__instance__removeLinkedDylib_ | bytes: 80 */

void YYYMachO__YYYMachO__instance__removeLinkedDylib_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100714d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0c928)();
  return;
}



/* -[YYYMachO addDylibLink:weakInject:error:] | 0x100714f90 | ABI B36@0:8@16B24^@28 */

/* Address: 0x100714f90 | YYYMachO::YYYMachO__instance__addDylibLink_weakInject_error_ | bytes: 136 */

void YYYMachO__YYYMachO__instance__addDylibLink_weakInject_error_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_100afc6e8;
  _objc_retain(param_3);
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x000100938f00(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  func_0x00010093e380(auVar1._0_8_,auVar1._8_8_,&uStack_130,auStack_e8,0x10);
                    /* WARNING: Could not recover jumptable at 0x000100715014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0ca40)();
  return;
}



/* -[YYYMachO changeDylibLink:toLink:error:] | 0x1007152ac | ABI B40@0:8@16@24^@32 */

/* Address: 0x1007152ac | YYYMachO::YYYMachO__instance__changeDylibLink_toLink_error_ | bytes: 96 */

void YYYMachO__YYYMachO__instance__changeDylibLink_toLink_error_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100715308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0cc00)();
  return;
}



/* -[YYYMachO getDylibLinks] | 0x100715694 | ABI @16@0:8 */

/* Address: 0x100715694 | YYYMachO::YYYMachO__instance__getDylibLinks | bytes: 76 */

void YYYMachO__YYYMachO__instance__getDylibLinks(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007156dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0ce68)(0x100e95d78);
  return;
}



/* -[YYYMachO getAllDylibLinks] | 0x100715d1c | ABI @16@0:8 */

/* Address: 0x100715d1c | YYYMachO::YYYMachO__instance__getAllDylibLinks | bytes: 92 */

void YYYMachO__YYYMachO__instance__getAllDylibLinks(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100715d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0d1d8)();
  return;
}



/* -[YYYMachO getRPaths] | 0x100716298 | ABI @16@0:8 */

/* Address: 0x100716298 | YYYMachO::YYYMachO__instance__getRPaths | bytes: 96 */

void YYYMachO__YYYMachO__instance__getRPaths(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007162f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0d480)();
  return;
}



/* -[YYYMachO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:] | 0x1007168c0 | ABI B56@0:8@16@24@32@40^@48 */

/* Address: 0x1007168c0 | YYYMachO::YYYMachO__instance__signWithSignAsset_bundleId_infoPlistData_codeResourcesData_error_ | bytes: 92 */

void YYYMachO__YYYMachO__instance__signWithSignAsset_bundleId_infoPlistData_codeResourcesData_error_
               (void)

{
                    /* WARNING: Could not recover jumptable at 0x000100716918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0d810)(0x100e95d7c);
  return;
}



/* -[YYYMachO reload] | 0x1007187a0 | ABI v16@0:8 */

/* Address: 0x1007187a0 | YYYMachO::YYYMachO__instance__reload | bytes: 36 */

void YYYMachO__YYYMachO__instance__reload(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007187c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e3e0)();
  return;
}



/* -[YYYMachO removeSourceVersion] | 0x10071883c | ABI v16@0:8 */

/* Address: 0x10071883c | YYYMachO::YYYMachO__instance__removeSourceVersion | bytes: 76 */

void YYYMachO__YYYMachO__instance__removeSourceVersion(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e420)();
  return;
}



/* -[YYYMachO isEncryption] | 0x100718ae0 | ABI B16@0:8 */

/* Address: 0x100718ae0 | YYYMachO::YYYMachO__instance__isEncryption | bytes: 92 */

void YYYMachO__YYYMachO__instance__isEncryption(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e570)();
  return;
}



/* -[YYYMachO machoPath] | 0x100718db0 | ABI @16@0:8 */

/* Address: 0x100718db0 | YYYMachO::YYYMachO__instance__machoPath | bytes: 16 */

void YYYMachO__YYYMachO__instance__machoPath(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100718dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e718)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* -[YYYMachO setMachoPath:] | 0x100718dd0 | ABI v24@0:8@16 */

/* Address: 0x100718dd0 | YYYMachO::YYYMachO__instance__setMachoPath_ | bytes: 40 */

void YYYMachO__YYYMachO__instance__setMachoPath_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e730)();
  return;
}



/* -[YYYMachO machoFileHandle] | 0x100718e48 | ABI @16@0:8 */

/* Address: 0x100718e48 | YYYMachO::YYYMachO__instance__machoFileHandle | bytes: 12 */

void YYYMachO__YYYMachO__instance__machoFileHandle(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e768)();
  return;
}



/* -[YYYMachO setMachoFileHandle:] | 0x100718e5c | ABI v24@0:8@16 */

/* Address: 0x100718e5c | YYYMachO::YYYMachO__instance__setMachoFileHandle_ | bytes: 28 */

void YYYMachO__YYYMachO__instance__setMachoFileHandle_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e778)();
  return;
}



/* -[YYYMachO archOs] | 0x100718eb8 | ABI @16@0:8 */

/* Address: 0x100718eb8 | YYYMachO::YYYMachO__instance__archOs | bytes: 12 */

void YYYMachO__YYYMachO__instance__archOs(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e7a8)();
  return;
}



/* -[YYYMachO setArchOs:] | 0x100718ed8 | ABI v24@0:8@16 */

/* Address: 0x100718ed8 | YYYMachO::YYYMachO__instance__setArchOs_ | bytes: 36 */

void YYYMachO__YYYMachO__instance__setArchOs_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e7c8)();
  return;
}



/* -[YYYMachO fat_header] | 0x100718f6c | ABI ^{fat_header=II}16@0:8 */

/* Address: 0x100718f6c | YYYMachO::YYYMachO__instance__fat_header | bytes: 12 */

void YYYMachO__YYYMachO__instance__fat_header(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e818)();
  return;
}



/* -[YYYMachO setFat_header:] | 0x100718f8c | ABI v24@0:8^{fat_header=II}16 */

/* Address: 0x100718f8c | YYYMachO::YYYMachO__instance__setFat_header_ | bytes: 12 */

void YYYMachO__YYYMachO__instance__setFat_header_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e830)();
  return;
}



/* -[YYYMachO fatArchs] | 0x100718fac | ABI @16@0:8 */

/* Address: 0x100718fac | YYYMachO::YYYMachO__instance__fatArchs | bytes: 16 */

void YYYMachO__YYYMachO__instance__fatArchs(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100718fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e858)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* -[YYYMachO setFatArchs:] | 0x100718fcc | ABI v24@0:8@16 */

/* Address: 0x100718fcc | YYYMachO::YYYMachO__instance__setFatArchs_ | bytes: 28 */

void YYYMachO__YYYMachO__instance__setFatArchs_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100718fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e870)();
  return;
}



/* -[YYYMachO defaultEntitlements] | 0x100719028 | ABI @16@0:8 */

/* Address: 0x100719028 | YYYMachO::YYYMachO__instance__defaultEntitlements | bytes: 12 */

void YYYMachO__YYYMachO__instance__defaultEntitlements(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100719030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e8a8)();
  return;
}



/* -[YYYMachO setDefaultEntitlements:] | 0x10071903c | ABI v24@0:8@16 */

/* Address: 0x10071903c | YYYMachO::YYYMachO__instance__setDefaultEntitlements_ | bytes: 28 */

void YYYMachO__YYYMachO__instance__setDefaultEntitlements_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100719054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e8b8)();
  return;
}



/* -[YYYMachO thin] | 0x1007190a4 | ABI B16@0:8 */

/* Address: 0x1007190a4 | YYYMachO::YYYMachO__instance__thin | bytes: 12 */

void YYYMachO__YYYMachO__instance__thin(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007190ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e8f0)();
  return;
}



/* -[YYYMachO setThin:] | 0x1007190b8 | ABI v20@0:8B16 */

/* Address: 0x1007190b8 | YYYMachO::YYYMachO__instance__setThin_ | bytes: 12 */

void YYYMachO__YYYMachO__instance__setThin_(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007190c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e900)();
  return;
}



/* -[YYYMachO .cxx_destruct] | 0x1007190cc | ABI v16@0:8 */

/* Address: 0x1007190cc | YYYMachO::YYYMachO__instance___cxx_destruct | bytes: 28 */

void YYYMachO__YYYMachO__instance___cxx_destruct(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001007190e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0e910)();
  return;
}



/* +[YYYMachO machOWithMachOPath:readOnly:] | 0x10070e6b8 | ABI @28@0:8@16B24 */

/* Address: 0x10070e6b8 | YYYMachO::YYYMachO__class__machOWithMachOPath_readOnly_ | bytes: 36 */

void YYYMachO__YYYMachO__class__machOWithMachOPath_readOnly_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010070e6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0a020)();
  return;
}



/* +[YYYMachO machOWithMachOPath:thinToArm64:] | 0x10070e744 | ABI @28@0:8@16B24 */

/* Address: 0x10070e744 | YYYMachO::YYYMachO__class__machOWithMachOPath_thinToArm64_ | bytes: 40 */

void YYYMachO__YYYMachO__class__machOWithMachOPath_thinToArm64_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010070e768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e0a058)();
  return;
}


