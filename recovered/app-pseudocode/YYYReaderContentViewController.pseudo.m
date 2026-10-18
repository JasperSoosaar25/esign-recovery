/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYReaderContentViewController | class address: 0x100c7eb00
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYReaderContentViewController viewDidLoad] | 0x1002247d4 | ABI v16@0:8 */

/* Address: 0x1002247d4 | YYYReaderContentViewController::YYYReaderContentViewController__instance__viewDidLoad | bytes: 52 */

/* Recovered runtime selector: -[YYYReaderContentViewController viewDidLoad]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__viewDidLoad
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100224804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5af50)();
  return;
}



/* -[YYYReaderContentViewController viewDidLayoutSubviews] | 0x100224b4c | ABI v16@0:8 */

/* Address: 0x100224b4c | YYYReaderContentViewController::YYYReaderContentViewController__instance__viewDidLayoutSubviews | bytes: 124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYReaderContentViewController viewDidLayoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__viewDidLayoutSubviews
               (ID param_1,SEL param_2)

{
  ID IVar1;
  objc_super oStack_80;
  
  oStack_80.super_class = &objc::class_t::YYYReaderContentViewController;
  oStack_80.receiver = param_1;
  _objc_msgSendSuper2(&oStack_80,"viewDidLayoutSubviews");
  objc_stub::safeAreaInsetsForDeviceWithNotch((ID)&objc::class_t::QMUIHelper);
  IVar1 = objc_stub::view(param_1,0x4034000000000000);
                    /* WARNING: Could not recover jumptable at 0x000100224bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b018)(IVar1);
  return;
}



/* -[YYYReaderContentViewController styleChange] | 0x100224f1c | ABI v16@0:8 */

/* Address: 0x100224f1c | YYYReaderContentViewController::YYYReaderContentViewController__instance__styleChange | bytes: 44 */

/* Recovered runtime selector: -[YYYReaderContentViewController styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__styleChange
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100224f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b058)();
  return;
}



/* -[YYYReaderContentViewController setIndex:totalPages:] | 0x1002251f0 | ABI v32@0:8q16q24 */

/* Address: 0x1002251f0 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndex_totalPages_ | bytes: 48 */

/* Recovered runtime selector: -[YYYReaderContentViewController setIndex:totalPages:]
   Original ABI encoding: v32@0:8q16q24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndex_totalPages_
               (ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010022521c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b0b8)();
  return;
}



/* -[YYYReaderContentViewController initSubviews] | 0x100225484 | ABI v16@0:8 */

/* Address: 0x100225484 | YYYReaderContentViewController::YYYReaderContentViewController__instance__initSubviews | bytes: 68 */

/* Recovered runtime selector: -[YYYReaderContentViewController initSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__initSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002254c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b180)();
  return;
}



/* -[YYYReaderContentViewController currentIndex] | 0x100225a54 | ABI q16@0:8 */

/* Address: 0x100225a54 | YYYReaderContentViewController::YYYReaderContentViewController__instance__currentIndex | bytes: 24 */

/* Recovered runtime selector: -[YYYReaderContentViewController currentIndex]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYReaderContentViewController::YYYReaderContentViewController__instance__currentIndex
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100225a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d5b1c8)();
  return lVar1;
}



/* -[YYYReaderContentViewController currentChapterIndex] | 0x100225ac8 | ABI q16@0:8 */

/* Address: 0x100225ac8 | YYYReaderContentViewController::YYYReaderContentViewController__instance__currentChapterIndex | bytes: 92 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYReaderContentViewController currentChapterIndex]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYReaderContentViewController::
          YYYReaderContentViewController__instance__currentChapterIndex(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100950560(param_1);
  IVar1 = objc_stub::chapter(IVar1);
  IVar1 = objc_stub::index(IVar1);
  return IVar1;
}



/* -[YYYReaderContentViewController setModel:] | 0x100225b24 | ABI v24@0:8@16 */

/* Address: 0x100225b24 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setModel_ | bytes: 56 */

/* Recovered runtime selector: -[YYYReaderContentViewController setModel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setModel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100225b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b200)();
  return;
}



/* -[YYYReaderContentViewController model] | 0x100225e38 | ABI @16@0:8 */

/* Address: 0x100225e38 | YYYReaderContentViewController::YYYReaderContentViewController__instance__model | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderContentViewController model]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__model
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100225e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b290)((long)_model);
  return IVar1;
}



/* -[YYYReaderContentViewController isSnapshopVC] | 0x100225e6c | ABI B16@0:8 */

/* Address: 0x100225e6c | YYYReaderContentViewController::YYYReaderContentViewController__instance__isSnapshopVC | bytes: 24 */

/* Recovered runtime selector: -[YYYReaderContentViewController isSnapshopVC]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYReaderContentViewController::YYYReaderContentViewController__instance__isSnapshopVC
               (ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100225e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d5b2c0)(*(undefined1 *)(param_1 + (long)_isSnapshopVC));
  return bVar1;
}



/* -[YYYReaderContentViewController setIsSnapshopVC:] | 0x100225ea8 | ABI v20@0:8B16 */

