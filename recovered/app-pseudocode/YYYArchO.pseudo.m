/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYArchO | class address: 0x100c9a740
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYArchO generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:infoPlistData:requirementsSlot:codeResources:entitlementsSlot:entitlementsSlotDER:execSegFlags:] | 0x10077473c | ABI @84@0:8B16@20@28@36@44@52@60@68Q76 */

/* Address: 0x10077473c | YYYArchO::YYYArchO__instance__generateSlotBuildCodeDirectoryWithSHA256_bundleId_teamId_infoPlistData_requirementsSlot_codeResources_entitlementsSlot_entitlementsSlotDER_execSegFlags_ | bytes: 128 */

/* Recovered runtime selector: -[YYYArchO
   generateSlotBuildCodeDirectoryWithSHA256:bundleId:teamId:infoPlistData:requirementsSlot:codeResources:entitlementsSlot:entitlementsSlotDER:execSegFlags:]
   Original ABI encoding: @84@0:8B16@20@28@36@44@52@60@68Q76
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::
   YYYArchO__instance__generateSlotBuildCodeDirectoryWithSHA256_bundleId_teamId_infoPlistData_requirementsSlot_codeResources_entitlementsSlot_entitlementsSlotDER_execSegFlags_
             (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5,ID param_6,ID param_7,
             ID param_8,ID param_9,ID param_10,unsigned_long_long param_11)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007747b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e35070)(param_1,param_2,param_3);
  return IVar1;
}



/* -[YYYArchO generateSlotBuildEntitlements:] | 0x1007765d8 | ABI @24@0:8@16 */

/* Address: 0x1007765d8 | YYYArchO::YYYArchO__instance__generateSlotBuildEntitlements_ | bytes: 32 */

/* Recovered runtime selector: -[YYYArchO generateSlotBuildEntitlements:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__generateSlotBuildEntitlements_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007765f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e35cb8)();
  return IVar1;
}



/* -[YYYArchO generateSlotBuildDerEntitlements:] | 0x100776728 | ABI @24@0:8@16 */

/* Address: 0x100776728 | YYYArchO::YYYArchO__instance__generateSlotBuildDerEntitlements_ | bytes: 40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYArchO generateSlotBuildDerEntitlements:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__generateSlotBuildDerEntitlements_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010077674c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e35d48)(param_3);
  return IVar1;
}



/* -[YYYArchO generateSlotBuildRequirementsWithBundleId:subjectCN:] | 0x100777638 | ABI @32@0:8@16@24 */

/* Address: 0x100777638 | YYYArchO::YYYArchO__instance__generateSlotBuildRequirementsWithBundleId_subjectCN_ | bytes: 48 */

/* Recovered runtime selector: -[YYYArchO generateSlotBuildRequirementsWithBundleId:subjectCN:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__generateSlotBuildRequirementsWithBundleId_subjectCN_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100777664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e36328)();
  return IVar1;
}



/* -[YYYArchO generateSlotBuildCMSSignatureWithSignAsset:sha1CodeDirectorySlot:sha256CodeDirectorySlot:] | 0x1007783cc | ABI @40@0:8@16@24@32 */

/* Address: 0x1007783cc | YYYArchO::YYYArchO__instance__generateSlotBuildCMSSignatureWithSignAsset_sha1CodeDirectorySlot_sha256CodeDirectorySlot_ | bytes: 80 */

/* Recovered runtime selector: -[YYYArchO
   generateSlotBuildCMSSignatureWithSignAsset:sha1CodeDirectorySlot:sha256CodeDirectorySlot:]
   Original ABI encoding: @40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::
   YYYArchO__instance__generateSlotBuildCMSSignatureWithSignAsset_sha1CodeDirectorySlot_sha256CodeDirectorySlot_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100778418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e366d8)();
  return IVar1;
}



/* -[YYYArchO generateCodeSignatureWithSignAsset:bundleId:infoPlistData:codeResourcesData:] | 0x10077a4ec | ABI @48@0:8@16@24@32@40 */

/* Address: 0x10077a4ec | YYYArchO::YYYArchO__instance__generateCodeSignatureWithSignAsset_bundleId_infoPlistData_codeResourcesData_ | bytes: 72 */

