/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBrightnessSlider | class address: 0x100c7de58
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBrightnessSlider initWithFrame:] | 0x1001a211c | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1001a211c | YYYBrightnessSlider::YYYBrightnessSlider__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYBrightnessSlider initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a215c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2dd00)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYBrightnessSlider styleChange] | 0x1001a2384 | ABI v16@0:8 */

/* Address: 0x1001a2384 | YYYBrightnessSlider::YYYBrightnessSlider__instance__styleChange | bytes: 40 */

/* Recovered runtime selector: -[YYYBrightnessSlider styleChange]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__styleChange(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a23a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2ddb0)();
  return;
}



/* -[YYYBrightnessSlider dealloc] | 0x1001a2640 | ABI v16@0:8 */

/* Address: 0x1001a2640 | YYYBrightnessSlider::YYYBrightnessSlider__instance__dealloc | bytes: 36 */

/* Recovered runtime selector: -[YYYBrightnessSlider dealloc]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__dealloc(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a2660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2de08)();
  return;
}



/* -[YYYBrightnessSlider getRate] | 0x1001a2748 | ABI f16@0:8 */

/* Address: 0x1001a2748 | YYYBrightnessSlider::YYYBrightnessSlider__instance__getRate | bytes: 32 */

/* Recovered runtime selector: -[YYYBrightnessSlider getRate]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYBrightnessSlider::YYYBrightnessSlider__instance__getRate(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100d2de70)();
  return fVar1;
}



/* -[YYYBrightnessSlider setValue:animated:] | 0x1001a27fc | ABI v24@0:8f16B20 */

/* Address: 0x1001a27fc | YYYBrightnessSlider::YYYBrightnessSlider__instance__setValue_animated_ | bytes: 88 */

/* Recovered runtime selector: -[YYYBrightnessSlider setValue:animated:]
   Original ABI encoding: v24@0:8f16B20
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setValue_animated_
               (ID param_1,SEL param_2,float param_3,bool param_4)

{
  float extraout_s0;
  
  objc_stub::FUN_100950100(param_1,(ulong)param_4);
  switch(param_3 < extraout_s0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001001a2844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d2df00)();
    return;
  case true:
                    /* WARNING: Could not recover jumptable at 0x0001001a285c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d2dee0)();
    return;
  }
}



/* -[YYYBrightnessSlider setValue:] | 0x1001a2cc0 | ABI v20@0:8f16 */

/* Address: 0x1001a2cc0 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setValue_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider setValue:]
   Original ABI encoding: v20@0:8f16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setValue_
               (ID param_1,SEL param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a2cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e0b0)();
  return;
}



/* -[YYYBrightnessSlider panHandle:] | 0x1001a2cd4 | ABI v24@0:8@16 */

/* Address: 0x1001a2cd4 | YYYBrightnessSlider::YYYBrightnessSlider__instance__panHandle_ | bytes: 56 */

/* Recovered runtime selector: -[YYYBrightnessSlider panHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__panHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a2d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d2e0b8)();
  return;
}



/* -[YYYBrightnessSlider layoutSubviews] | 0x1001a318c | ABI v16@0:8 */

/* Address: 0x1001a318c | YYYBrightnessSlider::YYYBrightnessSlider__instance__layoutSubviews | bytes: 64 */

/* Recovered runtime selector: -[YYYBrightnessSlider layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a31c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e2e0)();
  return;
}



/* -[YYYBrightnessSlider loadSubviews] | 0x1001a38f0 | ABI v16@0:8 */

/* Address: 0x1001a38f0 | YYYBrightnessSlider::YYYBrightnessSlider__instance__loadSubviews | bytes: 200 */

/* Recovered runtime selector: -[YYYBrightnessSlider loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__loadSubviews(ID param_1,SEL param_2)

{
  switch(DAT_100e9178c == 0) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x0001001a3b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d2e508)();
    return;
  case true:
    DAT_100d2dcb0 = DAT_100d2dc90 ^ 0xbe;
    DAT_100d2dcb1 = DAT_100d2dc91 ^ 0xe6;
    DAT_100d2dcb2 = DAT_100d2dc92 + (DAT_100d2dc92 & 0x12) * -2 + '\x12';
    DAT_100d2dcb3 = DAT_100d2dc93 ^ 0xa3;
    DAT_100d2dcb4 = DAT_100d2dc94 ^ 0x26;
                    /* WARNING: Could not recover jumptable at 0x0001001a39a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_LAB_100d2e4d0)();
    return;
  }
}



/* -[YYYBrightnessSlider value] | 0x1001a4358 | ABI f16@0:8 */

