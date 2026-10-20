#import <Foundation/Foundation.h>
#include "ESignCMSContent.h"
#include <string.h>
static NSMutableDictionary *labels;
static NSMutableArray *effects;
static NSDictionary *spec;
static void *typePointer;
static void *Named(NSString *name){void *p=calloc(1,256);if(!p)abort();labels[@((uintptr_t)p)]=name;return p;}
static id Label(const void *p){if(!p)return [NSNull null];id name=labels[@((uintptr_t)p)];if(!name)abort();return name;}
static void Store(void *p,const void *value){memcpy(p,&value,8);}
static void *Load(const void *p){void *v;memcpy(&v,p,8);return v;}
int ESignOriginal_1005b3138(const void *p){if(p!=typePointer)abort();[effects addObject:@{@"call":@"OBJ_obj2nid",@"object":@"type"}];return [spec[@"nid"] intValue];}
void ESignOriginal_100604c0c(int library,int function,int reason,const char *file,int line){
    [effects addObject:@{@"call":@"error",@"library":@(library),@"function":@(function),@"reason":@(reason),@"file":@(file),@"line":@(line)}];
}
static NSDictionary *Evaluate(NSDictionary *input){
    spec=input;labels=[NSMutableDictionary dictionary];effects=[NSMutableArray array];NSMutableDictionary *fields=[NSMutableDictionary dictionary];
    void *cms=Named(@"cms");typePointer=Named(@"type");void *container=Named(@"container"),*content=Named(@"content"),*replacement=Named(@"replacement");
    Store(cms,typePointer);Store((char *)cms+8,container);fields[@"cms.content"]=@((uintptr_t)((char *)cms+8));int32_t typ=[spec[@"other_type"] intValue];memcpy(container,&typ,4);
    for(NSNumber *n in @[@8,@16,@24,@40]){
        int offset=n.intValue;void *nested=Named([NSString stringWithFormat:@"nested-%d",offset]);Store((char *)container+offset,nested);fields[[NSString stringWithFormat:@"container[%d]",offset]]=@((uintptr_t)((char *)container+offset));
        for(NSNumber *v in @[@8,@16]){int slot=v.intValue;NSString *name=[NSString stringWithFormat:@"nested-%d.slot-%d",offset,slot];fields[name]=@((uintptr_t)((char *)nested+slot));Store((char *)nested+slot,content);}
    }
    for(NSString *name in fields)labels[fields[name]]=name;
    if(spec[@"null_slot"])Store((void *)[fields[spec[@"null_slot"]] unsignedLongLongValue],NULL);
    NSMutableDictionary *before=[NSMutableDictionary dictionary];for(NSString *name in fields)before[name]=@((uintptr_t)Load((void *)[fields[name] unsignedLongLongValue]));
    ESignCMSASN1String **slot=ESignOriginal_10062edd8(cms);id slotName=[NSNull null];for(NSString *name in fields)if((void *)[fields[name] unsignedLongLongValue]==(void *)slot)slotName=name;
    if(slot&&slotName==[NSNull null])abort();id old=slot?Label(Load(slot)):[NSNull null];if(slot)Store(slot,replacement);
    NSMutableArray *mutated=[NSMutableArray array];
    // Preserve the fixture field insertion order rather than NSDictionary order.
    NSMutableArray *ordered=[NSMutableArray arrayWithObject:@"cms.content"];
    for(NSNumber *n in @[@8,@16,@24,@40]){[ordered addObject:[NSString stringWithFormat:@"container[%d]",n.intValue]];for(NSNumber *v in @[@8,@16])[ordered addObject:[NSString stringWithFormat:@"nested-%d.slot-%d",n.intValue,v.intValue]];}
    for(NSString *name in ordered)if((uintptr_t)Load((void *)[fields[name] unsignedLongLongValue])!=[before[name] unsignedLongLongValue])[mutated addObject:name];
    return @{@"slot":slotName,@"before":old,@"after":slot?Label(Load(slot)):[NSNull null],@"mutated_fields":mutated,@"effects":effects};
}
int main(int argc,const char **argv){@autoreleasepool{
    if(argc!=2)return 2;NSArray *fixtures=[NSJSONSerialization JSONObjectWithData:[NSData dataWithContentsOfFile:@(argv[1])] options:0 error:NULL];NSMutableArray *results=[NSMutableArray array];
    for(NSDictionary *f in fixtures)[results addObject:@{@"input":f[@"input"],@"result":Evaluate(f[@"input"])}];
    NSData *json=[NSJSONSerialization dataWithJSONObject:results options:NSJSONWritingSortedKeys error:NULL];if(!json)return 3;fwrite(json.bytes,1,json.length,stdout);fputc('\n',stdout);
}return 0;}
