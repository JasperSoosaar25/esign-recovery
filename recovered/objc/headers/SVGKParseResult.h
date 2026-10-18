// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c93528
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface SVGKParseResult : NSObject
// ivar libXMLFailed encoding=B offset=8
// ivar parsedDocument encoding=@"SVGDocument" offset=16
// ivar rootOfSVGTree encoding=@"SVGSVGElement" offset=24
// ivar namespacesEncountered encoding=@"NSMutableDictionary" offset=32
// ivar warnings encoding=@"NSMutableArray" offset=40
// ivar errorsRecoverable encoding=@"NSMutableArray" offset=48
// ivar errorsFatal encoding=@"NSMutableArray" offset=56
// ivar _parseProgressFractionApproximate encoding=d offset=64
// property warnings attributes=T@"NSMutableArray",&,N,Vwarnings
// property errorsRecoverable attributes=T@"NSMutableArray",&,N,VerrorsRecoverable
// property errorsFatal attributes=T@"NSMutableArray",&,N,VerrorsFatal
// property libXMLFailed attributes=TB,N,VlibXMLFailed
// property parseProgressFractionApproximate attributes=Td,N,V_parseProgressFractionApproximate
// property rootOfSVGTree attributes=T@"SVGSVGElement",&,N,VrootOfSVGTree
// property parsedDocument attributes=T@"SVGDocument",&,N,VparsedDocument
// property namespacesEncountered attributes=T@"NSMutableDictionary",&,N,VnamespacesEncountered
// IMP 0x10057fa04 | @16@0:8
- (id)init;
// IMP 0x10057fafc | @16@0:8
- (id)description;
// IMP 0x10057fd18 | v24@0:8@16
- (void)addSourceError:(id)arg0;
// IMP 0x10057fdc8 | v24@0:8@16
- (void)addParseWarning:(id)arg0;
// IMP 0x10057fe78 | v24@0:8@16
- (void)addParseErrorRecoverable:(id)arg0;
// IMP 0x10057ff28 | v24@0:8@16
- (void)addParseErrorFatal:(id)arg0;
// IMP 0x10057ffd8 | v24@0:8@16
- (void)addSAXError:(id)arg0;
// IMP 0x1005800b0 | B16@0:8
- (BOOL)libXMLFailed;
// IMP 0x1005800b8 | v20@0:8B16
- (void)setLibXMLFailed:(BOOL)arg0;
// IMP 0x1005800c0 | @16@0:8
- (id)parsedDocument;
// IMP 0x1005800c8 | v24@0:8@16
- (void)setParsedDocument:(id)arg0;
// IMP 0x1005800d4 | @16@0:8
- (id)rootOfSVGTree;
// IMP 0x1005800dc | v24@0:8@16
- (void)setRootOfSVGTree:(id)arg0;
// IMP 0x1005800e8 | @16@0:8
- (id)namespacesEncountered;
// IMP 0x1005800f0 | v24@0:8@16
- (void)setNamespacesEncountered:(id)arg0;
// IMP 0x1005800fc | @16@0:8
- (id)warnings;
// IMP 0x100580104 | v24@0:8@16
- (void)setWarnings:(id)arg0;
// IMP 0x100580110 | @16@0:8
- (id)errorsRecoverable;
// IMP 0x100580118 | v24@0:8@16
- (void)setErrorsRecoverable:(id)arg0;
// IMP 0x100580124 | @16@0:8
- (id)errorsFatal;
// IMP 0x10058012c | v24@0:8@16
- (void)setErrorsFatal:(id)arg0;
// IMP 0x100580138 | d16@0:8
- (double)parseProgressFractionApproximate;
// IMP 0x100580140 | v24@0:8d16
- (void)setParseProgressFractionApproximate:(double)arg0;
// IMP 0x100580148 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
