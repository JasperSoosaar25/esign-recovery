/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSuperBlob | class address: 0x100c9a858
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSuperBlob init] | 0x100772dd4 | ABI @16@0:8 */

/* Address: 0x100772dd4 | YYYSuperBlob::YYYSuperBlob__instance__init | bytes: 40 */

/* Recovered runtime selector: -[YYYSuperBlob init]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSuperBlob::YYYSuperBlob__instance__init(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29ef8)(param_1);
  return IVar1;
}



/* -[YYYSuperBlob setupBlobIndexsOffset] | 0x1007737d0 | ABI v16@0:8 */

/* Address: 0x1007737d0 | YYYSuperBlob::YYYSuperBlob__instance__setupBlobIndexsOffset | bytes: 60 */

/* Recovered runtime selector: -[YYYSuperBlob setupBlobIndexsOffset]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance__setupBlobIndexsOffset(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100773808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e2a3c0)();
  return;
}



/* -[YYYSuperBlob addBlobIndex:] | 0x100773a6c | ABI v24@0:8@16 */

/* Address: 0x100773a6c | YYYSuperBlob::YYYSuperBlob__instance__addBlobIndex_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSuperBlob addBlobIndex:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance__addBlobIndex_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100773a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e2a500)();
  return;
}



/* -[YYYSuperBlob count] | 0x100773b58 | ABI I16@0:8 */

/* Address: 0x100773b58 | YYYSuperBlob::YYYSuperBlob__instance__count | bytes: 32 */

/* Recovered runtime selector: -[YYYSuperBlob count]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYSuperBlob::YYYSuperBlob__instance__count(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100773b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e2a560)((int)param_1);
  return uVar1;
}



/* -[YYYSuperBlob length] | 0x100773be8 | ABI I16@0:8 */

/* Address: 0x100773be8 | YYYSuperBlob::YYYSuperBlob__instance__length | bytes: 64 */

/* Recovered runtime selector: -[YYYSuperBlob length]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYSuperBlob::YYYSuperBlob__instance__length(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100773c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*DAT_100e2a590)((int)param_1);
  return uVar1;
}



/* -[YYYSuperBlob superBlob] | 0x100773ea0 | ABI {__SuperBlob=III[0{__BlobIndex=II}]}16@0:8 */

/* Address: 0x100773ea0 | YYYSuperBlob::YYYSuperBlob__instance__superBlob | bytes: 48 */

/* Recovered runtime selector: -[YYYSuperBlob superBlob]
   Original ABI encoding: {__SuperBlob=III[0{__BlobIndex=II}]}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance__superBlob
               (__SuperBlob *__return_storage_ptr__,ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100773ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e2a6c0)();
  return;
}



/* -[YYYSuperBlob superBlobData] | 0x100774068 | ABI @16@0:8 */

/* Address: 0x100774068 | YYYSuperBlob::YYYSuperBlob__instance__superBlobData | bytes: 64 */

/* Recovered runtime selector: -[YYYSuperBlob superBlobData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSuperBlob::YYYSuperBlob__instance__superBlobData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007740a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e2a6f0)();
  return IVar1;
}



/* -[YYYSuperBlob magic] | 0x1007745fc | ABI I16@0:8 */

/* Address: 0x1007745fc | YYYSuperBlob::YYYSuperBlob__instance__magic | bytes: 12 */

/* Recovered runtime selector: -[YYYSuperBlob magic]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYSuperBlob::YYYSuperBlob__instance__magic(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100774604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e2a9b8)((int)param_1);
  return uVar1;
}



/* -[YYYSuperBlob setMagic:] | 0x100774628 | ABI v20@0:8I16 */

/* Address: 0x100774628 | YYYSuperBlob::YYYSuperBlob__instance__setMagic_ | bytes: 12 */

/* Recovered runtime selector: -[YYYSuperBlob setMagic:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance__setMagic_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100774630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e2a9e8)(param_1,param_2,param_3);
  return;
}



/* -[YYYSuperBlob blobs] | 0x100774648 | ABI @16@0:8 */

/* Address: 0x100774648 | YYYSuperBlob::YYYSuperBlob__instance__blobs | bytes: 12 */

/* Recovered runtime selector: -[YYYSuperBlob blobs]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSuperBlob::YYYSuperBlob__instance__blobs(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100774650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e2aa00)();
  return IVar1;
}



/* -[YYYSuperBlob setBlobs:] | 0x100774668 | ABI v24@0:8@16 */

/* Address: 0x100774668 | YYYSuperBlob::YYYSuperBlob__instance__setBlobs_ | bytes: 32 */

/* Recovered runtime selector: -[YYYSuperBlob setBlobs:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance__setBlobs_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100774684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e2aa28)();
  return;
}



/* -[YYYSuperBlob .cxx_destruct] | 0x1007746d8 | ABI v16@0:8 */

/* Address: 0x1007746d8 | YYYSuperBlob::YYYSuperBlob__instance___cxx_destruct | bytes: 24 */

/* Recovered runtime selector: -[YYYSuperBlob .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSuperBlob::YYYSuperBlob__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001007746ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e2aa58)();
  return;
}



/* +[YYYSuperBlob superBlobWithMagic:] | 0x100772f38 | ABI @20@0:8I16 */

/* Address: 0x100772f38 | YYYSuperBlob::YYYSuperBlob__class__superBlobWithMagic_ | bytes: 32 */

/* Recovered runtime selector: +[YYYSuperBlob superBlobWithMagic:]
   Original ABI encoding: @20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSuperBlob::YYYSuperBlob__class__superBlobWithMagic_
             (ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29fa0)(param_1,param_2,param_3);
  return IVar1;
}



/* +[YYYSuperBlob superBlobWithSuperBlobData:] | 0x100772ff8 | ABI @24@0:8@16 */

/* Address: 0x100772ff8 | YYYSuperBlob::YYYSuperBlob__class__superBlobWithSuperBlobData_ | bytes: 44 */

/* Recovered runtime selector: +[YYYSuperBlob superBlobWithSuperBlobData:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSuperBlob::YYYSuperBlob__class__superBlobWithSuperBlobData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100773020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29ff0)();
  return IVar1;
}