/* Recovered runtime selector: -[YYYArchO
   generateCodeSignatureWithSignAsset:bundleId:infoPlistData:codeResourcesData:]
   Original ABI encoding: @48@0:8@16@24@32@40
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::
   YYYArchO__instance__generateCodeSignatureWithSignAsset_bundleId_infoPlistData_codeResourcesData_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010077a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e36c78)(DAT_100e95e8c);
  return IVar1;
}



/* -[YYYArchO reallocCodeSignSpace] | 0x10077cca4 | ABI I16@0:8 */

/* Address: 0x10077cca4 | YYYArchO::YYYArchO__instance__reallocCodeSignSpace | bytes: 52 */

/* Recovered runtime selector: -[YYYArchO reallocCodeSignSpace]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYArchO::YYYArchO__instance__reallocCodeSignSpace(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010077ccd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e376b8)((int)param_1);
  return uVar1;
}



/* -[YYYArchO AddCodeSignSpaceLength:] | 0x10077df70 | ABI I20@0:8I16 */

/* Address: 0x10077df70 | YYYArchO::YYYArchO__instance__AddCodeSignSpaceLength_ | bytes: 56 */

/* Recovered runtime selector: -[YYYArchO AddCodeSignSpaceLength:]
   Original ABI encoding: I20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int
YYYArchO::YYYArchO__instance__AddCodeSignSpaceLength_(ID param_1,SEL param_2,unsigned_int param_3)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010077dfa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e37e88)((int)param_1,param_2,param_3);
  return uVar1;
}



/* -[YYYArchO _writeMachHeader:] | 0x10077f15c | ABI v24@0:8@16 */

/* Address: 0x10077f15c | YYYArchO::YYYArchO__instance___writeMachHeader_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchO _writeMachHeader:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance___writeMachHeader_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010077f180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e38628)();
  return;
}



/* -[YYYArchO addLoadCommandsSpace:] | 0x10076e94c | ABI B20@0:8I16 */

/* Address: 0x10076e94c | YYYArchO::YYYArchO__instance__addLoadCommandsSpace_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO addLoadCommandsSpace:]
   Original ABI encoding: B20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__addLoadCommandsSpace_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e283e0)((int)param_1,param_2,param_3);
  return bVar1;
}



/* -[YYYArchO addDylibLink:weakInject:error:] | 0x10076e96c | ABI B36@0:8@16B24^@28 */

/* Address: 0x10076e96c | YYYArchO::YYYArchO__instance__addDylibLink_weakInject_error_ | bytes: 88 */

/* Recovered runtime selector: -[YYYArchO addDylibLink:weakInject:error:]
   Original ABI encoding: B36@0:8@16B24^@28
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__addDylibLink_weakInject_error_
               (ID param_1,SEL param_2,ID param_3,bool param_4,ID *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076e9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100e283f8)(0x100e95e70,(int)param_1,param_2,param_3,param_4);
  return bVar1;
}



/* -[YYYArchO changeDylibLink:toLink:error:] | 0x10076fd80 | ABI B40@0:8@16@24^@32 */

/* Address: 0x10076fd80 | YYYArchO::YYYArchO__instance__changeDylibLink_toLink_error_ | bytes: 84 */

/* Recovered runtime selector: -[YYYArchO changeDylibLink:toLink:error:]
   Original ABI encoding: B40@0:8@16@24^@32
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__changeDylibLink_toLink_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076fdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100e28b18)((int)param_1);
  return bVar1;
}



/* -[YYYArchO removeLinkedDylib:] | 0x100770e38 | ABI v24@0:8@16 */

/* Address: 0x100770e38 | YYYArchO::YYYArchO__instance__removeLinkedDylib_ | bytes: 68 */

/* Recovered runtime selector: -[YYYArchO removeLinkedDylib:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__removeLinkedDylib_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100770e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29188)();
  return;
}



/* -[YYYArchO removeLoadCommandWithCmd:] | 0x100771570 | ABI v20@0:8I16 */

/* Address: 0x100771570 | YYYArchO::YYYArchO__instance__removeLoadCommandWithCmd_ | bytes: 80 */

