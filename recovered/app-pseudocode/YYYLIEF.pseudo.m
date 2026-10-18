/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYLIEF | class address: 0x100c9a920
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYLIEF machoPath:addDylib:] | 0x10077f7fc | ABI B32@0:8@16@24 */

/* Address: 0x10077f7fc | YYYLIEF::YYYLIEF__class__machoPath_addDylib_ | bytes: 400 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010077f868) */
/* Recovered runtime selector: +[YYYLIEF machoPath:addDylib:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYLIEF::YYYLIEF__class__machoPath_addDylib_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long *plVar1;
  ID IVar2;
  long lVar3;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  IVar2 = _objc_retainAutorelease(param_3);
  IVar2 = objc_stub::UTF8String(IVar2);
  FUN_10077f760(&plStack_50,IVar2);
  uStack_68 = FUN_10080d5e8();
  FUN_10080c86c(&plStack_38,&plStack_50,&uStack_68);
  plVar1 = plStack_38;
  FUN_100807e30(&plStack_50,plStack_38);
  FUN_100807e44(&uStack_68,plVar1);
  for (; (plVar1 = plStack_38,
         plStack_50[1] - *plStack_50 !=
         ((long *)CONCAT44(uStack_64,uStack_68))[1] - *(long *)CONCAT44(uStack_64,uStack_68) ||
         (lStack_40 != lStack_58)); lStack_40 = lStack_40 + 1) {
    lVar3 = *plStack_48;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      ___assert_rtn("operator*","iterators.hpp",0xe6,"*it_ && \"integrity error: nullptr\"");
    }
    IVar2 = _objc_retainAutorelease(param_4);
    IVar2 = objc_stub::UTF8String(IVar2);
    FUN_10077f760(auStack_80,IVar2);
    FUN_1007b0830(lVar3,auStack_80);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    FUN_1007b089c(&lStack_98,lVar3);
    if (lStack_98 != 0) {
      lStack_90 = lStack_98;
      __ZdlPv();
    }
    plStack_48 = plStack_48 + 1;
  }
  plStack_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return 1;
}


