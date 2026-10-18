/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTrollAppInfo | class address: 0x100c7d368
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTrollAppInfo hash] | 0x100101928 | ABI Q16@0:8 */

/* Address: 0x100101928 | YYYTrollAppInfo::YYYTrollAppInfo__instance__hash | bytes: 32 */

/* Recovered runtime selector: -[YYYTrollAppInfo hash]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYTrollAppInfo::YYYTrollAppInfo__instance__hash(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100101944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100cf9480)();
  return uVar1;
}



/* -[YYYTrollAppInfo isEqual:] | 0x100101a20 | ABI B24@0:8@16 */

/* Address: 0x100101a20 | YYYTrollAppInfo::YYYTrollAppInfo__instance__isEqual_ | bytes: 44 */

/* Recovered runtime selector: -[YYYTrollAppInfo isEqual:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTrollAppInfo::YYYTrollAppInfo__instance__isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100101a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cf94e8)((int)param_1);
  return bVar1;
}



/* -[YYYTrollAppInfo tryGetImageFromInfoDictionary] | 0x100101d4c | ABI @16@0:8 */

/* Address: 0x100101d4c | YYYTrollAppInfo::YYYTrollAppInfo__instance__tryGetImageFromInfoDictionary | bytes: 72 */

/* Recovered runtime selector: -[YYYTrollAppInfo tryGetImageFromInfoDictionary]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__tryGetImageFromInfoDictionary(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100101d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cf96f0)(0x100e91414);
  return IVar1;
}



/* -[YYYTrollAppInfo refreshApplistionType] | 0x100103ec8 | ABI v16@0:8 */

/* Address: 0x100103ec8 | YYYTrollAppInfo::YYYTrollAppInfo__instance__refreshApplistionType | bytes: 32 */

/* Recovered runtime selector: -[YYYTrollAppInfo refreshApplistionType]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__refreshApplistionType(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100103ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfa750)();
  return;
}



/* -[YYYTrollAppInfo refreshInfo] | 0x100103ffc | ABI v16@0:8 */

/* Address: 0x100103ffc | YYYTrollAppInfo::YYYTrollAppInfo__instance__refreshInfo | bytes: 48 */

/* Recovered runtime selector: -[YYYTrollAppInfo refreshInfo]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__refreshInfo(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100104028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfa7f0)();
  return;
}



/* -[YYYTrollAppInfo logo] | 0x100105150 | ABI @16@0:8 */

/* Address: 0x100105150 | YYYTrollAppInfo::YYYTrollAppInfo__instance__logo | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo logo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__logo(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfabb0)();
  return IVar1;
}



/* -[YYYTrollAppInfo applicationType] | 0x1001054e0 | ABI @16@0:8 */

/* Address: 0x1001054e0 | YYYTrollAppInfo::YYYTrollAppInfo__instance__applicationType | bytes: 72 */

/* Recovered runtime selector: -[YYYTrollAppInfo applicationType]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__applicationType(ID param_1,SEL param_2)

{
  ID IVar1;
  
  switch(*(long *)(param_1 + 0x58) != 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x000100105514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar1 = (*(code *)PTR_LAB_100cfade8)();
    return IVar1;
  case true:
                    /* WARNING: Could not recover jumptable at 0x00010010553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    IVar1 = (*(code *)PTR_LAB_100cfae28)(*(undefined8 *)(param_1 + 0x58));
    return IVar1;
  }
}



/* -[YYYTrollAppInfo isDegbugEnabled] | 0x100105574 | ABI B16@0:8 */

/* Address: 0x100105574 | YYYTrollAppInfo::YYYTrollAppInfo__instance__isDegbugEnabled | bytes: 32 */

/* Recovered runtime selector: -[YYYTrollAppInfo isDegbugEnabled]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTrollAppInfo::YYYTrollAppInfo__instance__isDegbugEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfae48)((int)param_1);
  return bVar1;
}



/* -[YYYTrollAppInfo hasTryGetLogo] | 0x1001059e0 | ABI B16@0:8 */

