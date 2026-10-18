/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYModifyInfo | class address: 0x100c817b0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYModifyInfo initWithCoder:] | 0x1003c8af4 | ABI @24@0:8@16 */

/* Address: 0x1003c8af4 | YYYModifyInfo::YYYModifyInfo__instance__initWithCoder_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyInfo initWithCoder:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003c8b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100de93a8)();
  return IVar1;
}



/* -[YYYModifyInfo encodeWithCoder:] | 0x1003ca0d4 | ABI v24@0:8@16 */

/* Address: 0x1003ca0d4 | YYYModifyInfo::YYYModifyInfo__instance__encodeWithCoder_ | bytes: 76 */

/* Recovered runtime selector: -[YYYModifyInfo encodeWithCoder:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003ca11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100de9528)();
  return;
}



/* -[YYYModifyInfo init] | 0x1003cba44 | ABI @16@0:8 */

/* Address: 0x1003cba44 | YYYModifyInfo::YYYModifyInfo__instance__init | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyInfo init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cba68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100de9750)(param_1);
  return IVar1;
}



/* -[YYYModifyInfo defaultSetup] | 0x1003cbc68 | ABI v16@0:8 */

/* Address: 0x1003cbc68 | YYYModifyInfo::YYYModifyInfo__instance__defaultSetup | bytes: 56 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYModifyInfo defaultSetup]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__defaultSetup(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYDefaultSignConfig);
                    /* WARNING: Could not recover jumptable at 0x0001003cbc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100de9830)(IVar1);
  return;
}



/* -[YYYModifyInfo replaceDEBToDylib] | 0x1003cbe00 | ABI @16@0:8 */

/* Address: 0x1003cbe00 | YYYModifyInfo::YYYModifyInfo__instance__replaceDEBToDylib | bytes: 72 */

/* Recovered runtime selector: -[YYYModifyInfo replaceDEBToDylib]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__replaceDEBToDylib(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cbe44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100de9870)(0x100e92574);
  return IVar1;
}



/* -[YYYModifyInfo currentAppName] | 0x1003cd03c | ABI @16@0:8 */

/* Address: 0x1003cd03c | YYYModifyInfo::YYYModifyInfo__instance__currentAppName | bytes: 36 */

/* Recovered runtime selector: -[YYYModifyInfo currentAppName]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__currentAppName(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cd05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100de9fa0)();
  return IVar1;
}



/* -[YYYModifyInfo currentVersion] | 0x1003cd214 | ABI @16@0:8 */

/* Address: 0x1003cd214 | YYYModifyInfo::YYYModifyInfo__instance__currentVersion | bytes: 52 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYModifyInfo currentVersion]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__currentVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::version(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001003cd244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea0c8)(IVar1);
  return IVar1;
}



/* -[YYYModifyInfo currentLogo] | 0x1003cd3f0 | ABI @16@0:8 */

/* Address: 0x1003cd3f0 | YYYModifyInfo::YYYModifyInfo__instance__currentLogo | bytes: 28 */

/* Recovered runtime selector: -[YYYModifyInfo currentLogo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__currentLogo(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cd408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea1f8)();
  return IVar1;
}



/* -[YYYModifyInfo setLogo:] | 0x1003cd764 | ABI v24@0:8@16 */

/* Address: 0x1003cd764 | YYYModifyInfo::YYYModifyInfo__instance__setLogo_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYModifyInfo setLogo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setLogo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cd790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea3b8)(param_3);
  return;
}



/* -[YYYModifyInfo bundle] | 0x1003cd8ec | ABI @16@0:8 */

/* Address: 0x1003cd8ec | YYYModifyInfo::YYYModifyInfo__instance__bundle | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo bundle]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__bundle(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cd8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea490)();
  return IVar1;
}



/* -[YYYModifyInfo setBundle:] | 0x1003cd90c | ABI v24@0:8@16 */

/* Address: 0x1003cd90c | YYYModifyInfo::YYYModifyInfo__instance__setBundle_ | bytes: 36 */

