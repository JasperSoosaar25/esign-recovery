/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLSApplicationWorkspace | class address: 0x100c7ec18
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYLSApplicationWorkspace defaultWorkspace] | 0x10023be40 | ABI @16@0:8 */

/* Address: 0x10023be40 | YYYLSApplicationWorkspace::YYYLSApplicationWorkspace__class__defaultWorkspace | bytes: 20 */

/* Recovered runtime selector: +[YYYLSApplicationWorkspace defaultWorkspace]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYLSApplicationWorkspace::YYYLSApplicationWorkspace__class__defaultWorkspace
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010023be50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100d616b8)();
  return IVar1;
}