/* Recovered runtime selector: -[YYYArchO removeLoadCommandWithCmd:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__removeLoadCommandWithCmd_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007715bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e29418)(0x100e95e7c,param_1,param_2,param_3);
  return;
}



/* -[YYYArchO setup] | 0x1007637e8 | ABI v16@0:8 */

/* Address: 0x1007637e8 | YYYArchO::YYYArchO__instance__setup | bytes: 76 */

/* Recovered runtime selector: -[YYYArchO setup]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setup(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100763830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e23e40)(0x100e95e50);
  return;
}



/* -[YYYArchO getLinkNameForDylibCmd:] | 0x1007659c4 | ABI @24@0:8@16 */

/* Address: 0x1007659c4 | YYYArchO::YYYArchO__instance__getLinkNameForDylibCmd_ | bytes: 44 */

/* Recovered runtime selector: -[YYYArchO getLinkNameForDylibCmd:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__getLinkNameForDylibCmd_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007659ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e24cb0)();
  return IVar1;
}



/* -[YYYArchO signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:] | 0x100765b88 | ABI B56@0:8@16@24@32@40^@48 */

/* Address: 0x100765b88 | YYYArchO::YYYArchO__instance__signWithSignAsset_bundleId_infoPlistData_codeResourcesData_error_ | bytes: 92 */

/* Recovered runtime selector: -[YYYArchO
   signWithSignAsset:bundleId:infoPlistData:codeResourcesData:error:]
   Original ABI encoding: B56@0:8@16@24@32@40^@48
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__signWithSignAsset_bundleId_infoPlistData_codeResourcesData_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID *param_7)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100765be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100e24d48)(0x100e95e54,(int)param_1);
  return bVar1;
}



/* -[YYYArchO loadCommands] | 0x100767520 | ABI @16@0:8 */

/* Address: 0x100767520 | YYYArchO::YYYArchO__instance__loadCommands | bytes: 44 */

/* Recovered runtime selector: -[YYYArchO loadCommands]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__loadCommands(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100767548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25210)();
  return IVar1;
}



/* -[YYYArchO getDylibCommands] | 0x10076784c | ABI @16@0:8 */

/* Address: 0x10076784c | YYYArchO::YYYArchO__instance__getDylibCommands | bytes: 104 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYArchO getDylibCommands]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__getDylibCommands(ID param_1,SEL param_2)

{
  ID IVar1;
  
  objc_stub::mutableCopy(*(ID *)PTR____NSArray0___100afc6c0);
  IVar1 = objc_stub::FUN_10094db60(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001007678b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25370)(IVar1);
  return IVar1;
}



/* -[YYYArchO getRPathCommands] | 0x100767e04 | ABI @16@0:8 */

/* Address: 0x100767e04 | YYYArchO::YYYArchO__instance__getRPathCommands | bytes: 72 */

/* Recovered runtime selector: -[YYYArchO getRPathCommands]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__getRPathCommands(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100767e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25640)();
  return IVar1;
}



/* -[YYYArchO shouldSwap] | 0x100768410 | ABI B16@0:8 */

/* Address: 0x100768410 | YYYArchO::YYYArchO__instance__shouldSwap | bytes: 32 */

/* Recovered runtime selector: -[YYYArchO shouldSwap]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__shouldSwap(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076842c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e258d0)((int)param_1);
  return bVar1;
}



/* -[YYYArchO isExecute] | 0x1007684ac | ABI B16@0:8 */

/* Address: 0x1007684ac | YYYArchO::YYYArchO__instance__isExecute | bytes: 32 */

/* Recovered runtime selector: -[YYYArchO isExecute]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__isExecute(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007684c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e25910)((int)param_1);
  return bVar1;
}



/* -[YYYArchO machoFileHandle] | 0x100768540 | ABI @16@0:8 */

/* Address: 0x100768540 | YYYArchO::YYYArchO__instance__machoFileHandle | bytes: 28 */

/* Recovered runtime selector: -[YYYArchO machoFileHandle]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__machoFileHandle(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25938)();
  return IVar1;
}



/* -[YYYArchO setMachoFileHandle:] | 0x1007685a0 | ABI v24@0:8@16 */

/* Address: 0x1007685a0 | YYYArchO::YYYArchO__instance__setMachoFileHandle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYArchO setMachoFileHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setMachoFileHandle_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007685c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25968)();
  return;
}



/* -[YYYArchO machHeader] | 0x10076861c | ABI @16@0:8 */