/* Recovered runtime selector: -[YYYModifyInfo setBundle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setBundle_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cd92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea4b0)();
  return;
}



/* -[YYYModifyInfo origImage] | 0x1003cd99c | ABI @16@0:8 */

/* Address: 0x1003cd99c | YYYModifyInfo::YYYModifyInfo__instance__origImage | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo origImage]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__origImage(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cd9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea500)();
  return IVar1;
}



/* -[YYYModifyInfo setOrigImage:] | 0x1003cd9b0 | ABI v24@0:8@16 */

/* Address: 0x1003cd9b0 | YYYModifyInfo::YYYModifyInfo__instance__setOrigImage_ | bytes: 28 */

/* Recovered runtime selector: -[YYYModifyInfo setOrigImage:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setOrigImage_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cd9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea510)();
  return;
}



/* -[YYYModifyInfo appPath] | 0x1003cda10 | ABI @16@0:8 */

/* Address: 0x1003cda10 | YYYModifyInfo::YYYModifyInfo__instance__appPath | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo appPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__appPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cda18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea538)();
  return IVar1;
}



/* -[YYYModifyInfo setAppPath:] | 0x1003cda3c | ABI v24@0:8@16 */

/* Address: 0x1003cda3c | YYYModifyInfo::YYYModifyInfo__instance__setAppPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyInfo setAppPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setAppPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cda60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea568)();
  return;
}



/* -[YYYModifyInfo appName] | 0x1003cdac0 | ABI @16@0:8 */

/* Address: 0x1003cdac0 | YYYModifyInfo::YYYModifyInfo__instance__appName | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo appName]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__appName(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea5b0)();
  return IVar1;
}



/* -[YYYModifyInfo setAppName:] | 0x1003cdae0 | ABI v24@0:8@16 */

/* Address: 0x1003cdae0 | YYYModifyInfo::YYYModifyInfo__instance__setAppName_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyInfo setAppName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setAppName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dea5c8)();
  return;
}



/* -[YYYModifyInfo version] | 0x1003cdb58 | ABI @16@0:8 */

/* Address: 0x1003cdb58 | YYYModifyInfo::YYYModifyInfo__instance__version | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo version]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__version(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdb60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea5f8)();
  return IVar1;
}



/* -[YYYModifyInfo setVersion:] | 0x1003cdb88 | ABI v24@0:8@16 */

/* Address: 0x1003cdb88 | YYYModifyInfo::YYYModifyInfo__instance__setVersion_ | bytes: 40 */

/* Recovered runtime selector: -[YYYModifyInfo setVersion:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setVersion_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdbac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea628)();
  return;
}



/* -[YYYModifyInfo logo] | 0x1003cdc0c | ABI @16@0:8 */

/* Address: 0x1003cdc0c | YYYModifyInfo::YYYModifyInfo__instance__logo | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo logo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__logo(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea668)();
  return IVar1;
}



/* -[YYYModifyInfo logoData] | 0x1003cdc2c | ABI @16@0:8 */

/* Address: 0x1003cdc2c | YYYModifyInfo::YYYModifyInfo__instance__logoData | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo logoData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__logoData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea690)();
  return IVar1;
}



/* -[YYYModifyInfo setLogoData:] | 0x1003cdc4c | ABI v24@0:8@16 */

/* Address: 0x1003cdc4c | YYYModifyInfo::YYYModifyInfo__instance__setLogoData_ | bytes: 28 */

/* Recovered runtime selector: -[YYYModifyInfo setLogoData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setLogoData_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea6b0)();
  return;
}



/* -[YYYModifyInfo addDylibs] | 0x1003cdcac | ABI @16@0:8 */

/* Address: 0x1003cdcac | YYYModifyInfo::YYYModifyInfo__instance__addDylibs | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo addDylibs]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__addDylibs(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea6d8)();
  return IVar1;
}



/* -[YYYModifyInfo setAddDylibs:] | 0x1003cdcdc | ABI v24@0:8@16 */

