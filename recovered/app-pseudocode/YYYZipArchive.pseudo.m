/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYZipArchive | class address: 0x100c7e808
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* +[YYYZipArchive createZipFileAtPath:withContentsOfDirectorys:compressionLevel:password:progressHandler:] | 0x1001e8c74 | ABI B52@0:8@16@24i32@36@?44 */

/* Address: 0x1001e8c74 | YYYZipArchive::YYYZipArchive__class__createZipFileAtPath_withContentsOfDirectorys_compressionLevel_password_progressHandler_ | bytes: 84 */

/* Recovered runtime selector: +[YYYZipArchive
   createZipFileAtPath:withContentsOfDirectorys:compressionLevel:password:progressHandler:]
   Original ABI encoding: B52@0:8@16@24i32@36@?44
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYZipArchive::
     YYYZipArchive__class__createZipFileAtPath_withContentsOfDirectorys_compressionLevel_password_progressHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,int param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001001e8cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*DAT_100d47090)(0x100e91960,(int)param_1);
  return bVar1;
}


