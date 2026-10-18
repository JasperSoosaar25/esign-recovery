/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYDylibCommand | class address: 0x100c9a0c0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYDylibCommand linkName] | 0x10075e3c0 | ABI @16@0:8 */

/* Address: 0x10075e3c0 | YYYDylibCommand::YYYDylibCommand__instance__linkName | bytes: 12 */

/* Recovered runtime selector: -[YYYDylibCommand linkName]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYDylibCommand::YYYDylibCommand__instance__linkName(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e217d8)();
  return IVar1;
}



/* -[YYYDylibCommand setLinkName:] | 0x10075e3e8 | ABI v24@0:8@16 */

/* Address: 0x10075e3e8 | YYYDylibCommand::YYYDylibCommand__instance__setLinkName_ | bytes: 20 */

/* Recovered runtime selector: -[YYYDylibCommand setLinkName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDylibCommand::YYYDylibCommand__instance__setLinkName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21800)();
  return;
}



/* -[YYYDylibCommand dylibCmd] | 0x10075e41c | ABI ^{dylib_command=II{dylib=(lc_str=I)III}}16@0:8 */

/* Address: 0x10075e41c | YYYDylibCommand::YYYDylibCommand__instance__dylibCmd | bytes: 12 */

/* Recovered runtime selector: -[YYYDylibCommand dylibCmd]
   Original ABI encoding: ^{dylib_command=II{dylib=(lc_str=I)III}}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

dylib_command * YYYDylibCommand::YYYDylibCommand__instance__dylibCmd(ID param_1,SEL param_2)

{
  dylib_command *pdVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pdVar1 = (dylib_command *)(*(code *)PTR_LAB_100e21818)();
  return pdVar1;
}



/* -[YYYDylibCommand setDylibCmd:] | 0x10075e444 | ABI v24@0:8^{dylib_command=II{dylib=(lc_str=I)III}}16 */

/* Address: 0x10075e444 | YYYDylibCommand::YYYDylibCommand__instance__setDylibCmd_ | bytes: 12 */

/* Recovered runtime selector: -[YYYDylibCommand setDylibCmd:]
   Original ABI encoding: v24@0:8^{dylib_command=II{dylib=(lc_str=I)III}}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDylibCommand::YYYDylibCommand__instance__setDylibCmd_
               (ID param_1,SEL param_2,dylib_command *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21840)();
  return;
}



/* -[YYYDylibCommand .cxx_destruct] | 0x10075e488 | ABI v16@0:8 */

/* Address: 0x10075e488 | YYYDylibCommand::YYYDylibCommand__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYDylibCommand .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYDylibCommand::YYYDylibCommand__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21868)();
  return;
}


