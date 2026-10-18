/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFileListViewController | class address: 0x100c7ceb8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFileListViewController createFolder] | 0x100118b64 | ABI v16@0:8 */

/* Address: 0x100118b64 | YYYFileListViewController::YYYFileListViewController__instance__createFolder | bytes: 48 */

/* Recovered runtime selector: -[YYYFileListViewController createFolder]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__createFolder
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100118b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d014a0)(DAT_100e91488);
  return;
}



/* -[YYYFileListViewController createFile] | 0x1001197cc | ABI v16@0:8 */

/* Address: 0x1001197cc | YYYFileListViewController::YYYFileListViewController__instance__createFile | bytes: 52 */

/* Recovered runtime selector: -[YYYFileListViewController createFile]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__createFile
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001197fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d01898)(0x100e91494);
  return;
}



/* -[YYYFileListViewController importFiles] | 0x100117380 | ABI v16@0:8 */

/* Address: 0x100117380 | YYYFileListViewController::YYYFileListViewController__instance__importFiles | bytes: 64 */

/* Recovered runtime selector: -[YYYFileListViewController importFiles]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__importFiles
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001173bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d00de0)(0x100e9147c);
  return;
}



/* -[YYYFileListViewController documentPicker:didPickDocumentsAtURLs:] | 0x100117a78 | ABI v32@0:8@16@24 */

/* Address: 0x100117a78 | YYYFileListViewController::YYYFileListViewController__instance__documentPicker_didPickDocumentsAtURLs_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController documentPicker:didPickDocumentsAtURLs:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__documentPicker_didPickDocumentsAtURLs_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100117aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d00fe0)(0x100e91480);
  return;
}



/* -[YYYFileListViewController showFolderViewWithFile:] | 0x1001105e0 | ABI v24@0:8@16 */

/* Address: 0x1001105e0 | YYYFileListViewController::YYYFileListViewController__instance__showFolderViewWithFile_ | bytes: 72 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileListViewController showFolderViewWithFile:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__showFolderViewWithFile_
               (ID param_1,SEL param_2,ID param_3)

{
  objc_stub::stringByDeletingLastPathComponent(param_3);
  _objc_alloc(&objc::class_t::YYYFileListViewController);
                    /* WARNING: Could not recover jumptable at 0x000100110624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cff180)();
  return;
}



/* -[YYYFileListViewController showPreviewWithFile:] | 0x10011070c | ABI v24@0:8@16 */

/* Address: 0x10011070c | YYYFileListViewController::YYYFileListViewController__instance__showPreviewWithFile_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController showPreviewWithFile:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__showPreviewWithFile_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100110740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cff1a0)();
  return;
}



/* -[YYYFileListViewController numberOfPreviewItemsInPreviewController:] | 0x1001171a0 | ABI q24@0:8@16 */

/* Address: 0x1001171a0 | YYYFileListViewController::YYYFileListViewController__instance__numberOfPreviewItemsInPreviewController_ | bytes: 60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFileListViewController numberOfPreviewItemsInPreviewController:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYFileListViewController::
          YYYFileListViewController__instance__numberOfPreviewItemsInPreviewController_
                    (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_1009544e0(param_1);
  IVar1 = objc_stub::count(IVar1);
  return IVar1;
}



/* -[YYYFileListViewController previewController:previewItemAtIndex:] | 0x1001171dc | ABI @32@0:8@16q24 */

/* Address: 0x1001171dc | YYYFileListViewController::YYYFileListViewController__instance__previewController_previewItemAtIndex_ | bytes: 56 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileListViewController previewController:previewItemAtIndex:]
   Original ABI encoding: @32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::
   YYYFileListViewController__instance__previewController_previewItemAtIndex_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::thunk_FUN_1009544e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100117210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d00d58)(IVar1);
  return IVar1;
}



/* -[YYYFileListViewController playerViewControllerWillStopPictureInPicture:] | 0x100117288 | ABI v24@0:8@16 */

/* Address: 0x100117288 | YYYFileListViewController::YYYFileListViewController__instance__playerViewControllerWillStopPictureInPicture_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFileListViewController
   playerViewControllerWillStopPictureInPicture:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__playerViewControllerWillStopPictureInPicture_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001172a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d00d80)();
  return;
}



/* -[YYYFileListViewController didDismissSearchController:] | 0x10010fa34 | ABI v24@0:8@16 */

