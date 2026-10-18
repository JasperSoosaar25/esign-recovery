/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSignAsset | class address: 0x100c9a070
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSignAsset initWithMobileprovisionData:certData:certPassword:] | 0x10075a570 | ABI @40@0:8@16@24@32 */

/* Address: 0x10075a570 | YYYSignAsset::YYYSignAsset__instance__initWithMobileprovisionData_certData_certPassword_ | bytes: 64 */

/* Recovered runtime selector: -[YYYSignAsset initWithMobileprovisionData:certData:certPassword:]
   Original ABI encoding: @40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__initWithMobileprovisionData_certData_certPassword_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075a5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e202c8)();
  return IVar1;
}



/* -[YYYSignAsset initWithMobileprovisionFilePath:certFilePath:certPassword:] | 0x10075abb8 | ABI @40@0:8@16@24@32 */

/* Address: 0x10075abb8 | YYYSignAsset::YYYSignAsset__instance__initWithMobileprovisionFilePath_certFilePath_certPassword_ | bytes: 52 */

/* Recovered runtime selector: -[YYYSignAsset
   initWithMobileprovisionFilePath:certFilePath:certPassword:]
   Original ABI encoding: @40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__initWithMobileprovisionFilePath_certFilePath_certPassword_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075abe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e20580)();
  return IVar1;
}



/* -[YYYSignAsset initWithCertFilePath:certPassword:] | 0x10075b148 | ABI @32@0:8@16@24 */

/* Address: 0x10075b148 | YYYSignAsset::YYYSignAsset__instance__initWithCertFilePath_certPassword_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSignAsset initWithCertFilePath:certPassword:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__initWithCertFilePath_certPassword_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075b174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e20830)(param_3);
  return IVar1;
}



/* -[YYYSignAsset generateASN1Type:] | 0x10075b210 | ABI ^{asn1_type_st=i(?=*i^{asn1_string_st}^{asn1_object_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{ASN1_VALUE_st})}24@0:8@16 */

/* Address: 0x10075b210 | YYYSignAsset::YYYSignAsset__instance__generateASN1Type_ | bytes: 52 */

/* Recovered runtime selector: -[YYYSignAsset generateASN1Type:]
   Original ABI encoding:
   ^{asn1_type_st=i(?=*i^{asn1_string_st}^{asn1_object_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{asn1_string_st}^{ASN1_VALUE_st})}24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

asn1_type_st *
YYYSignAsset::YYYSignAsset__instance__generateASN1Type_(ID param_1,SEL param_2,ID param_3)

{
  asn1_type_st *paVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075b240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  paVar1 = (asn1_type_st *)(*DAT_100e20870)();
  return paVar1;
}



/* -[YYYSignAsset generateCMSWithCodeDirectoryHash:altnateCodeDirectorySlot:] | 0x10075c40c | ABI @32@0:8@16@24 */

/* Address: 0x10075c40c | YYYSignAsset::YYYSignAsset__instance__generateCMSWithCodeDirectoryHash_altnateCodeDirectorySlot_ | bytes: 72 */

/* Recovered runtime selector: -[YYYSignAsset
   generateCMSWithCodeDirectoryHash:altnateCodeDirectorySlot:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__generateCMSWithCodeDirectoryHash_altnateCodeDirectorySlot_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075c450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e20ae8)();
  return IVar1;
}



/* -[YYYSignAsset teamIdentifier] | 0x10075dbac | ABI @16@0:8 */

/* Address: 0x10075dbac | YYYSignAsset::YYYSignAsset__instance__teamIdentifier | bytes: 48 */

/* Recovered runtime selector: -[YYYSignAsset teamIdentifier]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__teamIdentifier(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075dbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100e21348)(0x100e95e44);
  return IVar1;
}



/* -[YYYSignAsset subjectCN] | 0x10075df1c | ABI @16@0:8 */

/* Address: 0x10075df1c | YYYSignAsset::YYYSignAsset__instance__subjectCN | bytes: 28 */

/* Recovered runtime selector: -[YYYSignAsset subjectCN]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__subjectCN(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075df34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e214c8)();
  return IVar1;
}



/* -[YYYSignAsset entitlements] | 0x10075e024 | ABI @16@0:8 */

/* Address: 0x10075e024 | YYYSignAsset::YYYSignAsset__instance__entitlements | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset entitlements]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__entitlements(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e21568)();
  return IVar1;
}



/* -[YYYSignAsset setEntitlements:] | 0x10075e044 | ABI v24@0:8@16 */

/* Address: 0x10075e044 | YYYSignAsset::YYYSignAsset__instance__setEntitlements_ | bytes: 28 */

/* Recovered runtime selector: -[YYYSignAsset setEntitlements:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setEntitlements_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21580)();
  return;
}



/* -[YYYSignAsset mergeEntitlements] | 0x10075e0a4 | ABI B16@0:8 */

