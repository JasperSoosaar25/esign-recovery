/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLoadCommand | class address: 0x100c9a020
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYLoadCommand cmd] | 0x10075a438 | ABI I16@0:8 */

/* Address: 0x10075a438 | YYYLoadCommand::YYYLoadCommand__instance__cmd | bytes: 28 */

/* Recovered runtime selector: -[YYYLoadCommand cmd]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYLoadCommand::YYYLoadCommand__instance__cmd(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e1fe60)((int)param_1);
  return uVar1;
}



/* -[YYYLoadCommand cmdSize] | 0x10075a498 | ABI I16@0:8 */

/* Address: 0x10075a498 | YYYLoadCommand::YYYLoadCommand__instance__cmdSize | bytes: 28 */

/* Recovered runtime selector: -[YYYLoadCommand cmdSize]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYLoadCommand::YYYLoadCommand__instance__cmdSize(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075a4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e1fea8)((int)param_1);
  return uVar1;
}



/* -[YYYLoadCommand loadCmd] | 0x10075a4f8 | ABI ^{load_command=II}16@0:8 */

/* Address: 0x10075a4f8 | YYYLoadCommand::YYYLoadCommand__instance__loadCmd | bytes: 20 */

/* Recovered runtime selector: -[YYYLoadCommand loadCmd]
   Original ABI encoding: ^{load_command=II}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

load_command * YYYLoadCommand::YYYLoadCommand__instance__loadCmd(ID param_1,SEL param_2)

{
  load_command *plVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075a508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (load_command *)(*(code *)PTR_LAB_100e1fee8)((long)_loadCmd);
  return plVar1;
}



/* -[YYYLoadCommand setLoadCmd:] | 0x10075a52c | ABI v24@0:8^{load_command=II}16 */

/* Address: 0x10075a52c | YYYLoadCommand::YYYLoadCommand__instance__setLoadCmd_ | bytes: 20 */

/* Recovered runtime selector: -[YYYLoadCommand setLoadCmd:]
   Original ABI encoding: v24@0:8^{load_command=II}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYLoadCommand::YYYLoadCommand__instance__setLoadCmd_
               (ID param_1,SEL param_2,load_command *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075a53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e1ff10)((long)_loadCmd);
  return;
}


