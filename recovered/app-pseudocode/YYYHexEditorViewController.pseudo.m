/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYHexEditorViewController | class address: 0x100c7f9c0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYHexEditorViewController viewDidLoad] | 0x10024ca24 | ABI v16@0:8 */

/* Address: 0x10024ca24 | YYYHexEditorViewController::YYYHexEditorViewController__instance__viewDidLoad | bytes: 48 */

/* Recovered runtime selector: -[YYYHexEditorViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024ca50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d680a8)(0x100e91bd4);
  return;
}



/* -[YYYHexEditorViewController dealloc] | 0x10024d158 | ABI v16@0:8 */

/* Address: 0x10024d158 | YYYHexEditorViewController::YYYHexEditorViewController__instance__dealloc | bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYHexEditorViewController dealloc]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__dealloc
               (ID param_1,SEL param_2)

{
  ID self;
  objc_super oStack_30;
  
  self = objc_stub::fileHandle(param_1);
  objc_stub::closeFile(self);
  oStack_30.super_class = &objc::class_t::YYYHexEditorViewController;
  oStack_30.receiver = param_1;
  _objc_msgSendSuper2(&oStack_30,"dealloc");
  return;
}



/* -[YYYHexEditorViewController initSubviews] | 0x10024d1b4 | ABI v16@0:8 */

/* Address: 0x10024d1b4 | YYYHexEditorViewController::YYYHexEditorViewController__instance__initSubviews | bytes: 72 */

/* Recovered runtime selector: -[YYYHexEditorViewController initSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__initSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68160)(0x100e91bd8);
  return;
}



/* -[YYYHexEditorViewController initTableView] | 0x10024d6ec | ABI v16@0:8 */

/* Address: 0x10024d6ec | YYYHexEditorViewController::YYYHexEditorViewController__instance__initTableView | bytes: 44 */

/* Recovered runtime selector: -[YYYHexEditorViewController initTableView]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__initTableView
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010024d714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68240)();
  return;
}



/* -[YYYHexEditorViewController searchBarTextDidBeginEditing:] | 0x10024dab0 | ABI v24@0:8@16 */

/* Address: 0x10024dab0 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarTextDidBeginEditing_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBarTextDidBeginEditing:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarTextDidBeginEditing_
               (ID param_1,SEL param_2,ID param_3)

{
  objc_stub::thunk_FUN_10096d060(param_3,1);
  return;
}



/* -[YYYHexEditorViewController searchBarTextDidEndEditing:] | 0x10024dabc | ABI v24@0:8@16 */

/* Address: 0x10024dabc | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarTextDidEndEditing_ | bytes: 28 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBarTextDidEndEditing:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarTextDidEndEditing_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024dad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d682f0)();
  return;
}



/* -[YYYHexEditorViewController searchBarCancelButtonClicked:] | 0x10024db20 | ABI v24@0:8@16 */

/* Address: 0x10024db20 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarCancelButtonClicked_ | bytes: 28 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBarCancelButtonClicked:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarCancelButtonClicked_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024db38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68330)();
  return;
}



/* -[YYYHexEditorViewController searchBar:textDidChange:] | 0x10024dba0 | ABI v32@0:8@16@24 */

/* Address: 0x10024dba0 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBar_textDidChange_ | bytes: 28 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBar:textDidChange:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBar_textDidChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010024dbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68370)();
  return;
}



/* -[YYYHexEditorViewController searchBarSearchButtonClicked:] | 0x10024dbf8 | ABI v24@0:8@16 */

/* Address: 0x10024dbf8 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarSearchButtonClicked_ | bytes: 56 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBarSearchButtonClicked:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBarSearchButtonClicked_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024dc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d683a0)(0x100e91be0);
  return;
}



/* -[YYYHexEditorViewController searhData:fromLocation:isByte:] | 0x10024e3e0 | ABI v36@0:8@16q24B32 */

/* Address: 0x10024e3e0 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searhData_fromLocation_isByte_ | bytes: 64 */

/* Recovered runtime selector: -[YYYHexEditorViewController searhData:fromLocation:isByte:]
   Original ABI encoding: v36@0:8@16q24B32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::
     YYYHexEditorViewController__instance__searhData_fromLocation_isByte_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,bool param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010024e41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68670)();
  return;
}



/* -[YYYHexEditorViewController selectHexInfo:] | 0x10024f2f0 | ABI v24@0:8@16 */

/* Address: 0x10024f2f0 | YYYHexEditorViewController::YYYHexEditorViewController__instance__selectHexInfo_ | bytes: 64 */

/* Recovered runtime selector: -[YYYHexEditorViewController selectHexInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__selectHexInfo_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010024f32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d68b38)(0x100e91be8);
  return;
}



/* -[YYYHexEditorViewController showJumpToAddress] | 0x100250630 | ABI v16@0:8 */

/* Address: 0x100250630 | YYYHexEditorViewController::YYYHexEditorViewController__instance__showJumpToAddress | bytes: 52 */