/* Address: 0x10010fa34 | YYYFileListViewController::YYYFileListViewController__instance__didDismissSearchController_ | bytes: 32 */

/* Recovered runtime selector: -[YYYFileListViewController didDismissSearchController:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__didDismissSearchController_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfec60)();
  return;
}



/* -[YYYFileListViewController searchController:updateResultsForSearchString:] | 0x10010fafc | ABI v32@0:8@16@24 */

/* Address: 0x10010fafc | YYYFileListViewController::YYYFileListViewController__instance__searchController_updateResultsForSearchString_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileListViewController
   searchController:updateResultsForSearchString:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__searchController_updateResultsForSearchString_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010010fb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfecb0)(0x100e91464);
  return;
}



/* -[YYYFileListViewController unzipFile:] | 0x10010b524 | ABI v24@0:8@16 */

/* Address: 0x10010b524 | YYYFileListViewController::YYYFileListViewController__instance__unzipFile_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileListViewController unzipFile:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__unzipFile_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010b55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cfdcb8)();
  return;
}



/* -[YYYFileListViewController zipFile:] | 0x10010c8cc | ABI v24@0:8@16 */

/* Address: 0x10010c8cc | YYYFileListViewController::YYYFileListViewController__instance__zipFile_ | bytes: 52 */

/* Recovered runtime selector: -[YYYFileListViewController zipFile:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__zipFile_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010010c8fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfe1b0)();
  return;
}



/* -[YYYFileListViewController zipFiles:completionHandler:] | 0x10010d2d0 | ABI v32@0:8@16@?24 */

/* Address: 0x10010d2d0 | YYYFileListViewController::YYYFileListViewController__instance__zipFiles_completionHandler_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileListViewController zipFiles:completionHandler:]
   Original ABI encoding: v32@0:8@16@?24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__zipFiles_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010010d308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfe350)();
  return;
}



/* -[YYYFileListViewController zipFiles:password:completionHandler:] | 0x10010dbf0 | ABI v40@0:8@16@24@?32 */

/* Address: 0x10010dbf0 | YYYFileListViewController::YYYFileListViewController__instance__zipFiles_password_completionHandler_ | bytes: 64 */

/* Recovered runtime selector: -[YYYFileListViewController zipFiles:password:completionHandler:]
   Original ABI encoding: v40@0:8@16@24@?32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__zipFiles_password_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010010dc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfe558)();
  return;
}



/* -[YYYFileListViewController zipFile:password:] | 0x10010f010 | ABI v32@0:8@16@24 */

/* Address: 0x10010f010 | YYYFileListViewController::YYYFileListViewController__instance__zipFile_password_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController zipFile:password:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__zipFile_password_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010010f044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cfea50)(0x100e91460);
  return;
}



/* -[YYYFileListViewController viewDidLoad] | 0x1000af7f4 | ABI v16@0:8 */

/* Address: 0x1000af7f4 | YYYFileListViewController::YYYFileListViewController__instance__viewDidLoad | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000af828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdd5f8)();
  return;
}



/* -[YYYFileListViewController shouldCustomizeNavigationBarTransitionIfHideable] | 0x1000b0084 | ABI B16@0:8 */

/* Address: 0x1000b0084 | YYYFileListViewController::YYYFileListViewController__instance__shouldCustomizeNavigationBarTransitionIfHideable | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController
   shouldCustomizeNavigationBarTransitionIfHideable]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFileListViewController::
     YYYFileListViewController__instance__shouldCustomizeNavigationBarTransitionIfHideable
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000b008c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cdd7f8)((int)param_1);
  return bVar1;
}



/* -[YYYFileListViewController viewDidAppear:] | 0x1000b00b0 | ABI v20@0:8B16 */

/* Address: 0x1000b00b0 | YYYFileListViewController::YYYFileListViewController__instance__viewDidAppear_ | bytes: 48 */

/* Recovered runtime selector: -[YYYFileListViewController viewDidAppear:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdd820)(param_1,param_2,param_3);
  return;
}



/* -[YYYFileListViewController viewDidDisappear:] | 0x1000b0464 | ABI v20@0:8B16 */

