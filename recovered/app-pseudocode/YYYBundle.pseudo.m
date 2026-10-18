/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBundle | class address: 0x100c99f80
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBundle initWithPath:readOnly:] | 0x10073a2e0 | ABI @28@0:8@16B24 */

/* Address: 0x10073a2e0 | YYYBundle::YYYBundle__instance__initWithPath_readOnly_ | bytes: 40 */

void YYYBundle__YYYBundle__instance__initWithPath_readOnly_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010073a304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e16c00)();
  return;
}



/* -[YYYBundle initWithPath:readOnly:thinToArm64:] | 0x10073a390 | ABI @32@0:8@16B24B28 */

/* Address: 0x10073a390 | YYYBundle::YYYBundle__instance__initWithPath_readOnly_thinToArm64_ | bytes: 60 */

void YYYBundle__YYYBundle__instance__initWithPath_readOnly_thinToArm64_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010073a3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e16c48)(0x100e95da4);
  return;
}



/* -[YYYBundle initWithPath:] | 0x10073b948 | ABI @24@0:8@16 */

/* Address: 0x10073b948 | YYYBundle::YYYBundle__instance__initWithPath_ | bytes: 36 */

void YYYBundle__YYYBundle__instance__initWithPath_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010073b968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e172b8)();
  return;
}



/* -[YYYBundle signWithSignAsset:error:] | 0x10073b9f8 | ABI B32@0:8@16^@24 */

/* Address: 0x10073b9f8 | YYYBundle::YYYBundle__instance__signWithSignAsset_error_ | bytes: 56 */

void YYYBundle__YYYBundle__instance__signWithSignAsset_error_(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010073ba2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e172f0)();
  return;
}



/* -[YYYBundle generateCodeResources] | 0x10073cfd0 | ABI @16@0:8 */

/* Address: 0x10073cfd0 | YYYBundle::YYYBundle__instance__generateCodeResources | bytes: 76 */

/* Recovered runtime selector: -[YYYBundle generateCodeResources]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__generateCodeResources(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010073d018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e177f8)();
  return IVar1;
}



/* -[YYYBundle hash] | 0x100742750 | ABI Q16@0:8 */

/* Address: 0x100742750 | YYYBundle::YYYBundle__instance__hash | bytes: 36 */

/* Recovered runtime selector: -[YYYBundle hash]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYBundle::YYYBundle__instance__hash(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100742770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_100e18ac0)();
  return uVar1;
}



/* -[YYYBundle isEqual:] | 0x100742840 | ABI B24@0:8@16 */

/* Address: 0x100742840 | YYYBundle::YYYBundle__instance__isEqual_ | bytes: 44 */

/* Recovered runtime selector: -[YYYBundle isEqual:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYBundle::YYYBundle__instance__isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100742868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e18b08)((int)param_1);
  return bVar1;
}



/* -[YYYBundle getAllSubframeworksWithoutArray:] | 0x100742b44 | ABI @24@0:8@16 */

/* Address: 0x100742b44 | YYYBundle::YYYBundle__instance__getAllSubframeworksWithoutArray_ | bytes: 44 */

/* Recovered runtime selector: -[YYYBundle getAllSubframeworksWithoutArray:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__getAllSubframeworksWithoutArray_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100742b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e18cf8)();
  return IVar1;
}



/* -[YYYBundle frameworks] | 0x100742e48 | ABI @16@0:8 */

/* Address: 0x100742e48 | YYYBundle::YYYBundle__instance__frameworks | bytes: 72 */

/* Recovered runtime selector: -[YYYBundle frameworks]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__frameworks(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100742e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e18e20)(0x100e95db4);
  return IVar1;
}



/* -[YYYBundle bundleIdentifier] | 0x100744e8c | ABI @16@0:8 */

/* Address: 0x100744e8c | YYYBundle::YYYBundle__instance__bundleIdentifier | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle bundleIdentifier]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__bundleIdentifier(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100744eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19938)(0x100e95dbc);
  return IVar1;
}



/* -[YYYBundle releaseMachO] | 0x1007451a0 | ABI v16@0:8 */

/* Address: 0x1007451a0 | YYYBundle::YYYBundle__instance__releaseMachO | bytes: 32 */

/* Recovered runtime selector: -[YYYBundle releaseMachO]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__releaseMachO(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001007451bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e199f8)();
  return;
}



/* -[YYYBundle machO] | 0x100745324 | ABI @16@0:8 */

/* Address: 0x100745324 | YYYBundle::YYYBundle__instance__machO | bytes: 32 */