/* Recovered runtime selector: -[YYYHexEditorViewController showJumpToAddress]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__showJumpToAddress
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100250660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d68fc8)();
  return;
}



/* -[YYYHexEditorViewController tableView:numberOfRowsInSection:] | 0x10025104c | ABI q32@0:8@16q24 */

/* Address: 0x10025104c | YYYHexEditorViewController::YYYHexEditorViewController__instance__tableView_numberOfRowsInSection_ | bytes: 36 */

/* Recovered runtime selector: -[YYYHexEditorViewController tableView:numberOfRowsInSection:]
   Original ABI encoding: q32@0:8@16q24
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYHexEditorViewController::
          YYYHexEditorViewController__instance__tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010025106c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d69388)();
  return lVar1;
}



/* -[YYYHexEditorViewController tableView:cellForRowAtIndexPath:] | 0x1002510e8 | ABI @32@0:8@16@24 */

/* Address: 0x1002510e8 | YYYHexEditorViewController::YYYHexEditorViewController__instance__tableView_cellForRowAtIndexPath_ | bytes: 36 */

/* Recovered runtime selector: -[YYYHexEditorViewController tableView:cellForRowAtIndexPath:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::
   YYYHexEditorViewController__instance__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100251108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d693d0)();
  return IVar1;
}



/* -[YYYHexEditorViewController tableView:willDisplayCell:forRowAtIndexPath:] | 0x10025144c | ABI v40@0:8@16@24@32 */

/* Address: 0x10025144c | YYYHexEditorViewController::YYYHexEditorViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_ | bytes: 56 */

/* Recovered runtime selector: -[YYYHexEditorViewController
   tableView:willDisplayCell:forRowAtIndexPath:]
   Original ABI encoding: v40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::
     YYYHexEditorViewController__instance__tableView_willDisplayCell_forRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
                    /* WARNING: Could not recover jumptable at 0x000100251480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69498)();
  return;
}



/* -[YYYHexEditorViewController getInfoAtIndexPath:] | 0x100251704 | ABI @24@0:8@16 */

/* Address: 0x100251704 | YYYHexEditorViewController::YYYHexEditorViewController__instance__getInfoAtIndexPath_ | bytes: 60 */

/* Recovered runtime selector: -[YYYHexEditorViewController getInfoAtIndexPath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__getInfoAtIndexPath_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010025173c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100d69578)();
  return IVar1;
}



/* -[YYYHexEditorViewController scrollViewDidScroll:] | 0x100252340 | ABI v24@0:8@16 */

/* Address: 0x100252340 | YYYHexEditorViewController::YYYHexEditorViewController__instance__scrollViewDidScroll_ | bytes: 40 */

/* Recovered runtime selector: -[YYYHexEditorViewController scrollViewDidScroll:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__scrollViewDidScroll_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69888)();
  return;
}



/* -[YYYHexEditorViewController filePath] | 0x1002524f8 | ABI @16@0:8 */

/* Address: 0x1002524f8 | YYYHexEditorViewController::YYYHexEditorViewController__instance__filePath | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController filePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__filePath
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100252500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69968)();
  return IVar1;
}



/* -[YYYHexEditorViewController setFilePath:] | 0x100252520 | ABI v24@0:8@16 */

/* Address: 0x100252520 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setFilePath_ | bytes: 48 */

/* Recovered runtime selector: -[YYYHexEditorViewController setFilePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setFilePath_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010025254c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69988)();
  return;
}



/* -[YYYHexEditorViewController dataSource] | 0x1002525a0 | ABI @16@0:8 */

/* Address: 0x1002525a0 | YYYHexEditorViewController::YYYHexEditorViewController__instance__dataSource | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController dataSource]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__dataSource
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002525a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d699b8)();
  return IVar1;
}



/* -[YYYHexEditorViewController setDataSource:] | 0x1002525d4 | ABI v24@0:8@16 */

/* Address: 0x1002525d4 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setDataSource_ | bytes: 36 */

/* Recovered runtime selector: -[YYYHexEditorViewController setDataSource:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setDataSource_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002525f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d699e8)();
  return;
}



/* -[YYYHexEditorViewController data] | 0x100252660 | ABI @16@0:8 */

/* Address: 0x100252660 | YYYHexEditorViewController::YYYHexEditorViewController__instance__data | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController data]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__data(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100252668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69a30)();
  return IVar1;
}



/* -[YYYHexEditorViewController setData:] | 0x100252688 | ABI v24@0:8@16 */

/* Address: 0x100252688 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setData_ | bytes: 36 */

/* Recovered runtime selector: -[YYYHexEditorViewController setData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setData_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002526a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69a50)();
  return;
}



/* -[YYYHexEditorViewController fileHandle] | 0x1002526ec | ABI @16@0:8 */

/* Address: 0x1002526ec | YYYHexEditorViewController::YYYHexEditorViewController__instance__fileHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController fileHandle]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__fileHandle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002526f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69a68)();
  return IVar1;
}



/* -[YYYHexEditorViewController setFileHandle:] | 0x100252720 | ABI v24@0:8@16 */

