/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYlinkeditDataCommand | class address: 0x100c9a160
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYlinkeditDataCommand linkeditDataCommand] | 0x10075eb54 | ABI ^{linkedit_data_command=IIII}16@0:8 */

/* Address: 0x10075eb54 | YYYlinkeditDataCommand::YYYlinkeditDataCommand__instance__linkeditDataCommand | bytes: 12 */

/* Recovered runtime selector: -[YYYlinkeditDataCommand linkeditDataCommand]
   Original ABI encoding: ^{linkedit_data_command=IIII}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

linkedit_data_command *
YYYlinkeditDataCommand::YYYlinkeditDataCommand__instance__linkeditDataCommand
          (ID param_1,SEL param_2)

{
  linkedit_data_command *plVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075eb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (linkedit_data_command *)(*(code *)PTR_LAB_100e21d18)();
  return plVar1;
}



/* -[YYYlinkeditDataCommand setLinkeditDataCommand:] | 0x10075eb88 | ABI v24@0:8^{linkedit_data_command=IIII}16 */

/* Address: 0x10075eb88 | YYYlinkeditDataCommand::YYYlinkeditDataCommand__instance__setLinkeditDataCommand_ | bytes: 12 */

/* Recovered runtime selector: -[YYYlinkeditDataCommand setLinkeditDataCommand:]
   Original ABI encoding: v24@0:8^{linkedit_data_command=IIII}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYlinkeditDataCommand::YYYlinkeditDataCommand__instance__setLinkeditDataCommand_
               (ID param_1,SEL param_2,linkedit_data_command *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075eb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21d40)();
  return;
}


