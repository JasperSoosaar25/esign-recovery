/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWebDAVManager | class address: 0x100c81530
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWebDAVManager init] | 0x10038192c | ABI @16@0:8 */

/* Address: 0x10038192c | YYYWebDAVManager::YYYWebDAVManager__instance__init | bytes: 48 */

/* Recovered runtime selector: -[YYYWebDAVManager init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100381958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcf760)();
  return IVar1;
}



/* -[YYYWebDAVManager urlForPath:] | 0x100381bd8 | ABI @24@0:8@16 */

/* Address: 0x100381bd8 | YYYWebDAVManager::YYYWebDAVManager__instance__urlForPath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWebDAVManager urlForPath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__urlForPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100381bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dcf820)();
  return IVar1;
}



/* -[YYYWebDAVManager fileListWithPath:completion:] | 0x100381d20 | ABI v32@0:8@16@?24 */

/* Address: 0x100381d20 | YYYWebDAVManager::YYYWebDAVManager__instance__fileListWithPath_completion_ | bytes: 68 */

/* Recovered runtime selector: -[YYYWebDAVManager fileListWithPath:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__fileListWithPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100381d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dcf880)();
  return;
}



/* -[YYYWebDAVManager removeItemWithPath:completion:] | 0x100382c18 | ABI v32@0:8@16@?24 */

/* Address: 0x100382c18 | YYYWebDAVManager::YYYWebDAVManager__instance__removeItemWithPath_completion_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWebDAVManager removeItemWithPath:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__removeItemWithPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100382c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcf948)();
  return;
}



/* -[YYYWebDAVManager createDirectoryWithPath:completion:] | 0x100382ea4 | ABI v32@0:8@16@?24 */

/* Address: 0x100382ea4 | YYYWebDAVManager::YYYWebDAVManager__instance__createDirectoryWithPath_completion_ | bytes: 52 */

/* Recovered runtime selector: -[YYYWebDAVManager createDirectoryWithPath:completion:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__createDirectoryWithPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100382ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcf998)(0x100e923dc);
  return;
}



/* -[YYYWebDAVManager copyItemWithPath:toPath:completion:] | 0x100383170 | ABI v40@0:8@16@24@?32 */

/* Address: 0x100383170 | YYYWebDAVManager::YYYWebDAVManager__instance__copyItemWithPath_toPath_completion_ | bytes: 68 */

/* Recovered runtime selector: -[YYYWebDAVManager copyItemWithPath:toPath:completion:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__copyItemWithPath_toPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003831b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcfa38)();
  return;
}



/* -[YYYWebDAVManager moveItemWithPath:toPath:completion:] | 0x10038375c | ABI v40@0:8@16@24@?32 */

/* Address: 0x10038375c | YYYWebDAVManager::YYYWebDAVManager__instance__moveItemWithPath_toPath_completion_ | bytes: 72 */

/* Recovered runtime selector: -[YYYWebDAVManager moveItemWithPath:toPath:completion:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__moveItemWithPath_toPath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003837a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dcfaf0)();
  return;
}



/* -[YYYWebDAVManager uploadFileWithPath:fileUrl:progressBlock:completion:] | 0x100383da4 | ABI v48@0:8@16@24@?32@?40 */

/* Address: 0x100383da4 | YYYWebDAVManager::YYYWebDAVManager__instance__uploadFileWithPath_fileUrl_progressBlock_completion_ | bytes: 56 */

/* Recovered runtime selector: -[YYYWebDAVManager
   uploadFileWithPath:fileUrl:progressBlock:completion:]
   Original ABI encoding: v48@0:8@16@24@?32@?40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::
     YYYWebDAVManager__instance__uploadFileWithPath_fileUrl_progressBlock_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6,
               ID param_7,undefined4 param_8)

{
                    /* WARNING: Could not recover jumptable at 0x000100383dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcfbb0)();
  return;
}



/* -[YYYWebDAVManager URLSession:didReceiveChallenge:completionHandler:] | 0x100384cd0 | ABI v40@0:8@16@24@?32 */

