/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYCacheSliderView | class address: 0x100c80460
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYCacheSliderView initWithFrame:] | 0x10030db64 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10030db64 | YYYCacheSliderView::YYYCacheSliderView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYCacheSliderView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCacheSliderView::YYYCacheSliderView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010030dba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da80c0)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYCacheSliderView loadSubviews] | 0x10030dcc0 | ABI v16@0:8 */

/* Address: 0x10030dcc0 | YYYCacheSliderView::YYYCacheSliderView__instance__loadSubviews | bytes: 56 */

/* Recovered runtime selector: -[YYYCacheSliderView loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCacheSliderView::YYYCacheSliderView__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010030dcf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da8168)();
  return;
}



/* -[YYYCacheSliderView layoutSubviews] | 0x10030e0fc | ABI v16@0:8 */

/* Address: 0x10030e0fc | YYYCacheSliderView::YYYCacheSliderView__instance__layoutSubviews | bytes: 48 */

/* Recovered runtime selector: -[YYYCacheSliderView layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCacheSliderView::YYYCacheSliderView__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010030e128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100da81d0)();
  return;
}



/* -[YYYCacheSliderView finishValue] | 0x10030e204 | ABI f16@0:8 */

/* Address: 0x10030e204 | YYYCacheSliderView::YYYCacheSliderView__instance__finishValue | bytes: 32 */

/* Recovered runtime selector: -[YYYCacheSliderView finishValue]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYCacheSliderView::YYYCacheSliderView__instance__finishValue(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010030e220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100da8210)();
  return fVar1;
}



/* -[YYYCacheSliderView setFinishValue:] | 0x10030e2a8 | ABI v20@0:8f16 */

/* Address: 0x10030e2a8 | YYYCacheSliderView::YYYCacheSliderView__instance__setFinishValue_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCacheSliderView setFinishValue:]
   Original ABI encoding: v20@0:8f16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCacheSliderView::YYYCacheSliderView__instance__setFinishValue_
               (ID param_1,SEL param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010030e2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da8268)();
  return;
}



/* -[YYYCacheSliderView videoProgressView] | 0x10030e360 | ABI @16@0:8 */

/* Address: 0x10030e360 | YYYCacheSliderView::YYYCacheSliderView__instance__videoProgressView | bytes: 20 */

/* Recovered runtime selector: -[YYYCacheSliderView videoProgressView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCacheSliderView::YYYCacheSliderView__instance__videoProgressView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010030e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da82b8)((long)_videoProgressView);
  return IVar1;
}



/* -[YYYCacheSliderView setVideoProgressView:] | 0x10030e394 | ABI v24@0:8@16 */

/* Address: 0x10030e394 | YYYCacheSliderView::YYYCacheSliderView__instance__setVideoProgressView_ | bytes: 40 */

/* Recovered runtime selector: -[YYYCacheSliderView setVideoProgressView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCacheSliderView::YYYCacheSliderView__instance__setVideoProgressView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010030e3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da82e0)();
  return;
}



/* -[YYYCacheSliderView .cxx_destruct] | 0x10030e3f8 | ABI v16@0:8 */

/* Address: 0x10030e3f8 | YYYCacheSliderView::YYYCacheSliderView__instance___cxx_destruct | bytes: 20 */

/* Recovered runtime selector: -[YYYCacheSliderView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCacheSliderView::YYYCacheSliderView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010030e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100da8318)();
  return;
}