/* Recovered runtime selector: -[YYYBundle machO]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__machO(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19ad0)();
  return IVar1;
}



/* -[YYYBundle debugDescription] | 0x100745444 | ABI @16@0:8 */

/* Address: 0x100745444 | YYYBundle::YYYBundle__instance__debugDescription | bytes: 28 */

/* Recovered runtime selector: -[YYYBundle debugDescription]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__debugDescription(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010074545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19b58)();
  return IVar1;
}



/* -[YYYBundle description] | 0x1007454d0 | ABI @16@0:8 */

/* Address: 0x1007454d0 | YYYBundle::YYYBundle__instance__description | bytes: 28 */

/* Recovered runtime selector: -[YYYBundle description]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__description(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007454e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19ba8)();
  return IVar1;
}



/* -[YYYBundle isFramework] | 0x100745524 | ABI B16@0:8 */

/* Address: 0x100745524 | YYYBundle::YYYBundle__instance__isFramework | bytes: 16 */

/* Recovered runtime selector: -[YYYBundle isFramework]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYBundle::YYYBundle__instance__isFramework(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e19bc0)(*(undefined1 *)(param_1 + 8));
  return bVar1;
}



/* -[YYYBundle setIsFramework:] | 0x10074554c | ABI v20@0:8B16 */

/* Address: 0x10074554c | YYYBundle::YYYBundle__instance__setIsFramework_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle setIsFramework:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setIsFramework_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19be0)(param_1,param_2,param_3);
  return;
}



/* -[YYYBundle bundlePath] | 0x10074556c | ABI @16@0:8 */

/* Address: 0x10074556c | YYYBundle::YYYBundle__instance__bundlePath | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle bundlePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__bundlePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19c08)();
  return IVar1;
}



/* -[YYYBundle setBundlePath:] | 0x10074558c | ABI v24@0:8@16 */

/* Address: 0x10074558c | YYYBundle::YYYBundle__instance__setBundlePath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setBundlePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setBundlePath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007455b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19c20)();
  return;
}



/* -[YYYBundle executable] | 0x100745604 | ABI @16@0:8 */

/* Address: 0x100745604 | YYYBundle::YYYBundle__instance__executable | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle executable]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__executable(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010074560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19c58)();
  return IVar1;
}



/* -[YYYBundle setExecutable:] | 0x100745624 | ABI v24@0:8@16 */

/* Address: 0x100745624 | YYYBundle::YYYBundle__instance__setExecutable_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setExecutable:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setExecutable_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19c78)();
  return;
}



/* -[YYYBundle executablePath] | 0x1007456a8 | ABI @16@0:8 */

/* Address: 0x1007456a8 | YYYBundle::YYYBundle__instance__executablePath | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle executablePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__executablePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007456b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19cb8)();
  return IVar1;
}



/* -[YYYBundle setExecutablePath:] | 0x1007456d4 | ABI v24@0:8@16 */

/* Address: 0x1007456d4 | YYYBundle::YYYBundle__instance__setExecutablePath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setExecutablePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setExecutablePath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007456f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19ce0)();
  return;
}



/* -[YYYBundle setMachO:] | 0x100745758 | ABI v24@0:8@16 */

/* Address: 0x100745758 | YYYBundle::YYYBundle__instance__setMachO_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBundle setMachO:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setMachO_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19d28)();
  return;
}



/* -[YYYBundle setFrameworks:] | 0x1007457b0 | ABI v24@0:8@16 */

/* Address: 0x1007457b0 | YYYBundle::YYYBundle__instance__setFrameworks_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBundle setFrameworks:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setFrameworks_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007457cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19d48)();
  return;
}



/* -[YYYBundle infoPath] | 0x10074580c | ABI @16@0:8 */

/* Address: 0x10074580c | YYYBundle::YYYBundle__instance__infoPath | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle infoPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__infoPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19d78)();
  return IVar1;
}



/* -[YYYBundle setInfoPath:] | 0x10074582c | ABI v24@0:8@16 */

/* Address: 0x10074582c | YYYBundle::YYYBundle__instance__setInfoPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setInfoPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setInfoPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19d98)();
  return;
}



/* -[YYYBundle setBundleIdentifier:] | 0x1007458a4 | ABI v24@0:8@16 */

/* Address: 0x1007458a4 | YYYBundle::YYYBundle__instance__setBundleIdentifier_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setBundleIdentifier:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setBundleIdentifier_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007458c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19dc0)();
  return;
}



/* -[YYYBundle infoDictionary] | 0x100745928 | ABI @16@0:8 */

