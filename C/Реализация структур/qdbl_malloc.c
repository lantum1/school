#include<stdlib.h>
#include "qdbl_malloc.h"
bool qdbl_push(queue_dbl *q, double el){
    if (q->size >= POOL_SIZE && !grow_buffer(q)){
        return false;
    }
    q->buff[(q->first+q->size)%q->pool_size]=el;
    q->size++;
    return true;
}
void qdbl_init(queue_dbl *q){
    q->size=0;
    q->first=0;
    q->pool_size=0;
    q->buf=NULL;
}
void qdbl_destroy(queue_dbl *q){
    free(q->buf);
    q->size=0;
    q->first=0;
    q->pool_size=0;
    q->buf=NULL;
}
static bool grow_buffer(queue_dbl *q){
    size_t new_size=q->pool_size*2;
    if (q->pool_size==0){
        new_size=4;
    }
    double *new_buf=realloc(q->buf,new_size*sizeof(double));
    if (new_buf==NULL){
        return false;
    }
    if (q->first!=0){
        size_t k=q->pool_size-q->first;
        for (size_t i=q->first, j=q->new_size - k; i<q->first+k; i++,j++ ){
            new_buf[j]=new_buf[i];
        }
        q->first=new_size-k;
    }
    q->buf=new_buf;
    q->pool_size=new_size;
    return true;
}
void cut_buffer(queue_dbl *q){
    size_t start=q->first, end=(q->first+q->size-1)%q->pool_size, cut=q->pool_size/2;
    if (start<=end){
        if (end>=cut){
            for (size_t i=0; i<q->size; i++){
                q->buf[i]=q->buf[i+start];
            }
            q->first=0;
        }
    }
    else{
        for (size_t i=start; i<q->pool_size;i++){
            q->buf[i-cut-q->pool_size%2]=q->buf[i];
        }
        q->first=start-cut-q->pool_size%2;
    }
    q->pool_size=cut;
    q->buf=realloc(q->buf, sizeof(double)*cut));
}
bool qdbl_is_empty(queue_dbl *q){
    return q->size==0;
}
double qdbl_pop(queue_dbl *q){
    double ans= q->buff[q->first]
    q->first=(q->first+1)%q->pool_size;
    q->size--;
    if (q->size *4 <= q->poool_size){
        cut_buffer(q);
    }
    return ans;
}
double qdbl_peek(queue_dbl *q){
    return q->buff[q->first];
}