/* Address: 0x100225ea8 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setIsSnapshopVC_ | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController setIsSnapshopVC:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setIsSnapshopVC_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100225eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b2f0)(param_1,param_2,param_3);
  return;
}



/* -[YYYReaderContentViewController textView] | 0x100225ec4 | ABI @16@0:8 */

/* Address: 0x100225ec4 | YYYReaderContentViewController::YYYReaderContentViewController__instance__textView | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderContentViewController textView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__textView
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100225ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b300)((long)_textView);
  return IVar1;
}



/* -[YYYReaderContentViewController setTextView:] | 0x100225eec | ABI v24@0:8@16 */

/* Address: 0x100225eec | YYYReaderContentViewController::YYYReaderContentViewController__instance__setTextView_ | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderContentViewController setTextView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setTextView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100225f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b320)();
  return;
}



/* -[YYYReaderContentViewController chapterTitleLabel] | 0x100225f5c | ABI @16@0:8 */

/* Address: 0x100225f5c | YYYReaderContentViewController::YYYReaderContentViewController__instance__chapterTitleLabel | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController chapterTitleLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__chapterTitleLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100225f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b350)();
  return IVar1;
}



/* -[YYYReaderContentViewController setChapterTitleLabel:] | 0x100225f90 | ABI v24@0:8@16 */

/* Address: 0x100225f90 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setChapterTitleLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderContentViewController setChapterTitleLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setChapterTitleLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100225fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b378)();
  return;
}



/* -[YYYReaderContentViewController indexLabel] | 0x100226008 | ABI @16@0:8 */

/* Address: 0x100226008 | YYYReaderContentViewController::YYYReaderContentViewController__instance__indexLabel | bytes: 20 */

/* Recovered runtime selector: -[YYYReaderContentViewController indexLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__indexLabel
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100226018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b3b8)((long)_indexLabel);
  return IVar1;
}



/* -[YYYReaderContentViewController setIndexLabel:] | 0x100226030 | ABI v24@0:8@16 */

/* Address: 0x100226030 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndexLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderContentViewController setIndexLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndexLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100226050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b3d8)((long)_indexLabel);
  return;
}



/* -[YYYReaderContentViewController index] | 0x100226094 | ABI q16@0:8 */

/* Address: 0x100226094 | YYYReaderContentViewController::YYYReaderContentViewController__instance__index | bytes: 24 */

/* Recovered runtime selector: -[YYYReaderContentViewController index]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

char * YYYReaderContentViewController::YYYReaderContentViewController__instance__index
                 (char *param_1,int param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002260a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR_LAB_100d5b410)(*(undefined8 *)(param_1 + _index),param_2);
  return pcVar1;
}



/* -[YYYReaderContentViewController setIndex:] | 0x1002260bc | ABI v24@0:8q16 */

/* Address: 0x1002260bc | YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndex_ | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController setIndex:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001002260c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b430)();
  return;
}



/* -[YYYReaderContentViewController totalPages] | 0x1002260e4 | ABI q16@0:8 */

/* Address: 0x1002260e4 | YYYReaderContentViewController::YYYReaderContentViewController__instance__totalPages | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController totalPages]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYReaderContentViewController::YYYReaderContentViewController__instance__totalPages
                    (ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002260ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100d5b450)();
  return lVar1;
}



/* -[YYYReaderContentViewController setTotalPages:] | 0x100226118 | ABI v24@0:8q16 */

/* Address: 0x100226118 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setTotalPages_ | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController setTotalPages:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setTotalPages_
               (ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100226120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b478)();
  return;
}



/* -[YYYReaderContentViewController otherTextColor] | 0x100226150 | ABI @16@0:8 */

/* Address: 0x100226150 | YYYReaderContentViewController::YYYReaderContentViewController__instance__otherTextColor | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentViewController otherTextColor]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__otherTextColor
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100226158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d5b4a8)();
  return IVar1;
}



/* -[YYYReaderContentViewController setOtherTextColor:] | 0x100226178 | ABI v24@0:8@16 */

/* Address: 0x100226178 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setOtherTextColor_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderContentViewController setOtherTextColor:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setOtherTextColor_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100226198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b4d0)();
  return;
}



/* -[YYYReaderContentViewController contentView] | 0x1002261f8 | ABI @16@0:8 */

/* Address: 0x1002261f8 | YYYReaderContentViewController::YYYReaderContentViewController__instance__contentView | bytes: 16 */

/* Recovered runtime selector: -[YYYReaderContentViewController contentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentViewController::YYYReaderContentViewController__instance__contentView
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_contentView);
}



/* -[YYYReaderContentViewController setContentView:] | 0x100226208 | ABI v24@0:8@16 */

/* Address: 0x100226208 | YYYReaderContentViewController::YYYReaderContentViewController__instance__setContentView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderContentViewController setContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance__setContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100226228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b510)();
  return;
}



/* -[YYYReaderContentViewController .cxx_destruct] | 0x100226290 | ABI v16@0:8 */

/* Address: 0x100226290 | YYYReaderContentViewController::YYYReaderContentViewController__instance___cxx_destruct | bytes: 40 */

/* Recovered runtime selector: -[YYYReaderContentViewController .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentViewController::YYYReaderContentViewController__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001002262b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d5b550)();
  return;
}


