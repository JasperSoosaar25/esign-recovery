/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYArchive | class address: 0x100c7e740
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYArchive decompressXAD] | 0x1001e4de0 | ABI v16@0:8 */

/* Address: 0x1001e4de0 | YYYArchive::YYYArchive__instance__decompressXAD | bytes: 32 */

/* Recovered runtime selector: -[YYYArchive decompressXAD]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__decompressXAD(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d456d0)();
  return;
}



/* -[YYYArchive extract] | 0x1001e50f4 | ABI v16@0:8 */

/* Address: 0x1001e50f4 | YYYArchive::YYYArchive__instance__extract | bytes: 76 */

/* Recovered runtime selector: -[YYYArchive extract]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__extract(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e513c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d457f8)();
  return;
}



/* -[YYYArchive simpleUnarchiverNeedsPassword:] | 0x1001e6314 | ABI v24@0:8@16 */

/* Address: 0x1001e6314 | YYYArchive::YYYArchive__instance__simpleUnarchiverNeedsPassword_ | bytes: 36 */

/* Recovered runtime selector: -[YYYArchive simpleUnarchiverNeedsPassword:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__simpleUnarchiverNeedsPassword_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45fd8)();
  return;
}



/* -[YYYArchive extractionShouldStopForSimpleUnarchiver:] | 0x1001e63ec | ABI B24@0:8@16 */

/* Address: 0x1001e63ec | YYYArchive::YYYArchive__instance__extractionShouldStopForSimpleUnarchiver_ | bytes: 36 */

/* Recovered runtime selector: -[YYYArchive extractionShouldStopForSimpleUnarchiver:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__instance__extractionShouldStopForSimpleUnarchiver_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d46020)((int)param_1);
  return bVar1;
}



/* -[YYYArchive simpleUnarchiver:shouldExtractEntryWithDictionary:to:] | 0x1001e64f8 | ABI B40@0:8@16@24@32 */

/* Address: 0x1001e64f8 | YYYArchive::YYYArchive__instance__simpleUnarchiver_shouldExtractEntryWithDictionary_to_ | bytes: 64 */

/* Recovered runtime selector: -[YYYArchive simpleUnarchiver:shouldExtractEntryWithDictionary:to:]
   Original ABI encoding: B40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__instance__simpleUnarchiver_shouldExtractEntryWithDictionary_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e6534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100d460e0)((int)param_1);
  return bVar1;
}



/* -[YYYArchive simpleUnarchiver:extractionProgressForEntryWithDictionary:fileProgress:of:totalProgress:of:] | 0x1001e6b28 | ABI v64@0:8@16@24q32q40q48q56 */

/* Address: 0x1001e6b28 | YYYArchive::YYYArchive__instance__simpleUnarchiver_extractionProgressForEntryWithDictionary_fileProgress_of_totalProgress_of_ | bytes: 60 */

/* Recovered runtime selector: -[YYYArchive
   simpleUnarchiver:extractionProgressForEntryWithDictionary:fileProgress:of:totalProgress:of:]
   Original ABI encoding: v64@0:8@16@24q32q40q48q56
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::
     YYYArchive__instance__simpleUnarchiver_extractionProgressForEntryWithDictionary_fileProgress_of_totalProgress_of_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7,long_long param_8)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d462c0)();
  return;
}



/* -[YYYArchive simpleUnarchiver:estimatedExtractionProgressForEntryWithDictionary:fileProgress:totalProgress:] | 0x1001e6d60 | ABI v48@0:8@16@24d32d40 */

/* Address: 0x1001e6d60 | YYYArchive::YYYArchive__instance__simpleUnarchiver_estimatedExtractionProgressForEntryWithDictionary_fileProgress_totalProgress_ | bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYArchive
   simpleUnarchiver:estimatedExtractionProgressForEntryWithDictionary:fileProgress:totalProgress:]
   Original ABI encoding: v48@0:8@16@24d32d40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::
     YYYArchive__instance__simpleUnarchiver_estimatedExtractionProgressForEntryWithDictionary_fileProgress_totalProgress_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5,double param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d46360)(param_4);
  return;
}



/* -[YYYArchive simpleUnarchiver:didExtractEntryWithDictionary:to:error:] | 0x1001e6ee0 | ABI v44@0:8@16@24@32i40 */

