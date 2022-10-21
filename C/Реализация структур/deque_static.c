#include<stdlib.h>
#include "deque_static.h"
bool qdbl_push_back(queue_dbl *q, double el){
    if (q->size >= POOL_SIZE){
        return false;
    }
    q->buff[(q->first+q->size)%POOL_SIZE]=el;
    q->size++;
    return true;
}
bool qdbl_push_front(queue_dbl *q, double el){
    if (q->size >= POOL_SIZE){
        return false;
    }
    if (q->first!=0){
        q->first--;
    }
    else{
        q->first=POOL_SIZE-1;
    }
    q->buff[q->first]=el;
    q->size++;
    return true;
}
void qdbl_init(queue_dbl *q){
    q->size=0;
    q->first=0;
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
double qdbl_pop_front(queue_dbl *q){
    q->first++;
    if (q->first==POOL_SIZE){
        q->first=0;
        return q->buff[POOL_SIZE-1];
    }
    q->size--;
    return q->buff[(q->first)-1];
}
double qdbl_pop_back(queue_dbl *q){
    q->size--;
    return q->buff[(q->first+q->size)%POOL_SIZE];
}
double qdbl_peek_front(queue_dbl *q){
    return q->buff[q->first];
}
double qdbl_peek_back(queue_dbl *q){
    return q->buff[((q->first+q->size-1)%POOL_SIZE)];
}