/* Address: 0x100384cd0 | YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_didReceiveChallenge_completionHandler_ | bytes: 52 */

/* Recovered runtime selector: -[YYYWebDAVManager URLSession:didReceiveChallenge:completionHandler:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_didReceiveChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000100384d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcfd20)();
  return;
}



/* -[YYYWebDAVManager URLSession:task:didReceiveChallenge:completionHandler:] | 0x100384fe0 | ABI v48@0:8@16@24@32@?40 */

/* Address: 0x100384fe0 | YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_task_didReceiveChallenge_completionHandler_ | bytes: 56 */

/* Recovered runtime selector: -[YYYWebDAVManager
   URLSession:task:didReceiveChallenge:completionHandler:]
   Original ABI encoding: v48@0:8@16@24@32@?40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::
     YYYWebDAVManager__instance__URLSession_task_didReceiveChallenge_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000100385014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dcfef8)();
  return;
}



/* -[YYYWebDAVManager URLSession:dataTask:didReceiveResponse:completionHandler:] | 0x100385374 | ABI v48@0:8@16@24@32@?40 */

/* Address: 0x100385374 | YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_dataTask_didReceiveResponse_completionHandler_ | bytes: 56 */

/* Recovered runtime selector: -[YYYWebDAVManager
   URLSession:dataTask:didReceiveResponse:completionHandler:]
   Original ABI encoding: v48@0:8@16@24@32@?40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::
     YYYWebDAVManager__instance__URLSession_dataTask_didReceiveResponse_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0001003853a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd00f0)();
  return;
}



/* -[YYYWebDAVManager URLSession:dataTask:didReceiveData:] | 0x1003855ac | ABI v40@0:8@16@24@32 */

/* Address: 0x1003855ac | YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_dataTask_didReceiveData_ | bytes: 180 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYWebDAVManager URLSession:dataTask:didReceiveData:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_dataTask_didReceiveData_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::dataCacheDic(param_1);
  IVar2 = objc_stub::taskDescription(param_4);
  IVar1 = objc_stub::objectForKeyedSubscript_(IVar1,IVar2);
  IVar1 = objc_stub::FUN_10095c560(IVar1);
                    /* WARNING: Could not recover jumptable at 0x00010038565c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd01b8)(IVar1);
  return;
}



/* -[YYYWebDAVManager URLSession:task:didCompleteWithError:] | 0x100385700 | ABI v40@0:8@16@24@32 */

/* Address: 0x100385700 | YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_task_didCompleteWithError_ | bytes: 88 */

/* Recovered runtime selector: -[YYYWebDAVManager URLSession:task:didCompleteWithError:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__URLSession_task_didCompleteWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100385754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dd01f8)(0x100e923ec);
  return;
}



/* -[YYYWebDAVManager timeout] | 0x1003868ec | ABI q16@0:8 */

/* Address: 0x1003868ec | YYYWebDAVManager::YYYWebDAVManager__instance__timeout | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager timeout]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__timeout(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001003868f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd0560)(param_1);
  return;
}



/* -[YYYWebDAVManager setTimeout:] | 0x100386918 | ABI v24@0:8q16 */

/* Address: 0x100386918 | YYYWebDAVManager::YYYWebDAVManager__instance__setTimeout_ | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager setTimeout:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setTimeout_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100386920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd0598)();
  return;
}



/* -[YYYWebDAVManager username] | 0x100386954 | ABI @16@0:8 */

/* Address: 0x100386954 | YYYWebDAVManager::YYYWebDAVManager__instance__username | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager username]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__username(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010038695c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd05c0)();
  return IVar1;
}



/* -[YYYWebDAVManager setUsername:] | 0x100386980 | ABI v24@0:8@16 */

