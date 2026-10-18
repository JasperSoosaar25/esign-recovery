// METADATA-DERIVED DECLARATIONS — NOT THE ORIGINAL SOURCE HEADER.
// ESign 5.0.2; class VM address 0x100c98890
// Type names are decoded from ABI encodings; inspect raw JSON for ambiguity.
#import <UIKit/UIKit.h>

@interface CDMultiFileVisitor : CDTextClassDumpVisitor
// ivar _outputPath encoding=@"NSString" offset=8
// ivar _frameworkNamesByClassName encoding=@"NSDictionary" offset=16
// ivar _referencedClassNames encoding=@"NSMutableSet" offset=24
// ivar _referencedProtocolNames encoding=@"NSMutableSet" offset=32
// ivar _referenceLocation encoding=Q offset=40
// ivar _frameworkNamesByProtocolName encoding=@"NSDictionary" offset=48
// ivar _weaklyReferencedProtocolNames encoding=@"NSMutableSet" offset=56
// property frameworkNamesByClassName attributes=T@"NSDictionary",&,V_frameworkNamesByClassName
// property frameworkNamesByProtocolName attributes=T@"NSDictionary",&,V_frameworkNamesByProtocolName
// property referenceLocation attributes=TQ,V_referenceLocation
// property referencedClassNames attributes=T@"NSMutableSet",R,V_referencedClassNames
// property referencedProtocolNames attributes=T@"NSMutableSet",R,V_referencedProtocolNames
// property weaklyReferencedProtocolNames attributes=T@"NSMutableSet",R,V_weaklyReferencedProtocolNames
// property referencedClassNamesSortedByName attributes=T@"NSArray",R,N
// property referencedProtocolNamesSortedByName attributes=T@"NSArray",R,N
// property weaklyReferencedProtocolNamesSortedByName attributes=T@"NSArray",R,N
// property referenceString attributes=T@"NSString",R,N
// property outputPath attributes=T@"NSString",&,V_outputPath
// property hash attributes=TQ,R
// property superclass attributes=T#,R
// property description attributes=T@"NSString",R,C
// property debugDescription attributes=T@"NSString",R,C
// IMP 0x1006f1de8 | @16@0:8
- (id)init;
// IMP 0x1006f1ea0 | v16@0:8
- (void)willBeginVisiting;
// IMP 0x1006f1f6c | v24@0:8@16
- (void)willVisitClass:(id)arg0;
// IMP 0x1006f2120 | v24@0:8@16
- (void)didVisitClass:(id)arg0;
// IMP 0x1006f2314 | v24@0:8@16
- (void)willVisitCategory:(id)arg0;
// IMP 0x1006f24c8 | v24@0:8@16
- (void)didVisitCategory:(id)arg0;
// IMP 0x1006f26b0 | v24@0:8@16
- (void)willVisitProtocol:(id)arg0;
// IMP 0x1006f27d8 | v24@0:8@16
- (void)didVisitProtocol:(id)arg0;
// IMP 0x1006f297c | v32@0:8@16@24
- (void)typeController:(id)arg0 didReferenceClassName:(id)arg1;
// IMP 0x1006f2984 | v32@0:8@16@24
- (void)typeController:(id)arg0 didReferenceProtocolNames:(id)arg1;
// IMP 0x1006f298c | @24@0:8@16
- (id)frameworkForClassName:(id)arg0;
// IMP 0x1006f2a30 | @24@0:8@16
- (id)frameworkForProtocolName:(id)arg0;
// IMP 0x1006f2a9c | @24@0:8@16
- (id)importStringForClassName:(id)arg0;
// IMP 0x1006f2b44 | @24@0:8@16
- (id)importStringForProtocolName:(id)arg0;
// IMP 0x1006f2c10 | @16@0:8
- (id)referencedClassNamesSortedByName;
// IMP 0x1006f2c7c | @16@0:8
- (id)referencedProtocolNamesSortedByName;
// IMP 0x1006f2ce8 | @16@0:8
- (id)weaklyReferencedProtocolNamesSortedByName;
// IMP 0x1006f2d54 | v24@0:8@16
- (void)addReferenceToClassName:(id)arg0;
// IMP 0x1006f2da4 | v24@0:8@16
- (void)removeReferenceToClassName:(id)arg0;
// IMP 0x1006f2dfc | v24@0:8@16
- (void)addReferencesToProtocolNamesInArray:(id)arg0;
// IMP 0x1006f2e4c | v24@0:8@16
- (void)addWeakReferencesToProtocolNamesInArray:(id)arg0;
// IMP 0x1006f2e9c | v16@0:8
- (void)removeAllClassNameProtocolNameReferences;
// IMP 0x1006f2f10 | v16@0:8
- (void)createOutputPathIfNecessary;
// IMP 0x1006f2fe0 | @16@0:8
- (id)referenceString;
// IMP 0x1006f3288 | v16@0:8
- (void)buildClassFrameworks;
// IMP 0x1006f3360 | v16@0:8
- (void)generateStructureHeader;
// IMP 0x1006f3574 | @16@0:8
- (id)outputPath;
// IMP 0x1006f3584 | v24@0:8@16
- (void)setOutputPath:(id)arg0;
// IMP 0x1006f3590 | @16@0:8
- (id)frameworkNamesByClassName;
// IMP 0x1006f35a0 | v24@0:8@16
- (void)setFrameworkNamesByClassName:(id)arg0;
// IMP 0x1006f35ac | @16@0:8
- (id)frameworkNamesByProtocolName;
// IMP 0x1006f35bc | v24@0:8@16
- (void)setFrameworkNamesByProtocolName:(id)arg0;
// IMP 0x1006f35c8 | Q16@0:8
- (unsigned long long)referenceLocation;
// IMP 0x1006f35d8 | v24@0:8Q16
- (void)setReferenceLocation:(unsigned long long)arg0;
// IMP 0x1006f35e8 | @16@0:8
- (id)referencedClassNames;
// IMP 0x1006f35f8 | @16@0:8
- (id)referencedProtocolNames;
// IMP 0x1006f3608 | @16@0:8
- (id)weaklyReferencedProtocolNames;
// IMP 0x1006f3618 | v16@0:8
// - .cxx_destruct (raw encoding: v16@0:8)
@end