/* Address: 0x1001a4358 | YYYBrightnessSlider::YYYBrightnessSlider__instance__value | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider value]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYBrightnessSlider::YYYBrightnessSlider__instance__value(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a4360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100d2e5a0)();
  return fVar1;
}



/* -[YYYBrightnessSlider minimumValue] | 0x1001a4374 | ABI f16@0:8 */

/* Address: 0x1001a4374 | YYYBrightnessSlider::YYYBrightnessSlider__instance__minimumValue | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider minimumValue]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYBrightnessSlider::YYYBrightnessSlider__instance__minimumValue(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a437c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100d2e5a8)();
  return fVar1;
}



/* -[YYYBrightnessSlider setMinimumValue:] | 0x1001a439c | ABI v20@0:8f16 */

/* Address: 0x1001a439c | YYYBrightnessSlider::YYYBrightnessSlider__instance__setMinimumValue_ | bytes: 20 */

/* Recovered runtime selector: -[YYYBrightnessSlider setMinimumValue:]
   Original ABI encoding: v20@0:8f16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setMinimumValue_
               (ID param_1,SEL param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a43ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e5c8)((long)_minimumValue);
  return;
}



/* -[YYYBrightnessSlider maximumValue] | 0x1001a43c4 | ABI f16@0:8 */

/* Address: 0x1001a43c4 | YYYBrightnessSlider::YYYBrightnessSlider__instance__maximumValue | bytes: 20 */

/* Recovered runtime selector: -[YYYBrightnessSlider maximumValue]
   Original ABI encoding: f16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

float YYYBrightnessSlider::YYYBrightnessSlider__instance__maximumValue(ID param_1,SEL param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a43d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(*(code *)PTR_LAB_100d2e5f0)((long)_maximumValue);
  return fVar1;
}



/* -[YYYBrightnessSlider setMaximumValue:] | 0x1001a43ec | ABI v20@0:8f16 */

/* Address: 0x1001a43ec | YYYBrightnessSlider::YYYBrightnessSlider__instance__setMaximumValue_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider setMaximumValue:]
   Original ABI encoding: v20@0:8f16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setMaximumValue_
               (ID param_1,SEL param_2,float param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a43f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e610)();
  return;
}



/* -[YYYBrightnessSlider thumbView] | 0x1001a4428 | ABI @16@0:8 */

/* Address: 0x1001a4428 | YYYBrightnessSlider::YYYBrightnessSlider__instance__thumbView | bytes: 24 */

/* Recovered runtime selector: -[YYYBrightnessSlider thumbView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__thumbView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a443c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e640)(*(undefined8 *)(param_1 + (long)_thumbView));
  return IVar1;
}



/* -[YYYBrightnessSlider setThumbView:] | 0x1001a4450 | ABI v24@0:8@16 */

/* Address: 0x1001a4450 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setThumbView_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBrightnessSlider setThumbView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setThumbView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a446c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e660)();
  return;
}



/* -[YYYBrightnessSlider trackView] | 0x1001a44c4 | ABI @16@0:8 */

/* Address: 0x1001a44c4 | YYYBrightnessSlider::YYYBrightnessSlider__instance__trackView | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider trackView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__trackView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a44cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e688)();
  return IVar1;
}



/* -[YYYBrightnessSlider setTrackView:] | 0x1001a44e0 | ABI v24@0:8@16 */

/* Address: 0x1001a44e0 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setTrackView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBrightnessSlider setTrackView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setTrackView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a4500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e6a0)();
  return;
}



/* -[YYYBrightnessSlider leftImageView] | 0x1001a4558 | ABI @16@0:8 */

/* Address: 0x1001a4558 | YYYBrightnessSlider::YYYBrightnessSlider__instance__leftImageView | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider leftImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__leftImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a4560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e6e0)();
  return IVar1;
}



/* -[YYYBrightnessSlider setLeftImageView:] | 0x1001a458c | ABI v24@0:8@16 */

/* Address: 0x1001a458c | YYYBrightnessSlider::YYYBrightnessSlider__instance__setLeftImageView_ | bytes: 28 */

/* Recovered runtime selector: -[YYYBrightnessSlider setLeftImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setLeftImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a45a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e708)();
  return;
}



/* -[YYYBrightnessSlider rightImageView] | 0x1001a45fc | ABI @16@0:8 */

/* Address: 0x1001a45fc | YYYBrightnessSlider::YYYBrightnessSlider__instance__rightImageView | bytes: 20 */

