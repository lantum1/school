#include<stdlib.h>
#include "qdbl_static.h"
bool qdbl_push(queue_dbl *q, double el){
    if (q->size >= POOL_SIZE){
        return false;
    }
    q->buff[(q->first+q->size)%POOL_SIZE]=el;
    q->size++;
    return true;
}
void qdbl_init(queue_dbl *q){
    q->size=0;
    q->first=1;
    for (size_t i; i< POOL_SIZE; i++){
        q->buf[i]=0;
    }
}
void qdbl_destroy(queue_dbl *q){
    q->size=0;
    q->first=0;
}
bool qdbl_is_empty(queue_dbl *q){
    return q->size==0;
}
void qdbl_init(queue_dbl *q){
    q->size=0;
}
double qdbl_pop(queue_dbl *q){
    double ans= q->buff[q->first]
    q->first=(q->first+1)%POOL_SIZE;
    q->size--;
    return ans;
}
double qdbl_peek(queue_dbl *q){
    return q->buff[q->first];
}