/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYGradientLayerView | class address: 0x100c7c6a8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYGradientLayerView initWithFrame:] | 0x1000aabd0 | ABI @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16 */

/* Address: 0x1000aabd0 | YYYGradientLayerView::YYYGradientLayerView__instance__initWithFrame_ | bytes: 100 */

/* Recovered runtime selector: -[YYYGradientLayerView initWithFrame:]
   Original ABI encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYGradientLayerView::YYYGradientLayerView__instance__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000aac30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdadc0)
                    (param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                     param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  return IVar1;
}



/* -[YYYGradientLayerView gradientLayer] | 0x1000ab03c | ABI @16@0:8 */

/* Address: 0x1000ab03c | YYYGradientLayerView::YYYGradientLayerView__instance__gradientLayer | bytes: 28 */

/* Recovered runtime selector: -[YYYGradientLayerView gradientLayer]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYGradientLayerView::YYYGradientLayerView__instance__gradientLayer(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000ab054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cdaef8)();
  return IVar1;
}



/* +[YYYGradientLayerView layerClass] | 0x1000aafb0 | ABI #16@0:8 */

/* Address: 0x1000aafb0 | YYYGradientLayerView::YYYGradientLayerView__class__layerClass | bytes: 28 */

/* Recovered runtime selector: +[YYYGradientLayerView layerClass]
   Original ABI encoding: #16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

CLASS YYYGradientLayerView::YYYGradientLayerView__class__layerClass(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000aafc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = (*(code *)PTR_LAB_100cdaea0)();
  return CVar1;
}