/* Address: 0x1001059e0 | YYYTrollAppInfo::YYYTrollAppInfo__instance__hasTryGetLogo | bytes: 16 */

/* Recovered runtime selector: -[YYYTrollAppInfo hasTryGetLogo]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTrollAppInfo::YYYTrollAppInfo__instance__hasTryGetLogo(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001059ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfb020)(*(undefined1 *)(param_1 + 8));
  return bVar1;
}



/* -[YYYTrollAppInfo setHasTryGetLogo:] | 0x100105a14 | ABI v20@0:8B16 */

/* Address: 0x100105a14 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setHasTryGetLogo_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo setHasTryGetLogo:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setHasTryGetLogo_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb058)(param_1,param_2,param_3);
  return;
}



/* -[YYYTrollAppInfo containPath] | 0x100105a5c | ABI @16@0:8 */

/* Address: 0x100105a5c | YYYTrollAppInfo::YYYTrollAppInfo__instance__containPath | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo containPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__containPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb090)();
  return IVar1;
}



/* -[YYYTrollAppInfo setContainPath:] | 0x100105a88 | ABI v24@0:8@16 */

/* Address: 0x100105a88 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setContainPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setContainPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setContainPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb0c0)();
  return;
}



/* -[YYYTrollAppInfo appPath] | 0x100105b0c | ABI @16@0:8 */

/* Address: 0x100105b0c | YYYTrollAppInfo::YYYTrollAppInfo__instance__appPath | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo appPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__appPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb108)();
  return IVar1;
}



/* -[YYYTrollAppInfo setAppPath:] | 0x100105b2c | ABI v24@0:8@16 */

/* Address: 0x100105b2c | YYYTrollAppInfo::YYYTrollAppInfo__instance__setAppPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setAppPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setAppPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb128)();
  return;
}



/* -[YYYTrollAppInfo executable] | 0x100105ba4 | ABI @16@0:8 */

/* Address: 0x100105ba4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__executable | bytes: 16 */

/* Recovered runtime selector: -[YYYTrollAppInfo executable]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__executable(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb158)(*(undefined8 *)(param_1 + 0x20));
  return IVar1;
}



/* -[YYYTrollAppInfo setExecutable:] | 0x100105bc4 | ABI v24@0:8@16 */

/* Address: 0x100105bc4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setExecutable_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setExecutable:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setExecutable_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb170)();
  return;
}



/* -[YYYTrollAppInfo appName] | 0x100105c3c | ABI @16@0:8 */

/* Address: 0x100105c3c | YYYTrollAppInfo::YYYTrollAppInfo__instance__appName | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo appName]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__appName(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb1a8)();
  return IVar1;
}



/* -[YYYTrollAppInfo setAppName:] | 0x100105c50 | ABI v24@0:8@16 */

/* Address: 0x100105c50 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setAppName_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setAppName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setAppName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb1b0)();
  return;
}



/* -[YYYTrollAppInfo bundleId] | 0x100105cd4 | ABI @16@0:8 */

/* Address: 0x100105cd4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__bundleId | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo bundleId]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__bundleId(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb1f8)();
  return IVar1;
}



/* -[YYYTrollAppInfo setBundleId:] | 0x100105cf4 | ABI v24@0:8@16 */

/* Address: 0x100105cf4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setBundleId_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo setBundleId:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setBundleId_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb218)();
  return;
}



/* -[YYYTrollAppInfo version] | 0x100105d14 | ABI @16@0:8 */

/* Address: 0x100105d14 | YYYTrollAppInfo::YYYTrollAppInfo__instance__version | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo version]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__version(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb238)();
  return IVar1;
}



/* -[YYYTrollAppInfo setVersion:] | 0x100105d40 | ABI v24@0:8@16 */

/* Address: 0x100105d40 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setVersion_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setVersion:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setVersion_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb260)();
  return;
}



/* -[YYYTrollAppInfo setLogo:] | 0x100105dc4 | ABI v24@0:8@16 */

