/* Static original-byte method decompilation. See index.json for limitations. */

/* ORIGINAL-BYTE STATIC-MODEL DECOMPILATION; NOT ORIGINAL SOURCE OR A BUILDABLE APP.
 * Method: +[YYYLIEF machoPath:addDylib:]
 * Entry: 0x10077f7fc; original ABI: B32@0:8@16@24
 * Original instructions in modeled body: 101; unresolved jumps: 0
 * Initial pointer-table values and call returns are assumptions. No original bytes patched.
 * Decompiler-inferred C types and function signature are not verified source declarations.
 */

/* WARNING: Removing unreachable block (ram,0x00010077f868) */

undefined8
Recovered_YYYLIEF_m03382
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
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
  
  uVar3 = _objc_retain(param_3);
  uVar4 = _objc_retain(param_4);
  uVar3 = _objc_retainAutorelease(uVar3);
  uVar5 = func_0x0001009352c0();
  func_0x00010077f760(&plStack_50,uVar5);
  uStack_68 = func_0x00010080d5e8();
  func_0x00010080c86c(&plStack_38,&plStack_50,&uStack_68);
  plVar1 = plStack_38;
  func_0x000100807e30(&plStack_50,plStack_38);
  func_0x000100807e44(&uStack_68,plVar1);
  for (; (plVar1 = plStack_38,
         plStack_50[1] - *plStack_50 !=
         ((long *)CONCAT44(uStack_64,uStack_68))[1] - *(long *)CONCAT44(uStack_64,uStack_68) ||
         (lStack_40 != lStack_58)); lStack_40 = lStack_40 + 1) {
    lVar6 = *plStack_48;
    if (lVar6 == 0) {
      ___assert_rtn("operator*","iterators.hpp",0xe6,"*it_ && \"integrity error: nullptr\"");
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10077f990);
      (*pcVar2)();
    }
    _objc_retainAutorelease(uVar4);
    uVar5 = func_0x0001009352c0();
    func_0x00010077f760(auStack_80,uVar5);
    func_0x0001007b0830(lVar6,auStack_80);
    if (cStack_69 < '\0') {
      __ZdlPv(auStack_80[0]);
    }
    func_0x0001007b089c(&lStack_98,lVar6);
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
  _objc_release(uVar4);
  _objc_release(uVar3);
  return 1;
}



