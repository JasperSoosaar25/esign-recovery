/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYDownloadItem | class address: 0x100c7e178
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYDownloadItem initWithCoder:] | 0x1001bd178 | ABI @24@0:8@16 */

/* Address: 0x1001bd178 | YYYDownloadItem::YYYDownloadItem__instance__initWithCoder_ | bytes: 52 */

/* Recovered runtime selector: -[YYYDownloadItem initWithCoder:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001bd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d38778)(0x100e91858);
  return IVar1;
}



/* -[YYYDownloadItem encodeWithCoder:] | 0x1001bdb6c | ABI v24@0:8@16 */

/* Address: 0x1001bdb6c | YYYDownloadItem::YYYDownloadItem__instance__encodeWithCoder_ | bytes: 40 */

/* Recovered runtime selector: -[YYYDownloadItem encodeWithCoder:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001bdb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d389b8)();
  return;
}



/* -[YYYDownloadItem key] | 0x1001bf6c4 | ABI @16@0:8 */

/* Address: 0x1001bf6c4 | YYYDownloadItem::YYYDownloadItem__instance__key | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem key]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__key(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001bf6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d39260)();
  return IVar1;
}



/* -[YYYDownloadItem hash] | 0x1001bf850 | ABI Q16@0:8 */

/* Address: 0x1001bf850 | YYYDownloadItem::YYYDownloadItem__instance__hash | bytes: 60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYDownloadItem hash]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYDownloadItem::YYYDownloadItem__instance__hash(ID param_1,SEL param_2)

{
  ID IVar1;
  unsigned_long_long uVar2;
  
  IVar1 = objc_stub::key(param_1);
  uVar2 = FUN_1001ca3f0(IVar1);
  return uVar2;
}



/* -[YYYDownloadItem isEqual:] | 0x1001bf88c | ABI B24@0:8@16 */

/* Address: 0x1001bf88c | YYYDownloadItem::YYYDownloadItem__instance__isEqual_ | bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYDownloadItem isEqual:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYDownloadItem::YYYDownloadItem__instance__isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID self;
  ID IVar2;
  
  self = objc_stub::key(param_1);
  IVar2 = objc_stub::key(param_3);
  objc_stub::isEqualToString_(self,IVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001bf8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d39300)(0);
  return bVar1;
}



/* -[YYYDownloadItem isDownloaded] | 0x1001bf930 | ABI B16@0:8 */

/* Address: 0x1001bf930 | YYYDownloadItem::YYYDownloadItem__instance__isDownloaded | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem isDownloaded]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYDownloadItem::YYYDownloadItem__instance__isDownloaded(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001bf94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d39320)((int)param_1);
  return bVar1;
}



/* -[YYYDownloadItem stateTitle] | 0x1001bfe3c | ABI @16@0:8 */

/* Address: 0x1001bfe3c | YYYDownloadItem::YYYDownloadItem__instance__stateTitle | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem stateTitle]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__stateTitle(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001bfe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d394c0)();
  return IVar1;
}



/* -[YYYDownloadItem fileSize] | 0x1001c05cc | ABI @16@0:8 */

/* Address: 0x1001c05cc | YYYDownloadItem::YYYDownloadItem__instance__fileSize | bytes: 48 */

/* Recovered runtime selector: -[YYYDownloadItem fileSize]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__fileSize(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d397e0)(0x100e91878);
  return IVar1;
}



/* -[YYYDownloadItem idf] | 0x1001c0bc0 | ABI @16@0:8 */

/* Address: 0x1001c0bc0 | YYYDownloadItem::YYYDownloadItem__instance__idf | bytes: 24 */

/* Recovered runtime selector: -[YYYDownloadItem idf]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__idf(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c0bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d39ae0)();
  return IVar1;
}



/* -[YYYDownloadItem downloadModel] | 0x1001c0d3c | ABI @16@0:8 */

/* Address: 0x1001c0d3c | YYYDownloadItem::YYYDownloadItem__instance__downloadModel | bytes: 68 */

/* Recovered runtime selector: -[YYYDownloadItem downloadModel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__downloadModel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c0d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d39b60)();
  return IVar1;
}



/* -[YYYDownloadItem save] | 0x1001c374c | ABI v16@0:8 */

/* Address: 0x1001c374c | YYYDownloadItem::YYYDownloadItem__instance__save | bytes: 24 */

/* Recovered runtime selector: -[YYYDownloadItem save]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__save(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3aad8)();
  return;
}



/* -[YYYDownloadItem url] | 0x1001c37e8 | ABI @16@0:8 */

/* Address: 0x1001c37e8 | YYYDownloadItem::YYYDownloadItem__instance__url | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem url]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__url(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c37f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3ab28)();
  return IVar1;
}



/* -[YYYDownloadItem setUrl:] | 0x1001c3808 | ABI v24@0:8@16 */

/* Address: 0x1001c3808 | YYYDownloadItem::YYYDownloadItem__instance__setUrl_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYDownloadItem setUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setUrl_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ab48)(param_3);
  return;
}



/* -[YYYDownloadItem name] | 0x1001c3878 | ABI @16@0:8 */

