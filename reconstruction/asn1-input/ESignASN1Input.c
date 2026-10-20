/* Original ESign instruction translations; retain OPENSSL-LICENSE.txt. */
#include "ESignASN1Input.h"
#include <limits.h>
_Static_assert(sizeof(long)==8 && sizeof(void *)==8,"Original LP64 ABI");
static void header_error(int reason,int line){ESignOriginal_100604c0c(13,114,reason,"asn1_lib.c",line);}
int ESignOriginal_10061cb98(const unsigned char **cursor,long *length,int *tag,int *xclass,long available){
    uint64_t maximum=(uint64_t)available;
    if(!maximum)goto error;
    const unsigned char *start=*cursor,*p=start;
    unsigned first=*p++;uint64_t value=first&31U,remaining=maximum-1;
    if(value==31){
        if(!remaining)goto error;
        value=0;remaining=maximum-2;
        for(;;){
            unsigned byte=*p++;value=(value<<7)|(byte&127U);
            if(!(byte&128U))break;
            if(!remaining)goto error;
            remaining--;
            if((int64_t)value>0xffffff)goto error;
        }
    }
    if(!remaining)goto error;
    *tag=(int32_t)value;*xclass=(int)(first&192U);
    if((int64_t)remaining<1)goto error;
    unsigned constructed=first&32U,inf=0,byte=*p++;
    uint64_t size;
    if(byte==128){
        *length=0;
        if(!constructed)goto error;
        size=0;inf=1;
    }else{
        unsigned count=byte&127U;size=count;
        if(byte&128U){
            if(count>8 || (int64_t)remaining<=(long)count)goto error;
            size=0;
            for(unsigned i=0;i<count;i++)size=(size<<8)|*p++;
            if(size>>63)goto error;
        }
        *length=(long)size;
    }
    if((int64_t)size>(int64_t)(maximum-(uint64_t)((uintptr_t)p-(uintptr_t)start))){
        header_error(155,147);constructed|=128U;
    }
    *cursor=p;return (int)(constructed|inf);
error:
    header_error(123,157);return 128;
}
static int stream_error(ESignBIOBuffer *buffer,int reason,int line){
    ESignOriginal_100604c0c(13,107,reason,"a_d2i_fp.c",line);
    ESignOriginal_1005fe850(buffer);return -1;
}
int ESignOriginal_10061300c(void *bio,ESignBIOBuffer **output){
    ESignBIOBuffer *buffer=ESignOriginal_1005fe7fc();
    if(!buffer){ESignOriginal_100604c0c(13,107,65,"a_d2i_fp.c",158);return -1;}
    ESignOriginal_100604e30();
    uint64_t offset=0,total=0;uint32_t nesting=0;
    for(;;){
        uint64_t available=total-offset;
        if(available<=8){
            uint64_t want=8-available;
            if(want>UINT64_MAX-total)return stream_error(buffer,65,168);
            if(!ESignOriginal_1005fe990(buffer,total+want))return stream_error(buffer,65,168);
            int n=ESignOriginal_1005fef88(bio,(void *)((uintptr_t)buffer->data+total),(int32_t)want);
            if(!available && n<0)return stream_error(buffer,142,173);
            if(n>0){
                uint64_t old=total;total+=(uint64_t)n;
                if(total<old)return stream_error(buffer,155,178);
                available=total-offset;
            }
        }
        const unsigned char *before=(const void *)((uintptr_t)buffer->data+offset),*cursor=before;
        long size;int tag,xclass;
        int flags=ESignOriginal_10061cb98(&cursor,&size,&tag,&xclass,(long)available);
        if(flags&128){
            if((ESignOriginal_100605198()&4095UL)!=155UL){ESignOriginal_1005fe850(buffer);return -1;}
            ESignOriginal_100604e30();
        }
        offset+=(uint64_t)(int64_t)(int32_t)((uint32_t)(uintptr_t)cursor-(uint32_t)(uintptr_t)before);
        if(flags&1){
            nesting++;
            if((int32_t)nesting<0)return stream_error(buffer,123,206);
            continue;
        }
        if(nesting && !size && !tag){
            if((int32_t)nesting<2)break;
            nesting--;continue;
        }
        uint64_t content=(uint64_t)size,available_content=total-offset;
        if(content>available_content){
            uint64_t want=content-available_content;
            if(want>INT_MAX || want>UINT64_MAX-total)return stream_error(buffer,155,226);
            uint64_t chunk_size=16384;
            while(want){
                uint64_t chunk=want>chunk_size?chunk_size:want;
                if(!ESignOriginal_1005fe990(buffer,total+chunk))return stream_error(buffer,65,239);
                uint64_t remaining=chunk;
                while(remaining){
                    int n=ESignOriginal_1005fef88(bio,(void *)((uintptr_t)buffer->data+total),(int32_t)remaining);
                    if(n<=0)return stream_error(buffer,142,247);
                    total+=(uint64_t)n;remaining-=(uint64_t)n;
                }
                if(chunk_size<0x3fffffffU)chunk_size<<=1;
                want-=chunk;
            }
            content=(uint64_t)size;
        }
        uint64_t old=offset;offset+=content;
        if(offset<old)return stream_error(buffer,155,262);
        if((int32_t)nesting<=0)break;
    }
    if(offset>INT_MAX)return stream_error(buffer,155,274);
    *output=buffer;return (int)offset;
}
void *ESignOriginal_100613354(const void *item,void *bio,void **output){
    ESignBIOBuffer *buffer=NULL;
    int length=ESignOriginal_10061300c(bio,&buffer);
    void *result=NULL;
    if(length>=0){
        const unsigned char *cursor=buffer->data;
        result=ESignOriginal_100619304(output,&cursor,(long)length,item);
    }
    if(buffer)ESignOriginal_1005fe850(buffer);
    return result;
}
void *ESignOriginal_100619304(void **output,const unsigned char **cursor,long length,const void *item){
    void *temporary=NULL;
    void **value=output?output:&temporary;
    /* Only the first byte is initialized in the original 32-byte TLC. */
    unsigned char context[32];context[0]=0;
    int result=ESignOriginal_10061955c(value,cursor,length,item,-1,0,0,context,0);
    return result>=1?*value:NULL;
}