/* Address: 0x10076861c | YYYArchO::YYYArchO__instance__machHeader | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO machHeader]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__machHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e259b0)();
  return IVar1;
}



/* -[YYYArchO setMachHeader:] | 0x100768644 | ABI v24@0:8@16 */

/* Address: 0x100768644 | YYYArchO::YYYArchO__instance__setMachHeader_ | bytes: 24 */

/* Recovered runtime selector: -[YYYArchO setMachHeader:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setMachHeader_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e259d0)((long)_machHeader,param_1,param_3);
  return;
}



/* -[YYYArchO loadCommandsFreeSpace] | 0x100768670 | ABI q16@0:8 */

/* Address: 0x100768670 | YYYArchO::YYYArchO__instance__loadCommandsFreeSpace | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO loadCommandsFreeSpace]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYArchO::YYYArchO__instance__loadCommandsFreeSpace(ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100e259e8)();
  return lVar1;
}



/* -[YYYArchO setLoadCommandsFreeSpace:] | 0x100768698 | ABI v24@0:8q16 */

/* Address: 0x100768698 | YYYArchO::YYYArchO__instance__setLoadCommandsFreeSpace_ | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO setLoadCommandsFreeSpace:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setLoadCommandsFreeSpace_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007686a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25a08)((long)_loadCommandsFreeSpace);
  return;
}



/* -[YYYArchO linkEditSegment] | 0x1007686e8 | ABI @16@0:8 */

/* Address: 0x1007686e8 | YYYArchO::YYYArchO__instance__linkEditSegment | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO linkEditSegment]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__linkEditSegment(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007686f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25a50)((long)_linkEditSegment);
  return IVar1;
}



/* -[YYYArchO setLinkEditSegment:] | 0x10076871c | ABI v24@0:8@16 */

/* Address: 0x10076871c | YYYArchO::YYYArchO__instance__setLinkEditSegment_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYArchO setLinkEditSegment:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setLinkEditSegment_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e25a78)(param_3);
  return;
}



/* -[YYYArchO codeSignSegment] | 0x100768788 | ABI @16@0:8 */

/* Address: 0x100768788 | YYYArchO::YYYArchO__instance__codeSignSegment | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO codeSignSegment]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__codeSignSegment(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25a98)();
  return IVar1;
}



/* -[YYYArchO setCodeSignSegment:] | 0x1007687bc | ABI v24@0:8@16 */

/* Address: 0x1007687bc | YYYArchO::YYYArchO__instance__setCodeSignSegment_ | bytes: 28 */

/* Recovered runtime selector: -[YYYArchO setCodeSignSegment:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setCodeSignSegment_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007687d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25ad0)();
  return;
}



/* -[YYYArchO infoPlistData] | 0x100768800 | ABI @16@0:8 */

/* Address: 0x100768800 | YYYArchO::YYYArchO__instance__infoPlistData | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO infoPlistData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__infoPlistData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25ad8)((long)_infoPlistData);
  return IVar1;
}



/* -[YYYArchO setInfoPlistData:] | 0x100768834 | ABI v24@0:8@16 */

/* Address: 0x100768834 | YYYArchO::YYYArchO__instance__setInfoPlistData_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchO setInfoPlistData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setInfoPlistData_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25b10)();
  return;
}



/* -[YYYArchO infoPlist] | 0x1007688d8 | ABI @16@0:8 */

/* Address: 0x1007688d8 | YYYArchO::YYYArchO__instance__infoPlist | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO infoPlist]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__infoPlist(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007688e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25b60)((long)_infoPlist);
  return IVar1;
}



/* -[YYYArchO setInfoPlist:] | 0x100768900 | ABI v24@0:8@16 */

/* Address: 0x100768900 | YYYArchO::YYYArchO__instance__setInfoPlist_ | bytes: 28 */

/* Recovered runtime selector: -[YYYArchO setInfoPlist:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setInfoPlist_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25b80)();
  return;
}



/* -[YYYArchO length] | 0x100768964 | ABI I16@0:8 */

