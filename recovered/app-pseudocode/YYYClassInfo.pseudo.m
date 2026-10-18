/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYClassInfo | class address: 0x100c7b8f8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYClassInfo initWithClass:] | 0x10003f1d0 | ABI @24@0:8#16 */

/* Address: 0x10003f1d0 | YYYClassInfo::YYYClassInfo__instance__initWithClass_ | bytes: 48 */

/* Recovered runtime selector: -[YYYClassInfo initWithClass:]
   Original ABI encoding: @24@0:8#16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__initWithClass_(ID param_1,SEL param_2,CLASS param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010003f1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5288)();
  return IVar1;
}



/* -[YYYClassInfo _update] | 0x10003f454 | ABI v16@0:8 */

/* Address: 0x10003f454 | YYYClassInfo::YYYClassInfo__instance___update | bytes: 60 */

/* Recovered runtime selector: -[YYYClassInfo _update]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassInfo::YYYClassInfo__instance___update(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010003f48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb53a8)(0x100e90f58);
  return;
}



/* -[YYYClassInfo setNeedUpdate] | 0x1000402b8 | ABI v16@0:8 */

/* Address: 0x1000402b8 | YYYClassInfo::YYYClassInfo__instance__setNeedUpdate | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo setNeedUpdate]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassInfo::YYYClassInfo__instance__setNeedUpdate(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001000402c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb5b40)();
  return;
}



/* -[YYYClassInfo needUpdate] | 0x1000402e8 | ABI B16@0:8 */

/* Address: 0x1000402e8 | YYYClassInfo::YYYClassInfo__instance__needUpdate | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo needUpdate]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYClassInfo::YYYClassInfo__instance__needUpdate(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000402f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cb5b70)((int)param_1);
  return bVar1;
}



/* -[YYYClassInfo superClassInfo] | 0x100040308 | ABI @16@0:8 */

/* Address: 0x100040308 | YYYClassInfo::YYYClassInfo__instance__superClassInfo | bytes: 32 */

/* Recovered runtime selector: -[YYYClassInfo superClassInfo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__superClassInfo(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100040324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5b90)();
  return IVar1;
}



/* -[YYYClassInfo metaClassInfo] | 0x100040494 | ABI @16@0:8 */

/* Address: 0x100040494 | YYYClassInfo::YYYClassInfo__instance__metaClassInfo | bytes: 28 */

/* Recovered runtime selector: -[YYYClassInfo metaClassInfo]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__metaClassInfo(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000404ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5c70)();
  return IVar1;
}



/* -[YYYClassInfo compare:] | 0x100040704 | ABI q24@0:8@16 */

/* Address: 0x100040704 | YYYClassInfo::YYYClassInfo__instance__compare_ | bytes: 40 */

/* Recovered runtime selector: -[YYYClassInfo compare:]
   Original ABI encoding: q24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

long_long YYYClassInfo::YYYClassInfo__instance__compare_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100040728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR_LAB_100cb5db8)();
  return lVar1;
}



/* -[YYYClassInfo description] | 0x100040830 | ABI @16@0:8 */

/* Address: 0x100040830 | YYYClassInfo::YYYClassInfo__instance__description | bytes: 56 */

/* Recovered runtime selector: -[YYYClassInfo description]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__description(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100040864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5e20)(0x100e90f5c);
  return IVar1;
}



/* -[YYYClassInfo cls] | 0x100041d18 | ABI #16@0:8 */

/* Address: 0x100041d18 | YYYClassInfo::YYYClassInfo__instance__cls | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo cls]
   Original ABI encoding: #16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CLASS YYYClassInfo::YYYClassInfo__instance__cls(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR_LAB_100cb63e8)();
  return CVar1;
}



/* -[YYYClassInfo superCls] | 0x100041d38 | ABI #16@0:8 */

/* Address: 0x100041d38 | YYYClassInfo::YYYClassInfo__instance__superCls | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo superCls]
   Original ABI encoding: #16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CLASS YYYClassInfo::YYYClassInfo__instance__superCls(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR_LAB_100cb6410)();
  return CVar1;
}



/* -[YYYClassInfo metaCls] | 0x100041d64 | ABI #16@0:8 */