/* Address: 0x1000b0464 | YYYFileListViewController::YYYFileListViewController__instance__viewDidDisappear_ | bytes: 44 */

/* Recovered runtime selector: -[YYYFileListViewController viewDidDisappear:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__viewDidDisappear_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b048c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdd918)(0x100e911f0,param_1,param_2,param_3);
  return;
}



/* -[YYYFileListViewController viewDidLayoutSubviews] | 0x1000b08e0 | ABI v16@0:8 */

/* Address: 0x1000b08e0 | YYYFileListViewController::YYYFileListViewController__instance__viewDidLayoutSubviews | bytes: 68 */

/* Recovered runtime selector: -[YYYFileListViewController viewDidLayoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b0920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cddad8)();
  return;
}



/* -[YYYFileListViewController initSubviews] | 0x1000b0ec4 | ABI v16@0:8 */

/* Address: 0x1000b0ec4 | YYYFileListViewController::YYYFileListViewController__instance__initSubviews | bytes: 84 */

/* Recovered runtime selector: -[YYYFileListViewController initSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__initSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b0f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cddda0)();
  return;
}



/* -[YYYFileListViewController finishItemHandle] | 0x1000b1ee0 | ABI v16@0:8 */

/* Address: 0x1000b1ee0 | YYYFileListViewController::YYYFileListViewController__instance__finishItemHandle | bytes: 32 */

/* Recovered runtime selector: -[YYYFileListViewController finishItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__finishItemHandle
               (ID param_1,SEL param_2)

{
  objc_stub::changeSelectState_(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001000b1efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cddee0)();
  return;
}



/* -[YYYFileListViewController selectAllItemHandle] | 0x1000b1f04 | ABI v16@0:8 */

/* Address: 0x1000b1f04 | YYYFileListViewController::YYYFileListViewController__instance__selectAllItemHandle | bytes: 48 */

/* Recovered runtime selector: -[YYYFileListViewController selectAllItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__selectAllItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b1f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cddef8)(0x100e911f8);
  return;
}



/* -[YYYFileListViewController moveItemHandle] | 0x1000b2874 | ABI v16@0:8 */

/* Address: 0x1000b2874 | YYYFileListViewController::YYYFileListViewController__instance__moveItemHandle | bytes: 68 */

/* Recovered runtime selector: -[YYYFileListViewController moveItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__moveItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b28b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cde2c0)();
  return;
}



/* -[YYYFileListViewController copyItemHandle] | 0x1000b2c80 | ABI v16@0:8 */

/* Address: 0x1000b2c80 | YYYFileListViewController::YYYFileListViewController__instance__copyItemHandle | bytes: 80 */

/* Recovered runtime selector: -[YYYFileListViewController copyItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__copyItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b2ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cde478)();
  return;
}



/* -[YYYFileListViewController zipItemHandle] | 0x1000b3014 | ABI v16@0:8 */

/* Address: 0x1000b3014 | YYYFileListViewController::YYYFileListViewController__instance__zipItemHandle | bytes: 68 */

/* Recovered runtime selector: -[YYYFileListViewController zipItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__zipItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b3054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cde5d8)();
  return;
}



/* -[YYYFileListViewController deleteItemHandle] | 0x1000b3624 | ABI v16@0:8 */

/* Address: 0x1000b3624 | YYYFileListViewController::YYYFileListViewController__instance__deleteItemHandle | bytes: 48 */

/* Recovered runtime selector: -[YYYFileListViewController deleteItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__deleteItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cde890)();
  return;
}



/* -[YYYFileListViewController menuItemHandle] | 0x1000b3fdc | ABI v16@0:8 */

/* Address: 0x1000b3fdc | YYYFileListViewController::YYYFileListViewController__instance__menuItemHandle | bytes: 32 */

/* Recovered runtime selector: -[YYYFileListViewController menuItemHandle]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__menuItemHandle
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b3ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdec20)();
  return;
}



/* -[YYYFileListViewController refreshState] | 0x1000b41c4 | ABI v16@0:8 */

/* Address: 0x1000b41c4 | YYYFileListViewController::YYYFileListViewController__instance__refreshState | bytes: 68 */