/* Address: 0x1001e6ee0 | YYYArchive::YYYArchive__instance__simpleUnarchiver_didExtractEntryWithDictionary_to_error_ | bytes: 52 */

/* Recovered runtime selector: -[YYYArchive
   simpleUnarchiver:didExtractEntryWithDictionary:to:error:]
   Original ABI encoding: v44@0:8@16@24@32i40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__simpleUnarchiver_didExtractEntryWithDictionary_to_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,int param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e6f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d463d0)();
  return;
}



/* -[YYYArchive extractFailed] | 0x1001e7074 | ABI v16@0:8 */

/* Address: 0x1001e7074 | YYYArchive::YYYArchive__instance__extractFailed | bytes: 80 */

/* Recovered runtime selector: -[YYYArchive extractFailed]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__extractFailed(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e70c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d464e8)();
  return;
}



/* -[YYYArchive extractFinished] | 0x1001e7270 | ABI v16@0:8 */

/* Address: 0x1001e7270 | YYYArchive::YYYArchive__instance__extractFinished | bytes: 56 */

/* Recovered runtime selector: -[YYYArchive extractFinished]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__extractFinished(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e72a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d465f8)();
  return;
}



/* -[YYYArchive initWithFilePath:] | 0x1001e3240 | ABI @24@0:8@16 */

/* Address: 0x1001e3240 | YYYArchive::YYYArchive__instance__initWithFilePath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYArchive initWithFilePath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__initWithFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e3260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d44a70)();
  return IVar1;
}



/* -[YYYArchive getPasswordCompletion:] | 0x1001e3504 | ABI v24@0:8@?16 */

/* Address: 0x1001e3504 | YYYArchive::YYYArchive__instance__getPasswordCompletion_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive getPasswordCompletion:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__getPasswordCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e3528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d44bd0)();
  return;
}



/* -[YYYArchive decompress] | 0x1001e37c4 | ABI v16@0:8 */

/* Address: 0x1001e37c4 | YYYArchive::YYYArchive__instance__decompress | bytes: 48 */

/* Recovered runtime selector: -[YYYArchive decompress]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__decompress(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e37f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d44d20)(0x100e9194c);
  return;
}



/* -[YYYArchive decompressZip] | 0x1001e3ebc | ABI v16@0:8 */

/* Address: 0x1001e3ebc | YYYArchive::YYYArchive__instance__decompressZip | bytes: 60 */

/* Recovered runtime selector: -[YYYArchive decompressZip]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__decompressZip(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e3ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d44fd8)();
  return;
}



/* -[YYYArchive releaseAll] | 0x1001e45cc | ABI v16@0:8 */

/* Address: 0x1001e45cc | YYYArchive::YYYArchive__instance__releaseAll | bytes: 28 */

/* Recovered runtime selector: -[YYYArchive releaseAll]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__releaseAll(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e45e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d45200)();
  return;
}



/* -[YYYArchive destinationPath] | 0x1001e4694 | ABI @16@0:8 */

/* Address: 0x1001e4694 | YYYArchive::YYYArchive__instance__destinationPath | bytes: 32 */

/* Recovered runtime selector: -[YYYArchive destinationPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__destinationPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d45260)();
  return IVar1;
}



/* -[YYYArchive filePath] | 0x1001e47ec | ABI @16@0:8 */

/* Address: 0x1001e47ec | YYYArchive::YYYArchive__instance__filePath | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive filePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__filePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e47f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d45320)();
  return IVar1;
}



/* -[YYYArchive setFilePath:] | 0x1001e4818 | ABI v24@0:8@16 */

/* Address: 0x1001e4818 | YYYArchive::YYYArchive__instance__setFilePath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive setFilePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setFilePath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e483c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45350)();
  return;
}



/* -[YYYArchive setDestinationPath:] | 0x1001e489c | ABI v24@0:8@16 */

/* Address: 0x1001e489c | YYYArchive::YYYArchive__instance__setDestinationPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive setDestinationPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setDestinationPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e48c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45398)();
  return;
}



/* -[YYYArchive password] | 0x1001e4920 | ABI @16@0:8 */