/* Address: 0x100745928 | YYYBundle::YYYBundle__instance__infoDictionary | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle infoDictionary]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__infoDictionary(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19e00)();
  return IVar1;
}



/* -[YYYBundle setInfoDictionary:] | 0x100745954 | ABI v24@0:8@16 */

/* Address: 0x100745954 | YYYBundle::YYYBundle__instance__setInfoDictionary_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBundle setInfoDictionary:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setInfoDictionary_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19e38)();
  return;
}



/* -[YYYBundle link_path] | 0x1007459e4 | ABI @16@0:8 */

/* Address: 0x1007459e4 | YYYBundle::YYYBundle__instance__link_path | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle link_path]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__link_path(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007459ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19e80)();
  return IVar1;
}



/* -[YYYBundle setLink_path:] | 0x100745a04 | ABI v24@0:8@16 */

/* Address: 0x100745a04 | YYYBundle::YYYBundle__instance__setLink_path_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setLink_path:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setLink_path_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19ea0)();
  return;
}



/* -[YYYBundle executable_path] | 0x100745a88 | ABI @16@0:8 */

/* Address: 0x100745a88 | YYYBundle::YYYBundle__instance__executable_path | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle executable_path]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__executable_path(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19ee8)();
  return IVar1;
}



/* -[YYYBundle setExecutable_path:] | 0x100745aa8 | ABI v24@0:8@16 */

/* Address: 0x100745aa8 | YYYBundle::YYYBundle__instance__setExecutable_path_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setExecutable_path:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setExecutable_path_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19f00)();
  return;
}



/* -[YYYBundle loader_path] | 0x100745b14 | ABI @16@0:8 */

/* Address: 0x100745b14 | YYYBundle::YYYBundle__instance__loader_path | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle loader_path]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__loader_path(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19f28)();
  return IVar1;
}



/* -[YYYBundle setLoader_path:] | 0x100745b40 | ABI v24@0:8@16 */

/* Address: 0x100745b40 | YYYBundle::YYYBundle__instance__setLoader_path_ | bytes: 40 */

/* Recovered runtime selector: -[YYYBundle setLoader_path:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setLoader_path_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19f58)();
  return;
}



/* -[YYYBundle rpaths] | 0x100745bc4 | ABI @16@0:8 */

/* Address: 0x100745bc4 | YYYBundle::YYYBundle__instance__rpaths | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle rpaths]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBundle::YYYBundle__instance__rpaths(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e19f98)();
  return IVar1;
}



/* -[YYYBundle setRpaths:] | 0x100745be4 | ABI v24@0:8@16 */

/* Address: 0x100745be4 | YYYBundle::YYYBundle__instance__setRpaths_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBundle setRpaths:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setRpaths_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e19fb8)();
  return;
}



/* -[YYYBundle isReadOnly] | 0x100745c78 | ABI B16@0:8 */

/* Address: 0x100745c78 | YYYBundle::YYYBundle__instance__isReadOnly | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle isReadOnly]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYBundle::YYYBundle__instance__isReadOnly(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e1a008)((int)param_1);
  return bVar1;
}



/* -[YYYBundle setIsReadOnly:] | 0x100745ca0 | ABI v20@0:8B16 */

/* Address: 0x100745ca0 | YYYBundle::YYYBundle__instance__setIsReadOnly_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle setIsReadOnly:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setIsReadOnly_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e1a028)(param_1,param_2,param_3);
  return;
}



/* -[YYYBundle thin] | 0x100745ccc | ABI B16@0:8 */

/* Address: 0x100745ccc | YYYBundle::YYYBundle__instance__thin | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle thin]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYBundle::YYYBundle__instance__thin(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100745cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e1a058)((int)param_1);
  return bVar1;
}



/* -[YYYBundle setThin:] | 0x100745cec | ABI v20@0:8B16 */

/* Address: 0x100745cec | YYYBundle::YYYBundle__instance__setThin_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBundle setThin:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance__setThin_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100745cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e1a078)(param_1,param_2,param_3);
  return;
}



/* -[YYYBundle .cxx_destruct] | 0x100745d0c | ABI v16@0:8 */

/* Address: 0x100745d0c | YYYBundle::YYYBundle__instance___cxx_destruct | bytes: 128 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYBundle .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBundle::YYYBundle__instance___cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100745d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e1a098)();
  return;
}



/* +[YYYBundle bundleWithPath:] | 0x100739e8c | ABI @24@0:8@16 */

/* Address: 0x100739e8c | YYYBundle::YYYBundle__class__bundleWithPath_ | bytes: 32 */

void YYYBundle__YYYBundle__class__bundleWithPath_(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100739ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam0000000100e16998)();
  return;
}


