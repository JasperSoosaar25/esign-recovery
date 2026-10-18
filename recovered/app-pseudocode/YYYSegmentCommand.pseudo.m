/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSegmentCommand | class address: 0x100c9a790
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSegmentCommand segmentCommand] | 0x10076e874 | ABI ^{segment_command=II[16c]IIIIiiII}16@0:8 */

/* Address: 0x10076e874 | YYYSegmentCommand::YYYSegmentCommand__instance__segmentCommand | bytes: 12 */

/* Recovered runtime selector: -[YYYSegmentCommand segmentCommand]
   Original ABI encoding: ^{segment_command=II[16c]IIIIiiII}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

segment_command *
YYYSegmentCommand::YYYSegmentCommand__instance__segmentCommand(ID param_1,SEL param_2)

{
  segment_command *psVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076e87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  psVar1 = (segment_command *)(*(code *)PTR_LAB_100e281a0)();
  return psVar1;
}



/* -[YYYSegmentCommand setSegmentCommand:] | 0x10076e8a8 | ABI v24@0:8^{segment_command=II[16c]IIIIiiII}16 */

/* Address: 0x10076e8a8 | YYYSegmentCommand::YYYSegmentCommand__instance__setSegmentCommand_ | bytes: 12 */

/* Recovered runtime selector: -[YYYSegmentCommand setSegmentCommand:]
   Original ABI encoding: v24@0:8^{segment_command=II[16c]IIIIiiII}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSegmentCommand::YYYSegmentCommand__instance__setSegmentCommand_
               (ID param_1,SEL param_2,segment_command *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010076e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e281d0)();
  return;
}



/* -[YYYSegmentCommand segmentCommand64] | 0x10076e8e0 | ABI ^{segment_command_64=II[16c]QQQQiiII}16@0:8 */

/* Address: 0x10076e8e0 | YYYSegmentCommand::YYYSegmentCommand__instance__segmentCommand64 | bytes: 12 */

/* Recovered runtime selector: -[YYYSegmentCommand segmentCommand64]
   Original ABI encoding: ^{segment_command_64=II[16c]QQQQiiII}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

segment_command_64 *
YYYSegmentCommand::YYYSegmentCommand__instance__segmentCommand64(ID param_1,SEL param_2)

{
  segment_command_64 *psVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010076e8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  psVar1 = (segment_command_64 *)(*(code *)PTR_LAB_100e281f8)();
  return psVar1;
}



/* -[YYYSegmentCommand setSegmentCommand64:] | 0x10076e908 | ABI v24@0:8^{segment_command_64=II[16c]QQQQiiII}16 */

/* Address: 0x10076e908 | YYYSegmentCommand::YYYSegmentCommand__instance__setSegmentCommand64_ | bytes: 20 */

/* Recovered runtime selector: -[YYYSegmentCommand setSegmentCommand64:]
   Original ABI encoding: v24@0:8^{segment_command_64=II[16c]QQQQiiII}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSegmentCommand::YYYSegmentCommand__instance__setSegmentCommand64_
               (ID param_1,SEL param_2,segment_command_64 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010076e918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e28218)((long)_segmentCommand64);
  return;
}


