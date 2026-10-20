/* Original ESign instruction translations. Preserve OPENSSL-LICENSE.txt. */
#include "ESignBIOInput.h"
#include <string.h>
_Static_assert(sizeof(ESignBIO)==112 && offsetof(ESignBIO,pointer)==48 && offsetof(ESignBIO,references)==72 && offsetof(ESignBIO,ex_data)==96,"Original BIO ABI");
_Static_assert(sizeof(ESignBIOMethod)==80 && offsetof(ESignBIOMethod,ctrl)==48 && offsetof(ESignBIOMethod,create)==56,"Original BIO_METHOD ABI");
_Static_assert(sizeof(ESignBIOBuffer)==24,"Original BUF_MEM ABI");
ESignBIOMethod ESignOriginalBIOMemoryMethod={1025,"memory buffer",ESignOriginal_1005ffb0c,ESignOriginal_1005ffbc8,ESignOriginal_1005ffc7c,ESignOriginal_1005ffcac,ESignOriginal_1005ffd40,ESignOriginal_1005ffea0,ESignOriginal_1005ffed8,NULL};
void *ESignOriginal_1005ffa5c(void){return &ESignOriginalBIOMemoryMethod;}
void *ESignOriginal_1005fedf0(const void *pointer){
    ESignBIOMethod *method=(ESignBIOMethod *)pointer;
    ESignBIO *bio=ESignOriginal_1005b11cc(112,"bio_lib.c",70);
    if(!bio){ESignOriginal_100604c0c(32,108,65,"bio_lib.c",72);return NULL;}
    bio->callback=NULL;bio->callback_arg=NULL;bio->method=method;bio->initialized=0;
    bio->shutdown=1;bio->flags=0;bio->retry_reason=0;bio->number=0;
    bio->next=NULL;bio->previous=NULL;bio->pointer=NULL;bio->references=1;
    bio->num_read=0;bio->num_write=0;
    ESignOriginal_1005b1bdc(0,bio,bio->ex_data);
    if(method->create && !method->create(bio)){
        ESignOriginal_1005b1c68(0,bio,bio->ex_data);ESignOriginal_1005b1658(bio);return NULL;
    }
    return bio;
}
int ESignOriginal_1005feebc(void *pointer){
    ESignBIO *bio=pointer;if(!bio)return 0;
    int result=ESignOriginal_1005b1044(&bio->references,-1,21,"bio_lib.c",114);
    if(result>0)return 1;
    if(bio->callback){result=(int)bio->callback(bio,1,NULL,0,0,1);if(result<=0)return result;}
    ESignOriginal_1005b1c68(0,bio,bio->ex_data);
    if(bio->method && bio->method->destroy)bio->method->destroy(bio);
    ESignOriginal_1005b1658(bio);return 1;
}
void ESignOriginal_1005fef5c(void *pointer,int flags){((ESignBIO *)pointer)->flags&=~(uint32_t)flags;}
void ESignOriginal_1005fef78(void *pointer,int flags){((ESignBIO *)pointer)->flags|=(uint32_t)flags;}
static int IO(void *pointer,void *data,int length,int writing){
    ESignBIO *bio=pointer;int function=writing?113:111;int line=writing?230:196;
    if(!bio && writing)return 0;
    if(!bio || !bio->method || (writing?!bio->method->write:!bio->method->read)){
        ESignOriginal_100604c0c(32,function,121,"bio_lib.c",line);return -2;
    }
    ESignBIOCallback callback=bio->callback;int command=writing?3:2,result;
    if(callback){result=(int)callback(bio,command,data,length,0,1);if(result<=0)return result;}
    if(!bio->initialized){ESignOriginal_100604c0c(32,function,120,"bio_lib.c",writing?239:206);return -2;}
    result=writing?bio->method->write(bio,data,length):bio->method->read(bio,data,length);
    if(result>0){if(writing)bio->num_write+=(uint64_t)result;else bio->num_read+=(uint64_t)result;}
    if(callback)result=(int)callback(bio,command|128,data,length,0,(long)result);
    return result;
}
int ESignOriginal_1005ff090(void *bio,const void *input,int length){return IO(bio,(void *)input,length,1);}
int ESignOriginal_1005fef88(void *bio,void *output,int length){return IO(bio,output,length,0);}
long ESignOriginal_1005ff4e0(void *pointer,int command,long number,void *arg){
    ESignBIO *bio=pointer;if(!bio)return 0;
    if(!bio->method || !bio->method->ctrl){ESignOriginal_100604c0c(32,103,121,"bio_lib.c",349);return -2;}
    ESignBIOCallback callback=bio->callback;long result;
    if(callback){result=callback(bio,6,arg,command,number,1);if(result<=0)return result;}
    result=bio->method->ctrl(bio,command,number,arg);
    if(callback)result=callback(bio,134,arg,command,number,result);
    return result;
}
ESignBIOBuffer *ESignOriginal_1005fe7fc(void){
    ESignBIOBuffer *buffer=ESignOriginal_1005b11cc(24,"buffer.c",74);
    if(!buffer){ESignOriginal_100604c0c(7,101,65,"buffer.c",76);return NULL;}
    buffer->length=0;buffer->data=NULL;buffer->capacity=0;return buffer;
}
void ESignOriginal_1005fe850(ESignBIOBuffer *buffer){
    if(!buffer)return;
    if(buffer->data){ESignOriginal_1005b2bb8(buffer->data,buffer->capacity);ESignOriginal_1005b1658(buffer->data);}
    ESignOriginal_1005b1658(buffer);
}
int ESignOriginal_1005fe990(ESignBIOBuffer *buffer,size_t length){
    size_t old=buffer->length;
    if(old>=length){memset((void *)((uintptr_t)buffer->data+length),0,old-length);buffer->length=length;return (int)length;}
    if(buffer->capacity>=length){memset((void *)((uintptr_t)buffer->data+old),0,length-old);buffer->length=length;return (int)length;}
    if(length>=0x5ffffffdU){ESignOriginal_100604c0c(7,105,65,"buffer.c",150);return 0;}
    size_t capacity=((uint32_t)length+3U)/3U*4U;
    unsigned char *data=buffer->data?ESignOriginal_1005b14c4(buffer->data,buffer->capacity,capacity,"buffer.c",157):ESignOriginal_1005b11cc(capacity,"buffer.c",155);
    if(!data){ESignOriginal_100604c0c(7,105,65,"buffer.c",159);return 0;}
    buffer->data=data;buffer->capacity=capacity;
    old=buffer->length;memset(data+old,0,length-old);buffer->length=length;return (int)length;
}
int ESignOriginal_1005ffea0(void *pointer){
    ESignBIO *bio=pointer;ESignBIOBuffer *buffer=ESignOriginal_1005fe7fc();if(!buffer)return 0;
    bio->initialized=1;bio->shutdown=1;bio->number=-1;bio->pointer=buffer;return 1;
}
int ESignOriginal_1005ffed8(void *pointer){
    ESignBIO *bio=pointer;if(!bio)return 0;
    if(bio->shutdown && bio->initialized && bio->pointer){
        ESignBIOBuffer *buffer=bio->pointer;if(bio->flags&512)buffer->data=NULL;
        ESignOriginal_1005fe850(buffer);bio->pointer=NULL;
    }return 1;
}
int ESignOriginal_1005ffb0c(void *pointer,const void *input,int length){
    ESignBIO *bio=pointer;
    if(!input){ESignOriginal_100604c0c(32,117,115,"bss_mem.c",181);return -1;}
    if(bio->flags&512){ESignOriginal_100604c0c(32,117,126,"bss_mem.c",186);return -1;}
    ESignBIOBuffer *buffer=bio->pointer;ESignOriginal_1005fef5c(bio,15);if(!length)return 0;
    int32_t old=(int32_t)buffer->length,desired=(int32_t)((uint32_t)old+(uint32_t)length);
    if(ESignOriginal_1005fe990(buffer,(size_t)(int64_t)desired)!=desired)return -1;
    memcpy((void *)((uintptr_t)buffer->data+(intptr_t)old),input,(size_t)(int64_t)length);return length;
}
int ESignOriginal_1005ffbc8(void *pointer,void *output,int length){
    ESignBIO *bio=pointer;ESignBIOBuffer *buffer=bio->pointer;ESignOriginal_1005fef5c(bio,15);
    int result=(length>=0 && buffer->length<(uint64_t)length)?(int32_t)buffer->length:length;
    if(output && result>0){
        memcpy(output,buffer->data,(size_t)result);buffer->length-=(uint64_t)result;
        if(bio->flags&512)buffer->data+=result;else memmove(buffer->data,buffer->data+result,(size_t)buffer->length);
    }else if(!buffer->length){result=bio->number;if(result)ESignOriginal_1005fef78(bio,9);}
    return result;
}
int ESignOriginal_1005ffc7c(void *bio,const char *input){return ESignOriginal_1005ffb0c(bio,input,(int)strlen(input));}
int ESignOriginal_1005ffcac(void *pointer,char *output,int length){
    ESignBIO *bio=pointer;ESignBIOBuffer *buffer=bio->pointer;ESignOriginal_1005fef5c(bio,15);
    int32_t j=(int32_t)buffer->length,limit=(int32_t)((uint32_t)length-1U);if(j>=length)j=limit;
    if(j<1){*output=0;return 0;}
    int i=0;while(i<j){unsigned char byte=buffer->data[i++];if(byte==10)break;}
    int result=ESignOriginal_1005ffbc8(bio,output,i);if(result>0)output[result]=0;return result;
}
long ESignOriginal_1005ffd40(void *pointer,int command,long number,void *arg){
    ESignBIO *bio=pointer;ESignBIOBuffer *buffer=bio->pointer;
    switch(command){
        case 1:
            if(buffer->data){if(bio->flags&512){buffer->data=(void *)((uintptr_t)buffer->data+buffer->length-buffer->capacity);buffer->length=buffer->capacity;}else{memset(buffer->data,0,(size_t)buffer->capacity);buffer->length=0;}}return 1;
        case 2:return buffer->length==0;
        case 3:if(arg)*(void **)arg=buffer->data;return (long)buffer->length;
        case 8:return bio->shutdown;
        case 9:bio->shutdown=(int32_t)number;return 1;
        case 10:return (long)buffer->length;
        case 11:case 12:return 1;
        case 114:ESignOriginal_1005ffed8(bio);bio->shutdown=(int32_t)number;bio->pointer=arg;return 1;
        case 115:if(arg)*(void **)arg=buffer;return 1;
        case 130:bio->number=(int32_t)number;return 1;
        default:return 0;
    }
}