/* Recovered runtime selector: -[YYYFileListViewController refreshState]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__refreshState
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b4204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdece0)(0x100e91200);
  return;
}



/* -[YYYFileListViewController webUploaderHandler:] | 0x1000b4d88 | ABI v24@0:8@16 */

/* Address: 0x1000b4d88 | YYYFileListViewController::YYYFileListViewController__instance__webUploaderHandler_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileListViewController webUploaderHandler:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__webUploaderHandler_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b4dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdf0e8)();
  return;
}



/* -[YYYFileListViewController changeSelectState:] | 0x1000b5378 | ABI v20@0:8B16 */

/* Address: 0x1000b5378 | YYYFileListViewController::YYYFileListViewController__instance__changeSelectState_ | bytes: 52 */

/* Recovered runtime selector: -[YYYFileListViewController changeSelectState:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__changeSelectState_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b53a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cdf3c8)(param_1,param_2,param_3);
  return;
}



/* -[YYYFileListViewController setupPopupItems] | 0x1000b6048 | ABI v16@0:8 */

/* Address: 0x1000b6048 | YYYFileListViewController::YYYFileListViewController__instance__setupPopupItems | bytes: 80 */

/* Recovered runtime selector: -[YYYFileListViewController setupPopupItems]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setupPopupItems
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b6094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100cdf670)(0x100e9120c);
  return;
}



/* -[YYYFileListViewController moveOrCopyFiles:isMove:] | 0x1000b8480 | ABI v28@0:8@16B24 */

/* Address: 0x1000b8480 | YYYFileListViewController::YYYFileListViewController__instance__moveOrCopyFiles_isMove_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController moveOrCopyFiles:isMove:]
   Original ABI encoding: v28@0:8@16B24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__moveOrCopyFiles_isMove_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b84b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce04d8)();
  return;
}



/* -[YYYFileListViewController moveOrCopyFile:isMove:] | 0x1000b88f4 | ABI v28@0:8@16B24 */

/* Address: 0x1000b88f4 | YYYFileListViewController::YYYFileListViewController__instance__moveOrCopyFile_isMove_ | bytes: 72 */

/* Recovered runtime selector: -[YYYFileListViewController moveOrCopyFile:isMove:]
   Original ABI encoding: v28@0:8@16B24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__moveOrCopyFile_isMove_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100ce0680)();
  return;
}



/* -[YYYFileListViewController showRenameFileAlertAtIndexPath:tableView:] | 0x1000b8a4c | ABI v32@0:8@16@24 */

/* Address: 0x1000b8a4c | YYYFileListViewController::YYYFileListViewController__instance__showRenameFileAlertAtIndexPath_tableView_ | bytes: 64 */

/* Recovered runtime selector: -[YYYFileListViewController
   showRenameFileAlertAtIndexPath:tableView:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__showRenameFileAlertAtIndexPath_tableView_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000b8a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce06d0)(0x100e91214);
  return;
}



/* -[YYYFileListViewController loadFiles] | 0x1000ba198 | ABI v16@0:8 */

/* Address: 0x1000ba198 | YYYFileListViewController::YYYFileListViewController__instance__loadFiles | bytes: 40 */

/* Recovered runtime selector: -[YYYFileListViewController loadFiles]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__loadFiles
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ba1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce0cf0)();
  return;
}



/* -[YYYFileListViewController realReloadFiles] | 0x1000ba660 | ABI v16@0:8 */

/* Address: 0x1000ba660 | YYYFileListViewController::YYYFileListViewController__instance__realReloadFiles | bytes: 48 */

/* Recovered runtime selector: -[YYYFileListViewController realReloadFiles]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__realReloadFiles
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000ba68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce0f38)();
  return;
}



/* -[YYYFileListViewController reloadFiles] | 0x1000baa6c | ABI v16@0:8 */

/* Address: 0x1000baa6c | YYYFileListViewController::YYYFileListViewController__instance__reloadFiles | bytes: 40 */

/* Recovered runtime selector: -[YYYFileListViewController reloadFiles]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__reloadFiles
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000baa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce1130)();
  return;
}



/* -[YYYFileListViewController numberOfSectionsInTableView:] | 0x1000bab24 | ABI q24@0:8@16 */

