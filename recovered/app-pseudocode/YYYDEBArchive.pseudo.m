/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYDEBArchive | class address: 0x100c7e7b8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYDEBArchive initWithFilePath:toDestination:] | 0x1001e7484 | ABI @32@0:8@16@24 */

/* Address: 0x1001e7484 | YYYDEBArchive::YYYDEBArchive__instance__initWithFilePath_toDestination_ | bytes: 44 */

/* Recovered runtime selector: -[YYYDEBArchive initWithFilePath:toDestination:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDEBArchive::YYYDEBArchive__instance__initWithFilePath_toDestination_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e74ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d46718)();
  return IVar1;
}



/* -[YYYDEBArchive decompress] | 0x1001e776c | ABI B16@0:8 */

/* Address: 0x1001e776c | YYYDEBArchive::YYYDEBArchive__instance__decompress | bytes: 76 */

/* Recovered runtime selector: -[YYYDEBArchive decompress]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYDEBArchive::YYYDEBArchive__instance__decompress(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e77b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100d46800)(0x100e91958,(int)param_1);
  return bVar1;
}



/* -[YYYDEBArchive simpleUnarchiver:shouldExtractEntryWithDictionary:to:] | 0x1001e8510 | ABI B40@0:8@16@24@32 */

/* Address: 0x1001e8510 | YYYDEBArchive::YYYDEBArchive__instance__simpleUnarchiver_shouldExtractEntryWithDictionary_to_ | bytes: 52 */

/* Recovered runtime selector: -[YYYDEBArchive
   simpleUnarchiver:shouldExtractEntryWithDictionary:to:]
   Original ABI encoding: B40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYDEBArchive::YYYDEBArchive__instance__simpleUnarchiver_shouldExtractEntryWithDictionary_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e8540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d46db8)((int)param_1);
  return bVar1;
}



/* -[YYYDEBArchive filePath] | 0x1001e8a70 | ABI @16@0:8 */

/* Address: 0x1001e8a70 | YYYDEBArchive::YYYDEBArchive__instance__filePath | bytes: 12 */

/* Recovered runtime selector: -[YYYDEBArchive filePath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDEBArchive::YYYDEBArchive__instance__filePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e8a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d46f58)();
  return IVar1;
}



/* -[YYYDEBArchive setFilePath:] | 0x1001e8a9c | ABI v24@0:8@16 */

/* Address: 0x1001e8a9c | YYYDEBArchive::YYYDEBArchive__instance__setFilePath_ | bytes: 40 */

/* Recovered runtime selector: -[YYYDEBArchive setFilePath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDEBArchive::YYYDEBArchive__instance__setFilePath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d46f80)();
  return;
}



/* -[YYYDEBArchive destinationPath] | 0x1001e8b14 | ABI @16@0:8 */

/* Address: 0x1001e8b14 | YYYDEBArchive::YYYDEBArchive__instance__destinationPath | bytes: 12 */

/* Recovered runtime selector: -[YYYDEBArchive destinationPath]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDEBArchive::YYYDEBArchive__instance__destinationPath(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e8b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d46fb8)();
  return IVar1;
}



/* -[YYYDEBArchive setDestinationPath:] | 0x1001e8b40 | ABI v24@0:8@16 */

/* Address: 0x1001e8b40 | YYYDEBArchive::YYYDEBArchive__instance__setDestinationPath_ | bytes: 12 */

/* Recovered runtime selector: -[YYYDEBArchive setDestinationPath:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDEBArchive::YYYDEBArchive__instance__setDestinationPath_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d46fe8)();
  return;
}



/* -[YYYDEBArchive XADarchiver] | 0x1001e8b54 | ABI @16@0:8 */

/* Address: 0x1001e8b54 | YYYDEBArchive::YYYDEBArchive__instance__XADarchiver | bytes: 12 */

/* Recovered runtime selector: -[YYYDEBArchive XADarchiver]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDEBArchive::YYYDEBArchive__instance__XADarchiver(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e8b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d46ff8)();
  return IVar1;
}



/* -[YYYDEBArchive setXADarchiver:] | 0x1001e8b80 | ABI v24@0:8@16 */

/* Address: 0x1001e8b80 | YYYDEBArchive::YYYDEBArchive__instance__setXADarchiver_ | bytes: 28 */

/* Recovered runtime selector: -[YYYDEBArchive setXADarchiver:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDEBArchive::YYYDEBArchive__instance__setXADarchiver_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47020)();
  return;
}



/* -[YYYDEBArchive .cxx_destruct] | 0x1001e8bdc | ABI v16@0:8 */

/* Address: 0x1001e8bdc | YYYDEBArchive::YYYDEBArchive__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYDEBArchive .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDEBArchive::YYYDEBArchive__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001e8bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d47050)();
  return;
}


