/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFatArchO | class address: 0x100c9a1d8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFatArchO reallocCodeSignSpace] | 0x100762e74 | ABI I16@0:8 */

/* Address: 0x100762e74 | YYYFatArchO::YYYFatArchO__instance__reallocCodeSignSpace | bytes: 40 */

/* Recovered runtime selector: -[YYYFatArchO reallocCodeSignSpace]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYFatArchO::YYYFatArchO__instance__reallocCodeSignSpace(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100762e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e23658)((int)param_1);
  return uVar1;
}



/* -[YYYFatArchO AddCodeSignSpaceLength:] | 0x100763254 | ABI I20@0:8I16 */

/* Address: 0x100763254 | YYYFatArchO::YYYFatArchO__instance__AddCodeSignSpaceLength_ | bytes: 48 */

/* Recovered runtime selector: -[YYYFatArchO AddCodeSignSpaceLength:]
   Original ABI encoding: I20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int
YYYFatArchO::YYYFatArchO__instance__AddCodeSignSpaceLength_
          (ID param_1,SEL param_2,unsigned_int param_3)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100763280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e237c0)((int)param_1,param_2,param_3);
  return uVar1;
}



/* -[YYYFatArchO fatArch] | 0x100763694 | ABI @16@0:8 */

/* Address: 0x100763694 | YYYFatArchO::YYYFatArchO__instance__fatArch | bytes: 12 */

/* Recovered runtime selector: -[YYYFatArchO fatArch]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYFatArchO::YYYFatArchO__instance__fatArch(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e23988)();
  return IVar1;
}



/* -[YYYFatArchO setFatArch:] | 0x1007636c8 | ABI v24@0:8@16 */

/* Address: 0x1007636c8 | YYYFatArchO::YYYFatArchO__instance__setFatArch_ | bytes: 32 */

/* Recovered runtime selector: -[YYYFatArchO setFatArch:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFatArchO::YYYFatArchO__instance__setFatArch_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007636e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e239b8)();
  return;
}



/* -[YYYFatArchO .cxx_destruct] | 0x100763738 | ABI v16@0:8 */

/* Address: 0x100763738 | YYYFatArchO::YYYFatArchO__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYFatArchO .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFatArchO::YYYFatArchO__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100763754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e239e0)((long)_fatArch);
  return;
}