/* Address: 0x1000bab24 | YYYFileListViewController::YYYFileListViewController__instance__numberOfSectionsInTableView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYFileListViewController numberOfSectionsInTableView:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYFileListViewController::
          YYYFileListViewController__instance__numberOfSectionsInTableView_
                    (ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bab3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100ce1178)();
  return lVar1;
}



/* -[YYYFileListViewController tableView:numberOfRowsInSection:] | 0x1000bab98 | ABI q32@0:8@16q24 */

/* Address: 0x1000bab98 | YYYFileListViewController::YYYFileListViewController__instance__tableView_numberOfRowsInSection_ | bytes: 44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileListViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYFileListViewController::
          YYYFileListViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000babc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*DAT_100ce11b0)(param_3);
  return lVar1;
}



/* -[YYYFileListViewController tableView:heightForRowAtIndexPath:] | 0x1000bad68 | ABI d32@0:8@16@24 */

/* Address: 0x1000bad68 | YYYFileListViewController::YYYFileListViewController__instance__tableView_heightForRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYFileListViewController tableView:heightForRowAtIndexPath:]
   Original ABI encoding: d32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYFileListViewController::
       YYYFileListViewController__instance__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bad9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100ce12c8)();
  return dVar1;
}



/* -[YYYFileListViewController tableView:cellForRowAtIndexPath:] | 0x1000bb1b8 | ABI @32@0:8@16@24 */

/* Address: 0x1000bb1b8 | YYYFileListViewController::YYYFileListViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileListViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::class((ID)&objc::class_t::YYYFileTableViewCell);
  IVar1 = objc_stub::y_dequeueReusableCellWithCellClass_forIndexPath_(param_3,IVar1,param_4);
  return IVar1;
}



/* -[YYYFileListViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x1000bb234 | ABI v40@0:8@16@24@32 */

/* Address: 0x1000bb234 | YYYFileListViewController::YYYFileListViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFileListViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::filePathAtIndexPath_tableView_(param_1,param_5,param_3);
  objc_stub::setupWithPath_(param_4,IVar1);
  return;
}



/* -[YYYFileListViewController tableView:accessoryButtonTappedForRowWithIndexPath:] | 0x1000bb2a0 | ABI v32@0:8@16@24 */

/* Address: 0x1000bb2a0 | YYYFileListViewController::YYYFileListViewController__instance__tableView_accessoryButtonTappedForRowWithIndexPath_ | bytes: 64 */

/* Recovered runtime selector: -[YYYFileListViewController
   tableView:accessoryButtonTappedForRowWithIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__tableView_accessoryButtonTappedForRowWithIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bb2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100ce13e0)(0x100e91224);
  return;
}



/* -[YYYFileListViewController tableView:didDeselectRowAtIndexPath:] | 0x1000bd158 | ABI v32@0:8@16@24 */

/* Address: 0x1000bd158 | YYYFileListViewController::YYYFileListViewController__instance__tableView_didDeselectRowAtIndexPath_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYFileListViewController tableView:didDeselectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__tableView_didDeselectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bd184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce1bf0)(param_3);
  return;
}



/* -[YYYFileListViewController tableView:didSelectRowAtIndexPath:] | 0x1000bd298 | ABI v32@0:8@16@24 */

/* Address: 0x1000bd298 | YYYFileListViewController::YYYFileListViewController__instance__tableView_didSelectRowAtIndexPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYFileListViewController tableView:didSelectRowAtIndexPath:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100ce1ce0)(0x100e9122c);
  return;
}



/* -[YYYFileListViewController tableView:editingStyleForRowAtIndexPath:] | 0x1000bd904 | ABI q32@0:8@16@24 */

/* Address: 0x1000bd904 | YYYFileListViewController::YYYFileListViewController__instance__tableView_editingStyleForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFileListViewController tableView:editingStyleForRowAtIndexPath:]
   Original ABI encoding: q32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYFileListViewController::
          YYYFileListViewController__instance__tableView_editingStyleForRowAtIndexPath_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bd924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100ce1f08)();
  return lVar1;
}



/* -[YYYFileListViewController tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:] | 0x1000bd9d8 | ABI @32@0:8@16@24 */

