/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYTextViewEditorTool | class address: 0x100c7b768
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYTextViewEditorTool initWithFrame:] | 0x1000361c8 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1000361c8 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__initWithFrame_ | bytes: 40 */

/* Recovered runtime selector: -[YYYTextViewEditorTool initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTextViewEditorTool::YYYTextViewEditorTool__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000361ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb0f28)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYTextViewEditorTool loadSubviews] | 0x1000362e8 | ABI v16@0:8 */

/* Address: 0x1000362e8 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__loadSubviews | bytes: 44 */

/* Recovered runtime selector: -[YYYTextViewEditorTool loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance__loadSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100036310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb0fc0)(0x100e90f3c);
  return;
}



/* -[YYYTextViewEditorTool layoutSubviews] | 0x100036a64 | ABI v16@0:8 */

/* Address: 0x100036a64 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__layoutSubviews | bytes: 68 */

/* Recovered runtime selector: -[YYYTextViewEditorTool layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance__layoutSubviews(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100036aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb1068)();
  return;
}



/* -[YYYTextViewEditorTool finishButton] | 0x100036e24 | ABI @16@0:8 */

/* Address: 0x100036e24 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__finishButton | bytes: 12 */

/* Recovered runtime selector: -[YYYTextViewEditorTool finishButton]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTextViewEditorTool::YYYTextViewEditorTool__instance__finishButton(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100036e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb10c8)();
  return IVar1;
}



/* -[YYYTextViewEditorTool setFinishButton:] | 0x100036e4c | ABI v24@0:8@16 */

/* Address: 0x100036e4c | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setFinishButton_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTextViewEditorTool setFinishButton:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setFinishButton_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100036e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb10e8)();
  return;
}



/* -[YYYTextViewEditorTool fontSizeLabel] | 0x100036ee4 | ABI @16@0:8 */

/* Address: 0x100036ee4 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__fontSizeLabel | bytes: 24 */

/* Recovered runtime selector: -[YYYTextViewEditorTool fontSizeLabel]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTextViewEditorTool::YYYTextViewEditorTool__instance__fontSizeLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100036ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb1130)(*(undefined8 *)(param_1 + (long)_fontSizeLabel));
  return IVar1;
}



/* -[YYYTextViewEditorTool setFontSizeLabel:] | 0x100036f0c | ABI v24@0:8@16 */

/* Address: 0x100036f0c | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setFontSizeLabel_ | bytes: 28 */

/* Recovered runtime selector: -[YYYTextViewEditorTool setFontSizeLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setFontSizeLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100036f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb1158)();
  return;
}



/* -[YYYTextViewEditorTool stepper] | 0x100036f70 | ABI @16@0:8 */

/* Address: 0x100036f70 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__stepper | bytes: 20 */

/* Recovered runtime selector: -[YYYTextViewEditorTool stepper]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYTextViewEditorTool::YYYTextViewEditorTool__instance__stepper(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100036f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb1188)((long)_stepper);
  return IVar1;
}



/* -[YYYTextViewEditorTool setStepper:] | 0x100036f8c | ABI v24@0:8@16 */

/* Address: 0x100036f8c | YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setStepper_ | bytes: 36 */

/* Recovered runtime selector: -[YYYTextViewEditorTool setStepper:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance__setStepper_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100036fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb1190)();
  return;
}



/* -[YYYTextViewEditorTool .cxx_destruct] | 0x100037000 | ABI v16@0:8 */

/* Address: 0x100037000 | YYYTextViewEditorTool::YYYTextViewEditorTool__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYTextViewEditorTool .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYTextViewEditorTool::YYYTextViewEditorTool__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003701c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb11c8)();
  return;
}