/* Address: 0x100041d64 | YYYClassInfo::YYYClassInfo__instance__metaCls | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo metaCls]
   Original ABI encoding: #16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CLASS YYYClassInfo::YYYClassInfo__instance__metaCls(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR_LAB_100cb6438)();
  return CVar1;
}



/* -[YYYClassInfo isMeta] | 0x100041d84 | ABI B16@0:8 */

/* Address: 0x100041d84 | YYYClassInfo::YYYClassInfo__instance__isMeta | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo isMeta]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYClassInfo::YYYClassInfo__instance__isMeta(ID param_1,SEL param_2)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100cb6458)((int)param_1);
  return bVar1;
}



/* -[YYYClassInfo name] | 0x100041db8 | ABI @16@0:8 */

/* Address: 0x100041db8 | YYYClassInfo::YYYClassInfo__instance__name | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo name]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__name(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb6488)();
  return IVar1;
}



/* -[YYYClassInfo ivarInfos] | 0x100041dd8 | ABI @16@0:8 */

/* Address: 0x100041dd8 | YYYClassInfo::YYYClassInfo__instance__ivarInfos | bytes: 16 */

/* Recovered runtime selector: -[YYYClassInfo ivarInfos]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__ivarInfos(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb64a8)(*(undefined8 *)(param_1 + 0x30));
  return IVar1;
}



/* -[YYYClassInfo methodInfos] | 0x100041dec | ABI @16@0:8 */

/* Address: 0x100041dec | YYYClassInfo::YYYClassInfo__instance__methodInfos | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo methodInfos]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__methodInfos(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb64b8)();
  return IVar1;
}



/* -[YYYClassInfo classMethodInfos] | 0x100041e0c | ABI @16@0:8 */

/* Address: 0x100041e0c | YYYClassInfo::YYYClassInfo__instance__classMethodInfos | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo classMethodInfos]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__classMethodInfos(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb64d8)();
  return IVar1;
}



/* -[YYYClassInfo propertyInfos] | 0x100041e2c | ABI @16@0:8 */

/* Address: 0x100041e2c | YYYClassInfo::YYYClassInfo__instance__propertyInfos | bytes: 12 */

/* Recovered runtime selector: -[YYYClassInfo propertyInfos]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__instance__propertyInfos(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100041e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb6500)();
  return IVar1;
}



/* -[YYYClassInfo setSuperClassInfo:] | 0x100041e40 | ABI v24@0:8@16 */

/* Address: 0x100041e40 | YYYClassInfo::YYYClassInfo__instance__setSuperClassInfo_ | bytes: 16 */

/* Recovered runtime selector: -[YYYClassInfo setSuperClassInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassInfo::YYYClassInfo__instance__setSuperClassInfo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100041e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb6510)(param_1,param_3);
  return;
}



/* -[YYYClassInfo setMetaClassInfo:] | 0x100041e64 | ABI v24@0:8@16 */

/* Address: 0x100041e64 | YYYClassInfo::YYYClassInfo__instance__setMetaClassInfo_ | bytes: 32 */

/* Recovered runtime selector: -[YYYClassInfo setMetaClassInfo:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassInfo::YYYClassInfo__instance__setMetaClassInfo_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100041e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb6530)();
  return;
}



/* -[YYYClassInfo .cxx_destruct] | 0x100041ecc | ABI v16@0:8 */

/* Address: 0x100041ecc | YYYClassInfo::YYYClassInfo__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYClassInfo .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYClassInfo::YYYClassInfo__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100041ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cb6570)();
  return;
}



/* +[YYYClassInfo classInfoWithClass:] | 0x100040544 | ABI @24@0:8#16 */

/* Address: 0x100040544 | YYYClassInfo::YYYClassInfo__class__classInfoWithClass_ | bytes: 32 */

/* Recovered runtime selector: +[YYYClassInfo classInfoWithClass:]
   Original ABI encoding: @24@0:8#16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__class__classInfoWithClass_(ID param_1,SEL param_2,CLASS param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100040560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5cc8)();
  return IVar1;
}



/* +[YYYClassInfo classInfoWithClassName:] | 0x100040650 | ABI @24@0:8@16 */

/* Address: 0x100040650 | YYYClassInfo::YYYClassInfo__class__classInfoWithClassName_ | bytes: 36 */

/* Recovered runtime selector: +[YYYClassInfo classInfoWithClassName:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYClassInfo::YYYClassInfo__class__classInfoWithClassName_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100040670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cb5d78)();
  return IVar1;
}