/* Address: 0x1000bd9d8 | YYYFileListViewController::YYYFileListViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFileListViewController
   tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::
   YYYFileListViewController__instance__tableView_titleForDeleteConfirmationButtonForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bd9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce1f78)(param_3);
  return IVar1;
}



/* -[YYYFileListViewController tableView:commitEditingStyle:forRowAtIndexPath:] | 0x1000bdbb0 | ABI v40@0:8@16q24@32 */

/* Address: 0x1000bdbb0 | YYYFileListViewController::YYYFileListViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_ | bytes: 84 */

/* Recovered runtime selector: -[YYYFileListViewController
   tableView:commitEditingStyle:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16q24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::
     YYYFileListViewController__instance__tableView_commitEditingStyle_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bdc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2030)(0x100e91234);
  return;
}



/* -[YYYFileListViewController addFileAndReloadTableView:] | 0x1000be4d0 | ABI v24@0:8@16 */

/* Address: 0x1000be4d0 | YYYFileListViewController::YYYFileListViewController__instance__addFileAndReloadTableView_ | bytes: 140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFileListViewController addFileAndReloadTableView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__addFileAndReloadTableView_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::dataSource(param_1);
  objc_stub::addObject_(IVar1,param_3);
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYSourceManager);
                    /* WARNING: Could not recover jumptable at 0x0001000be558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce24e0)(IVar1);
  return;
}



/* -[YYYFileListViewController filePathAtIndexPath:tableView:] | 0x1000be7a8 | ABI @32@0:8@16@24 */

/* Address: 0x1000be7a8 | YYYFileListViewController::YYYFileListViewController__instance__filePathAtIndexPath_tableView_ | bytes: 44 */

/* Recovered runtime selector: -[YYYFileListViewController filePathAtIndexPath:tableView:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__filePathAtIndexPath_tableView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000be7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100ce2500)();
  return IVar1;
}



/* -[YYYFileListViewController dirPath] | 0x1000bea48 | ABI @16@0:8 */

/* Address: 0x1000bea48 | YYYFileListViewController::YYYFileListViewController__instance__dirPath | bytes: 20 */

/* Recovered runtime selector: -[YYYFileListViewController dirPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__dirPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bea58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce2658)((long)_dirPath);
  return IVar1;
}



/* -[YYYFileListViewController setDirPath:] | 0x1000bea64 | ABI v24@0:8@16 */

/* Address: 0x1000bea64 | YYYFileListViewController::YYYFileListViewController__instance__setDirPath_ | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController setDirPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setDirPath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bea6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2660)();
  return;
}



/* -[YYYFileListViewController dataSource] | 0x1000bea7c | ABI @16@0:8 */

/* Address: 0x1000bea7c | YYYFileListViewController::YYYFileListViewController__instance__dataSource | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bea84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce2670)();
  return IVar1;
}



/* -[YYYFileListViewController setDataSource:] | 0x1000beab0 | ABI v24@0:8@16 */

/* Address: 0x1000beab0 | YYYFileListViewController::YYYFileListViewController__instance__setDataSource_ | bytes: 32 */

/* Recovered runtime selector: -[YYYFileListViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000beacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce26a8)();
  return;
}



/* -[YYYFileListViewController searchResults] | 0x1000beb28 | ABI @16@0:8 */

/* Address: 0x1000beb28 | YYYFileListViewController::YYYFileListViewController__instance__searchResults | bytes: 20 */

/* Recovered runtime selector: -[YYYFileListViewController searchResults]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__searchResults
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000beb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce26d8)((long)_searchResults);
  return IVar1;
}



/* -[YYYFileListViewController setSearchResults:] | 0x1000beb50 | ABI v24@0:8@16 */

/* Address: 0x1000beb50 | YYYFileListViewController::YYYFileListViewController__instance__setSearchResults_ | bytes: 56 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYFileListViewController setSearchResults:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setSearchResults_
               (ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_searchResults) = param_3;
  return;
}



/* -[YYYFileListViewController previewDataSource] | 0x1000beb88 | ABI @16@0:8 */

/* Address: 0x1000beb88 | YYYFileListViewController::YYYFileListViewController__instance__previewDataSource | bytes: 20 */

