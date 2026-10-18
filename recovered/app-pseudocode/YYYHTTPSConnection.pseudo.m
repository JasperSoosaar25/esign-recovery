/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYHTTPSConnection | class address: 0x100c7cf30
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYHTTPSConnection isSecureServer] | 0x1000bf498 | ABI B16@0:8 */

/* Address: 0x1000bf498 | YYYHTTPSConnection::YYYHTTPSConnection__instance__isSecureServer | bytes: 8 */

/* Recovered runtime selector: -[YYYHTTPSConnection isSecureServer]
   Original ABI encoding: B16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

bool YYYHTTPSConnection::YYYHTTPSConnection__instance__isSecureServer(ID param_1,SEL param_2)

{
  return 1;
}



/* -[YYYHTTPSConnection sslIdentityAndCertificates] | 0x1000bf4a0 | ABI @16@0:8 */

/* Address: 0x1000bf4a0 | YYYHTTPSConnection::YYYHTTPSConnection__instance__sslIdentityAndCertificates | bytes: 72 */

/* Recovered runtime selector: -[YYYHTTPSConnection sslIdentityAndCertificates]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHTTPSConnection::YYYHTTPSConnection__instance__sslIdentityAndCertificates
             (ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bf4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*DAT_100ce2980)(0x100e91240);
  return IVar1;
}



/* -[YYYHTTPSConnection httpResponseForMethod:URI:] | 0x1000bfa7c | ABI @32@0:8@16@24 */

/* Address: 0x1000bfa7c | YYYHTTPSConnection::YYYHTTPSConnection__instance__httpResponseForMethod_URI_ | bytes: 40 */

/* Recovered runtime selector: -[YYYHTTPSConnection httpResponseForMethod:URI:]
   Original ABI encoding: @32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYHTTPSConnection::YYYHTTPSConnection__instance__httpResponseForMethod_URI_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001000bfaa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100ce2ba0)(param_3);
  return IVar1;
}



/* -[YYYHTTPSConnection prepareForBodyWithSize:] | 0x1000bfe04 | ABI v24@0:8Q16 */

/* Address: 0x1000bfe04 | YYYHTTPSConnection::YYYHTTPSConnection__instance__prepareForBodyWithSize_ | bytes: 12 */

/* Recovered runtime selector: -[YYYHTTPSConnection prepareForBodyWithSize:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHTTPSConnection::YYYHTTPSConnection__instance__prepareForBodyWithSize_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bfe0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2d28)();
  return;
}



/* -[YYYHTTPSConnection processBodyData:] | 0x1000bfe20 | ABI v24@0:8@16 */

/* Address: 0x1000bfe20 | YYYHTTPSConnection::YYYHTTPSConnection__instance__processBodyData_ | bytes: 36 */

/* Recovered runtime selector: -[YYYHTTPSConnection processBodyData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYHTTPSConnection::YYYHTTPSConnection__instance__processBodyData_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000bfe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100ce2d48)();
  return;
}


