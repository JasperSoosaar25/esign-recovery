/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLSApplicationRestrictionsManager | class address: 0x100c80348
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYLSApplicationRestrictionsManager sharedInstance] | 0x1002f9b64 | ABI @16@0:8 */

/* Address: 0x1002f9b64 | YYYLSApplicationRestrictionsManager::YYYLSApplicationRestrictionsManager__class__sharedInstance | bytes: 20 */

/* Recovered runtime selector: +[YYYLSApplicationRestrictionsManager sharedInstance]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLSApplicationRestrictionsManager::YYYLSApplicationRestrictionsManager__class__sharedInstance
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f9b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100da07d8)();
  return IVar1;
}