/* Address: 0x1001e4920 | YYYArchive::YYYArchive__instance__password | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive password]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__password(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d453d0)();
  return IVar1;
}



/* -[YYYArchive setPassword:] | 0x1001e4940 | ABI v24@0:8@16 */

/* Address: 0x1001e4940 | YYYArchive::YYYArchive__instance__setPassword_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive setPassword:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setPassword_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d453f0)();
  return;
}



/* -[YYYArchive type] | 0x1001e4960 | ABI Q16@0:8 */

/* Address: 0x1001e4960 | YYYArchive::YYYArchive__instance__type | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive type]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long YYYArchive::YYYArchive__instance__type(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d45418)();
  return uVar1;
}



/* -[YYYArchive setType:] | 0x1001e4974 | ABI v24@0:8Q16 */

/* Address: 0x1001e4974 | YYYArchive::YYYArchive__instance__setType_ | bytes: 16 */

/* Recovered runtime selector: -[YYYArchive setType:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setType_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0001001e4980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45428)();
  return;
}



/* -[YYYArchive progress] | 0x1001e4994 | ABI @?16@0:8 */

/* Address: 0x1001e4994 | YYYArchive::YYYArchive__instance__progress | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive progress]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__progress(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e499c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d45448)();
  return IVar1;
}



/* -[YYYArchive setProgress:] | 0x1001e49b4 | ABI v24@0:8@?16 */

/* Address: 0x1001e49b4 | YYYArchive::YYYArchive__instance__setProgress_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive setProgress:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setProgress_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e49d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45468)();
  return;
}



/* -[YYYArchive completion] | 0x1001e4a2c | ABI @?16@0:8 */

/* Address: 0x1001e4a2c | YYYArchive::YYYArchive__instance__completion | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive completion]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__completion(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d45490)();
  return IVar1;
}



/* -[YYYArchive setCompletion:] | 0x1001e4a4c | ABI v24@0:8@?16 */

/* Address: 0x1001e4a4c | YYYArchive::YYYArchive__instance__setCompletion_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive setCompletion:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d454b0)();
  return;
}



/* -[YYYArchive setupPasswordBlock] | 0x1001e4ac4 | ABI @?16@0:8 */

/* Address: 0x1001e4ac4 | YYYArchive::YYYArchive__instance__setupPasswordBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive setupPasswordBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__setupPasswordBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d454e0)();
  return IVar1;
}



/* -[YYYArchive setSetupPasswordBlock:] | 0x1001e4af4 | ABI v24@0:8@?16 */

/* Address: 0x1001e4af4 | YYYArchive::YYYArchive__instance__setSetupPasswordBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYArchive setSetupPasswordBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setSetupPasswordBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45510)();
  return;
}



/* -[YYYArchive XADarchiver] | 0x1001e4b60 | ABI @16@0:8 */

/* Address: 0x1001e4b60 | YYYArchive::YYYArchive__instance__XADarchiver | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive XADarchiver]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYArchive::YYYArchive__instance__XADarchiver(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d45530)();
  return IVar1;
}



/* -[YYYArchive setXADarchiver:] | 0x1001e4b74 | ABI v24@0:8@16 */

/* Address: 0x1001e4b74 | YYYArchive::YYYArchive__instance__setXADarchiver_ | bytes: 28 */

/* Recovered runtime selector: -[YYYArchive setXADarchiver:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setXADarchiver_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45540)();
  return;
}



/* -[YYYArchive cancel] | 0x1001e4bdc | ABI B16@0:8 */

/* Address: 0x1001e4bdc | YYYArchive::YYYArchive__instance__cancel | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive cancel]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__instance__cancel(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d45588)((int)param_1);
  return bVar1;
}



/* -[YYYArchive setCancel:] | 0x1001e4c10 | ABI v20@0:8B16 */

/* Address: 0x1001e4c10 | YYYArchive::YYYArchive__instance__setCancel_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive setCancel:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setCancel_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d455b8)(param_1,param_2,param_3);
  return;
}



/* -[YYYArchive needInputPassword] | 0x1001e4c30 | ABI B16@0:8 */

