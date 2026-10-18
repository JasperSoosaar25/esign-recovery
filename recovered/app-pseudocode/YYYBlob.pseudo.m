/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBlob | class address: 0x100c9a7b8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBlob blob] | 0x1007724e4 | ABI {__Blob=II}16@0:8 */

/* Address: 0x1007724e4 | YYYBlob::YYYBlob__instance__blob | bytes: 40 */

/* Recovered runtime selector: -[YYYBlob blob]
   Original ABI encoding: {__Blob=II}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

__Blob YYYBlob::YYYBlob__instance__blob(ID param_1,SEL param_2)

{
  __Blob _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (__Blob)(*(code *)PTR_LAB_100e29ac0)();
  return _Var1;
}



/* -[YYYBlob length] | 0x10077261c | ABI I16@0:8 */

/* Address: 0x10077261c | YYYBlob::YYYBlob__instance__length | bytes: 32 */

/* Recovered runtime selector: -[YYYBlob length]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYBlob::YYYBlob__instance__length(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e29b18)((int)param_1);
  return uVar1;
}



/* -[YYYBlob blobData] | 0x1007726b8 | ABI @16@0:8 */

/* Address: 0x1007726b8 | YYYBlob::YYYBlob__instance__blobData | bytes: 36 */

/* Recovered runtime selector: -[YYYBlob blobData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlob::YYYBlob__instance__blobData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007726d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e29b50)();
  return IVar1;
}



/* -[YYYBlob magic] | 0x100772780 | ABI I16@0:8 */

/* Address: 0x100772780 | YYYBlob::YYYBlob__instance__magic | bytes: 12 */

/* Recovered runtime selector: -[YYYBlob magic]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYBlob::YYYBlob__instance__magic(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e29b80)((int)param_1);
  return uVar1;
}



/* -[YYYBlob setMagic:] | 0x1007727a0 | ABI v20@0:8I16 */

/* Address: 0x1007727a0 | YYYBlob::YYYBlob__instance__setMagic_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBlob setMagic:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlob::YYYBlob__instance__setMagic_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001007727a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29ba8)(param_1,param_2,param_3);
  return;
}



/* -[YYYBlob data] | 0x1007727cc | ABI @16@0:8 */

/* Address: 0x1007727cc | YYYBlob::YYYBlob__instance__data | bytes: 12 */

/* Recovered runtime selector: -[YYYBlob data]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlob::YYYBlob__instance__data(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007727d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29bd0)();
  return IVar1;
}



/* -[YYYBlob setData:] | 0x1007727ec | ABI v24@0:8@16 */

/* Address: 0x1007727ec | YYYBlob::YYYBlob__instance__setData_ | bytes: 28 */

/* Recovered runtime selector: -[YYYBlob setData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlob::YYYBlob__instance__setData_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29bf0)();
  return;
}



/* -[YYYBlob entitlements] | 0x10077284c | ABI @16@0:8 */

/* Address: 0x10077284c | YYYBlob::YYYBlob__instance__entitlements | bytes: 12 */

/* Recovered runtime selector: -[YYYBlob entitlements]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlob::YYYBlob__instance__entitlements(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29c28)();
  return IVar1;
}



/* -[YYYBlob setEntitlements:] | 0x100772878 | ABI v24@0:8@16 */

/* Address: 0x100772878 | YYYBlob::YYYBlob__instance__setEntitlements_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBlob setEntitlements:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlob::YYYBlob__instance__setEntitlements_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29c58)();
  return;
}



/* -[YYYBlob .cxx_destruct] | 0x1007728d4 | ABI v16@0:8 */

/* Address: 0x1007728d4 | YYYBlob::YYYBlob__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYBlob .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlob::YYYBlob__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001007728ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29c88)();
  return;
}



/* +[YYYBlob blobWithMagic:data:] | 0x100771f6c | ABI @28@0:8I16@20 */

/* Address: 0x100771f6c | YYYBlob::YYYBlob__class__blobWithMagic_data_ | bytes: 44 */

/* Recovered runtime selector: +[YYYBlob blobWithMagic:data:]
   Original ABI encoding: @28@0:8I16@20
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlob::YYYBlob__class__blobWithMagic_data_
             (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100771f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e29850)(param_1,param_2,param_3);
  return IVar1;
}



/* +[YYYBlob blobWithdata:] | 0x100772048 | ABI @24@0:8@16 */

/* Address: 0x100772048 | YYYBlob::YYYBlob__class__blobWithdata_ | bytes: 44 */

/* Recovered runtime selector: +[YYYBlob blobWithdata:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlob::YYYBlob__class__blobWithdata_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29890)(param_3);
  return IVar1;
}


