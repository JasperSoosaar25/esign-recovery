/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYMachHeader | class address: 0x100c9a110
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYMachHeader magic] | 0x10075e4f4 | ABI I16@0:8 */

/* Address: 0x10075e4f4 | YYYMachHeader::YYYMachHeader__instance__magic | bytes: 28 */

/* Recovered runtime selector: -[YYYMachHeader magic]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYMachHeader::YYYMachHeader__instance__magic(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_100e218a8)((int)param_1);
  return uVar1;
}



/* -[YYYMachHeader filetype] | 0x10075e5c0 | ABI I16@0:8 */

/* Address: 0x10075e5c0 | YYYMachHeader::YYYMachHeader__instance__filetype | bytes: 28 */

/* Recovered runtime selector: -[YYYMachHeader filetype]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYMachHeader::YYYMachHeader__instance__filetype(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e21940)((int)param_1);
  return uVar1;
}



/* -[YYYMachHeader ncmds] | 0x10075e668 | ABI I16@0:8 */

/* Address: 0x10075e668 | YYYMachHeader::YYYMachHeader__instance__ncmds | bytes: 28 */

/* Recovered runtime selector: -[YYYMachHeader ncmds]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYMachHeader::YYYMachHeader__instance__ncmds(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e219c0)((int)param_1);
  return uVar1;
}



/* -[YYYMachHeader setNcmds:] | 0x10075e75c | ABI v20@0:8I16 */

/* Address: 0x10075e75c | YYYMachHeader::YYYMachHeader__instance__setNcmds_ | bytes: 32 */

/* Recovered runtime selector: -[YYYMachHeader setNcmds:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMachHeader::YYYMachHeader__instance__setNcmds_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21a80)(param_1,param_2,param_3);
  return;
}



/* -[YYYMachHeader sizeofcmds] | 0x10075e824 | ABI I16@0:8 */

/* Address: 0x10075e824 | YYYMachHeader::YYYMachHeader__instance__sizeofcmds | bytes: 28 */

/* Recovered runtime selector: -[YYYMachHeader sizeofcmds]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYMachHeader::YYYMachHeader__instance__sizeofcmds(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e21b08)((int)param_1);
  return uVar1;
}



/* -[YYYMachHeader setSizeofcmds:] | 0x10075e8c8 | ABI v20@0:8I16 */

/* Address: 0x10075e8c8 | YYYMachHeader::YYYMachHeader__instance__setSizeofcmds_ | bytes: 32 */

/* Recovered runtime selector: -[YYYMachHeader setSizeofcmds:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMachHeader::YYYMachHeader__instance__setSizeofcmds_
               (ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21b80)(param_1,param_2,param_3);
  return;
}



/* -[YYYMachHeader load_commands_offset] | 0x10075e998 | ABI q16@0:8 */

/* Address: 0x10075e998 | YYYMachHeader::YYYMachHeader__instance__load_commands_offset | bytes: 44 */

/* Recovered runtime selector: -[YYYMachHeader load_commands_offset]
   Original ABI encoding: q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYMachHeader::YYYMachHeader__instance__load_commands_offset(ID param_1,SEL param_2)

{
  long_long lVar1;
  
  objc_stub::FUN_100951d60(param_1);
  objc_stub::FUN_100946540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010075e9c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100e21c10)();
  return lVar1;
}



/* -[YYYMachHeader header_size] | 0x10075e9d4 | ABI I16@0:8 */

/* Address: 0x10075e9d4 | YYYMachHeader::YYYMachHeader__instance__header_size | bytes: 28 */

/* Recovered runtime selector: -[YYYMachHeader header_size]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYMachHeader::YYYMachHeader__instance__header_size(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e21c20)((int)param_1);
  return uVar1;
}



/* -[YYYMachHeader machHeader] | 0x10075ea40 | ABI ^{mach_header=IiiIIII}16@0:8 */

/* Address: 0x10075ea40 | YYYMachHeader::YYYMachHeader__instance__machHeader | bytes: 12 */

/* Recovered runtime selector: -[YYYMachHeader machHeader]
   Original ABI encoding: ^{mach_header=IiiIIII}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

mach_header * YYYMachHeader::YYYMachHeader__instance__machHeader(ID param_1,SEL param_2)

{
  mach_header *pmVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075ea48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pmVar1 = (mach_header *)(*(code *)PTR_LAB_100e21c60)();
  return pmVar1;
}



/* -[YYYMachHeader setMachHeader:] | 0x10075ea68 | ABI v24@0:8^{mach_header=IiiIIII}16 */

/* Address: 0x10075ea68 | YYYMachHeader::YYYMachHeader__instance__setMachHeader_ | bytes: 12 */

/* Recovered runtime selector: -[YYYMachHeader setMachHeader:]
   Original ABI encoding: v24@0:8^{mach_header=IiiIIII}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMachHeader::YYYMachHeader__instance__setMachHeader_
               (ID param_1,SEL param_2,mach_header *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21c80)();
  return;
}



/* -[YYYMachHeader machHeader64] | 0x10075eab8 | ABI ^{mach_header_64=IiiIIIII}16@0:8 */

/* Address: 0x10075eab8 | YYYMachHeader::YYYMachHeader__instance__machHeader64 | bytes: 24 */

/* Recovered runtime selector: -[YYYMachHeader machHeader64]
   Original ABI encoding: ^{mach_header_64=IiiIIIII}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

mach_header_64 * YYYMachHeader::YYYMachHeader__instance__machHeader64(ID param_1,SEL param_2)

{
  mach_header_64 *pmVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075eacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pmVar1 = (mach_header_64 *)
           (*(code *)PTR_LAB_100e21cc0)(*(undefined8 *)(param_1 + (long)_machHeader64));
  return pmVar1;
}



/* -[YYYMachHeader setMachHeader64:] | 0x10075ead4 | ABI v24@0:8^{mach_header_64=IiiIIIII}16 */

/* Address: 0x10075ead4 | YYYMachHeader::YYYMachHeader__instance__setMachHeader64_ | bytes: 12 */

/* Recovered runtime selector: -[YYYMachHeader setMachHeader64:]
   Original ABI encoding: v24@0:8^{mach_header_64=IiiIIIII}16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYMachHeader::YYYMachHeader__instance__setMachHeader64_
               (ID param_1,SEL param_2,mach_header_64 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075eadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21cc8)();
  return;
}


