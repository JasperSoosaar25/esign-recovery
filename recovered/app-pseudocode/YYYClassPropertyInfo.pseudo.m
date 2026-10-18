/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYClassPropertyInfo | class address: 0x100c7b8a8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYClassPropertyInfo initWithProperty:] | 0x10003c6b8 | ABI @24@0:8^{objc_property=}16 */

/* Address: 0x10003c6b8 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__initWithProperty_ | bytes: 60 */

/* Recovered runtime selector: -[YYYClassPropertyInfo initWithProperty:]
   Original ABI encoding: @24@0:8^{objc_property=}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__initWithProperty_
             (ID param_1,SEL param_2,objc_property_conflict *param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb4258)(0x100e90f50);
  return IVar1;
}



/* -[YYYClassPropertyInfo description] | 0x10003d770 | ABI @16@0:8 */

/* Address: 0x10003d770 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__description | bytes: 60 */

/* Recovered runtime selector: -[YYYClassPropertyInfo description]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__description(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003d7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb4b90)(0x100e90f54);
  return IVar1;
}



/* -[YYYClassPropertyInfo property] | 0x10003efe8 | ABI ^{objc_property=}16@0:8 */

/* Address: 0x10003efe8 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__property | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo property]
   Original ABI encoding: ^{objc_property=}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

objc_property_conflict *
YYYClassPropertyInfo::YYYClassPropertyInfo__instance__property(ID param_1,SEL param_2)

{
  objc_property_conflict *poVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  poVar1 = (objc_property_conflict *)(*(code *)PTR_LAB_100cb5108)();
  return poVar1;
}



/* -[YYYClassPropertyInfo name] | 0x10003f014 | ABI @16@0:8 */

/* Address: 0x10003f014 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5138)();
  return IVar1;
}



/* -[YYYClassPropertyInfo type] | 0x10003f034 | ABI Q16@0:8 */

/* Address: 0x10003f034 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__type | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo type]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYClassPropertyInfo::YYYClassPropertyInfo__instance__type(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100cb5160)();
  return uVar1;
}



/* -[YYYClassPropertyInfo typeEncoding] | 0x10003f054 | ABI @16@0:8 */

/* Address: 0x10003f054 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__typeEncoding | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo typeEncoding]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__typeEncoding(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5180)();
  return IVar1;
}



/* -[YYYClassPropertyInfo ivarName] | 0x10003f080 | ABI @16@0:8 */

/* Address: 0x10003f080 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__ivarName | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo ivarName]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__ivarName(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb51a8)();
  return IVar1;
}



/* -[YYYClassPropertyInfo cls] | 0x10003f0b0 | ABI #16@0:8 */

/* Address: 0x10003f0b0 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__cls | bytes: 8 */

/* Recovered runtime selector: -[YYYClassPropertyInfo cls]
   Original ABI encoding: #16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CLASS YYYClassPropertyInfo::YYYClassPropertyInfo__instance__cls(ID param_1,SEL param_2)

{
  return *(CLASS *)(param_1 + 0x30);
}



/* -[YYYClassPropertyInfo protocols] | 0x10003f0b8 | ABI @16@0:8 */

/* Address: 0x10003f0b8 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__protocols | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo protocols]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassPropertyInfo::YYYClassPropertyInfo__instance__protocols(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb51e0)();
  return IVar1;
}



/* -[YYYClassPropertyInfo getter] | 0x10003f0d8 | ABI :16@0:8 */

/* Address: 0x10003f0d8 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__getter | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo getter]
   Original ABI encoding: :16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

SEL YYYClassPropertyInfo::YYYClassPropertyInfo__instance__getter(ID param_1,SEL param_2)

{
  SEL pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (SEL)(*(code *)PTR_LAB_100cb5200)();
  return pcVar1;
}



/* -[YYYClassPropertyInfo setter] | 0x10003f0ec | ABI :16@0:8 */

/* Address: 0x10003f0ec | YYYClassPropertyInfo::YYYClassPropertyInfo__instance__setter | bytes: 12 */

/* Recovered runtime selector: -[YYYClassPropertyInfo setter]
   Original ABI encoding: :16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

SEL YYYClassPropertyInfo::YYYClassPropertyInfo__instance__setter(ID param_1,SEL param_2)

{
  SEL pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (SEL)(*(code *)PTR_LAB_100cb5210)();
  return pcVar1;
}



/* -[YYYClassPropertyInfo .cxx_destruct] | 0x10003f118 | ABI v16@0:8 */

/* Address: 0x10003f118 | YYYClassPropertyInfo::YYYClassPropertyInfo__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYClassPropertyInfo .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassPropertyInfo::YYYClassPropertyInfo__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb5240)();
  return;
}