/* Address: 0x1003cdcdc | YYYModifyInfo::YYYModifyInfo__instance__setAddDylibs_ | bytes: 36 */

/* Recovered runtime selector: -[YYYModifyInfo setAddDylibs:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setAddDylibs_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea710)();
  return;
}



/* -[YYYModifyInfo removeDylibs] | 0x1003cdd70 | ABI @16@0:8 */

/* Address: 0x1003cdd70 | YYYModifyInfo::YYYModifyInfo__instance__removeDylibs | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo removeDylibs]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__removeDylibs(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea758)();
  return IVar1;
}



/* -[YYYModifyInfo setRemoveDylibs:] | 0x1003cdd90 | ABI v24@0:8@16 */

/* Address: 0x1003cdd90 | YYYModifyInfo::YYYModifyInfo__instance__setRemoveDylibs_ | bytes: 28 */

/* Recovered runtime selector: -[YYYModifyInfo setRemoveDylibs:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setRemoveDylibs_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea780)();
  return;
}



/* -[YYYModifyInfo removeMinimumOSVersion] | 0x1003cddf0 | ABI B16@0:8 */

/* Address: 0x1003cddf0 | YYYModifyInfo::YYYModifyInfo__instance__removeMinimumOSVersion | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo removeMinimumOSVersion]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__instance__removeMinimumOSVersion(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea7b0)((int)param_1);
  return bVar1;
}



/* -[YYYModifyInfo setRemoveMinimumOSVersion:] | 0x1003cde1c | ABI v20@0:8B16 */

/* Address: 0x1003cde1c | YYYModifyInfo::YYYModifyInfo__instance__setRemoveMinimumOSVersion_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo setRemoveMinimumOSVersion:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setRemoveMinimumOSVersion_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cde24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea7e0)(param_1,param_2,param_3);
  return;
}



/* -[YYYModifyInfo removeUISupportedDevices] | 0x1003cde3c | ABI B16@0:8 */

/* Address: 0x1003cde3c | YYYModifyInfo::YYYModifyInfo__instance__removeUISupportedDevices | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo removeUISupportedDevices]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__instance__removeUISupportedDevices(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cde44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea7f8)((int)param_1);
  return bVar1;
}



/* -[YYYModifyInfo setRemoveUISupportedDevices:] | 0x1003cde64 | ABI v20@0:8B16 */

/* Address: 0x1003cde64 | YYYModifyInfo::YYYModifyInfo__instance__setRemoveUISupportedDevices_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo setRemoveUISupportedDevices:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setRemoveUISupportedDevices_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cde6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea820)(param_1,param_2,param_3);
  return;
}



/* -[YYYModifyInfo fixJb] | 0x1003cde90 | ABI B16@0:8 */

/* Address: 0x1003cde90 | YYYModifyInfo::YYYModifyInfo__instance__fixJb | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo fixJb]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__instance__fixJb(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cde98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea850)((int)param_1);
  return bVar1;
}



/* -[YYYModifyInfo setFixJb:] | 0x1003cdea4 | ABI v20@0:8B16 */

/* Address: 0x1003cdea4 | YYYModifyInfo::YYYModifyInfo__instance__setFixJb_ | bytes: 16 */

/* Recovered runtime selector: -[YYYModifyInfo setFixJb:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setFixJb_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dea858)(param_1,param_2,param_3);
  return;
}



/* -[YYYModifyInfo addUISupportsDocumentBrowser] | 0x1003cded4 | ABI B16@0:8 */

/* Address: 0x1003cded4 | YYYModifyInfo::YYYModifyInfo__instance__addUISupportsDocumentBrowser | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo addUISupportsDocumentBrowser]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__instance__addUISupportsDocumentBrowser(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea878)((int)param_1);
  return bVar1;
}



/* -[YYYModifyInfo setAddUISupportsDocumentBrowser:] | 0x1003cdee8 | ABI v20@0:8B16 */

