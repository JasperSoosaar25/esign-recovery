/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYClassDump | class address: 0x100c98ad0
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYClassDump classDumpWithFile:] | 0x10028c01c | ABI B24@0:8@16 */

/* Address: 0x10028c01c | YYYClassDump::YYYClassDump__class__classDumpWithFile_ | bytes: 80 */

/* Recovered runtime selector: +[YYYClassDump classDumpWithFile:]
   Original ABI encoding: B24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYClassDump::YYYClassDump__class__classDumpWithFile_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010028c068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*(code *)PTR_LAB_100d7c7d8)((int)param_1);
  return bVar1;
}



/* +[YYYClassDump classDumpWithExecutablePath:toDic:] | 0x1006f6868 | ABI B32@0:8@16@24 */

/* Address: 0x1006f6868 | YYYClassDump::YYYClassDump__class__classDumpWithExecutablePath_toDic_ | bytes: 628 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Recovered runtime selector: +[YYYClassDump classDumpWithExecutablePath:toDic:]
   Original ABI encoding: B32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYClassDump::YYYClassDump__class__classDumpWithExecutablePath_toDic_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID self;
  FILE *pFVar5;
  ID IStack_60;
  undefined8 uStack_58;
  
  IVar2 = _objc_alloc(&objc::class_t::CDClassDump);
  IVar2 = objc_stub::init(IVar2);
  IVar3 = objc_stub::stringByDeletingLastPathComponent(param_3);
  IVar4 = objc_stub::FUN_10095e040(IVar2);
  objc_stub::FUN_100963da0(IVar4,IVar3);
  IVar3 = objc_stub::FUN_10095e040(IVar2);
  IVar3 = objc_stub::FUN_100943b40((ID)&objc::class_t::CDFile,param_3,IVar3);
  IVar4 = objc_stub::stringByDeletingLastPathComponent(param_3);
  self = objc_stub::FUN_10095e040(IVar2);
  objc_stub::FUN_100963da0(self,IVar4);
  IVar4 = objc_stub::FUN_10093a1a0(IVar3,&uStack_58);
  if ((IVar4 & 1) == 0) {
    _fwrite("Error: Couldn\'t get local architecture\n",0x27,1,*(FILE **)PTR____stderrp_100afc6f0);
    bVar1 = 0;
  }
  else {
    objc_stub::FUN_10096e8c0(IVar2,uStack_58);
    IStack_60 = 0;
    IVar3 = objc_stub::FUN_10094dc20(IVar2,IVar3,&IStack_60);
    bVar1 = (bool)IVar3;
    if ((IVar3 & 1) == 0) {
      pFVar5 = *(FILE **)PTR____stderrp_100afc6f0;
      IVar2 = objc_stub::FUN_10094e220(IStack_60);
      IVar2 = _objc_retainAutorelease(IVar2);
      objc_stub::UTF8String(IVar2);
      _fprintf(pFVar5,"Error: %s\n");
    }
    else {
      objc_stub::FUN_1009548c0(IVar2);
      objc_stub::FUN_10095a8e0(IVar2);
      IVar3 = _objc_alloc(&objc::class_t::CDMultiFileVisitor);
      IVar3 = objc_stub::init(IVar3);
      objc_stub::FUN_100961aa0(IVar3,IVar2);
      IVar4 = objc_stub::FUN_100977660(IVar2);
      objc_stub::setDelegate_(IVar4,IVar3);
      objc_stub::FUN_1009689a0(IVar3,param_4);
      objc_stub::FUN_10095a420(IVar2,IVar3);
    }
  }
  return bVar1;
}


