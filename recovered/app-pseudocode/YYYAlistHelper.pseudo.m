/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYAlistHelper | class address: 0x100c81e10
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYAlistHelper requestForMethod:path:header:param:] | 0x1003dbc94 | ABI @48@0:8@16@24@32@40 */

/* Address: 0x1003dbc94 | YYYAlistHelper::YYYAlistHelper__instance__requestForMethod_path_header_param_ | bytes: 68 */

/* Recovered runtime selector: -[YYYAlistHelper requestForMethod:path:header:param:]
   Original ABI encoding: @48@0:8@16@24@32@40
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__instance__requestForMethod_path_header_param_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003dbcd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df0660)(0x100e925e4);
  return IVar1;
}



/* -[YYYAlistHelper checkUrl:password:completionHandler:] | 0x1003dccf8 | ABI v40@0:8@16@24@?32 */

/* Address: 0x1003dccf8 | YYYAlistHelper::YYYAlistHelper__instance__checkUrl_password_completionHandler_ | bytes: 64 */

/* Recovered runtime selector: -[YYYAlistHelper checkUrl:password:completionHandler:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__checkUrl_password_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003dcd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df0c18)(0x100e925ec);
  return;
}



/* -[YYYAlistHelper getFileListWithFolder:page:completionHandler:] | 0x1003de7c8 | ABI v40@0:8@16q24@?32 */

/* Address: 0x1003de7c8 | YYYAlistHelper::YYYAlistHelper__instance__getFileListWithFolder_page_completionHandler_ | bytes: 60 */

/* Recovered runtime selector: -[YYYAlistHelper getFileListWithFolder:page:completionHandler:]
   Original ABI encoding: v40@0:8@16q24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__getFileListWithFolder_page_completionHandler_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003de800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df1310)(0x100e925f4);
  return;
}



/* -[YYYAlistHelper getFolderListWithFolder:completionHandler:] | 0x1003dfb04 | ABI v32@0:8@16@?24 */

/* Address: 0x1003dfb04 | YYYAlistHelper::YYYAlistHelper__instance__getFolderListWithFolder_completionHandler_ | bytes: 64 */

/* Recovered runtime selector: -[YYYAlistHelper getFolderListWithFolder:completionHandler:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__getFolderListWithFolder_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001003dfb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df1890)();
  return;
}



/* -[YYYAlistHelper uploadFile:progressBlock:completionHandler:] | 0x1003e09c8 | ABI v40@0:8@16@?24@?32 */

/* Address: 0x1003e09c8 | YYYAlistHelper::YYYAlistHelper__instance__uploadFile_progressBlock_completionHandler_ | bytes: 28 */

/* Recovered runtime selector: -[YYYAlistHelper uploadFile:progressBlock:completionHandler:]
   Original ABI encoding: v40@0:8@16@?24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__uploadFile_progressBlock_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5,ID param_6,
               undefined4 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e09e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df1db0)();
  return;
}



/* -[YYYAlistHelper uploadFile:toFolder:progressBlock:completionHandler:] | 0x1003e0ad4 | ABI v48@0:8@16@24@?32@?40 */

/* Address: 0x1003e0ad4 | YYYAlistHelper::YYYAlistHelper__instance__uploadFile_toFolder_progressBlock_completionHandler_ | bytes: 76 */

/* Recovered runtime selector: -[YYYAlistHelper
   uploadFile:toFolder:progressBlock:completionHandler:]
   Original ABI encoding: v48@0:8@16@24@?32@?40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__uploadFile_toFolder_progressBlock_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6,
               ID param_7,undefined4 param_8)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e0b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df1e48)(0x100e92608);
  return;
}



/* -[YYYAlistHelper observeValueForKeyPath:ofObject:change:context:] | 0x1003e3a98 | ABI v48@0:8@16@24@32^v40 */

/* Address: 0x1003e3a98 | YYYAlistHelper::YYYAlistHelper__instance__observeValueForKeyPath_ofObject_change_context_ | bytes: 60 */

/* Recovered runtime selector: -[YYYAlistHelper observeValueForKeyPath:ofObject:change:context:]
   Original ABI encoding: v48@0:8@16@24@32^v40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e3ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df2468)();
  return;
}



/* -[YYYAlistHelper deleteFiles:atFolder:completionHandler:] | 0x1003e3cd8 | ABI v40@0:8@16@24@?32 */

/* Address: 0x1003e3cd8 | YYYAlistHelper::YYYAlistHelper__instance__deleteFiles_atFolder_completionHandler_ | bytes: 80 */

/* Recovered runtime selector: -[YYYAlistHelper deleteFiles:atFolder:completionHandler:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__deleteFiles_atFolder_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e3d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df2560)(0x100e92610);
  return;
}



/* -[YYYAlistHelper renamePath:newName:completionHandler:] | 0x1003e4d14 | ABI v40@0:8@16@24@?32 */

/* Address: 0x1003e4d14 | YYYAlistHelper::YYYAlistHelper__instance__renamePath_newName_completionHandler_ | bytes: 88 */