/* Address: 0x10075e0a4 | YYYSignAsset::YYYSignAsset__instance__mergeEntitlements | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset mergeEntitlements]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYSignAsset::YYYSignAsset__instance__mergeEntitlements(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e215b0)((int)param_1);
  return bVar1;
}



/* -[YYYSignAsset setMergeEntitlements:] | 0x10075e0c4 | ABI v20@0:8B16 */

/* Address: 0x10075e0c4 | YYYSignAsset::YYYSignAsset__instance__setMergeEntitlements_ | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset setMergeEntitlements:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setMergeEntitlements_
               (ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e215d8)(param_1,param_2,param_3);
  return;
}



/* -[YYYSignAsset removeEmbedded] | 0x10075e0f0 | ABI B16@0:8 */

/* Address: 0x10075e0f0 | YYYSignAsset::YYYSignAsset__instance__removeEmbedded | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset removeEmbedded]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYSignAsset::YYYSignAsset__instance__removeEmbedded(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e21608)((int)param_1);
  return bVar1;
}



/* -[YYYSignAsset setRemoveEmbedded:] | 0x10075e124 | ABI v20@0:8B16 */

/* Address: 0x10075e124 | YYYSignAsset::YYYSignAsset__instance__setRemoveEmbedded_ | bytes: 16 */

/* Recovered runtime selector: -[YYYSignAsset setRemoveEmbedded:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setRemoveEmbedded_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010075e130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21630)();
  return;
}



/* -[YYYSignAsset useBugSign] | 0x10075e138 | ABI B16@0:8 */

/* Address: 0x10075e138 | YYYSignAsset::YYYSignAsset__instance__useBugSign | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset useBugSign]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYSignAsset::YYYSignAsset__instance__useBugSign(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100e21648)((int)param_1);
  return bVar1;
}



/* -[YYYSignAsset setUseBugSign:] | 0x10075e164 | ABI v20@0:8B16 */

/* Address: 0x10075e164 | YYYSignAsset::YYYSignAsset__instance__setUseBugSign_ | bytes: 16 */

/* Recovered runtime selector: -[YYYSignAsset setUseBugSign:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setUseBugSign_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
                    /* WARNING: Could not recover jumptable at 0x00010075e170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21678)();
  return;
}



/* -[YYYSignAsset emptyEntitlements] | 0x10075e178 | ABI @16@0:8 */

/* Address: 0x10075e178 | YYYSignAsset::YYYSignAsset__instance__emptyEntitlements | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset emptyEntitlements]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__emptyEntitlements(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e21688)();
  return IVar1;
}



/* -[YYYSignAsset setEmptyEntitlements:] | 0x10075e198 | ABI v24@0:8@16 */

/* Address: 0x10075e198 | YYYSignAsset::YYYSignAsset__instance__setEmptyEntitlements_ | bytes: 32 */

/* Recovered runtime selector: -[YYYSignAsset setEmptyEntitlements:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setEmptyEntitlements_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e216a8)();
  return;
}



/* -[YYYSignAsset p12] | 0x10075e1ec | ABI @16@0:8 */

/* Address: 0x10075e1ec | YYYSignAsset::YYYSignAsset__instance__p12 | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset p12]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__p12(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e216c0)();
  return IVar1;
}



/* -[YYYSignAsset setP12:] | 0x10075e218 | ABI v24@0:8@16 */

/* Address: 0x10075e218 | YYYSignAsset::YYYSignAsset__instance__setP12_ | bytes: 28 */

/* Recovered runtime selector: -[YYYSignAsset setP12:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setP12_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e216f8)();
  return;
}



/* -[YYYSignAsset mobileprovision] | 0x10075e278 | ABI @16@0:8 */

/* Address: 0x10075e278 | YYYSignAsset::YYYSignAsset__instance__mobileprovision | bytes: 12 */

/* Recovered runtime selector: -[YYYSignAsset mobileprovision]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignAsset::YYYSignAsset__instance__mobileprovision(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010075e280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100e21728)();
  return IVar1;
}



/* -[YYYSignAsset setMobileprovision:] | 0x10075e298 | ABI v24@0:8@16 */

/* Address: 0x10075e298 | YYYSignAsset::YYYSignAsset__instance__setMobileprovision_ | bytes: 32 */

/* Recovered runtime selector: -[YYYSignAsset setMobileprovision:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance__setMobileprovision_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21740)();
  return;
}



/* -[YYYSignAsset .cxx_destruct] | 0x10075e300 | ABI v16@0:8 */

/* Address: 0x10075e300 | YYYSignAsset::YYYSignAsset__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYSignAsset .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignAsset::YYYSignAsset__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010075e318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100e21780)();
  return;
}


