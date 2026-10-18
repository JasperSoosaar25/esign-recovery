/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWebServerFileResponse | class address: 0x100c7c798
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWebServerFileResponse initWithFile:byteRange:isAttachment:mimeTypeOverrides:] | 0x1000acccc | ABI @52@0:8@16{_NSRange=QQ}24B40@44 */

/* Address: 0x1000acccc | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__initWithFile_byteRange_isAttachment_mimeTypeOverrides_ | bytes: 88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYWebServerFileResponse
   initWithFile:byteRange:isAttachment:mimeTypeOverrides:]
   Original ABI encoding: @52@0:8@16{_NSRange=QQ}24B40@44
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebServerFileResponse::
   YYYWebServerFileResponse__instance__initWithFile_byteRange_isAttachment_mimeTypeOverrides_
             (ID param_1,SEL param_2,ID param_3,_NSRange param_4,bool param_5,ID param_6)

{
  ID IVar1;
  undefined8 in_x7;
  
                    /* WARNING: Could not recover jumptable at 0x0001000acd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdb880)
                    (param_6,param_2,param_3,param_4.field0_0x0,param_4.field1_0x8,param_5,param_6,
                     in_x7,param_1);
  return IVar1;
}



/* -[YYYWebServerFileResponse readData:] | 0x1000acea0 | ABI @24@0:8^@16 */

/* Address: 0x1000acea0 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__readData_ | bytes: 48 */

/* Recovered runtime selector: -[YYYWebServerFileResponse readData:]
   Original ABI encoding: @24@0:8^@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebServerFileResponse::YYYWebServerFileResponse__instance__readData_
             (ID param_1,SEL param_2,ID *param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000acecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdb960)();
  return IVar1;
}



/* -[YYYWebServerFileResponse close] | 0x1000ad1ac | ABI v16@0:8 */

/* Address: 0x1000ad1ac | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__close | bytes: 40 */

/* Recovered runtime selector: -[YYYWebServerFileResponse close]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

int YYYWebServerFileResponse::YYYWebServerFileResponse__instance__close(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ad1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR_LAB_100cdba98)(param_1);
  return iVar1;
}



/* -[YYYWebServerFileResponse filePath] | 0x1000ad330 | ABI @16@0:8 */

/* Address: 0x1000ad330 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__filePath | bytes: 12 */

/* Recovered runtime selector: -[YYYWebServerFileResponse filePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebServerFileResponse::YYYWebServerFileResponse__instance__filePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ad338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdbb58)();
  return IVar1;
}



/* -[YYYWebServerFileResponse setFilePath:] | 0x1000ad358 | ABI v24@0:8@16 */

/* Address: 0x1000ad358 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setFilePath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWebServerFileResponse setFilePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setFilePath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ad378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdbb70)();
  return;
}



/* -[YYYWebServerFileResponse progressBlock] | 0x1000ad3d0 | ABI @?16@0:8 */

/* Address: 0x1000ad3d0 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__progressBlock | bytes: 20 */

/* Recovered runtime selector: -[YYYWebServerFileResponse progressBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebServerFileResponse::YYYWebServerFileResponse__instance__progressBlock
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ad3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdbbb0)((long)_progressBlock);
  return IVar1;
}



/* -[YYYWebServerFileResponse setProgressBlock:] | 0x1000ad3ec | ABI v24@0:8@?16 */

/* Address: 0x1000ad3ec | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setProgressBlock_ | bytes: 48 */

/* Recovered runtime selector: -[YYYWebServerFileResponse setProgressBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setProgressBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ad418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdbbc0)();
  return;
}



/* -[YYYWebServerFileResponse finishBlock] | 0x1000ad46c | ABI @?16@0:8 */

/* Address: 0x1000ad46c | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__finishBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYWebServerFileResponse finishBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebServerFileResponse::YYYWebServerFileResponse__instance__finishBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ad474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdbbf8)();
  return IVar1;
}



/* -[YYYWebServerFileResponse setFinishBlock:] | 0x1000ad488 | ABI v24@0:8@?16 */

/* Address: 0x1000ad488 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setFinishBlock_ | bytes: 12 */

/* Recovered runtime selector: -[YYYWebServerFileResponse setFinishBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebServerFileResponse::YYYWebServerFileResponse__instance__setFinishBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ad490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdbc00)();
  return;
}



/* -[YYYWebServerFileResponse .cxx_destruct] | 0x1000ad4a0 | ABI v16@0:8 */

/* Address: 0x1000ad4a0 | YYYWebServerFileResponse::YYYWebServerFileResponse__instance___cxx_destruct | bytes: 36 */

/* Recovered runtime selector: -[YYYWebServerFileResponse .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebServerFileResponse::YYYWebServerFileResponse__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ad4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdbc10)();
  return;
}


