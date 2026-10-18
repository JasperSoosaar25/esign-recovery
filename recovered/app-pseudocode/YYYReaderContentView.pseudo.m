/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYReaderContentView | class address: 0x100c81878
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYReaderContentView setAttributeString:] | 0x1003cf760 | ABI v24@0:8@16 */

/* Address: 0x1003cf760 | YYYReaderContentView::YYYReaderContentView__instance__setAttributeString_ | bytes: 36 */

/* Recovered runtime selector: -[YYYReaderContentView setAttributeString:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentView::YYYReaderContentView__instance__setAttributeString_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cf780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100deb3c8)();
  return;
}



/* -[YYYReaderContentView drawRect:] | 0x1003cf82c | ABI v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1003cf82c | YYYReaderContentView::YYYReaderContentView__instance__drawRect_ | bytes: 40 */

/* Recovered runtime selector: -[YYYReaderContentView drawRect:]
   Original ABI encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentView::YYYReaderContentView__instance__drawRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cf850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deb430)
            (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return;
}



/* -[YYYReaderContentView attributeString] | 0x1003cfad4 | ABI @16@0:8 */

/* Address: 0x1003cfad4 | YYYReaderContentView::YYYReaderContentView__instance__attributeString | bytes: 12 */

/* Recovered runtime selector: -[YYYReaderContentView attributeString]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYReaderContentView::YYYReaderContentView__instance__attributeString(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003cfadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100deb4e8)();
  return IVar1;
}



/* -[YYYReaderContentView .cxx_destruct] | 0x1003cfb08 | ABI v16@0:8 */

/* Address: 0x1003cfb08 | YYYReaderContentView::YYYReaderContentView__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYReaderContentView .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYReaderContentView::YYYReaderContentView__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003cfb24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100deb520)((long)_attributeString);
  return;
}