/* Address: 0x1001e4c30 | YYYArchive::YYYArchive__instance__needInputPassword | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive needInputPassword]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__instance__needInputPassword(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d455d0)((int)param_1);
  return bVar1;
}



/* -[YYYArchive setNeedInputPassword:] | 0x1001e4c5c | ABI v20@0:8B16 */

/* Address: 0x1001e4c5c | YYYArchive::YYYArchive__instance__setNeedInputPassword_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive setNeedInputPassword:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setNeedInputPassword_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4c64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45600)(param_1,param_2,param_3);
  return;
}



/* -[YYYArchive isAskPassword] | 0x1001e4c7c | ABI B16@0:8 */

/* Address: 0x1001e4c7c | YYYArchive::YYYArchive__instance__isAskPassword | bytes: 16 */

/* Recovered runtime selector: -[YYYArchive isAskPassword]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__instance__isAskPassword(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e4c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d45620)(*(undefined1 *)(param_1 + 10));
  return bVar1;
}



/* -[YYYArchive setIsAskPassword:] | 0x1001e4ca4 | ABI v20@0:8B16 */

/* Address: 0x1001e4ca4 | YYYArchive::YYYArchive__instance__setIsAskPassword_ | bytes: 12 */

/* Recovered runtime selector: -[YYYArchive setIsAskPassword:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance__setIsAskPassword_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45648)(param_1,param_2,param_3);
  return;
}



/* -[YYYArchive .cxx_destruct] | 0x1001e4cd0 | ABI v16@0:8 */

/* Address: 0x1001e4cd0 | YYYArchive::YYYArchive__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYArchive .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::YYYArchive__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e4ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d45670)();
  return;
}



/* +[YYYArchive isArchiveFile:] | 0x1001e1e8c | ABI B24@0:8@16 */

/* Address: 0x1001e1e8c | YYYArchive::YYYArchive__class__isArchiveFile_ | bytes: 40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: +[YYYArchive isArchiveFile:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__class__isArchiveFile_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e1eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d444a8)(param_3);
  return bVar1;
}



/* +[YYYArchive isFilePasswordProtectedAtPath:] | 0x1001e2038 | ABI B24@0:8@16 */

/* Address: 0x1001e2038 | YYYArchive::YYYArchive__class__isFilePasswordProtectedAtPath_ | bytes: 36 */

/* Recovered runtime selector: +[YYYArchive isFilePasswordProtectedAtPath:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYArchive::YYYArchive__class__isFilePasswordProtectedAtPath_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e2058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100d445d0)((int)param_1);
  return bVar1;
}



/* +[YYYArchive decompressFileAtPath:toDestination:password:progressHandler:completionHandler:] | 0x1001e2164 | ABI v56@0:8@16@24@32@?40@?48 */

/* Address: 0x1001e2164 | YYYArchive::YYYArchive__class__decompressFileAtPath_toDestination_password_progressHandler_completionHandler_ | bytes: 92 */

/* Recovered runtime selector: +[YYYArchive
   decompressFileAtPath:toDestination:password:progressHandler:completionHandler:]
   Original ABI encoding: v56@0:8@16@24@32@?40@?48
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::
     YYYArchive__class__decompressFileAtPath_toDestination_password_progressHandler_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7,ID param_8,undefined4 param_9)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e21bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d44668)(0x100e91944,param_3);
  return;
}



/* +[YYYArchive decompressFileAtPath:toDestination:passwordBlock:progressHandler:completionHandler:] | 0x1001e2a0c | ABI v56@0:8@16@24@?32@?40@?48 */

/* Address: 0x1001e2a0c | YYYArchive::YYYArchive__class__decompressFileAtPath_toDestination_passwordBlock_progressHandler_completionHandler_ | bytes: 88 */

/* Recovered runtime selector: +[YYYArchive
   decompressFileAtPath:toDestination:passwordBlock:progressHandler:completionHandler:]
   Original ABI encoding: v56@0:8@16@24@?32@?40@?48
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYArchive::
     YYYArchive__class__decompressFileAtPath_toDestination_passwordBlock_progressHandler_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6,
               ID param_7,undefined4 param_8,ID param_9,undefined4 param_10)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e2a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d44838)(0x100e91948,param_3);
  return;
}