/* Recovered runtime selector: -[YYYBrightnessSlider rightImageView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__rightImageView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a460c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e750)((long)_rightImageView);
  return IVar1;
}



/* -[YYYBrightnessSlider setRightImageView:] | 0x1001a4630 | ABI v24@0:8@16 */

/* Address: 0x1001a4630 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setRightImageView_ | bytes: 44 */

/* Recovered runtime selector: -[YYYBrightnessSlider setRightImageView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setRightImageView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a4658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e778)();
  return;
}



/* -[YYYBrightnessSlider pangGest] | 0x1001a4694 | ABI @16@0:8 */

/* Address: 0x1001a4694 | YYYBrightnessSlider::YYYBrightnessSlider__instance__pangGest | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider pangGest]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__pangGest(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a469c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e798)();
  return IVar1;
}



/* -[YYYBrightnessSlider setPangGest:] | 0x1001a46bc | ABI v24@0:8@16 */

/* Address: 0x1001a46bc | YYYBrightnessSlider::YYYBrightnessSlider__instance__setPangGest_ | bytes: 24 */

/* Recovered runtime selector: -[YYYBrightnessSlider setPangGest:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setPangGest_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a46d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e7c0)((long)_pangGest,param_1,param_3);
  return;
}



/* -[YYYBrightnessSlider startX] | 0x1001a46dc | ABI d16@0:8 */

/* Address: 0x1001a46dc | YYYBrightnessSlider::YYYBrightnessSlider__instance__startX | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider startX]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYBrightnessSlider::YYYBrightnessSlider__instance__startX(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a46e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d2e7c8)();
  return dVar1;
}



/* -[YYYBrightnessSlider setStartX:] | 0x1001a4704 | ABI v24@0:8d16 */

/* Address: 0x1001a4704 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setStartX_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider setStartX:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setStartX_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a470c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e7f0)();
  return;
}



/* -[YYYBrightnessSlider defaultValue] | 0x1001a4758 | ABI d16@0:8 */

/* Address: 0x1001a4758 | YYYBrightnessSlider::YYYBrightnessSlider__instance__defaultValue | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider defaultValue]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYBrightnessSlider::YYYBrightnessSlider__instance__defaultValue(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a4760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d2e830)();
  return dVar1;
}



/* -[YYYBrightnessSlider setDefaultValue:] | 0x1001a4780 | ABI v24@0:8d16 */

/* Address: 0x1001a4780 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setDefaultValue_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider setDefaultValue:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setDefaultValue_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a4788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e850)();
  return;
}



/* -[YYYBrightnessSlider drag] | 0x1001a47d0 | ABI B16@0:8 */

/* Address: 0x1001a47d0 | YYYBrightnessSlider::YYYBrightnessSlider__instance__drag | bytes: 24 */

/* Recovered runtime selector: -[YYYBrightnessSlider drag]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYBrightnessSlider::YYYBrightnessSlider__instance__drag(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a47e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d2e890)(*(undefined1 *)(param_1 + (long)_drag));
  return bVar1;
}



/* -[YYYBrightnessSlider setDrag:] | 0x1001a4800 | ABI v20@0:8B16 */

/* Address: 0x1001a4800 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setDrag_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider setDrag:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setDrag_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a4808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e8a8)(param_1,param_2,param_3);
  return;
}



/* -[YYYBrightnessSlider sliderContentView] | 0x1001a481c | ABI @16@0:8 */

/* Address: 0x1001a481c | YYYBrightnessSlider::YYYBrightnessSlider__instance__sliderContentView | bytes: 12 */

/* Recovered runtime selector: -[YYYBrightnessSlider sliderContentView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBrightnessSlider::YYYBrightnessSlider__instance__sliderContentView(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001a4824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d2e8b8)();
  return IVar1;
}



/* -[YYYBrightnessSlider setSliderContentView:] | 0x1001a4854 | ABI v24@0:8@16 */

/* Address: 0x1001a4854 | YYYBrightnessSlider::YYYBrightnessSlider__instance__setSliderContentView_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBrightnessSlider setSliderContentView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance__setSliderContentView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a4874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e8e8)();
  return;
}



/* -[YYYBrightnessSlider .cxx_destruct] | 0x1001a48c8 | ABI v16@0:8 */

/* Address: 0x1001a48c8 | YYYBrightnessSlider::YYYBrightnessSlider__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYBrightnessSlider .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBrightnessSlider::YYYBrightnessSlider__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001a48e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d2e918)();
  return;
}


