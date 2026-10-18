/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYFatArch | class address: 0x100c9a250
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYFatArch fatArch] | 0x1007637a4 | ABI ^{fat_arch=}16@0:8 */

/* Address: 0x1007637a4 | YYYFatArch::YYYFatArch__instance__fatArch | bytes: 20 */

/* Recovered runtime selector: -[YYYFatArch fatArch]
   Original ABI encoding: ^{fat_arch=}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

fat_arch * YYYFatArch::YYYFatArch__instance__fatArch(ID param_1,SEL param_2)

{
  fat_arch *pfVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007637b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pfVar1 = (fat_arch *)(*(code *)PTR_LAB_100e23a30)((long)_fatArch);
  return pfVar1;
}



/* -[YYYFatArch setFatArch:] | 0x1007637cc | ABI v24@0:8^{fat_arch=}16 */

/* Address: 0x1007637cc | YYYFatArch::YYYFatArch__instance__setFatArch_ | bytes: 12 */

/* Recovered runtime selector: -[YYYFatArch setFatArch:]
   Original ABI encoding: v24@0:8^{fat_arch=}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYFatArch::YYYFatArch__instance__setFatArch_(ID param_1,SEL param_2,fat_arch *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007637d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e23a50)();
  return;
}