/* Address: 0x1001c3878 | YYYDownloadItem::YYYDownloadItem__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c3880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3ab70)();
  return IVar1;
}



/* -[YYYDownloadItem setName:] | 0x1001c38a4 | ABI v24@0:8@16 */

/* Address: 0x1001c38a4 | YYYDownloadItem::YYYDownloadItem__instance__setName_ | bytes: 36 */

/* Recovered runtime selector: -[YYYDownloadItem setName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c38c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d3aba0)();
  return;
}



/* -[YYYDownloadItem setFileSize:] | 0x1001c3928 | ABI v24@0:8@16 */

/* Address: 0x1001c3928 | YYYDownloadItem::YYYDownloadItem__instance__setFileSize_ | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem setFileSize:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setFileSize_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3abe0)();
  return;
}



/* -[YYYDownloadItem fileSavePath] | 0x1001c398c | ABI @16@0:8 */

/* Address: 0x1001c398c | YYYDownloadItem::YYYDownloadItem__instance__fileSavePath | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem fileSavePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__fileSavePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c3994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3ac10)();
  return IVar1;
}



/* -[YYYDownloadItem setFileSavePath:] | 0x1001c39ac | ABI v24@0:8@16 */

/* Address: 0x1001c39ac | YYYDownloadItem::YYYDownloadItem__instance__setFileSavePath_ | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem setFileSavePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setFileSavePath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c39c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ac30)();
  return;
}



/* -[YYYDownloadItem setDownloadModel:] | 0x1001c3a08 | ABI v24@0:8@16 */

/* Address: 0x1001c3a08 | YYYDownloadItem::YYYDownloadItem__instance__setDownloadModel_ | bytes: 16 */

/* Recovered runtime selector: -[YYYDownloadItem setDownloadModel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setDownloadModel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ac60)(param_1,param_3);
  return;
}



/* -[YYYDownloadItem info] | 0x1001c3a20 | ABI @16@0:8 */

/* Address: 0x1001c3a20 | YYYDownloadItem::YYYDownloadItem__instance__info | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem info]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__info(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c3a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3ac78)();
  return IVar1;
}



/* -[YYYDownloadItem setInfo:] | 0x1001c3a40 | ABI v24@0:8@16 */

/* Address: 0x1001c3a40 | YYYDownloadItem::YYYDownloadItem__instance__setInfo_ | bytes: 32 */

/* Recovered runtime selector: -[YYYDownloadItem setInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setInfo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ac98)();
  return;
}



/* -[YYYDownloadItem progressBlock] | 0x1001c3aa4 | ABI @?16@0:8 */

/* Address: 0x1001c3aa4 | YYYDownloadItem::YYYDownloadItem__instance__progressBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem progressBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__progressBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c3aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3acc8)();
  return IVar1;
}



/* -[YYYDownloadItem setProgressBlock:] | 0x1001c3ad0 | ABI v24@0:8@?16 */

/* Address: 0x1001c3ad0 | YYYDownloadItem::YYYDownloadItem__instance__setProgressBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYDownloadItem setProgressBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setProgressBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3acf0)();
  return;
}



/* -[YYYDownloadItem stateBlock] | 0x1001c3b54 | ABI @?16@0:8 */

/* Address: 0x1001c3b54 | YYYDownloadItem::YYYDownloadItem__instance__stateBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYDownloadItem stateBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__instance__stateBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001c3b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d3ad38)();
  return IVar1;
}



/* -[YYYDownloadItem setStateBlock:] | 0x1001c3b74 | ABI v24@0:8@?16 */

/* Address: 0x1001c3b74 | YYYDownloadItem::YYYDownloadItem__instance__setStateBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYDownloadItem setStateBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance__setStateBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ad50)();
  return;
}



/* -[YYYDownloadItem .cxx_destruct] | 0x1001c3bec | ABI v16@0:8 */

/* Address: 0x1001c3bec | YYYDownloadItem::YYYDownloadItem__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYDownloadItem .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDownloadItem::YYYDownloadItem__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001c3c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d3ad88)();
  return;
}



/* +[YYYDownloadItem itemWithUrl:] | 0x1001be1c8 | ABI @24@0:8@16 */

/* Address: 0x1001be1c8 | YYYDownloadItem::YYYDownloadItem__class__itemWithUrl_ | bytes: 36 */

/* Recovered runtime selector: +[YYYDownloadItem itemWithUrl:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__class__itemWithUrl_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001be1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d38a98)(param_3);
  return IVar1;
}



/* +[YYYDownloadItem itemWithApp:] | 0x1001bf260 | ABI @24@0:8@16 */

/* Address: 0x1001bf260 | YYYDownloadItem::YYYDownloadItem__class__itemWithApp_ | bytes: 32 */

/* Recovered runtime selector: +[YYYDownloadItem itemWithApp:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDownloadItem::YYYDownloadItem__class__itemWithApp_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001bf27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d390c0)();
  return IVar1;
}