/* Recovered runtime selector: -[YYYAlistHelper renamePath:newName:completionHandler:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__renamePath_newName_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e4d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df2a28)(DAT_100e92618);
  return;
}



/* -[YYYAlistHelper createFolder:completionHandler:] | 0x1003e5eb4 | ABI v32@0:8@16@?24 */

/* Address: 0x1003e5eb4 | YYYAlistHelper::YYYAlistHelper__instance__createFolder_completionHandler_ | bytes: 80 */

/* Recovered runtime selector: -[YYYAlistHelper createFolder:completionHandler:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__createFolder_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e5f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df2f90)(0x100e92620);
  return;
}



/* -[YYYAlistHelper setPassword:] | 0x1003e6e14 | ABI v24@0:8@16 */

/* Address: 0x1003e6e14 | YYYAlistHelper::YYYAlistHelper__instance__setPassword_ | bytes: 36 */

/* Recovered runtime selector: -[YYYAlistHelper setPassword:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__setPassword_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e6e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df34a0)();
  return;
}



/* -[YYYAlistHelper setBaseUrl:] | 0x1003e713c | ABI v24@0:8@16 */

/* Address: 0x1003e713c | YYYAlistHelper::YYYAlistHelper__instance__setBaseUrl_ | bytes: 44 */

/* Recovered runtime selector: -[YYYAlistHelper setBaseUrl:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__setBaseUrl_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e7164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df3590)(0x100e9262c);
  return;
}



/* -[YYYAlistHelper isLogin] | 0x1003e7300 | ABI B16@0:8 */

/* Address: 0x1003e7300 | YYYAlistHelper::YYYAlistHelper__instance__isLogin | bytes: 36 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYAlistHelper isLogin]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYAlistHelper::YYYAlistHelper__instance__isLogin(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::token(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001003e7320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100df3650)(IVar2);
  return bVar1;
}



/* -[YYYAlistHelper logout] | 0x1003e7340 | ABI v16@0:8 */

/* Address: 0x1003e7340 | YYYAlistHelper::YYYAlistHelper__instance__logout | bytes: 40 */

/* Recovered runtime selector: -[YYYAlistHelper logout]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__logout(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e7364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df3660)();
  return;
}



/* -[YYYAlistHelper token] | 0x1003e76f4 | ABI @16@0:8 */

/* Address: 0x1003e76f4 | YYYAlistHelper::YYYAlistHelper__instance__token | bytes: 16 */

/* Recovered runtime selector: -[YYYAlistHelper token]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__instance__token(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003e7700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df3720)(*(undefined8 *)(param_1 + 8));
  return IVar1;
}



/* -[YYYAlistHelper setToken:] | 0x1003e7708 | ABI v24@0:8@16 */

/* Address: 0x1003e7708 | YYYAlistHelper::YYYAlistHelper__instance__setToken_ | bytes: 40 */

/* Recovered runtime selector: -[YYYAlistHelper setToken:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__setToken_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df3730)();
  return;
}



/* -[YYYAlistHelper baseUrl] | 0x1003e778c | ABI @16@0:8 */

/* Address: 0x1003e778c | YYYAlistHelper::YYYAlistHelper__instance__baseUrl | bytes: 12 */

/* Recovered runtime selector: -[YYYAlistHelper baseUrl]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__instance__baseUrl(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003e7794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df3768)();
  return IVar1;
}



/* -[YYYAlistHelper password] | 0x1003e77b8 | ABI @16@0:8 */

/* Address: 0x1003e77b8 | YYYAlistHelper::YYYAlistHelper__instance__password | bytes: 12 */

/* Recovered runtime selector: -[YYYAlistHelper password]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__instance__password(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003e77c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df3798)();
  return IVar1;
}



/* -[YYYAlistHelper progressBlock] | 0x1003e77e4 | ABI @?16@0:8 */

/* Address: 0x1003e77e4 | YYYAlistHelper::YYYAlistHelper__instance__progressBlock | bytes: 12 */

/* Recovered runtime selector: -[YYYAlistHelper progressBlock]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__instance__progressBlock(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003e77ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df37c8)();
  return IVar1;
}



/* -[YYYAlistHelper setProgressBlock:] | 0x1003e7804 | ABI v24@0:8@?16 */

/* Address: 0x1003e7804 | YYYAlistHelper::YYYAlistHelper__instance__setProgressBlock_ | bytes: 40 */

/* Recovered runtime selector: -[YYYAlistHelper setProgressBlock:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance__setProgressBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e7828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df37f0)();
  return;
}



/* -[YYYAlistHelper .cxx_destruct] | 0x1003e7888 | ABI v16@0:8 */

/* Address: 0x1003e7888 | YYYAlistHelper::YYYAlistHelper__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYAlistHelper .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYAlistHelper::YYYAlistHelper__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003e78a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df3828)();
  return;
}



/* +[YYYAlistHelper shared] | 0x1003dc56c | ABI @16@0:8 */

/* Address: 0x1003dc56c | YYYAlistHelper::YYYAlistHelper__class__shared | bytes: 24 */

/* Recovered runtime selector: +[YYYAlistHelper shared]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYAlistHelper::YYYAlistHelper__class__shared(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003dc580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df0970)();
  return IVar1;
}


