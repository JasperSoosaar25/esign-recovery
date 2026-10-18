/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYOffsetNode | class address: 0x100c9a188
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYOffsetNode init] | 0x100762cc8 | ABI @16@0:8 */

/* Address: 0x100762cc8 | YYYOffsetNode::YYYOffsetNode__instance__init | bytes: 44 */

/* Recovered runtime selector: -[YYYOffsetNode init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYOffsetNode::YYYOffsetNode__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100762cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e23528)();
  return IVar1;
}



/* -[YYYOffsetNode offset] | 0x100762dec | ABI q16@0:8 */

/* Address: 0x100762dec | YYYOffsetNode::YYYOffsetNode__instance__offset | bytes: 12 */

/* Recovered runtime selector: -[YYYOffsetNode offset]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYOffsetNode::YYYOffsetNode__instance__offset(ID param_1,SEL param_2)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100762df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100e235d0)();
  return lVar1;
}



/* -[YYYOffsetNode setOffset:] | 0x100762e0c | ABI v24@0:8q16 */

/* Address: 0x100762e0c | YYYOffsetNode::YYYOffsetNode__instance__setOffset_ | bytes: 12 */

/* Recovered runtime selector: -[YYYOffsetNode setOffset:]
   Original ABI encoding: v24@0:8q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYOffsetNode::YYYOffsetNode__instance__setOffset_(ID param_1,SEL param_2,long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100762e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e235f0)();
  return;
}



/* -[YYYOffsetNode shouldSwap] | 0x100762e38 | ABI B16@0:8 */

/* Address: 0x100762e38 | YYYOffsetNode::YYYOffsetNode__instance__shouldSwap | bytes: 12 */

/* Recovered runtime selector: -[YYYOffsetNode shouldSwap]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYOffsetNode::YYYOffsetNode__instance__shouldSwap(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100762e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e23620)((int)param_1);
  return bVar1;
}



/* -[YYYOffsetNode setShouldSwap:] | 0x100762e6c | ABI v20@0:8B16 */

/* Address: 0x100762e6c | YYYOffsetNode::YYYOffsetNode__instance__setShouldSwap_ | bytes: 8 */

/* Recovered runtime selector: -[YYYOffsetNode setShouldSwap:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYOffsetNode::YYYOffsetNode__instance__setShouldSwap_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}


