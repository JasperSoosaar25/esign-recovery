/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYSignFileNameRuleTableViewCell | class address: 0x100c81fa0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYSignFileNameRuleTableViewCell initWithStyle:reuseIdentifier:] | 0x1003f7c64 | ABI @32@0:8q16@24 */

/* Address: 0x1003f7c64 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__initWithStyle_reuseIdentifier_ | bytes: 64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell initWithStyle:reuseIdentifier:]
   Original ABI encoding: @32@0:8q16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFileNameRuleTableViewCell::
   YYYSignFileNameRuleTableViewCell__instance__initWithStyle_reuseIdentifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f7ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100df6568)(&PTR_CDLCSourceVersion_100c73000,param_4);
  return IVar1;
}



/* -[YYYSignFileNameRuleTableViewCell loadSubviews] | 0x1003f7de4 | ABI v16@0:8 */

/* Address: 0x1003f7de4 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__loadSubviews | bytes: 92 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell loadSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__loadSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f7e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df6618)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell buttonHandle:] | 0x1003f88f8 | ABI v24@0:8@16 */

/* Address: 0x1003f88f8 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__buttonHandle_ | bytes: 44 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell buttonHandle:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__buttonHandle_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f8920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df6860)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell layoutSubviews] | 0x1003f8e30 | ABI v16@0:8 */

/* Address: 0x1003f8e30 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__layoutSubviews | bytes: 52 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell layoutSubviews]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__layoutSubviews
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f8e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_100df6b08)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell sizeThatFits:] | 0x1003f908c | ABI {CGSize=dd}32@0:8{CGSize=dd}16 */

/* Address: 0x1003f908c | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__sizeThatFits_ | bytes: 140 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell sizeThatFits:]
   Original ABI encoding: {CGSize=dd}32@0:8{CGSize=dd}16
   Metadata-derived name; original source file and argument names are unavailable. */

CGSize YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__sizeThatFits_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  CGSize CVar5;
  
  IVar1 = objc_stub::buttonView(param_1,param_3.field0_0x0,param_3.field1_0x8);
  uVar3 = 0x7fefffffffffffff;
  FUN_1003f88e8(param_3.field0_0x0 + -30.0,0x7fefffffffffffff);
  uVar2 = FUN_1003fa4b0(IVar1);
  dVar4 = 5.0;
  thunk_FUN_1003f9064(0x402e000000000000,0x4014000000000000,uVar2,uVar3,0);
                    /* WARNING: Could not recover jumptable at 0x0001003f9114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar5.field0_0x0 = (double)(*(code *)PTR_LAB_100df6b98)();
  CVar5.field1_0x8 = dVar4;
  return CVar5;
}



/* -[YYYSignFileNameRuleTableViewCell reloadButtonState] | 0x1003f91bc | ABI v16@0:8 */

/* Address: 0x1003f91bc | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__reloadButtonState | bytes: 40 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell reloadButtonState]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__reloadButtonState
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f91e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df6bb8)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell setRule:] | 0x1003f98bc | ABI v24@0:8Q16 */

/* Address: 0x1003f98bc | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setRule_ | bytes: 52 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell setRule:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setRule_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003f98ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df6e08)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell rule] | 0x1003fa148 | ABI Q16@0:8 */

/* Address: 0x1003fa148 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__rule | bytes: 20 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell rule]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__rule
          (ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003fa158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100df70b8)((long)_rule);
  return uVar1;
}



/* -[YYYSignFileNameRuleTableViewCell label] | 0x1003fa17c | ABI @16@0:8 */

/* Address: 0x1003fa17c | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__label | bytes: 12 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell label]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__label
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003fa184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df70f0)();
  return IVar1;
}



/* -[YYYSignFileNameRuleTableViewCell setLabel:] | 0x1003fa198 | ABI v24@0:8@16 */

/* Address: 0x1003fa198 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setLabel_ | bytes: 36 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell setLabel:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setLabel_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003fa1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df70f8)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell buttonView] | 0x1003fa210 | ABI @16@0:8 */

/* Address: 0x1003fa210 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__buttonView | bytes: 20 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell buttonView]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__buttonView
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003fa220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df7138)((long)_buttonView);
  return IVar1;
}



/* -[YYYSignFileNameRuleTableViewCell setButtonView:] | 0x1003fa238 | ABI v24@0:8@16 */

/* Address: 0x1003fa238 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setButtonView_ | bytes: 16 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell setButtonView:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setButtonView_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001003fa244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df7160)(param_1,param_3);
  return;
}



/* -[YYYSignFileNameRuleTableViewCell ruleChangeHandle] | 0x1003fa258 | ABI @?16@0:8 */

/* Address: 0x1003fa258 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__ruleChangeHandle | bytes: 12 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell ruleChangeHandle]
   Original ABI encoding: @?16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__ruleChangeHandle
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001003fa260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100df7170)();
  return IVar1;
}



/* -[YYYSignFileNameRuleTableViewCell setRuleChangeHandle:] | 0x1003fa290 | ABI v24@0:8@?16 */

/* Address: 0x1003fa290 | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance__setRuleChangeHandle_ | bytes: 48 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell setRuleChangeHandle:]
   Original ABI encoding: v24@0:8@?16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::
     YYYSignFileNameRuleTableViewCell__instance__setRuleChangeHandle_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001003fa2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df7198)();
  return;
}



/* -[YYYSignFileNameRuleTableViewCell .cxx_destruct] | 0x1003fa31c | ABI v16@0:8 */

/* Address: 0x1003fa31c | YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance___cxx_destruct | bytes: 32 */

/* Recovered runtime selector: -[YYYSignFileNameRuleTableViewCell .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYSignFileNameRuleTableViewCell::YYYSignFileNameRuleTableViewCell__instance___cxx_destruct
               (ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001003fa338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100df71e0)();
  return;
}