/* Recovered runtime selector: -[YYYFileListViewController previewDataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__previewDataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000beb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce26f0)((long)_previewDataSource);
  return IVar1;
}



/* -[YYYFileListViewController setPreviewDataSource:] | 0x1000bebb0 | ABI v24@0:8@16 */

/* Address: 0x1000bebb0 | YYYFileListViewController::YYYFileListViewController__instance__setPreviewDataSource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYFileListViewController setPreviewDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setPreviewDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2718)();
  return;
}



/* -[YYYFileListViewController popupAtBarButtonItem] | 0x1000bec24 | ABI @16@0:8 */

/* Address: 0x1000bec24 | YYYFileListViewController::YYYFileListViewController__instance__popupAtBarButtonItem | bytes: 24 */

/* Recovered runtime selector: -[YYYFileListViewController popupAtBarButtonItem]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__popupAtBarButtonItem
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bec38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce2740)(*(undefined8 *)(param_1 + (long)_popupAtBarButtonItem));
  return IVar1;
}



/* -[YYYFileListViewController setPopupAtBarButtonItem:] | 0x1000bec4c | ABI v24@0:8@16 */

/* Address: 0x1000bec4c | YYYFileListViewController::YYYFileListViewController__instance__setPopupAtBarButtonItem_ | bytes: 44 */

/* Recovered runtime selector: -[YYYFileListViewController setPopupAtBarButtonItem:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setPopupAtBarButtonItem_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bec74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2768)();
  return;
}



/* -[YYYFileListViewController needReload] | 0x1000becb8 | ABI B16@0:8 */

/* Address: 0x1000becb8 | YYYFileListViewController::YYYFileListViewController__instance__needReload | bytes: 20 */

/* Recovered runtime selector: -[YYYFileListViewController needReload]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFileListViewController::YYYFileListViewController__instance__needReload
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000becc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100ce2798)((long)_needReload,(int)param_1);
  return bVar1;
}



/* -[YYYFileListViewController setNeedReload:] | 0x1000becf4 | ABI v20@0:8B16 */

/* Address: 0x1000becf4 | YYYFileListViewController::YYYFileListViewController__instance__setNeedReload_ | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController setNeedReload:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setNeedReload_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000becfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce27c8)(param_1,param_2,param_3);
  return;
}



/* -[YYYFileListViewController isRootDir] | 0x1000bed3c | ABI B16@0:8 */

/* Address: 0x1000bed3c | YYYFileListViewController::YYYFileListViewController__instance__isRootDir | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController isRootDir]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYFileListViewController::YYYFileListViewController__instance__isRootDir
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bed44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100ce27f0)((int)param_1);
  return bVar1;
}



/* -[YYYFileListViewController setIsRootDir:] | 0x1000bed70 | ABI v20@0:8B16 */

/* Address: 0x1000bed70 | YYYFileListViewController::YYYFileListViewController__instance__setIsRootDir_ | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController setIsRootDir:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setIsRootDir_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2820)(param_1,param_2,param_3);
  return;
}



/* -[YYYFileListViewController toolBar] | 0x1000bed98 | ABI @16@0:8 */

/* Address: 0x1000bed98 | YYYFileListViewController::YYYFileListViewController__instance__toolBar | bytes: 12 */

/* Recovered runtime selector: -[YYYFileListViewController toolBar]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFileListViewController::YYYFileListViewController__instance__toolBar(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000beda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce2840)();
  return IVar1;
}



/* -[YYYFileListViewController setToolBar:] | 0x1000bedcc | ABI v24@0:8@16 */

/* Address: 0x1000bedcc | YYYFileListViewController::YYYFileListViewController__instance__setToolBar_ | bytes: 40 */

/* Recovered runtime selector: -[YYYFileListViewController setToolBar:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance__setToolBar_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bedf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2870)();
  return;
}



/* -[YYYFileListViewController .cxx_destruct] | 0x1000bee3c | ABI v16@0:8 */

/* Address: 0x1000bee3c | YYYFileListViewController::YYYFileListViewController__instance___cxx_destruct | bytes: 100 */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Recovered runtime selector: -[YYYFileListViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFileListViewController::YYYFileListViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + (long)_toolBar) = 0;
  *(undefined8 *)(param_1 + (long)_popupAtBarButtonItem) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001000bee9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce28b8)();
  return;
}


