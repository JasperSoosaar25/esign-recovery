/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBlobIndex | class address: 0x100c9a808
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBlobIndex blobIndex] | 0x100772a60 | ABI {__BlobIndex=II}16@0:8 */

/* Address: 0x100772a60 | YYYBlobIndex::YYYBlobIndex__instance__blobIndex | bytes: 40 */

/* Recovered runtime selector: -[YYYBlobIndex blobIndex]
   Original ABI encoding: {__BlobIndex=II}16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

__BlobIndex YYYBlobIndex::YYYBlobIndex__instance__blobIndex(ID param_1,SEL param_2)

{
  __BlobIndex _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = (__BlobIndex)(*DAT_100e29cf0)();
  return _Var1;
}



/* -[YYYBlobIndex blob] | 0x100772bb8 | ABI @16@0:8 */

/* Address: 0x100772bb8 | YYYBlobIndex::YYYBlobIndex__instance__blob | bytes: 12 */

/* Recovered runtime selector: -[YYYBlobIndex blob]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlobIndex::YYYBlobIndex__instance__blob(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29d50)();
  return IVar1;
}



/* -[YYYBlobIndex setBlob:] | 0x100772be4 | ABI v24@0:8@16 */

/* Address: 0x100772be4 | YYYBlobIndex::YYYBlobIndex__instance__setBlob_ | bytes: 16 */

/* Recovered runtime selector: -[YYYBlobIndex setBlob:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlobIndex::YYYBlobIndex__instance__setBlob_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29d80)(param_1,param_3);
  return;
}



/* -[YYYBlobIndex type] | 0x100772c08 | ABI I16@0:8 */

/* Address: 0x100772c08 | YYYBlobIndex::YYYBlobIndex__instance__type | bytes: 12 */

/* Recovered runtime selector: -[YYYBlobIndex type]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYBlobIndex::YYYBlobIndex__instance__type(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e29da8)((int)param_1);
  return uVar1;
}



/* -[YYYBlobIndex setType:] | 0x100772c28 | ABI v20@0:8I16 */

/* Address: 0x100772c28 | YYYBlobIndex::YYYBlobIndex__instance__setType_ | bytes: 16 */

/* Recovered runtime selector: -[YYYBlobIndex setType:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlobIndex::YYYBlobIndex__instance__setType_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100e29dc0)(param_1,param_2,param_3);
  return;
}



/* -[YYYBlobIndex offset] | 0x100772c58 | ABI I16@0:8 */

/* Address: 0x100772c58 | YYYBlobIndex::YYYBlobIndex__instance__offset | bytes: 12 */

/* Recovered runtime selector: -[YYYBlobIndex offset]
   Original ABI encoding: I16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_int YYYBlobIndex::YYYBlobIndex__instance__offset(ID param_1,SEL param_2)

{
  unsigned_int uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100e29de8)((int)param_1);
  return uVar1;
}



/* -[YYYBlobIndex setOffset:] | 0x100772c78 | ABI v20@0:8I16 */

/* Address: 0x100772c78 | YYYBlobIndex::YYYBlobIndex__instance__setOffset_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBlobIndex setOffset:]
   Original ABI encoding: v20@0:8I16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlobIndex::YYYBlobIndex__instance__setOffset_(ID param_1,SEL param_2,unsigned_int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29e00)(param_1,param_2,param_3);
  return;
}



/* -[YYYBlobIndex data] | 0x100772c98 | ABI @16@0:8 */

/* Address: 0x100772c98 | YYYBlobIndex::YYYBlobIndex__instance__data | bytes: 12 */

/* Recovered runtime selector: -[YYYBlobIndex data]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlobIndex::YYYBlobIndex__instance__data(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29e28)();
  return IVar1;
}



/* -[YYYBlobIndex setData:] | 0x100772cb8 | ABI v24@0:8@16 */

/* Address: 0x100772cb8 | YYYBlobIndex::YYYBlobIndex__instance__setData_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBlobIndex setData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlobIndex::YYYBlobIndex__instance__setData_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100772cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29e48)();
  return;
}



/* -[YYYBlobIndex .cxx_destruct] | 0x100772d4c | ABI v16@0:8 */

/* Address: 0x100772d4c | YYYBlobIndex::YYYBlobIndex__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYBlobIndex .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBlobIndex::YYYBlobIndex__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100772d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e29ea0)();
  return;
}



/* +[YYYBlobIndex blobIndexWithType:data:] | 0x100772938 | ABI @28@0:8I16@20 */

/* Address: 0x100772938 | YYYBlobIndex::YYYBlobIndex__class__blobIndexWithType_data_ | bytes: 36 */

/* Recovered runtime selector: +[YYYBlobIndex blobIndexWithType:data:]
   Original ABI encoding: @28@0:8I16@20
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlobIndex::YYYBlobIndex__class__blobIndexWithType_data_
             (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100772958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29cb8)(param_4,param_2,param_3);
  return IVar1;
}



/* +[YYYBlobIndex blobIndexWithType:blob:] | 0x1007729a8 | ABI @28@0:8I16@20 */

/* Address: 0x1007729a8 | YYYBlobIndex::YYYBlobIndex__class__blobIndexWithType_blob_ | bytes: 36 */

/* Recovered runtime selector: +[YYYBlobIndex blobIndexWithType:blob:]
   Original ABI encoding: @28@0:8I16@20
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBlobIndex::YYYBlobIndex__class__blobIndexWithType_blob_
             (ID param_1,SEL param_2,unsigned_int param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001007729c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e29cc8)(param_1,param_2,param_3);
  return IVar1;
}


