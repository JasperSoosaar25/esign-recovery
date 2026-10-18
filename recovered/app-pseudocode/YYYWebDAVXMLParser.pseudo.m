/* GHIDRA PSEUDOCODE EXCERPTS — NOT COMPILABLE ORIGINAL OBJECTIVE-C.
 * Class: YYYWebDAVXMLParser | class address: 0x100c7bee8
 * Selector/ABI comments come from independently decoded runtime metadata.
 */

/* -[YYYWebDAVXMLParser parse] | 0x100057f60 | ABI @16@0:8 */

/* Address: 0x100057f60 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parse | bytes: 68 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parse]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parse(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100057fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cbe0c0)(0x100e90ff8);
  return IVar1;
}



/* -[YYYWebDAVXMLParser parserDidStartDocument:] | 0x100058360 | ABI v24@0:8@16 */

/* Address: 0x100058360 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parserDidStartDocument_ | bytes: 4 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parserDidStartDocument:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parserDidStartDocument_
               (ID param_1,SEL param_2,ID param_3)

{
  return;
}



/* -[YYYWebDAVXMLParser parserDidEndDocument:] | 0x100058364 | ABI v24@0:8@16 */

/* Address: 0x100058364 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parserDidEndDocument_ | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parserDidEndDocument:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parserDidEndDocument_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010005837c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe238)();
  return;
}



/* -[YYYWebDAVXMLParser parser:validationErrorOccurred:] | 0x1000583e0 | ABI v32@0:8@16@24 */

/* Address: 0x1000583e0 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_validationErrorOccurred_ | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parser:validationErrorOccurred:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_validationErrorOccurred_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000583f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe290)();
  return;
}



/* -[YYYWebDAVXMLParser parser:didStartElement:namespaceURI:qualifiedName:attributes:] | 0x10005845c | ABI v56@0:8@16@24@32@40@48 */

/* Address: 0x10005845c | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_didStartElement_namespaceURI_qualifiedName_attributes_ | bytes: 64 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser
   parser:didStartElement:namespaceURI:qualifiedName:attributes:]
   Original ABI encoding: v56@0:8@16@24@32@40@48
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::
     YYYWebDAVXMLParser__instance__parser_didStartElement_namespaceURI_qualifiedName_attributes_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
                    /* WARNING: Could not recover jumptable at 0x000100058498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe2e0)();
  return;
}



/* -[YYYWebDAVXMLParser parser:didEndElement:namespaceURI:qualifiedName:] | 0x10005883c | ABI v48@0:8@16@24@32@40 */

/* Address: 0x10005883c | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_didEndElement_namespaceURI_qualifiedName_ | bytes: 56 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser
   parser:didEndElement:namespaceURI:qualifiedName:]
   Original ABI encoding: v48@0:8@16@24@32@40
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::
     YYYWebDAVXMLParser__instance__parser_didEndElement_namespaceURI_qualifiedName_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
                    /* WARNING: Could not recover jumptable at 0x000100058870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe458)();
  return;
}



/* -[YYYWebDAVXMLParser parser:foundCharacters:] | 0x10005934c | ABI v32@0:8@16@24 */

/* Address: 0x10005934c | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_foundCharacters_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parser:foundCharacters:]
   Original ABI encoding: v32@0:8@16@24
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser_foundCharacters_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  objc_stub::appendString_(*(ID *)(param_1 + 8),param_4);
                    /* WARNING: Could not recover jumptable at 0x00010005936c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe830)();
  return;
}



/* -[YYYWebDAVXMLParser data] | 0x100059374 | ABI @16@0:8 */

/* Address: 0x100059374 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__data | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser data]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__data(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00010005937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cbe840)();
  return IVar1;
}



/* -[YYYWebDAVXMLParser setData:] | 0x1000593a0 | ABI v24@0:8@16 */

/* Address: 0x1000593a0 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setData_ | bytes: 32 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser setData:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setData_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000593bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe870)();
  return;
}



/* -[YYYWebDAVXMLParser uriLength] | 0x100059400 | ABI Q16@0:8 */

/* Address: 0x100059400 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__uriLength | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser uriLength]
   Original ABI encoding: Q16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

unsigned_long_long
YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__uriLength(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100059408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR_LAB_100cbe8a0)();
  return uVar1;
}



/* -[YYYWebDAVXMLParser setUriLength:] | 0x100059420 | ABI v24@0:8Q16 */

/* Address: 0x100059420 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setUriLength_ | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser setUriLength:]
   Original ABI encoding: v24@0:8Q16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setUriLength_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100059428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe8c0)();
  return;
}



/* -[YYYWebDAVXMLParser parser] | 0x100059440 | ABI @16@0:8 */

/* Address: 0x100059440 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser parser]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__parser(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100059448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cbe8d8)();
  return IVar1;
}



/* -[YYYWebDAVXMLParser setParser:] | 0x100059454 | ABI v24@0:8@16 */

/* Address: 0x100059454 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setParser_ | bytes: 24 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser setParser:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setParser_(ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100059468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe8f0)(param_1,param_3);
  return;
}



/* -[YYYWebDAVXMLParser directoryBucket] | 0x100059488 | ABI @16@0:8 */

/* Address: 0x100059488 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__directoryBucket | bytes: 12 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser directoryBucket]
   Original ABI encoding: @16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__directoryBucket(ID param_1,SEL param_2)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100059490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cbe910)();
  return IVar1;
}



/* -[YYYWebDAVXMLParser setDirectoryBucket:] | 0x1000594a8 | ABI v24@0:8@16 */

/* Address: 0x1000594a8 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setDirectoryBucket_ | bytes: 36 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser setDirectoryBucket:]
   Original ABI encoding: v24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance__setDirectoryBucket_
               (ID param_1,SEL param_2,ID param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001000594c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe928)();
  return;
}



/* -[YYYWebDAVXMLParser .cxx_destruct] | 0x100059530 | ABI v16@0:8 */

/* Address: 0x100059530 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance___cxx_destruct | bytes: 28 */

/* Recovered runtime selector: -[YYYWebDAVXMLParser .cxx_destruct]
   Original ABI encoding: v16@0:8
   Metadata-derived name; original source file and argument names are unavailable. */

void YYYWebDAVXMLParser::YYYWebDAVXMLParser__instance___cxx_destruct(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100059548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_LAB_100cbe970)();
  return;
}



/* +[YYYWebDAVXMLParser parserWithData:] | 0x100057eb0 | ABI @24@0:8@16 */

/* Address: 0x100057eb0 | YYYWebDAVXMLParser::YYYWebDAVXMLParser__class__parserWithData_ | bytes: 32 */

/* Recovered runtime selector: +[YYYWebDAVXMLParser parserWithData:]
   Original ABI encoding: @24@0:8@16
   Metadata-derived name; original source file and argument names are unavailable. */

ID YYYWebDAVXMLParser::YYYWebDAVXMLParser__class__parserWithData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100057ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  IVar1 = (*(code *)PTR_LAB_100cbe090)();
  return IVar1;
}


