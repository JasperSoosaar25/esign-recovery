/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYClassMethodInfo | class address: 0x100c7b858
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYClassMethodInfo initWithMethod:] | 0x10003b6e0 | ABI @24@0:8^{objc_method=}16 */

/* Address: 0x10003b6e0 | YYYClassMethodInfo::YYYClassMethodInfo__instance__initWithMethod_ | bytes: 60 */

/* Recovered runtime selector: -[YYYClassMethodInfo initWithMethod:]
   Original ABI encoding: @24@0:8^{objc_method=}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__initWithMethod_
             (ID param_1,SEL param_2,objc_method *param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003b718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb3ae0)();
  return IVar1;
}



/* -[YYYClassMethodInfo description] | 0x10003bdb4 | ABI @16@0:8 */

/* Address: 0x10003bdb4 | YYYClassMethodInfo::YYYClassMethodInfo__instance__description | bytes: 56 */

/* Recovered runtime selector: -[YYYClassMethodInfo description]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__description(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003bde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb3ef0)(0x100e90f4c);
  return IVar1;
}



/* -[YYYClassMethodInfo method] | 0x10003c4e0 | ABI ^{objc_method=}16@0:8 */

/* Address: 0x10003c4e0 | YYYClassMethodInfo::YYYClassMethodInfo__instance__method | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo method]
   Original ABI encoding: ^{objc_method=}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

objc_method * YYYClassMethodInfo::YYYClassMethodInfo__instance__method(ID param_1,SEL param_2)

{
  objc_method *poVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  poVar1 = (objc_method *)(*(code *)PTR_LAB_100cb4120)();
  return poVar1;
}



/* -[YYYClassMethodInfo name] | 0x10003c510 | ABI @16@0:8 */

/* Address: 0x10003c510 | YYYClassMethodInfo::YYYClassMethodInfo__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb4148)();
  return IVar1;
}



/* -[YYYClassMethodInfo sel] | 0x10003c530 | ABI :16@0:8 */

/* Address: 0x10003c530 | YYYClassMethodInfo::YYYClassMethodInfo__instance__sel | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo sel]
   Original ABI encoding: :16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

SEL YYYClassMethodInfo::YYYClassMethodInfo__instance__sel(ID param_1,SEL param_2)

{
  SEL pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (SEL)(*(code *)PTR_LAB_100cb4170)();
  return pcVar1;
}



/* -[YYYClassMethodInfo imp] | 0x10003c560 | ABI ^?16@0:8 */

/* Address: 0x10003c560 | YYYClassMethodInfo::YYYClassMethodInfo__instance__imp | bytes: 8 */

/* Recovered runtime selector: -[YYYClassMethodInfo imp]
   Original ABI encoding: ^?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

undefined4 * YYYClassMethodInfo::YYYClassMethodInfo__instance__imp(ID param_1,SEL param_2)

{
  return *(undefined4 **)(param_1 + 0x20);
}



/* -[YYYClassMethodInfo typeEncoding] | 0x10003c568 | ABI @16@0:8 */

/* Address: 0x10003c568 | YYYClassMethodInfo::YYYClassMethodInfo__instance__typeEncoding | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo typeEncoding]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__typeEncoding(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb4198)();
  return IVar1;
}



/* -[YYYClassMethodInfo returnType] | 0x10003c594 | ABI Q16@0:8 */

/* Address: 0x10003c594 | YYYClassMethodInfo::YYYClassMethodInfo__instance__returnType | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo returnType]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYClassMethodInfo::YYYClassMethodInfo__instance__returnType(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100cb41c8)();
  return uVar1;
}



/* -[YYYClassMethodInfo returnTypeEncoding] | 0x10003c5b4 | ABI @16@0:8 */

/* Address: 0x10003c5b4 | YYYClassMethodInfo::YYYClassMethodInfo__instance__returnTypeEncoding | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo returnTypeEncoding]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__returnTypeEncoding(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb41e8)();
  return IVar1;
}



/* -[YYYClassMethodInfo argumentTypeEncodings] | 0x10003c5d4 | ABI @16@0:8 */

/* Address: 0x10003c5d4 | YYYClassMethodInfo::YYYClassMethodInfo__instance__argumentTypeEncodings | bytes: 8 */

/* Recovered runtime selector: -[YYYClassMethodInfo argumentTypeEncodings]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__argumentTypeEncodings(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x40);
}



/* -[YYYClassMethodInfo arguments] | 0x10003c5dc | ABI @16@0:8 */

/* Address: 0x10003c5dc | YYYClassMethodInfo::YYYClassMethodInfo__instance__arguments | bytes: 12 */

/* Recovered runtime selector: -[YYYClassMethodInfo arguments]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassMethodInfo::YYYClassMethodInfo__instance__arguments(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb4210)();
  return IVar1;
}



/* -[YYYClassMethodInfo .cxx_destruct] | 0x10003c5f0 | ABI v16@0:8 */

/* Address: 0x10003c5f0 | YYYClassMethodInfo::YYYClassMethodInfo__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYClassMethodInfo .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassMethodInfo::YYYClassMethodInfo__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003c608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb4220)();
  return;
}


