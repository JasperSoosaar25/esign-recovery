/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWebDAVRequest | class address: 0x100c7fa10
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWebDAVRequest observeValueForKeyPath:ofObject:change:context:] | 0x100252e18 | ABI v48@0:8@16@24@32^v40 */

/* Address: 0x100252e18 | YYYWebDAVRequest::YYYWebDAVRequest__instance__observeValueForKeyPath_ofObject_change_context_ | bytes: 68 */

/* Recovered runtime selector: -[YYYWebDAVRequest observeValueForKeyPath:ofObject:change:context:]
   Original ABI encoding: v48@0:8@16@24@32^v40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000100252e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69d28)();
  return;
}



/* -[YYYWebDAVRequest dealloc] | 0x100252fe0 | ABI v16@0:8 */

/* Address: 0x100252fe0 | YYYWebDAVRequest::YYYWebDAVRequest__instance__dealloc | bytes: 56 */

/* Recovered runtime selector: -[YYYWebDAVRequest dealloc]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__dealloc(ID param_1,SEL param_2)

{
  objc_super oStack_20;
  
  oStack_20.super_class = &objc::class_t::YYYWebDAVRequest;
  oStack_20.receiver = param_1;
  _objc_msgSendSuper2(&oStack_20,"dealloc");
  return;
}



/* -[YYYWebDAVRequest request] | 0x100253018 | ABI @16@0:8 */

/* Address: 0x100253018 | YYYWebDAVRequest::YYYWebDAVRequest__instance__request | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVRequest request]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVRequest::YYYWebDAVRequest__instance__request(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100253020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69dc0)();
  return IVar1;
}



/* -[YYYWebDAVRequest setRequest:] | 0x100253044 | ABI v24@0:8@16 */

/* Address: 0x100253044 | YYYWebDAVRequest::YYYWebDAVRequest__instance__setRequest_ | bytes: 12 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYWebDAVRequest setRequest:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__setRequest_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* -[YYYWebDAVRequest responseData] | 0x100253050 | ABI @16@0:8 */

/* Address: 0x100253050 | YYYWebDAVRequest::YYYWebDAVRequest__instance__responseData | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVRequest responseData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVRequest::YYYWebDAVRequest__instance__responseData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100253058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69df0)();
  return IVar1;
}



/* -[YYYWebDAVRequest setResponseData:] | 0x10025307c | ABI v24@0:8@16 */

/* Address: 0x10025307c | YYYWebDAVRequest::YYYWebDAVRequest__instance__setResponseData_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWebDAVRequest setResponseData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__setResponseData_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010025309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69e28)();
  return;
}



/* -[YYYWebDAVRequest completion] | 0x10025310c | ABI @?16@0:8 */

/* Address: 0x10025310c | YYYWebDAVRequest::YYYWebDAVRequest__instance__completion | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVRequest completion]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVRequest::YYYWebDAVRequest__instance__completion(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100253114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69e78)();
  return IVar1;
}



/* -[YYYWebDAVRequest setCompletion:] | 0x100253138 | ABI v24@0:8@?16 */

/* Address: 0x100253138 | YYYWebDAVRequest::YYYWebDAVRequest__instance__setCompletion_ | bytes: 20 */

/* Recovered runtime selector: -[YYYWebDAVRequest setCompletion:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__setCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100253148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69ea0)();
  return;
}



/* -[YYYWebDAVRequest progressBlock] | 0x100253168 | ABI @?16@0:8 */

/* Address: 0x100253168 | YYYWebDAVRequest::YYYWebDAVRequest__instance__progressBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVRequest progressBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVRequest::YYYWebDAVRequest__instance__progressBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100253170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69ec8)();
  return IVar1;
}



/* -[YYYWebDAVRequest setProgressBlock:] | 0x100253194 | ABI v24@0:8@?16 */

/* Address: 0x100253194 | YYYWebDAVRequest::YYYWebDAVRequest__instance__setProgressBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYWebDAVRequest setProgressBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance__setProgressBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001002531b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69ef8)();
  return;
}



/* -[YYYWebDAVRequest .cxx_destruct] | 0x10025320c | ABI v16@0:8 */

/* Address: 0x10025320c | YYYWebDAVRequest::YYYWebDAVRequest__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVRequest .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVRequest::YYYWebDAVRequest__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100253224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69f20)();
  return;
}