/* Address: 0x1003cdee8 | YYYModifyInfo::YYYModifyInfo__instance__setAddUISupportsDocumentBrowser_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo setAddUISupportsDocumentBrowser:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setAddUISupportsDocumentBrowser_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea890)(param_1,param_2,param_3);
  return;
}



/* -[YYYModifyInfo removeURLScheme] | 0x1003cdf08 | ABI B16@0:8 */

/* Address: 0x1003cdf08 | YYYModifyInfo::YYYModifyInfo__instance__removeURLScheme | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo removeURLScheme]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__instance__removeURLScheme(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea8a8)((int)param_1);
  return bVar1;
}



/* -[YYYModifyInfo setRemoveURLScheme:] | 0x1003cdf28 | ABI v20@0:8B16 */

/* Address: 0x1003cdf28 | YYYModifyInfo::YYYModifyInfo__instance__setRemoveURLScheme_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo setRemoveURLScheme:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setRemoveURLScheme_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdf30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea8d0)(param_1,param_2,param_3);
  return;
}



/* -[YYYModifyInfo injectPath] | 0x1003cdf54 | ABI Q16@0:8 */

/* Address: 0x1003cdf54 | YYYModifyInfo::YYYModifyInfo__instance__injectPath | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo injectPath]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYModifyInfo::YYYModifyInfo__instance__injectPath(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100dea900)();
  return uVar1;
}



/* -[YYYModifyInfo setInjectPath:] | 0x1003cdf74 | ABI v24@0:8Q16 */

/* Address: 0x1003cdf74 | YYYModifyInfo::YYYModifyInfo__instance__setInjectPath_ | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo setInjectPath:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setInjectPath_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cdf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea918)();
  return;
}



/* -[YYYModifyInfo injectFolder] | 0x1003cdf94 | ABI Q16@0:8 */

/* Address: 0x1003cdf94 | YYYModifyInfo::YYYModifyInfo__instance__injectFolder | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo injectFolder]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYModifyInfo::YYYModifyInfo__instance__injectFolder(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100dea940)();
  return uVar1;
}



/* -[YYYModifyInfo setInjectFolder:] | 0x1003cdfc4 | ABI v24@0:8Q16 */

/* Address: 0x1003cdfc4 | YYYModifyInfo::YYYModifyInfo__instance__setInjectFolder_ | bytes: 16 */

/* Recovered runtime selector: -[YYYModifyInfo setInjectFolder:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setInjectFolder_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001003cdfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea970)();
  return;
}



/* -[YYYModifyInfo customInfos] | 0x1003cdfe4 | ABI @16@0:8 */

/* Address: 0x1003cdfe4 | YYYModifyInfo::YYYModifyInfo__instance__customInfos | bytes: 12 */

/* Recovered runtime selector: -[YYYModifyInfo customInfos]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYModifyInfo::YYYModifyInfo__instance__customInfos(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cdfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dea988)();
  return IVar1;
}



/* -[YYYModifyInfo setCustomInfos:] | 0x1003ce010 | ABI v24@0:8@16 */

/* Address: 0x1003ce010 | YYYModifyInfo::YYYModifyInfo__instance__setCustomInfos_ | bytes: 36 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYModifyInfo setCustomInfos:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance__setCustomInfos_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003ce030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dea9c0)(param_3);
  return;
}



/* -[YYYModifyInfo .cxx_destruct] | 0x1003ce080 | ABI v16@0:8 */

/* Address: 0x1003ce080 | YYYModifyInfo::YYYModifyInfo__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYModifyInfo .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYModifyInfo::YYYModifyInfo__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003ce098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deaa00)();
  return;
}



/* +[YYYModifyInfo supportsSecureCoding] | 0x1003cd8cc | ABI B16@0:8 */

/* Address: 0x1003cd8cc | YYYModifyInfo::YYYModifyInfo__class__supportsSecureCoding | bytes: 12 */

/* Recovered runtime selector: +[YYYModifyInfo supportsSecureCoding]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYModifyInfo::YYYModifyInfo__class__supportsSecureCoding(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cd8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dea470)((int)param_1);
  return bVar1;
}


