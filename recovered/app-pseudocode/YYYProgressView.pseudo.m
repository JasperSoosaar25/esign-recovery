/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYProgressView | class address: 0x100c7fc40
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYProgressView initWithFrame:] | 0x10027a678 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10027a678 | YYYProgressView::YYYProgressView__instance__initWithFrame_ | bytes: 68 */

/* Recovered runtime selector: -[YYYProgressView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYProgressView::YYYProgressView__instance__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027a6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d76390)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYProgressView drawRect:] | 0x10027a7dc | ABI v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x10027a7dc | YYYProgressView::YYYProgressView__instance__drawRect_ | bytes: 88 */

/* Recovered runtime selector: -[YYYProgressView drawRect:]
   Original ABI encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressView::YYYProgressView__instance__drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010027a830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d76430)
            (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return;
}



/* -[YYYProgressView setFinishValue:] | 0x10027abdc | ABI v24@0:8d16 */

/* Address: 0x10027abdc | YYYProgressView::YYYProgressView__instance__setFinishValue_ | bytes: 44 */

/* Recovered runtime selector: -[YYYProgressView setFinishValue:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressView::YYYProgressView__instance__setFinishValue_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010027ac04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d764e0)();
  return;
}



/* -[YYYProgressView setCurrentValue:] | 0x10027ac3c | ABI v24@0:8d16 */

/* Address: 0x10027ac3c | YYYProgressView::YYYProgressView__instance__setCurrentValue_ | bytes: 36 */

/* Recovered runtime selector: -[YYYProgressView setCurrentValue:]
   Original ABI encoding: v24@0:8d16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYProgressView::YYYProgressView__instance__setCurrentValue_
               (ID param_1,SEL param_2,double param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010027ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d76500)();
  return;
}



/* -[YYYProgressView finishValue] | 0x10027acec | ABI d16@0:8 */

/* Address: 0x10027acec | YYYProgressView::YYYProgressView__instance__finishValue | bytes: 20 */

/* Recovered runtime selector: -[YYYProgressView finishValue]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYProgressView::YYYProgressView__instance__finishValue(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027acfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d76558)((long)_finishValue);
  return dVar1;
}



/* -[YYYProgressView currentValue] | 0x10027ad20 | ABI d16@0:8 */

/* Address: 0x10027ad20 | YYYProgressView::YYYProgressView__instance__currentValue | bytes: 20 */

/* Recovered runtime selector: -[YYYProgressView currentValue]
   Original ABI encoding: d16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

double YYYProgressView::YYYProgressView__instance__currentValue(ID param_1,SEL param_2)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010027ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = (double)(*(code *)PTR_LAB_100d76590)((long)_currentValue);
  return dVar1;
}