/* Address: 0x100252720 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setFileHandle_ | bytes: 40 */

/* Recovered runtime selector: -[YYYHexEditorViewController setFileHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setFileHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69a98)();
  return;
}



/* -[YYYHexEditorViewController count] | 0x1002527c4 | ABI Q16@0:8 */

/* Address: 0x1002527c4 | YYYHexEditorViewController::YYYHexEditorViewController__instance__count | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController count]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYHexEditorViewController::YYYHexEditorViewController__instance__count(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002527cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d69ae8)();
  return uVar1;
}



/* -[YYYHexEditorViewController setCount:] | 0x1002527fc | ABI v24@0:8Q16 */

/* Address: 0x1002527fc | YYYHexEditorViewController::YYYHexEditorViewController__instance__setCount_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController setCount:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setCount_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69b20)();
  return;
}



/* -[YYYHexEditorViewController limit] | 0x10025284c | ABI Q16@0:8 */

/* Address: 0x10025284c | YYYHexEditorViewController::YYYHexEditorViewController__instance__limit | bytes: 20 */

/* Recovered runtime selector: -[YYYHexEditorViewController limit]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYHexEditorViewController::YYYHexEditorViewController__instance__limit(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010025285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d69b60)((long)_limit);
  return uVar1;
}



/* -[YYYHexEditorViewController setLimit:] | 0x100252874 | ABI v24@0:8Q16 */

/* Address: 0x100252874 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setLimit_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController setLimit:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setLimit_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010025287c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69b80)();
  return;
}



/* -[YYYHexEditorViewController fileSize] | 0x1002528c4 | ABI Q16@0:8 */

/* Address: 0x1002528c4 | YYYHexEditorViewController::YYYHexEditorViewController__instance__fileSize | bytes: 20 */

/* Recovered runtime selector: -[YYYHexEditorViewController fileSize]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYHexEditorViewController::YYYHexEditorViewController__instance__fileSize(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002528d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d69bc0)((long)_fileSize);
  return uVar1;
}



/* -[YYYHexEditorViewController setFileSize:] | 0x1002528f8 | ABI v24@0:8Q16 */

/* Address: 0x1002528f8 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setFileSize_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController setFileSize:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setFileSize_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69be8)();
  return;
}



/* -[YYYHexEditorViewController selectInfo] | 0x10025293c | ABI @16@0:8 */

/* Address: 0x10025293c | YYYHexEditorViewController::YYYHexEditorViewController__instance__selectInfo | bytes: 28 */

/* Recovered runtime selector: -[YYYHexEditorViewController selectInfo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__selectInfo
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100252954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d69c18)();
  return IVar1;
}



/* -[YYYHexEditorViewController setSelectInfo:] | 0x100252994 | ABI v24@0:8@16 */

/* Address: 0x100252994 | YYYHexEditorViewController::YYYHexEditorViewController__instance__setSelectInfo_ | bytes: 40 */

/* Recovered runtime selector: -[YYYHexEditorViewController setSelectInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setSelectInfo_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002529b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69c48)();
  return;
}



/* -[YYYHexEditorViewController searchBar] | 0x1002529ec | ABI @16@0:8 */

/* Address: 0x1002529ec | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBar | bytes: 16 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchBar]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHexEditorViewController::YYYHexEditorViewController__instance__searchBar
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_searchBar);
}



/* -[YYYHexEditorViewController setSearchBar:] | 0x1002529fc | ABI v24@0:8@16 */

/* Address: 0x1002529fc | YYYHexEditorViewController::YYYHexEditorViewController__instance__setSearchBar_ | bytes: 16 */

/* Recovered runtime selector: -[YYYHexEditorViewController setSearchBar:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setSearchBar_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69c70)(param_1,param_3);
  return;
}



/* -[YYYHexEditorViewController searchFromLocation] | 0x100252a28 | ABI Q16@0:8 */

/* Address: 0x100252a28 | YYYHexEditorViewController::YYYHexEditorViewController__instance__searchFromLocation | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController searchFromLocation]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYHexEditorViewController::YYYHexEditorViewController__instance__searchFromLocation
          (ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100252a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100d69c90)();
  return uVar1;
}



/* -[YYYHexEditorViewController setSearchFromLocation:] | 0x100252a5c | ABI v24@0:8Q16 */

/* Address: 0x100252a5c | YYYHexEditorViewController::YYYHexEditorViewController__instance__setSearchFromLocation_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHexEditorViewController setSearchFromLocation:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance__setSearchFromLocation_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100252a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69cb8)();
  return;
}



/* -[YYYHexEditorViewController .cxx_destruct] | 0x100252a78 | ABI v16@0:8 */

/* Address: 0x100252a78 | YYYHexEditorViewController::YYYHexEditorViewController__instance___cxx_destruct | bytes: 52 */

/* Recovered runtime selector: -[YYYHexEditorViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHexEditorViewController::YYYHexEditorViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100252aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d69cd0)();
  return;
}


