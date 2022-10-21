#include<stdlib.h>
#include "vint.h"
bool vint_init(vector_int *v, size_t size){
    v->size=size;
    v->buf=malloc(size*sizeof(double));
    if (v->buf==NULL){
        v->size=0;
        return false;
    }
    for (size_t i=0; i<size; i++){
        v->buf[i]=0;
    }
    return true;
}

void vint_destroy(vector_int *v){
    free(v->buf);
    v->buf=NULL;
    v->size=0;
}

size_t vint_get_size(vector_int *v){
    return v->size;
}

bool vint_set_size(vector_int *v, size_t newsize){
    int *buf_temp = realloc(v->buf,newsize*sizeof(double));
    if (buf_temp!=NULL){
        v->buf=buf_temp;
        for (size_t i=(v->size)+1; i<newsize; i++){
            v->buf[i]=0;
        }
        v->size=newsize;
        return true;
    }
    return false;
}

double vint_get(vector_int *v, size_t i){
    return v->buf[i];
}

bool vint_set(vector_int *v, size_t i, int newval){
    if (i>=v->size && false==vint_set_size(v,i+1)){
        return false;
    }
    v->buf[i]=newval;
    return true;
}

bool vint_push(vector_int *v, int newval){
    if (false==vint_set_size(v,(v->size)+1)){
        return false;
    }
    v->buf[(v->size)-1]=newval;
    return true;
}

void vint_pop(vector_int *v){
    vint_set_size(v,(v->size)-1);
}