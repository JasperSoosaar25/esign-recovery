/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYBookModel | class address: 0x100c7e038
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYBookModel initWithCoder:] | 0x1001b2ca8 | ABI @24@0:8@16 */

/* Address: 0x1001b2ca8 | YYYBookModel::YYYBookModel__instance__initWithCoder_ | bytes: 36 */

/* Recovered runtime selector: -[YYYBookModel initWithCoder:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__instance__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b2cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d33ca8)();
  return IVar1;
}



/* -[YYYBookModel encodeWithCoder:] | 0x1001b2d7c | ABI v24@0:8@16 */

/* Address: 0x1001b2d7c | YYYBookModel::YYYBookModel__instance__encodeWithCoder_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBookModel encodeWithCoder:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID __objc_msgSend_stub YYYBookModel::YYYBookModel__instance__encodeWithCoder_(ID self,...)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b2d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d33d08)();
  return IVar1;
}



/* -[YYYBookModel initWithFilePath:] | 0x1001b311c | ABI @24@0:8@16 */

/* Address: 0x1001b311c | YYYBookModel::YYYBookModel__instance__initWithFilePath_ | bytes: 84 */

/* Recovered runtime selector: -[YYYBookModel initWithFilePath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__instance__initWithFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d33f28)();
  return IVar1;
}



/* -[YYYBookModel save] | 0x1001b3744 | ABI v16@0:8 */

/* Address: 0x1001b3744 | YYYBookModel::YYYBookModel__instance__save | bytes: 72 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Recovered runtime selector: -[YYYBookModel save]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance__save(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::shared((ID)&objc::class_t::YYYSourceManager);
  IVar1 = objc_stub::cache(IVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001b3788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100d34130)(IVar1);
  return;
}



/* -[YYYBookModel parseBook:] | 0x1001b3820 | ABI v24@0:8@16 */

/* Address: 0x1001b3820 | YYYBookModel::YYYBookModel__instance__parseBook_ | bytes: 76 */

/* Recovered runtime selector: -[YYYBookModel parseBook:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance__parseBook_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001b3868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d34158)();
  return;
}



/* -[YYYBookModel fileMD5] | 0x1001b49fc | ABI @16@0:8 */

/* Address: 0x1001b49fc | YYYBookModel::YYYBookModel__instance__fileMD5 | bytes: 12 */

/* Recovered runtime selector: -[YYYBookModel fileMD5]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__instance__fileMD5(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b4a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d34400)();
  return IVar1;
}



/* -[YYYBookModel setFileMD5:] | 0x1001b4a10 | ABI v24@0:8@16 */

/* Address: 0x1001b4a10 | YYYBookModel::YYYBookModel__instance__setFileMD5_ | bytes: 8 */

/* WARNING: Function: _objc_setProperty_nonatomic_copy replaced with injection:
   _objc_setProperty_fixup */
/* Recovered runtime selector: -[YYYBookModel setFileMD5:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance__setFileMD5_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* -[YYYBookModel name] | 0x1001b4a18 | ABI @16@0:8 */

/* Address: 0x1001b4a18 | YYYBookModel::YYYBookModel__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYBookModel name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b4a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d34410)();
  return IVar1;
}



/* -[YYYBookModel setName:] | 0x1001b4a38 | ABI v24@0:8@16 */

/* Address: 0x1001b4a38 | YYYBookModel::YYYBookModel__instance__setName_ | bytes: 12 */

/* Recovered runtime selector: -[YYYBookModel setName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance__setName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001b4a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d34430)();
  return;
}



/* -[YYYBookModel chapters] | 0x1001b4a58 | ABI @16@0:8 */

/* Address: 0x1001b4a58 | YYYBookModel::YYYBookModel__instance__chapters | bytes: 12 */

/* Recovered runtime selector: -[YYYBookModel chapters]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__instance__chapters(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b4a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d34458)();
  return IVar1;
}



/* -[YYYBookModel setChapters:] | 0x1001b4a78 | ABI v24@0:8@16 */

/* Address: 0x1001b4a78 | YYYBookModel::YYYBookModel__instance__setChapters_ | bytes: 32 */

/* Recovered runtime selector: -[YYYBookModel setChapters:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance__setChapters_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001b4a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d34470)();
  return;
}



/* -[YYYBookModel .cxx_destruct] | 0x1001b4b18 | ABI v16@0:8 */

/* Address: 0x1001b4b18 | YYYBookModel::YYYBookModel__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYBookModel .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYBookModel::YYYBookModel__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001b4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100d344d8)();
  return;
}



/* +[YYYBookModel bookWithFilePath:] | 0x1001b2d98 | ABI @24@0:8@16 */

/* Address: 0x1001b2d98 | YYYBookModel::YYYBookModel__class__bookWithFilePath_ | bytes: 36 */

/* Recovered runtime selector: +[YYYBookModel bookWithFilePath:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYBookModel::YYYBookModel__class__bookWithFilePath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001b2db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d33d20)();
  return IVar1;
}


