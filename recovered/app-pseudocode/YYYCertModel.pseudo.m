/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYCertModel | class address: 0x100c80578
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYCertModel initWithCertFile:] | 0x10031a3d8 | ABI @24@0:8@16 */

/* Address: 0x10031a3d8 | YYYCertModel::YYYCertModel__instance__initWithCertFile_ | bytes: 48 */

/* Recovered runtime selector: -[YYYCertModel initWithCertFile:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__initWithCertFile_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031a404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dacf30)();
  return IVar1;
}



/* -[YYYCertModel initWithMobileprovisionData:certData:certPassword:] | 0x10031b6bc | ABI @40@0:8@16@24@32 */

/* Address: 0x10031b6bc | YYYCertModel::YYYCertModel__instance__initWithMobileprovisionData_certData_certPassword_ | bytes: 84 */

/* Recovered runtime selector: -[YYYCertModel initWithMobileprovisionData:certData:certPassword:]
   Original ABI encoding: @40@0:8@16@24@32
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__initWithMobileprovisionData_certData_certPassword_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031b70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100dad6b8)(0x100e92114);
  return IVar1;
}



/* -[YYYCertModel encodeWithCoder:] | 0x10031d0cc | ABI v24@0:8@16 */

/* Address: 0x10031d0cc | YYYCertModel::YYYCertModel__instance__encodeWithCoder_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCertModel encodeWithCoder:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031d0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dadde0)();
  return;
}



/* -[YYYCertModel initWithCoder:] | 0x10031d16c | ABI @24@0:8@16 */

/* Address: 0x10031d16c | YYYCertModel::YYYCertModel__instance__initWithCoder_ | bytes: 44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYCertModel initWithCoder:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031d194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100dade30)(param_3);
  return IVar1;
}



/* -[YYYCertModel sharedData] | 0x10031d21c | ABI @16@0:8 */

/* Address: 0x10031d21c | YYYCertModel::YYYCertModel__instance__sharedData | bytes: 44 */

/* Recovered runtime selector: -[YYYCertModel sharedData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__sharedData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031d244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dade70)();
  return IVar1;
}



/* -[YYYCertModel authorityInfoAccessURI] | 0x10031dddc | ABI @16@0:8 */

/* Address: 0x10031dddc | YYYCertModel::YYYCertModel__instance__authorityInfoAccessURI | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel authorityInfoAccessURI]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__authorityInfoAccessURI(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031ddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae170)();
  return IVar1;
}



/* -[YYYCertModel isEqual:] | 0x10031e1f4 | ABI B24@0:8@16 */

/* Address: 0x10031e1f4 | YYYCertModel::YYYCertModel__instance__isEqual_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel isEqual:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYCertModel::YYYCertModel__instance__isEqual_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dae298)((int)param_1);
  return bVar1;
}



/* -[YYYCertModel p12Password] | 0x10031e284 | ABI @16@0:8 */

/* Address: 0x10031e284 | YYYCertModel::YYYCertModel__instance__p12Password | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel p12Password]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__p12Password(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae2a0)();
  return IVar1;
}



/* -[YYYCertModel setP12Password:] | 0x10031e2b4 | ABI v24@0:8@16 */

/* Address: 0x10031e2b4 | YYYCertModel::YYYCertModel__instance__setP12Password_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel setP12Password:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setP12Password_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae2d8)();
  return;
}



/* -[YYYCertModel p12Data] | 0x10031e314 | ABI @16@0:8 */

/* Address: 0x10031e314 | YYYCertModel::YYYCertModel__instance__p12Data | bytes: 16 */

/* Recovered runtime selector: -[YYYCertModel p12Data]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__p12Data(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae300)(*(undefined8 *)(param_1 + 0x18));
  return IVar1;
}



/* -[YYYCertModel setP12Data:] | 0x10031e334 | ABI v24@0:8@16 */

/* Address: 0x10031e334 | YYYCertModel::YYYCertModel__instance__setP12Data_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel setP12Data:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setP12Data_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae328)();
  return;
}



/* -[YYYCertModel mobileprovisionData] | 0x10031e394 | ABI @16@0:8 */

/* Address: 0x10031e394 | YYYCertModel::YYYCertModel__instance__mobileprovisionData | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel mobileprovisionData]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__mobileprovisionData(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae358)();
  return IVar1;
}



/* -[YYYCertModel setMobileprovisionData:] | 0x10031e3a8 | ABI v24@0:8@16 */

/* Address: 0x10031e3a8 | YYYCertModel::YYYCertModel__instance__setMobileprovisionData_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertModel setMobileprovisionData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setMobileprovisionData_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae368)();
  return;
}



/* -[YYYCertModel name] | 0x10031e404 | ABI @16@0:8 */