/* Address: 0x100768964 | YYYArchO::YYYArchO__instance__length | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO length]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYArchO::YYYArchO__instance__length(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e25ba8)((long)_length,(int)param_1);
  return uVar1;
}



/* -[YYYArchO setLength:] | 0x100768998 | ABI v20@0:8I16 */

/* Address: 0x100768998 | YYYArchO::YYYArchO__instance__setLength_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO setLength:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setLength_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007689a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25bd8)(param_1,param_2,param_3);
  return;
}



/* -[YYYArchO codeLength] | 0x1007689c0 | ABI I16@0:8 */

/* Address: 0x1007689c0 | YYYArchO::YYYArchO__instance__codeLength | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO codeLength]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYArchO::YYYArchO__instance__codeLength(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007689c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e25bf8)((int)param_1);
  return uVar1;
}



/* -[YYYArchO setCodeLength:] | 0x1007689dc | ABI v20@0:8I16 */

/* Address: 0x1007689dc | YYYArchO::YYYArchO__instance__setCodeLength_ | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO setCodeLength:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setCodeLength_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007689ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25c08)((long)_codeLength,param_1,param_2,param_3);
  return;
}



/* -[YYYArchO execSegLimit] | 0x100768a10 | ABI Q16@0:8 */

/* Address: 0x100768a10 | YYYArchO::YYYArchO__instance__execSegLimit | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO execSegLimit]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYArchO::YYYArchO__instance__execSegLimit(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e25c38)();
  return uVar1;
}



/* -[YYYArchO setExecSegLimit:] | 0x100768a38 | ABI v24@0:8Q16 */

/* Address: 0x100768a38 | YYYArchO::YYYArchO__instance__setExecSegLimit_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO setExecSegLimit:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setExecSegLimit_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25c58)();
  return;
}



/* -[YYYArchO execSegFlags] | 0x100768a7c | ABI Q16@0:8 */

/* Address: 0x100768a7c | YYYArchO::YYYArchO__instance__execSegFlags | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO execSegFlags]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYArchO::YYYArchO__instance__execSegFlags(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e25ca0)((long)_execSegFlags);
  return uVar1;
}



/* -[YYYArchO setExecSegFlags:] | 0x100768ab0 | ABI v24@0:8Q16 */

/* Address: 0x100768ab0 | YYYArchO::YYYArchO__instance__setExecSegFlags_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO setExecSegFlags:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setExecSegFlags_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25cd0)();
  return;
}



/* -[YYYArchO isEncryption] | 0x100768af4 | ABI B16@0:8 */

/* Address: 0x100768af4 | YYYArchO::YYYArchO__instance__isEncryption | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO isEncryption]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchO::YYYArchO__instance__isEncryption(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e25d00)((long)_isEncryption,(int)param_1);
  return bVar1;
}



/* -[YYYArchO setIsEncryption:] | 0x100768b28 | ABI v20@0:8B16 */

/* Address: 0x100768b28 | YYYArchO::YYYArchO__instance__setIsEncryption_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchO setIsEncryption:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setIsEncryption_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25d28)(param_1,param_2,param_3);
  return;
}



/* -[YYYArchO defaultEntitlements] | 0x100768b6c | ABI @16@0:8 */

/* Address: 0x100768b6c | YYYArchO::YYYArchO__instance__defaultEntitlements | bytes: 20 */

/* Recovered runtime selector: -[YYYArchO defaultEntitlements]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchO::YYYArchO__instance__defaultEntitlements(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100768b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e25d70)((long)_defaultEntitlements);
  return IVar1;
}



/* -[YYYArchO setDefaultEntitlements:] | 0x100768b88 | ABI v24@0:8@16 */

/* Address: 0x100768b88 | YYYArchO::YYYArchO__instance__setDefaultEntitlements_ | bytes: 28 */

/* Recovered runtime selector: -[YYYArchO setDefaultEntitlements:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance__setDefaultEntitlements_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100768ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e25d78)();
  return;
}



/* -[YYYArchO .cxx_destruct] | 0x100768bcc | ABI v16@0:8 */

/* Address: 0x100768bcc | YYYArchO::YYYArchO__instance___cxx_destruct | bytes: 76 */

/* Recovered runtime selector: -[YYYArchO .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchO::YYYArchO__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100768c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e25d88)();
  return;
}