/* Address: 0x100386980 | YYYWebDAVManager::YYYWebDAVManager__instance__setUsername_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWebDAVManager setUsername:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setUsername_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003869a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd05f0)();
  return;
}



/* -[YYYWebDAVManager password] | 0x100386a04 | ABI @16@0:8 */

/* Address: 0x100386a04 | YYYWebDAVManager::YYYWebDAVManager__instance__password | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager password]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__password(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100386a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd0630)();
  return IVar1;
}



/* -[YYYWebDAVManager setPassword:] | 0x100386a30 | ABI v24@0:8@16 */

/* Address: 0x100386a30 | YYYWebDAVManager::YYYWebDAVManager__instance__setPassword_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWebDAVManager setPassword:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setPassword_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100386a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dd0660)();
  return;
}



/* -[YYYWebDAVManager baseUrl] | 0x100386a9c | ABI @16@0:8 */

/* Address: 0x100386a9c | YYYWebDAVManager::YYYWebDAVManager__instance__baseUrl | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager baseUrl]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__baseUrl(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100386aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd0688)();
  return IVar1;
}



/* -[YYYWebDAVManager setBaseUrl:] | 0x100386abc | ABI v24@0:8@16 */

/* Address: 0x100386abc | YYYWebDAVManager::YYYWebDAVManager__instance__setBaseUrl_ | bytes: 8 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Recovered runtime selector: -[YYYWebDAVManager setBaseUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setBaseUrl_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x20) = param_3;
  return;
}



/* -[YYYWebDAVManager session] | 0x100386ac4 | ABI @16@0:8 */

/* Address: 0x100386ac4 | YYYWebDAVManager::YYYWebDAVManager__instance__session | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager session]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__session(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100386acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd06a8)();
  return IVar1;
}



/* -[YYYWebDAVManager setSession:] | 0x100386ae4 | ABI v24@0:8@16 */

/* Address: 0x100386ae4 | YYYWebDAVManager::YYYWebDAVManager__instance__setSession_ | bytes: 16 */

/* Recovered runtime selector: -[YYYWebDAVManager setSession:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setSession_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100386af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd06c8)(param_1,param_3);
  return;
}



/* -[YYYWebDAVManager queue] | 0x100386afc | ABI @16@0:8 */

/* Address: 0x100386afc | YYYWebDAVManager::YYYWebDAVManager__instance__queue | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager queue]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__queue(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100386b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd06d8)();
  return IVar1;
}



/* -[YYYWebDAVManager setQueue:] | 0x100386b1c | ABI v24@0:8@16 */

/* Address: 0x100386b1c | YYYWebDAVManager::YYYWebDAVManager__instance__setQueue_ | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVManager setQueue:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setQueue_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100386b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd06f8)();
  return;
}



/* -[YYYWebDAVManager dataCacheDic] | 0x100386b7c | ABI @16@0:8 */

/* Address: 0x100386b7c | YYYWebDAVManager::YYYWebDAVManager__instance__dataCacheDic | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVManager dataCacheDic]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVManager::YYYWebDAVManager__instance__dataCacheDic(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100386b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dd0728)();
  return IVar1;
}



/* -[YYYWebDAVManager setDataCacheDic:] | 0x100386b90 | ABI v24@0:8@16 */

/* Address: 0x100386b90 | YYYWebDAVManager::YYYWebDAVManager__instance__setDataCacheDic_ | bytes: 32 */

/* Recovered runtime selector: -[YYYWebDAVManager setDataCacheDic:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance__setDataCacheDic_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100386bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dd0738)();
  return;
}



/* -[YYYWebDAVManager .cxx_destruct] | 0x100386c00 | ABI v16@0:8 */

/* Address: 0x100386c00 | YYYWebDAVManager::YYYWebDAVManager__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVManager .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVManager::YYYWebDAVManager__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100386c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dd0760)();
  return;
}