/* Address: 0x10031e404 | YYYCertModel::YYYCertModel__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae398)();
  return IVar1;
}



/* -[YYYCertModel setName:] | 0x10031e418 | ABI v24@0:8@16 */

/* Address: 0x10031e418 | YYYCertModel::YYYCertModel__instance__setName_ | bytes: 28 */

/* Recovered runtime selector: -[YYYCertModel setName:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setName_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae3a0)();
  return;
}



/* -[YYYCertModel expireTime] | 0x10031e474 | ABI @16@0:8 */

/* Address: 0x10031e474 | YYYCertModel::YYYCertModel__instance__expireTime | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel expireTime]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__expireTime(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae3d8)();
  return IVar1;
}



/* -[YYYCertModel setExpireTime:] | 0x10031e494 | ABI v24@0:8@16 */

/* Address: 0x10031e494 | YYYCertModel::YYYCertModel__instance__setExpireTime_ | bytes: 36 */

/* Recovered runtime selector: -[YYYCertModel setExpireTime:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setExpireTime_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae3f0)();
  return;
}



/* -[YYYCertModel serialNumber] | 0x10031e528 | ABI @16@0:8 */

/* Address: 0x10031e528 | YYYCertModel::YYYCertModel__instance__serialNumber | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel serialNumber]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__serialNumber(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae448)();
  return IVar1;
}



/* -[YYYCertModel setSerialNumber:] | 0x10031e554 | ABI v24@0:8@16 */

/* Address: 0x10031e554 | YYYCertModel::YYYCertModel__instance__setSerialNumber_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel setSerialNumber:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setSerialNumber_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae478)();
  return;
}



/* -[YYYCertModel setAuthorityInfoAccessURI:] | 0x10031e5b4 | ABI v24@0:8@16 */

/* Address: 0x10031e5b4 | YYYCertModel::YYYCertModel__instance__setAuthorityInfoAccessURI_ | bytes: 48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYCertModel setAuthorityInfoAccessURI:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setAuthorityInfoAccessURI_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae4a0)(param_3);
  return;
}



/* -[YYYCertModel ou] | 0x10031e618 | ABI @16@0:8 */

/* Address: 0x10031e618 | YYYCertModel::YYYCertModel__instance__ou | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel ou]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__ou(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae4c0)();
  return IVar1;
}



/* -[YYYCertModel setOu:] | 0x10031e638 | ABI v24@0:8@16 */

/* Address: 0x10031e638 | YYYCertModel::YYYCertModel__instance__setOu_ | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel setOu:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setOu_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae4e8)();
  return;
}



/* -[YYYCertModel status] | 0x10031e658 | ABI @16@0:8 */

/* Address: 0x10031e658 | YYYCertModel::YYYCertModel__instance__status | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel status]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__status(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae508)();
  return IVar1;
}



/* -[YYYCertModel setStatus:] | 0x10031e678 | ABI v24@0:8@16 */

/* Address: 0x10031e678 | YYYCertModel::YYYCertModel__instance__setStatus_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel setStatus:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setStatus_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae528)();
  return;
}



/* -[YYYCertModel isEnterprise] | 0x10031e6dc | ABI B16@0:8 */

/* Address: 0x10031e6dc | YYYCertModel::YYYCertModel__instance__isEnterprise | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel isEnterprise]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYCertModel::YYYCertModel__instance__isEnterprise(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100dae550)((int)param_1);
  return bVar1;
}



/* -[YYYCertModel setIsEnterprise:] | 0x10031e708 | ABI v20@0:8B16 */

/* Address: 0x10031e708 | YYYCertModel::YYYCertModel__instance__setIsEnterprise_ | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel setIsEnterprise:]
   Original ABI encoding: v20@0:8B16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setIsEnterprise_(ID param_1,SEL param_2,bool param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae580)(param_1,param_2,param_3);
  return;
}



/* -[YYYCertModel provisionedDevices] | 0x10031e744 | ABI @16@0:8 */

/* Address: 0x10031e744 | YYYCertModel::YYYCertModel__instance__provisionedDevices | bytes: 12 */

/* Recovered runtime selector: -[YYYCertModel provisionedDevices]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYCertModel::YYYCertModel__instance__provisionedDevices(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010031e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100dae5b8)();
  return IVar1;
}



/* -[YYYCertModel setProvisionedDevices:] | 0x10031e764 | ABI v24@0:8@16 */

/* Address: 0x10031e764 | YYYCertModel::YYYCertModel__instance__setProvisionedDevices_ | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel setProvisionedDevices:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance__setProvisionedDevices_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100dae5d0)();
  return;
}



/* -[YYYCertModel .cxx_destruct] | 0x10031e7c8 | ABI v16@0:8 */

/* Address: 0x10031e7c8 | YYYCertModel::YYYCertModel__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYCertModel .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYCertModel::YYYCertModel__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010031e7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100dae600)();
  return;
}