/* Address: 0x100105dc4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setLogo_ | bytes: 16 */

/* Recovered runtime selector: -[YYYTrollAppInfo setLogo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setLogo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb2a0)(param_1,param_3);
  return;
}



/* -[YYYTrollAppInfo infoDictionary] | 0x100105de8 | ABI @16@0:8 */

/* Address: 0x100105de8 | YYYTrollAppInfo::YYYTrollAppInfo__instance__infoDictionary | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo infoDictionary]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__infoDictionary(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb2c0)();
  return IVar1;
}



/* -[YYYTrollAppInfo setInfoDictionary:] | 0x100105e14 | ABI v24@0:8@16 */

/* Address: 0x100105e14 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setInfoDictionary_ | bytes: 32 */

/* Recovered runtime selector: -[YYYTrollAppInfo setInfoDictionary:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setInfoDictionary_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb2f8)();
  return;
}



/* -[YYYTrollAppInfo modifyDate] | 0x100105e7c | ABI @16@0:8 */

/* Address: 0x100105e7c | YYYTrollAppInfo::YYYTrollAppInfo__instance__modifyDate | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo modifyDate]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__modifyDate(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb330)();
  return IVar1;
}



/* -[YYYTrollAppInfo setModifyDate:] | 0x100105e9c | ABI v24@0:8@16 */

/* Address: 0x100105e9c | YYYTrollAppInfo::YYYTrollAppInfo__instance__setModifyDate_ | bytes: 16 */

/* Recovered runtime selector: -[YYYTrollAppInfo setModifyDate:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setModifyDate_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb350)(param_1,param_3);
  return;
}



/* -[YYYTrollAppInfo setApplicationType:] | 0x100105eb4 | ABI v24@0:8@16 */

/* Address: 0x100105eb4 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setApplicationType_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTrollAppInfo setApplicationType:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setApplicationType_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb368)();
  return;
}



/* -[YYYTrollAppInfo entitlements] | 0x100105f2c | ABI @16@0:8 */

/* Address: 0x100105f2c | YYYTrollAppInfo::YYYTrollAppInfo__instance__entitlements | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo entitlements]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTrollAppInfo::YYYTrollAppInfo__instance__entitlements(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cfb390)();
  return IVar1;
}



/* -[YYYTrollAppInfo setEntitlements:] | 0x100105f40 | ABI v24@0:8@16 */

/* Address: 0x100105f40 | YYYTrollAppInfo::YYYTrollAppInfo__instance__setEntitlements_ | bytes: 16 */

/* Recovered runtime selector: -[YYYTrollAppInfo setEntitlements:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setEntitlements_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb3a8)(param_1,param_3);
  return;
}



/* -[YYYTrollAppInfo isDecryptApp] | 0x100105f58 | ABI B16@0:8 */

/* Address: 0x100105f58 | YYYTrollAppInfo::YYYTrollAppInfo__instance__isDecryptApp | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo isDecryptApp]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYTrollAppInfo::YYYTrollAppInfo__instance__isDecryptApp(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100105f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cfb3b8)((int)param_1);
  return bVar1;
}



/* -[YYYTrollAppInfo setIsDecryptApp:] | 0x100105f8c | ABI v20@0:8B16 */

/* Address: 0x100105f8c | YYYTrollAppInfo::YYYTrollAppInfo__instance__setIsDecryptApp_ | bytes: 12 */

/* Recovered runtime selector: -[YYYTrollAppInfo setIsDecryptApp:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance__setIsDecryptApp_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100105f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb3e0)(param_1,param_2,param_3);
  return;
}



/* -[YYYTrollAppInfo .cxx_destruct] | 0x100105fa0 | ABI v16@0:8 */

/* Address: 0x100105fa0 | YYYTrollAppInfo::YYYTrollAppInfo__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYTrollAppInfo .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTrollAppInfo::YYYTrollAppInfo__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100105fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfb3f8)();
  return;
}


